#include "protos.h"

void f_004331fc(void) /* sub_4331FC */
{
    FN_ENTER(0x004331fc);
    /* 004331fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331fd: mov edi, ecx */ r_edi = r_ecx;
    /* 004331ff: mov ecx, edi */ r_ecx = r_edi;
    /* 00433201: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x433206u); f_0043322c();
    /* 00433206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433208: je 0x433213 */ if (fZ) goto L_00433213;
L_0043320a:; BB(0x0043320a);
    /* 0043320a: mov ecx, edi */ r_ecx = r_edi;
    /* 0043320c: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x433211u); f_0043324c();
    /* 00433211: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00433212: ret  */ FN_RET(0x004331fc); r_esp += 4; return;
L_00433213:; BB(0x00433213);
    /* 00433213: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00433215: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00433217: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0043321e: mov ecx, edi */ r_ecx = r_edi;
    /* 00433220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433221: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x433227u); call_ind(t); }
    /* 00433227: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00433228: ret  */ FN_RET(0x004331fc); r_esp += 4; return;
}

void f_0043322c(void) /* sub_43322C */
{
    FN_ENTER(0x0043322c);
    /* 0043322c: mov eax, dword ptr [ecx + 0x6b4] */ r_eax = R32((u32)(r_ecx+0x6b4u));
    /* 00433232: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00433234: jle 0x433239 */ if ((fZ||fS!=fO)) goto L_00433239;
L_00433236:; BB(0x00433236);
    /* 00433236: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00433238: ret  */ FN_RET(0x0043322c); r_esp += 4; return;
L_00433239:; BB(0x00433239);
    /* 00433239: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0043323f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00433241: jne 0x433236 */ if (!fZ) goto L_00433236;
L_00433243:; BB(0x00433243);
    /* 00433243: mov eax, 1 */ r_eax = 0x1u;
    /* 00433248: ret  */ FN_RET(0x0043322c); r_esp += 4; return;
}

