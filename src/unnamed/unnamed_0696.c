#include "protos.h"

void f_00696038(void) /* sub_696038 */
{
    FN_ENTER(0x00696038);
    /* 00696038: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00696039: mov edi, ecx */ r_edi = r_ecx;
    /* 0069603b: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069603f: mov word ptr [edi + 0x70c], ax */ W16((u32)(r_edi+0x70cu), (u16)r_eax);
    /* 00696046: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00696047: lea ecx, [edi + 0x390] */ r_ecx = (u32)(r_edi+0x390u);
    /* 0069604d: call 0x6a3a30 */ r_esp -= 4; W32(r_esp, 0x696052u); f_006a3a30();
    /* 00696052: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00696056: mov word ptr [edi + 0x35a], ax */ W16((u32)(r_edi+0x35au), (u16)r_eax);
    /* 0069605d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069605e: ret  */ FN_RET(0x00696038); r_esp += 4; return;
}

void f_00696060(void) /* sub_696060 */
{
    FN_ENTER(0x00696060);
    /* 00696060: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00696061: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00696062: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00696063: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696064: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00696065: mov esi, ecx */ r_esi = r_ecx;
    /* 00696067: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0069606b: movsx edx, byte ptr [esi + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x961u));
    /* 00696072: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00696073: mov word ptr [esi + 0x4e4], ax */ W16((u32)(r_esi+0x4e4u), (u16)r_eax);
    /* 0069607a: lea ebx, [esi + 0x460] */ r_ebx = (u32)(r_esi+0x460u);
    /* 00696080: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696082: call 0x6ad264 */ r_esp -= 4; W32(r_esp, 0x696087u); f_006ad264();
    /* 00696087: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00696089: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069608b: call 0x6ace3c */ r_esp -= 4; W32(r_esp, 0x696090u); f_006ace3c();
    /* 00696090: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00696094: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00696097: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00696099: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069609b: mov ebp, eax */ r_ebp = r_eax;
L_0069609d:; BB(0x0069609d);
    /* 0069609d: movzx esi, byte ptr [ebp + edi + 0x4c8] */ r_esi = (u32)R8((u32)(r_ebp+r_edi+0x4c8u));
    /* 006960a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006960a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006960a7: movsx edx, byte ptr [edi + 0x3a1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x3a1u));
    /* 006960ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006960af: call 0x6ad0e4 */ r_esp -= 4; W32(r_esp, 0x6960b4u); f_006ad0e4();
    /* 006960b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006960b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006960b8: movzx edx, byte ptr [ebx + edi + 6] */ r_edx = (u32)R8((u32)(r_ebx+r_edi+0x6u));
    /* 006960bd: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006960bf: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006960c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006960c6: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006960ca: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x6960cfu); f_00699fd8();
    /* 006960cf: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006960d2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006960d5: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006960d8: jl 0x69609d */ if ((fS!=fO)) goto L_0069609d;
L_006960da:; BB(0x006960da);
    /* 006960da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006960db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006960dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006960dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006960de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006960df: ret 4 */ FN_RET(0x00696060); r_esp += 8; return;
}

