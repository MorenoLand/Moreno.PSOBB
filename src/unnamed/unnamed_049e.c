#include "protos.h"

void f_0049e250(void) /* sub_49E250 */
{
    FN_ENTER(0x0049e250);
    /* 0049e250: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0049e257: mov dword ptr [ecx + 0x508], eax */ W32((u32)(r_ecx+0x508u), r_eax);
    /* 0049e25d: ret  */ FN_RET(0x0049e250); r_esp += 4; return;
}

void f_0049e260(void) /* sub_49E260 */
{
    FN_ENTER(0x0049e260);
    /* 0049e260: mov dword ptr [ecx + 0x530], 0xffffffff */ W32((u32)(r_ecx+0x530u), 0xffffffffu);
    /* 0049e26a: mov dword ptr [ecx + 0x534], 0 */ W32((u32)(r_ecx+0x534u), 0x0u);
    /* 0049e274: ret  */ FN_RET(0x0049e260); r_esp += 4; return;
}

void f_0049e278(void) /* sub_49E278 */
{
    FN_ENTER(0x0049e278);
    /* 0049e278: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049e279: mov edi, ecx */ r_edi = r_ecx;
    /* 0049e27b: mov ecx, dword ptr [edi + 0x428] */ r_ecx = R32((u32)(r_edi+0x428u));
    /* 0049e281: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049e283: je 0x49e2a3 */ if (fZ) goto L_0049e2a3;
L_0049e285:; BB(0x0049e285);
    /* 0049e285: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0049e28b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049e28d: je 0x49e2a3 */ if (fZ) goto L_0049e2a3;
L_0049e28f:; BB(0x0049e28f);
    /* 0049e28f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049e291: call 0x48a8d4 */ r_esp -= 4; W32(r_esp, 0x49e296u); f_0048a8d4();
    /* 0049e296: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049e298: mov ecx, dword ptr [edi + 0x42c] */ r_ecx = R32((u32)(r_edi+0x42cu));
    /* 0049e29e: call 0x48a8d4 */ r_esp -= 4; W32(r_esp, 0x49e2a3u); f_0048a8d4();
L_0049e2a3:; BB(0x0049e2a3);
    /* 0049e2a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049e2a4: ret  */ FN_RET(0x0049e278); r_esp += 4; return;
}

void f_0049e2a8(void) /* sub_49E2A8 */
{
    FN_ENTER(0x0049e2a8);
    /* 0049e2a8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049e2ac: movzx edx, word ptr [ecx + 0x2da] */ r_edx = (u32)R16((u32)(r_ecx+0x2dau));
    /* 0049e2b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0049e2b6: movzx eax, word ptr [ecx + 0x2d8] */ r_eax = (u32)R16((u32)(r_ecx+0x2d8u));
    /* 0049e2bd: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0049e2c1: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0049e2c4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0049e2c8: movzx edx, word ptr [ecx + 0xfc] */ r_edx = (u32)R16((u32)(r_ecx+0xfcu));
    /* 0049e2cf: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0049e2d2: movzx edx, word ptr [ecx + 0xfe] */ r_edx = (u32)R16((u32)(r_ecx+0xfeu));
    /* 0049e2d9: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 0049e2dd: movzx edx, word ptr [ecx + 0x100] */ r_edx = (u32)R16((u32)(r_ecx+0x100u));
    /* 0049e2e4: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 0049e2e8: movzx edx, word ptr [ecx + 0x102] */ r_edx = (u32)R16((u32)(r_ecx+0x102u));
    /* 0049e2ef: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
    /* 0049e2f3: ret 0xc */ FN_RET(0x0049e2a8); r_esp += 16; return;
}

void f_0049e300(void) /* sub_49E300 */
{
    FN_ENTER(0x0049e300);
    /* 0049e300: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049e301: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0049e305: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 0049e308: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049e30a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0049e30d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049e30f: mov edi, dword ptr [edx + ecx + 0x65c] */ r_edi = R32((u32)(r_edx+r_ecx+0x65cu));
    /* 0049e316: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0049e31a: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0049e31c: mov edi, dword ptr [edx + ecx + 0x660] */ r_edi = R32((u32)(r_edx+r_ecx+0x660u));
    /* 0049e323: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0049e326: mov edx, dword ptr [edx + ecx + 0x664] */ r_edx = R32((u32)(r_edx+r_ecx+0x664u));
    /* 0049e32d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0049e330: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0049e334: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0049e337: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0049e339: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049e33a: ret 0xc */ FN_RET(0x0049e300); r_esp += 16; return;
}

void f_0049e340(void) /* sub_49E340 */
{
    FN_ENTER(0x0049e340);
    /* 0049e340: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0049e344: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049e346: jle 0x49e35b */ if ((fZ||fS!=fO)) goto L_0049e35b;
L_0049e348:; BB(0x0049e348);
    /* 0049e348: mov eax, dword ptr [ecx + 0x430] */ r_eax = R32((u32)(r_ecx+0x430u));
    /* 0049e34e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049e350: je 0x49e355 */ if (fZ) goto L_0049e355;
L_0049e352:; BB(0x0049e352);
    /* 0049e352: ret 4 */ FN_RET(0x0049e340); r_esp += 8; return;
L_0049e355:; BB(0x0049e355);
    /* 0049e355: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e356: call 0x49cd10 */ r_esp -= 4; W32(r_esp, 0x49e35bu); f_0049cd10();
L_0049e35b:; BB(0x0049e35b);
    /* 0049e35b: ret 4 */ FN_RET(0x0049e340); r_esp += 8; return;
}

void f_0049e360(void) /* sub_49E360 */
{
    FN_ENTER(0x0049e360);
    /* 0049e360: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049e364: mov edx, dword ptr [ecx + 0x5b4] */ r_edx = R32((u32)(r_ecx+0x5b4u));
    /* 0049e36a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0049e36c: mov edx, dword ptr [ecx + 0x5b8] */ r_edx = R32((u32)(r_ecx+0x5b8u));
    /* 0049e372: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0049e375: mov edx, dword ptr [ecx + 0x5bc] */ r_edx = R32((u32)(r_ecx+0x5bcu));
    /* 0049e37b: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0049e37e: ret 4 */ FN_RET(0x0049e360); r_esp += 8; return;
}

void f_0049e384(void) /* sub_49E384 */
{
    FN_ENTER(0x0049e384);
    /* 0049e384: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0049e388: mov eax, dword ptr [ecx + 0x614] */ r_eax = R32((u32)(r_ecx+0x614u));
    /* 0049e38e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0049e390: mov eax, dword ptr [ecx + 0x618] */ r_eax = R32((u32)(r_ecx+0x618u));
    /* 0049e396: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0049e399: mov eax, dword ptr [ecx + 0x61c] */ r_eax = R32((u32)(r_ecx+0x61cu));
    /* 0049e39f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0049e3a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0049e3a6: mov edx, dword ptr [ecx + 0x5d8] */ r_edx = R32((u32)(r_ecx+0x5d8u));
    /* 0049e3ac: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0049e3ae: mov edx, dword ptr [ecx + 0x5dc] */ r_edx = R32((u32)(r_ecx+0x5dcu));
    /* 0049e3b4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0049e3b7: mov edx, dword ptr [ecx + 0x5e0] */ r_edx = R32((u32)(r_ecx+0x5e0u));
    /* 0049e3bd: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0049e3c0: ret 8 */ FN_RET(0x0049e384); r_esp += 12; return;
}

void f_0049e3c4(void) /* sub_49E3C4 */
{
    FN_ENTER(0x0049e3c4);
    /* 0049e3c4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049e3c8: mov edx, dword ptr [ecx + 0x638] */ r_edx = R32((u32)(r_ecx+0x638u));
    /* 0049e3ce: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0049e3d0: mov edx, dword ptr [ecx + 0x63c] */ r_edx = R32((u32)(r_ecx+0x63cu));
    /* 0049e3d6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0049e3d9: mov edx, dword ptr [ecx + 0x640] */ r_edx = R32((u32)(r_ecx+0x640u));
    /* 0049e3df: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0049e3e2: ret 4 */ FN_RET(0x0049e3c4); r_esp += 8; return;
}

