#include "protos.h"

void f_00758094(void) /* sub_758094 */
{
    FN_ENTER(0x00758094);
    /* 00758094: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00758095: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00758096: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00758098: fild dword ptr [ebp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x5cu)));
    /* 0075809b: fcomp dword ptr [0x974148] */ fx_compare(ST(0), R_F32((u32)(0x974148u))); FPOP();
    /* 007580a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007580a3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007580a4: jbe 0x7580ad */ if ((fC||fZ)) goto L_007580ad;
L_007580a6:; BB(0x007580a6);
    /* 007580a6: mov dword ptr [ebp + 0x5c], 7 */ W32((u32)(r_ebp+0x5cu), 0x7u);
L_007580ad:; BB(0x007580ad);
    /* 007580ad: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 007580b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007580b2: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 007580b5: push 0x9f4960 */ { u32 v = 0x9f4960u; r_esp -= 4; W32(r_esp, v); }
    /* 007580ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007580bb: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x7580c0u); f_0072a68c();
    /* 007580c0: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 007580c5: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007580c8: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 007580ca: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7580cfu); f_0079317c();
    /* 007580cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007580d2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007580d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007580d5: mov ecx, esi */ r_ecx = r_esi;
    /* 007580d7: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7580dcu); f_0072db60();
    /* 007580dc: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 007580e1: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007580e4: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 007580e7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7580ecu); f_0079317c();
    /* 007580ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007580ed: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007580ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007580f0: mov ecx, esi */ r_ecx = r_esi;
    /* 007580f2: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7580f7u); f_0072db60();
    /* 007580f7: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 007580fc: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007580ff: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 00758102: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x758107u); f_0079317c();
    /* 00758107: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758108: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0075810a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075810b: mov ecx, esi */ r_ecx = r_esi;
    /* 0075810d: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x758112u); f_0072db60();
    /* 00758112: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 00758117: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0075811a: mov esi, dword ptr [eax + 0x48] */ r_esi = R32((u32)(r_eax+0x48u));
    /* 0075811d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x758122u); f_0079317c();
    /* 00758122: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758123: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00758125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758126: mov ecx, esi */ r_ecx = r_esi;
    /* 00758128: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x75812du); f_0072db60();
    /* 0075812d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00758132: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00758135: mov esi, dword ptr [eax + 0x60] */ r_esi = R32((u32)(r_eax+0x60u));
    /* 00758138: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75813du); f_0079317c();
    /* 0075813d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075813e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00758140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758141: mov ecx, esi */ r_ecx = r_esi;
    /* 00758143: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x758148u); f_0072db60();
    /* 00758148: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075814d: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00758150: mov ebp, dword ptr [eax + 0x78] */ r_ebp = R32((u32)(r_eax+0x78u));
    /* 00758153: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x758158u); f_0079317c();
    /* 00758158: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758159: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0075815b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075815c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075815e: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x758163u); f_0072db60();
    /* 00758163: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758164: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00758165: ret  */ FN_RET(0x00758094); r_esp += 4; return;
}