void f_006960e4(void) /* sub_6960E4 */
{
    FN_ENTER(0x006960e4);
    /* 006960e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006960e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006960e6: mov esi, ecx */ r_esi = r_ecx;
    /* 006960e8: mov edx, dword ptr [esi + 0xe3c] */ r_edx = R32((u32)(r_esi+0xe3cu));
    /* 006960ee: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006960f2: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 006960f5: mov word ptr [esi + 0xe2c], cx */ W16((u32)(r_esi+0xe2cu), (u16)r_ecx);
    /* 006960fc: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 00696100: mov word ptr [esi + 0xe2e], cx */ W16((u32)(r_esi+0xe2eu), (u16)r_ecx);
    /* 00696107: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 0069610b: mov word ptr [esi + 0xe30], cx */ W16((u32)(r_esi+0xe30u), (u16)r_ecx);
    /* 00696112: movzx ecx, word ptr [eax + 6] */ r_ecx = (u32)R16((u32)(r_eax+0x6u));
    /* 00696116: mov word ptr [esi + 0xe32], cx */ W16((u32)(r_esi+0xe32u), (u16)r_ecx);
    /* 0069611d: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696121: mov word ptr [esi + 0xe34], cx */ W16((u32)(r_esi+0xe34u), (u16)r_ecx);
    /* 00696128: movzx ecx, word ptr [eax + 0xa] */ r_ecx = (u32)R16((u32)(r_eax+0xau));
    /* 0069612c: mov word ptr [esi + 0xe36], cx */ W16((u32)(r_esi+0xe36u), (u16)r_ecx);
    /* 00696133: movzx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)R16((u32)(r_eax+0xcu));
    /* 00696137: mov word ptr [esi + 0xe38], cx */ W16((u32)(r_esi+0xe38u), (u16)r_ecx);
    /* 0069613e: movzx ecx, word ptr [eax + 0xe] */ r_ecx = (u32)R16((u32)(r_eax+0xeu));
    /* 00696142: mov word ptr [esi + 0xe3a], cx */ W16((u32)(r_esi+0xe3au), (u16)r_ecx);
    /* 00696149: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0069614c: mov dword ptr [esi + 0xe3c], ecx */ W32((u32)(r_esi+0xe3cu), r_ecx);
    /* 00696152: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00696155: mov dword ptr [esi + 0xe40], ecx */ W32((u32)(r_esi+0xe40u), r_ecx);
    /* 0069615b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0069615e: mov dword ptr [esi + 0xe44], ecx */ W32((u32)(r_esi+0xe44u), r_ecx);
    /* 00696164: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00696167: mov dword ptr [esi + 0xe48], ecx */ W32((u32)(r_esi+0xe48u), r_ecx);
    /* 0069616d: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00696170: mov dword ptr [esi + 0xe4c], eax */ W32((u32)(r_esi+0xe4cu), r_eax);
    /* 00696176: mov dword ptr [esi + 0xe3c], edx */ W32((u32)(r_esi+0xe3cu), r_edx);
    /* 0069617c: lea eax, [esi + 0xe2c] */ r_eax = (u32)(r_esi+0xe2cu);
    /* 00696182: mov dword ptr [esi + 0x2b4], eax */ W32((u32)(r_esi+0x2b4u), r_eax);
    /* 00696188: lea edx, [esi + 0xea0] */ r_edx = (u32)(r_esi+0xea0u);
    /* 0069618e: mov dword ptr [esi + 0x324], edx */ W32((u32)(r_esi+0x324u), r_edx);
    /* 00696194: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00696196: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00696198: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0069619b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0069619e: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006961a1: mov ecx, esi */ r_ecx = r_esi;
    /* 006961a3: call 0x695058 */ r_esp -= 4; W32(r_esp, 0x6961a8u); f_00695058();
    /* 006961a8: mov ecx, esi */ r_ecx = r_esi;
    /* 006961aa: call 0x695088 */ r_esp -= 4; W32(r_esp, 0x6961afu); f_00695088();
    /* 006961af: mov ecx, esi */ r_ecx = r_esi;
    /* 006961b1: call 0x6951a0 */ r_esp -= 4; W32(r_esp, 0x6961b6u); f_006951a0();
    /* 006961b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006961b7: call 0x6acc5c */ r_esp -= 4; W32(r_esp, 0x6961bcu); f_006acc5c();
    /* 006961bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006961bd: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006961c0: mov word ptr [esi + 0xe50], dx */ W16((u32)(r_esi+0xe50u), (u16)r_edx);
    /* 006961c7: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 006961cb: mov word ptr [esi + 0xe52], dx */ W16((u32)(r_esi+0xe52u), (u16)r_edx);
    /* 006961d2: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 006961d6: mov word ptr [esi + 0xe54], dx */ W16((u32)(r_esi+0xe54u), (u16)r_edx);
    /* 006961dd: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 006961e1: mov word ptr [esi + 0xe56], dx */ W16((u32)(r_esi+0xe56u), (u16)r_edx);
    /* 006961e8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006961eb: mov dword ptr [esi + 0xe58], edx */ W32((u32)(r_esi+0xe58u), r_edx);
    /* 006961f1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006961f4: mov dword ptr [esi + 0xe5c], edx */ W32((u32)(r_esi+0xe5cu), r_edx);
    /* 006961fa: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006961fd: mov dword ptr [esi + 0xe60], edx */ W32((u32)(r_esi+0xe60u), r_edx);
    /* 00696203: movzx edx, word ptr [eax + 0x14] */ r_edx = (u32)R16((u32)(r_eax+0x14u));
    /* 00696207: mov word ptr [esi + 0xe64], dx */ W16((u32)(r_esi+0xe64u), (u16)r_edx);
    /* 0069620e: movzx edx, word ptr [eax + 0x16] */ r_edx = (u32)R16((u32)(r_eax+0x16u));
    /* 00696212: mov word ptr [esi + 0xe66], dx */ W16((u32)(r_esi+0xe66u), (u16)r_edx);
    /* 00696219: movzx edx, word ptr [eax + 0x18] */ r_edx = (u32)R16((u32)(r_eax+0x18u));
    /* 0069621d: mov word ptr [esi + 0xe68], dx */ W16((u32)(r_esi+0xe68u), (u16)r_edx);
    /* 00696224: movzx edx, word ptr [eax + 0x1a] */ r_edx = (u32)R16((u32)(r_eax+0x1au));
    /* 00696228: mov word ptr [esi + 0xe6a], dx */ W16((u32)(r_esi+0xe6au), (u16)r_edx);
    /* 0069622f: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00696232: mov dword ptr [esi + 0xe6c], edx */ W32((u32)(r_esi+0xe6cu), r_edx);
    /* 00696238: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0069623b: mov dword ptr [esi + 0xe70], edx */ W32((u32)(r_esi+0xe70u), r_edx);
    /* 00696241: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00696244: mov dword ptr [esi + 0xe74], edx */ W32((u32)(r_esi+0xe74u), r_edx);
    /* 0069624a: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0069624d: mov dword ptr [esi + 0xe78], edx */ W32((u32)(r_esi+0xe78u), r_edx);
    /* 00696253: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00696256: mov dword ptr [esi + 0xe7c], eax */ W32((u32)(r_esi+0xe7cu), r_eax);
    /* 0069625c: call 0x6acc80 */ r_esp -= 4; W32(r_esp, 0x696261u); f_006acc80();
    /* 00696261: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00696262: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00696265: mov word ptr [esi + 0xe80], dx */ W16((u32)(r_esi+0xe80u), (u16)r_edx);
    /* 0069626c: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 00696270: mov word ptr [esi + 0xe82], dx */ W16((u32)(r_esi+0xe82u), (u16)r_edx);
    /* 00696277: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0069627b: mov word ptr [esi + 0xe84], dx */ W16((u32)(r_esi+0xe84u), (u16)r_edx);
    /* 00696282: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 00696286: mov word ptr [esi + 0xe86], dx */ W16((u32)(r_esi+0xe86u), (u16)r_edx);
    /* 0069628d: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696291: mov word ptr [esi + 0xe88], dx */ W16((u32)(r_esi+0xe88u), (u16)r_edx);
    /* 00696298: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0069629c: mov word ptr [esi + 0xe8a], dx */ W16((u32)(r_esi+0xe8au), (u16)r_edx);
    /* 006962a3: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006962a6: mov dword ptr [esi + 0xe8c], edx */ W32((u32)(r_esi+0xe8cu), r_edx);
    /* 006962ac: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006962af: mov dword ptr [esi + 0xe90], edx */ W32((u32)(r_esi+0xe90u), r_edx);
    /* 006962b5: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006962b8: mov dword ptr [esi + 0xe94], edx */ W32((u32)(r_esi+0xe94u), r_edx);
    /* 006962be: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006962c1: mov dword ptr [esi + 0xe98], edx */ W32((u32)(r_esi+0xe98u), r_edx);
    /* 006962c7: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 006962ca: mov dword ptr [esi + 0xe9c], eax */ W32((u32)(r_esi+0xe9cu), r_eax);
    /* 006962d0: call 0x6ac420 */ r_esp -= 4; W32(r_esp, 0x6962d5u); f_006ac420();
    /* 006962d5: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006962d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006962da: call 0x6ac434 */ r_esp -= 4; W32(r_esp, 0x6962dfu); f_006ac434();
    /* 006962df: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006962e2: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 006962e8: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006962eb: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006962ef: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006962f3: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006962f7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006962fa: lea edx, [esi + 0xe50] */ r_edx = (u32)(r_esi+0xe50u);
    /* 00696300: lea eax, [esi + 0xe80] */ r_eax = (u32)(r_esi+0xe80u);
    /* 00696306: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069630a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069630e: mov ecx, esi */ r_ecx = r_esi;
    /* 00696310: call 0x770da4 */ r_esp -= 4; W32(r_esp, 0x696315u); f_00770da4();
    /* 00696315: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 0069631b: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0069631e: fmul dword ptr [0x93c680] */ ST(0) = ST(0) * R_F32((u32)(0x93c680u));
    /* 00696324: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0069632a: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0069632d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069632e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069632f: ret 4 */ FN_RET(0x006960e4); r_esp += 8; return;
}

