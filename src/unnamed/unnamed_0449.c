#include "protos.h"

void f_00449178(void) /* sub_449178 */
{
    FN_ENTER(0x00449178);
    /* 00449178: mov eax, dword ptr [0x9a553c] */ r_eax = R32((u32)(0x9a553cu));
    /* 0044917d: mov edx, dword ptr [0x9a5550] */ r_edx = R32((u32)(0x9a5550u));
    /* 00449183: mov dword ptr [ecx + 0x488], eax */ W32((u32)(r_ecx+0x488u), r_eax);
    /* 00449189: mov dword ptr [ecx + 0x48c], edx */ W32((u32)(r_ecx+0x48cu), r_edx);
    /* 0044918f: mov eax, dword ptr [0x9a5554] */ r_eax = R32((u32)(0x9a5554u));
    /* 00449194: mov dword ptr [ecx + 0x490], eax */ W32((u32)(r_ecx+0x490u), r_eax);
    /* 0044919a: mov eax, dword ptr [0x9a5558] */ r_eax = R32((u32)(0x9a5558u));
    /* 0044919f: mov dword ptr [ecx + 0x494], eax */ W32((u32)(r_ecx+0x494u), r_eax);
    /* 004491a5: mov edx, 0xff */ r_edx = 0xffu;
    /* 004491aa: mov eax, dword ptr [0xa44b94] */ r_eax = R32((u32)(0xa44b94u));
    /* 004491af: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004491b2: mov eax, dword ptr [0xa44b98] */ r_eax = R32((u32)(0xa44b98u));
    /* 004491b7: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004491ba: mov eax, dword ptr [0xa44b60] */ r_eax = R32((u32)(0xa44b60u));
    /* 004491bf: mov byte ptr [eax + 7], dl */ W8((u32)(r_eax+0x7u), (u8)r_edx);
    /* 004491c2: mov eax, dword ptr [0xa44b90] */ r_eax = R32((u32)(0xa44b90u));
    /* 004491c7: mov byte ptr [eax + 7], dl */ W8((u32)(r_eax+0x7u), (u8)r_edx);
    /* 004491ca: ret  */ FN_RET(0x00449178); r_esp += 4; return;
}