void f_00758168(void) /* sub_758168 */
{
    FN_ENTER(0x00758168);
    /* 00758168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00758169: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075816a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075816c: fild dword ptr [ebp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x5cu)));
    /* 0075816f: fcomp dword ptr [0x974144] */ fx_compare(ST(0), R_F32((u32)(0x974144u))); FPOP();
    /* 00758175: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00758177: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00758178: jbe 0x758181 */ if ((fC||fZ)) goto L_00758181;
L_0075817a:; BB(0x0075817a);
    /* 0075817a: mov dword ptr [ebp + 0x5c], 7 */ W32((u32)(r_ebp+0x5cu), 0x7u);
L_00758181:; BB(0x00758181);
    /* 00758181: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00758185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758186: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 00758189: push 0x9f4740 */ { u32 v = 0x9f4740u; r_esp -= 4; W32(r_esp, v); }
    /* 0075818e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075818f: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x758194u); f_0072a68c();
    /* 00758194: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 00758199: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0075819c: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 0075819f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7581a4u); f_0079317c();
    /* 007581a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007581a7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007581a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007581aa: mov ecx, edi */ r_ecx = r_edi;
    /* 007581ac: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7581b1u); f_0072db60();
    /* 007581b1: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 007581b6: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007581b9: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 007581bc: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7581c1u); f_0079317c();
    /* 007581c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007581c2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007581c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007581c5: mov ecx, edi */ r_ecx = r_edi;
    /* 007581c7: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7581ccu); f_0072db60();
    /* 007581cc: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 007581d1: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007581d4: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 007581d7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7581dcu); f_0079317c();
    /* 007581dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007581dd: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007581df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007581e0: mov ecx, edi */ r_ecx = r_edi;
    /* 007581e2: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7581e7u); f_0072db60();
    /* 007581e7: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007581ea: mov edi, dword ptr [eax + 0x44] */ r_edi = R32((u32)(r_eax+0x44u));
    /* 007581ed: call 0x7930f0 */ r_esp -= 4; W32(r_esp, 0x7581f2u); f_007930f0();
    /* 007581f2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007581f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007581f5: mov ecx, edi */ r_ecx = r_edi;
    /* 007581f7: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7581fcu); f_0072db60();
    /* 007581fc: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00758200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758201: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x758206u); f_0068d5a8();
    /* 00758206: mov edi, eax */ r_edi = r_eax;
    /* 00758208: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075820b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075820d: je 0x75827a */ if (fZ) goto L_0075827a;
L_0075820f:; BB(0x0075820f);
    /* 0075820f: mov edx, edi */ r_edx = r_edi;
    /* 00758211: add edx, 0x930 */ {  u32 a = r_edx; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00758217: je 0x758265 */ if (fZ) goto L_00758265;
L_00758219:; BB(0x00758219);
    /* 00758219: mov ecx, edi */ r_ecx = r_edi;
    /* 0075821b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x758220u); f_006936b4();
    /* 00758220: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00758222: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758223: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00758226: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00758228: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x75822du); f_0072db60();
    /* 0075822d: movsx edx, byte ptr [edi + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x961u));
    /* 00758234: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00758235: call 0x793078 */ r_esp -= 4; W32(r_esp, 0x75823au); f_00793078();
    /* 0075823a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075823b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075823d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075823e: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00758241: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00758244: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x758249u); f_0072db60();
    /* 00758249: movsx edx, byte ptr [edi + 0x960] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x960u));
    /* 00758250: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00758251: call 0x7930c8 */ r_esp -= 4; W32(r_esp, 0x758256u); f_007930c8();
    /* 00758256: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758257: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00758259: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075825a: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0075825d: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00758260: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x758265u); f_0072db60();
L_00758265:; BB(0x00758265);
    /* 00758265: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00758268: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0075826b: lea edx, [ebp + 0x64] */ r_edx = (u32)(r_ebp+0x64u);
    /* 0075826e: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00758271: add edi, 0xde8 */ {  u32 a = r_edi; u32 b = 0xde8u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00758277: mov dword ptr [ebp + 0x64], edi */ W32((u32)(r_ebp+0x64u), r_edi);
L_0075827a:; BB(0x0075827a);
    /* 0075827a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075827b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075827c: ret  */ FN_RET(0x00758168); r_esp += 4; return;
}

void f_00758280(void) /* sub_758280 */
{
    FN_ENTER(0x00758280);
    /* 00758280: movsx eax, word ptr [ecx + 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x60u));
    /* 00758284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758286: je 0x7582ae */ if (fZ) goto L_007582ae;
L_00758288:; BB(0x00758288);
    /* 00758288: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075828b: jne 0x75829b */ if (!fZ) goto L_0075829b;
L_0075828d:; BB(0x0075828d);
    /* 0075828d: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 00758290: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 00758293: call dword ptr [edx*4 + 0x9f4724] */ { u32 t = R32((u32)(r_edx*4+0x9f4724u)); r_esp -= 4; W32(r_esp, 0x75829au); call_ind(t); }
    /* 0075829a: ret  */ FN_RET(0x00758280); r_esp += 4; return;
L_0075829b:; BB(0x0075829b);
    /* 0075829b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075829e: jne 0x7582bb */ if (!fZ) goto L_007582bb;
L_007582a0:; BB(0x007582a0);
    /* 007582a0: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 007582a3: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 007582a6: call dword ptr [edx*4 + 0x9f4734] */ { u32 t = R32((u32)(r_edx*4+0x9f4734u)); r_esp -= 4; W32(r_esp, 0x7582adu); call_ind(t); }
    /* 007582ad: ret  */ FN_RET(0x00758280); r_esp += 4; return;
L_007582ae:; BB(0x007582ae);
    /* 007582ae: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 007582b1: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 007582b4: call dword ptr [edx*4 + 0x9f4708] */ { u32 t = R32((u32)(r_edx*4+0x9f4708u)); r_esp -= 4; W32(r_esp, 0x7582bbu); call_ind(t); }
L_007582bb:; BB(0x007582bb);
    /* 007582bb: ret  */ FN_RET(0x00758280); r_esp += 4; return;
}

void f_007582bc(void) /* sub_7582BC */
{
    FN_ENTER(0x007582bc);
    /* 007582bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007582bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007582bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007582c1: call 0x7582e0 */ r_esp -= 4; W32(r_esp, 0x7582c6u); f_007582e0();
    /* 007582c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007582ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007582cc: jne 0x7582d2 */ if (!fZ) goto L_007582d2;
L_007582ce:; BB(0x007582ce);
    /* 007582ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007582cf: ret 4 */ FN_RET(0x007582bc); r_esp += 8; return;
L_007582d2:; BB(0x007582d2);
    /* 007582d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007582d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7582d8u); f_005c2f74();
    /* 007582d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007582d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007582da: ret 4 */ FN_RET(0x007582bc); r_esp += 8; return;
}

void f_007582e0(void) /* sub_7582E0 */
{
    FN_ENTER(0x007582e0);
    /* 007582e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007582e1: mov ebp, esp */ r_ebp = r_esp;
    /* 007582e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007582e5: push 0x8f30b0 */ { u32 v = 0x8f30b0u; r_esp -= 4; W32(r_esp, v); }
    /* 007582ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007582f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007582f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007582f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007582fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007582fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00758301: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00758304: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00758307: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075830a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00758311: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758314: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00758317: mov dword ptr [eax], 0xb42928 */ W32((u32)(r_eax), 0xb42928u);
    /* 0075831d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075831f: je 0x758330 */ if (fZ) goto L_00758330;
L_00758321:; BB(0x00758321);
    /* 00758321: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x758326u); f_007127b0();
    /* 00758326: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758329: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_00758330:; BB(0x00758330);
    /* 00758330: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758333: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758335: je 0x758346 */ if (fZ) goto L_00758346;
L_00758337:; BB(0x00758337);
    /* 00758337: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75833cu); f_007127b0();
    /* 0075833c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075833f: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_00758346:; BB(0x00758346);
    /* 00758346: mov dword ptr [0xa9acf0], 0 */ W32((u32)(0xa9acf0u), 0x0u);
    /* 00758350: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00758357: mov ecx, eax */ r_ecx = r_eax;
    /* 00758359: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75835eu); f_008171e8();
    /* 0075835e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758361: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758368: mov esp, ebp */ r_esp = r_ebp;
    /* 0075836a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075836b: ret  */ FN_RET(0x007582e0); r_esp += 4; return;
}

void f_0075836c(void) /* sub_75836C */
{
    FN_ENTER(0x0075836c);
    /* 0075836c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075836d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075836f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00758371: push 0x8f30e6 */ { u32 v = 0x8f30e6u; r_esp -= 4; W32(r_esp, v); }
    /* 00758376: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075837c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075837d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00758384: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00758387: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075838a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075838d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00758390: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00758393: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00758396: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00758399: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075839c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075839d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 007583a0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007583a3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7583a8u); f_008193cc();
    /* 007583a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007583af: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007583b2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007583b5: mov dword ptr [edx], 0xb42928 */ W32((u32)(r_edx), 0xb42928u);
    /* 007583bb: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 007583be: mov dword ptr [edx + 0x1c], 0x44228000 */ W32((u32)(r_edx+0x1cu), 0x44228000u);
    /* 007583c5: mov dword ptr [edx + 0x20], 0x43d48000 */ W32((u32)(r_edx+0x20u), 0x43d48000u);
    /* 007583cc: call 0x77baf8 */ r_esp -= 4; W32(r_esp, 0x7583d1u); f_0077baf8();
    /* 007583d1: fadd dword ptr [0x974198] */ ST(0) = ST(0) + R_F32((u32)(0x974198u));
    /* 007583d7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007583da: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007583dd: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 007583e0: mov dword ptr [edx + 0x28], 0x43d48000 */ W32((u32)(r_edx+0x28u), 0x43d48000u);
    /* 007583e7: mov dword ptr [0xa9acf0], edx */ W32((u32)(0xa9acf0u), r_edx);
    /* 007583ed: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 007583f0: mov dword ptr [edx + 0x2c], 0x44228000 */ W32((u32)(r_edx+0x2cu), 0x44228000u);
    /* 007583f7: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 007583f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007583fb: mov dword ptr [edx + 0x30], 0x43d48000 */ W32((u32)(r_edx+0x30u), 0x43d48000u);
    /* 00758402: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00758405: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 00758408: mov dword ptr [edx + 0x34], 0x44228000 */ W32((u32)(r_edx+0x34u), 0x44228000u);
    /* 0075840f: mov dword ptr [edx + 0x38], 0x43d48000 */ W32((u32)(r_edx+0x38u), 0x43d48000u);
    /* 00758416: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75841bu); f_005caba4();
    /* 0075841b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075841c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0075841f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758421: je 0x758479 */ if (fZ) goto L_00758479;
L_00758423:; BB(0x00758423);
    /* 00758423: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0075842a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00758431: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00758434: push dword ptr [eax + 0x3c] */ { u32 v = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00758437: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075843a: call 0x757574 */ r_esp -= 4; W32(r_esp, 0x75843fu); f_00757574();
    /* 0075843f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00758442: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00758449:; BB(0x00758449);
    /* 00758449: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075844c: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 0075844f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00758456: push 0x75854c */ { u32 v = 0x75854cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075845b: call 0x713084 */ r_esp -= 4; W32(r_esp, 0x758460u); f_00713084();
    /* 00758460: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758461: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00758464: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00758467: mov eax, edx */ r_eax = r_edx;
    /* 00758469: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075846c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758473: mov esp, ebp */ r_esp = r_ebp;
    /* 00758475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758476: ret 8 */ FN_RET(0x0075836c); r_esp += 12; return;
L_00758479:; BB(0x00758479);
    /* 00758479: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0075847b: jmp 0x758449 */ goto L_00758449;
}

void f_00758480(void) /* sub_758480 */
{
    FN_ENTER(0x00758480);
    /* 00758480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00758481: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00758483: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00758486: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00758489: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0075848b: fld dword ptr [0x974194] */ FPUSH(R_F32((u32)(0x974194u)));
    /* 00758491: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00758493: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00758495: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00758497: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0075849a: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0075849d: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 007584a0: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 007584a3: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 007584a6: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 007584a9: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 007584ab: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 007584ae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007584b0: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 007584b2: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 007584b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007584b6: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 007584b8: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 007584ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007584bc: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 007584be: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007584c0: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 007584c3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007584c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007584c7: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 007584ca: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 007584cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007584ce: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007584d0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007584d2: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 007584d5: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7584dau); f_007a61a4();
    /* 007584da: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007584dd: je 0x7584e1 */ if (fZ) goto L_007584e1;
L_007584df:; BB(0x007584df);
    /* 007584df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007584e0: ret  */ FN_RET(0x00758480); r_esp += 4; return;
L_007584e1:; BB(0x007584e1);
    /* 007584e1: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 007584e4: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007584e9: jne 0x758515 */ if (!fZ) goto L_00758515;
L_007584eb:; BB(0x007584eb);
    /* 007584eb: mov dword ptr [ebp + 0x2c], 0x44228000 */ W32((u32)(r_ebp+0x2cu), 0x44228000u);
    /* 007584f2: mov dword ptr [ebp + 0x30], 0x43d48000 */ W32((u32)(r_ebp+0x30u), 0x43d48000u);
    /* 007584f9: call 0x77bb1c */ r_esp -= 4; W32(r_esp, 0x7584feu); f_0077bb1c();
    /* 007584fe: fld dword ptr [0x974188] */ FPUSH(R_F32((u32)(0x974188u)));
    /* 00758504: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00758507: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00758509: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 0075850c: mov dword ptr [ebp + 0x38], 0x43d48000 */ W32((u32)(r_ebp+0x38u), 0x43d48000u);
    /* 00758513: jmp 0x758543 */ goto L_00758543;
L_00758515:; BB(0x00758515);
    /* 00758515: cmp eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075851a: jne 0x758543 */ if (!fZ) goto L_00758543;
L_0075851c:; BB(0x0075851c);
    /* 0075851c: mov dword ptr [ebp + 0x1c], 0x44228000 */ W32((u32)(r_ebp+0x1cu), 0x44228000u);
    /* 00758523: mov dword ptr [ebp + 0x20], 0x43d48000 */ W32((u32)(r_ebp+0x20u), 0x43d48000u);
    /* 0075852a: call 0x77baf8 */ r_esp -= 4; W32(r_esp, 0x75852fu); f_0077baf8();
    /* 0075852f: fld dword ptr [0x974188] */ FPUSH(R_F32((u32)(0x974188u)));
    /* 00758535: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00758537: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 0075853a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075853c: mov dword ptr [ebp + 0x28], 0x43d48000 */ W32((u32)(r_ebp+0x28u), 0x43d48000u);
L_00758543:; BB(0x00758543);
    /* 00758543: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00758546: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 00758549: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075854a: ret  */ FN_RET(0x00758480); r_esp += 4; return;
}

void f_0075854c(void)
{
    FN_ENTER(0x0075854c);
    /* 0075854c: mov ecx, dword ptr [0xa9acf0] */ r_ecx = R32((u32)(0xa9acf0u));
    /* 00758552: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758554: je 0x75855b */ if (fZ) goto L_0075855b;
L_00758556:; BB(0x00758556);
    /* 00758556: call 0x75855c */ r_esp -= 4; W32(r_esp, 0x75855bu); f_0075855c();
L_0075855b:; BB(0x0075855b);
    /* 0075855b: ret  */ FN_RET(0x0075854c); r_esp += 4; return;
}

void f_0075855c(void) /* sub_75855C */
{
    FN_ENTER(0x0075855c);
    /* 0075855c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075855d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00758560: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00758562: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00758565: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075856a: fld dword ptr [0x974180] */ FPUSH(R_F32((u32)(0x974180u)));
    /* 00758570: fld dword ptr [0x974184] */ FPUSH(R_F32((u32)(0x974184u)));
    /* 00758576: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00758578: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0075857c: jg 0x758598 */ if ((!fZ&&fS==fO)) goto L_00758598;
L_0075857e:; BB(0x0075857e);
    /* 0075857e: fld dword ptr [0x974180] */ FPUSH(R_F32((u32)(0x974180u)));
    /* 00758584: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00758588: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0075858c: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 0075858e: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 00758590: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00758592: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00758596: jmp 0x7585a9 */ goto L_007585a9;
L_00758598:; BB(0x00758598);
    /* 00758598: add eax, 0xffffff6a */ {  u32 a = r_eax; u32 b = 0xffffff6au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075859d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007585a1: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007585a5: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 007585a7: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
L_007585a9:; BB(0x007585a9);
    /* 007585a9: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 007585ac: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 007585af: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007585b3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007585b6: mov dword ptr [esp + 8], 0xbfc00000 */ W32((u32)(r_esp+0x8u), 0xbfc00000u);
    /* 007585be: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007585c2: call 0x77b5ac */ r_esp -= 4; W32(r_esp, 0x7585c7u); f_0077b5ac();
    /* 007585c7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007585cb: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 007585ce: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007585d1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007585d5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007585d8: mov dword ptr [esp + 8], 0xbfc00000 */ W32((u32)(r_esp+0x8u), 0xbfc00000u);
    /* 007585e0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007585e4: call 0x77b9e0 */ r_esp -= 4; W32(r_esp, 0x7585e9u); f_0077b9e0();
    /* 007585e9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007585ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007585ed: ret  */ FN_RET(0x0075855c); r_esp += 4; return;
}

void f_007585f0(void) /* sub_7585F0 */
{
    FN_ENTER(0x007585f0);
    /* 007585f0: mov dword ptr [0xa9ace4], 0x3f800000 */ W32((u32)(0xa9ace4u), 0x3f800000u);
    /* 007585fa: mov dword ptr [0xa9ace8], 0x41000000 */ W32((u32)(0xa9ace8u), 0x41000000u);
    /* 00758604: mov dword ptr [0xa9acec], 0x3fc00000 */ W32((u32)(0xa9acecu), 0x3fc00000u);
    /* 0075860e: ret  */ FN_RET(0x007585f0); r_esp += 4; return;
}

void f_00758610(void) /* sub_758610 */
{
    FN_ENTER(0x00758610);
    /* 00758610: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00758611: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00758613: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00758615: call 0x758634 */ r_esp -= 4; W32(r_esp, 0x75861au); f_00758634();
    /* 0075861a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075861e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758620: jne 0x758626 */ if (!fZ) goto L_00758626;
L_00758622:; BB(0x00758622);
    /* 00758622: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00758623: ret 4 */ FN_RET(0x00758610); r_esp += 8; return;
L_00758626:; BB(0x00758626);
    /* 00758626: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00758627: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75862cu); f_005c2f74();
    /* 0075862c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075862d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075862e: ret 4 */ FN_RET(0x00758610); r_esp += 8; return;
}

void f_00758634(void) /* sub_758634 */
{
    FN_ENTER(0x00758634);
    /* 00758634: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00758635: mov ebp, esp */ r_ebp = r_esp;
    /* 00758637: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00758639: push 0x8f3100 */ { u32 v = 0x8f3100u; r_esp -= 4; W32(r_esp, v); }
    /* 0075863e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00758644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758645: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075864c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075864f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00758652: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00758655: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00758658: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075865b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075865e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00758665: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758668: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 0075866b: mov dword ptr [eax], 0xb42aa0 */ W32((u32)(r_eax), 0xb42aa0u);
    /* 00758671: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758673: je 0x75868c */ if (fZ) goto L_0075868c;
L_00758675:; BB(0x00758675);
    /* 00758675: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00758679: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075867e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00758682: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758685: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_0075868c:; BB(0x0075868c);
    /* 0075868c: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0075868f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758691: je 0x7586c3 */ if (fZ) goto L_007586c3;
L_00758693:; BB(0x00758693);
    /* 00758693: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x758698u); f_00719914();
    /* 00758698: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075869a: je 0x7586ae */ if (fZ) goto L_007586ae;
L_0075869c:; BB(0x0075869c);
    /* 0075869c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075869f: movzx eax, byte ptr [edx + 0x1c] */ r_eax = (u32)R8((u32)(r_edx+0x1cu));
    /* 007586a3: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007586a6: je 0x758804 */ if (fZ) goto L_00758804;
L_007586ac:; BB(0x007586ac);
    /* 007586ac: jmp 0x7586b1 */ goto L_007586b1;
L_007586ae:; BB(0x007586ae);
    /* 007586ae: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_007586b1:; BB(0x007586b1);
    /* 007586b1: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 007586b4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7586b9u); f_007127b0();
    /* 007586b9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007586bc: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
L_007586c3:; BB(0x007586c3);
    /* 007586c3: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007586c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007586c8: je 0x7586d9 */ if (fZ) goto L_007586d9;
L_007586ca:; BB(0x007586ca);
    /* 007586ca: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7586cfu); f_0073d160();
    /* 007586cf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007586d2: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_007586d9:; BB(0x007586d9);
    /* 007586d9: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007586dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007586de: je 0x7586ef */ if (fZ) goto L_007586ef;
L_007586e0:; BB(0x007586e0);
    /* 007586e0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7586e5u); f_007127b0();
    /* 007586e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007586e8: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_007586ef:; BB(0x007586ef);
    /* 007586ef: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 007586f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007586f4: je 0x758705 */ if (fZ) goto L_00758705;
L_007586f6:; BB(0x007586f6);
    /* 007586f6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7586fbu); f_007127b0();
    /* 007586fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007586fe: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
L_00758705:; BB(0x00758705);
    /* 00758705: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00758708: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075870a: je 0x75871b */ if (fZ) goto L_0075871b;
L_0075870c:; BB(0x0075870c);
    /* 0075870c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x758711u); f_007127b0();
    /* 00758711: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758714: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
L_0075871b:; BB(0x0075871b);
    /* 0075871b: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0075871e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758720: je 0x758731 */ if (fZ) goto L_00758731;
L_00758722:; BB(0x00758722);
    /* 00758722: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x758727u); f_007127b0();
    /* 00758727: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075872a: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_00758731:; BB(0x00758731);
    /* 00758731: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00758734: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758736: je 0x758747 */ if (fZ) goto L_00758747;
L_00758738:; BB(0x00758738);
    /* 00758738: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75873du); f_007127b0();
    /* 0075873d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758740: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_00758747:; BB(0x00758747);
    /* 00758747: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075874a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075874c: je 0x75875d */ if (fZ) goto L_0075875d;
L_0075874e:; BB(0x0075874e);
    /* 0075874e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x758753u); f_007127b0();
    /* 00758753: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758756: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075875d:; BB(0x0075875d);
    /* 0075875d: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00758760: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758762: je 0x758773 */ if (fZ) goto L_00758773;
L_00758764:; BB(0x00758764);
    /* 00758764: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x758769u); f_007127b0();
    /* 00758769: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075876c: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_00758773:; BB(0x00758773);
    /* 00758773: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00758776: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758778: je 0x758789 */ if (fZ) goto L_00758789;
L_0075877a:; BB(0x0075877a);
    /* 0075877a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75877fu); f_007127b0();
    /* 0075877f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758782: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_00758789:; BB(0x00758789);
    /* 00758789: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075878c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075878e: je 0x75879d */ if (fZ) goto L_0075879d;
L_00758790:; BB(0x00758790);
    /* 00758790: and dword ptr [edx], 0xfffffffd */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00758793: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758796: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075879d:; BB(0x0075879d);
    /* 0075879d: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007587a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007587a2: je 0x7587b3 */ if (fZ) goto L_007587b3;
L_007587a4:; BB(0x007587a4);
    /* 007587a4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7587a9u); f_007127b0();
    /* 007587a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007587ac: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_007587b3:; BB(0x007587b3);
    /* 007587b3: mov dword ptr [0xa9ad04], 0 */ W32((u32)(0xa9ad04u), 0x0u);
    /* 007587bd: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x7587c2u); f_007917b8();
    /* 007587c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007587c5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007587c8: je 0x758820 */ if (fZ) goto L_00758820;
L_007587ca:; BB(0x007587ca);
    /* 007587ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007587cc: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7587d1u); f_00791748();
    /* 007587d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007587d2:; BB(0x007587d2);
    /* 007587d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007587d5: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 007587d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007587da: je 0x7587ea */ if (fZ) goto L_007587ea;
L_007587dc:; BB(0x007587dc);
    /* 007587dc: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007587e2: call 0x7f271c */ r_esp -= 4; W32(r_esp, 0x7587e7u); f_007f271c();
    /* 007587e7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_007587ea:; BB(0x007587ea);
    /* 007587ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007587f1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7587f6u); f_008171e8();
    /* 007587f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007587f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758800: mov esp, ebp */ r_esp = r_ebp;
    /* 00758802: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758803: ret  */ FN_RET(0x00758634); r_esp += 4; return;
L_00758804:; BB(0x00758804);
    /* 00758804: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00758807: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x75880cu); f_00751c44();
    /* 0075880c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075880f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758810: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00758813: call 0x77dd20 */ r_esp -= 4; W32(r_esp, 0x758818u); f_0077dd20();
    /* 00758818: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075881b: jmp 0x7586b1 */ goto L_007586b1;
L_00758820:; BB(0x00758820);
    /* 00758820: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00758822: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x758827u); f_00791748();
    /* 00758827: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758828: jmp 0x7587d2 */ goto L_007587d2;
}

void f_0075882c(void) /* sub_75882C */
{
    FN_ENTER(0x0075882c);
    /* 0075882c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075882d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075882f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00758831: push 0x8f311c */ { u32 v = 0x8f311cu; r_esp -= 4; W32(r_esp, v); }
    /* 00758836: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075883c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075883d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00758844: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00758847: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075884a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075884d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00758850: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00758853: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00758856: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00758859: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075885c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075885d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00758860: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00758863: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x758868u); f_008193cc();
    /* 00758868: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075886f: push 0x75a7fc */ { u32 v = 0x75a7fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00758874: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00758877: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0075887a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075887d: mov dword ptr [ecx], 0xb42aa0 */ W32((u32)(r_ecx), 0xb42aa0u);
    /* 00758883: mov esi, dword ptr [0x9f55cc] */ r_esi = R32((u32)(0x9f55ccu));
    /* 00758889: mov dword ptr [0xa9ad04], ecx */ W32((u32)(0xa9ad04u), r_ecx);
    /* 0075888f: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00758892: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 00758895: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00758898: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0075889a: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0075889d: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 007588a0: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 007588a3: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 007588a6: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 007588a9: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 007588ac: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 007588af: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 007588b2: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 007588b5: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 007588b8: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 007588bb: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 007588be: mov byte ptr [ecx + 0x1d], dl */ W8((u32)(r_ecx+0x1du), (u8)r_edx);
    /* 007588c1: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 007588c4: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 007588c7: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 007588ca: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007588cd: call 0x713084 */ r_esp -= 4; W32(r_esp, 0x7588d2u); f_00713084();
    /* 007588d2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007588d5: mov byte ptr [edx + 0x1c], 0 */ W8((u32)(r_edx+0x1cu), 0x0u);
    /* 007588d9: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007588dc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007588de: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7588e3u); f_00791748();
    /* 007588e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007588e6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007588e9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007588ec: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007588ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007588f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007588f9: mov esp, ebp */ r_esp = r_ebp;
    /* 007588fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007588fc: ret 8 */ FN_RET(0x0075882c); r_esp += 12; return;
}

void f_00758900(void) /* sub_758900 */
{
    FN_ENTER(0x00758900);
    /* 00758900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00758901: mov ebp, esp */ r_ebp = r_esp;
    /* 00758903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00758905: push 0x8f3200 */ { u32 v = 0x8f3200u; r_esp -= 4; W32(r_esp, v); }
    /* 0075890a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00758910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758911: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00758918: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075891b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075891e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00758921: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00758924: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00758927: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 0075892b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0075892e: cmp eax, 0x29 */ {  u32 a = r_eax; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00758931: ja 0x759866 */ if ((!fC&&!fZ)) goto L_00759866;
L_00758937:; BB(0x00758937);
    /* 00758937: mov eax, dword ptr [eax*4 + 0x9741e0] */ r_eax = R32((u32)(r_eax*4+0x9741e0u));
    /* 0075893e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758900); r_esp += 4; return;
}

void f_00758940(void)
{
    FN_ENTER(0x00758940);
    /* 00758940: mov eax, ecx */ r_eax = r_ecx;
    /* 00758942: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 00758945: jmp 0x758986 */ goto L_00758986;
L_00758986:; BB(0x00758986);
    /* 00758986: mov ecx, eax */ r_ecx = r_eax;
    /* 00758988: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x75898du); f_0078ed20();
    /* 0075898d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075898f: je 0x7589a6 */ if (fZ) goto L_007589a6;
L_00758991:; BB(0x00758991);
    /* 00758991: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758994: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758998: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075899b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007589a2: mov esp, ebp */ r_esp = r_ebp;
    /* 007589a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007589a5: ret  */ FN_RET(0x00758940); r_esp += 4; return;
L_007589a6:; BB(0x007589a6);
    /* 007589a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007589a9: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007589ac: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x7589b1u); f_0078ed14();
    /* 007589b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007589b3: je 0x759866 */ if (fZ) goto L_00759866;
L_007589b9:; BB(0x007589b9);
    /* 007589b9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007589bc: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007589bf: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x7589c4u); f_0078ed4c();
    /* 007589c4: mov ebx, eax */ r_ebx = r_eax;
    /* 007589c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007589c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007589ca: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 007589cd: call 0x77dce0 */ r_esp -= 4; W32(r_esp, 0x7589d2u); f_0077dce0();
    /* 007589d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007589d3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7589d8u); f_00857e98();
    /* 007589d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007589d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007589dc: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 007589e0: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758940); r_esp += 4; return;
}

void f_00758947(void)
{
    FN_ENTER(0x00758947);
    /* 00758947: mov eax, ecx */ r_eax = r_ecx;
    /* 00758949: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075894c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075894e: je 0x75895f */ if (fZ) goto L_0075895f;
L_00758950:; BB(0x00758950);
    /* 00758950: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x758955u); f_007127b0();
    /* 00758955: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758958: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075895f:; BB(0x0075895f);
    /* 0075895f: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00758962: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758964: je 0x758975 */ if (fZ) goto L_00758975;
L_00758966:; BB(0x00758966);
    /* 00758966: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75896bu); f_007127b0();
    /* 0075896b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075896e: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_00758975:; BB(0x00758975);
    /* 00758975: mov ecx, eax */ r_ecx = r_eax;
    /* 00758977: call 0x75a720 */ r_esp -= 4; W32(r_esp, 0x75897cu); f_0075a720();
    /* 0075897c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075897f: mov byte ptr [edx + 0x1c], 0x29 */ W8((u32)(r_edx+0x1cu), 0x29u);
    /* 00758983: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 00758986: mov ecx, eax */ r_ecx = r_eax;
    /* 00758988: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x75898du); f_0078ed20();
    /* 0075898d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075898f: je 0x7589a6 */ if (fZ) goto L_007589a6;
L_00758991:; BB(0x00758991);
    /* 00758991: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758994: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758998: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075899b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007589a2: mov esp, ebp */ r_esp = r_ebp;
    /* 007589a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007589a5: ret  */ FN_RET(0x00758947); r_esp += 4; return;
L_007589a6:; BB(0x007589a6);
    /* 007589a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007589a9: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007589ac: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x7589b1u); f_0078ed14();
    /* 007589b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007589b3: je 0x759866 */ if (fZ) goto L_00759866;
L_007589b9:; BB(0x007589b9);
    /* 007589b9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007589bc: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007589bf: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x7589c4u); f_0078ed4c();
    /* 007589c4: mov ebx, eax */ r_ebx = r_eax;
    /* 007589c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007589c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007589ca: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 007589cd: call 0x77dce0 */ r_esp -= 4; W32(r_esp, 0x7589d2u); f_0077dce0();
    /* 007589d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007589d3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7589d8u); f_00857e98();
    /* 007589d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007589d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007589dc: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 007589e0: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758947); r_esp += 4; return;
}

void f_007589e5(void)
{
    FN_ENTER(0x007589e5);
    /* 007589e5: mov eax, ecx */ r_eax = r_ecx;
    /* 007589e7: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 007589ea: jmp 0x758a0b */ goto L_00758a0b;
L_00758a0b:; BB(0x00758a0b);
    /* 00758a0b: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00758a12: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758a14: je 0x759866 */ if (fZ) goto L_00759866;
L_00758a1a:; BB(0x00758a1a);
    /* 00758a1a: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x758a1fu); f_00751c44();
    /* 00758a1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758a20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a23: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758a26: call 0x77dd20 */ r_esp -= 4; W32(r_esp, 0x758a2bu); f_0077dd20();
    /* 00758a2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a2e: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758a32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758a35: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758a3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00758a3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758a3f: ret  */ FN_RET(0x007589e5); r_esp += 4; return;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x007589e5); r_esp += 4; return;
}

void f_007589ec(void)
{
    FN_ENTER(0x007589ec);
    /* 007589ec: mov eax, ecx */ r_eax = r_ecx;
    /* 007589ee: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007589f1: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x7589f6u); f_0073600c();
    /* 007589f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007589f9: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 007589fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007589fe: je 0x75987d */ if (fZ) goto L_0075987d;
L_00758a04:; BB(0x00758a04);
    /* 00758a04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a07: mov byte ptr [eax + 0x1c], 0x27 */ W8((u32)(r_eax+0x1cu), 0x27u);
    /* 00758a0b: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00758a12: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758a14: je 0x759866 */ if (fZ) goto L_00759866;
L_00758a1a:; BB(0x00758a1a);
    /* 00758a1a: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x758a1fu); f_00751c44();
    /* 00758a1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758a20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a23: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758a26: call 0x77dd20 */ r_esp -= 4; W32(r_esp, 0x758a2bu); f_0077dd20();
    /* 00758a2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a2e: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758a32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758a35: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758a3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00758a3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758a3f: ret  */ FN_RET(0x007589ec); r_esp += 4; return;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x007589ec); r_esp += 4; return;
L_0075987d:; BB(0x0075987d);
    /* 0075987d: mov ecx, eax */ r_ecx = r_eax;
    /* 0075987f: call 0x75a690 */ r_esp -= 4; W32(r_esp, 0x759884u); f_0075a690();
    /* 00759884: mov ecx, eax */ r_ecx = r_eax;
    /* 00759886: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759889: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 0075988c: jmp 0x758a04 */ goto L_00758a04;
}

void f_00758a40(void)
{
    FN_ENTER(0x00758a40);
    /* 00758a40: mov eax, ecx */ r_eax = r_ecx;
    /* 00758a42: mov eax, dword ptr [eax + 0x50] */ r_eax = R32((u32)(r_eax+0x50u));
    /* 00758a45: jmp 0x758a56 */ goto L_00758a56;
L_00758a56:; BB(0x00758a56);
    /* 00758a56: mov ecx, eax */ r_ecx = r_eax;
    /* 00758a58: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x758a5du); f_0073d114();
    /* 00758a5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758a5f: je 0x758a76 */ if (fZ) goto L_00758a76;
L_00758a61:; BB(0x00758a61);
    /* 00758a61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a64: mov byte ptr [eax + 0x1c], 0x22 */ W8((u32)(r_eax+0x1cu), 0x22u);
    /* 00758a68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758a6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758a72: mov esp, ebp */ r_esp = r_ebp;
    /* 00758a74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758a75: ret  */ FN_RET(0x00758a40); r_esp += 4; return;
L_00758a76:; BB(0x00758a76);
    /* 00758a76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a79: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00758a7c: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x758a81u); f_0073ce50();
    /* 00758a81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758a83: je 0x759866 */ if (fZ) goto L_00759866;
L_00758a89:; BB(0x00758a89);
    /* 00758a89: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a8c: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00758a8f: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x758a94u); f_0073d134();
    /* 00758a94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758a96: je 0x758aa4 */ if (fZ) goto L_00758aa4;
L_00758a98:; BB(0x00758a98);
    /* 00758a98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a9b: mov byte ptr [eax + 0x1c], 0x22 */ W8((u32)(r_eax+0x1cu), 0x22u);
    /* 00758a9f: jmp 0x759866 */ goto L_00759866;
L_00758aa4:; BB(0x00758aa4);
    /* 00758aa4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758aa7: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758aaa: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x758aafu); f_007365f4();
    /* 00758aaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758ab0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758ab3: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758ab6: call 0x77dd04 */ r_esp -= 4; W32(r_esp, 0x758abbu); f_0077dd04();
    /* 00758abb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758abe: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758ac2: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758a40); r_esp += 4; return;
}

void f_00758a47(void)
{
    FN_ENTER(0x00758a47);
    /* 00758a47: call 0x75a648 */ r_esp -= 4; W32(r_esp, 0x758a4cu); f_0075a648();
    /* 00758a4c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a4f: mov byte ptr [edx + 0x1c], 0x25 */ W8((u32)(r_edx+0x1cu), 0x25u);
    /* 00758a53: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00758a56: mov ecx, eax */ r_ecx = r_eax;
    /* 00758a58: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x758a5du); f_0073d114();
    /* 00758a5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758a5f: je 0x758a76 */ if (fZ) goto L_00758a76;
L_00758a61:; BB(0x00758a61);
    /* 00758a61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a64: mov byte ptr [eax + 0x1c], 0x22 */ W8((u32)(r_eax+0x1cu), 0x22u);
    /* 00758a68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758a6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758a72: mov esp, ebp */ r_esp = r_ebp;
    /* 00758a74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758a75: ret  */ FN_RET(0x00758a47); r_esp += 4; return;
L_00758a76:; BB(0x00758a76);
    /* 00758a76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a79: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00758a7c: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x758a81u); f_0073ce50();
    /* 00758a81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758a83: je 0x759866 */ if (fZ) goto L_00759866;
L_00758a89:; BB(0x00758a89);
    /* 00758a89: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a8c: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00758a8f: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x758a94u); f_0073d134();
    /* 00758a94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758a96: je 0x758aa4 */ if (fZ) goto L_00758aa4;
L_00758a98:; BB(0x00758a98);
    /* 00758a98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758a9b: mov byte ptr [eax + 0x1c], 0x22 */ W8((u32)(r_eax+0x1cu), 0x22u);
    /* 00758a9f: jmp 0x759866 */ goto L_00759866;
L_00758aa4:; BB(0x00758aa4);
    /* 00758aa4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758aa7: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758aaa: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x758aafu); f_007365f4();
    /* 00758aaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758ab0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758ab3: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758ab6: call 0x77dd04 */ r_esp -= 4; W32(r_esp, 0x758abbu); f_0077dd04();
    /* 00758abb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758abe: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758ac2: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758a47); r_esp += 4; return;
}

void f_00758ac7(void)
{
    FN_ENTER(0x00758ac7);
    /* 00758ac7: mov eax, ecx */ r_eax = r_ecx;
    /* 00758ac9: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00758acc: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x758ad1u); f_0073600c();
    /* 00758ad1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758ad4: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00758ad7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758ad9: je 0x758aea */ if (fZ) goto L_00758aea;
L_00758adb:; BB(0x00758adb);
    /* 00758adb: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x758ae0u); f_0073d160();
    /* 00758ae0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758ae3: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_00758aea:; BB(0x00758aea);
    /* 00758aea: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00758aed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758aef: je 0x759891 */ if (fZ) goto L_00759891;
L_00758af5:; BB(0x00758af5);
    /* 00758af5: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00758afc: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00758b01: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00758b04: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00758b0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758b0d: je 0x758b16 */ if (fZ) goto L_00758b16;
L_00758b0f:; BB(0x00758b0f);
    /* 00758b0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00758b11: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x758b16u); f_00760acc();
L_00758b16:; BB(0x00758b16);
    /* 00758b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758b19: mov byte ptr [eax + 0x1c], 0x23 */ W8((u32)(r_eax+0x1cu), 0x23u);
    /* 00758b1d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758b20: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758b23: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00758b2a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758b2c: je 0x758b43 */ if (fZ) goto L_00758b43;
L_00758b2e:; BB(0x00758b2e);
    /* 00758b2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758b31: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758b35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758b38: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758b3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00758b41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758b42: ret  */ FN_RET(0x00758ac7); r_esp += 4; return;
L_00758b43:; BB(0x00758b43);
    /* 00758b43: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758b45: je 0x759866 */ if (fZ) goto L_00759866;
L_00758b4b:; BB(0x00758b4b);
    /* 00758b4b: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x758b50u); f_007365f4();
    /* 00758b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758b51: call 0x77d89c */ r_esp -= 4; W32(r_esp, 0x758b56u); f_0077d89c();
    /* 00758b56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758b57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758b5a: mov byte ptr [eax + 0x1c], 0x24 */ W8((u32)(r_eax+0x1cu), 0x24u);
    /* 00758b5e: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758ac7); r_esp += 4; return;
L_00759891:; BB(0x00759891);
    /* 00759891: mov ecx, eax */ r_ecx = r_eax;
    /* 00759893: call 0x75a528 */ r_esp -= 4; W32(r_esp, 0x759898u); f_0075a528();
    /* 00759898: mov edx, eax */ r_edx = r_eax;
    /* 0075989a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075989d: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 007598a0: jmp 0x758af5 */ goto L_00758af5;
}

void f_00758b1d(void)
{
    FN_ENTER(0x00758b1d);
    /* 00758b1d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758b20: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758b23: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00758b2a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758b2c: je 0x758b43 */ if (fZ) goto L_00758b43;
L_00758b2e:; BB(0x00758b2e);
    /* 00758b2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758b31: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758b35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758b38: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758b3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00758b41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758b42: ret  */ FN_RET(0x00758b1d); r_esp += 4; return;
L_00758b43:; BB(0x00758b43);
    /* 00758b43: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758b45: je 0x759866 */ if (fZ) goto L_00759866;
L_00758b4b:; BB(0x00758b4b);
    /* 00758b4b: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x758b50u); f_007365f4();
    /* 00758b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758b51: call 0x77d89c */ r_esp -= 4; W32(r_esp, 0x758b56u); f_0077d89c();
    /* 00758b56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758b57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758b5a: mov byte ptr [eax + 0x1c], 0x24 */ W8((u32)(r_eax+0x1cu), 0x24u);
    /* 00758b5e: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758b1d); r_esp += 4; return;
}

void f_00758b63(void)
{
    FN_ENTER(0x00758b63);
    /* 00758b63: mov eax, ecx */ r_eax = r_ecx;
    /* 00758b65: mov byte ptr [eax + 0x1c], 0x21 */ W8((u32)(r_eax+0x1cu), 0x21u);
    /* 00758b69: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00758b6c: mov eax, 0xa9b3a0 */ r_eax = 0xa9b3a0u;
    /* 00758b71: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00758b73: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00758b76: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00758b79: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00758b7c: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 00758b7e: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00758b81: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 00758b84: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00758b87: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00758b8a: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00758b8d: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00758b90: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00758b93: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00758b96: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00758b99: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00758b9c: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00758b9f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00758ba2: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00758ba5: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00758ba8: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00758bab: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00758bae: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 00758bb1: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00758bb4: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 00758bb7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00758bba: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00758bbd: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00758bc0: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 00758bc3: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758bc6: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 00758bc9: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00758bcc: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 00758bcf: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00758bd2: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 00758bd5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00758bd8: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 00758bdb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758bde: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 00758be1: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00758be4: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 00758be7: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00758bea: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 00758bed: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00758bf0: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 00758bf3: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00758bf6: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 00758bf9: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00758bfc: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 00758bff: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00758c02: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00758c05: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 00758c08: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00758c0b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c0e: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00758c13: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00758c16: or dword ptr [eax], 1 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00758c19: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00758c1c: or dword ptr [ecx], 2 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00758c1f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x758c24u); f_0079317c();
    /* 00758c24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758c25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758c26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c29: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758c2c: call 0x77dce0 */ r_esp -= 4; W32(r_esp, 0x758c31u); f_0077dce0();
    /* 00758c31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c34: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00758c37: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x758c3cu); f_00714598();
    /* 00758c3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c3f: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758c43: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758b63); r_esp += 4; return;
}

void f_00758b69(void)
{
    FN_ENTER(0x00758b69);
    /* 00758b69: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00758b6c: mov eax, 0xa9b3a0 */ r_eax = 0xa9b3a0u;
    /* 00758b71: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00758b73: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00758b76: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00758b79: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00758b7c: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 00758b7e: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00758b81: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 00758b84: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00758b87: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00758b8a: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00758b8d: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00758b90: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00758b93: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00758b96: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00758b99: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00758b9c: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00758b9f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00758ba2: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00758ba5: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00758ba8: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00758bab: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00758bae: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 00758bb1: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00758bb4: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 00758bb7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00758bba: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00758bbd: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00758bc0: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 00758bc3: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758bc6: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 00758bc9: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00758bcc: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 00758bcf: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00758bd2: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 00758bd5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00758bd8: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 00758bdb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758bde: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 00758be1: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00758be4: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 00758be7: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00758bea: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 00758bed: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00758bf0: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 00758bf3: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00758bf6: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 00758bf9: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00758bfc: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 00758bff: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00758c02: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00758c05: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 00758c08: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00758c0b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c0e: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00758c13: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00758c16: or dword ptr [eax], 1 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00758c19: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00758c1c: or dword ptr [ecx], 2 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00758c1f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x758c24u); f_0079317c();
    /* 00758c24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00758c25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758c26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c29: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758c2c: call 0x77dce0 */ r_esp -= 4; W32(r_esp, 0x758c31u); f_0077dce0();
    /* 00758c31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c34: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00758c37: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x758c3cu); f_00714598();
    /* 00758c3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c3f: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758c43: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758b69); r_esp += 4; return;
}

void f_00758c48(void)
{
    FN_ENTER(0x00758c48);
    /* 00758c48: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c4b: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758c4e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x758c53u); f_007365f4();
    /* 00758c53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758c54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c57: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00758c5a: call 0x714568 */ r_esp -= 4; W32(r_esp, 0x758c5fu); f_00714568();
    /* 00758c5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c62: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758c65: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00758c6c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758c6e: je 0x758c8e */ if (fZ) goto L_00758c8e;
L_00758c70:; BB(0x00758c70);
    /* 00758c70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c73: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00758c76: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758c79: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00758c7c: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758c80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758c83: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758c8a: mov esp, ebp */ r_esp = r_ebp;
    /* 00758c8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758c8d: ret  */ FN_RET(0x00758c48); r_esp += 4; return;
L_00758c8e:; BB(0x00758c8e);
    /* 00758c8e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758c90: je 0x759866 */ if (fZ) goto L_00759866;
L_00758c96:; BB(0x00758c96);
    /* 00758c96: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x758c9bu); f_007365f4();
    /* 00758c9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758c9c: call 0x77d8d0 */ r_esp -= 4; W32(r_esp, 0x758ca1u); f_0077d8d0();
    /* 00758ca1: mov edx, eax */ r_edx = r_eax;
    /* 00758ca3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00758ca6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758ca9: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00758cac: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00758cae: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00758cb1: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00758cb4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00758cb7: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 00758cb9: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00758cbc: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 00758cbf: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00758cc2: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00758cc5: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00758cc8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00758ccb: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00758cce: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00758cd1: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00758cd4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00758cd7: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00758cda: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00758cdd: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00758ce0: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00758ce3: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00758ce6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00758ce9: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 00758cec: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00758cef: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 00758cf2: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00758cf5: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00758cf8: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00758cfb: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 00758cfe: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758d01: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 00758d04: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00758d07: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 00758d0a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00758d0d: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 00758d10: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00758d13: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 00758d16: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758d19: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 00758d1c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00758d1f: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 00758d22: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00758d25: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 00758d28: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00758d2b: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 00758d2e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00758d31: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 00758d34: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00758d37: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 00758d3a: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00758d3d: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 00758d40: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00758d43: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 00758d46: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758d49: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758d4d: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758c48); r_esp += 4; return;
}

void f_00758d52(void)
{
    FN_ENTER(0x00758d52);
    goto L_00758d52;
L_00758c48:; BB(0x00758c48);
    /* 00758c48: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c4b: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758c4e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x758c53u); f_007365f4();
    /* 00758c53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758c54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c57: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00758c5a: call 0x714568 */ r_esp -= 4; W32(r_esp, 0x758c5fu); f_00714568();
    /* 00758c5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c62: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758c65: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00758c6c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758c6e: je 0x758c8e */ if (fZ) goto L_00758c8e;
L_00758c70:; BB(0x00758c70);
    /* 00758c70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758c73: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00758c76: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758c79: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00758c7c: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758c80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758c83: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758c8a: mov esp, ebp */ r_esp = r_ebp;
    /* 00758c8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758c8d: ret  */ FN_RET(0x00758d52); r_esp += 4; return;
L_00758c8e:; BB(0x00758c8e);
    /* 00758c8e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758c90: je 0x759866 */ if (fZ) goto L_00759866;
L_00758c96:; BB(0x00758c96);
    /* 00758c96: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x758c9bu); f_007365f4();
    /* 00758c9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758c9c: call 0x77d8d0 */ r_esp -= 4; W32(r_esp, 0x758ca1u); f_0077d8d0();
    /* 00758ca1: mov edx, eax */ r_edx = r_eax;
    /* 00758ca3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00758ca6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758ca9: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00758cac: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00758cae: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00758cb1: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00758cb4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00758cb7: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 00758cb9: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00758cbc: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 00758cbf: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00758cc2: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00758cc5: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00758cc8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00758ccb: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00758cce: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00758cd1: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00758cd4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00758cd7: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00758cda: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00758cdd: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00758ce0: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00758ce3: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00758ce6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00758ce9: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 00758cec: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00758cef: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 00758cf2: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00758cf5: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00758cf8: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00758cfb: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 00758cfe: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758d01: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 00758d04: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00758d07: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 00758d0a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00758d0d: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 00758d10: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00758d13: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 00758d16: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758d19: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 00758d1c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00758d1f: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 00758d22: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00758d25: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 00758d28: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00758d2b: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 00758d2e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00758d31: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 00758d34: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00758d37: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 00758d3a: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00758d3d: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 00758d40: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00758d43: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 00758d46: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758d49: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758d4d: jmp 0x759866 */ goto L_00759866;
L_00758d52:; BB(0x00758d52);
    /* 00758d52: mov eax, ecx */ r_eax = r_ecx;
    /* 00758d54: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00758d57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758d59: je 0x758d6a */ if (fZ) goto L_00758d6a;
L_00758d5b:; BB(0x00758d5b);
    /* 00758d5b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x758d60u); f_007127b0();
    /* 00758d60: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758d63: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_00758d6a:; BB(0x00758d6a);
    /* 00758d6a: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00758d6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758d6f: je 0x758d80 */ if (fZ) goto L_00758d80;
L_00758d71:; BB(0x00758d71);
    /* 00758d71: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x758d76u); f_007127b0();
    /* 00758d76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758d79: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_00758d80:; BB(0x00758d80);
    /* 00758d80: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00758d83: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00758d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758d88: je 0x7598fc */ if (fZ) goto L_007598fc;
L_00758d8e:; BB(0x00758d8e);
    /* 00758d8e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00758d91: mov dword ptr [eax + 0x64], 1 */ W32((u32)(r_eax+0x64u), 0x1u);
    /* 00758d98: push 0x7a */ { u32 v = 0x7au; r_esp -= 4; W32(r_esp, v); }
    /* 00758d9a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x758d9fu); f_0073ec50();
    /* 00758d9f: mov ebx, eax */ r_ebx = r_eax;
    /* 00758da1: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00758da3: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x758da8u); f_0079317c();
    /* 00758da8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00758da9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00758dab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00758dac: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x758db1u); f_00735460();
    /* 00758db1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00758db4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00758db7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00758db9:; BB(0x00758db9);
    /* 00758db9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00758dba: call 0x77d8d0 */ r_esp -= 4; W32(r_esp, 0x758dbfu); f_0077d8d0();
    /* 00758dbf: mov edi, eax */ r_edi = r_eax;
    /* 00758dc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00758dc4: mov ecx, edi */ r_ecx = r_edi;
    /* 00758dc6: call 0x77d910 */ r_esp -= 4; W32(r_esp, 0x758dcbu); f_0077d910();
    /* 00758dcb: mov ebx, eax */ r_ebx = r_eax;
    /* 00758dcd: mov ecx, edi */ r_ecx = r_edi;
    /* 00758dcf: call 0x77d948 */ r_esp -= 4; W32(r_esp, 0x758dd4u); f_0077d948();
    /* 00758dd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758dd6: je 0x758de6 */ if (fZ) goto L_00758de6;
L_00758dd8:; BB(0x00758dd8);
    /* 00758dd8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00758ddb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00758ddc: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 00758dde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00758ddf: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x758de4u); f_00735c90();
    /* 00758de4: jmp 0x758df2 */ goto L_00758df2;
L_00758de6:; BB(0x00758de6);
    /* 00758de6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00758de9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00758dea: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00758dec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00758ded: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x758df2u); f_00735c90();
L_00758df2:; BB(0x00758df2);
    /* 00758df2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00758df5: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00758df8: jl 0x758db9 */ if ((fS!=fO)) goto L_00758db9;
L_00758dfa:; BB(0x00758dfa);
    /* 00758dfa: jmp 0x7598a5 */ goto L_007598a5;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758d52); r_esp += 4; return;
L_007598a5:; BB(0x007598a5);
    /* 007598a5: push 0x433c0000 */ { u32 v = 0x433c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007598aa: push 0x435c0000 */ { u32 v = 0x435c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007598af: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007598b2: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007598b9: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007598be: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 007598c5: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7598cau); f_007361d0();
    /* 007598ca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007598cd: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7598d2u); f_00736458();
    /* 007598d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007598d5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007598d8: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 007598dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007598dd: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7598e2u); f_00736510();
    /* 007598e2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007598e5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007598e8: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 007598eb: call 0x75a518 */ r_esp -= 4; W32(r_esp, 0x7598f0u); f_0075a518();
    /* 007598f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007598f3: mov byte ptr [eax + 0x1c], 0x1f */ W8((u32)(r_eax+0x1cu), 0x1fu);
    /* 007598f7: jmp 0x758c48 */ goto L_00758c48;
L_007598fc:; BB(0x007598fc);
    /* 007598fc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00759903: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00759905: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75990au); f_005caba4();
    /* 0075990a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075990d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759910: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00759913: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759915: je 0x759957 */ if (fZ) goto L_00759957;
L_00759917:; BB(0x00759917);
    /* 00759917: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0075991e: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00759925: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 00759927: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75992cu); f_0073ec50();
    /* 0075992c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075992d: push 0x974288 */ { u32 v = 0x974288u; r_esp -= 4; W32(r_esp, v); }
    /* 00759932: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759936: call 0x714468 */ r_esp -= 4; W32(r_esp, 0x75993bu); f_00714468();
    /* 0075993b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00759942:; BB(0x00759942);
    /* 00759942: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00759949: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075994c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075994f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00759952: jmp 0x758d8e */ goto L_00758d8e;
L_00759957:; BB(0x00759957);
    /* 00759957: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759959: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075995c: jmp 0x759942 */ goto L_00759942;
}

void f_00758dff(void)
{
    FN_ENTER(0x00758dff);
    /* 00758dff: mov eax, ecx */ r_eax = r_ecx;
    /* 00758e01: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 00758e05: mov eax, ecx */ r_eax = r_ecx;
    /* 00758e07: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758e0a: call 0x77defc */ r_esp -= 4; W32(r_esp, 0x758e0fu); f_0077defc();
    /* 00758e0f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758e12: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00758e15: or dword ptr [eax], 2 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00758e18: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00758e1b: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x758e20u); f_00714598();
    /* 00758e20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758e23: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758e27: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758dff); r_esp += 4; return;
}

void f_00758e05(void)
{
    FN_ENTER(0x00758e05);
    /* 00758e05: mov eax, ecx */ r_eax = r_ecx;
    /* 00758e07: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00758e0a: call 0x77defc */ r_esp -= 4; W32(r_esp, 0x758e0fu); f_0077defc();
    /* 00758e0f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758e12: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00758e15: or dword ptr [eax], 2 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00758e18: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00758e1b: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x758e20u); f_00714598();
    /* 00758e20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758e23: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00758e27: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758e05); r_esp += 4; return;
}

void f_00758e2c(void)
{
    FN_ENTER(0x00758e2c);
    /* 00758e2c: mov eax, ecx */ r_eax = r_ecx;
    /* 00758e2e: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00758e31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758e33: je 0x758e53 */ if (fZ) goto L_00758e53;
L_00758e35:; BB(0x00758e35);
    /* 00758e35: call 0x75ca48 */ r_esp -= 4; W32(r_esp, 0x758e3au); f_0075ca48();
    /* 00758e3a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758e3d: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00758e40: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 00758e44: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x758e49u); f_007127b0();
    /* 00758e49: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758e4c: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_00758e53:; BB(0x00758e53);
    /* 00758e53: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00758e56: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758e58: je 0x7599f1 */ if (fZ) goto L_007599f1;
L_00758e5e:; BB(0x00758e5e);
    /* 00758e5e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758e61: lea ebx, [eax + 0x1d] */ r_ebx = (u32)(r_eax+0x1du);
    /* 00758e64: lea edx, [eax + 0x30] */ r_edx = (u32)(r_eax+0x30u);
    /* 00758e67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00758e68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00758e69: call 0x75dbc0 */ r_esp -= 4; W32(r_esp, 0x758e6eu); f_0075dbc0();
    /* 00758e6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758e70: je 0x758e86 */ if (fZ) goto L_00758e86;
L_00758e72:; BB(0x00758e72);
    /* 00758e72: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00758e75: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 00758e78: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 00758e7c: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00758e81: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 00758e84: jmp 0x758ea1 */ goto L_00758ea1;
L_00758e86:; BB(0x00758e86);
    /* 00758e86: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x758e8bu); f_0077d9f0();
    /* 00758e8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00758e8d: jle 0x758ea1 */ if ((fZ||fS!=fO)) goto L_00758ea1;
L_00758e8f:; BB(0x00758e8f);
    /* 00758e8f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00758e92: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 00758e95: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 00758e99: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00758e9e: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
L_00758ea1:; BB(0x00758ea1);
    /* 00758ea1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758ea4: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00758ea7: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 00758eab: lea esi, [ecx + 0x28] */ r_esi = (u32)(r_ecx+0x28u);
    /* 00758eae: lea edi, [ecx + 0x2c] */ r_edi = (u32)(r_ecx+0x2cu);
    /* 00758eb1: mov dword ptr [edx + 0x6c], esi */ W32((u32)(r_edx+0x6cu), r_esi);
    /* 00758eb4: mov dword ptr [edx + 0x70], edi */ W32((u32)(r_edx+0x70u), r_edi);
    /* 00758eb7: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00758ebc: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 00758ebf: mov byte ptr [ecx + 0x1c], 0x19 */ W8((u32)(r_ecx+0x1cu), 0x19u);
    /* 00758ec3: mov eax, ecx */ r_eax = r_ecx;
    /* 00758ec5: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00758ec8: movsx eax, byte ptr [edx + 0x68] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x68u));
    /* 00758ecc: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758ece: je 0x758eed */ if (fZ) goto L_00758eed;
L_00758ed0:; BB(0x00758ed0);
    /* 00758ed0: mov eax, ecx */ r_eax = r_ecx;
    /* 00758ed2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00758ed5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758ed8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00758edb: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
    /* 00758edf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758ee2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758ee9: mov esp, ebp */ r_esp = r_ebp;
    /* 00758eeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758eec: ret  */ FN_RET(0x00758e2c); r_esp += 4; return;
L_00758eed:; BB(0x00758eed);
    /* 00758eed: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758eef: je 0x759866 */ if (fZ) goto L_00759866;
L_00758ef5:; BB(0x00758ef5);
    /* 00758ef5: mov eax, dword ptr [0xa9b418] */ r_eax = R32((u32)(0xa9b418u));
    /* 00758efa: movsx esi, word ptr [edx + 0x6a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x6au));
    /* 00758efe: movsx edi, word ptr [edx + 0x6c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x6cu));
    /* 00758f02: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00758f05: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x758f0au); f_0077d9f0();
    /* 00758f0a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758f0d: movsx ebx, word ptr [edx + 0x1e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x1eu));
    /* 00758f11: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00758f13: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00758f16: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00758f18: jg 0x759992 */ if ((!fZ&&fS==fO)) goto L_00759992;
L_00758f1e:; BB(0x00758f1e);
    /* 00758f1e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00758f20: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00758f22: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00758f24: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00758f26:; BB(0x00758f26);
    /* 00758f26: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00758f29: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00758f2a: call 0x77dbf0 */ r_esp -= 4; W32(r_esp, 0x758f2fu); f_0077dbf0();
    /* 00758f2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758f31: je 0x758f40 */ if (fZ) goto L_00758f40;
L_00758f33:; BB(0x00758f33);
    /* 00758f33: mov eax, ebx */ r_eax = r_ebx;
    /* 00758f35: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00758f38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00758f3a: jle 0x75995e */ if ((fZ||fS!=fO)) goto L_0075995e;
L_00758f40:; BB(0x00758f40);
    /* 00758f40: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00758f43: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00758f46: jl 0x758f26 */ if ((fS!=fO)) goto L_00758f26;
L_00758f48:; BB(0x00758f48);
    /* 00758f48: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758f4b: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00758f4e: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x758f53u); f_00714598();
    /* 00758f53: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758f56: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
    /* 00758f5a: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758e2c); r_esp += 4; return;
L_0075995e:; BB(0x0075995e);
    /* 0075995e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759961: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759964: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00759965: movzx ebx, word ptr [ebx + edi*2 + 0x30] */ r_ebx = (u32)R16((u32)(r_ebx+r_edi*2+0x30u));
    /* 0075996a: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075996d: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00759970: call 0x77dc14 */ r_esp -= 4; W32(r_esp, 0x759975u); f_0077dc14();
    /* 00759975: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759978: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075997b: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075997e: movsx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1du));
    /* 00759982: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00759983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759984: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00759987: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759988: call 0x77daac */ r_esp -= 4; W32(r_esp, 0x75998du); f_0077daac();
    /* 0075998d: jmp 0x758f48 */ goto L_00758f48;
L_00759992:; BB(0x00759992);
    /* 00759992: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759995: movsx edx, byte ptr [eax + ebx*4 + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+r_ebx*4+0x38u));
    /* 0075999a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075999d: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007599a0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007599a3: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007599a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007599a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007599a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007599a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007599aa: call 0x77dbc0 */ r_esp -= 4; W32(r_esp, 0x7599afu); f_0077dbc0();
    /* 007599af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007599b2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007599b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007599b7: je 0x758f48 */ if (fZ) goto L_00758f48;
L_007599bd:; BB(0x007599bd);
    /* 007599bd: mov edx, eax */ r_edx = r_eax;
    /* 007599bf: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007599c2: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007599c5: movsx ecx, word ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x1eu));
    /* 007599c9: movsx ecx, byte ptr [ebx + ecx*4 + 0x38] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+r_ecx*4+0x38u));
    /* 007599ce: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 007599d1: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007599d3: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007599d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007599d8: mov eax, 0 */ r_eax = 0x0u;
    /* 007599dd: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 007599e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007599e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007599e2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007599e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007599e4: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 007599e7: call 0x77dad8 */ r_esp -= 4; W32(r_esp, 0x7599ecu); f_0077dad8();
    /* 007599ec: jmp 0x758f48 */ goto L_00758f48;
L_007599f1:; BB(0x007599f1);
    /* 007599f1: mov ecx, eax */ r_ecx = r_eax;
    /* 007599f3: call 0x75a480 */ r_esp -= 4; W32(r_esp, 0x7599f8u); f_0075a480();
    /* 007599f8: mov ecx, eax */ r_ecx = r_eax;
    /* 007599fa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007599fd: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 00759a00: jmp 0x758e5e */ goto L_00758e5e;
}

void f_00758ec3(void)
{
    FN_ENTER(0x00758ec3);
    /* 00758ec3: mov eax, ecx */ r_eax = r_ecx;
    /* 00758ec5: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00758ec8: movsx eax, byte ptr [edx + 0x68] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x68u));
    /* 00758ecc: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758ece: je 0x758eed */ if (fZ) goto L_00758eed;
L_00758ed0:; BB(0x00758ed0);
    /* 00758ed0: mov eax, ecx */ r_eax = r_ecx;
    /* 00758ed2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00758ed5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758ed8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00758edb: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
    /* 00758edf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758ee2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00758ee9: mov esp, ebp */ r_esp = r_ebp;
    /* 00758eeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00758eec: ret  */ FN_RET(0x00758ec3); r_esp += 4; return;
L_00758eed:; BB(0x00758eed);
    /* 00758eed: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758eef: je 0x759866 */ if (fZ) goto L_00759866;
L_00758ef5:; BB(0x00758ef5);
    /* 00758ef5: mov eax, dword ptr [0xa9b418] */ r_eax = R32((u32)(0xa9b418u));
    /* 00758efa: movsx esi, word ptr [edx + 0x6a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x6au));
    /* 00758efe: movsx edi, word ptr [edx + 0x6c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x6cu));
    /* 00758f02: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00758f05: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x758f0au); f_0077d9f0();
    /* 00758f0a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00758f0d: movsx ebx, word ptr [edx + 0x1e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x1eu));
    /* 00758f11: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00758f13: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00758f16: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00758f18: jg 0x759992 */ if ((!fZ&&fS==fO)) goto L_00759992;
L_00758f1e:; BB(0x00758f1e);
    /* 00758f1e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00758f20: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00758f22: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00758f24: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00758f26:; BB(0x00758f26);
    /* 00758f26: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00758f29: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00758f2a: call 0x77dbf0 */ r_esp -= 4; W32(r_esp, 0x758f2fu); f_0077dbf0();
    /* 00758f2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758f31: je 0x758f40 */ if (fZ) goto L_00758f40;
L_00758f33:; BB(0x00758f33);
    /* 00758f33: mov eax, ebx */ r_eax = r_ebx;
    /* 00758f35: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00758f38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00758f3a: jle 0x75995e */ if ((fZ||fS!=fO)) goto L_0075995e;
L_00758f40:; BB(0x00758f40);
    /* 00758f40: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00758f43: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00758f46: jl 0x758f26 */ if ((fS!=fO)) goto L_00758f26;
L_00758f48:; BB(0x00758f48);
    /* 00758f48: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758f4b: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00758f4e: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x758f53u); f_00714598();
    /* 00758f53: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758f56: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
    /* 00758f5a: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758ec3); r_esp += 4; return;
L_0075995e:; BB(0x0075995e);
    /* 0075995e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759961: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759964: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00759965: movzx ebx, word ptr [ebx + edi*2 + 0x30] */ r_ebx = (u32)R16((u32)(r_ebx+r_edi*2+0x30u));
    /* 0075996a: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075996d: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00759970: call 0x77dc14 */ r_esp -= 4; W32(r_esp, 0x759975u); f_0077dc14();
    /* 00759975: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759978: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075997b: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075997e: movsx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1du));
    /* 00759982: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00759983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759984: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00759987: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759988: call 0x77daac */ r_esp -= 4; W32(r_esp, 0x75998du); f_0077daac();
    /* 0075998d: jmp 0x758f48 */ goto L_00758f48;
L_00759992:; BB(0x00759992);
    /* 00759992: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759995: movsx edx, byte ptr [eax + ebx*4 + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+r_ebx*4+0x38u));
    /* 0075999a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075999d: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007599a0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007599a3: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007599a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007599a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007599a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007599a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007599aa: call 0x77dbc0 */ r_esp -= 4; W32(r_esp, 0x7599afu); f_0077dbc0();
    /* 007599af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007599b2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007599b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007599b7: je 0x758f48 */ if (fZ) goto L_00758f48;
L_007599bd:; BB(0x007599bd);
    /* 007599bd: mov edx, eax */ r_edx = r_eax;
    /* 007599bf: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007599c2: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007599c5: movsx ecx, word ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x1eu));
    /* 007599c9: movsx ecx, byte ptr [ebx + ecx*4 + 0x38] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+r_ecx*4+0x38u));
    /* 007599ce: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 007599d1: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007599d3: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007599d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007599d8: mov eax, 0 */ r_eax = 0x0u;
    /* 007599dd: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 007599e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007599e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007599e2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007599e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007599e4: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 007599e7: call 0x77dad8 */ r_esp -= 4; W32(r_esp, 0x7599ecu); f_0077dad8();
    /* 007599ec: jmp 0x758f48 */ goto L_00758f48;
}

void f_00758f5f(void)
{
    FN_ENTER(0x00758f5f);
    /* 00758f5f: mov eax, ecx */ r_eax = r_ecx;
    /* 00758f61: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00758f64: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 00758f6b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758f6d: je 0x758f7e */ if (fZ) goto L_00758f7e;
L_00758f6f:; BB(0x00758f6f);
    /* 00758f6f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x758f74u); f_007127b0();
    /* 00758f74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758f77: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
L_00758f7e:; BB(0x00758f7e);
    /* 00758f7e: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00758f81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758f83: je 0x759a64 */ if (fZ) goto L_00759a64;
L_00758f89:; BB(0x00758f89);
    /* 00758f89: movsx edx, word ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 00758f8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00758f8e: call 0x75d25c */ r_esp -= 4; W32(r_esp, 0x758f93u); f_0075d25c();
    /* 00758f93: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758f96: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 00758f99: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00758f9c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00758f9e: je 0x759a05 */ if (fZ) goto L_00759a05;
L_00758fa4:; BB(0x00758fa4);
    /* 00758fa4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00758fa7: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 00758fab: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00758fb0: mov byte ptr [esi + 0x60], al */ W8((u32)(r_esi+0x60u), (u8)r_eax);
    /* 00758fb3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758fb6: mov edi, dword ptr [eax + 0x64] */ r_edi = R32((u32)(r_eax+0x64u));
    /* 00758fb9: movzx edx, byte ptr [edi + 0x60] */ r_edx = (u32)R8((u32)(r_edi+0x60u));
    /* 00758fbd: and edx, 0xfd */ {  u32 a = r_edx; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00758fc3: mov byte ptr [edi + 0x60], dl */ W8((u32)(r_edi+0x60u), (u8)r_edx);
    /* 00758fc6: mov ebx, dword ptr [eax + 0x64] */ r_ebx = R32((u32)(r_eax+0x64u));
    /* 00758fc9: movzx ecx, byte ptr [ebx + 0x60] */ r_ecx = (u32)R8((u32)(r_ebx+0x60u));
    /* 00758fcd: and ecx, 0xfe */ {  u32 a = r_ecx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00758fd3: mov byte ptr [ebx + 0x60], cl */ W8((u32)(r_ebx+0x60u), (u8)r_ecx);
    /* 00758fd6: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 00758fda: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758fdd: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 00758fe0: movsx eax, byte ptr [edx + 0x84] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x84u));
    /* 00758fe7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758fe9: je 0x759009 */ if (fZ) goto L_00759009;
L_00758feb:; BB(0x00758feb);
    /* 00758feb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758fee: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00758ff1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758ff4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00758ff7: mov byte ptr [eax + 0x1c], 0x14 */ W8((u32)(r_eax+0x1cu), 0x14u);
    /* 00758ffb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758ffe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759005: mov esp, ebp */ r_esp = r_ebp;
    /* 00759007: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00759008: ret  */ FN_RET(0x00758f5f); r_esp += 4; return;
L_00759009:; BB(0x00759009);
    /* 00759009: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075900b: je 0x759866 */ if (fZ) goto L_00759866;
L_00759011:; BB(0x00759011);
    /* 00759011: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759014: call 0x75a42c */ r_esp -= 4; W32(r_esp, 0x759019u); f_0075a42c();
    /* 00759019: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758f5f); r_esp += 4; return;
L_00759a05:; BB(0x00759a05);
    /* 00759a05: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00759a0c: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00759a0e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x759a13u); f_005caba4();
    /* 00759a13: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759a16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759a19: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00759a1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759a1e: je 0x759a5d */ if (fZ) goto L_00759a5d;
L_00759a20:; BB(0x00759a20);
    /* 00759a20: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00759a27: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00759a2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759a31: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759a34: lea ebx, [eax + 0x1d] */ r_ebx = (u32)(r_eax+0x1du);
    /* 00759a37: lea edx, [eax + 0x30] */ r_edx = (u32)(r_eax+0x30u);
    /* 00759a3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00759a3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759a3c: call 0x75b2cc */ r_esp -= 4; W32(r_esp, 0x759a41u); f_0075b2cc();
    /* 00759a41: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00759a48:; BB(0x00759a48);
    /* 00759a48: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759a4b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759a4e: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00759a51: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00759a58: jmp 0x758fa4 */ goto L_00758fa4;
L_00759a5d:; BB(0x00759a5d);
    /* 00759a5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759a5f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759a62: jmp 0x759a48 */ goto L_00759a48;
L_00759a64:; BB(0x00759a64);
    /* 00759a64: mov ecx, eax */ r_ecx = r_eax;
    /* 00759a66: call 0x75a39c */ r_esp -= 4; W32(r_esp, 0x759a6bu); f_0075a39c();
    /* 00759a6b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759a6e: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00759a71: mov ecx, eax */ r_ecx = r_eax;
    /* 00759a73: call 0x75d22c */ r_esp -= 4; W32(r_esp, 0x759a78u); f_0075d22c();
    /* 00759a78: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759a7b: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00759a7e: jmp 0x758f89 */ goto L_00758f89;
}

void f_00758fda(void)
{
    FN_ENTER(0x00758fda);
    /* 00758fda: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758fdd: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 00758fe0: movsx eax, byte ptr [edx + 0x84] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x84u));
    /* 00758fe7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00758fe9: je 0x759009 */ if (fZ) goto L_00759009;
L_00758feb:; BB(0x00758feb);
    /* 00758feb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00758fee: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00758ff1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00758ff4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00758ff7: mov byte ptr [eax + 0x1c], 0x14 */ W8((u32)(r_eax+0x1cu), 0x14u);
    /* 00758ffb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00758ffe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759005: mov esp, ebp */ r_esp = r_ebp;
    /* 00759007: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00759008: ret  */ FN_RET(0x00758fda); r_esp += 4; return;
L_00759009:; BB(0x00759009);
    /* 00759009: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075900b: je 0x759866 */ if (fZ) goto L_00759866;
L_00759011:; BB(0x00759011);
    /* 00759011: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759014: call 0x75a42c */ r_esp -= 4; W32(r_esp, 0x759019u); f_0075a42c();
    /* 00759019: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00758fda); r_esp += 4; return;
}