void f_00696334(void) /* sub_696334 */
{
    FN_ENTER(0x00696334);
    /* 00696334: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069633b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069633e: jne 0x696363 */ if (!fZ) goto L_00696363;
L_00696340:; BB(0x00696340);
    /* 00696340: mov edx, dword ptr [0xa94244] */ r_edx = R32((u32)(0xa94244u));
    /* 00696346: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069634a: mov dword ptr [ecx + 0x3dc], edx */ W32((u32)(r_ecx+0x3dcu), r_edx);
    /* 00696350: add ecx, 0x628 */ {  u32 a = r_ecx; u32 b = 0x628u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696356: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00696359: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069635a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069635b: call 0x6a7be8 */ r_esp -= 4; W32(r_esp, 0x696360u); f_006a7be8();
    /* 00696360: ret 4 */ FN_RET(0x00696334); r_esp += 8; return;
L_00696363:; BB(0x00696363);
    /* 00696363: mov dword ptr [ecx + 0x634], 0 */ W32((u32)(r_ecx+0x634u), 0x0u);
    /* 0069636d: ret 4 */ FN_RET(0x00696334); r_esp += 8; return;
}

void f_00696370(void) /* sub_696370 */
{
    FN_ENTER(0x00696370);
    /* 00696370: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696371: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00696373: lea edx, [ebx + 0x930] */ r_edx = (u32)(r_ebx+0x930u);
    /* 00696379: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0069637d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069637f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00696381: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00696384: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00696387: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0069638a: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0069638d: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00696390: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00696393: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00696396: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00696399: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0069639c: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0069639f: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006963a2: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006963a5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006963a8: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006963ab: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006963ae: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006963b1: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006963b4: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006963b7: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006963ba: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006963bd: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006963c0: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006963c3: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006963c6: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006963c9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006963cc: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006963cf: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006963d2: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006963d5: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006963d8: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006963db: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006963de: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006963e1: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006963e4: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006963e7: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006963ea: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006963ed: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006963f0: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006963f3: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006963f6: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006963f9: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006963fc: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006963ff: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00696402: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 00696405: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00696408: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 0069640b: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0069640e: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 00696411: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00696414: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 00696417: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0069641a: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 0069641d: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 00696420: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 00696423: mov dword ptr [ebx + 0xdf0], 0xff */ W32((u32)(r_ebx+0xdf0u), 0xffu);
    /* 0069642d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069642e: call 0x4e660c */ r_esp -= 4; W32(r_esp, 0x696433u); f_004e660c();
    /* 00696433: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696434: call 0x78c418 */ r_esp -= 4; W32(r_esp, 0x696439u); f_0078c418();
    /* 00696439: lea eax, [ebx + 0x428] */ r_eax = (u32)(r_ebx+0x428u);
    /* 0069643f: add ebx, 0x980 */ {  u32 a = r_ebx; u32 b = 0x980u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696445: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696447: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x69644cu); f_00857fed();
    /* 0069644c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069644f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00696450: ret 4 */ FN_RET(0x00696370); r_esp += 8; return;
}

void f_00696454(void) /* sub_696454 */
{
    FN_ENTER(0x00696454);
    /* 00696454: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00696455: mov ebp, esp */ r_ebp = r_esp;
    /* 00696457: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00696459: push 0x8eb422 */ { u32 v = 0x8eb422u; r_esp -= 4; W32(r_esp, v); }
    /* 0069645e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00696464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696465: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0069646c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069646f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00696472: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00696475: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00696478: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0069647b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0069647e: mov eax, dword ptr [0xa943cc] */ r_eax = R32((u32)(0xa943ccu));
    /* 00696483: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696486: je 0x696613 */ if (fZ) goto L_00696613;
L_0069648c:; BB(0x0069648c);
    /* 0069648c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069648e: jne 0x6964de */ if (!fZ) goto L_006964de;
L_00696490:; BB(0x00696490);
    /* 00696490: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00696497: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00696499: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69649eu); f_005caba4();
    /* 0069649e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006964a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006964a4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006964a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006964a9: je 0x6965fb */ if (fZ) goto L_006965fb;
L_006964af:; BB(0x006964af);
    /* 006964af: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006964b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006964bd: mov ecx, eax */ r_ecx = r_eax;
    /* 006964bf: call 0x6a7730 */ r_esp -= 4; W32(r_esp, 0x6964c4u); f_006a7730();
    /* 006964c4: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006964cb:; BB(0x006964cb);
    /* 006964cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006964ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006964d1: mov dword ptr [edx + 0x38c], eax */ W32((u32)(r_edx+0x38cu), r_eax);
    /* 006964d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006964de:; BB(0x006964de);
    /* 006964de: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006964e1: mov dword ptr [ecx + 0x744], 0x3f800000 */ W32((u32)(r_ecx+0x744u), 0x3f800000u);
    /* 006964eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006964ed: mov byte ptr [ecx + 0x347], al */ W8((u32)(r_ecx+0x347u), (u8)r_eax);
    /* 006964f3: mov dword ptr [ecx + 0x748], 0x3f800000 */ W32((u32)(r_ecx+0x748u), 0x3f800000u);
    /* 006964fd: mov byte ptr [ecx + 0x346], al */ W8((u32)(r_ecx+0x346u), (u8)r_eax);
    /* 00696503: mov byte ptr [ecx + 0x345], al */ W8((u32)(r_ecx+0x345u), (u8)r_eax);
    /* 00696509: mov byte ptr [ecx + 0x344], al */ W8((u32)(r_ecx+0x344u), (u8)r_eax);
    /* 0069650f: mov dword ptr [ecx + 0x74c], 0x3f800000 */ W32((u32)(r_ecx+0x74cu), 0x3f800000u);
    /* 00696519: mov dword ptr [ecx + 0x348], eax */ W32((u32)(r_ecx+0x348u), r_eax);
    /* 0069651f: mov dword ptr [ecx + 0x378], eax */ W32((u32)(r_ecx+0x378u), r_eax);
    /* 00696525: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 0069652b: mov dword ptr [ecx + 0x2b8], 0 */ W32((u32)(r_ecx+0x2b8u), 0x0u);
    /* 00696535: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0069653a: mov dword ptr [ecx + 0x3d4], esi */ W32((u32)(r_ecx+0x3d4u), r_esi);
    /* 00696540: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00696546: mov dword ptr [ecx + 0x3d0], 0 */ W32((u32)(r_ecx+0x3d0u), 0x0u);
    /* 00696550: mov dword ptr [ecx + 0x340], eax */ W32((u32)(r_ecx+0x340u), r_eax);
    /* 00696556: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 0069655c: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 00696562: mov word ptr [ecx + 0x3cc], si */ W16((u32)(r_ecx+0x3ccu), (u16)r_esi);
    /* 00696569: mov dword ptr [ecx + 0x3c0], eax */ W32((u32)(r_ecx+0x3c0u), r_eax);
    /* 0069656f: mov dword ptr [ecx + 0x318], eax */ W32((u32)(r_ecx+0x318u), r_eax);
    /* 00696575: mov dword ptr [ecx + 0xdf4], eax */ W32((u32)(r_ecx+0xdf4u), r_eax);
    /* 0069657b: mov dword ptr [ecx + 0x45c], eax */ W32((u32)(r_ecx+0x45cu), r_eax);
    /* 00696581: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 00696587: mov dword ptr [ecx + 0xebc], eax */ W32((u32)(r_ecx+0xebcu), r_eax);
    /* 0069658d: mov edi, 0xf */ r_edi = 0xfu;
    /* 00696592: mov dword ptr [ecx + 0x3ec], edi */ W32((u32)(r_ecx+0x3ecu), r_edi);
    /* 00696598: mov dword ptr [ecx + 0x3f0], edi */ W32((u32)(r_ecx+0x3f0u), r_edi);
    /* 0069659e: mov dword ptr [ecx + 0x624], eax */ W32((u32)(r_ecx+0x624u), r_eax);
    /* 006965a4: mov dword ptr [ecx + 0x3c4], eax */ W32((u32)(r_ecx+0x3c4u), r_eax);
    /* 006965aa: mov dword ptr [ecx + 0x458], eax */ W32((u32)(r_ecx+0x458u), r_eax);
    /* 006965b0: mov dword ptr [ecx + 0x3dc], eax */ W32((u32)(r_ecx+0x3dcu), r_eax);
    /* 006965b6: call 0x68839c */ r_esp -= 4; W32(r_esp, 0x6965bbu); f_0068839c();
    /* 006965bb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006965be: mov ecx, dword ptr [0xa942c0] */ r_ecx = R32((u32)(0xa942c0u));
    /* 006965c4: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 006965ca: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006965cf: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
    /* 006965d5: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006965d8: je 0x696605 */ if (fZ) goto L_00696605;
L_006965da:; BB(0x006965da);
    /* 006965da: mov ecx, edx */ r_ecx = r_edx;
    /* 006965dc: add ecx, 0x41c */ {  u32 a = r_ecx; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006965e2: call 0x7087d0 */ r_esp -= 4; W32(r_esp, 0x6965e7u); f_007087d0();
    /* 006965e7: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006965ea: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006965ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006965f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006965f7: mov esp, ebp */ r_esp = r_ebp;
    /* 006965f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006965fa: ret  */ FN_RET(0x00696454); r_esp += 4; return;
L_006965fb:; BB(0x006965fb);
    /* 006965fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006965fd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00696600: jmp 0x6964cb */ goto L_006964cb;
L_00696605:; BB(0x00696605);
    /* 00696605: mov eax, edx */ r_eax = r_edx;
    /* 00696607: mov dword ptr [eax + 0x8fc], 1 */ W32((u32)(r_eax+0x8fcu), 0x1u);
    /* 00696611: jmp 0x6965da */ goto L_006965da;
L_00696613:; BB(0x00696613);
    /* 00696613: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0069661a: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069661f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x696624u); f_005caba4();
    /* 00696624: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00696627: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069662a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0069662d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069662f: je 0x696665 */ if (fZ) goto L_00696665;
L_00696631:; BB(0x00696631);
    /* 00696631: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00696638: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0069663f: mov ecx, eax */ r_ecx = r_eax;
    /* 00696641: call 0x6a726c */ r_esp -= 4; W32(r_esp, 0x696646u); f_006a726c();
    /* 00696646: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0069664d:; BB(0x0069664d);
    /* 0069664d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00696650: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00696653: mov dword ptr [edx + 0x38c], eax */ W32((u32)(r_edx+0x38cu), r_eax);
    /* 00696659: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00696660: jmp 0x6964de */ goto L_006964de;
L_00696665:; BB(0x00696665);
    /* 00696665: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00696667: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0069666a: jmp 0x69664d */ goto L_0069664d;
}

void f_0069666c(void) /* sub_69666C */
{
    FN_ENTER(0x0069666c);
    /* 0069666c: mov dword ptr [0xa942e0], 0x3f800000 */ W32((u32)(0xa942e0u), 0x3f800000u);
    /* 00696676: mov dword ptr [0xa942e4], 0x41000000 */ W32((u32)(0xa942e4u), 0x41000000u);
    /* 00696680: mov dword ptr [0xa942e8], 0x3fc00000 */ W32((u32)(0xa942e8u), 0x3fc00000u);
    /* 0069668a: ret  */ FN_RET(0x0069666c); r_esp += 4; return;
}

void f_0069668c(void) /* sub_69668C */
{
    FN_ENTER(0x0069668c);
    /* 0069668c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069668d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069668f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696691: call 0x6966b0 */ r_esp -= 4; W32(r_esp, 0x696696u); f_006966b0();
    /* 00696696: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0069669a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069669c: jne 0x6966a2 */ if (!fZ) goto L_006966a2;
L_0069669e:; BB(0x0069669e);
    /* 0069669e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069669f: ret 4 */ FN_RET(0x0069668c); r_esp += 8; return;
L_006966a2:; BB(0x006966a2);
    /* 006966a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006966a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6966a8u); f_005c2f74();
    /* 006966a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006966a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006966aa: ret 4 */ FN_RET(0x0069668c); r_esp += 8; return;
}

void f_006966b0(void) /* sub_6966B0 */
{
    FN_ENTER(0x006966b0);
    /* 006966b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006966b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006966b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006966b5: push 0x8eb43c */ { u32 v = 0x8eb43cu; r_esp -= 4; W32(r_esp, v); }
    /* 006966ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006966c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006966c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006966c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006966cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006966ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006966d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006966d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006966d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006966da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006966dd: mov dword ptr [ecx], 0xb39638 */ W32((u32)(r_ecx), 0xb39638u);
    /* 006966e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006966ea: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6966efu); f_008171e8();
    /* 006966ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006966f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006966f9: mov esp, ebp */ r_esp = r_ebp;
    /* 006966fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006966fc: ret  */ FN_RET(0x006966b0); r_esp += 4; return;
}

void f_00696700(void) /* sub_696700 */
{
    FN_ENTER(0x00696700);
    /* 00696700: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 00696706: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696709: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 0069670f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696711: jle 0x696819 */ if ((fZ||fS!=fO)) goto L_00696819;
L_00696717:; BB(0x00696717);
    /* 00696717: fld dword ptr [ecx + 0x7c] */ FPUSH(R_F32((u32)(r_ecx+0x7cu)));
    /* 0069671a: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696720: fld dword ptr [ecx + 0x84] */ FPUSH(R_F32((u32)(r_ecx+0x84u)));
    /* 00696726: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696729: jge 0x69673b */ if ((fS==fO)) goto L_0069673b;
L_0069672b:; BB(0x0069672b);
    /* 0069672b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069672d: shl eax, 0x1a */ { u32 c = (26u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00696730: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00696732: add eax, dword ptr [ecx + 0xb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696738: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
L_0069673b:; BB(0x0069673b);
    /* 0069673b: fld dword ptr [ecx + 0x88] */ FPUSH(R_F32((u32)(r_ecx+0x88u)));
    /* 00696741: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00696743: fld dword ptr [ecx + 0x8c] */ FPUSH(R_F32((u32)(r_ecx+0x8cu)));
    /* 00696749: fld dword ptr [ecx + 0x90] */ FPUSH(R_F32((u32)(r_ecx+0x90u)));
    /* 0069674f: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 00696755: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696757: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 0069675a: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0069675c: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 0069675f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00696761: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 00696764: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696767: jge 0x696779 */ if ((fS==fO)) goto L_00696779;
L_00696769:; BB(0x00696769);
    /* 00696769: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069676b: shl eax, 0x1a */ { u32 c = (26u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0069676e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00696770: add eax, dword ptr [ecx + 0xb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696776: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
L_00696779:; BB(0x00696779);
    /* 00696779: fld dword ptr [ecx + 0x94] */ FPUSH(R_F32((u32)(r_ecx+0x94u)));
    /* 0069677f: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00696781: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 00696787: fld dword ptr [ecx + 0x9c] */ FPUSH(R_F32((u32)(r_ecx+0x9cu)));
    /* 0069678d: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 00696793: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696795: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 00696798: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0069679a: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 0069679d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0069679f: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 006967a2: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006967a5: jge 0x6967b7 */ if ((fS==fO)) goto L_006967b7;
L_006967a7:; BB(0x006967a7);
    /* 006967a7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006967a9: shl eax, 0x1a */ { u32 c = (26u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006967ac: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006967ae: add eax, dword ptr [ecx + 0xb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006967b4: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_006967b7:; BB(0x006967b7);
    /* 006967b7: fld dword ptr [ecx + 0xa0] */ FPUSH(R_F32((u32)(r_ecx+0xa0u)));
    /* 006967bd: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 006967bf: fld dword ptr [ecx + 0xa4] */ FPUSH(R_F32((u32)(r_ecx+0xa4u)));
    /* 006967c5: fld dword ptr [ecx + 0xa8] */ FPUSH(R_F32((u32)(r_ecx+0xa8u)));
    /* 006967cb: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 006967d1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006967d3: fstp dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0)); FPOP();
    /* 006967d6: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 006967d8: fstp dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0)); FPOP();
    /* 006967db: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 006967dd: fstp dword ptr [ecx + 0x54] */ W_F32((u32)(r_ecx+0x54u), ST(0)); FPOP();
    /* 006967e0: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006967e3: jge 0x6967f5 */ if ((fS==fO)) goto L_006967f5;
L_006967e5:; BB(0x006967e5);
    /* 006967e5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006967e7: shl eax, 0x1a */ { u32 c = (26u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006967ea: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006967ec: add eax, dword ptr [ecx + 0xb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006967f2: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
L_006967f5:; BB(0x006967f5);
    /* 006967f5: fld dword ptr [ecx + 0xac] */ FPUSH(R_F32((u32)(r_ecx+0xacu)));
    /* 006967fb: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 006967fd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006967ff: fstp dword ptr [ecx + 0x64] */ W_F32((u32)(r_ecx+0x64u), ST(0)); FPOP();
    /* 00696802: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 00696808: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069680a: fstp dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0)); FPOP();
    /* 0069680d: fld dword ptr [ecx + 0xb4] */ FPUSH(R_F32((u32)(r_ecx+0xb4u)));
    /* 00696813: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696815: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 00696818: ret  */ FN_RET(0x00696700); r_esp += 4; return;
L_00696819:; BB(0x00696819);
    /* 00696819: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0069681d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696822: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00696826: ret  */ FN_RET(0x00696700); r_esp += 4; return;
}

void f_00696828(void) /* sub_696828 */
{
    FN_ENTER(0x00696828);
    /* 00696828: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00696829: mov edi, ecx */ r_edi = r_ecx;
    /* 0069682b: lea edx, [edi + 0x7c] */ r_edx = (u32)(r_edi+0x7cu);
    /* 0069682e: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00696833: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696838: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696839: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069683a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x69683fu); f_007a9180();
    /* 0069683f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00696842: fcomp dword ptr [0x93c8e4] */ fx_compare(ST(0), R_F32((u32)(0x93c8e4u))); FPOP();
    /* 00696848: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069684a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069684b: jae 0x696897 */ if (!fC) goto L_00696897;
L_0069684d:; BB(0x0069684d);
    /* 0069684d: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00696852: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00696857: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x69685cu); f_007a9044();
    /* 0069685c: mov ecx, dword ptr [0xa942f8] */ r_ecx = R32((u32)(0xa942f8u));
    /* 00696862: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x696867u); f_00829cc8();
    /* 00696867: movsx ecx, word ptr [edi + 0xbe] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xbeu));
    /* 0069686e: call 0x829d68 */ r_esp -= 4; W32(r_esp, 0x696873u); f_00829d68();
    /* 00696873: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x696878u); f_007a9380();
    /* 00696878: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069687a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069687c: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069687f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00696880: call 0x82b2f0 */ r_esp -= 4; W32(r_esp, 0x696885u); f_0082b2f0();
    /* 00696885: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696888: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x69688du); f_007a9318();
    /* 0069688d: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00696892: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_00696897:; BB(0x00696897);
    /* 00696897: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00696898: ret  */ FN_RET(0x00696828); r_esp += 4; return;
}

void f_00696863(void)
{
    FN_ENTER(0x00696863);
    /* 00696863: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00696864: xor al, 0x19 */ {  u32 a = (u8)r_eax; u32 b = 0x19u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00696866: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00696868: mov edi, 0xbe8f */ r_edi = 0xbe8fu;
    /* 0069686d: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 0069686f: cmc  */ fC = !fC;
    /* 00696870: xor al, 0x19 */ {  u32 a = (u8)r_eax; u32 b = 0x19u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00696872: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00696874: or byte ptr [ebx], ch */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a | b) & 0xffu; W8(ad, r); fC = 0; }
    /* 00696876: adc dword ptr [eax], eax */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 00696878: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069687a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069687c: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069687f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00696880: call 0x82b2f0 */ r_esp -= 4; W32(r_esp, 0x696885u); f_0082b2f0();
    /* 00696885: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696888: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x69688du); f_007a9318();
    /* 0069688d: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00696892: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00696897: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00696898: ret  */ FN_RET(0x00696863); r_esp += 4; return;
}

void f_0069689c(void) /* sub_69689C */
{
    FN_ENTER(0x0069689c);
    /* 0069689c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069689d: mov ebp, esp */ r_ebp = r_esp;
    /* 0069689f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006968a1: push 0x8eb464 */ { u32 v = 0x8eb464u; r_esp -= 4; W32(r_esp, v); }
    /* 006968a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006968ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006968ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006968b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006968b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006968ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006968bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006968c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006968c3: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 006968c8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006968cf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6968d4u); f_005caba4();
    /* 006968d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006968d5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006968d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006968da: je 0x696910 */ if (fZ) goto L_00696910;
L_006968dc:; BB(0x006968dc);
    /* 006968dc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006968e3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006968ea: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006968ed: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006968f0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006968f3: call 0x696914 */ r_esp -= 4; W32(r_esp, 0x6968f8u); f_00696914();
    /* 006968f8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006968fb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00696902:; BB(0x00696902);
    /* 00696902: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696905: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069690c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069690e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069690f: ret  */ FN_RET(0x0069689c); r_esp += 4; return;
L_00696910:; BB(0x00696910);
    /* 00696910: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696912: jmp 0x696902 */ goto L_00696902;
}

void f_00696914(void) /* sub_696914 */
{
    FN_ENTER(0x00696914);
    /* 00696914: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00696915: mov ebp, esp */ r_ebp = r_esp;
    /* 00696917: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00696919: push 0x8eb480 */ { u32 v = 0x8eb480u; r_esp -= 4; W32(r_esp, v); }
    /* 0069691e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00696924: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696925: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0069692c: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069692f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00696932: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00696935: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00696938: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 0069693b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0069693e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00696944: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00696947: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0069694a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0069694d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00696950: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x696955u); f_008193cc();
    /* 00696955: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069695c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0069695f: mov dword ptr [edx], 0xb39638 */ W32((u32)(r_edx), 0xb39638u);
    /* 00696965: mov eax, dword ptr [0x9cb9c0] */ r_eax = R32((u32)(0x9cb9c0u));
    /* 0069696a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0069696d: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x696972u); f_00807ac0();
    /* 00696972: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696975: je 0x6969ab */ if (fZ) goto L_006969ab;
L_00696977:; BB(0x00696977);
    /* 00696977: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069697a: jne 0x69698b */ if (!fZ) goto L_0069698b;
L_0069697c:; BB(0x0069697c);
    /* 0069697c: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0069697f: mov dword ptr [ebx + 0xb8], 0xff001923 */ W32((u32)(r_ebx+0xb8u), 0xff001923u);
    /* 00696989: jmp 0x6969b8 */ goto L_006969b8;
L_0069698b:; BB(0x0069698b);
    /* 0069698b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0069698e: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696991: jne 0x69699f */ if (!fZ) goto L_0069699f;
L_00696993:; BB(0x00696993);
    /* 00696993: mov dword ptr [ebx + 0xb8], 0xff050300 */ W32((u32)(r_ebx+0xb8u), 0xff050300u);
    /* 0069699d: jmp 0x6969b8 */ goto L_006969b8;
L_0069699f:; BB(0x0069699f);
    /* 0069699f: mov dword ptr [ebx + 0xb8], 0xff282828 */ W32((u32)(r_ebx+0xb8u), 0xff282828u);
    /* 006969a9: jmp 0x6969b8 */ goto L_006969b8;
L_006969ab:; BB(0x006969ab);
    /* 006969ab: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006969ae: mov dword ptr [ebx + 0xb8], 0xff402a20 */ W32((u32)(r_ebx+0xb8u), 0xff402a20u);
L_006969b8:; BB(0x006969b8);
    /* 006969b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006969bb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006969be: mov word ptr [ebx + 0xbc], ax */ W16((u32)(r_ebx+0xbcu), (u16)r_eax);
    /* 006969c5: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006969c9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006969cc: jge 0x697052 */ if ((fS==fO)) goto L_00697052;
L_006969d2:; BB(0x006969d2);
    /* 006969d2: mov ecx, edx */ r_ecx = r_edx;
    /* 006969d4: call 0x68c454 */ r_esp -= 4; W32(r_esp, 0x6969d9u); f_0068c454();
    /* 006969d9: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006969dc: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 006969df: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006969e2: ja 0x696cf4 */ if ((!fC&&!fZ)) goto L_00696cf4;
L_006969e8:; BB(0x006969e8);
    /* 006969e8: mov eax, dword ptr [edx*4 + 0x93c834] */ r_eax = R32((u32)(r_edx*4+0x93c834u));
    /* 006969ef: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00696cf4:; BB(0x00696cf4);
    /* 00696cf4: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696cf7: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696cfd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d00: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00696d02: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696d09: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696d0f: fsub dword ptr [0x93c884] */ ST(0) = ST(0) - R_F32((u32)(0x93c884u));
    /* 00696d15: fmul dword ptr [0x93c8bc] */ ST(0) = ST(0) * R_F32((u32)(0x93c8bcu));
    /* 00696d1b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00696d1d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00696d1f: fst dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0));
    /* 00696d22: fst dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 00696d25: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696914); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696914); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696914); r_esp += 12; return;
L_00697052:; BB(0x00697052);
    /* 00697052: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00697056: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069705c: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 00697060: mov eax, ebx */ r_eax = r_ebx;
    /* 00697062: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697065: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697068: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069706f: mov esp, ebp */ r_esp = r_ebp;
    /* 00697071: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697072: ret 8 */ FN_RET(0x00696914); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696914); r_esp += 12; return;
}

void f_006969f1(void)
{
    FN_ENTER(0x006969f1);
    /* 006969f1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 006969f4: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 006969fa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006969fd: fld dword ptr [0x93c8d4] */ FPUSH(R_F32((u32)(0x93c8d4u)));
    /* 00696a03: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00696a05: fld dword ptr [0x93c8d0] */ FPUSH(R_F32((u32)(0x93c8d0u)));
    /* 00696a0b: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696a12: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696a18: fsub dword ptr [0x93c8b0] */ ST(0) = ST(0) - R_F32((u32)(0x93c8b0u));
    /* 00696a1e: fmul dword ptr [0x93c8ac] */ ST(0) = ST(0) * R_F32((u32)(0x93c8acu));
    /* 00696a24: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00696a26: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696a28: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00696a2a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696a2c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696a2e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00696a31: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00696a34: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696a37: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x006969f1); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x006969f1); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x006969f1); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x006969f1); r_esp += 12; return;
}

void f_00696a3c(void)
{
    FN_ENTER(0x00696a3c);
    /* 00696a3c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696a3f: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696a45: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696a48: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00696a4a: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696a51: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696a57: fsub dword ptr [0x93c898] */ ST(0) = ST(0) - R_F32((u32)(0x93c898u));
    /* 00696a5d: fmul dword ptr [0x93c894] */ ST(0) = ST(0) * R_F32((u32)(0x93c894u));
    /* 00696a63: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00696a65: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00696a67: fst dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0));
    /* 00696a6a: fst dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 00696a6d: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696a70: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696a3c); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696a3c); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696a3c); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696a3c); r_esp += 12; return;
}

void f_00696a75(void)
{
    FN_ENTER(0x00696a75);
    /* 00696a75: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696a78: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696a7e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696a81: fld dword ptr [0x93c8d4] */ FPUSH(R_F32((u32)(0x93c8d4u)));
    /* 00696a87: mov edx, 1 */ r_edx = 0x1u;
    /* 00696a8c: fld dword ptr [0x93c8b8] */ FPUSH(R_F32((u32)(0x93c8b8u)));
    /* 00696a92: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696a99: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696a9f: fsub dword ptr [0x93c8c0] */ ST(0) = ST(0) - R_F32((u32)(0x93c8c0u));
    /* 00696aa5: fmul dword ptr [0x93c8bc] */ ST(0) = ST(0) * R_F32((u32)(0x93c8bcu));
    /* 00696aab: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00696aad: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696aaf: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00696ab1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696ab3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696ab5: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00696ab8: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00696abb: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696abe: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696a75); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696a75); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696a75); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696a75); r_esp += 12; return;
}

void f_00696ac3(void)
{
    FN_ENTER(0x00696ac3);
    /* 00696ac3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696ac6: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696acc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696acf: fld dword ptr [0x93c8d0] */ FPUSH(R_F32((u32)(0x93c8d0u)));
    /* 00696ad5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00696ad7: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696ade: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696ae4: fsub dword ptr [0x93c888] */ ST(0) = ST(0) - R_F32((u32)(0x93c888u));
    /* 00696aea: fmul dword ptr [0x93c8c8] */ ST(0) = ST(0) * R_F32((u32)(0x93c8c8u));
    /* 00696af0: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00696af2: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00696af4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00696af6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696af8: fst dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0));
    /* 00696afb: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00696afe: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696b01: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696ac3); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696ac3); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696ac3); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696ac3); r_esp += 12; return;
}

void f_00696b06(void)
{
    FN_ENTER(0x00696b06);
    /* 00696b06: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696b09: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696b0f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696b12: fld dword ptr [0x93c8d4] */ FPUSH(R_F32((u32)(0x93c8d4u)));
    /* 00696b18: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00696b1a: fld dword ptr [0x93c8d0] */ FPUSH(R_F32((u32)(0x93c8d0u)));
    /* 00696b20: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696b27: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696b2d: fsub dword ptr [0x93c88c] */ ST(0) = ST(0) - R_F32((u32)(0x93c88cu));
    /* 00696b33: fmul dword ptr [0x93c8c8] */ ST(0) = ST(0) * R_F32((u32)(0x93c8c8u));
    /* 00696b39: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00696b3b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696b3d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00696b3f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696b41: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696b43: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00696b46: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00696b49: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696b4c: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696b06); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696b06); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696b06); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696b06); r_esp += 12; return;
}

void f_00696b51(void)
{
    FN_ENTER(0x00696b51);
    /* 00696b51: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696b54: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696b5a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696b5d: fld dword ptr [0x93c8d4] */ FPUSH(R_F32((u32)(0x93c8d4u)));
    /* 00696b63: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00696b65: fld dword ptr [0x93c8d0] */ FPUSH(R_F32((u32)(0x93c8d0u)));
    /* 00696b6b: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696b72: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696b78: fsub dword ptr [0x93c8dc] */ ST(0) = ST(0) - R_F32((u32)(0x93c8dcu));
    /* 00696b7e: fmul dword ptr [0x93c890] */ ST(0) = ST(0) * R_F32((u32)(0x93c890u));
    /* 00696b84: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00696b86: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696b88: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00696b8a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696b8c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696b8e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00696b91: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00696b94: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696b97: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696b51); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696b51); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696b51); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696b51); r_esp += 12; return;
}

void f_00696b9c(void)
{
    FN_ENTER(0x00696b9c);
    /* 00696b9c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696b9f: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696ba5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696ba8: fld dword ptr [0x93c8d0] */ FPUSH(R_F32((u32)(0x93c8d0u)));
    /* 00696bae: mov edx, 1 */ r_edx = 0x1u;
    /* 00696bb3: fld dword ptr [0x93c8b8] */ FPUSH(R_F32((u32)(0x93c8b8u)));
    /* 00696bb9: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696bc0: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696bc6: fsub dword ptr [0x93c8a0] */ ST(0) = ST(0) - R_F32((u32)(0x93c8a0u));
    /* 00696bcc: fmul dword ptr [0x93c89c] */ ST(0) = ST(0) * R_F32((u32)(0x93c89cu));
    /* 00696bd2: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00696bd4: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696bd6: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00696bd8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696bda: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696bdc: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00696bdf: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00696be2: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696be5: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696b9c); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696b9c); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696b9c); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696b9c); r_esp += 12; return;
}

void f_00696bea(void)
{
    FN_ENTER(0x00696bea);
    /* 00696bea: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696bed: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696bf3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696bf6: fld dword ptr [0x93c8a4] */ FPUSH(R_F32((u32)(0x93c8a4u)));
    /* 00696bfc: mov edx, 1 */ r_edx = 0x1u;
    /* 00696c01: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696c08: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696c0e: fsub dword ptr [0x93c8a8] */ ST(0) = ST(0) - R_F32((u32)(0x93c8a8u));
    /* 00696c14: fmul dword ptr [0x93c8d8] */ ST(0) = ST(0) * R_F32((u32)(0x93c8d8u));
    /* 00696c1a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00696c1c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00696c1e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00696c20: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696c22: fst dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0));
    /* 00696c25: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00696c28: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696c2b: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696bea); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696bea); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696bea); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696bea); r_esp += 12; return;
}

void f_00696c30(void)
{
    FN_ENTER(0x00696c30);
    /* 00696c30: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696c33: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696c39: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696c3c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00696c3e: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696c45: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696c4b: fsub dword ptr [0x93c8b4] */ ST(0) = ST(0) - R_F32((u32)(0x93c8b4u));
    /* 00696c51: fmul dword ptr [0x93c8d8] */ ST(0) = ST(0) * R_F32((u32)(0x93c8d8u));
    /* 00696c57: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00696c59: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00696c5b: fst dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0));
    /* 00696c5e: fst dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 00696c61: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696c64: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696c30); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696c30); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696c30); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696c30); r_esp += 12; return;
}

void f_00696c69(void)
{
    FN_ENTER(0x00696c69);
    /* 00696c69: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696c6c: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696c72: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696c75: fld dword ptr [0x93c8c4] */ FPUSH(R_F32((u32)(0x93c8c4u)));
    /* 00696c7b: mov edx, 1 */ r_edx = 0x1u;
    /* 00696c80: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696c87: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696c8d: fsub dword ptr [0x93c8cc] */ ST(0) = ST(0) - R_F32((u32)(0x93c8ccu));
    /* 00696c93: fmul dword ptr [0x93c8c8] */ ST(0) = ST(0) * R_F32((u32)(0x93c8c8u));
    /* 00696c99: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00696c9b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00696c9d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00696c9f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ca1: fst dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0));
    /* 00696ca4: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00696ca7: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696caa: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696c69); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696c69); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696c69); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696c69); r_esp += 12; return;
}

void f_00696cac(void)
{
    FN_ENTER(0x00696cac);
    /* 00696cac: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696caf: fld dword ptr [0x93c8e0] */ FPUSH(R_F32((u32)(0x93c8e0u)));
    /* 00696cb5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696cb8: fld dword ptr [0x93c8d4] */ FPUSH(R_F32((u32)(0x93c8d4u)));
    /* 00696cbe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00696cc0: fld dword ptr [0x93c8d0] */ FPUSH(R_F32((u32)(0x93c8d0u)));
    /* 00696cc6: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
    /* 00696ccd: fld dword ptr [ecx + 0xe3c] */ FPUSH(R_F32((u32)(r_ecx+0xe3cu)));
    /* 00696cd3: fsub dword ptr [0x93c8dc] */ ST(0) = ST(0) - R_F32((u32)(0x93c8dcu));
    /* 00696cd9: fmul dword ptr [0x93c8d8] */ ST(0) = ST(0) * R_F32((u32)(0x93c8d8u));
    /* 00696cdf: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00696ce1: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696ce3: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00696ce5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696ce7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696ce9: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00696cec: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00696cef: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00696cf2: jmp 0x696d28 */ goto L_00696d28;
L_00696d28:; BB(0x00696d28);
    /* 00696d28: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2b: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d2e: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d31: fld dword ptr [0x93c87c] */ FPUSH(R_F32((u32)(0x93c87cu)));
    /* 00696d37: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00696d3c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00696d43: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00696d4a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00696d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d52: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00696d55: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00696d58: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d5b: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00696d62: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00696d68: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
    /* 00696d6b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00696d72: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00696d75: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00696d7b: fst dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0));
    /* 00696d7e: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00696d81: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00696d84: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696d87: mov edx, dword ptr [edx + 0xb8] */ r_edx = R32((u32)(r_edx+0xb8u));
    /* 00696d8d: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00696d90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696d93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00696d96: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00696d99: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00696d9c: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00696da2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00696da5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00696dab: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dae: fadd dword ptr [eax + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x80u));
    /* 00696db4: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 00696dba: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696dbe: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x696dc3u); f_00780630();
    /* 00696dc3: mov esi, eax */ r_esi = r_eax;
    /* 00696dc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696dc8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696dca: je 0x697075 */ if (fZ) goto L_00697075;
L_00696dd0:; BB(0x00696dd0);
    /* 00696dd0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696dd3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dd6: movsx ebx, word ptr [ebx + 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x60u));
    /* 00696dda: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00696ddd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00696ddf: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00696de2: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00696de5: mov dword ptr [eax + 0x80], edi */ W32((u32)(r_eax+0x80u), r_edi);
    /* 00696deb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00696dee: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00696df4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x696df9u); f_008587a5();
    /* 00696df9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696dfc: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 00696e02: fadd dword ptr [0x93c870] */ ST(0) = ST(0) + R_F32((u32)(0x93c870u));
    /* 00696e08: movsx edx, word ptr [ecx + 0xbc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xbcu));
    /* 00696e0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00696e14: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00696e17: fdiv dword ptr [0x93c878] */ ST(0) = ST(0) / R_F32((u32)(0x93c878u));
    /* 00696e1d: fmul dword ptr [0x93c874] */ ST(0) = ST(0) * R_F32((u32)(0x93c874u));
    /* 00696e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e25: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 00696e2b: je 0x696e66 */ if (fZ) goto L_00696e66;
L_00696e2d:; BB(0x00696e2d);
    /* 00696e2d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696e30: jne 0x696e3d */ if (!fZ) goto L_00696e3d;
L_00696e32:; BB(0x00696e32);
    /* 00696e32: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696e38: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00696e3b: jmp 0x696e66 */ goto L_00696e66;
L_00696e3d:; BB(0x00696e3d);
    /* 00696e3d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696e40: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696e43: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696e46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00696e4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696e50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00696e54: mov eax, ecx */ r_eax = r_ecx;
    /* 00696e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696e59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696e60: mov esp, ebp */ r_esp = r_ebp;
    /* 00696e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696e63: ret 8 */ FN_RET(0x00696cac); r_esp += 12; return;
L_00696e66:; BB(0x00696e66);
    /* 00696e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e68: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x696e6du); f_0082ddd8();
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696cac); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696cac); r_esp += 12; return;
L_00697075:; BB(0x00697075);
    /* 00697075: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697078: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069707b: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0069707e: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00697081: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697085: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069708b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0069708f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697099: mov esp, ebp */ r_esp = r_ebp;
    /* 0069709b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069709c: ret 8 */ FN_RET(0x00696cac); r_esp += 12; return;
}

void f_00696e6b(void)
{
    FN_ENTER(0x00696e6b);
    /* 00696e6b: sbb dword ptr [eax], eax */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; W32(ad, r);  }
    /* 00696e6d: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00696e70: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e73: fadd dword ptr [edx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x7cu));
    /* 00696e76: fstp dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0)); FPOP();
    /* 00696e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00696e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x696e80u); f_0082dcbc();
    /* 00696e80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696e83: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696e86: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00696e8d: fchs  */ ST(0) = -ST(0);
    /* 00696e8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00696e91: fadd dword ptr [edx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x84u));
    /* 00696e97: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 00696e9d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00696ea0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00696ea7: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00696eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696eab: mov dword ptr [ebp - 0x5c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa4u), 0x3f800000u);
    /* 00696eb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696eb3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00696eba: mov dword ptr [ebp - 0x54], 0x3f800000 */ W32((u32)(r_ebp+0xffffffacu), 0x3f800000u);
    /* 00696ec1: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00696ec8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00696ecb: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696ece: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696ecf: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x696ed4u); f_007a8e2c();
    /* 00696ed4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696ed7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696eda: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696edf: jl 0x696ee8 */ if ((fS!=fO)) goto L_00696ee8;
L_00696ee1:; BB(0x00696ee1);
    /* 00696ee1: cmp eax, 0x6000 */ {  u32 a = r_eax; u32 b = 0x6000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ee6: jle 0x696f12 */ if ((fZ||fS!=fO)) goto L_00696f12;
L_00696ee8:; BB(0x00696ee8);
    /* 00696ee8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696eeb: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696eee: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696ef1: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696ef4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00696ef8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00696efe: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00696f02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00696f05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00696f0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00696f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696f0f: ret 8 */ FN_RET(0x00696e6b); r_esp += 12; return;
L_00696f12:; BB(0x00696f12);
    /* 00696f12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x696f17u); f_0082d7b0();
    /* 00696f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f19: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x696f1eu); f_00830cd8();
    /* 00696f1e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00696f21: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00696f24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x696f2bu); f_0082d8bc();
    /* 00696f2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00696f2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f30: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x696f35u); f_00830c04();
    /* 00696f35: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 00696f38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f3d: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00696f40: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x696f45u); f_0083c128();
    /* 00696f45: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x696f4au); f_0082da80();
    /* 00696f4a: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00696f4d: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00696f50: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00696f53: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00696f56: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00696f59: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00696f5c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00696f5f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00696f62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00696f65: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00696f68: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00696f6b: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00696f6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00696f70: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00696f73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f75: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00696f78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696f7a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f7c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00696f7e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f80: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00696f82: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696f84: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 00696f87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00696f8b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00696f8d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00696f8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696f91: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00696f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696f95: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 00696f9b: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696f9d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696f9f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fa3: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00696fa5: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 00696fab: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00696fad: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00696faf: fsub st(7), st(0) */ ST(7) = ST(7) - ST(0);
    /* 00696fb1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00696fb3: fstp dword ptr [edx + 0x98] */ W_F32((u32)(r_edx+0x98u), ST(0)); FPOP();
    /* 00696fb9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00696fbb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fbd: fstp dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0)); FPOP();
    /* 00696fc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00696fc5: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00696fc7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fca: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696fcc: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 00696fd2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fd4: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00696fd6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00696fd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696fdb: fstp dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0)); FPOP();
    /* 00696fe1: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00696fe4: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 00696fe6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00696fe8: fchs  */ ST(0) = -ST(0);
    /* 00696fea: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696fec: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00696fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696ff0: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 00696ff6: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 00696ff8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00696ffb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00696ffd: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00697003: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00697006: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697008: fchs  */ ST(0) = -ST(0);
    /* 0069700a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069700c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0069700e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697010: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 00697016: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00697018: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069701a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069701c: fstp dword ptr [edx + 0xb0] */ W_F32((u32)(r_edx+0xb0u), ST(0)); FPOP();
    /* 00697022: fchs  */ ST(0) = -ST(0);
    /* 00697024: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00697026: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697028: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069702a: fstp dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0)); FPOP();
    /* 00697030: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697032: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00697038: mov dword ptr [eax + 0xc0], 0x96 */ W32((u32)(r_eax+0xc0u), 0x96u);
    /* 00697042: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697045: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069704c: mov esp, ebp */ r_esp = r_ebp;
    /* 0069704e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069704f: ret 8 */ FN_RET(0x00696e6b); r_esp += 12; return;
}