void f_0043324c(void) /* sub_43324C */
{
    FN_ENTER(0x0043324c);
    /* 0043324c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043324d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00433250: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00433252: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00433259: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043325c: je 0x4332bc */ if (fZ) goto L_004332bc;
L_0043325e:; BB(0x0043325e);
    /* 0043325e: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433261: je 0x4332bc */ if (fZ) goto L_004332bc;
L_00433263:; BB(0x00433263);
    /* 00433263: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433266: je 0x433305 */ if (fZ) goto L_00433305;
L_0043326c:; BB(0x0043326c);
    /* 0043326c: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043326f: je 0x433305 */ if (fZ) goto L_00433305;
L_00433275:; BB(0x00433275);
    /* 00433275: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433278: je 0x4332c1 */ if (fZ) goto L_004332c1;
L_0043327a:; BB(0x0043327a);
    /* 0043327a: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043327d: je 0x4332c1 */ if (fZ) goto L_004332c1;
L_0043327f:; BB(0x0043327f);
    /* 0043327f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00433281: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00433283: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00433285: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433287: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x43328du); call_ind(t); }
    /* 0043328d: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00433291: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00433297: mov byte ptr [esp], 0x13 */ W8((u32)(r_esp), 0x13u);
    /* 0043329b: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 004332a0: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 004332a5: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004332aa: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004332af: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 004332b4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004332b7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4332bcu); f_008003e0();
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x0043324c); r_esp += 4; return;
L_004332c1:; BB(0x004332c1);
    /* 004332c1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004332c3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004332c5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004332c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004332c9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4332cfu); call_ind(t); }
    /* 004332cf: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004332d3: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 004332d9: mov byte ptr [esp + 8], 0x13 */ W8((u32)(r_esp+0x8u), 0x13u);
    /* 004332de: mov edx, 0x1f */ r_edx = 0x1fu;
    /* 004332e3: mov byte ptr [esp + 9], 2 */ W8((u32)(r_esp+0x9u), 0x2u);
    /* 004332e8: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 004332ed: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 004332f2: mov word ptr [esp + 0xe], bx */ W16((u32)(r_esp+0xeu), (u16)r_ebx);
    /* 004332f7: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 004332fb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x433300u); f_008003e0();
    /* 00433300: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00433303: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00433304: ret  */ FN_RET(0x0043324c); r_esp += 4; return;
L_00433305:; BB(0x00433305);
    /* 00433305: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0043330b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043330e: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 00433314: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x433319u); f_00520e6c();
    /* 00433319: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0043331f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433321: je 0x43332c */ if (fZ) goto L_0043332c;
L_00433323:; BB(0x00433323);
    /* 00433323: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0043332a: jmp 0x433333 */ goto L_00433333;
L_0043332c:; BB(0x0043332c);
    /* 0043332c: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_00433333:; BB(0x00433333);
    /* 00433333: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 00433336: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00433339: ja 0x433473 */ if ((!fC&&!fZ)) goto L_00433473;
L_0043333f:; BB(0x0043333f);
    /* 0043333f: mov edx, dword ptr [edx*4 + 0x8fca60] */ r_edx = R32((u32)(r_edx*4+0x8fca60u));
    /* 00433346: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_00433348(void)
{
    FN_ENTER(0x00433348);
    goto L_00433348;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x00433348); r_esp += 4; return;
L_0043330b:; BB(0x0043330b);
    /* 0043330b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043330e: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 00433314: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x433319u); f_00520e6c();
    /* 00433319: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0043331f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433321: je 0x43332c */ if (fZ) goto L_0043332c;
L_00433323:; BB(0x00433323);
    /* 00433323: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0043332a: jmp 0x433333 */ goto L_00433333;
L_0043332c:; BB(0x0043332c);
    /* 0043332c: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_00433333:; BB(0x00433333);
    /* 00433333: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 00433336: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00433339: ja 0x433473 */ if ((!fC&&!fZ)) goto L_00433473;
L_0043333f:; BB(0x0043333f);
    /* 0043333f: mov edx, dword ptr [edx*4 + 0x8fca60] */ r_edx = R32((u32)(r_edx*4+0x8fca60u));
    /* 00433346: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00433348:; BB(0x00433348);
    /* 00433348: mov eax, 5 */ r_eax = 0x5u;
    /* 0043334d: jmp 0x43330b */ goto L_0043330b;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_0043334f(void)
{
    FN_ENTER(0x0043334f);
    goto L_0043334f;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x0043334f); r_esp += 4; return;
L_0043334f:; BB(0x0043334f);
    /* 0043334f: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00433355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433357: jne 0x433363 */ if (!fZ) goto L_00433363;
L_00433359:; BB(0x00433359);
    /* 00433359: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0043335e: jmp 0x433473 */ goto L_00433473;
L_00433363:; BB(0x00433363);
    /* 00433363: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00433368: jmp 0x433473 */ goto L_00433473;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_0043336d(void)
{
    FN_ENTER(0x0043336d);
    goto L_0043336d;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x0043336d); r_esp += 4; return;
L_0043336d:; BB(0x0043336d);
    /* 0043336d: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00433373: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433375: jne 0x433381 */ if (!fZ) goto L_00433381;
L_00433377:; BB(0x00433377);
    /* 00433377: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0043337c: jmp 0x433473 */ goto L_00433473;
L_00433381:; BB(0x00433381);
    /* 00433381: mov eax, 0x15 */ r_eax = 0x15u;
    /* 00433386: jmp 0x433473 */ goto L_00433473;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_0043338b(void)
{
    FN_ENTER(0x0043338b);
    goto L_0043338b;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x0043338b); r_esp += 4; return;
L_0043338b:; BB(0x0043338b);
    /* 0043338b: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00433391: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433393: jne 0x43339f */ if (!fZ) goto L_0043339f;
L_00433395:; BB(0x00433395);
    /* 00433395: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0043339a: jmp 0x433473 */ goto L_00433473;
L_0043339f:; BB(0x0043339f);
    /* 0043339f: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004333a4: jmp 0x433473 */ goto L_00433473;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_004333a9(void)
{
    FN_ENTER(0x004333a9);
    goto L_004333a9;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x004333a9); r_esp += 4; return;
L_004333a9:; BB(0x004333a9);
    /* 004333a9: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 004333af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004333b1: jne 0x4333bd */ if (!fZ) goto L_004333bd;
L_004333b3:; BB(0x004333b3);
    /* 004333b3: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004333b8: jmp 0x433473 */ goto L_00433473;
L_004333bd:; BB(0x004333bd);
    /* 004333bd: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004333c2: jmp 0x433473 */ goto L_00433473;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_004333c7(void)
{
    FN_ENTER(0x004333c7);
    goto L_004333c7;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x004333c7); r_esp += 4; return;
L_004333c7:; BB(0x004333c7);
    /* 004333c7: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 004333cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004333cf: jne 0x4333db */ if (!fZ) goto L_004333db;
L_004333d1:; BB(0x004333d1);
    /* 004333d1: mov eax, 4 */ r_eax = 0x4u;
    /* 004333d6: jmp 0x433473 */ goto L_00433473;
L_004333db:; BB(0x004333db);
    /* 004333db: mov eax, 0xa */ r_eax = 0xau;
    /* 004333e0: jmp 0x433473 */ goto L_00433473;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_004333e5(void)
{
    FN_ENTER(0x004333e5);
    goto L_004333e5;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x004333e5); r_esp += 4; return;
L_004333e5:; BB(0x004333e5);
    /* 004333e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004333e7: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4333ecu); f_00520bf4();
    /* 004333ec: fcomp dword ptr [0x8fcd9c] */ fx_compare(ST(0), R_F32((u32)(0x8fcd9cu))); FPOP();
    /* 004333f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004333f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004333f5: jbe 0x4333fe */ if ((fC||fZ)) goto L_004333fe;
L_004333f7:; BB(0x004333f7);
    /* 004333f7: mov eax, 0x18 */ r_eax = 0x18u;
    /* 004333fc: jmp 0x433473 */ goto L_00433473;
L_004333fe:; BB(0x004333fe);
    /* 004333fe: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00433403: jmp 0x433473 */ goto L_00433473;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_00433405(void)
{
    FN_ENTER(0x00433405);
    goto L_00433405;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x00433405); r_esp += 4; return;
L_00433405:; BB(0x00433405);
    /* 00433405: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0043340b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043340d: jne 0x433416 */ if (!fZ) goto L_00433416;
L_0043340f:; BB(0x0043340f);
    /* 0043340f: mov eax, 3 */ r_eax = 0x3u;
    /* 00433414: jmp 0x433473 */ goto L_00433473;
L_00433416:; BB(0x00433416);
    /* 00433416: mov eax, 0xb */ r_eax = 0xbu;
    /* 0043341b: jmp 0x433473 */ goto L_00433473;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_0043341d(void)
{
    FN_ENTER(0x0043341d);
    goto L_0043341d;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x0043341d); r_esp += 4; return;
L_0043341d:; BB(0x0043341d);
    /* 0043341d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043341f: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x433424u); f_00520bf4();
    /* 00433424: fcomp dword ptr [0x8fcd9c] */ fx_compare(ST(0), R_F32((u32)(0x8fcd9cu))); FPOP();
    /* 0043342a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043342c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043342d: jbe 0x433436 */ if ((fC||fZ)) goto L_00433436;
L_0043342f:; BB(0x0043342f);
    /* 0043342f: mov eax, 0xc */ r_eax = 0xcu;
    /* 00433434: jmp 0x433473 */ goto L_00433473;
L_00433436:; BB(0x00433436);
    /* 00433436: mov eax, 0xe */ r_eax = 0xeu;
    /* 0043343b: jmp 0x433473 */ goto L_00433473;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_0043343d(void)
{
    FN_ENTER(0x0043343d);
    goto L_0043343d;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x0043343d); r_esp += 4; return;
L_0043343d:; BB(0x0043343d);
    /* 0043343d: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00433443: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433445: jne 0x43344e */ if (!fZ) goto L_0043344e;
L_00433447:; BB(0x00433447);
    /* 00433447: mov eax, 5 */ r_eax = 0x5u;
    /* 0043344c: jmp 0x433473 */ goto L_00433473;
L_0043344e:; BB(0x0043344e);
    /* 0043344e: mov eax, 9 */ r_eax = 0x9u;
    /* 00433453: jmp 0x433473 */ goto L_00433473;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_00433455(void)
{
    FN_ENTER(0x00433455);
    goto L_00433455;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x00433455); r_esp += 4; return;
L_00433455:; BB(0x00433455);
    /* 00433455: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433457: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x43345cu); f_00520bf4();
    /* 0043345c: fcomp dword ptr [0x8fcd9c] */ fx_compare(ST(0), R_F32((u32)(0x8fcd9cu))); FPOP();
    /* 00433462: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433464: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00433465: jbe 0x43346e */ if ((fC||fZ)) goto L_0043346e;
L_00433467:; BB(0x00433467);
    /* 00433467: mov eax, 8 */ r_eax = 0x8u;
    /* 0043346c: jmp 0x433473 */ goto L_00433473;
L_0043346e:; BB(0x0043346e);
    /* 0043346e: mov eax, 6 */ r_eax = 0x6u;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_00433473(void)
{
    FN_ENTER(0x00433473);
    goto L_00433473;
L_004332bc:; BB(0x004332bc);
    /* 004332bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004332bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004332c0: ret  */ FN_RET(0x00433473); r_esp += 4; return;
L_00433473:; BB(0x00433473);
    /* 00433473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433476: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x43347bu); f_0042abf8();
    /* 0043347b: jmp 0x4332bc */ goto L_004332bc;
}

void f_00433480(void) /* sub_433480 */
{
    FN_ENTER(0x00433480);
    /* 00433480: fld dword ptr [ecx + 0x6dc] */ FPUSH(R_F32((u32)(r_ecx+0x6dcu)));
    /* 00433486: fadd dword ptr [ecx + 0x6e0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x6e0u));
    /* 0043348c: fcom dword ptr [0x8fcd98] */ fx_compare(ST(0), R_F32((u32)(0x8fcd98u))); 
    /* 00433492: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433494: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00433495: jb 0x4334a6 */ if (fC) goto L_004334a6;
L_00433497:; BB(0x00433497);
    /* 00433497: fld dword ptr [0x8fcd94] */ FPUSH(R_F32((u32)(0x8fcd94u)));
    /* 0043349d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043349f: fstp dword ptr [ecx + 0x6dc] */ W_F32((u32)(r_ecx+0x6dcu), ST(0)); FPOP();
    /* 004334a5: ret  */ FN_RET(0x00433480); r_esp += 4; return;
L_004334a6:; BB(0x004334a6);
    /* 004334a6: fstp dword ptr [ecx + 0x6dc] */ W_F32((u32)(r_ecx+0x6dcu), ST(0)); FPOP();
    /* 004334ac: ret  */ FN_RET(0x00433480); r_esp += 4; return;
}

void f_004334b0(void) /* sub_4334B0 */
{
    FN_ENTER(0x004334b0);
    /* 004334b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004334b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004334b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004334b3: mov edi, ecx */ r_edi = r_ecx;
    /* 004334b5: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 004334ba: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 004334bd: lea eax, [edi + 0x520] */ r_eax = (u32)(r_edi+0x520u);
    /* 004334c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004334c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004334c5: call 0x520dc0 */ r_esp -= 4; W32(r_esp, 0x4334cau); f_00520dc0();
    /* 004334ca: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 004334cf: lea esi, [edi + 0x52c] */ r_esi = (u32)(r_edi+0x52cu);
    /* 004334d5: lea eax, [edi + 0x4d8] */ r_eax = (u32)(r_edi+0x4d8u);
    /* 004334db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004334dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004334dd: call 0x520dc0 */ r_esp -= 4; W32(r_esp, 0x4334e2u); f_00520dc0();
    /* 004334e2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004334e5: mov eax, dword ptr [edi + 0x52c] */ r_eax = R32((u32)(r_edi+0x52cu));
    /* 004334eb: lea ebp, [edi + 0x538] */ r_ebp = (u32)(r_edi+0x538u);
    /* 004334f1: mov dword ptr [edi + 0x538], eax */ W32((u32)(r_edi+0x538u), r_eax);
    /* 004334f7: mov eax, dword ptr [edi + 0x530] */ r_eax = R32((u32)(r_edi+0x530u));
    /* 004334fd: mov dword ptr [edi + 0x53c], eax */ W32((u32)(r_edi+0x53cu), r_eax);
    /* 00433503: mov eax, dword ptr [edi + 0x534] */ r_eax = R32((u32)(r_edi+0x534u));
    /* 00433509: mov dword ptr [edi + 0x540], eax */ W32((u32)(r_edi+0x540u), r_eax);
    /* 0043350f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00433511: mov edx, esi */ r_edx = r_esi;
    /* 00433513: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x433518u); f_0082ebac();
    /* 00433518: fld dword ptr [0x8fcd8c] */ FPUSH(R_F32((u32)(0x8fcd8cu)));
    /* 0043351e: fld dword ptr [edi + 0x538] */ FPUSH(R_F32((u32)(r_edi+0x538u)));
    /* 00433524: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00433526: fld dword ptr [edi + 0x53c] */ FPUSH(R_F32((u32)(r_edi+0x53cu)));
    /* 0043352c: fld dword ptr [edi + 0x540] */ FPUSH(R_F32((u32)(r_edi+0x540u)));
    /* 00433532: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 00433538: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043353a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0043353c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0043353e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00433540: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00433542: fstp dword ptr [edi + 0x538] */ W_F32((u32)(r_edi+0x538u), ST(0)); FPOP();
    /* 00433548: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043354a: fstp dword ptr [edi + 0x53c] */ W_F32((u32)(r_edi+0x53cu), ST(0)); FPOP();
    /* 00433550: fstp dword ptr [edi + 0x540] */ W_F32((u32)(r_edi+0x540u), ST(0)); FPOP();
    /* 00433556: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043355b: jne 0x433565 */ if (!fZ) goto L_00433565;
L_0043355d:; BB(0x0043355d);
    /* 0043355d: mov eax, dword ptr [edi + 0x544] */ r_eax = R32((u32)(r_edi+0x544u));
    /* 00433563: jmp 0x433599 */ goto L_00433599;
L_00433565:; BB(0x00433565);
    /* 00433565: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043356a: mov ecx, edi */ r_ecx = r_edi;
    /* 0043356c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x433571u); f_007aaa30();
    /* 00433571: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433573: jne 0x43358d */ if (!fZ) goto L_0043358d;
L_00433575:; BB(0x00433575);
    /* 00433575: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043357a: mov ecx, edi */ r_ecx = r_edi;
    /* 0043357c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x433581u); f_007aaa30();
    /* 00433581: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433583: jne 0x43358d */ if (!fZ) goto L_0043358d;
L_00433585:; BB(0x00433585);
    /* 00433585: mov eax, dword ptr [edi + 0x544] */ r_eax = R32((u32)(r_edi+0x544u));
    /* 0043358b: jmp 0x433599 */ goto L_00433599;
L_0043358d:; BB(0x0043358d);
    /* 0043358d: mov dword ptr [edi + 0x544], 0 */ W32((u32)(r_edi+0x544u), 0x0u);
    /* 00433597: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00433599:; BB(0x00433599);
    /* 00433599: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043359c: jg 0x4335b8 */ if ((!fZ&&fS==fO)) goto L_004335b8;
L_0043359e:; BB(0x0043359e);
    /* 0043359e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004335a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004335a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004335a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004335a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004335a4: push 0x327 */ { u32 v = 0x327u; r_esp -= 4; W32(r_esp, v); }
    /* 004335a9: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4335aeu); f_008144b0();
    /* 004335ae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004335b1: add dword ptr [edi + 0x544], 1 */ { u32 ad = (u32)(r_edi+0x544u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004335b8:; BB(0x004335b8);
    /* 004335b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004335b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004335ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004335bb: ret  */ FN_RET(0x004334b0); r_esp += 4; return;
}

void f_004335bc(void) /* sub_4335BC */
{
    FN_ENTER(0x004335bc);
    /* 004335bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004335bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004335be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004335bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004335c0: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004335c3: mov edi, ecx */ r_edi = r_ecx;
    /* 004335c5: mov ecx, edi */ r_ecx = r_edi;
    /* 004335c7: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x4335ccu); f_0051f814();
    /* 004335cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004335ce: je 0x4335e2 */ if (fZ) goto L_004335e2;
L_004335d0:; BB(0x004335d0);
    /* 004335d0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004335d2: mov ecx, edi */ r_ecx = r_edi;
    /* 004335d4: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x4335dau); call_ind(t); }
    /* 004335da: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004335dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004335de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004335df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004335e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004335e1: ret  */ FN_RET(0x004335bc); r_esp += 4; return;
L_004335e2:; BB(0x004335e2);
    /* 004335e2: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 004335e7: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004335e9: je 0x433607 */ if (fZ) goto L_00433607;
L_004335eb:; BB(0x004335eb);
    /* 004335eb: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 004335f2: lea eax, [edx - 4] */ r_eax = (u32)(r_edx+0xfffffffcu);
    /* 004335f5: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004335f8: ja 0x4339fe */ if ((!fC&&!fZ)) goto L_004339fe;
L_004335fe:; BB(0x004335fe);
    /* 004335fe: mov eax, dword ptr [edx*4 + 0x8fca90] */ r_eax = R32((u32)(r_edx*4+0x8fca90u));
    /* 00433605: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00433607:; BB(0x00433607);
    /* 00433607: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0043360c: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00433612: mov ebx, dword ptr [0xaf0364] */ r_ebx = R32((u32)(0xaf0364u));
    /* 00433618: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0043361d: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00433623: mov dword ptr [0xaab500], ebx */ W32((u32)(0xaab500u), r_ebx);
    /* 00433629: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x43362eu); f_00520d08();
    /* 0043362e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x433633u); f_0082dbac();
    /* 00433633: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x433638u); f_0082d7b0();
    /* 00433638: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0043363b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x433640u); f_0082d838();
    /* 00433640: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433642: push dword ptr [edi + 0x6ac] */ { u32 v = R32((u32)(r_edi+0x6acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00433648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043364a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043364c: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x433651u); f_00830b74();
    /* 00433651: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00433654: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433656: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43365bu); f_0082d8bc();
    /* 0043365b: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0043365e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433660: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x433665u); f_0082e9e4();
    /* 00433665: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 00433668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043366a: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x43366fu); f_00830c04();
    /* 0043366f: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 00433676: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00433679: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 00433681: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 00433689: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x43368eu); f_00831290();
    /* 0043368e: fld dword ptr [0x8fcd7c] */ FPUSH(R_F32((u32)(0x8fcd7cu)));
    /* 00433694: fld dword ptr [0x8fcd78] */ FPUSH(R_F32((u32)(0x8fcd78u)));
    /* 0043369a: fld dword ptr [edi + 0x6dc] */ FPUSH(R_F32((u32)(r_edi+0x6dcu)));
    /* 004336a0: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004336a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004336a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004336a5: jbe 0x4336a9 */ if ((fC||fZ)) goto L_004336a9;
L_004336a7:; BB(0x004336a7);
    /* 004336a7: fsubr st(1) */ ST(0) = ST(1) - ST(0);
L_004336a9:; BB(0x004336a9);
    /* 004336a9: fld dword ptr [0x8fcd74] */ FPUSH(R_F32((u32)(0x8fcd74u)));
    /* 004336af: fld dword ptr [0x8fcd70] */ FPUSH(R_F32((u32)(0x8fcd70u)));
    /* 004336b5: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004336b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004336b9: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004336bb: fld dword ptr [0x8fcd6c] */ FPUSH(R_F32((u32)(0x8fcd6cu)));
    /* 004336c1: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 004336c3: fld dword ptr [0x8fcd68] */ FPUSH(R_F32((u32)(0x8fcd68u)));
    /* 004336c9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004336cb: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004336cf: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004336d4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004336d9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004336dd: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004336e1: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 004336e5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004336e9: mov eax, dword ptr [0xa43bd8] */ r_eax = R32((u32)(0xa43bd8u));
    /* 004336ee: movzx ebp, byte ptr [esp + 0x28] */ r_ebp = (u32)R8((u32)(r_esp+0x28u));
    /* 004336f3: mov esi, ebp */ r_esi = r_ebp;
    /* 004336f5: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004336f8: or esi, 0xff000000 */ {  u32 a = r_esi; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 004336fe: mov edx, ebp */ r_edx = r_ebp;
    /* 00433700: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00433703: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00433705: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00433707: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0043370a: or esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0043370c: mov ebx, dword ptr [0xa43be0] */ r_ebx = R32((u32)(0xa43be0u));
    /* 00433712: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00433714: mov eax, dword ptr [0xa43bdc] */ r_eax = R32((u32)(0xa43bdcu));
    /* 00433719: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0043371b: fld dword ptr [edi + 0x6dc] */ FPUSH(R_F32((u32)(r_edi+0x6dcu)));
    /* 00433721: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00433723:; BB(0x00433723);
    /* 00433723: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00433725: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 00433727: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433729: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043372a: jbe 0x433732 */ if ((fC||fZ)) goto L_00433732;
L_0043372c:; BB(0x0043372c);
    /* 0043372c: fadd dword ptr [0x8fcd64] */ ST(0) = ST(0) + R_F32((u32)(0x8fcd64u));
L_00433732:; BB(0x00433732);
    /* 00433732: fcom st(6) */ fx_compare(ST(0), ST(6)); 
    /* 00433734: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433736: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00433738: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00433739: jbe 0x433741 */ if ((fC||fZ)) goto L_00433741;
L_0043373b:; BB(0x0043373b);
    /* 0043373b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043373d: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 0043373f: fsub st(1) */ ST(0) = ST(0) - ST(1);
L_00433741:; BB(0x00433741);
    /* 00433741: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00433743: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00433745: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00433747: mov ebp, dword ptr [edx + 0xa43be4] */ r_ebp = R32((u32)(r_edx+0xa43be4u));
    /* 0043374d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00433751: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00433756: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043375b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0043375f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00433763: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 00433767: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0043376b: movzx eax, byte ptr [esp + 0x28] */ r_eax = (u32)R8((u32)(r_esp+0x28u));
    /* 00433770: mov ebx, eax */ r_ebx = r_eax;
    /* 00433772: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00433775: or ebx, 0xff000000 */ {  u32 a = r_ebx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0043377b: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043377e: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00433780: mov dword ptr [ebp], ebx */ W32((u32)(r_ebp), r_ebx);
    /* 00433783: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433786: cmp edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433789: jl 0x433723 */ if ((fS!=fO)) goto L_00433723;
L_0043378b:; BB(0x0043378b);
    /* 0043378b: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0043378d: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0043378f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00433791: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433793: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433795: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433797: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433799: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043379b:; BB(0x0043379b);
    /* 0043379b: mov ecx, dword ptr [edi + ebx*4 + 0x5e8] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x5e8u));
    /* 004337a2: call 0x4355bc */ r_esp -= 4; W32(r_esp, 0x4337a7u); f_004355bc();
    /* 004337a7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004337aa: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004337ad: jl 0x43379b */ if ((fS!=fO)) goto L_0043379b;
L_004337af:; BB(0x004337af);
    /* 004337af: mov edx, dword ptr [0xa43ce8] */ r_edx = R32((u32)(0xa43ce8u));
    /* 004337b5: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004337bb: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004337bd: je 0x4337c8 */ if (fZ) goto L_004337c8;
L_004337bf:; BB(0x004337bf);
    /* 004337bf: mov dword ptr [edx + 0x2c], 0xa43940 */ W32((u32)(r_edx+0x2cu), 0xa43940u);
    /* 004337c6: jmp 0x4337d0 */ goto L_004337d0;
L_004337c8:; BB(0x004337c8);
    /* 004337c8: mov eax, dword ptr [0xa43ce4] */ r_eax = R32((u32)(0xa43ce4u));
    /* 004337cd: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
L_004337d0:; BB(0x004337d0);
    /* 004337d0: mov ecx, edi */ r_ecx = r_edi;
    /* 004337d2: call 0x433a18 */ r_esp -= 4; W32(r_esp, 0x4337d7u); f_00433a18();
    /* 004337d7: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 004337da: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4337dfu); f_00829cc8();
    /* 004337df: mov ecx, 0x42a904 */ r_ecx = 0x42a904u;
    /* 004337e4: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4337e9u); f_0082fac4();
    /* 004337e9: mov eax, dword ptr [0xa9d484] */ r_eax = R32((u32)(0xa9d484u));
    /* 004337ee: mov esi, dword ptr [0xa9d488] */ r_esi = R32((u32)(0xa9d488u));
    /* 004337f4: mov ebp, dword ptr [0xa9d48c] */ r_ebp = R32((u32)(0xa9d48cu));
    /* 004337fa: mov ebx, dword ptr [0xa9d490] */ r_ebx = R32((u32)(0xa9d490u));
    /* 00433800: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00433804: call 0x43c45c */ r_esp -= 4; W32(r_esp, 0x433809u); f_0043c45c();
    /* 00433809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043380b: je 0x433841 */ if (fZ) goto L_00433841;
L_0043380d:; BB(0x0043380d);
    /* 0043380d: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00433813: mov dword ptr [0xa9d488], 0x3e99999a */ W32((u32)(0xa9d488u), 0x3e99999au);
    /* 0043381d: mov dword ptr [0xa9d48c], 0x3ecccccd */ W32((u32)(0xa9d48cu), 0x3ecccccdu);
    /* 00433827: mov dword ptr [0xa9d490], 0x3f000000 */ W32((u32)(0xa9d490u), 0x3f000000u);
    /* 00433831: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x433836u); f_0061cdb0();
    /* 00433836: mov ecx, dword ptr [0xa9d4b8] */ r_ecx = R32((u32)(0xa9d4b8u));
    /* 0043383c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x433841u); f_0061cdb0();
L_00433841:; BB(0x00433841);
    /* 00433841: mov ecx, edi */ r_ecx = r_edi;
    /* 00433843: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x433848u); f_007aa668();
    /* 00433848: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0043384c: mov dword ptr [0xa9d484], eax */ W32((u32)(0xa9d484u), r_eax);
    /* 00433851: mov dword ptr [0xa9d488], esi */ W32((u32)(0xa9d488u), r_esi);
    /* 00433857: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433859: mov dword ptr [0xa9d48c], ebp */ W32((u32)(0xa9d48cu), r_ebp);
    /* 0043385f: mov dword ptr [0xa9d490], ebx */ W32((u32)(0xa9d490u), r_ebx);
    /* 00433865: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x43386au); f_0082fac4();
    /* 0043386a: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00433870: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x433875u); f_0061cdb0();
    /* 00433875: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43387au); f_0082da80();
    /* 0043387a: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0043387f: mov ebx, dword ptr [0xaab500] */ r_ebx = R32((u32)(0xaab500u));
    /* 00433885: mov ebp, dword ptr [0xaab518] */ r_ebp = R32((u32)(0xaab518u));
    /* 0043388b: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00433890: lea edx, [edi + 0x46c] */ r_edx = (u32)(r_edi+0x46cu);
    /* 00433896: mov dword ptr [0xaf0364], ebx */ W32((u32)(0xaf0364u), r_ebx);
    /* 0043389c: mov dword ptr [0xaf034c], ebp */ W32((u32)(0xaf034cu), r_ebp);
    /* 004338a2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004338a6: mov esi, dword ptr [edi + 0x400] */ r_esi = R32((u32)(r_edi+0x400u));
    /* 004338ac: mov eax, dword ptr [edi + 0x404] */ r_eax = R32((u32)(r_edi+0x404u));
    /* 004338b2: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004338b6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004338ba: mov eax, dword ptr [edi + 0x408] */ r_eax = R32((u32)(r_edi+0x408u));
    /* 004338c0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004338c4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4338c9u); f_0082ebac();
    /* 004338c9: fld dword ptr [0x8fcd58] */ FPUSH(R_F32((u32)(0x8fcd58u)));
    /* 004338cf: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004338d3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004338d5: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004338d9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004338db: mov ebp, dword ptr [edi + 0x46c] */ r_ebp = R32((u32)(r_edi+0x46cu));
    /* 004338e1: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004338e5: mov esi, dword ptr [edi + 0x470] */ r_esi = R32((u32)(r_edi+0x470u));
    /* 004338eb: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004338ed: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004338f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004338f3: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004338f7: fstp dword ptr [edi + 0x548] */ W_F32((u32)(r_edi+0x548u), ST(0)); FPOP();
    /* 004338fd: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433901: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00433905: mov dword ptr [edi + 0x54c], eax */ W32((u32)(r_edi+0x54cu), r_eax);
    /* 0043390b: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0043390f: mov eax, dword ptr [edi + 0x474] */ r_eax = R32((u32)(r_edi+0x474u));
    /* 00433915: mov dword ptr [edi + 0x550], ebx */ W32((u32)(r_edi+0x550u), r_ebx);
    /* 0043391b: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0043391f: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00433923: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00433927: lea edx, [edi + 0x484] */ r_edx = (u32)(r_edi+0x484u);
    /* 0043392d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x433932u); f_0082ebac();
    /* 00433932: fld dword ptr [0x8fcd58] */ FPUSH(R_F32((u32)(0x8fcd58u)));
    /* 00433938: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0043393c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00433940: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00433944: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00433946: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00433948: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043394a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0043394c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0043394e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00433950: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00433952: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00433956: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0043395a: fstp dword ptr [edi + 0x554] */ W_F32((u32)(r_edi+0x554u), ST(0)); FPOP();
    /* 00433960: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433964: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00433968: mov dword ptr [edi + 0x558], eax */ W32((u32)(r_edi+0x558u), r_eax);
    /* 0043396e: lea eax, [edi + 0x560] */ r_eax = (u32)(r_edi+0x560u);
    /* 00433974: lea esi, [edi + 0x484] */ r_esi = (u32)(r_edi+0x484u);
    /* 0043397a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0043397e: mov dword ptr [edi + 0x55c], edx */ W32((u32)(r_edi+0x55cu), r_edx);
    /* 00433984: lea ebp, [edi + 0x490] */ r_ebp = (u32)(r_edi+0x490u);
    /* 0043398a: lea ebx, [edi + 0x4e4] */ r_ebx = (u32)(r_edi+0x4e4u);
    /* 00433990: mov edi, eax */ r_edi = r_eax;
L_00433992:; BB(0x00433992);
    /* 00433992: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00433994: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00433998: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0043399b: mov edx, ebp */ r_edx = r_ebp;
    /* 0043399d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004339a1: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 004339a4: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004339a8: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004339ac: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4339b1u); f_0082ebac();
    /* 004339b1: fld dword ptr [0x8fcd58] */ FPUSH(R_F32((u32)(0x8fcd58u)));
    /* 004339b7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004339bb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004339bd: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004339c1: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004339c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004339c7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004339c9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004339cb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004339cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004339cf: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 004339d3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004339d5: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004339d9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004339dd: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 004339df: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004339e3: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 004339e6: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004339e9: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004339ec: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 004339f0: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 004339f3: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004339f6: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004339f8: ja 0x433992 */ if ((!fC&&!fZ)) goto L_00433992;
L_004339fa:; BB(0x004339fa);
    /* 004339fa: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_004339fe:; BB(0x004339fe);
    /* 004339fe: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x433a03u); f_0082dab0();
    /* 00433a03: add edi, 0x3e0 */ {  u32 a = r_edi; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00433a09: mov ecx, edi */ r_ecx = r_edi;
    /* 00433a0b: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x433a10u); f_00818f50();
    /* 00433a10: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00433a13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00433a14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433a15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00433a16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00433a17: ret  */ FN_RET(0x004335bc); r_esp += 4; return;
}

void f_00433607(void)
{
    FN_ENTER(0x00433607);
    /* 00433607: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0043360c: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00433612: mov ebx, dword ptr [0xaf0364] */ r_ebx = R32((u32)(0xaf0364u));
    /* 00433618: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0043361d: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00433623: mov dword ptr [0xaab500], ebx */ W32((u32)(0xaab500u), r_ebx);
    /* 00433629: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x43362eu); f_00520d08();
    /* 0043362e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x433633u); f_0082dbac();
    /* 00433633: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x433638u); f_0082d7b0();
    /* 00433638: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0043363b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x433640u); f_0082d838();
    /* 00433640: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433642: push dword ptr [edi + 0x6ac] */ { u32 v = R32((u32)(r_edi+0x6acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00433648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043364a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043364c: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x433651u); f_00830b74();
    /* 00433651: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00433654: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433656: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43365bu); f_0082d8bc();
    /* 0043365b: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0043365e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433660: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x433665u); f_0082e9e4();
    /* 00433665: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 00433668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043366a: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x43366fu); f_00830c04();
    /* 0043366f: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 00433676: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00433679: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 00433681: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 00433689: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x43368eu); f_00831290();
    /* 0043368e: fld dword ptr [0x8fcd7c] */ FPUSH(R_F32((u32)(0x8fcd7cu)));
    /* 00433694: fld dword ptr [0x8fcd78] */ FPUSH(R_F32((u32)(0x8fcd78u)));
    /* 0043369a: fld dword ptr [edi + 0x6dc] */ FPUSH(R_F32((u32)(r_edi+0x6dcu)));
    /* 004336a0: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004336a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004336a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004336a5: jbe 0x4336a9 */ if ((fC||fZ)) goto L_004336a9;
L_004336a7:; BB(0x004336a7);
    /* 004336a7: fsubr st(1) */ ST(0) = ST(1) - ST(0);
L_004336a9:; BB(0x004336a9);
    /* 004336a9: fld dword ptr [0x8fcd74] */ FPUSH(R_F32((u32)(0x8fcd74u)));
    /* 004336af: fld dword ptr [0x8fcd70] */ FPUSH(R_F32((u32)(0x8fcd70u)));
    /* 004336b5: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004336b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004336b9: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004336bb: fld dword ptr [0x8fcd6c] */ FPUSH(R_F32((u32)(0x8fcd6cu)));
    /* 004336c1: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 004336c3: fld dword ptr [0x8fcd68] */ FPUSH(R_F32((u32)(0x8fcd68u)));
    /* 004336c9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004336cb: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004336cf: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004336d4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004336d9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004336dd: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004336e1: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 004336e5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004336e9: mov eax, dword ptr [0xa43bd8] */ r_eax = R32((u32)(0xa43bd8u));
    /* 004336ee: movzx ebp, byte ptr [esp + 0x28] */ r_ebp = (u32)R8((u32)(r_esp+0x28u));
    /* 004336f3: mov esi, ebp */ r_esi = r_ebp;
    /* 004336f5: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004336f8: or esi, 0xff000000 */ {  u32 a = r_esi; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 004336fe: mov edx, ebp */ r_edx = r_ebp;
    /* 00433700: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00433703: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00433705: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00433707: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0043370a: or esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0043370c: mov ebx, dword ptr [0xa43be0] */ r_ebx = R32((u32)(0xa43be0u));
    /* 00433712: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00433714: mov eax, dword ptr [0xa43bdc] */ r_eax = R32((u32)(0xa43bdcu));
    /* 00433719: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0043371b: fld dword ptr [edi + 0x6dc] */ FPUSH(R_F32((u32)(r_edi+0x6dcu)));
    /* 00433721: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00433723:; BB(0x00433723);
    /* 00433723: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00433725: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 00433727: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433729: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043372a: jbe 0x433732 */ if ((fC||fZ)) goto L_00433732;
L_0043372c:; BB(0x0043372c);
    /* 0043372c: fadd dword ptr [0x8fcd64] */ ST(0) = ST(0) + R_F32((u32)(0x8fcd64u));
L_00433732:; BB(0x00433732);
    /* 00433732: fcom st(6) */ fx_compare(ST(0), ST(6)); 
    /* 00433734: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433736: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00433738: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00433739: jbe 0x433741 */ if ((fC||fZ)) goto L_00433741;
L_0043373b:; BB(0x0043373b);
    /* 0043373b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043373d: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 0043373f: fsub st(1) */ ST(0) = ST(0) - ST(1);
L_00433741:; BB(0x00433741);
    /* 00433741: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00433743: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00433745: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00433747: mov ebp, dword ptr [edx + 0xa43be4] */ r_ebp = R32((u32)(r_edx+0xa43be4u));
    /* 0043374d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00433751: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00433756: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043375b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0043375f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00433763: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 00433767: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0043376b: movzx eax, byte ptr [esp + 0x28] */ r_eax = (u32)R8((u32)(r_esp+0x28u));
    /* 00433770: mov ebx, eax */ r_ebx = r_eax;
    /* 00433772: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00433775: or ebx, 0xff000000 */ {  u32 a = r_ebx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0043377b: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043377e: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00433780: mov dword ptr [ebp], ebx */ W32((u32)(r_ebp), r_ebx);
    /* 00433783: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433786: cmp edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433789: jl 0x433723 */ if ((fS!=fO)) goto L_00433723;
L_0043378b:; BB(0x0043378b);
    /* 0043378b: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0043378d: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0043378f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00433791: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433793: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433795: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433797: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433799: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043379b:; BB(0x0043379b);
    /* 0043379b: mov ecx, dword ptr [edi + ebx*4 + 0x5e8] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x5e8u));
    /* 004337a2: call 0x4355bc */ r_esp -= 4; W32(r_esp, 0x4337a7u); f_004355bc();
    /* 004337a7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004337aa: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004337ad: jl 0x43379b */ if ((fS!=fO)) goto L_0043379b;
L_004337af:; BB(0x004337af);
    /* 004337af: mov edx, dword ptr [0xa43ce8] */ r_edx = R32((u32)(0xa43ce8u));
    /* 004337b5: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004337bb: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004337bd: je 0x4337c8 */ if (fZ) goto L_004337c8;
L_004337bf:; BB(0x004337bf);
    /* 004337bf: mov dword ptr [edx + 0x2c], 0xa43940 */ W32((u32)(r_edx+0x2cu), 0xa43940u);
    /* 004337c6: jmp 0x4337d0 */ goto L_004337d0;
L_004337c8:; BB(0x004337c8);
    /* 004337c8: mov eax, dword ptr [0xa43ce4] */ r_eax = R32((u32)(0xa43ce4u));
    /* 004337cd: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
L_004337d0:; BB(0x004337d0);
    /* 004337d0: mov ecx, edi */ r_ecx = r_edi;
    /* 004337d2: call 0x433a18 */ r_esp -= 4; W32(r_esp, 0x4337d7u); f_00433a18();
    /* 004337d7: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 004337da: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4337dfu); f_00829cc8();
    /* 004337df: mov ecx, 0x42a904 */ r_ecx = 0x42a904u;
    /* 004337e4: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4337e9u); f_0082fac4();
    /* 004337e9: mov eax, dword ptr [0xa9d484] */ r_eax = R32((u32)(0xa9d484u));
    /* 004337ee: mov esi, dword ptr [0xa9d488] */ r_esi = R32((u32)(0xa9d488u));
    /* 004337f4: mov ebp, dword ptr [0xa9d48c] */ r_ebp = R32((u32)(0xa9d48cu));
    /* 004337fa: mov ebx, dword ptr [0xa9d490] */ r_ebx = R32((u32)(0xa9d490u));
    /* 00433800: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00433804: call 0x43c45c */ r_esp -= 4; W32(r_esp, 0x433809u); f_0043c45c();
    /* 00433809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043380b: je 0x433841 */ if (fZ) goto L_00433841;
L_0043380d:; BB(0x0043380d);
    /* 0043380d: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00433813: mov dword ptr [0xa9d488], 0x3e99999a */ W32((u32)(0xa9d488u), 0x3e99999au);
    /* 0043381d: mov dword ptr [0xa9d48c], 0x3ecccccd */ W32((u32)(0xa9d48cu), 0x3ecccccdu);
    /* 00433827: mov dword ptr [0xa9d490], 0x3f000000 */ W32((u32)(0xa9d490u), 0x3f000000u);
    /* 00433831: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x433836u); f_0061cdb0();
    /* 00433836: mov ecx, dword ptr [0xa9d4b8] */ r_ecx = R32((u32)(0xa9d4b8u));
    /* 0043383c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x433841u); f_0061cdb0();
L_00433841:; BB(0x00433841);
    /* 00433841: mov ecx, edi */ r_ecx = r_edi;
    /* 00433843: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x433848u); f_007aa668();
    /* 00433848: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0043384c: mov dword ptr [0xa9d484], eax */ W32((u32)(0xa9d484u), r_eax);
    /* 00433851: mov dword ptr [0xa9d488], esi */ W32((u32)(0xa9d488u), r_esi);
    /* 00433857: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433859: mov dword ptr [0xa9d48c], ebp */ W32((u32)(0xa9d48cu), r_ebp);
    /* 0043385f: mov dword ptr [0xa9d490], ebx */ W32((u32)(0xa9d490u), r_ebx);
    /* 00433865: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x43386au); f_0082fac4();
    /* 0043386a: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00433870: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x433875u); f_0061cdb0();
    /* 00433875: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43387au); f_0082da80();
    /* 0043387a: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0043387f: mov ebx, dword ptr [0xaab500] */ r_ebx = R32((u32)(0xaab500u));
    /* 00433885: mov ebp, dword ptr [0xaab518] */ r_ebp = R32((u32)(0xaab518u));
    /* 0043388b: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00433890: lea edx, [edi + 0x46c] */ r_edx = (u32)(r_edi+0x46cu);
    /* 00433896: mov dword ptr [0xaf0364], ebx */ W32((u32)(0xaf0364u), r_ebx);
    /* 0043389c: mov dword ptr [0xaf034c], ebp */ W32((u32)(0xaf034cu), r_ebp);
    /* 004338a2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004338a6: mov esi, dword ptr [edi + 0x400] */ r_esi = R32((u32)(r_edi+0x400u));
    /* 004338ac: mov eax, dword ptr [edi + 0x404] */ r_eax = R32((u32)(r_edi+0x404u));
    /* 004338b2: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004338b6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004338ba: mov eax, dword ptr [edi + 0x408] */ r_eax = R32((u32)(r_edi+0x408u));
    /* 004338c0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004338c4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4338c9u); f_0082ebac();
    /* 004338c9: fld dword ptr [0x8fcd58] */ FPUSH(R_F32((u32)(0x8fcd58u)));
    /* 004338cf: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004338d3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004338d5: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004338d9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004338db: mov ebp, dword ptr [edi + 0x46c] */ r_ebp = R32((u32)(r_edi+0x46cu));
    /* 004338e1: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004338e5: mov esi, dword ptr [edi + 0x470] */ r_esi = R32((u32)(r_edi+0x470u));
    /* 004338eb: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004338ed: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004338f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004338f3: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004338f7: fstp dword ptr [edi + 0x548] */ W_F32((u32)(r_edi+0x548u), ST(0)); FPOP();
    /* 004338fd: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433901: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00433905: mov dword ptr [edi + 0x54c], eax */ W32((u32)(r_edi+0x54cu), r_eax);
    /* 0043390b: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0043390f: mov eax, dword ptr [edi + 0x474] */ r_eax = R32((u32)(r_edi+0x474u));
    /* 00433915: mov dword ptr [edi + 0x550], ebx */ W32((u32)(r_edi+0x550u), r_ebx);
    /* 0043391b: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0043391f: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00433923: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00433927: lea edx, [edi + 0x484] */ r_edx = (u32)(r_edi+0x484u);
    /* 0043392d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x433932u); f_0082ebac();
    /* 00433932: fld dword ptr [0x8fcd58] */ FPUSH(R_F32((u32)(0x8fcd58u)));
    /* 00433938: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0043393c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00433940: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00433944: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00433946: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00433948: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043394a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0043394c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0043394e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00433950: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00433952: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00433956: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0043395a: fstp dword ptr [edi + 0x554] */ W_F32((u32)(r_edi+0x554u), ST(0)); FPOP();
    /* 00433960: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433964: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00433968: mov dword ptr [edi + 0x558], eax */ W32((u32)(r_edi+0x558u), r_eax);
    /* 0043396e: lea eax, [edi + 0x560] */ r_eax = (u32)(r_edi+0x560u);
    /* 00433974: lea esi, [edi + 0x484] */ r_esi = (u32)(r_edi+0x484u);
    /* 0043397a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0043397e: mov dword ptr [edi + 0x55c], edx */ W32((u32)(r_edi+0x55cu), r_edx);
    /* 00433984: lea ebp, [edi + 0x490] */ r_ebp = (u32)(r_edi+0x490u);
    /* 0043398a: lea ebx, [edi + 0x4e4] */ r_ebx = (u32)(r_edi+0x4e4u);
    /* 00433990: mov edi, eax */ r_edi = r_eax;
L_00433992:; BB(0x00433992);
    /* 00433992: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00433994: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00433998: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0043399b: mov edx, ebp */ r_edx = r_ebp;
    /* 0043399d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004339a1: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 004339a4: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004339a8: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004339ac: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4339b1u); f_0082ebac();
    /* 004339b1: fld dword ptr [0x8fcd58] */ FPUSH(R_F32((u32)(0x8fcd58u)));
    /* 004339b7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004339bb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004339bd: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004339c1: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004339c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004339c7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004339c9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004339cb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004339cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004339cf: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 004339d3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004339d5: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004339d9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004339dd: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 004339df: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004339e3: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 004339e6: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004339e9: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004339ec: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 004339f0: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 004339f3: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004339f6: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004339f8: ja 0x433992 */ if ((!fC&&!fZ)) goto L_00433992;
L_004339fa:; BB(0x004339fa);
    /* 004339fa: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004339fe: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x433a03u); f_0082dab0();
    /* 00433a03: add edi, 0x3e0 */ {  u32 a = r_edi; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00433a09: mov ecx, edi */ r_ecx = r_edi;
    /* 00433a0b: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x433a10u); f_00818f50();
    /* 00433a10: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00433a13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00433a14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433a15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00433a16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00433a17: ret  */ FN_RET(0x00433607); r_esp += 4; return;
}

void f_004339fe(void)
{
    FN_ENTER(0x004339fe);
    /* 004339fe: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x433a03u); f_0082dab0();
    /* 00433a03: add edi, 0x3e0 */ {  u32 a = r_edi; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00433a09: mov ecx, edi */ r_ecx = r_edi;
    /* 00433a0b: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x433a10u); f_00818f50();
    /* 00433a10: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00433a13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00433a14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433a15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00433a16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00433a17: ret  */ FN_RET(0x004339fe); r_esp += 4; return;
}

void f_00433a18(void) /* sub_433A18 */
{
    FN_ENTER(0x00433a18);
    /* 00433a18: mov edx, dword ptr [ecx + 0x610] */ r_edx = R32((u32)(r_ecx+0x610u));
    /* 00433a1e: mov dword ptr [0xa43d08], edx */ W32((u32)(0xa43d08u), r_edx);
    /* 00433a24: mov edx, dword ptr [ecx + 0x614] */ r_edx = R32((u32)(r_ecx+0x614u));
    /* 00433a2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00433a2c: mov dword ptr [0xa43d20], eax */ W32((u32)(0xa43d20u), r_eax);
    /* 00433a31: mov dword ptr [0xa43d0c], edx */ W32((u32)(0xa43d0cu), r_edx);
    /* 00433a37: mov edx, dword ptr [ecx + 0x618] */ r_edx = R32((u32)(r_ecx+0x618u));
    /* 00433a3d: mov dword ptr [0xa43d10], edx */ W32((u32)(0xa43d10u), r_edx);
    /* 00433a43: mov edx, dword ptr [ecx + 0x61c] */ r_edx = R32((u32)(r_ecx+0x61cu));
    /* 00433a49: mov dword ptr [0xa43d14], edx */ W32((u32)(0xa43d14u), r_edx);
    /* 00433a4f: mov edx, dword ptr [ecx + 0x3c8] */ r_edx = R32((u32)(r_ecx+0x3c8u));
    /* 00433a55: mov dword ptr [0xa43d18], edx */ W32((u32)(0xa43d18u), r_edx);
    /* 00433a5b: mov dword ptr [0xa43d1c], eax */ W32((u32)(0xa43d1cu), r_eax);
    /* 00433a60: lea eax, [ecx + 0x400] */ r_eax = (u32)(r_ecx+0x400u);
    /* 00433a66: mov dword ptr [0xa43cf8], eax */ W32((u32)(0xa43cf8u), r_eax);
    /* 00433a6b: mov eax, dword ptr [ecx + 0x624] */ r_eax = R32((u32)(r_ecx+0x624u));
    /* 00433a71: mov dword ptr [0xa43cf0], eax */ W32((u32)(0xa43cf0u), r_eax);
    /* 00433a76: mov eax, dword ptr [ecx + 0x620] */ r_eax = R32((u32)(r_ecx+0x620u));
    /* 00433a7c: mov dword ptr [0xa43cec], eax */ W32((u32)(0xa43cecu), r_eax);
    /* 00433a81: add ecx, 0x4f0 */ {  u32 a = r_ecx; u32 b = 0x4f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00433a87: mov dword ptr [0xa43cf4], ecx */ W32((u32)(0xa43cf4u), r_ecx);
    /* 00433a8d: ret  */ FN_RET(0x00433a18); r_esp += 4; return;
}

void f_00433a90(void) /* sub_433A90 */
{
    FN_ENTER(0x00433a90);
    /* 00433a90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00433a91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00433a92: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00433a95: mov esi, ecx */ r_esi = r_ecx;
    /* 00433a97: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00433a9c: mov ecx, esi */ r_ecx = r_esi;
    /* 00433a9e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00433aa0: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00433aa5: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x433aa8u); call_ind(t); }
    /* 00433aa8: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00433aad: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00433ab2: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x433ab7u); f_00520d08();
    /* 00433ab7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x433abcu); f_0082d7b0();
    /* 00433abc: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00433abf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x433ac4u); f_0082d838();
    /* 00433ac4: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00433ac7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433ac9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x433aceu); f_0082d8bc();
    /* 00433ace: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00433ad1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433ad3: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x433ad8u); f_0082e9e4();
    /* 00433ad8: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 00433adb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433add: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x433ae2u); f_00830c04();
    /* 00433ae2: mov dword ptr [esp + 0xc], 0x40000000 */ W32((u32)(r_esp+0xcu), 0x40000000u);
    /* 00433aea: mov dword ptr [esp + 0x10], 0x40000000 */ W32((u32)(r_esp+0x10u), 0x40000000u);
    /* 00433af2: mov dword ptr [esp + 0x14], 0x40000000 */ W32((u32)(r_esp+0x14u), 0x40000000u);
    /* 00433afa: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x433affu); f_00520e6c();
    /* 00433aff: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00433b03: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x433b08u); f_00831290();
    /* 00433b08: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00433b0a:; BB(0x00433b0a);
    /* 00433b0a: mov ecx, dword ptr [esi + ebx*4 + 0x5e8] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x5e8u));
    /* 00433b11: call 0x4355bc */ r_esp -= 4; W32(r_esp, 0x433b16u); f_004355bc();
    /* 00433b16: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433b19: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433b1c: jl 0x433b0a */ if ((fS!=fO)) goto L_00433b0a;
L_00433b1e:; BB(0x00433b1e);
    /* 00433b1e: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 00433b24: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00433b28: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00433b2d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00433b32: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00433b36: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00433b3a: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00433b3e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00433b42: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00433b46: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00433b48: jl 0x433b56 */ if ((fS!=fO)) goto L_00433b56;
L_00433b4a:; BB(0x00433b4a);
    /* 00433b4a: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433b4d: jl 0x433b58 */ if ((fS!=fO)) goto L_00433b58;
L_00433b4f:; BB(0x00433b4f);
    /* 00433b4f: mov edx, 0x10 */ r_edx = 0x10u;
    /* 00433b54: jmp 0x433b58 */ goto L_00433b58;
L_00433b56:; BB(0x00433b56);
    /* 00433b56: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00433b58:; BB(0x00433b58);
    /* 00433b58: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433b5e: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 00433b64: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433b66: mov ebx, dword ptr [eax + edx*8 + 4] */ r_ebx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00433b6a: mov edx, dword ptr [esi + 0xdc] */ r_edx = R32((u32)(r_esi+0xdcu));
    /* 00433b70: mov ebx, dword ptr [edx + ebx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ebx*8+0x4u));
    /* 00433b74: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 00433b79: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x433b7eu); f_007c1100();
    /* 00433b7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433b80: je 0x433c02 */ if (fZ) goto L_00433c02;
L_00433b86:; BB(0x00433b86);
    /* 00433b86: fld dword ptr [0x8fcd50] */ FPUSH(R_F32((u32)(0x8fcd50u)));
    /* 00433b8c: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00433b8f: fld dword ptr [esi + 0x364] */ FPUSH(R_F32((u32)(r_esi+0x364u)));
    /* 00433b95: fadd dword ptr [esi + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc0u));
    /* 00433b9b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00433b9d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433b9f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00433ba3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433ba6: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00433baa: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00433bae: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00433bb1: fadd dword ptr [edx*4 + 0x8fcbf8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x8fcbf8u));
    /* 00433bb8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00433bb9: jae 0x433cb7 */ if (!fC) goto L_00433cb7;
L_00433bbf:; BB(0x00433bbf);
    /* 00433bbf: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
L_00433bc3:; BB(0x00433bc3);
    /* 00433bc3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00433bc5: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00433bc7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433bc9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00433bca: jb 0x433bc3 */ if (fC) goto L_00433bc3;
L_00433bcc:; BB(0x00433bcc);
    /* 00433bcc: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00433bce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00433bd0: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_00433bd4:; BB(0x00433bd4);
    /* 00433bd4: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00433bd8: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00433bda: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433bdc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00433bdd: jbe 0x433ca9 */ if ((fC||fZ)) goto L_00433ca9;
L_00433be3:; BB(0x00433be3);
    /* 00433be3: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
L_00433be7:; BB(0x00433be7);
    /* 00433be7: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00433be9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00433beb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433bed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00433bee: ja 0x433be7 */ if ((!fC&&!fZ)) goto L_00433be7;
L_00433bf0:; BB(0x00433bf0);
    /* 00433bf0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00433bf2: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00433bf6: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00433bfa: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 00433c00: jmp 0x433c5c */ goto L_00433c5c;
L_00433c02:; BB(0x00433c02);
    /* 00433c02: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 00433c08: fcom dword ptr [0x8fcd50] */ fx_compare(ST(0), R_F32((u32)(0x8fcd50u))); 
    /* 00433c0e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433c10: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00433c14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00433c15: jae 0x433c23 */ if (!fC) goto L_00433c23;
L_00433c17:; BB(0x00433c17);
    /* 00433c17: fld dword ptr [0x8fcd50] */ FPUSH(R_F32((u32)(0x8fcd50u)));
    /* 00433c1d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00433c21: jmp 0x433c5c */ goto L_00433c5c;
L_00433c23:; BB(0x00433c23);
    /* 00433c23: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00433c27: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00433c2a: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 00433c2d: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00433c31: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00433c35: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00433c38: fadd dword ptr [edx*4 + 0x8fcbf8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x8fcbf8u));
    /* 00433c3f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00433c41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00433c43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00433c44: jae 0x433c5c */ if (!fC) goto L_00433c5c;
L_00433c46:; BB(0x00433c46);
    /* 00433c46: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00433c4a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00433c4e: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00433c51: fadd dword ptr [ecx*4 + 0x8fcbf8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8fcbf8u));
    /* 00433c58: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_00433c5c:; BB(0x00433c5c);
    /* 00433c5c: mov ecx, esi */ r_ecx = r_esi;
    /* 00433c5e: call 0x433a18 */ r_esp -= 4; W32(r_esp, 0x433c63u); f_00433a18();
    /* 00433c63: mov ecx, 0x42a904 */ r_ecx = 0x42a904u;
    /* 00433c68: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x433c6du); f_0082fac4();
    /* 00433c6d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00433c70: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x433c75u); f_00829cc8();
    /* 00433c75: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00433c79: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00433c7c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00433c80: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00433c83: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00433c87: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x433c8cu); f_0083046c();
    /* 00433c8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433c8e: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x433c93u); f_0082fac4();
    /* 00433c93: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00433c99: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x433c9eu); f_0061cdb0();
    /* 00433c9e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x433ca3u); f_0082da80();
    /* 00433ca3: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00433ca6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00433ca7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00433ca8: ret  */ FN_RET(0x00433a90); r_esp += 4; return;
L_00433ca9:; BB(0x00433ca9);
    /* 00433ca9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433cab: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00433caf: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 00433cb5: jmp 0x433c5c */ goto L_00433c5c;
L_00433cb7:; BB(0x00433cb7);
    /* 00433cb7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00433cb9: jmp 0x433bd4 */ goto L_00433bd4;
}

void f_00433cc0(void) /* sub_433CC0 */
{
    FN_ENTER(0x00433cc0);
    /* 00433cc0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00433cc4: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00433cc7: ja 0x433ed9 */ if ((!fC&&!fZ)) goto L_00433ed9;
L_00433ccd:; BB(0x00433ccd);
    /* 00433ccd: mov eax, dword ptr [eax*4 + 0x8fcb00] */ r_eax = R32((u32)(r_eax*4+0x8fcb00u));
    /* 00433cd4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433cc0); r_esp += 12; return;
}

void f_00433cd6(void)
{
    FN_ENTER(0x00433cd6);
    /* 00433cd6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00433cda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433cdb: call 0x42eeb0 */ r_esp -= 4; W32(r_esp, 0x433ce0u); f_0042eeb0();
    /* 00433ce0: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433cd6); r_esp += 12; return;
}

void f_00433ce5(void)
{
    FN_ENTER(0x00433ce5);
    /* 00433ce5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00433ce9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433cea: call 0x42ef44 */ r_esp -= 4; W32(r_esp, 0x433cefu); f_0042ef44();
    /* 00433cef: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433ce5); r_esp += 12; return;
}

void f_00433cf4(void)
{
    FN_ENTER(0x00433cf4);
    /* 00433cf4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00433cf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433cf9: call 0x42f6fc */ r_esp -= 4; W32(r_esp, 0x433cfeu); f_0042f6fc();
    /* 00433cfe: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433cf4); r_esp += 12; return;
}

void f_00433d03(void)
{
    FN_ENTER(0x00433d03);
    /* 00433d03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d05: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433d09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d0a: call 0x42ebf0 */ r_esp -= 4; W32(r_esp, 0x433d0fu); f_0042ebf0();
    /* 00433d0f: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433d03); r_esp += 12; return;
}

void f_00433d14(void)
{
    FN_ENTER(0x00433d14);
    /* 00433d14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d16: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433d1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d1b: call 0x42ebf0 */ r_esp -= 4; W32(r_esp, 0x433d20u); f_0042ebf0();
    /* 00433d20: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433d14); r_esp += 12; return;
}

void f_00433d25(void)
{
    FN_ENTER(0x00433d25);
    /* 00433d25: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00433d29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d2a: call 0x42f96c */ r_esp -= 4; W32(r_esp, 0x433d2fu); f_0042f96c();
    /* 00433d2f: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433d25); r_esp += 12; return;
}

void f_00433d34(void)
{
    FN_ENTER(0x00433d34);
    /* 00433d34: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00433d38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d39: call 0x430724 */ r_esp -= 4; W32(r_esp, 0x433d3eu); f_00430724();
    /* 00433d3e: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433d34); r_esp += 12; return;
}

void f_00433d43(void)
{
    FN_ENTER(0x00433d43);
    /* 00433d43: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d45: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433d49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d4a: call 0x42e824 */ r_esp -= 4; W32(r_esp, 0x433d4fu); f_0042e824();
    /* 00433d4f: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433d43); r_esp += 12; return;
}

void f_00433d54(void)
{
    FN_ENTER(0x00433d54);
    /* 00433d54: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d56: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433d5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d5b: call 0x42e824 */ r_esp -= 4; W32(r_esp, 0x433d60u); f_0042e824();
    /* 00433d60: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433d54); r_esp += 12; return;
}

void f_00433d65(void)
{
    FN_ENTER(0x00433d65);
    /* 00433d65: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d67: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433d6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d6c: call 0x42e348 */ r_esp -= 4; W32(r_esp, 0x433d71u); f_0042e348();
    /* 00433d71: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433d65); r_esp += 12; return;
}

void f_00433d76(void)
{
    FN_ENTER(0x00433d76);
    /* 00433d76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d78: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433d7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d7d: call 0x42e348 */ r_esp -= 4; W32(r_esp, 0x433d82u); f_0042e348();
    /* 00433d82: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433d76); r_esp += 12; return;
}

void f_00433d87(void)
{
    FN_ENTER(0x00433d87);
    /* 00433d87: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d89: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433d8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d8e: call 0x42dd68 */ r_esp -= 4; W32(r_esp, 0x433d93u); f_0042dd68();
    /* 00433d93: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433d87); r_esp += 12; return;
}

void f_00433d98(void)
{
    FN_ENTER(0x00433d98);
    /* 00433d98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d9a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d9f: call 0x42dd68 */ r_esp -= 4; W32(r_esp, 0x433da4u); f_0042dd68();
    /* 00433da4: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433d98); r_esp += 12; return;
}

void f_00433da9(void)
{
    FN_ENTER(0x00433da9);
    /* 00433da9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433dab: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433daf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433db0: call 0x42d304 */ r_esp -= 4; W32(r_esp, 0x433db5u); f_0042d304();
    /* 00433db5: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433da9); r_esp += 12; return;
}

void f_00433dba(void)
{
    FN_ENTER(0x00433dba);
    /* 00433dba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433dbc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433dc1: call 0x42d304 */ r_esp -= 4; W32(r_esp, 0x433dc6u); f_0042d304();
    /* 00433dc6: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433dba); r_esp += 12; return;
}

void f_00433dcb(void)
{
    FN_ENTER(0x00433dcb);
    /* 00433dcb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433dcd: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433dd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433dd2: call 0x42ce8c */ r_esp -= 4; W32(r_esp, 0x433dd7u); f_0042ce8c();
    /* 00433dd7: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433dcb); r_esp += 12; return;
}

void f_00433ddc(void)
{
    FN_ENTER(0x00433ddc);
    /* 00433ddc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433dde: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00433de2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433de3: call 0x42ce8c */ r_esp -= 4; W32(r_esp, 0x433de8u); f_0042ce8c();
    /* 00433de8: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433ddc); r_esp += 12; return;
}

void f_00433ded(void)
{
    FN_ENTER(0x00433ded);
    /* 00433ded: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00433df1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433df2: call 0x430a90 */ r_esp -= 4; W32(r_esp, 0x433df7u); f_00430a90();
    /* 00433df7: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433ded); r_esp += 12; return;
}

void f_00433dfc(void)
{
    FN_ENTER(0x00433dfc);
    /* 00433dfc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433dfe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e00: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e05: call 0x42b94c */ r_esp -= 4; W32(r_esp, 0x433e0au); f_0042b94c();
    /* 00433e0a: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433dfc); r_esp += 12; return;
}

void f_00433e0f(void)
{
    FN_ENTER(0x00433e0f);
    /* 00433e0f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00433e13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e14: call 0x431058 */ r_esp -= 4; W32(r_esp, 0x433e19u); f_00431058();
    /* 00433e19: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433e0f); r_esp += 12; return;
}

void f_00433e1e(void)
{
    FN_ENTER(0x00433e1e);
    /* 00433e1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e20: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e22: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433e26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e27: call 0x42b94c */ r_esp -= 4; W32(r_esp, 0x433e2cu); f_0042b94c();
    /* 00433e2c: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433e1e); r_esp += 12; return;
}

void f_00433e31(void)
{
    FN_ENTER(0x00433e31);
    /* 00433e31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e33: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e35: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433e39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e3a: call 0x42b94c */ r_esp -= 4; W32(r_esp, 0x433e3fu); f_0042b94c();
    /* 00433e3f: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433e31); r_esp += 12; return;
}

void f_00433e44(void)
{
    FN_ENTER(0x00433e44);
    /* 00433e44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e46: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e48: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e4d: call 0x42c194 */ r_esp -= 4; W32(r_esp, 0x433e52u); f_0042c194();
    /* 00433e52: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433e44); r_esp += 12; return;
}

void f_00433e57(void)
{
    FN_ENTER(0x00433e57);
    /* 00433e57: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e59: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e5b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433e5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e60: call 0x42b94c */ r_esp -= 4; W32(r_esp, 0x433e65u); f_0042b94c();
    /* 00433e65: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433e57); r_esp += 12; return;
}

void f_00433e67(void)
{
    FN_ENTER(0x00433e67);
    /* 00433e67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e6b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e70: call 0x42b94c */ r_esp -= 4; W32(r_esp, 0x433e75u); f_0042b94c();
    /* 00433e75: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433e67); r_esp += 12; return;
}

void f_00433e77(void)
{
    FN_ENTER(0x00433e77);
    /* 00433e77: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e7b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433e7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e80: call 0x42b94c */ r_esp -= 4; W32(r_esp, 0x433e85u); f_0042b94c();
    /* 00433e85: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433e77); r_esp += 12; return;
}

void f_00433e87(void)
{
    FN_ENTER(0x00433e87);
    /* 00433e87: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e8b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e90: call 0x42b94c */ r_esp -= 4; W32(r_esp, 0x433e95u); f_0042b94c();
    /* 00433e95: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433e87); r_esp += 12; return;
}

void f_00433e97(void)
{
    FN_ENTER(0x00433e97);
    /* 00433e97: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e9b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433e9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433ea0: call 0x42c194 */ r_esp -= 4; W32(r_esp, 0x433ea5u); f_0042c194();
    /* 00433ea5: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433e97); r_esp += 12; return;
}

void f_00433ea7(void)
{
    FN_ENTER(0x00433ea7);
    /* 00433ea7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433ea9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433eab: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00433eaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433eb0: call 0x42b94c */ r_esp -= 4; W32(r_esp, 0x433eb5u); f_0042b94c();
    /* 00433eb5: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433ea7); r_esp += 12; return;
}

void f_00433eb7(void)
{
    FN_ENTER(0x00433eb7);
    /* 00433eb7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00433ebb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433ebc: call 0x4318ac */ r_esp -= 4; W32(r_esp, 0x433ec1u); f_004318ac();
    /* 00433ec1: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433eb7); r_esp += 12; return;
}

void f_00433ec3(void)
{
    FN_ENTER(0x00433ec3);
    /* 00433ec3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00433ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433ec8: call 0x4321cc */ r_esp -= 4; W32(r_esp, 0x433ecdu); f_004321cc();
    /* 00433ecd: jmp 0x433ed9 */ goto L_00433ed9;
L_00433ed9:; BB(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433ec3); r_esp += 12; return;
}

void f_00433ecf(void)
{
    FN_ENTER(0x00433ecf);
    /* 00433ecf: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00433ed3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433ed4: call 0x4347b4 */ r_esp -= 4; W32(r_esp, 0x433ed9u); f_004347b4();
    /* 00433ed9: ret 8 */ FN_RET(0x00433ecf); r_esp += 12; return;
}

void f_00433ed9(void)
{
    FN_ENTER(0x00433ed9);
    /* 00433ed9: ret 8 */ FN_RET(0x00433ed9); r_esp += 12; return;
}

void f_00433edc(void) /* sub_433EDC */
{
    FN_ENTER(0x00433edc);
    /* 00433edc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00433edd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00433ee0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00433ee2: movsx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 00433ee9: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00433ef0: mov ecx, dword ptr [ebx + 0x3c8] */ r_ecx = R32((u32)(r_ebx+0x3c8u));
    /* 00433ef6: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00433ef8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00433efa: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00433efd: jne 0x433f1a */ if (!fZ) goto L_00433f1a;
L_00433eff:; BB(0x00433eff);
    /* 00433eff: mov ecx, dword ptr [ebx + 0x6b8] */ r_ecx = R32((u32)(r_ebx+0x6b8u));
    /* 00433f05: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00433f07: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00433f09: jl 0x433fca */ if ((fS!=fO)) goto L_00433fca;
L_00433f0f:; BB(0x00433f0f);
    /* 00433f0f: mov dword ptr [ebx + 0x6b8], ecx */ W32((u32)(r_ebx+0x6b8u), r_ecx);
    /* 00433f15: jmp 0x433fb7 */ goto L_00433fb7;
L_00433f1a:; BB(0x00433f1a);
    /* 00433f1a: fld dword ptr [0x8fcd4c] */ FPUSH(R_F32((u32)(0x8fcd4cu)));
    /* 00433f20: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 00433f26: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00433f28: fld dword ptr [0x8fcd48] */ FPUSH(R_F32((u32)(0x8fcd48u)));
    /* 00433f2e: mov edx, dword ptr [ebx + 0x6b4] */ r_edx = R32((u32)(r_ebx+0x6b4u));
    /* 00433f34: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00433f36: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 00433f3c: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 00433f42: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00433f44: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00433f46: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00433f48: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00433f4a: mov dword ptr [ebx + 0x6b4], edx */ W32((u32)(r_ebx+0x6b4u), r_edx);
    /* 00433f50: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00433f56: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00433f59: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00433f5c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00433f5e: fsubr dword ptr [esp] */ ST(0) = R_F32((u32)(r_esp)) - ST(0);
    /* 00433f61: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00433f64: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00433f68: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00433f6a: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00433f6e: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00433f70: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00433f73: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00433f76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00433f78: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00433f7c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00433f80: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 00433f84: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00433f88: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00433f8b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433f8d: push 0x127 */ { u32 v = 0x127u; r_esp -= 4; W32(r_esp, v); }
    /* 00433f92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433f93: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x433f98u); f_0050b7a4();
    /* 00433f98: lea edx, [ebx + 0x520] */ r_edx = (u32)(r_ebx+0x520u);
    /* 00433f9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00433fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433fa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433fa2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433fa3: push 0x336 */ { u32 v = 0x336u; r_esp -= 4; W32(r_esp, v); }
    /* 00433fa8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x433fadu); f_00814298();
    /* 00433fad: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433fb0: movsx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
L_00433fb7:; BB(0x00433fb7);
    /* 00433fb7: mov word ptr [ebx + 0x334], dx */ W16((u32)(r_ebx+0x334u), (u16)r_edx);
    /* 00433fbe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433fc0: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x433fc5u); f_0051f81c();
    /* 00433fc5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00433fc8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00433fc9: ret  */ FN_RET(0x00433edc); r_esp += 4; return;
L_00433fca:; BB(0x00433fca);
    /* 00433fca: mov dword ptr [ebx + 0x6b8], 0 */ W32((u32)(r_ebx+0x6b8u), 0x0u);
    /* 00433fd4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00433fd6: call 0x433fe4 */ r_esp -= 4; W32(r_esp, 0x433fdbu); f_00433fe4();
    /* 00433fdb: movsx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 00433fe2: jmp 0x433fb7 */ goto L_00433fb7;
}

void f_00433fe4(void) /* sub_433FE4 */
{
    FN_ENTER(0x00433fe4);
    /* 00433fe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00433fe5: mov edi, ecx */ r_edi = r_ecx;
    /* 00433fe7: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 00433fed: or eax, 0x88 */ {  u32 a = r_eax; u32 b = 0x88u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00433ff2: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 00433ff8: mov ecx, edi */ r_ecx = r_edi;
    /* 00433ffa: call 0x434018 */ r_esp -= 4; W32(r_esp, 0x433fffu); f_00434018();
    /* 00433fff: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00434002: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00434004: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434005: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00434006: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00434007: push 0x32d */ { u32 v = 0x32du; r_esp -= 4; W32(r_esp, v); }
    /* 0043400c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x434011u); f_00814298();
    /* 00434011: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00434014: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00434015: ret  */ FN_RET(0x00433fe4); r_esp += 4; return;
}