void f_004491cc(void) /* sub_4491CC */
{
    FN_ENTER(0x004491cc);
    /* 004491cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004491cd: mov esi, ecx */ r_esi = r_ecx;
    /* 004491cf: mov ecx, esi */ r_ecx = r_esi;
    /* 004491d1: mov eax, dword ptr [0x9a54bc] */ r_eax = R32((u32)(0x9a54bcu));
    /* 004491d6: mov edx, dword ptr [0xa44bb4] */ r_edx = R32((u32)(0xa44bb4u));
    /* 004491dc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004491de: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004491e1: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004491e7: mov dword ptr [esi + 0xd8], 0x9a5340 */ W32((u32)(r_esi+0xd8u), 0x9a5340u);
    /* 004491f1: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 004491f7: push 0x9a53e0 */ { u32 v = 0x9a53e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004491fc: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x449201u); f_007b9a88();
    /* 00449201: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00449206: mov ecx, esi */ r_ecx = r_esi;
    /* 00449208: mov dword ptr [esi + 0x370], 0 */ W32((u32)(r_esi+0x370u), 0x0u);
    /* 00449212: mov dword ptr [esi + 0x358], 0x9a54c0 */ W32((u32)(r_esi+0x358u), 0x9a54c0u);
    /* 0044921c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00449221: push dword ptr [0xa44bc0] */ { u32 v = R32((u32)(0xa44bc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00449227: push dword ptr [0xa44bc4] */ { u32 v = R32((u32)(0xa44bc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044922d: push dword ptr [0xa44bc8] */ { u32 v = R32((u32)(0xa44bc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00449233: call 0x770da4 */ r_esp -= 4; W32(r_esp, 0x449238u); f_00770da4();
    /* 00449238: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044923a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044923b: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00449242: mov ecx, esi */ r_ecx = r_esi;
    /* 00449244: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x449249u); f_007aa4c8();
    /* 00449249: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0044924b: movzx eax, word ptr [esi + 0xb8] */ r_eax = (u32)R16((u32)(r_esi+0xb8u));
    /* 00449252: movzx edx, word ptr [esi + 0x2be] */ r_edx = (u32)R16((u32)(r_esi+0x2beu));
    /* 00449259: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00449260: movsx eax, word ptr [esi + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2bcu));
    /* 00449267: mov word ptr [esi + 0x334], ax */ W16((u32)(r_esi+0x334u), (u16)r_eax);
    /* 0044926e: mov word ptr [esi + 0x336], dx */ W16((u32)(r_esi+0x336u), (u16)r_edx);
    /* 00449275: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 0044927c: mov ecx, esi */ r_ecx = r_esi;
    /* 0044927e: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x449283u); f_00787550();
    /* 00449283: mov ecx, esi */ r_ecx = r_esi;
    /* 00449285: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x44928au); f_0078730c();
    /* 0044928a: mov ecx, esi */ r_ecx = r_esi;
    /* 0044928c: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x449291u); f_007b4f54();
    /* 00449291: mov ecx, dword ptr [0xa44bb4] */ r_ecx = R32((u32)(0xa44bb4u));
    /* 00449297: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0044929d: mov edx, dword ptr [eax + 0x138] */ r_edx = R32((u32)(r_eax+0x138u));
    /* 004492a3: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004492a6: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 004492ac: mov eax, dword ptr [eax + 0x13c] */ r_eax = R32((u32)(r_eax+0x13cu));
    /* 004492b2: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 004492b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004492b7: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 004492bd: mov dword ptr [esi + 0x3f0], eax */ W32((u32)(r_esi+0x3f0u), r_eax);
    /* 004492c3: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
    /* 004492c9: mov dword ptr [esi + 0x3f8], eax */ W32((u32)(r_esi+0x3f8u), r_eax);
    /* 004492cf: mov dword ptr [esi + 0x500], eax */ W32((u32)(r_esi+0x500u), r_eax);
    /* 004492d5: mov dword ptr [esi + 0x504], eax */ W32((u32)(r_esi+0x504u), r_eax);
    /* 004492db: mov dword ptr [esi + 0x508], eax */ W32((u32)(r_esi+0x508u), r_eax);
    /* 004492e1: mov dword ptr [esi + 0x50c], eax */ W32((u32)(r_esi+0x50cu), r_eax);
    /* 004492e7: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 004492ed: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004492f0: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 004492f6: mov ecx, esi */ r_ecx = r_esi;
    /* 004492f8: call 0x449178 */ r_esp -= 4; W32(r_esp, 0x4492fdu); f_00449178();
    /* 004492fd: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00449301: mov word ptr [0x9a4e04], ax */ W16((u32)(0x9a4e04u), (u16)r_eax);
    /* 00449307: mov eax, dword ptr [esi + 0x2e8] */ r_eax = R32((u32)(r_esi+0x2e8u));
    /* 0044930d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044930f: mov dword ptr [esi + 0x47c], edx */ W32((u32)(r_esi+0x47cu), r_edx);
    /* 00449315: mov dword ptr [esi + 0x480], edx */ W32((u32)(r_esi+0x480u), r_edx);
    /* 0044931b: mov edx, dword ptr [0xa44bb8] */ r_edx = R32((u32)(0xa44bb8u));
    /* 00449321: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00449324: mov dword ptr [esi + 0x2e8], eax */ W32((u32)(r_esi+0x2e8u), r_eax);
    /* 0044932a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0044932d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044932f: jle 0x44939a */ if ((fZ||fS!=fO)) goto L_0044939a;
L_00449331:; BB(0x00449331);
    /* 00449331: movsx eax, word ptr [edx + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 00449335: mov word ptr [esi + 0x4b4], ax */ W16((u32)(r_esi+0x4b4u), (u16)r_eax);
    /* 0044933c: mov word ptr [esi + 0x4bc], ax */ W16((u32)(r_esi+0x4bcu), (u16)r_eax);
    /* 00449343: mov edx, dword ptr [0xa44bb8] */ r_edx = R32((u32)(0xa44bb8u));
    /* 00449349: movsx eax, word ptr [edx + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1cu));
    /* 0044934d: mov word ptr [esi + 0x4b6], ax */ W16((u32)(r_esi+0x4b6u), (u16)r_eax);
    /* 00449354: mov word ptr [esi + 0x4be], ax */ W16((u32)(r_esi+0x4beu), (u16)r_eax);
    /* 0044935b: mov eax, dword ptr [0xa44bb8] */ r_eax = R32((u32)(0xa44bb8u));
    /* 00449360: movsx eax, word ptr [eax + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 00449364: mov word ptr [esi + 0x4b8], ax */ W16((u32)(r_esi+0x4b8u), (u16)r_eax);
    /* 0044936b: mov word ptr [esi + 0x4c0], ax */ W16((u32)(r_esi+0x4c0u), (u16)r_eax);
    /* 00449372: mov eax, dword ptr [0xa44bb8] */ r_eax = R32((u32)(0xa44bb8u));
    /* 00449377: movsx eax, word ptr [eax + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x24u));
    /* 0044937b: mov word ptr [esi + 0x4ba], ax */ W16((u32)(r_esi+0x4bau), (u16)r_eax);
    /* 00449382: mov word ptr [esi + 0x4c2], ax */ W16((u32)(r_esi+0x4c2u), (u16)r_eax);
    /* 00449389: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0044938f: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00449394: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
L_0044939a:; BB(0x0044939a);
    /* 0044939a: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0044939d: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004493a2: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 004493a5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004493a7: mov ecx, esi */ r_ecx = r_esi;
    /* 004493a9: mov word ptr [0xa44bd0], dx */ W16((u32)(0xa44bd0u), (u16)r_edx);
    /* 004493b0: mov word ptr [0xa44bce], dx */ W16((u32)(0xa44bceu), (u16)r_edx);
    /* 004493b7: mov word ptr [0xa44bcc], dx */ W16((u32)(0xa44bccu), (u16)r_edx);
    /* 004493be: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004493c0: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x4493c6u); call_ind(t); }
    /* 004493c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004493c7: ret  */ FN_RET(0x004491cc); r_esp += 4; return;
}

void f_004493c8(void) /* sub_4493C8 */
{
    FN_ENTER(0x004493c8);
    /* 004493c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004493c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004493cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004493cd: call 0x4493ec */ r_esp -= 4; W32(r_esp, 0x4493d2u); f_004493ec();
    /* 004493d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004493d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004493d8: jne 0x4493de */ if (!fZ) goto L_004493de;
L_004493da:; BB(0x004493da);
    /* 004493da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004493db: ret 4 */ FN_RET(0x004493c8); r_esp += 8; return;
L_004493de:; BB(0x004493de);
    /* 004493de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004493df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4493e4u); f_005c2f74();
    /* 004493e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004493e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004493e6: ret 4 */ FN_RET(0x004493c8); r_esp += 8; return;
}

void f_004493ec(void) /* sub_4493EC */
{
    FN_ENTER(0x004493ec);
    /* 004493ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004493ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004493ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004493f1: push 0x8ce9f0 */ { u32 v = 0x8ce9f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004493f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004493fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004493fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00449404: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449407: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044940a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044940d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00449410: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00449413: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00449416: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449419: mov dword ptr [ecx], 0xaf63a8 */ W32((u32)(r_ecx), 0xaf63a8u);
    /* 0044941f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00449426: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x44942bu); f_008171e8();
    /* 0044942b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044942e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00449435: mov esp, ebp */ r_esp = r_ebp;
    /* 00449437: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449438: ret  */ FN_RET(0x004493ec); r_esp += 4; return;
}

void f_0044943c(void) /* sub_44943C */
{
    FN_ENTER(0x0044943c);
    /* 0044943c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044943d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044943e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044943f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449440: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449443: mov edi, ecx */ r_edi = r_ecx;
    /* 00449445: mov ecx, edi */ r_ecx = r_edi;
    /* 00449447: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 0044944b: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0044944f: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 00449453: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00449459: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x44945eu); f_008193cc();
    /* 0044945e: mov dword ptr [edi], 0xaf63a8 */ W32((u32)(r_edi), 0xaf63a8u);
    /* 00449464: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00449467: mov dword ptr [edi + 0x1c], ebp */ W32((u32)(r_edi+0x1cu), r_ebp);
    /* 0044946a: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 0044946d: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 00449470: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00449472: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00449475: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00449478: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0044947b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0044947f: mov edx, ebp */ r_edx = r_ebp;
    /* 00449481: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00449485: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x44948au); f_0082f9c4();
    /* 0044948a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044948d: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x449492u); f_0083173c();
    /* 00449492: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00449494: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 00449497: lea ebx, [esp] */ r_ebx = (u32)(r_esp);
    /* 0044949a: lea edx, [edi + 0x28] */ r_edx = (u32)(r_edi+0x28u);
    /* 0044949d: lea eax, [edi + 0x2c] */ r_eax = (u32)(r_edi+0x2cu);
    /* 004494a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004494a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004494a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004494a3: call 0x7a8d04 */ r_esp -= 4; W32(r_esp, 0x4494a8u); f_007a8d04();
    /* 004494a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004494ab: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4494b0u); f_008587a5();
    /* 004494b0: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 004494b4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004494b8: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 004494bc: fdiv dword ptr [0x8fe848] */ ST(0) = ST(0) / R_F32((u32)(0x8fe848u));
    /* 004494c2: fmul dword ptr [0x8fe844] */ ST(0) = ST(0) * R_F32((u32)(0x8fe844u));
    /* 004494c8: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 004494cb: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 004494cf: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 004494d4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004494d9: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004494dd: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 004494e1: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 004494e5: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004494e9: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 004494ec: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004494ee: lea ebp, [ebx + ebx] */ r_ebp = (u32)(r_ebx+r_ebx);
    /* 004494f1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004494f3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004494f5: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004494f7: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 004494fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004494fd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004494ff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00449501: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00449503: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00449505: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00449507: add edx, dword ptr [esp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044950b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044950d: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 00449510: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x449515u); f_008587a5();
    /* 00449515: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00449519: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0044951d: fdiv dword ptr [0x8fe848] */ ST(0) = ST(0) / R_F32((u32)(0x8fe848u));
    /* 00449523: fmul dword ptr [0x8fe83c] */ ST(0) = ST(0) * R_F32((u32)(0x8fe83cu));
    /* 00449529: fadd dword ptr [0x8fe840] */ ST(0) = ST(0) + R_F32((u32)(0x8fe840u));
    /* 0044952f: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00449533: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 00449537: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00449539: fmul dword ptr [0x8fe844] */ ST(0) = ST(0) * R_F32((u32)(0x8fe844u));
    /* 0044953f: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00449543: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00449548: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044954d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00449551: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00449555: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00449559: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0044955d: mov eax, edi */ r_eax = r_edi;
    /* 0044955f: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00449563: imul edx, dword ptr [esp + 0x50] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x50u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00449568: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 0044956b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044956e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044956f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449570: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00449571: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00449572: ret 0x10 */ FN_RET(0x0044943c); r_esp += 20; return;
}

void f_00449578(void) /* sub_449578 */
{
    FN_ENTER(0x00449578);
    /* 00449578: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0044957b: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0044957e: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00449581: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00449584: add dword ptr [ecx + 0x2c], eax */ { u32 ad = (u32)(r_ecx+0x2cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00449587: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449589: jle 0x44958c */ if ((fZ||fS!=fO)) goto L_0044958c;
L_0044958b:; BB(0x0044958b);
    /* 0044958b: ret  */ FN_RET(0x00449578); r_esp += 4; return;
L_0044958c:; BB(0x0044958c);
    /* 0044958c: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00449590: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449595: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00449599: ret  */ FN_RET(0x00449578); r_esp += 4; return;
}

void f_0044959c(void) /* sub_44959C */
{
    FN_ENTER(0x0044959c);
    /* 0044959c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044959d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004495a0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004495a2: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004495a5: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004495a8: jge 0x4495cd */ if ((fS==fO)) goto L_004495cd;
L_004495aa:; BB(0x004495aa);
    /* 004495aa: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004495af: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004495b1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004495b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004495b5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004495b7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004495b9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004495bb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004495bd: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004495bf: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004495c2: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004495c5: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004495c7: mov byte ptr [0x9a5593], dl */ W8((u32)(0x9a5593u), (u8)r_edx);
L_004495cd:; BB(0x004495cd);
    /* 004495cd: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004495d0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004495d2: mov dword ptr [0xa44c00], eax */ W32((u32)(0xa44c00u), r_eax);
    /* 004495d7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004495da: mov dword ptr [0xa44c04], edx */ W32((u32)(0xa44c04u), r_edx);
    /* 004495e0: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004495e3: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004495e6: mov dword ptr [0xa44c08], eax */ W32((u32)(0xa44c08u), r_eax);
    /* 004495eb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004495ed: mov dword ptr [0xa44c0c], eax */ W32((u32)(0xa44c0cu), r_eax);
    /* 004495f2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004495f5: mov dword ptr [0xa44c10], eax */ W32((u32)(0xa44c10u), r_eax);
    /* 004495fa: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004495fd: mov dword ptr [0xa44c14], eax */ W32((u32)(0xa44c14u), r_eax);
    /* 00449602: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x449607u); f_0082d7b0();
    /* 00449607: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00449609: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x44960eu); f_00830cd8();
    /* 0044960e: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00449611: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00449614: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0044961b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044961d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00449625: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00449629: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x44962eu); f_0082e9e4();
    /* 0044962e: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 00449631: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00449633: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x449638u); f_0082d8bc();
    /* 00449638: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0044963b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044963c: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00449640: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00449642: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x449647u); f_00830aa0();
    /* 00449647: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0044964a: mov ecx, 0xa44c0c */ r_ecx = 0xa44c0cu;
    /* 0044964f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x449654u); f_0082ebac();
    /* 00449654: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x449659u); f_0082da80();
    /* 00449659: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x44965eu); f_007a902c();
    /* 0044965e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00449660: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00449662: push 0x9a5580 */ { u32 v = 0x9a5580u; r_esp -= 4; W32(r_esp, v); }
    /* 00449667: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x44966cu); f_0082c07c();
    /* 0044966c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044966f: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x449674u); f_007a9044();
    /* 00449674: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00449677: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00449678: ret  */ FN_RET(0x0044959c); r_esp += 4; return;
}

void f_0044967c(void) /* sub_44967C */
{
    FN_ENTER(0x0044967c);
    /* 0044967c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044967d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044967f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00449681: call 0x4496a0 */ r_esp -= 4; W32(r_esp, 0x449686u); f_004496a0();
    /* 00449686: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044968a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044968c: jne 0x449692 */ if (!fZ) goto L_00449692;
L_0044968e:; BB(0x0044968e);
    /* 0044968e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044968f: ret 4 */ FN_RET(0x0044967c); r_esp += 8; return;
L_00449692:; BB(0x00449692);
    /* 00449692: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449693: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x449698u); f_005c2f74();
    /* 00449698: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00449699: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044969a: ret 4 */ FN_RET(0x0044967c); r_esp += 8; return;
}

void f_004496a0(void) /* sub_4496A0 */
{
    FN_ENTER(0x004496a0);
    /* 004496a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004496a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004496a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004496a5: push 0x8cea0c */ { u32 v = 0x8cea0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004496aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004496b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004496b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004496b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004496bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004496be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004496c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004496c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004496c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004496ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004496cd: mov dword ptr [ecx], 0xaf63e0 */ W32((u32)(r_ecx), 0xaf63e0u);
    /* 004496d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004496da: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4496dfu); f_008171e8();
    /* 004496df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004496e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004496e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004496eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004496ec: ret  */ FN_RET(0x004496a0); r_esp += 4; return;
}

void f_004496f0(void) /* sub_4496F0 */
{
    FN_ENTER(0x004496f0);
    /* 004496f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004496f1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004496f3: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004496f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004496fb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x449700u); f_008193cc();
    /* 00449700: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00449704: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00449708: mov dword ptr [ebp], 0xaf63e0 */ W32((u32)(r_ebp), 0xaf63e0u);
    /* 0044970f: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 00449712: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00449715: mov eax, ebp */ r_eax = r_ebp;
    /* 00449717: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449718: ret 8 */ FN_RET(0x004496f0); r_esp += 12; return;
}

void f_0044971c(void) /* sub_44971C */
{
    FN_ENTER(0x0044971c);
    /* 0044971c: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0044971f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00449721: mov dword ptr [0xa44c1c], edx */ W32((u32)(0xa44c1cu), r_edx);
    /* 00449727: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0044972a: mov dword ptr [0xa44c20], edx */ W32((u32)(0xa44c20u), r_edx);
    /* 00449730: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00449733: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00449736: mov dword ptr [0xa44c24], eax */ W32((u32)(0xa44c24u), r_eax);
    /* 0044973b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044973d: mov dword ptr [0xa44c28], eax */ W32((u32)(0xa44c28u), r_eax);
    /* 00449742: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00449745: mov dword ptr [0xa44c2c], eax */ W32((u32)(0xa44c2cu), r_eax);
    /* 0044974a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044974d: mov dword ptr [0xa44c30], eax */ W32((u32)(0xa44c30u), r_eax);
    /* 00449752: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x449757u); f_007a902c();
    /* 00449757: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00449759: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044975b: push 0x9a55a4 */ { u32 v = 0x9a55a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00449760: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x449765u); f_0082c07c();
    /* 00449765: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449768: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x44976du); f_007a9044();
    /* 0044976d: ret  */ FN_RET(0x0044971c); r_esp += 4; return;
}

void f_00449770(void) /* sub_449770 */
{
    FN_ENTER(0x00449770);
    /* 00449770: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449771: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00449773: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00449775: call 0x449794 */ r_esp -= 4; W32(r_esp, 0x44977au); f_00449794();
    /* 0044977a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044977e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449780: jne 0x449786 */ if (!fZ) goto L_00449786;
L_00449782:; BB(0x00449782);
    /* 00449782: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00449783: ret 4 */ FN_RET(0x00449770); r_esp += 8; return;
L_00449786:; BB(0x00449786);
    /* 00449786: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449787: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44978cu); f_005c2f74();
    /* 0044978c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044978d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044978e: ret 4 */ FN_RET(0x00449770); r_esp += 8; return;
}

void f_00449794(void) /* sub_449794 */
{
    FN_ENTER(0x00449794);
    /* 00449794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449795: mov ebp, esp */ r_ebp = r_esp;
    /* 00449797: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00449799: push 0x8cea28 */ { u32 v = 0x8cea28u; r_esp -= 4; W32(r_esp, v); }
    /* 0044979e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004497a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004497a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004497ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004497af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004497b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004497b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004497b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004497bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004497be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004497c1: mov dword ptr [ecx], 0xaf6418 */ W32((u32)(r_ecx), 0xaf6418u);
    /* 004497c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004497ce: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4497d3u); f_008171e8();
    /* 004497d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004497d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004497dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004497df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004497e0: ret  */ FN_RET(0x00449794); r_esp += 4; return;
}

void f_004497e4(void) /* sub_4497E4 */
{
    FN_ENTER(0x004497e4);
    /* 004497e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004497e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004497e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004497e7: mov esi, ecx */ r_esi = r_ecx;
    /* 004497e9: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004497ed: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 004497f1: mov ecx, esi */ r_ecx = r_esi;
    /* 004497f3: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004497f9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4497feu); f_008193cc();
    /* 004497fe: mov dword ptr [esi], 0xaf6418 */ W32((u32)(r_esi), 0xaf6418u);
    /* 00449804: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00449806: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00449809: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0044980c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00449810: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00449813: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00449816: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 00449819: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 0044981c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044981e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00449822: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00449825: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00449829: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0044982c: je 0x449856 */ if (fZ) goto L_00449856;
L_0044982e:; BB(0x0044982e);
    /* 0044982e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00449831: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00449834: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00449837: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0044983a: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0044983d: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
L_00449840:; BB(0x00449840);
    /* 00449840: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00449844: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 0044984b: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 0044984e: mov eax, esi */ r_eax = r_esi;
    /* 00449850: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00449851: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449852: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00449853: ret 0x18 */ FN_RET(0x004497e4); r_esp += 28; return;
L_00449856:; BB(0x00449856);
    /* 00449856: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449858: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 0044985b: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0044985e: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 00449861: jmp 0x449840 */ goto L_00449840;
}

void f_00449864(void) /* sub_449864 */
{
    FN_ENTER(0x00449864);
    /* 00449864: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449867: mov edx, ecx */ r_edx = r_ecx;
    /* 00449869: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 0044986c: fadd dword ptr [edx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x24u));
    /* 0044986f: fcom dword ptr [0x8fe85c] */ fx_compare(ST(0), R_F32((u32)(0x8fe85cu))); 
    /* 00449875: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00449877: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 0044987a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044987b: jb 0x449966 */ if (fC) goto L_00449966;
L_00449881:; BB(0x00449881);
    /* 00449881: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00449885: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00449889: mov esi, edx */ r_esi = r_edx;
    /* 0044988b: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 0044988e: mov ebx, eax */ r_ebx = r_eax;
    /* 00449890: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
L_00449894:; BB(0x00449894);
    /* 00449894: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x449899u); f_008587a5();
    /* 00449899: fld dword ptr [0x8fe854] */ FPUSH(R_F32((u32)(0x8fe854u)));
    /* 0044989f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004498a3: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 004498a7: fdiv dword ptr [0x8fe858] */ ST(0) = ST(0) / R_F32((u32)(0x8fe858u));
    /* 004498ad: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004498af: fmul dword ptr [0x8fe850] */ ST(0) = ST(0) * R_F32((u32)(0x8fe850u));
    /* 004498b5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004498b7: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 004498bb: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 004498c0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004498c5: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004498c9: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 004498cd: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 004498d1: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004498d5: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 004498d8: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 004498dc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004498df: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 004498e2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004498e6: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004498e9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004498ed: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4498f2u); f_008587a5();
    /* 004498f2: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004498f6: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004498fa: fdiv dword ptr [0x8fe858] */ ST(0) = ST(0) / R_F32((u32)(0x8fe858u));
    /* 00449900: fmul dword ptr [esi + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x44u));
    /* 00449903: mov ecx, edi */ r_ecx = r_edi;
    /* 00449905: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00449909: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x44990eu); f_0082ddd8();
    /* 0044990e: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 00449912: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00449915: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00449918: mov ecx, edi */ r_ecx = r_edi;
    /* 0044991a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44991fu); f_0082dcbc();
    /* 0044991f: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00449923: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00449925: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00449929: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0044992d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00449930: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00449933: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449934: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449935: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x44993au); f_0050bab4();
    /* 0044993a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044993d: fld dword ptr [0x8fe84c] */ FPUSH(R_F32((u32)(0x8fe84cu)));
    /* 00449943: fadd dword ptr [esi + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x28u));
    /* 00449946: fcom dword ptr [0x8fe85c] */ fx_compare(ST(0), R_F32((u32)(0x8fe85cu))); 
    /* 0044994c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044994e: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 00449951: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00449952: jae 0x449894 */ if (!fC) goto L_00449894;
L_00449958:; BB(0x00449958);
    /* 00449958: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0044995c: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00449960: mov edx, esi */ r_edx = r_esi;
    /* 00449962: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00449966:; BB(0x00449966);
    /* 00449966: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00449969: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044996c: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0044996f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00449971: jle 0x449977 */ if ((fZ||fS!=fO)) goto L_00449977;
L_00449973:; BB(0x00449973);
    /* 00449973: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00449976: ret  */ FN_RET(0x00449864); r_esp += 4; return;
L_00449977:; BB(0x00449977);
    /* 00449977: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044997b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00449980: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00449984: jmp 0x449973 */ goto L_00449973;
}

void f_00449988(void) /* sub_449988 */
{
    FN_ENTER(0x00449988);
    /* 00449988: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449989: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044998b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044998d: call 0x4499ac */ r_esp -= 4; W32(r_esp, 0x449992u); f_004499ac();
    /* 00449992: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00449996: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449998: jne 0x44999e */ if (!fZ) goto L_0044999e;
L_0044999a:; BB(0x0044999a);
    /* 0044999a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044999b: ret 4 */ FN_RET(0x00449988); r_esp += 8; return;
L_0044999e:; BB(0x0044999e);
    /* 0044999e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044999f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4499a4u); f_005c2f74();
    /* 004499a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004499a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004499a6: ret 4 */ FN_RET(0x00449988); r_esp += 8; return;
}

void f_004499ac(void) /* sub_4499AC */
{
    FN_ENTER(0x004499ac);
    /* 004499ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004499ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004499af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004499b1: push 0x8cea52 */ { u32 v = 0x8cea52u; r_esp -= 4; W32(r_esp, v); }
    /* 004499b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004499bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004499bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004499c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004499c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004499ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004499cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004499d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004499d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004499d6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004499d9: mov dword ptr [eax], 0xaf64b0 */ W32((u32)(r_eax), 0xaf64b0u);
    /* 004499df: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004499e2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004499e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004499ec: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4499f1u); f_008171e8();
    /* 004499f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004499f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004499fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004499fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004499fe: ret  */ FN_RET(0x004499ac); r_esp += 4; return;
}

void f_00449a48(void) /* sub_449A48 */
{
    FN_ENTER(0x00449a48);
    /* 00449a48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449a49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00449a4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00449a4d: call 0x449a6c */ r_esp -= 4; W32(r_esp, 0x449a52u); f_00449a6c();
    /* 00449a52: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00449a56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449a58: jne 0x449a5e */ if (!fZ) goto L_00449a5e;
L_00449a5a:; BB(0x00449a5a);
    /* 00449a5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00449a5b: ret 4 */ FN_RET(0x00449a48); r_esp += 8; return;
L_00449a5e:; BB(0x00449a5e);
    /* 00449a5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449a5f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x449a64u); f_005c2f74();
    /* 00449a64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00449a65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00449a66: ret 4 */ FN_RET(0x00449a48); r_esp += 8; return;
}

void f_00449a6c(void) /* sub_449A6C */
{
    FN_ENTER(0x00449a6c);
    /* 00449a6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449a6d: mov ebp, esp */ r_ebp = r_esp;
    /* 00449a6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00449a71: push 0x8cea96 */ { u32 v = 0x8cea96u; r_esp -= 4; W32(r_esp, v); }
    /* 00449a76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00449a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449a7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00449a84: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449a87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00449a8a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00449a8d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00449a90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00449a93: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00449a96: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449a99: mov dword ptr [eax], 0xaf64c0 */ W32((u32)(r_eax), 0xaf64c0u);
    /* 00449a9f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00449aa2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00449aa9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449aac: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x449ab1u); f_008171e8();
    /* 00449ab1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00449ab4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00449abb: mov esp, ebp */ r_esp = r_ebp;
    /* 00449abd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449abe: ret  */ FN_RET(0x00449a6c); r_esp += 4; return;
}

void f_00449ac0(void) /* sub_449AC0 */
{
    FN_ENTER(0x00449ac0);
    /* 00449ac0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00449ac1: mov edi, ecx */ r_edi = r_ecx;
    /* 00449ac3: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 00449ac9: mov ecx, edi */ r_ecx = r_edi;
    /* 00449acb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x449ad0u); f_008193cc();
    /* 00449ad0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00449ad4: mov dword ptr [edi], 0xaf64b0 */ W32((u32)(r_edi), 0xaf64b0u);
    /* 00449ada: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 00449add: mov eax, 0xff */ r_eax = 0xffu;
    /* 00449ae2: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 00449ae9: mov byte ptr [edi + 0x22], al */ W8((u32)(r_edi+0x22u), (u8)r_eax);
    /* 00449aec: mov byte ptr [edi + 0x21], al */ W8((u32)(r_edi+0x21u), (u8)r_eax);
    /* 00449aef: mov byte ptr [edi + 0x20], al */ W8((u32)(r_edi+0x20u), (u8)r_eax);
    /* 00449af2: mov dword ptr [0xa44c40], 0 */ W32((u32)(0xa44c40u), 0x0u);
    /* 00449afc: mov eax, edi */ r_eax = r_edi;
    /* 00449afe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00449aff: ret 8 */ FN_RET(0x00449ac0); r_esp += 12; return;
}

void f_00449b04(void) /* sub_449B04 */
{
    FN_ENTER(0x00449b04);
    /* 00449b04: fld dword ptr [0x8fe874] */ FPUSH(R_F32((u32)(0x8fe874u)));
    /* 00449b0a: fadd dword ptr [ecx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x1cu));
    /* 00449b0d: fcom dword ptr [0x8fe870] */ fx_compare(ST(0), R_F32((u32)(0x8fe870u))); 
    /* 00449b13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00449b15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00449b16: jb 0x449b38 */ if (fC) goto L_00449b38;
L_00449b18:; BB(0x00449b18);
    /* 00449b18: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00449b1a: mov eax, 0x437f0000 */ r_eax = 0x437f0000u;
    /* 00449b1f: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00449b22: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 00449b25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449b27: je 0x449b3c */ if (fZ) goto L_00449b3c;
L_00449b29:; BB(0x00449b29);
    /* 00449b29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449b2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449b2cu); call_ind(t); }
    /* 00449b2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00449b2d:; BB(0x00449b2d);
    /* 00449b2d: mov dword ptr [0xa44c40], 1 */ W32((u32)(0xa44c40u), 0x1u);
    /* 00449b37: ret  */ FN_RET(0x00449b04); r_esp += 4; return;
L_00449b38:; BB(0x00449b38);
    /* 00449b38: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 00449b3b: ret  */ FN_RET(0x00449b04); r_esp += 4; return;
L_00449b3c:; BB(0x00449b3c);
    /* 00449b3c: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00449b40: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449b45: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00449b49: jmp 0x449b2d */ goto L_00449b2d;
}

void f_00449b4c(void) /* sub_449B4C */
{
    FN_ENTER(0x00449b4c);
    /* 00449b4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00449b4d: mov edi, ecx */ r_edi = r_ecx;
    /* 00449b4f: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 00449b55: mov ecx, edi */ r_ecx = r_edi;
    /* 00449b57: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x449b5cu); f_008193cc();
    /* 00449b5c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00449b60: mov dword ptr [edi], 0xaf64c0 */ W32((u32)(r_edi), 0xaf64c0u);
    /* 00449b66: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 00449b69: mov eax, 0xff */ r_eax = 0xffu;
    /* 00449b6e: mov dword ptr [edi + 0x1c], 0x437f0000 */ W32((u32)(r_edi+0x1cu), 0x437f0000u);
    /* 00449b75: mov byte ptr [edi + 0x22], al */ W8((u32)(r_edi+0x22u), (u8)r_eax);
    /* 00449b78: mov byte ptr [edi + 0x21], al */ W8((u32)(r_edi+0x21u), (u8)r_eax);
    /* 00449b7b: mov byte ptr [edi + 0x20], al */ W8((u32)(r_edi+0x20u), (u8)r_eax);
    /* 00449b7e: mov dword ptr [0xa44c3c], 0 */ W32((u32)(0xa44c3cu), 0x0u);
    /* 00449b88: mov eax, edi */ r_eax = r_edi;
    /* 00449b8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00449b8b: ret 8 */ FN_RET(0x00449b4c); r_esp += 12; return;
}

void f_00449b90(void) /* sub_449B90 */
{
    FN_ENTER(0x00449b90);
    /* 00449b90: fld dword ptr [0x8fe868] */ FPUSH(R_F32((u32)(0x8fe868u)));
    /* 00449b96: fadd dword ptr [ecx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x1cu));
    /* 00449b99: fcom dword ptr [0x8fe864] */ fx_compare(ST(0), R_F32((u32)(0x8fe864u))); 
    /* 00449b9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00449ba1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00449ba2: ja 0x449bc1 */ if ((!fC&&!fZ)) goto L_00449bc1;
L_00449ba4:; BB(0x00449ba4);
    /* 00449ba4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00449ba6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00449ba8: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00449bab: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 00449bae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449bb0: je 0x449bc5 */ if (fZ) goto L_00449bc5;
L_00449bb2:; BB(0x00449bb2);
    /* 00449bb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449bb3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449bb5u); call_ind(t); }
    /* 00449bb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00449bb6:; BB(0x00449bb6);
    /* 00449bb6: mov dword ptr [0xa44c3c], 1 */ W32((u32)(0xa44c3cu), 0x1u);
    /* 00449bc0: ret  */ FN_RET(0x00449b90); r_esp += 4; return;
L_00449bc1:; BB(0x00449bc1);
    /* 00449bc1: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 00449bc4: ret  */ FN_RET(0x00449b90); r_esp += 4; return;
L_00449bc5:; BB(0x00449bc5);
    /* 00449bc5: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00449bc9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449bce: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00449bd2: jmp 0x449bb6 */ goto L_00449bb6;
}

void f_00449bd4(void) /* sub_449BD4 */
{
    FN_ENTER(0x00449bd4);
    /* 00449bd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449bd5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00449bd7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00449bd9: call 0x449bf8 */ r_esp -= 4; W32(r_esp, 0x449bdeu); f_00449bf8();
    /* 00449bde: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00449be2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449be4: jne 0x449bea */ if (!fZ) goto L_00449bea;
L_00449be6:; BB(0x00449be6);
    /* 00449be6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00449be7: ret 4 */ FN_RET(0x00449bd4); r_esp += 8; return;
L_00449bea:; BB(0x00449bea);
    /* 00449bea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449beb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x449bf0u); f_005c2f74();
    /* 00449bf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00449bf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00449bf2: ret 4 */ FN_RET(0x00449bd4); r_esp += 8; return;
}

void f_00449bf8(void) /* sub_449BF8 */
{
    FN_ENTER(0x00449bf8);
    /* 00449bf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449bf9: mov ebp, esp */ r_ebp = r_esp;
    /* 00449bfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00449bfd: push 0x8ceab0 */ { u32 v = 0x8ceab0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449c02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00449c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449c09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00449c10: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449c13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00449c16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00449c19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00449c1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00449c1f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00449c22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00449c29: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449c2c: movzx edx, word ptr [eax + 0x340] */ r_edx = (u32)R16((u32)(r_eax+0x340u));
    /* 00449c33: mov dword ptr [eax], 0xaf6560 */ W32((u32)(r_eax), 0xaf6560u);
    /* 00449c39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00449c3a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x449c3fu); f_0068d5a8();
    /* 00449c3f: mov ebx, eax */ r_ebx = r_eax;
    /* 00449c41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449c44: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449c46: je 0x449c7f */ if (fZ) goto L_00449c7f;
L_00449c48:; BB(0x00449c48);
    /* 00449c48: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00449c4f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449c52: jne 0x449c7f */ if (!fZ) goto L_00449c7f;
L_00449c54:; BB(0x00449c54);
    /* 00449c54: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 00449c5a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00449c5d: je 0x449c66 */ if (fZ) goto L_00449c66;
L_00449c5f:; BB(0x00449c5f);
    /* 00449c5f: mov edx, 1 */ r_edx = 0x1u;
    /* 00449c64: jmp 0x449c68 */ goto L_00449c68;
L_00449c66:; BB(0x00449c66);
    /* 00449c66: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00449c68:; BB(0x00449c68);
    /* 00449c68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449c6a: je 0x449c73 */ if (fZ) goto L_00449c73;
L_00449c6c:; BB(0x00449c6c);
    /* 00449c6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00449c6e: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x449c73u); f_00685514();
L_00449c73:; BB(0x00449c73);
    /* 00449c73: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00449c76: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00449c7c: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_00449c7f:; BB(0x00449c7f);
    /* 00449c7f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449c82: mov dword ptr [0xa4479c], 0 */ W32((u32)(0xa4479cu), 0x0u);
    /* 00449c8c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x449c91u); f_007b9c8c();
    /* 00449c91: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00449c98: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449c9b: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x449ca0u); f_0052bf84();
    /* 00449ca0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00449ca3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00449ca6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00449cad: mov esp, ebp */ r_esp = r_ebp;
    /* 00449caf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449cb0: ret  */ FN_RET(0x00449bf8); r_esp += 4; return;
}

void f_00449bff(void)
{
    FN_ENTER(0x00449bff);
    /* 00449bff: ljmp 0:0xa164008c */ UNSUP(0x00449bff, "ljmp 0:0xa164008c");
    /* 00449c06: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00449c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449c09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00449c10: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449c13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00449c16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00449c19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00449c1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00449c1f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00449c22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00449c29: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449c2c: movzx edx, word ptr [eax + 0x340] */ r_edx = (u32)R16((u32)(r_eax+0x340u));
    /* 00449c33: mov dword ptr [eax], 0xaf6560 */ W32((u32)(r_eax), 0xaf6560u);
    /* 00449c39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00449c3a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x449c3fu); f_0068d5a8();
    /* 00449c3f: mov ebx, eax */ r_ebx = r_eax;
    /* 00449c41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449c44: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449c46: je 0x449c7f */ if (fZ) goto L_00449c7f;
L_00449c48:; BB(0x00449c48);
    /* 00449c48: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00449c4f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449c52: jne 0x449c7f */ if (!fZ) goto L_00449c7f;
L_00449c54:; BB(0x00449c54);
    /* 00449c54: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 00449c5a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00449c5d: je 0x449c66 */ if (fZ) goto L_00449c66;
L_00449c5f:; BB(0x00449c5f);
    /* 00449c5f: mov edx, 1 */ r_edx = 0x1u;
    /* 00449c64: jmp 0x449c68 */ goto L_00449c68;
L_00449c66:; BB(0x00449c66);
    /* 00449c66: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00449c68:; BB(0x00449c68);
    /* 00449c68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449c6a: je 0x449c73 */ if (fZ) goto L_00449c73;
L_00449c6c:; BB(0x00449c6c);
    /* 00449c6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00449c6e: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x449c73u); f_00685514();
L_00449c73:; BB(0x00449c73);
    /* 00449c73: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00449c76: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00449c7c: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_00449c7f:; BB(0x00449c7f);
    /* 00449c7f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449c82: mov dword ptr [0xa4479c], 0 */ W32((u32)(0xa4479cu), 0x0u);
    /* 00449c8c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x449c91u); f_007b9c8c();
    /* 00449c91: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00449c98: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449c9b: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x449ca0u); f_0052bf84();
    /* 00449ca0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00449ca3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00449ca6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00449cad: mov esp, ebp */ r_esp = r_ebp;
    /* 00449caf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449cb0: ret  */ FN_RET(0x00449bff); r_esp += 4; return;
}

void f_00449cb4(void) /* sub_449CB4 */
{
    FN_ENTER(0x00449cb4);
    /* 00449cb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449cb5: mov ebp, esp */ r_ebp = r_esp;
    /* 00449cb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00449cb9: push 0x8ceacc */ { u32 v = 0x8ceaccu; r_esp -= 4; W32(r_esp, v); }
    /* 00449cbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00449cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449cc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00449ccc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449ccf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00449cd2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00449cd5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00449cd8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00449cdb: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00449cde: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00449ce2: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00449ce6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00449ce9: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00449cec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00449ced: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00449cf0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00449cf3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00449cf6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00449cf9: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x449cfeu); f_0052c3fc();
    /* 00449cfe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00449d05: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00449d08: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00449d0b: mov dword ptr [edx], 0xaf6560 */ W32((u32)(r_edx), 0xaf6560u);
    /* 00449d11: mov eax, dword ptr [0x9a55bc] */ r_eax = R32((u32)(0x9a55bcu));
    /* 00449d16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449d17: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00449d1a: mov word ptr [edx + 0x340], cx */ W16((u32)(r_edx+0x340u), (u16)r_ecx);
    /* 00449d21: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x449d26u); f_0068d5a8();
    /* 00449d26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00449d27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449d29: je 0x449e16 */ if (fZ) goto L_00449e16;
L_00449d2f:; BB(0x00449d2f);
    /* 00449d2f: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00449d32: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00449d35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00449d37: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00449d3a: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 00449d3d: push 0x9a55c0 */ { u32 v = 0x9a55c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449d42: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 00449d45: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 00449d48: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00449d4b: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00449d4e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x449d53u); f_007b9a88();
    /* 00449d53: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00449d56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449d59: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00449d5c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00449d5f: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00449d63: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 00449d67: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 00449d71: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00449d75: mov word ptr [ecx + 0x28], bx */ W16((u32)(r_ecx+0x28u), (u16)r_ebx);
    /* 00449d79: movzx edi, word ptr [esi + 0x2a] */ r_edi = (u32)R16((u32)(r_esi+0x2au));
    /* 00449d7d: mov word ptr [ecx + 0x2a], di */ W16((u32)(r_ecx+0x2au), (u16)r_edi);
    /* 00449d81: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x449d86u); f_007b4f54();
    /* 00449d86: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00449d89: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00449d8b: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x449d90u); f_00787550();
    /* 00449d90: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00449d95: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00449d9a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00449d9d: mov dword ptr [ecx + 0x3c], 0xc1c80000 */ W32((u32)(r_ecx+0x3cu), 0xc1c80000u);
    /* 00449da4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00449da6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449da7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449da8: push dword ptr [0xa44c58] */ { u32 v = R32((u32)(0xa44c58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00449dae: call 0x770da4 */ r_esp -= 4; W32(r_esp, 0x449db3u); f_00770da4();
    /* 00449db3: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00449db6: mov eax, dword ptr [0xa44bb4] */ r_eax = R32((u32)(0xa44bb4u));
    /* 00449dbb: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00449dbe: or edx, 0x48000 */ {  u32 a = r_edx; u32 b = 0x48000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00449dc4: and edx, 0xfffff5ff */ {  u32 a = r_edx; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449dca: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00449dcd: mov ecx, 7 */ r_ecx = 0x7u;
    /* 00449dd2: mov dword ptr [ebx + 0x37c], ecx */ W32((u32)(r_ebx+0x37cu), r_ecx);
    /* 00449dd8: mov word ptr [ebx + 0x32e], cx */ W16((u32)(r_ebx+0x32eu), (u16)r_ecx);
    /* 00449ddf: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 00449de5: mov esi, dword ptr [edi + 0x12c] */ r_esi = R32((u32)(r_edi+0x12cu));
    /* 00449deb: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00449dee: mov dword ptr [0xa44c60], esi */ W32((u32)(0xa44c60u), r_esi);
    /* 00449df4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00449df7: mov eax, ebx */ r_eax = r_ebx;
    /* 00449df9: mov dword ptr [ebx + 0x398], 0 */ W32((u32)(r_ebx+0x398u), 0x0u);
    /* 00449e03: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00449e06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00449e09: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00449e10: mov esp, ebp */ r_esp = r_ebp;
    /* 00449e12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449e13: ret 0x10 */ FN_RET(0x00449cb4); r_esp += 20; return;
L_00449e16:; BB(0x00449e16);
    /* 00449e16: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00449e19: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00449e1c: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00449e20: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00449e26: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00449e2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00449e2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00449e34: mov esp, ebp */ r_esp = r_ebp;
    /* 00449e36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449e37: ret 0x10 */ FN_RET(0x00449cb4); r_esp += 20; return;
}

void f_00449e3c(void) /* sub_449E3C */
{
    FN_ENTER(0x00449e3c);
    /* 00449e3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449e3d: mov esi, ecx */ r_esi = r_ecx;
    /* 00449e3f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x449e44u); f_004f7c84();
    /* 00449e44: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449e47: je 0x449f15 */ if (fZ) goto L_00449f15;
L_00449e4d:; BB(0x00449e4d);
    /* 00449e4d: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00449e54: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449e57: je 0x449ea2 */ if (fZ) goto L_00449ea2;
L_00449e59:; BB(0x00449e59);
    /* 00449e59: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00449e5b: mov ecx, esi */ r_ecx = r_esi;
    /* 00449e5d: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x449e63u); call_ind(t); }
    /* 00449e63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449e65: je 0x449e7a */ if (fZ) goto L_00449e7a;
L_00449e67:; BB(0x00449e67);
    /* 00449e67: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00449e69: mov ecx, esi */ r_ecx = r_esi;
    /* 00449e6b: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x449e71u); call_ind(t); }
    /* 00449e71: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00449e78: jmp 0x449ea2 */ goto L_00449ea2;
L_00449e7a:; BB(0x00449e7a);
    /* 00449e7a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00449e7c: mov ecx, esi */ r_ecx = r_esi;
    /* 00449e7e: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x449e84u); call_ind(t); }
    /* 00449e84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449e86: jne 0x449e91 */ if (!fZ) goto L_00449e91;
L_00449e88:; BB(0x00449e88);
    /* 00449e88: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00449e8f: jmp 0x449ea2 */ goto L_00449ea2;
L_00449e91:; BB(0x00449e91);
    /* 00449e91: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00449e93: mov ecx, esi */ r_ecx = r_esi;
    /* 00449e95: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x449e9bu); call_ind(t); }
    /* 00449e9b: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
L_00449ea2:; BB(0x00449ea2);
    /* 00449ea2: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 00449ea8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449eaa: je 0x449edf */ if (fZ) goto L_00449edf;
L_00449eac:; BB(0x00449eac);
    /* 00449eac: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00449eb2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449eb5: je 0x449ece */ if (fZ) goto L_00449ece;
L_00449eb7:; BB(0x00449eb7);
    /* 00449eb7: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 00449ec1: mov ecx, esi */ r_ecx = r_esi;
    /* 00449ec3: call 0x449f20 */ r_esp -= 4; W32(r_esp, 0x449ec8u); f_00449f20();
    /* 00449ec8: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
L_00449ece:; BB(0x00449ece);
    /* 00449ece: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 00449ed8: mov word ptr [esi + 0x32e], dx */ W16((u32)(r_esi+0x32eu), (u16)r_edx);
L_00449edf:; BB(0x00449edf);
    /* 00449edf: mov ecx, esi */ r_ecx = r_esi;
    /* 00449ee1: call 0x449f20 */ r_esp -= 4; W32(r_esp, 0x449ee6u); f_00449f20();
    /* 00449ee6: mov ecx, esi */ r_ecx = r_esi;
    /* 00449ee8: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x449eedu); f_0078730c();
    /* 00449eed: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00449eef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449ef0: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00449ef6: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00449efc: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00449eff: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00449f05: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00449f08: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 00449f0b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x449f10u); f_006946a8();
    /* 00449f10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00449f13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00449f14: ret  */ FN_RET(0x00449e3c); r_esp += 4; return;
L_00449f15:; BB(0x00449f15);
    /* 00449f15: mov ecx, esi */ r_ecx = r_esi;
    /* 00449f17: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x449f1cu); f_0061cdb0();
    /* 00449f1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00449f1d: ret  */ FN_RET(0x00449e3c); r_esp += 4; return;
}

void f_00449f20(void) /* sub_449F20 */
{
    FN_ENTER(0x00449f20);
    /* 00449f20: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00449f27: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449f2a: je 0x449f4d */ if (fZ) goto L_00449f4d;
L_00449f2c:; BB(0x00449f2c);
    /* 00449f2c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449f2f: je 0x449f47 */ if (fZ) goto L_00449f47;
L_00449f31:; BB(0x00449f31);
    /* 00449f31: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449f34: jne 0x449f3c */ if (!fZ) goto L_00449f3c;
L_00449f36:; BB(0x00449f36);
    /* 00449f36: call 0x44a0d8 */ r_esp -= 4; W32(r_esp, 0x449f3bu); f_0044a0d8();
    /* 00449f3b: ret  */ FN_RET(0x00449f20); r_esp += 4; return;
L_00449f3c:; BB(0x00449f3c);
    /* 00449f3c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00449f3f: jne 0x449f4c */ if (!fZ) goto L_00449f4c;
L_00449f41:; BB(0x00449f41);
    /* 00449f41: call 0x449f54 */ r_esp -= 4; W32(r_esp, 0x449f46u); f_00449f54();
    /* 00449f46: ret  */ FN_RET(0x00449f20); r_esp += 4; return;
L_00449f47:; BB(0x00449f47);
    /* 00449f47: call 0x44a168 */ r_esp -= 4; W32(r_esp, 0x449f4cu); f_0044a168();
L_00449f4c:; BB(0x00449f4c);
    /* 00449f4c: ret  */ FN_RET(0x00449f20); r_esp += 4; return;
L_00449f4d:; BB(0x00449f4d);
    /* 00449f4d: call 0x44a204 */ r_esp -= 4; W32(r_esp, 0x449f52u); f_0044a204();
    /* 00449f52: ret  */ FN_RET(0x00449f20); r_esp += 4; return;
}

void f_00449f54(void) /* sub_449F54 */
{
    FN_ENTER(0x00449f54);
    /* 00449f54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00449f55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449f56: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449f59: mov edi, ecx */ r_edi = r_ecx;
    /* 00449f5b: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00449f61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449f63: je 0x449fa5 */ if (fZ) goto L_00449fa5;
L_00449f65:; BB(0x00449f65);
    /* 00449f65: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449f68: jne 0x44a01b */ if (!fZ) goto L_0044a01b;
L_00449f6e:; BB(0x00449f6e);
    /* 00449f6e: movsx eax, word ptr [edi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x344u));
    /* 00449f75: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00449f77: jne 0x44a021 */ if (!fZ) goto L_0044a021;
L_00449f7d:; BB(0x00449f7d);
    /* 00449f7d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00449f80: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 00449f87: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00449f8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00449f8c: jg 0x44a01b */ if ((!fZ&&fS==fO)) goto L_0044a01b;
L_00449f92:; BB(0x00449f92);
    /* 00449f92: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00449f96: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00449f9b: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00449f9f: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00449fa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449fa3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00449fa4: ret  */ FN_RET(0x00449f54); r_esp += 4; return;
L_00449fa5:; BB(0x00449fa5);
    /* 00449fa5: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00449fa8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00449faa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449fab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449fac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00449fad: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00449faf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x449fb4u); f_00814298();
    /* 00449fb4: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00449fb7: lea ebp, [edi + 0x300] */ r_ebp = (u32)(r_edi+0x300u);
    /* 00449fbd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449fbe: push dword ptr [0xa44c60] */ { u32 v = R32((u32)(0xa44c60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00449fc4: push 0x9a55ec */ { u32 v = 0x9a55ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00449fc9: push dword ptr [0xa44c5c] */ { u32 v = R32((u32)(0xa44c5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00449fcf: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x449fd4u); f_00578aa0();
    /* 00449fd4: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00449fd7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449fd8: push dword ptr [0xa44c60] */ { u32 v = R32((u32)(0xa44c60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00449fde: push 0x9a55ec */ { u32 v = 0x9a55ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00449fe3: push dword ptr [0xa44c5c] */ { u32 v = R32((u32)(0xa44c5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00449fe9: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x449feeu); f_00578aa0();
    /* 00449fee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449fef: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x449ff4u); f_005787d0();
    /* 00449ff4: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449ff7: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00449ffb: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0044a005: mov eax, 0xc */ r_eax = 0xcu;
    /* 0044a00a: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0044a011: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0044a017: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
L_0044a01b:; BB(0x0044a01b);
    /* 0044a01b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044a01e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a01f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044a020: ret  */ FN_RET(0x00449f54); r_esp += 4; return;
L_0044a021:; BB(0x0044a021);
    /* 0044a021: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x44a026u); f_008587a5();
    /* 0044a026: fld dword ptr [0x8fe8a4] */ FPUSH(R_F32((u32)(0x8fe8a4u)));
    /* 0044a02c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0044a030: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0044a034: fdiv dword ptr [0x8fe8a8] */ ST(0) = ST(0) / R_F32((u32)(0x8fe8a8u));
    /* 0044a03a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0044a03c: fmul dword ptr [0x8fe8a0] */ ST(0) = ST(0) * R_F32((u32)(0x8fe8a0u));
    /* 0044a042: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0044a044: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0044a048: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0044a04d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044a052: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0044a056: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0044a05a: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044a05e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0044a062: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0044a066: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044a068: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x44a06du); f_0082ddd8();
    /* 0044a06d: fld dword ptr [0x8fe89c] */ FPUSH(R_F32((u32)(0x8fe89cu)));
    /* 0044a073: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0044a075: fadd dword ptr [edi + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x300u));
    /* 0044a07b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044a07e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x44a083u); f_008587a5();
    /* 0044a083: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0044a087: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0044a08b: fdiv dword ptr [0x8fe8a8] */ ST(0) = ST(0) / R_F32((u32)(0x8fe8a8u));
    /* 0044a091: fmul dword ptr [0x8fe89c] */ ST(0) = ST(0) * R_F32((u32)(0x8fe89cu));
    /* 0044a097: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044a099: fadd dword ptr [edi + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x304u));
    /* 0044a09f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044a0a3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44a0a8u); f_0082dcbc();
    /* 0044a0a8: fld dword ptr [0x8fe89c] */ FPUSH(R_F32((u32)(0x8fe89cu)));
    /* 0044a0ae: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0044a0b0: fadd dword ptr [edi + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x308u));
    /* 0044a0b6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0044a0ba: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0044a0bd: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a0c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a0c3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x44a0c8u); f_0050b510();
    /* 0044a0c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a0cb: movsx eax, word ptr [edi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x344u));
    /* 0044a0d2: jmp 0x449f7d */ goto L_00449f7d;
}