void f_0049e3e8(void) /* sub_49E3E8 */
{
    FN_ENTER(0x0049e3e8);
    /* 0049e3e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049e3e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049e3ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049e3eb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049e3ee: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0049e3f2: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 0049e3f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e3f7: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x49e3fcu); f_00786b3c();
    /* 0049e3fc: mov edi, eax */ r_edi = r_eax;
    /* 0049e3fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049e401: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e403: je 0x49e65f */ if (fZ) goto L_0049e65f;
L_0049e409:; BB(0x0049e409);
    /* 0049e409: lea eax, [ebp + 4] */ r_eax = (u32)(r_ebp+0x4u);
    /* 0049e40c: lea edx, [edi + 0x498] */ r_edx = (u32)(r_edi+0x498u);
    /* 0049e412: call 0x49e670 */ r_esp -= 4; W32(r_esp, 0x49e417u); f_0049e670();
    /* 0049e417: mov eax, edi */ r_eax = r_edi;
    /* 0049e419: mov edx, ebp */ r_edx = r_ebp;
    /* 0049e41b: call 0x49e70c */ r_esp -= 4; W32(r_esp, 0x49e420u); f_0049e70c();
    /* 0049e420: movsx edx, byte ptr [ebp + 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x4u));
    /* 0049e424: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e426: jl 0x49e42d */ if ((fS!=fO)) goto L_0049e42d;
L_0049e428:; BB(0x0049e428);
    /* 0049e428: cmp edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049e42b: jl 0x49e434 */ if ((fS!=fO)) goto L_0049e434;
L_0049e42d:; BB(0x0049e42d);
    /* 0049e42d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049e430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049e431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049e432: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049e433: ret  */ FN_RET(0x0049e3e8); r_esp += 4; return;
L_0049e434:; BB(0x0049e434);
    /* 0049e434: mov esi, dword ptr [edi + 0x3f8] */ r_esi = R32((u32)(r_edi+0x3f8u));
    /* 0049e43a: mov ebp, dword ptr [edi + 0x3f4] */ r_ebp = R32((u32)(r_edi+0x3f4u));
    /* 0049e440: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 0049e446: mov dword ptr [edi + 0x3fc], esi */ W32((u32)(r_edi+0x3fcu), r_esi);
    /* 0049e44c: mov dword ptr [edi + 0x3f8], ebp */ W32((u32)(r_edi+0x3f8u), r_ebp);
    /* 0049e452: mov ebp, dword ptr [edi + 0x3f0] */ r_ebp = R32((u32)(r_edi+0x3f0u));
    /* 0049e458: mov dword ptr [edi + 0x3f4], ebp */ W32((u32)(r_edi+0x3f4u), r_ebp);
    /* 0049e45e: mov ebp, dword ptr [edi + 0x3ec] */ r_ebp = R32((u32)(r_edi+0x3ecu));
    /* 0049e464: mov dword ptr [edi + 0x3f0], ebp */ W32((u32)(r_edi+0x3f0u), r_ebp);
    /* 0049e46a: mov ebp, dword ptr [edi + 0x3e8] */ r_ebp = R32((u32)(r_edi+0x3e8u));
    /* 0049e470: mov dword ptr [edi + 0x3ec], ebp */ W32((u32)(r_edi+0x3ecu), r_ebp);
    /* 0049e476: mov ebp, dword ptr [edi + 0x3e4] */ r_ebp = R32((u32)(r_edi+0x3e4u));
    /* 0049e47c: mov dword ptr [edi + 0x3e8], ebp */ W32((u32)(r_edi+0x3e8u), r_ebp);
    /* 0049e482: mov ebp, dword ptr [edi + 0x3e0] */ r_ebp = R32((u32)(r_edi+0x3e0u));
    /* 0049e488: mov dword ptr [edi + 0x3e4], ebp */ W32((u32)(r_edi+0x3e4u), r_ebp);
    /* 0049e48e: mov ebp, dword ptr [edi + 0x3dc] */ r_ebp = R32((u32)(r_edi+0x3dcu));
    /* 0049e494: mov dword ptr [edi + 0x3e0], ebp */ W32((u32)(r_edi+0x3e0u), r_ebp);
    /* 0049e49a: mov ebp, dword ptr [edi + 0x3d8] */ r_ebp = R32((u32)(r_edi+0x3d8u));
    /* 0049e4a0: mov dword ptr [edi + 0x3dc], ebp */ W32((u32)(r_edi+0x3dcu), r_ebp);
    /* 0049e4a6: mov ebp, dword ptr [edi + 0x3d4] */ r_ebp = R32((u32)(r_edi+0x3d4u));
    /* 0049e4ac: mov dword ptr [edi + 0x3d8], ebp */ W32((u32)(r_edi+0x3d8u), r_ebp);
    /* 0049e4b2: mov ebp, dword ptr [edi + 0x3d0] */ r_ebp = R32((u32)(r_edi+0x3d0u));
    /* 0049e4b8: mov dword ptr [edi + 0x3d4], ebp */ W32((u32)(r_edi+0x3d4u), r_ebp);
    /* 0049e4be: mov ebp, dword ptr [edi + 0x3cc] */ r_ebp = R32((u32)(r_edi+0x3ccu));
    /* 0049e4c4: mov dword ptr [edi + 0x3d0], ebp */ W32((u32)(r_edi+0x3d0u), r_ebp);
    /* 0049e4ca: mov ebp, dword ptr [edi + 0x3c8] */ r_ebp = R32((u32)(r_edi+0x3c8u));
    /* 0049e4d0: mov dword ptr [edi + 0x3cc], ebp */ W32((u32)(r_edi+0x3ccu), r_ebp);
    /* 0049e4d6: mov ebp, dword ptr [edi + 0x3c4] */ r_ebp = R32((u32)(r_edi+0x3c4u));
    /* 0049e4dc: mov dword ptr [edi + 0x3c8], ebp */ W32((u32)(r_edi+0x3c8u), r_ebp);
    /* 0049e4e2: mov ebp, dword ptr [edi + 0x3c0] */ r_ebp = R32((u32)(r_edi+0x3c0u));
    /* 0049e4e8: mov dword ptr [edi + 0x3c4], ebp */ W32((u32)(r_edi+0x3c4u), r_ebp);
    /* 0049e4ee: mov ebp, dword ptr [edi + 0x3bc] */ r_ebp = R32((u32)(r_edi+0x3bcu));
    /* 0049e4f4: mov dword ptr [edi + 0x3c0], ebp */ W32((u32)(r_edi+0x3c0u), r_ebp);
    /* 0049e4fa: mov ebp, dword ptr [edi + 0x3b8] */ r_ebp = R32((u32)(r_edi+0x3b8u));
    /* 0049e500: mov dword ptr [edi + 0x3bc], ebp */ W32((u32)(r_edi+0x3bcu), r_ebp);
    /* 0049e506: mov ebp, dword ptr [edi + 0x3b4] */ r_ebp = R32((u32)(r_edi+0x3b4u));
    /* 0049e50c: mov dword ptr [edi + 0x3b8], ebp */ W32((u32)(r_edi+0x3b8u), r_ebp);
    /* 0049e512: mov ebp, dword ptr [edi + 0x3b0] */ r_ebp = R32((u32)(r_edi+0x3b0u));
    /* 0049e518: mov dword ptr [edi + 0x3b4], ebp */ W32((u32)(r_edi+0x3b4u), r_ebp);
    /* 0049e51e: mov ebp, dword ptr [edi + 0x3ac] */ r_ebp = R32((u32)(r_edi+0x3acu));
    /* 0049e524: mov dword ptr [edi + 0x3b0], ebp */ W32((u32)(r_edi+0x3b0u), r_ebp);
    /* 0049e52a: mov ebp, dword ptr [edi + 0x3a8] */ r_ebp = R32((u32)(r_edi+0x3a8u));
    /* 0049e530: mov dword ptr [edi + 0x3ac], ebp */ W32((u32)(r_edi+0x3acu), r_ebp);
    /* 0049e536: mov ebp, dword ptr [edi + 0x3a4] */ r_ebp = R32((u32)(r_edi+0x3a4u));
    /* 0049e53c: mov dword ptr [edi + 0x3a8], ebp */ W32((u32)(r_edi+0x3a8u), r_ebp);
    /* 0049e542: mov ebp, dword ptr [edi + 0x3a0] */ r_ebp = R32((u32)(r_edi+0x3a0u));
    /* 0049e548: mov dword ptr [edi + 0x3a4], ebp */ W32((u32)(r_edi+0x3a4u), r_ebp);
    /* 0049e54e: mov ebp, dword ptr [edi + 0x39c] */ r_ebp = R32((u32)(r_edi+0x39cu));
    /* 0049e554: mov dword ptr [edi + 0x3a0], ebp */ W32((u32)(r_edi+0x3a0u), r_ebp);
    /* 0049e55a: mov ebp, dword ptr [edi + 0x398] */ r_ebp = R32((u32)(r_edi+0x398u));
    /* 0049e560: mov dword ptr [edi + 0x39c], ebp */ W32((u32)(r_edi+0x39cu), r_ebp);
    /* 0049e566: mov ebp, dword ptr [edi + 0x394] */ r_ebp = R32((u32)(r_edi+0x394u));
    /* 0049e56c: mov dword ptr [edi + 0x398], ebp */ W32((u32)(r_edi+0x398u), r_ebp);
    /* 0049e572: mov ebp, dword ptr [edi + 0x390] */ r_ebp = R32((u32)(r_edi+0x390u));
    /* 0049e578: mov dword ptr [edi + 0x394], ebp */ W32((u32)(r_edi+0x394u), r_ebp);
    /* 0049e57e: mov ebp, dword ptr [edi + 0x38c] */ r_ebp = R32((u32)(r_edi+0x38cu));
    /* 0049e584: mov dword ptr [edi + 0x390], ebp */ W32((u32)(r_edi+0x390u), r_ebp);
    /* 0049e58a: mov ebp, dword ptr [edi + 0x388] */ r_ebp = R32((u32)(r_edi+0x388u));
    /* 0049e590: mov dword ptr [edi + 0x38c], ebp */ W32((u32)(r_edi+0x38cu), r_ebp);
    /* 0049e596: mov ebp, dword ptr [edi + 0x384] */ r_ebp = R32((u32)(r_edi+0x384u));
    /* 0049e59c: mov dword ptr [edi + 0x388], ebp */ W32((u32)(r_edi+0x388u), r_ebp);
    /* 0049e5a2: mov ebp, dword ptr [edi + 0x380] */ r_ebp = R32((u32)(r_edi+0x380u));
    /* 0049e5a8: mov dword ptr [edi + 0x384], ebp */ W32((u32)(r_edi+0x384u), r_ebp);
    /* 0049e5ae: mov dword ptr [edi + 0x380], edx */ W32((u32)(r_edi+0x380u), r_edx);
    /* 0049e5b4: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0049e5b7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049e5b9: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0049e5bb: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0049e5be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049e5c0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049e5c2: mov ebp, dword ptr [edx + 0x9a7684] */ r_ebp = R32((u32)(r_edx+0x9a7684u));
    /* 0049e5c8: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e5cb: je 0x49e643 */ if (fZ) goto L_0049e643;
L_0049e5cd:; BB(0x0049e5cd);
    /* 0049e5cd: cmp ebp, dword ptr [edi + 0x4a8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x4a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e5d3: je 0x49e643 */ if (fZ) goto L_0049e643;
L_0049e5d5:; BB(0x0049e5d5);
    /* 0049e5d5: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 0049e5db: mov dword ptr [edi + 0x4a8], ebp */ W32((u32)(r_edi+0x4a8u), r_ebp);
    /* 0049e5e1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049e5e3: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0049e5e7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049e5e9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049e5eb: push dword ptr [eax + 0x9a7488] */ { u32 v = R32((u32)(r_eax+0x9a7488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049e5f1: mov edx, dword ptr [eax + 0x9a7480] */ r_edx = R32((u32)(r_eax+0x9a7480u));
    /* 0049e5f7: mov dword ptr [edi + 0x4ac], edx */ W32((u32)(r_edi+0x4acu), r_edx);
    /* 0049e5fd: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x49e602u); f_005b8638();
    /* 0049e602: mov edx, dword ptr [edi + 0x4c0] */ r_edx = R32((u32)(r_edi+0x4c0u));
    /* 0049e608: mov dword ptr [edi + 0x4bc], edx */ W32((u32)(r_edi+0x4bcu), r_edx);
    /* 0049e60e: mov edx, dword ptr [edi + 0x4b0] */ r_edx = R32((u32)(r_edi+0x4b0u));
    /* 0049e614: mov dword ptr [edi + 0x4c4], edx */ W32((u32)(r_edi+0x4c4u), r_edx);
    /* 0049e61a: mov edx, dword ptr [edi + 0x4b4] */ r_edx = R32((u32)(r_edi+0x4b4u));
    /* 0049e620: mov dword ptr [edi + 0x4c8], edx */ W32((u32)(r_edi+0x4c8u), r_edx);
    /* 0049e626: mov ebp, dword ptr [ebp*8 + 0x9a748c] */ r_ebp = R32((u32)(r_ebp*8+0x9a748cu));
    /* 0049e62d: mov dword ptr [edi + 0x4b4], 0 */ W32((u32)(r_edi+0x4b4u), 0x0u);
    /* 0049e637: mov dword ptr [edi + 0x4b8], ebp */ W32((u32)(r_edi+0x4b8u), r_ebp);
    /* 0049e63d: mov dword ptr [edi + 0x4b0], eax */ W32((u32)(r_edi+0x4b0u), r_eax);
L_0049e643:; BB(0x0049e643);
    /* 0049e643: mov edx, dword ptr [esi*8 + 0x9a7688] */ r_edx = R32((u32)(r_esi*8+0x9a7688u));
    /* 0049e64a: mov dword ptr [edi + 0x48c], edx */ W32((u32)(r_edi+0x48cu), r_edx);
    /* 0049e650: mov edx, dword ptr [esi*8 + 0x9a768c] */ r_edx = R32((u32)(r_esi*8+0x9a768cu));
    /* 0049e657: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e659: je 0x49e65f */ if (fZ) goto L_0049e65f;
L_0049e65b:; BB(0x0049e65b);
    /* 0049e65b: mov ecx, edi */ r_ecx = r_edi;
    /* 0049e65d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x49e65fu); call_ind(t); }
L_0049e65f:; BB(0x0049e65f);
    /* 0049e65f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049e662: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049e663: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049e664: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049e665: ret  */ FN_RET(0x0049e3e8); r_esp += 4; return;
}

void f_0049e5c0(void)
{
    FN_ENTER(0x0049e5c0);
    /* 0049e5c0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049e5c2: mov ebp, dword ptr [edx + 0x9a7684] */ r_ebp = R32((u32)(r_edx+0x9a7684u));
    /* 0049e5c8: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e5cb: je 0x49e643 */ if (fZ) goto L_0049e643;
L_0049e5cd:; BB(0x0049e5cd);
    /* 0049e5cd: cmp ebp, dword ptr [edi + 0x4a8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x4a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e5d3: je 0x49e643 */ if (fZ) goto L_0049e643;
L_0049e5d5:; BB(0x0049e5d5);
    /* 0049e5d5: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 0049e5db: mov dword ptr [edi + 0x4a8], ebp */ W32((u32)(r_edi+0x4a8u), r_ebp);
    /* 0049e5e1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049e5e3: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0049e5e7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049e5e9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049e5eb: push dword ptr [eax + 0x9a7488] */ { u32 v = R32((u32)(r_eax+0x9a7488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049e5f1: mov edx, dword ptr [eax + 0x9a7480] */ r_edx = R32((u32)(r_eax+0x9a7480u));
    /* 0049e5f7: mov dword ptr [edi + 0x4ac], edx */ W32((u32)(r_edi+0x4acu), r_edx);
    /* 0049e5fd: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x49e602u); f_005b8638();
    /* 0049e602: mov edx, dword ptr [edi + 0x4c0] */ r_edx = R32((u32)(r_edi+0x4c0u));
    /* 0049e608: mov dword ptr [edi + 0x4bc], edx */ W32((u32)(r_edi+0x4bcu), r_edx);
    /* 0049e60e: mov edx, dword ptr [edi + 0x4b0] */ r_edx = R32((u32)(r_edi+0x4b0u));
    /* 0049e614: mov dword ptr [edi + 0x4c4], edx */ W32((u32)(r_edi+0x4c4u), r_edx);
    /* 0049e61a: mov edx, dword ptr [edi + 0x4b4] */ r_edx = R32((u32)(r_edi+0x4b4u));
    /* 0049e620: mov dword ptr [edi + 0x4c8], edx */ W32((u32)(r_edi+0x4c8u), r_edx);
    /* 0049e626: mov ebp, dword ptr [ebp*8 + 0x9a748c] */ r_ebp = R32((u32)(r_ebp*8+0x9a748cu));
    /* 0049e62d: mov dword ptr [edi + 0x4b4], 0 */ W32((u32)(r_edi+0x4b4u), 0x0u);
    /* 0049e637: mov dword ptr [edi + 0x4b8], ebp */ W32((u32)(r_edi+0x4b8u), r_ebp);
    /* 0049e63d: mov dword ptr [edi + 0x4b0], eax */ W32((u32)(r_edi+0x4b0u), r_eax);
L_0049e643:; BB(0x0049e643);
    /* 0049e643: mov edx, dword ptr [esi*8 + 0x9a7688] */ r_edx = R32((u32)(r_esi*8+0x9a7688u));
    /* 0049e64a: mov dword ptr [edi + 0x48c], edx */ W32((u32)(r_edi+0x48cu), r_edx);
    /* 0049e650: mov edx, dword ptr [esi*8 + 0x9a768c] */ r_edx = R32((u32)(r_esi*8+0x9a768cu));
    /* 0049e657: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e659: je 0x49e65f */ if (fZ) goto L_0049e65f;
L_0049e65b:; BB(0x0049e65b);
    /* 0049e65b: mov ecx, edi */ r_ecx = r_edi;
    /* 0049e65d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x49e65fu); call_ind(t); }
L_0049e65f:; BB(0x0049e65f);
    /* 0049e65f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049e662: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049e663: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049e664: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049e665: ret  */ FN_RET(0x0049e5c0); r_esp += 4; return;
}

void f_0049e670(void) /* sub_49E670 */
{
    FN_ENTER(0x0049e670);
    /* 0049e670: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049e673: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049e676: call 0x49e688 */ r_esp -= 4; W32(r_esp, 0x49e67bu); f_0049e688();
    /* 0049e67b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049e67e: ret  */ FN_RET(0x0049e670); r_esp += 4; return;
}

void f_0049e688(void) /* sub_49E688 */
{
    FN_ENTER(0x0049e688);
    /* 0049e688: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049e68b: mov ecx, edx */ r_ecx = r_edx;
    /* 0049e68d: mov edx, eax */ r_edx = r_eax;
    /* 0049e68f: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 0049e693: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0049e696: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0049e699: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0049e69c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0049e69e: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0049e6a1: movsx edx, byte ptr [edx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0049e6a5: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049e6a8: call 0x49e6c2 */ r_esp -= 4; W32(r_esp, 0x49e6adu); f_0049e6c2();
    /* 0049e6ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049e6b0: ret  */ FN_RET(0x0049e688); r_esp += 4; return;
}

void f_0049e6b4(void) /* sub_49E6B4 */
{
    FN_ENTER(0x0049e6b4);
    /* 0049e6b4: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 0049e6b9: movsx edx, byte ptr [esp + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x8u));
    /* 0049e6be: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0049e6c2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049e6c5: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0049e6c8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049e6cb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0049e6ce: fmul dword ptr [0xa4740c] */ ST(0) = ST(0) * R_F32((u32)(0xa4740cu));
    /* 0049e6d4: fadd dword ptr [0xa47410] */ ST(0) = ST(0) + R_F32((u32)(0xa47410u));
    /* 0049e6da: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0049e6e1: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0049e6e3: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 0049e6e6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049e6ea: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0049e6ee: fmul dword ptr [0xa4740c] */ ST(0) = ST(0) * R_F32((u32)(0xa4740cu));
    /* 0049e6f4: fadd dword ptr [0xa47414] */ ST(0) = ST(0) + R_F32((u32)(0xa47414u));
    /* 0049e6fa: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0049e6fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049e700: ret  */ FN_RET(0x0049e6b4); r_esp += 4; return;
}

void f_0049e6c2(void)
{
    FN_ENTER(0x0049e6c2);
    /* 0049e6c2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049e6c5: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0049e6c8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049e6cb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0049e6ce: fmul dword ptr [0xa4740c] */ ST(0) = ST(0) * R_F32((u32)(0xa4740cu));
    /* 0049e6d4: fadd dword ptr [0xa47410] */ ST(0) = ST(0) + R_F32((u32)(0xa47410u));
    /* 0049e6da: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0049e6e1: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0049e6e3: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 0049e6e6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049e6ea: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0049e6ee: fmul dword ptr [0xa4740c] */ ST(0) = ST(0) * R_F32((u32)(0xa4740cu));
    /* 0049e6f4: fadd dword ptr [0xa47414] */ ST(0) = ST(0) + R_F32((u32)(0xa47414u));
    /* 0049e6fa: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0049e6fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049e700: ret  */ FN_RET(0x0049e6c2); r_esp += 4; return;
}

void f_0049e70c(void) /* sub_49E70C */
{
    FN_ENTER(0x0049e70c);
    /* 0049e70c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049e70d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049e70e: mov ebp, edx */ r_ebp = r_edx;
    /* 0049e710: mov esi, eax */ r_esi = r_eax;
    /* 0049e712: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0049e716: mov byte ptr [esi + 0x490], al */ W8((u32)(r_esi+0x490u), (u8)r_eax);
    /* 0049e71c: movsx eax, byte ptr [ebp + 9] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x9u));
    /* 0049e720: mov dword ptr [esi + 0x494], eax */ W32((u32)(r_esi+0x494u), r_eax);
    /* 0049e726: movsx edx, byte ptr [ebp + 0xa] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xau));
    /* 0049e72a: movsx eax, byte ptr [ebp + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xbu));
    /* 0049e72e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e72f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e730: mov ecx, esi */ r_ecx = r_esi;
    /* 0049e732: call 0x49e7ec */ r_esp -= 4; W32(r_esp, 0x49e737u); f_0049e7ec();
    /* 0049e737: movsx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 0049e73b: mov word ptr [esi + 0x47c], dx */ W16((u32)(r_esi+0x47cu), (u16)r_edx);
    /* 0049e742: movsx eax, byte ptr [ebp + 0xd] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xdu));
    /* 0049e746: mov word ptr [esi + 0x47e], ax */ W16((u32)(r_esi+0x47eu), (u16)r_eax);
    /* 0049e74d: movsx ecx, byte ptr [ebp + 0xe] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xeu));
    /* 0049e751: mov word ptr [esi + 0x480], cx */ W16((u32)(r_esi+0x480u), (u16)r_ecx);
    /* 0049e758: movsx ebp, byte ptr [ebp + 0xf] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ebp+0xfu));
    /* 0049e75c: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0049e75f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e761: jl 0x49e768 */ if ((fS!=fO)) goto L_0049e768;
L_0049e763:; BB(0x0049e763);
    /* 0049e763: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049e766: jl 0x49e774 */ if ((fS!=fO)) goto L_0049e774;
L_0049e768:; BB(0x0049e768);
    /* 0049e768: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0049e76d: mov word ptr [esi + 0x47c], dx */ W16((u32)(r_esi+0x47cu), (u16)r_edx);
L_0049e774:; BB(0x0049e774);
    /* 0049e774: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0049e777: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e779: jl 0x49e780 */ if ((fS!=fO)) goto L_0049e780;
L_0049e77b:; BB(0x0049e77b);
    /* 0049e77b: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049e77e: jl 0x49e78c */ if ((fS!=fO)) goto L_0049e78c;
L_0049e780:; BB(0x0049e780);
    /* 0049e780: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0049e785: mov word ptr [esi + 0x47e], dx */ W16((u32)(r_esi+0x47eu), (u16)r_edx);
L_0049e78c:; BB(0x0049e78c);
    /* 0049e78c: movzx edx, cx */ r_edx = (u32)(u16)r_ecx;
    /* 0049e78f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e791: jl 0x49e798 */ if ((fS!=fO)) goto L_0049e798;
L_0049e793:; BB(0x0049e793);
    /* 0049e793: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049e796: jl 0x49e7a9 */ if ((fS!=fO)) goto L_0049e7a9;
L_0049e798:; BB(0x0049e798);
    /* 0049e798: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0049e79d: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0049e7a2: mov word ptr [esi + 0x480], dx */ W16((u32)(r_esi+0x480u), (u16)r_edx);
L_0049e7a9:; BB(0x0049e7a9);
    /* 0049e7a9: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
    /* 0049e7ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e7ae: jl 0x49e7be */ if ((fS!=fO)) goto L_0049e7be;
L_0049e7b0:; BB(0x0049e7b0);
    /* 0049e7b0: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049e7b3: jge 0x49e7be */ if ((fS==fO)) goto L_0049e7be;
L_0049e7b5:; BB(0x0049e7b5);
    /* 0049e7b5: mov word ptr [esi + 0x482], bp */ W16((u32)(r_esi+0x482u), (u16)r_ebp);
    /* 0049e7bc: jmp 0x49e7ca */ goto L_0049e7ca;
L_0049e7be:; BB(0x0049e7be);
    /* 0049e7be: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0049e7c3: mov word ptr [esi + 0x482], dx */ W16((u32)(r_esi+0x482u), (u16)r_edx);
L_0049e7ca:; BB(0x0049e7ca);
    /* 0049e7ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e7cb: mov ecx, dword ptr [esi + 0x428] */ r_ecx = R32((u32)(r_esi+0x428u));
    /* 0049e7d1: call 0x48a8c4 */ r_esp -= 4; W32(r_esp, 0x49e7d6u); f_0048a8c4();
    /* 0049e7d6: movzx edx, word ptr [esi + 0x482] */ r_edx = (u32)R16((u32)(r_esi+0x482u));
    /* 0049e7dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e7de: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 0049e7e4: call 0x48a8c4 */ r_esp -= 4; W32(r_esp, 0x49e7e9u); f_0048a8c4();
    /* 0049e7e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049e7ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049e7eb: ret  */ FN_RET(0x0049e70c); r_esp += 4; return;
}

void f_0049e7ec(void) /* sub_49E7EC */
{
    FN_ENTER(0x0049e7ec);
    /* 0049e7ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049e7ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049e7ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e7ef: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049e7f1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0049e7f5: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0049e7f9: mov ebp, dword ptr [ebx + 0x2e8] */ r_ebp = R32((u32)(r_ebx+0x2e8u));
    /* 0049e7ff: mov esi, dword ptr [ebx + 0x444] */ r_esi = R32((u32)(r_ebx+0x444u));
    /* 0049e805: mov edx, dword ptr [eax*4 + 0x9033bc] */ r_edx = R32((u32)(r_eax*4+0x9033bcu));
    /* 0049e80c: mov dword ptr [ebx + 0x2e8], edx */ W32((u32)(r_ebx+0x2e8u), r_edx);
    /* 0049e812: mov dword ptr [ebx + 0x444], ecx */ W32((u32)(r_ebx+0x444u), r_ecx);
    /* 0049e818: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049e81a: call 0x49e874 */ r_esp -= 4; W32(r_esp, 0x49e81fu); f_0049e874();
    /* 0049e81f: cmp ebp, dword ptr [ebx + 0x2e8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x2e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e825: jne 0x49e82f */ if (!fZ) goto L_0049e82f;
L_0049e827:; BB(0x0049e827);
    /* 0049e827: cmp esi, dword ptr [ebx + 0x444] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x444u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e82d: je 0x49e836 */ if (fZ) goto L_0049e836;
L_0049e82f:; BB(0x0049e82f);
    /* 0049e82f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049e831: call 0x49e950 */ r_esp -= 4; W32(r_esp, 0x49e836u); f_0049e950();
L_0049e836:; BB(0x0049e836);
    /* 0049e836: mov ecx, dword ptr [ebx + 0x428] */ r_ecx = R32((u32)(r_ebx+0x428u));
    /* 0049e83c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e83e: je 0x49e851 */ if (fZ) goto L_0049e851;
L_0049e840:; BB(0x0049e840);
    /* 0049e840: push dword ptr [ebx + 0x444] */ { u32 v = R32((u32)(r_ebx+0x444u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049e846: push dword ptr [ebx + 0x2e8] */ { u32 v = R32((u32)(r_ebx+0x2e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049e84c: call 0x48a7cc */ r_esp -= 4; W32(r_esp, 0x49e851u); f_0048a7cc();
L_0049e851:; BB(0x0049e851);
    /* 0049e851: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0049e857: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049e859: je 0x49e86e */ if (fZ) goto L_0049e86e;
L_0049e85b:; BB(0x0049e85b);
    /* 0049e85b: push dword ptr [ebx + 0x444] */ { u32 v = R32((u32)(r_ebx+0x444u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049e861: push dword ptr [ebx + 0x2e8] */ { u32 v = R32((u32)(r_ebx+0x2e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049e867: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e869: call 0x48a7cc */ r_esp -= 4; W32(r_esp, 0x49e86eu); f_0048a7cc();
L_0049e86e:; BB(0x0049e86e);
    /* 0049e86e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049e86f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049e870: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049e871: ret 8 */ FN_RET(0x0049e7ec); r_esp += 12; return;
}

void f_0049e874(void) /* sub_49E874 */
{
    FN_ENTER(0x0049e874);
    /* 0049e874: movsx eax, word ptr [ecx + 0x46c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x46cu));
    /* 0049e87b: mov edx, dword ptr [ecx + 0x444] */ r_edx = R32((u32)(r_ecx+0x444u));
    /* 0049e881: mov word ptr [ecx + 0x456], ax */ W16((u32)(r_ecx+0x456u), (u16)r_eax);
    /* 0049e888: mov word ptr [ecx + 0x454], ax */ W16((u32)(r_ecx+0x454u), (u16)r_eax);
    /* 0049e88f: mov word ptr [ecx + 0x452], ax */ W16((u32)(r_ecx+0x452u), (u16)r_eax);
    /* 0049e896: mov word ptr [ecx + 0x450], ax */ W16((u32)(r_ecx+0x450u), (u16)r_eax);
    /* 0049e89d: mov word ptr [ecx + 0x44e], ax */ W16((u32)(r_ecx+0x44eu), (u16)r_eax);
    /* 0049e8a4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049e8a7: je 0x49e93f */ if (fZ) goto L_0049e93f;
L_0049e8ad:; BB(0x0049e8ad);
    /* 0049e8ad: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049e8b0: je 0x49e92f */ if (fZ) goto L_0049e92f;
L_0049e8b2:; BB(0x0049e8b2);
    /* 0049e8b2: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049e8b5: je 0x49e8e1 */ if (fZ) goto L_0049e8e1;
L_0049e8b7:; BB(0x0049e8b7);
    /* 0049e8b7: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049e8ba: jne 0x49e8cc */ if (!fZ) goto L_0049e8cc;
L_0049e8bc:; BB(0x0049e8bc);
    /* 0049e8bc: movzx edx, word ptr [ecx + 0x46e] */ r_edx = (u32)R16((u32)(r_ecx+0x46eu));
    /* 0049e8c3: mov word ptr [ecx + 0x454], dx */ W16((u32)(r_ecx+0x454u), (u16)r_edx);
    /* 0049e8ca: jmp 0x49e8ef */ goto L_0049e8ef;
L_0049e8cc:; BB(0x0049e8cc);
    /* 0049e8cc: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049e8cf: jne 0x49e8ef */ if (!fZ) goto L_0049e8ef;
L_0049e8d1:; BB(0x0049e8d1);
    /* 0049e8d1: movzx edx, word ptr [ecx + 0x46e] */ r_edx = (u32)R16((u32)(r_ecx+0x46eu));
    /* 0049e8d8: mov word ptr [ecx + 0x456], dx */ W16((u32)(r_ecx+0x456u), (u16)r_edx);
    /* 0049e8df: jmp 0x49e8ef */ goto L_0049e8ef;
L_0049e8e1:; BB(0x0049e8e1);
    /* 0049e8e1: movzx edx, word ptr [ecx + 0x46e] */ r_edx = (u32)R16((u32)(r_ecx+0x46eu));
    /* 0049e8e8: mov word ptr [ecx + 0x452], dx */ W16((u32)(r_ecx+0x452u), (u16)r_edx);
L_0049e8ef:; BB(0x0049e8ef);
    /* 0049e8ef: movzx edx, word ptr [ecx + 0x450] */ r_edx = (u32)R16((u32)(r_ecx+0x450u));
    /* 0049e8f6: mov word ptr [ecx + 0x2f6], ax */ W16((u32)(r_ecx+0x2f6u), (u16)r_eax);
    /* 0049e8fd: movzx eax, word ptr [ecx + 0x452] */ r_eax = (u32)R16((u32)(r_ecx+0x452u));
    /* 0049e904: mov word ptr [ecx + 0x2f8], ax */ W16((u32)(r_ecx+0x2f8u), (u16)r_eax);
    /* 0049e90b: movzx eax, word ptr [ecx + 0x456] */ r_eax = (u32)R16((u32)(r_ecx+0x456u));
    /* 0049e912: mov word ptr [ecx + 0x2fa], dx */ W16((u32)(r_ecx+0x2fau), (u16)r_edx);
    /* 0049e919: mov word ptr [ecx + 0x2fc], ax */ W16((u32)(r_ecx+0x2fcu), (u16)r_eax);
    /* 0049e920: movzx eax, word ptr [ecx + 0x454] */ r_eax = (u32)R16((u32)(r_ecx+0x454u));
    /* 0049e927: mov word ptr [ecx + 0x2fe], ax */ W16((u32)(r_ecx+0x2feu), (u16)r_eax);
    /* 0049e92e: ret  */ FN_RET(0x0049e874); r_esp += 4; return;
L_0049e92f:; BB(0x0049e92f);
    /* 0049e92f: movzx edx, word ptr [ecx + 0x46e] */ r_edx = (u32)R16((u32)(r_ecx+0x46eu));
    /* 0049e936: mov word ptr [ecx + 0x450], dx */ W16((u32)(r_ecx+0x450u), (u16)r_edx);
    /* 0049e93d: jmp 0x49e8ef */ goto L_0049e8ef;
L_0049e93f:; BB(0x0049e93f);
    /* 0049e93f: movsx eax, word ptr [ecx + 0x46e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x46eu));
    /* 0049e946: mov word ptr [ecx + 0x44e], ax */ W16((u32)(r_ecx+0x44eu), (u16)r_eax);
    /* 0049e94d: jmp 0x49e8ef */ goto L_0049e8ef;
}

void f_0049e900(void)
{
    FN_ENTER(0x0049e900);
    goto L_0049e900;
L_0049e8ef:; BB(0x0049e8ef);
    /* 0049e8ef: movzx edx, word ptr [ecx + 0x450] */ r_edx = (u32)R16((u32)(r_ecx+0x450u));
    /* 0049e8f6: mov word ptr [ecx + 0x2f6], ax */ W16((u32)(r_ecx+0x2f6u), (u16)r_eax);
    /* 0049e8fd: movzx eax, word ptr [ecx + 0x452] */ r_eax = (u32)R16((u32)(r_ecx+0x452u));
L_0049e900:; BB(0x0049e900);
    /* 0049e900: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e901: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0049e903: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0049e904: mov word ptr [ecx + 0x2f8], ax */ W16((u32)(r_ecx+0x2f8u), (u16)r_eax);
    /* 0049e906: cmp eax, 0xf000002 */ {  u32 a = r_eax; u32 b = 0xf000002u; u32 r = (a - b) & 0xffffffffu;   }
    /* 0049e90b: movzx eax, word ptr [ecx + 0x456] */ r_eax = (u32)R16((u32)(r_ecx+0x456u));
    /* 0049e90c: mov bh, 0x81 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x81u) & 0xffu) << 8);
    /* 0049e90e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049e90f: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0049e911: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0049e912: mov word ptr [ecx + 0x2fa], dx */ W16((u32)(r_ecx+0x2fau), (u16)r_edx);
    /* 0049e914: xchg ecx, eax */ { u32 x = r_ecx; u32 y = r_eax; r_ecx = y; r_eax = x; }
    /* 0049e915: cli  */ UNSUP(0x0049e915, "cli ");
    /* 0049e916: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0049e918: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0049e919: mov word ptr [ecx + 0x2fc], ax */ W16((u32)(r_ecx+0x2fcu), (u16)r_eax);
    /* 0049e91b: cmp esp, 0xf000002 */ {  u32 a = r_esp; u32 b = 0xf000002u; u32 r = (a - b) & 0xffffffffu;   }
    /* 0049e920: movzx eax, word ptr [ecx + 0x454] */ r_eax = (u32)R16((u32)(r_ecx+0x454u));
    /* 0049e921: mov bh, 0x81 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x81u) & 0xffu) << 8);
    /* 0049e923: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0049e924: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0049e926: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0049e927: mov word ptr [ecx + 0x2fe], ax */ W16((u32)(r_ecx+0x2feu), (u16)r_eax);
    /* 0049e929: cmp esi, 0xc3000002 */ {  u32 a = r_esi; u32 b = 0xc3000002u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049e92e: ret  */ FN_RET(0x0049e900); r_esp += 4; return;
    /* 0049e92f: movzx edx, word ptr [ecx + 0x46e] */ r_edx = (u32)R16((u32)(r_ecx+0x46eu));
    /* 0049e936: mov word ptr [ecx + 0x450], dx */ W16((u32)(r_ecx+0x450u), (u16)r_edx);
    /* 0049e93d: jmp 0x49e8ef */ goto L_0049e8ef;
}

void f_0049e950(void) /* sub_49E950 */
{
    FN_ENTER(0x0049e950);
    /* 0049e950: mov dword ptr [ecx + 0x530], 0x34 */ W32((u32)(r_ecx+0x530u), 0x34u);
    /* 0049e95a: mov dword ptr [ecx + 0x534], 1 */ W32((u32)(r_ecx+0x534u), 0x1u);
    /* 0049e964: call 0x49ae4c */ r_esp -= 4; W32(r_esp, 0x49e969u); f_0049ae4c();
    /* 0049e969: ret  */ FN_RET(0x0049e950); r_esp += 4; return;
}

void f_0049ea70(void) /* sub_49EA70 */
{
    FN_ENTER(0x0049ea70);
    /* 0049ea70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ea72: mov dword ptr [ecx + 0x794], eax */ W32((u32)(r_ecx+0x794u), r_eax);
    /* 0049ea78: mov dword ptr [ecx + 0x798], eax */ W32((u32)(r_ecx+0x798u), r_eax);
    /* 0049ea7e: mov dword ptr [ecx + 0x79c], eax */ W32((u32)(r_ecx+0x79cu), r_eax);
    /* 0049ea84: mov dword ptr [ecx + 0x7a0], eax */ W32((u32)(r_ecx+0x7a0u), r_eax);
    /* 0049ea8a: mov dword ptr [ecx + 0x7a4], eax */ W32((u32)(r_ecx+0x7a4u), r_eax);
    /* 0049ea90: mov dword ptr [ecx + 0x7a8], eax */ W32((u32)(r_ecx+0x7a8u), r_eax);
    /* 0049ea96: mov dword ptr [ecx + 0x7ac], eax */ W32((u32)(r_ecx+0x7acu), r_eax);
    /* 0049ea9c: mov dword ptr [ecx + 0x7b0], eax */ W32((u32)(r_ecx+0x7b0u), r_eax);
    /* 0049eaa2: mov dword ptr [ecx + 0x7b4], eax */ W32((u32)(r_ecx+0x7b4u), r_eax);
    /* 0049eaa8: mov dword ptr [ecx + 0x7b8], eax */ W32((u32)(r_ecx+0x7b8u), r_eax);
    /* 0049eaae: mov dword ptr [ecx + 0x7bc], eax */ W32((u32)(r_ecx+0x7bcu), r_eax);
    /* 0049eab4: mov dword ptr [ecx + 0x7c0], eax */ W32((u32)(r_ecx+0x7c0u), r_eax);
    /* 0049eaba: mov dword ptr [ecx + 0x7c4], eax */ W32((u32)(r_ecx+0x7c4u), r_eax);
    /* 0049eac0: mov dword ptr [ecx + 0x7c8], eax */ W32((u32)(r_ecx+0x7c8u), r_eax);
    /* 0049eac6: ret  */ FN_RET(0x0049ea70); r_esp += 4; return;
}

void f_0049eac8(void) /* sub_49EAC8 */
{
    FN_ENTER(0x0049eac8);
    /* 0049eac8: mov eax, 1 */ r_eax = 0x1u;
    /* 0049eacd: mov dword ptr [ecx + 0x56c], eax */ W32((u32)(r_ecx+0x56cu), r_eax);
    /* 0049ead3: mov dword ptr [ecx + 0x570], eax */ W32((u32)(r_ecx+0x570u), r_eax);
    /* 0049ead9: ret  */ FN_RET(0x0049eac8); r_esp += 4; return;
}

void f_0049eadc(void) /* sub_49EADC */
{
    FN_ENTER(0x0049eadc);
    /* 0049eadc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049eadd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049eade: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049eadf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049eae0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049eae2: lea eax, [ecx + 0x554] */ r_eax = (u32)(r_ecx+0x554u);
    /* 0049eae8: lea ebx, [ecx + 0x56c] */ r_ebx = (u32)(r_ecx+0x56cu);
    /* 0049eaee: mov ebp, eax */ r_ebp = r_eax;
    /* 0049eaf0: mov esi, edx */ r_esi = r_edx;
    /* 0049eaf2: mov edi, ecx */ r_edi = r_ecx;
L_0049eaf4:; BB(0x0049eaf4);
    /* 0049eaf4: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0049eaf6: push dword ptr [esi + edi + 0x40c] */ { u32 v = R32((u32)(r_esi+r_edi+0x40cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049eafd: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x49eb02u); f_0078e934();
    /* 0049eb02: mov edx, eax */ r_edx = r_eax;
    /* 0049eb04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049eb07: lea eax, [edx + 0x18] */ r_eax = (u32)(r_edx+0x18u);
    /* 0049eb0a: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0049eb0d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0049eb10: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0049eb13: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049eb16: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 0049eb1d: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049eb20: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049eb22: ja 0x49eaf4 */ if ((!fC&&!fZ)) goto L_0049eaf4;
L_0049eb24:; BB(0x0049eb24);
    /* 0049eb24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049eb25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049eb26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049eb27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049eb28: ret  */ FN_RET(0x0049eadc); r_esp += 4; return;
}

void f_0049eb2c(void) /* sub_49EB2C */
{
    FN_ENTER(0x0049eb2c);
    /* 0049eb2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049eb2d: mov esi, ecx */ r_esi = r_ecx;
    /* 0049eb2f: mov ecx, esi */ r_ecx = r_esi;
    /* 0049eb31: call 0x49a408 */ r_esp -= 4; W32(r_esp, 0x49eb36u); f_0049a408();
    /* 0049eb36: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0049eb38: mov ecx, dword ptr [esi + 0x404] */ r_ecx = R32((u32)(r_esi+0x404u));
    /* 0049eb3e: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x49eb43u); f_005b8624();
    /* 0049eb43: mov ecx, dword ptr [esi + 0x404] */ r_ecx = R32((u32)(r_esi+0x404u));
    /* 0049eb49: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0049eb4b: mov dword ptr [esi + 0x578], eax */ W32((u32)(r_esi+0x578u), r_eax);
    /* 0049eb51: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x49eb56u); f_005b8624();
    /* 0049eb56: mov ecx, dword ptr [esi + 0x404] */ r_ecx = R32((u32)(r_esi+0x404u));
    /* 0049eb5c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0049eb5e: mov dword ptr [esi + 0x57c], eax */ W32((u32)(r_esi+0x57cu), r_eax);
    /* 0049eb64: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x49eb69u); f_005b8610();
    /* 0049eb69: mov ecx, dword ptr [esi + 0x404] */ r_ecx = R32((u32)(r_esi+0x404u));
    /* 0049eb6f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0049eb71: mov dword ptr [esi + 0x580], eax */ W32((u32)(r_esi+0x580u), r_eax);
    /* 0049eb77: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x49eb7cu); f_005b8610();
    /* 0049eb7c: mov dword ptr [esi + 0x584], eax */ W32((u32)(r_esi+0x584u), r_eax);
    /* 0049eb82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049eb83: ret  */ FN_RET(0x0049eb2c); r_esp += 4; return;
}

void f_0049eb84(void) /* sub_49EB84 */
{
    FN_ENTER(0x0049eb84);
    /* 0049eb84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049eb85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049eb86: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049eb88: mov ecx, dword ptr [ebx + 0x320] */ r_ecx = R32((u32)(r_ebx+0x320u));
    /* 0049eb8e: movsx edx, word ptr [ecx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 0049eb92: movsx edi, word ptr [ecx + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 0049eb96: mov eax, edx */ r_eax = r_edx;
    /* 0049eb98: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049eb9a: jle 0x49eba0 */ if ((fZ||fS!=fO)) goto L_0049eba0;
L_0049eb9c:; BB(0x0049eb9c);
    /* 0049eb9c: mov edx, edi */ r_edx = r_edi;
    /* 0049eb9e: jmp 0x49eba8 */ goto L_0049eba8;
L_0049eba0:; BB(0x0049eba0);
    /* 0049eba0: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049eba2: mov eax, edi */ r_eax = r_edi;
    /* 0049eba4: jg 0x49eba8 */ if ((!fZ&&fS==fO)) goto L_0049eba8;
L_0049eba6:; BB(0x0049eba6);
    /* 0049eba6: mov eax, edx */ r_eax = r_edx;
L_0049eba8:; BB(0x0049eba8);
    /* 0049eba8: movsx edi, word ptr [ecx + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 0049ebac: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ebae: jle 0x49ebb4 */ if ((fZ||fS!=fO)) goto L_0049ebb4;
L_0049ebb0:; BB(0x0049ebb0);
    /* 0049ebb0: mov edx, edi */ r_edx = r_edi;
    /* 0049ebb2: jmp 0x49ebba */ goto L_0049ebba;
L_0049ebb4:; BB(0x0049ebb4);
    /* 0049ebb4: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ebb6: jle 0x49ebba */ if ((fZ||fS!=fO)) goto L_0049ebba;
L_0049ebb8:; BB(0x0049ebb8);
    /* 0049ebb8: mov eax, edi */ r_eax = r_edi;
L_0049ebba:; BB(0x0049ebba);
    /* 0049ebba: movsx edi, word ptr [ecx + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 0049ebbe: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ebc0: jle 0x49ebc6 */ if ((fZ||fS!=fO)) goto L_0049ebc6;
L_0049ebc2:; BB(0x0049ebc2);
    /* 0049ebc2: mov edx, edi */ r_edx = r_edi;
    /* 0049ebc4: jmp 0x49ebcc */ goto L_0049ebcc;
L_0049ebc6:; BB(0x0049ebc6);
    /* 0049ebc6: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ebc8: jle 0x49ebcc */ if ((fZ||fS!=fO)) goto L_0049ebcc;
L_0049ebca:; BB(0x0049ebca);
    /* 0049ebca: mov eax, edi */ r_eax = r_edi;
L_0049ebcc:; BB(0x0049ebcc);
    /* 0049ebcc: movsx edi, word ptr [ecx + 0xa] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xau));
    /* 0049ebd0: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ebd2: jle 0x49ebd8 */ if ((fZ||fS!=fO)) goto L_0049ebd8;
L_0049ebd4:; BB(0x0049ebd4);
    /* 0049ebd4: mov edx, edi */ r_edx = r_edi;
    /* 0049ebd6: jmp 0x49ebde */ goto L_0049ebde;
L_0049ebd8:; BB(0x0049ebd8);
    /* 0049ebd8: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ebda: jle 0x49ebde */ if ((fZ||fS!=fO)) goto L_0049ebde;
L_0049ebdc:; BB(0x0049ebdc);
    /* 0049ebdc: mov eax, edi */ r_eax = r_edi;
L_0049ebde:; BB(0x0049ebde);
    /* 0049ebde: mov word ptr [ebx + 0x46e], dx */ W16((u32)(r_ebx+0x46eu), (u16)r_edx);
    /* 0049ebe5: mov word ptr [ebx + 0x46c], ax */ W16((u32)(r_ebx+0x46cu), (u16)r_eax);
    /* 0049ebec: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0049ebef: mov word ptr [ebx + 0x44c], ax */ W16((u32)(r_ebx+0x44cu), (u16)r_eax);
    /* 0049ebf6: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 0049ebfa: mov word ptr [ebx + 0x44e], dx */ W16((u32)(r_ebx+0x44eu), (u16)r_edx);
    /* 0049ec01: movzx edi, word ptr [ecx + 4] */ r_edi = (u32)R16((u32)(r_ecx+0x4u));
    /* 0049ec05: mov word ptr [ebx + 0x450], di */ W16((u32)(r_ebx+0x450u), (u16)r_edi);
    /* 0049ec0c: movzx eax, word ptr [ecx + 6] */ r_eax = (u32)R16((u32)(r_ecx+0x6u));
    /* 0049ec10: mov word ptr [ebx + 0x452], ax */ W16((u32)(r_ebx+0x452u), (u16)r_eax);
    /* 0049ec17: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0049ec1b: mov word ptr [ebx + 0x454], ax */ W16((u32)(r_ebx+0x454u), (u16)r_eax);
    /* 0049ec22: movzx eax, word ptr [ecx + 0xa] */ r_eax = (u32)R16((u32)(r_ecx+0xau));
    /* 0049ec26: mov word ptr [ebx + 0x456], ax */ W16((u32)(r_ebx+0x456u), (u16)r_eax);
    /* 0049ec2d: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0049ec30: mov dword ptr [ebx + 0x458], eax */ W32((u32)(r_ebx+0x458u), r_eax);
    /* 0049ec36: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0049ec39: mov dword ptr [ebx + 0x45c], eax */ W32((u32)(r_ebx+0x45cu), r_eax);
    /* 0049ec3f: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0049ec42: mov dword ptr [ebx + 0x460], eax */ W32((u32)(r_ebx+0x460u), r_eax);
    /* 0049ec48: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0049ec4b: mov dword ptr [ebx + 0x464], eax */ W32((u32)(r_ebx+0x464u), r_eax);
    /* 0049ec51: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0049ec54: mov dword ptr [ebx + 0x468], eax */ W32((u32)(r_ebx+0x468u), r_eax);
    /* 0049ec5a: lea eax, [ebx + 0x44c] */ r_eax = (u32)(r_ebx+0x44cu);
    /* 0049ec60: mov dword ptr [ebx + 0x320], eax */ W32((u32)(r_ebx+0x320u), r_eax);
    /* 0049ec66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049ec68: call 0x49e874 */ r_esp -= 4; W32(r_esp, 0x49ec6du); f_0049e874();
    /* 0049ec6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049ec6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049ec6f: ret  */ FN_RET(0x0049eb84); r_esp += 4; return;
}

void f_0049ec70(void) /* sub_49EC70 */
{
    FN_ENTER(0x0049ec70);
    /* 0049ec70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049ec71: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049ec73: mov eax, dword ptr [0x9033d0] */ r_eax = R32((u32)(0x9033d0u));
    /* 0049ec78: mov edx, dword ptr [0x9033d4] */ r_edx = R32((u32)(0x9033d4u));
    /* 0049ec7e: mov dword ptr [ebp + 0x4a8], eax */ W32((u32)(r_ebp+0x4a8u), r_eax);
    /* 0049ec84: mov eax, dword ptr [0x9033d8] */ r_eax = R32((u32)(0x9033d8u));
    /* 0049ec89: mov dword ptr [ebp + 0x4ac], edx */ W32((u32)(r_ebp+0x4acu), r_edx);
    /* 0049ec8f: mov dword ptr [ebp + 0x4b0], eax */ W32((u32)(r_ebp+0x4b0u), r_eax);
    /* 0049ec95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049ec97: mov eax, dword ptr [0x9033ec] */ r_eax = R32((u32)(0x9033ecu));
    /* 0049ec9c: mov dword ptr [ebp + 0x4b4], edx */ W32((u32)(r_ebp+0x4b4u), r_edx);
    /* 0049eca2: mov dword ptr [ebp + 0x4b8], edx */ W32((u32)(r_ebp+0x4b8u), r_edx);
    /* 0049eca8: mov dword ptr [ebp + 0x4bc], edx */ W32((u32)(r_ebp+0x4bcu), r_edx);
    /* 0049ecae: mov dword ptr [ebp + 0x4c0], edx */ W32((u32)(r_ebp+0x4c0u), r_edx);
    /* 0049ecb4: mov dword ptr [ebp + 0x4c4], eax */ W32((u32)(r_ebp+0x4c4u), r_eax);
    /* 0049ecba: movzx eax, byte ptr [0xa473d4] */ r_eax = (u32)R8((u32)(0xa473d4u));
    /* 0049ecc1: mov dword ptr [ebp + 0x4c8], edx */ W32((u32)(r_ebp+0x4c8u), r_edx);
    /* 0049ecc7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049ecc9: jne 0x49ecdf */ if (!fZ) goto L_0049ecdf;
L_0049eccb:; BB(0x0049eccb);
    /* 0049eccb: mov dword ptr [0xa47444], 0x3d888889 */ W32((u32)(0xa47444u), 0x3d888889u);
    /* 0049ecd5: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049ecda: mov byte ptr [0xa473d4], al */ W8((u32)(0xa473d4u), (u8)r_eax);
L_0049ecdf:; BB(0x0049ecdf);
    /* 0049ecdf: mov eax, dword ptr [0xa47434] */ r_eax = R32((u32)(0xa47434u));
    /* 0049ece4: mov ecx, dword ptr [ebp + 0x404] */ r_ecx = R32((u32)(r_ebp+0x404u));
    /* 0049ecea: mov dword ptr [ebp + 0x4b0], eax */ W32((u32)(r_ebp+0x4b0u), r_eax);
    /* 0049ecf0: mov edx, dword ptr [0xa47438] */ r_edx = R32((u32)(0xa47438u));
    /* 0049ecf6: mov dword ptr [ebp + 0x4b4], edx */ W32((u32)(r_ebp+0x4b4u), r_edx);
    /* 0049ecfc: mov eax, dword ptr [0xa4743c] */ r_eax = R32((u32)(0xa4743cu));
    /* 0049ed01: mov dword ptr [ebp + 0x4b8], eax */ W32((u32)(r_ebp+0x4b8u), r_eax);
    /* 0049ed07: mov eax, dword ptr [0xa47440] */ r_eax = R32((u32)(0xa47440u));
    /* 0049ed0c: mov dword ptr [ebp + 0x4bc], eax */ W32((u32)(r_ebp+0x4bcu), r_eax);
    /* 0049ed12: mov eax, dword ptr [0xa47444] */ r_eax = R32((u32)(0xa47444u));
    /* 0049ed17: mov dword ptr [ebp + 0x4c0], eax */ W32((u32)(r_ebp+0x4c0u), r_eax);
    /* 0049ed1d: mov eax, dword ptr [0xa47448] */ r_eax = R32((u32)(0xa47448u));
    /* 0049ed22: mov dword ptr [ebp + 0x4c4], eax */ W32((u32)(r_ebp+0x4c4u), r_eax);
    /* 0049ed28: mov eax, dword ptr [0xa4744c] */ r_eax = R32((u32)(0xa4744cu));
    /* 0049ed2d: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 0049ed33: push dword ptr [0x9a7488] */ { u32 v = R32((u32)(0x9a7488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049ed39: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x49ed3eu); f_005b8638();
    /* 0049ed3e: mov dword ptr [ebp + 0x4c4], eax */ W32((u32)(r_ebp+0x4c4u), r_eax);
    /* 0049ed44: mov dword ptr [ebp + 0x4b0], eax */ W32((u32)(r_ebp+0x4b0u), r_eax);
    /* 0049ed4a: mov eax, dword ptr [0x9a748c] */ r_eax = R32((u32)(0x9a748cu));
    /* 0049ed4f: mov dword ptr [ebp + 0x4b8], eax */ W32((u32)(r_ebp+0x4b8u), r_eax);
    /* 0049ed55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ed56: ret  */ FN_RET(0x0049ec70); r_esp += 4; return;
}

void f_0049ed58(void) /* sub_49ED58 */
{
    FN_ENTER(0x0049ed58);
    /* 0049ed58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ed59: mov esi, ecx */ r_esi = r_ecx;
    /* 0049ed5b: mov eax, dword ptr [esi + 0x478] */ r_eax = R32((u32)(r_esi+0x478u));
    /* 0049ed61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ed63: jne 0x49edd7 */ if (!fZ) goto L_0049edd7;
L_0049ed65:; BB(0x0049ed65);
    /* 0049ed65: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ed67: call 0x49c758 */ r_esp -= 4; W32(r_esp, 0x49ed6cu); f_0049c758();
    /* 0049ed6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ed6e: je 0x49ed7b */ if (fZ) goto L_0049ed7b;
L_0049ed70:; BB(0x0049ed70);
    /* 0049ed70: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0049ed72: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ed74: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49ed79u); f_0049b19c();
    /* 0049ed79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049ed7a: ret  */ FN_RET(0x0049ed58); r_esp += 4; return;
L_0049ed7b:; BB(0x0049ed7b);
    /* 0049ed7b: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ed7d: call 0x49ccb4 */ r_esp -= 4; W32(r_esp, 0x49ed82u); f_0049ccb4();
    /* 0049ed82: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ed85: je 0x49edd9 */ if (fZ) goto L_0049edd9;
L_0049ed87:; BB(0x0049ed87);
    /* 0049ed87: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ed89: call 0x49c788 */ r_esp -= 4; W32(r_esp, 0x49ed8eu); f_0049c788();
    /* 0049ed8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ed90: je 0x49ed9d */ if (fZ) goto L_0049ed9d;
L_0049ed92:; BB(0x0049ed92);
    /* 0049ed92: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0049ed94: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ed96: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49ed9bu); f_0049b19c();
    /* 0049ed9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049ed9c: ret  */ FN_RET(0x0049ed58); r_esp += 4; return;
L_0049ed9d:; BB(0x0049ed9d);
    /* 0049ed9d: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ed9f: call 0x49ccb4 */ r_esp -= 4; W32(r_esp, 0x49eda4u); f_0049ccb4();
    /* 0049eda4: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049eda7: je 0x49edb4 */ if (fZ) goto L_0049edb4;
L_0049eda9:; BB(0x0049eda9);
    /* 0049eda9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0049edab: mov ecx, esi */ r_ecx = r_esi;
    /* 0049edad: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49edb2u); f_0049b19c();
    /* 0049edb2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049edb3: ret  */ FN_RET(0x0049ed58); r_esp += 4; return;
L_0049edb4:; BB(0x0049edb4);
    /* 0049edb4: mov ecx, esi */ r_ecx = r_esi;
    /* 0049edb6: call 0x49a464 */ r_esp -= 4; W32(r_esp, 0x49edbbu); f_0049a464();
    /* 0049edbb: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 0049edc1: mov ecx, esi */ r_ecx = r_esi;
    /* 0049edc3: call 0x49a4e0 */ r_esp -= 4; W32(r_esp, 0x49edc8u); f_0049a4e0();
    /* 0049edc8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049edca: mov dword ptr [esi + 0x448], eax */ W32((u32)(r_esi+0x448u), r_eax);
    /* 0049edd0: mov ecx, esi */ r_ecx = r_esi;
    /* 0049edd2: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49edd7u); f_0049b19c();
L_0049edd7:; BB(0x0049edd7);
    /* 0049edd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049edd8: ret  */ FN_RET(0x0049ed58); r_esp += 4; return;
L_0049edd9:; BB(0x0049edd9);
    /* 0049edd9: mov ecx, esi */ r_ecx = r_esi;
    /* 0049eddb: call 0x49c860 */ r_esp -= 4; W32(r_esp, 0x49ede0u); f_0049c860();
    /* 0049ede0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ede2: je 0x49ed87 */ if (fZ) goto L_0049ed87;
L_0049ede4:; BB(0x0049ede4);
    /* 0049ede4: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ede6: call 0x49ca9c */ r_esp -= 4; W32(r_esp, 0x49edebu); f_0049ca9c();
    /* 0049edeb: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0049eded: mov word ptr [esi + 0x47c], ax */ W16((u32)(r_esi+0x47cu), (u16)r_eax);
    /* 0049edf4: mov ecx, esi */ r_ecx = r_esi;
    /* 0049edf6: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49edfbu); f_0049b19c();
    /* 0049edfb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049edfc: ret  */ FN_RET(0x0049ed58); r_esp += 4; return;
}

void f_0049ee00(void)
{
    FN_ENTER(0x0049ee00);
    /* 0049ee00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee02: mov edi, ecx */ r_edi = r_ecx;
    /* 0049ee04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee08: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0049ee0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee0d: push 0x5a2 */ { u32 v = 0x5a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee12: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x49ee17u); f_008144b0();
    /* 0049ee17: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049ee1a: mov eax, dword ptr [edi + 0x478] */ r_eax = R32((u32)(r_edi+0x478u));
    /* 0049ee20: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049ee23: mov dword ptr [edi + 0x478], eax */ W32((u32)(r_edi+0x478u), r_eax);
    /* 0049ee29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ee2b: jl 0x49ee30 */ if ((fS!=fO)) goto L_0049ee30;
L_0049ee2d:; BB(0x0049ee2d);
    /* 0049ee2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049ee2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049ee2f: ret  */ FN_RET(0x0049ee00); r_esp += 4; return;
L_0049ee30:; BB(0x0049ee30);
    /* 0049ee30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee35: push 0x5a3 */ { u32 v = 0x5a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49ee3fu); f_00814298();
    /* 0049ee3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049ee42: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee44: mov ecx, edi */ r_ecx = r_edi;
    /* 0049ee46: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49ee4bu); f_0049bd50();
    /* 0049ee4b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049ee4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049ee4d: ret  */ FN_RET(0x0049ee00); r_esp += 4; return;
}

void f_0049ee50(void)
{
    FN_ENTER(0x0049ee50);
    /* 0049ee50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee51: mov esi, ecx */ r_esi = r_ecx;
    /* 0049ee53: mov eax, dword ptr [esi + 0x478] */ r_eax = R32((u32)(r_esi+0x478u));
    /* 0049ee59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ee5b: jne 0x49ee7e */ if (!fZ) goto L_0049ee7e;
L_0049ee5d:; BB(0x0049ee5d);
    /* 0049ee5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ee5f: call 0x49c050 */ r_esp -= 4; W32(r_esp, 0x49ee64u); f_0049c050();
    /* 0049ee64: mov word ptr [esi + 0x47e], ax */ W16((u32)(r_esi+0x47eu), (u16)r_eax);
    /* 0049ee6b: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0049ee6e: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ee73: je 0x49ee80 */ if (fZ) goto L_0049ee80;
L_0049ee75:; BB(0x0049ee75);
    /* 0049ee75: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee77: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ee79: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49ee7eu); f_0049b19c();
L_0049ee7e:; BB(0x0049ee7e);
    /* 0049ee7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049ee7f: ret  */ FN_RET(0x0049ee50); r_esp += 4; return;
L_0049ee80:; BB(0x0049ee80);
    /* 0049ee80: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ee82: call 0x49b474 */ r_esp -= 4; W32(r_esp, 0x49ee87u); f_0049b474();
    /* 0049ee87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049ee88: ret  */ FN_RET(0x0049ee50); r_esp += 4; return;
}

void f_0049ee8c(void)
{
    FN_ENTER(0x0049ee8c);
    /* 0049ee8c: mov eax, dword ptr [ecx + 0x478] */ r_eax = R32((u32)(r_ecx+0x478u));
    /* 0049ee92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ee94: jne 0x49ee9b */ if (!fZ) goto L_0049ee9b;
L_0049ee96:; BB(0x0049ee96);
    /* 0049ee96: call 0x49b7d0 */ r_esp -= 4; W32(r_esp, 0x49ee9bu); f_0049b7d0();
L_0049ee9b:; BB(0x0049ee9b);
    /* 0049ee9b: ret  */ FN_RET(0x0049ee8c); r_esp += 4; return;
}

void f_0049ee9c(void)
{
    FN_ENTER(0x0049ee9c);
    /* 0049ee9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049ee9e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049eea0: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 0049eea6: mov edx, dword ptr [ebp + 0x478] */ r_edx = R32((u32)(r_ebp+0x478u));
    /* 0049eeac: add eax, -0x1e */ {  u32 a = r_eax; u32 b = 0xffffffe2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049eeaf: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049eeb1: jne 0x49eefe */ if (!fZ) goto L_0049eefe;
L_0049eeb3:; BB(0x0049eeb3);
    /* 0049eeb3: movzx eax, word ptr [ebp + 0x47e] */ r_eax = (u32)R16((u32)(r_ebp+0x47eu));
    /* 0049eeba: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049eebf: je 0x49eefe */ if (fZ) goto L_0049eefe;
L_0049eec1:; BB(0x0049eec1);
    /* 0049eec1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049eec3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049eec5: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 0049eec8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049eec9: push 0x59a */ { u32 v = 0x59au; r_esp -= 4; W32(r_esp, v); }
    /* 0049eece: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49eed3u); f_00814298();
    /* 0049eed3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049eed5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049eed7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049eed8: push 0x5b7 */ { u32 v = 0x5b7u; r_esp -= 4; W32(r_esp, v); }
    /* 0049eedd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49eee2u); f_00814298();
    /* 0049eee2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049eee4: push 0x223 */ { u32 v = 0x223u; r_esp -= 4; W32(r_esp, v); }
    /* 0049eee9: lea eax, [ebp + 0x644] */ r_eax = (u32)(r_ebp+0x644u);
    /* 0049eeef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049eef0: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x49eef5u); f_0050b7a4();
    /* 0049eef5: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049eef8: mov edx, dword ptr [ebp + 0x478] */ r_edx = R32((u32)(r_ebp+0x478u));
L_0049eefe:; BB(0x0049eefe);
    /* 0049eefe: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049ef01: mov dword ptr [ebp + 0x478], edx */ W32((u32)(r_ebp+0x478u), r_edx);
    /* 0049ef07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ef09: jl 0x49ef0e */ if ((fS!=fO)) goto L_0049ef0e;
L_0049ef0b:; BB(0x0049ef0b);
    /* 0049ef0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ef0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049ef0d: ret  */ FN_RET(0x0049ee9c); r_esp += 4; return;
L_0049ef0e:; BB(0x0049ef0e);
    /* 0049ef0e: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ef10: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049ef12: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49ef17u); f_0049bd50();
    /* 0049ef17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ef18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049ef19: ret  */ FN_RET(0x0049ee9c); r_esp += 4; return;
}

void f_0049ef1c(void)
{
    FN_ENTER(0x0049ef1c);
    /* 0049ef1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049ef1d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049ef1f: mov eax, dword ptr [ebp + 0x51c] */ r_eax = R32((u32)(r_ebp+0x51cu));
    /* 0049ef25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ef27: jne 0x49ef3e */ if (!fZ) goto L_0049ef3e;
L_0049ef29:; BB(0x0049ef29);
    /* 0049ef29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049ef2b: call 0x49c598 */ r_esp -= 4; W32(r_esp, 0x49ef30u); f_0049c598();
    /* 0049ef30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ef32: jne 0x49ef3e */ if (!fZ) goto L_0049ef3e;
L_0049ef34:; BB(0x0049ef34);
    /* 0049ef34: mov dword ptr [ebp + 0x51c], 1 */ W32((u32)(r_ebp+0x51cu), 0x1u);
L_0049ef3e:; BB(0x0049ef3e);
    /* 0049ef3e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049ef40: call 0x49c898 */ r_esp -= 4; W32(r_esp, 0x49ef45u); f_0049c898();
    /* 0049ef45: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 0049ef4b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049ef4e: mov dword ptr [ebp + 0x478], eax */ W32((u32)(r_ebp+0x478u), r_eax);
    /* 0049ef54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ef56: jl 0x49ef5a */ if ((fS!=fO)) goto L_0049ef5a;
L_0049ef58:; BB(0x0049ef58);
    /* 0049ef58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ef59: ret  */ FN_RET(0x0049ef1c); r_esp += 4; return;
L_0049ef5a:; BB(0x0049ef5a);
    /* 0049ef5a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0049ef5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049ef5e: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49ef63u); f_0049bd50();
    /* 0049ef63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ef64: ret  */ FN_RET(0x0049ef1c); r_esp += 4; return;
}

void f_0049ef68(void)
{
    FN_ENTER(0x0049ef68);
    /* 0049ef68: mov eax, dword ptr [ecx + 0x478] */ r_eax = R32((u32)(r_ecx+0x478u));
    /* 0049ef6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ef70: jne 0x49efab */ if (!fZ) goto L_0049efab;
L_0049ef72:; BB(0x0049ef72);
    /* 0049ef72: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0049ef78: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ef7b: jne 0x49ef8f */ if (!fZ) goto L_0049ef8f;
L_0049ef7d:; BB(0x0049ef7d);
    /* 0049ef7d: mov dword ptr [ecx + 0x484], 0 */ W32((u32)(r_ecx+0x484u), 0x0u);
    /* 0049ef87: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0049ef89: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49ef8eu); f_0049b19c();
    /* 0049ef8e: ret  */ FN_RET(0x0049ef68); r_esp += 4; return;
L_0049ef8f:; BB(0x0049ef8f);
    /* 0049ef8f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ef92: jne 0x49efa6 */ if (!fZ) goto L_0049efa6;
L_0049ef94:; BB(0x0049ef94);
    /* 0049ef94: mov dword ptr [ecx + 0x484], 1 */ W32((u32)(r_ecx+0x484u), 0x1u);
    /* 0049ef9e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0049efa0: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49efa5u); f_0049b19c();
    /* 0049efa5: ret  */ FN_RET(0x0049ef68); r_esp += 4; return;
L_0049efa6:; BB(0x0049efa6);
    /* 0049efa6: call 0x49b7d0 */ r_esp -= 4; W32(r_esp, 0x49efabu); f_0049b7d0();
L_0049efab:; BB(0x0049efab);
    /* 0049efab: ret  */ FN_RET(0x0049ef68); r_esp += 4; return;
}

void f_0049efac(void)
{
    FN_ENTER(0x0049efac);
    /* 0049efac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049efad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049efaf: mov eax, dword ptr [ebp + 0x51c] */ r_eax = R32((u32)(r_ebp+0x51cu));
    /* 0049efb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049efb7: jne 0x49efce */ if (!fZ) goto L_0049efce;
L_0049efb9:; BB(0x0049efb9);
    /* 0049efb9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049efbb: call 0x49c598 */ r_esp -= 4; W32(r_esp, 0x49efc0u); f_0049c598();
    /* 0049efc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049efc2: jne 0x49efce */ if (!fZ) goto L_0049efce;
L_0049efc4:; BB(0x0049efc4);
    /* 0049efc4: mov dword ptr [ebp + 0x51c], 1 */ W32((u32)(r_ebp+0x51cu), 0x1u);
L_0049efce:; BB(0x0049efce);
    /* 0049efce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049efd0: call 0x49c898 */ r_esp -= 4; W32(r_esp, 0x49efd5u); f_0049c898();
    /* 0049efd5: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 0049efdb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049efde: mov dword ptr [ebp + 0x478], eax */ W32((u32)(r_ebp+0x478u), r_eax);
    /* 0049efe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049efe6: jl 0x49efea */ if ((fS!=fO)) goto L_0049efea;
L_0049efe8:; BB(0x0049efe8);
    /* 0049efe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049efe9: ret  */ FN_RET(0x0049efac); r_esp += 4; return;
L_0049efea:; BB(0x0049efea);
    /* 0049efea: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0049efec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049efee: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49eff3u); f_0049bd50();
    /* 0049eff3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049eff4: ret  */ FN_RET(0x0049efac); r_esp += 4; return;
}

void f_0049eff8(void)
{
    FN_ENTER(0x0049eff8);
    /* 0049eff8: mov eax, dword ptr [ecx + 0x478] */ r_eax = R32((u32)(r_ecx+0x478u));
    /* 0049effe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049f000: jne 0x49f00d */ if (!fZ) goto L_0049f00d;
L_0049f002:; BB(0x0049f002);
    /* 0049f002: push dword ptr [ecx + 0x494] */ { u32 v = R32((u32)(r_ecx+0x494u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049f008: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49f00du); f_0049b19c();
L_0049f00d:; BB(0x0049f00d);
    /* 0049f00d: ret  */ FN_RET(0x0049eff8); r_esp += 4; return;
}

