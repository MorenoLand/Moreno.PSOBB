#include "protos.h"

void f_00742034(void) /* sub_742034 */
{
    FN_ENTER(0x00742034);
    /* 00742034: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00742035: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00742038: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74203du); f_0068d5a8();
    /* 0074203d: mov ebp, eax */ r_ebp = r_eax;
    /* 0074203f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00742042: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742044: je 0x74206a */ if (fZ) goto L_0074206a;
L_00742046:; BB(0x00742046);
    /* 00742046: mov edx, ebp */ r_edx = r_ebp;
    /* 00742048: add edx, 0x930 */ {  u32 a = r_edx; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0074204e: je 0x74206a */ if (fZ) goto L_0074206a;
L_00742050:; BB(0x00742050);
    /* 00742050: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x742055u); f_00687c48();
    /* 00742055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00742057: jne 0x742063 */ if (!fZ) goto L_00742063;
L_00742059:; BB(0x00742059);
    /* 00742059: mov eax, dword ptr [ebp + 0x964] */ r_eax = R32((u32)(r_ebp+0x964u));
    /* 0074205f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00742061: je 0x74206a */ if (fZ) goto L_0074206a;
L_00742063:; BB(0x00742063);
    /* 00742063: mov eax, 1 */ r_eax = 0x1u;
    /* 00742068: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742069: ret  */ FN_RET(0x00742034); r_esp += 4; return;
L_0074206a:; BB(0x0074206a);
    /* 0074206a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074206c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074206d: ret  */ FN_RET(0x00742034); r_esp += 4; return;
}

void f_00742070(void) /* sub_742070 */
{
    FN_ENTER(0x00742070);
    /* 00742070: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 00742074: movzx edx, byte ptr [eax + 0x972f78] */ r_edx = (u32)R8((u32)(r_eax+0x972f78u));
    /* 0074207b: mov byte ptr [ecx + 0x1d], dl */ W8((u32)(r_ecx+0x1du), (u8)r_edx);
    /* 0074207e: ret  */ FN_RET(0x00742070); r_esp += 4; return;
}

void f_00742080(void) /* sub_742080 */
{
    FN_ENTER(0x00742080);
    /* 00742080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00742081: mov ebp, esp */ r_ebp = r_esp;
    /* 00742083: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00742085: push 0x8f22b0 */ { u32 v = 0x8f22b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074208a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00742090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742091: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00742098: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074209b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074209e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007420a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007420a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007420a7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007420aa: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007420ad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007420b4: mov eax, ecx */ r_eax = r_ecx;
    /* 007420b6: mov dword ptr [eax], 0xb41680 */ W32((u32)(r_eax), 0xb41680u);
    /* 007420bc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007420be:; BB(0x007420be);
    /* 007420be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007420c1: mov ecx, dword ptr [eax + esi*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x64u));
    /* 007420c5: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 007420c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007420ca: je 0x7420dc */ if (fZ) goto L_007420dc;
L_007420cc:; BB(0x007420cc);
    /* 007420cc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7420d1u); f_007127b0();
    /* 007420d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007420d4: mov dword ptr [eax + ebx*2 + 0x64], 0 */ W32((u32)(r_eax+r_ebx*2+0x64u), 0x0u);
L_007420dc:; BB(0x007420dc);
    /* 007420dc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007420df: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007420e2: jl 0x7420be */ if ((fS!=fO)) goto L_007420be;
L_007420e4:; BB(0x007420e4);
    /* 007420e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007420eb: mov ecx, eax */ r_ecx = r_eax;
    /* 007420ed: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x7420f2u); f_00710c28();
    /* 007420f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007420f5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007420f7: jne 0x742112 */ if (!fZ) goto L_00742112;
L_007420f9:; BB(0x007420f9);
    /* 007420f9: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007420fc: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007420ff: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00742102: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00742105: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074210c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074210e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074210f: ret 4 */ FN_RET(0x00742080); r_esp += 8; return;
L_00742112:; BB(0x00742112);
    /* 00742112: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00742115: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742116: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74211bu); f_005c2f74();
    /* 0074211b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074211c: jmp 0x7420f9 */ goto L_007420f9;
}

void f_00742120(void) /* sub_742120 */
{
    FN_ENTER(0x00742120);
    /* 00742120: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00742121: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00742124: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00742127: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00742129: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 00742130: mov ecx, esi */ r_ecx = r_esi;
    /* 00742132: mov dword ptr [esi + 0x24], 0 */ W32((u32)(r_esi+0x24u), 0x0u);
    /* 00742139: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x74213cu); call_ind(t); }
    /* 0074213c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00742141: push 0xff00ff15 */ { u32 v = 0xff00ff15u; r_esp -= 4; W32(r_esp, v); }
    /* 00742146: mov ecx, esi */ r_ecx = r_esi;
    /* 00742148: call 0x72a4d8 */ r_esp -= 4; W32(r_esp, 0x74214du); f_0072a4d8();
    /* 0074214d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074214e: ret  */ FN_RET(0x00742120); r_esp += 4; return;
}

void f_00742150(void) /* sub_742150 */
{
    FN_ENTER(0x00742150);
    /* 00742150: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00742155: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00742158: push 0xff008cfc */ { u32 v = 0xff008cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074215d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00742160: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00742167: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0074216e: call 0x72a4d8 */ r_esp -= 4; W32(r_esp, 0x742173u); f_0072a4d8();
    /* 00742173: ret  */ FN_RET(0x00742150); r_esp += 4; return;
}

void f_00742174(void) /* sub_742174 */
{
    FN_ENTER(0x00742174);
    /* 00742174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742175: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00742176: mov edi, ecx */ r_edi = r_ecx;
    /* 00742178: movsx ebx, word ptr [esp + 0x10] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0074217d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00742181: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00742182: mov ecx, edi */ r_ecx = r_edi;
    /* 00742184: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00742188: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x74218du); f_00710d30();
    /* 0074218d: mov dword ptr [edi], 0xb41680 */ W32((u32)(r_edi), 0xb41680u);
    /* 00742193: mov edx, dword ptr [0x9f38d8] */ r_edx = R32((u32)(0x9f38d8u));
    /* 00742199: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0074219c: mov word ptr [edi + 0x20], bx */ W16((u32)(r_edi+0x20u), (u16)r_ebx);
    /* 007421a0: mov dword ptr [edi + 0x58], 0xbf800000 */ W32((u32)(r_edi+0x58u), 0xbf800000u);
    /* 007421a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007421a9: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 007421ac: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 007421af: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 007421b2: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 007421b5: mov dword ptr [edi + 0x70], eax */ W32((u32)(r_edi+0x70u), r_eax);
    /* 007421b8: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 007421bb: mov eax, edi */ r_eax = r_edi;
    /* 007421bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007421be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007421bf: ret 0xc */ FN_RET(0x00742174); r_esp += 16; return;
}

void f_007421c4(void) /* sub_7421C4 */
{
    FN_ENTER(0x007421c4);
    /* 007421c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007421c5: mov ebp, esp */ r_ebp = r_esp;
    /* 007421c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007421c9: push 0x8f22cc */ { u32 v = 0x8f22ccu; r_esp -= 4; W32(r_esp, v); }
    /* 007421ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007421d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007421d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007421dc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007421df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007421e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007421e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007421e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007421eb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007421ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007421f5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007421f8: mov dword ptr [eax], 0xb41680 */ W32((u32)(r_eax), 0xb41680u);
    /* 007421fe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00742200:; BB(0x00742200);
    /* 00742200: mov ecx, dword ptr [eax + esi*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x64u));
    /* 00742204: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00742207: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742209: je 0x74221b */ if (fZ) goto L_0074221b;
L_0074220b:; BB(0x0074220b);
    /* 0074220b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x742210u); f_007127b0();
    /* 00742210: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00742213: mov dword ptr [eax + ebx*2 + 0x64], 0 */ W32((u32)(r_eax+r_ebx*2+0x64u), 0x0u);
L_0074221b:; BB(0x0074221b);
    /* 0074221b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074221e: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00742221: jl 0x742200 */ if ((fS!=fO)) goto L_00742200;
L_00742223:; BB(0x00742223);
    /* 00742223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074222a: mov ecx, eax */ r_ecx = r_eax;
    /* 0074222c: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x742231u); f_00710c28();
    /* 00742231: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00742234: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00742237: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074223a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074223d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00742244: mov esp, ebp */ r_esp = r_ebp;
    /* 00742246: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742247: ret  */ FN_RET(0x007421c4); r_esp += 4; return;
}

void f_00742248(void) /* sub_742248 */
{
    FN_ENTER(0x00742248);
    /* 00742248: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00742249: mov esi, ecx */ r_esi = r_ecx;
    /* 0074224b: mov ecx, esi */ r_ecx = r_esi;
    /* 0074224d: call 0x742294 */ r_esp -= 4; W32(r_esp, 0x742252u); f_00742294();
    /* 00742252: mov ecx, esi */ r_ecx = r_esi;
    /* 00742254: call 0x742430 */ r_esp -= 4; W32(r_esp, 0x742259u); f_00742430();
    /* 00742259: mov ecx, esi */ r_ecx = r_esi;
    /* 0074225b: call 0x74253c */ r_esp -= 4; W32(r_esp, 0x742260u); f_0074253c();
    /* 00742260: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00742262: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x742267u); f_0073ec50();
    /* 00742267: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00742268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742269: mov ecx, esi */ r_ecx = r_esi;
    /* 0074226b: call 0x7426d8 */ r_esp -= 4; W32(r_esp, 0x742270u); f_007426d8();
    /* 00742270: mov ecx, esi */ r_ecx = r_esi;
    /* 00742272: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x742277u); f_00710db4();
    /* 00742277: mov ecx, esi */ r_ecx = r_esi;
    /* 00742279: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x74227eu); f_00710ee4();
    /* 0074227e: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 00742281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742282: mov ecx, esi */ r_ecx = r_esi;
    /* 00742284: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x742289u); f_0072a5ec();
    /* 00742289: mov ecx, esi */ r_ecx = r_esi;
    /* 0074228b: call 0x7429b0 */ r_esp -= 4; W32(r_esp, 0x742290u); f_007429b0();
    /* 00742290: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742291: ret  */ FN_RET(0x00742248); r_esp += 4; return;
}

void f_00742294(void) /* sub_742294 */
{
    FN_ENTER(0x00742294);
    /* 00742294: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00742295: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00742296: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00742298: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0074229b: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 0074229e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007422a0: call 0x7422c4 */ r_esp -= 4; W32(r_esp, 0x7422a5u); f_007422c4();
    /* 007422a5: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 007422a8: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007422ab: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 007422ae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007422b0: call 0x742378 */ r_esp -= 4; W32(r_esp, 0x7422b5u); f_00742378();
    /* 007422b5: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 007422b8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007422ba: call 0x742404 */ r_esp -= 4; W32(r_esp, 0x7422bfu); f_00742404();
    /* 007422bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007422c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007422c1: ret  */ FN_RET(0x00742294); r_esp += 4; return;
}

void f_007422c4(void) /* sub_7422C4 */
{
    FN_ENTER(0x007422c4);
    /* 007422c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007422c5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007422c8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007422ca: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 007422ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007422cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7422d4u); f_0068d5a8();
    /* 007422d4: mov edx, eax */ r_edx = r_eax;
    /* 007422d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007422d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007422db: je 0x742365 */ if (fZ) goto L_00742365;
L_007422e1:; BB(0x007422e1);
    /* 007422e1: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007422e4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007422e7: movsx eax, word ptr [edx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2bcu));
    /* 007422ee: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007422f1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007422f4: fst dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0));
    /* 007422f7: movsx eax, word ptr [edx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 007422fe: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00742302: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00742306: fcom dword ptr [ecx + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x24u))); 
    /* 00742309: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0074230b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0074230c: jae 0x74232b */ if (!fC) goto L_0074232b;
L_0074230e:; BB(0x0074230e);
    /* 0074230e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00742310: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00742312: mov dword ptr [ebp + 0x60], 4 */ W32((u32)(r_ebp+0x60u), 0x4u);
    /* 00742319: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0074231c: movsx eax, word ptr [edx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 00742323: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00742327: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
L_0074232b:; BB(0x0074232b);
    /* 0074232b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074232d: fmul dword ptr [0x97308c] */ ST(0) = ST(0) * R_F32((u32)(0x97308cu));
    /* 00742333: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00742335: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00742337: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 0074233a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0074233b: jae 0x742349 */ if (!fC) goto L_00742349;
L_0074233d:; BB(0x0074233d);
    /* 0074233d: mov eax, 0xff00ff15 */ r_eax = 0xff00ff15u;
    /* 00742342: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00742347: jmp 0x742353 */ goto L_00742353;
L_00742349:; BB(0x00742349);
    /* 00742349: mov eax, 0xfff2ff19 */ r_eax = 0xfff2ff19u;
    /* 0074234e: mov ebp, 0xfff2ff19 */ r_ebp = 0xfff2ff19u;
L_00742353:; BB(0x00742353);
    /* 00742353: push 0x4131999a */ { u32 v = 0x4131999au; r_esp -= 4; W32(r_esp, v); }
    /* 00742358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742359: call 0x72a4d8 */ r_esp -= 4; W32(r_esp, 0x74235eu); f_0072a4d8();
    /* 0074235e: mov eax, ebp */ r_eax = r_ebp;
    /* 00742360: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742363: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742364: ret  */ FN_RET(0x007422c4); r_esp += 4; return;
L_00742365:; BB(0x00742365);
    /* 00742365: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00742367: call 0x742120 */ r_esp -= 4; W32(r_esp, 0x74236cu); f_00742120();
    /* 0074236c: mov eax, 0xff00ff15 */ r_eax = 0xff00ff15u;
    /* 00742371: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742374: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742375: ret  */ FN_RET(0x007422c4); r_esp += 4; return;
}

void f_00742378(void) /* sub_742378 */
{
    FN_ENTER(0x00742378);
    /* 00742378: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00742379: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074237c: mov esi, ecx */ r_esi = r_ecx;
    /* 0074237e: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 00742382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742383: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x742388u); f_0068d5a8();
    /* 00742388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00742389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074238b: je 0x7423f0 */ if (fZ) goto L_007423f0;
L_0074238d:; BB(0x0074238d);
    /* 0074238d: fld dword ptr [0x973084] */ FPUSH(R_F32((u32)(0x973084u)));
    /* 00742393: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 00742396: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00742399: movsx edx, word ptr [eax + 0x2be] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2beu));
    /* 007423a0: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007423a3: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007423a6: fst dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0));
    /* 007423a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007423ab: movsx esi, word ptr [eax + 0x336] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x336u));
    /* 007423b2: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 007423b6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007423ba: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007423bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007423be: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007423c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007423c2: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 007423c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007423c6: jbe 0x7423d4 */ if ((fC||fZ)) goto L_007423d4;
L_007423c8:; BB(0x007423c8);
    /* 007423c8: mov eax, 0xff008cfc */ r_eax = 0xff008cfcu;
    /* 007423cd: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 007423d2: jmp 0x7423de */ goto L_007423de;
L_007423d4:; BB(0x007423d4);
    /* 007423d4: mov eax, 0xffffc114 */ r_eax = 0xffffc114u;
    /* 007423d9: mov esi, 0xffffc114 */ r_esi = 0xffffc114u;
L_007423de:; BB(0x007423de);
    /* 007423de: push 0x4131999a */ { u32 v = 0x4131999au; r_esp -= 4; W32(r_esp, v); }
    /* 007423e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007423e4: call 0x72a4d8 */ r_esp -= 4; W32(r_esp, 0x7423e9u); f_0072a4d8();
    /* 007423e9: mov eax, esi */ r_eax = r_esi;
    /* 007423eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007423ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007423ef: ret  */ FN_RET(0x00742378); r_esp += 4; return;
L_007423f0:; BB(0x007423f0);
    /* 007423f0: mov ecx, esi */ r_ecx = r_esi;
    /* 007423f2: call 0x742150 */ r_esp -= 4; W32(r_esp, 0x7423f7u); f_00742150();
    /* 007423f7: mov eax, 0xff008cfc */ r_eax = 0xff008cfcu;
    /* 007423fc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007423ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742400: ret  */ FN_RET(0x00742378); r_esp += 4; return;
}

void f_00742404(void) /* sub_742404 */
{
    FN_ENTER(0x00742404);
    /* 00742404: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742405: mov edi, ecx */ r_edi = r_ecx;
    /* 00742407: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0074240b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074240c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x742411u); f_0068d5a8();
    /* 00742411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00742412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00742414: je 0x74242b */ if (fZ) goto L_0074242b;
L_00742416:; BB(0x00742416);
    /* 00742416: mov edi, dword ptr [edi + 0x28] */ r_edi = R32((u32)(r_edi+0x28u));
    /* 00742419: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 0074241c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0074241e: mov ecx, eax */ r_ecx = r_eax;
    /* 00742420: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x742423u); call_ind(t); }
    /* 00742423: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742426: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00742429: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074242a: ret  */ FN_RET(0x00742404); r_esp += 4; return;
L_0074242b:; BB(0x0074242b);
    /* 0074242b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074242c: ret  */ FN_RET(0x00742404); r_esp += 4; return;
}

void f_00742430(void) /* sub_742430 */
{
    FN_ENTER(0x00742430);
    /* 00742430: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00742433: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00742436: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00742439: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0074243d: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00742443: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00742447: movsx edx, word ptr [ecx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 0074244b: call 0x74245c */ r_esp -= 4; W32(r_esp, 0x742450u); f_0074245c();
    /* 00742450: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742453: ret  */ FN_RET(0x00742430); r_esp += 4; return;
}

void f_0074244b(void)
{
    FN_ENTER(0x0074244b);
    /* 0074244b: call 0x74245c */ r_esp -= 4; W32(r_esp, 0x742450u); f_0074245c();
    /* 00742450: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742453: ret  */ FN_RET(0x0074244b); r_esp += 4; return;
}

void f_00742454(void) /* sub_742454 */
{
    FN_ENTER(0x00742454);
    /* 00742454: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00742458: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0074245c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074245d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074245e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074245f: mov edi, eax */ r_edi = r_eax;
    /* 00742461: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00742462: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x742467u); f_0068d5a8();
    /* 00742467: mov esi, eax */ r_esi = r_eax;
    /* 00742469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074246c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074246e: je 0x742517 */ if (fZ) goto L_00742517;
L_00742474:; BB(0x00742474);
    /* 00742474: mov edx, esi */ r_edx = r_esi;
    /* 00742476: add edx, 0x930 */ {  u32 a = r_edx; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0074247c: je 0x742505 */ if (fZ) goto L_00742505;
L_00742482:; BB(0x00742482);
    /* 00742482: mov ecx, esi */ r_ecx = r_esi;
    /* 00742484: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x742489u); f_006936b4();
    /* 00742489: mov ebp, eax */ r_ebp = r_eax;
    /* 0074248b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074248d: je 0x742529 */ if (fZ) goto L_00742529;
L_00742493:; BB(0x00742493);
    /* 00742493: mov edx, dword ptr [esi + 0xdf0] */ r_edx = R32((u32)(r_esi+0xdf0u));
    /* 00742499: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074249b: jne 0x7424f3 */ if (!fZ) goto L_007424f3;
L_0074249d:; BB(0x0074249d);
    /* 0074249d: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007424a1: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007424a7: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 007424ab: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 007424ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007424b0: je 0x7424c0 */ if (fZ) goto L_007424c0;
L_007424b2:; BB(0x007424b2);
    /* 007424b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007424b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007424b4: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x7424b9u); f_00858c4d();
    /* 007424b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007424bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007424be: je 0x7424cd */ if (fZ) goto L_007424cd;
L_007424c0:; BB(0x007424c0);
    /* 007424c0: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 007424c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007424c6: mov ecx, edi */ r_ecx = r_edi;
    /* 007424c8: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7424cdu); f_0072db60();
L_007424cd:; BB(0x007424cd);
    /* 007424cd: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007424cf: mov ecx, esi */ r_ecx = r_esi;
    /* 007424d1: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x7424d7u); call_ind(t); }
    /* 007424d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007424d9: je 0x7424e6 */ if (fZ) goto L_007424e6;
L_007424db:; BB(0x007424db);
    /* 007424db: mov dword ptr [edi + 0x24], 0xffff0000 */ W32((u32)(r_edi+0x24u), 0xffff0000u);
    /* 007424e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007424e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007424e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007424e5: ret  */ FN_RET(0x00742454); r_esp += 4; return;
L_007424e6:; BB(0x007424e6);
    /* 007424e6: mov edx, dword ptr [esi + 0x948] */ r_edx = R32((u32)(r_esi+0x948u));
    /* 007424ec: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 007424ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007424f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007424f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007424f2: ret  */ FN_RET(0x00742454); r_esp += 4; return;
L_007424f3:; BB(0x007424f3);
    /* 007424f3: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007424f7: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007424fd: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00742501: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742503: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742504: ret  */ FN_RET(0x00742454); r_esp += 4; return;
L_00742505:; BB(0x00742505);
    /* 00742505: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 00742509: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074250f: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00742513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742514: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742515: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742516: ret  */ FN_RET(0x00742454); r_esp += 4; return;
L_00742517:; BB(0x00742517);
    /* 00742517: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0074251b: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00742521: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00742525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742526: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742527: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742528: ret  */ FN_RET(0x00742454); r_esp += 4; return;
L_00742529:; BB(0x00742529);
    /* 00742529: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0074252d: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00742533: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00742537: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742538: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742539: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074253a: ret  */ FN_RET(0x00742454); r_esp += 4; return;
}

void f_0074245c(void)
{
    FN_ENTER(0x0074245c);
    /* 0074245c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074245d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074245e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074245f: mov edi, eax */ r_edi = r_eax;
    /* 00742461: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00742462: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x742467u); f_0068d5a8();
    /* 00742467: mov esi, eax */ r_esi = r_eax;
    /* 00742469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074246c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074246e: je 0x742517 */ if (fZ) goto L_00742517;
L_00742474:; BB(0x00742474);
    /* 00742474: mov edx, esi */ r_edx = r_esi;
    /* 00742476: add edx, 0x930 */ {  u32 a = r_edx; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0074247c: je 0x742505 */ if (fZ) goto L_00742505;
L_00742482:; BB(0x00742482);
    /* 00742482: mov ecx, esi */ r_ecx = r_esi;
    /* 00742484: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x742489u); f_006936b4();
    /* 00742489: mov ebp, eax */ r_ebp = r_eax;
    /* 0074248b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074248d: je 0x742529 */ if (fZ) goto L_00742529;
L_00742493:; BB(0x00742493);
    /* 00742493: mov edx, dword ptr [esi + 0xdf0] */ r_edx = R32((u32)(r_esi+0xdf0u));
    /* 00742499: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074249b: jne 0x7424f3 */ if (!fZ) goto L_007424f3;
L_0074249d:; BB(0x0074249d);
    /* 0074249d: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007424a1: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007424a7: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 007424ab: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 007424ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007424b0: je 0x7424c0 */ if (fZ) goto L_007424c0;
L_007424b2:; BB(0x007424b2);
    /* 007424b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007424b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007424b4: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x7424b9u); f_00858c4d();
    /* 007424b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007424bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007424be: je 0x7424cd */ if (fZ) goto L_007424cd;
L_007424c0:; BB(0x007424c0);
    /* 007424c0: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 007424c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007424c6: mov ecx, edi */ r_ecx = r_edi;
    /* 007424c8: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7424cdu); f_0072db60();
L_007424cd:; BB(0x007424cd);
    /* 007424cd: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007424cf: mov ecx, esi */ r_ecx = r_esi;
    /* 007424d1: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x7424d7u); call_ind(t); }
    /* 007424d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007424d9: je 0x7424e6 */ if (fZ) goto L_007424e6;
L_007424db:; BB(0x007424db);
    /* 007424db: mov dword ptr [edi + 0x24], 0xffff0000 */ W32((u32)(r_edi+0x24u), 0xffff0000u);
    /* 007424e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007424e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007424e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007424e5: ret  */ FN_RET(0x0074245c); r_esp += 4; return;
L_007424e6:; BB(0x007424e6);
    /* 007424e6: mov edx, dword ptr [esi + 0x948] */ r_edx = R32((u32)(r_esi+0x948u));
    /* 007424ec: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 007424ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007424f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007424f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007424f2: ret  */ FN_RET(0x0074245c); r_esp += 4; return;
L_007424f3:; BB(0x007424f3);
    /* 007424f3: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007424f7: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007424fd: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00742501: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742503: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742504: ret  */ FN_RET(0x0074245c); r_esp += 4; return;
L_00742505:; BB(0x00742505);
    /* 00742505: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 00742509: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074250f: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00742513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742514: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742515: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742516: ret  */ FN_RET(0x0074245c); r_esp += 4; return;
L_00742517:; BB(0x00742517);
    /* 00742517: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0074251b: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00742521: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00742525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742526: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742527: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742528: ret  */ FN_RET(0x0074245c); r_esp += 4; return;
L_00742529:; BB(0x00742529);
    /* 00742529: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0074252d: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00742533: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 00742537: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742538: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742539: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074253a: ret  */ FN_RET(0x0074245c); r_esp += 4; return;
}

void f_0074253c(void) /* sub_74253C */
{
    FN_ENTER(0x0074253c);
    /* 0074253c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074253d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074253e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074253f: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00742542: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00742544: movsx edi, word ptr [ebx + 0x20] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00742548: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x74254du); f_0080a640();
    /* 0074254d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074254f: je 0x742553 */ if (fZ) goto L_00742553;
L_00742551:; BB(0x00742551);
    /* 00742551: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00742553:; BB(0x00742553);
    /* 00742553: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742559: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0074255c: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 0074255e: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00742563: je 0x74263c */ if (fZ) goto L_0074263c;
L_00742569:; BB(0x00742569);
    /* 00742569: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0074256c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074256d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074256e: call 0x67e334 */ r_esp -= 4; W32(r_esp, 0x742573u); f_0067e334();
    /* 00742573: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00742576: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742579: je 0x74269e */ if (fZ) goto L_0074269e;
L_0074257f:; BB(0x0074257f);
    /* 0074257f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742582: je 0x74269e */ if (fZ) goto L_0074269e;
L_00742588:; BB(0x00742588);
    /* 00742588: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074258b: je 0x742689 */ if (fZ) goto L_00742689;
L_00742591:; BB(0x00742591);
    /* 00742591: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742594: je 0x742671 */ if (fZ) goto L_00742671;
L_0074259a:; BB(0x0074259a);
    /* 0074259a: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074259d: je 0x742659 */ if (fZ) goto L_00742659;
L_007425a3:; BB(0x007425a3);
    /* 007425a3: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007425a6: je 0x74262b */ if (fZ) goto L_0074262b;
L_007425ac:; BB(0x007425ac);
    /* 007425ac: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007425af: jne 0x7425c9 */ if (!fZ) goto L_007425c9;
L_007425b1:; BB(0x007425b1);
    /* 007425b1: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007425b6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007425b8: push 0x43080000 */ { u32 v = 0x43080000u; r_esp -= 4; W32(r_esp, v); }
    /* 007425bd: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7425c2u); f_0072e7e4();
    /* 007425c2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007425c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007425c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007425c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007425c8: ret  */ FN_RET(0x0074253c); r_esp += 4; return;
L_007425c9:; BB(0x007425c9);
    /* 007425c9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007425cb: jne 0x7425e5 */ if (!fZ) goto L_007425e5;
L_007425cd:; BB(0x007425cd);
    /* 007425cd: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007425d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007425d4: push 0x432a0000 */ { u32 v = 0x432a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007425d9: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7425deu); f_0072e7e4();
    /* 007425de: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007425e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007425e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007425e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007425e4: ret  */ FN_RET(0x0074253c); r_esp += 4; return;
L_007425e5:; BB(0x007425e5);
    /* 007425e5: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 007425ea: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x7425efu); f_006a8f2c();
    /* 007425ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007425f2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007425f5: je 0x742643 */ if (fZ) goto L_00742643;
L_007425f7:; BB(0x007425f7);
    /* 007425f7: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007425fa: mov dword ptr [esp + 4], 0x434a0000 */ W32((u32)(r_esp+0x4u), 0x434a0000u);
    /* 00742602: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00742604: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00742608: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0074260c: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0074260f: fadd dword ptr [edi*4 + 0x972fc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x972fc8u));
    /* 00742616: fmul dword ptr [0x973078] */ ST(0) = ST(0) * R_F32((u32)(0x973078u));
    /* 0074261c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074261f: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x742624u); f_0072e7e4();
    /* 00742624: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742627: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00742628: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742629: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074262a: ret  */ FN_RET(0x0074253c); r_esp += 4; return;
L_0074262b:; BB(0x0074262b);
    /* 0074262b: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00742630: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00742632: push 0x42cc0000 */ { u32 v = 0x42cc0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00742637: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x74263cu); f_0072e7e4();
L_0074263c:; BB(0x0074263c);
    /* 0074263c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074263f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00742640: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742641: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742642: ret  */ FN_RET(0x0074253c); r_esp += 4; return;
L_00742643:; BB(0x00742643);
    /* 00742643: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742644: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x742649u); f_0068d5a8();
    /* 00742649: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074264a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074264c: je 0x7425f7 */ if (fZ) goto L_007425f7;
L_0074264e:; BB(0x0074264e);
    /* 0074264e: mov edi, dword ptr [eax + 0x900] */ r_edi = R32((u32)(r_eax+0x900u));
    /* 00742654: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00742657: jmp 0x7425f7 */ goto L_007425f7;
L_00742659:; BB(0x00742659);
    /* 00742659: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074265e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00742660: push 0x42880000 */ { u32 v = 0x42880000u; r_esp -= 4; W32(r_esp, v); }
    /* 00742665: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x74266au); f_0072e7e4();
    /* 0074266a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074266d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074266e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074266f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742670: ret  */ FN_RET(0x0074253c); r_esp += 4; return;
L_00742671:; BB(0x00742671);
    /* 00742671: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00742676: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00742678: push 0x42080000 */ { u32 v = 0x42080000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074267d: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x742682u); f_0072e7e4();
    /* 00742682: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742685: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00742686: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742687: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742688: ret  */ FN_RET(0x0074253c); r_esp += 4; return;
L_00742689:; BB(0x00742689);
    /* 00742689: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074268e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00742690: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00742692: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x742697u); f_0072e7e4();
    /* 00742697: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074269a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074269b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074269c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074269d: ret  */ FN_RET(0x0074253c); r_esp += 4; return;
L_0074269e:; BB(0x0074269e);
    /* 0074269e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007426a1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007426a3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007426a6: je 0x7426cd */ if (fZ) goto L_007426cd;
L_007426a8:; BB(0x007426a8);
    /* 007426a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007426aa:; BB(0x007426aa);
    /* 007426aa: cmp edi, dword ptr [esp + edx*4 + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_edx*4+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007426ae: je 0x7426c5 */ if (fZ) goto L_007426c5;
L_007426b0:; BB(0x007426b0);
    /* 007426b0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007426b3: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007426b6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007426b8: mov ebx, dword ptr [esp + eax] */ r_ebx = R32((u32)(r_esp+r_eax));
    /* 007426bb: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007426be: jne 0x7426aa */ if (!fZ) goto L_007426aa;
L_007426c0:; BB(0x007426c0);
    /* 007426c0: jmp 0x742588 */ goto L_00742588;
L_007426c5:; BB(0x007426c5);
    /* 007426c5: mov ebx, dword ptr [esp + eax] */ r_ebx = R32((u32)(r_esp+r_eax));
    /* 007426c8: jmp 0x742588 */ goto L_00742588;
L_007426cd:; BB(0x007426cd);
    /* 007426cd: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007426d0: jmp 0x742588 */ goto L_00742588;
}

void f_007426d8(void) /* sub_7426D8 */
{
    FN_ENTER(0x007426d8);
    /* 007426d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007426d9: mov ebp, esp */ r_ebp = r_esp;
    /* 007426db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007426dd: push 0x8f230e */ { u32 v = 0x8f230eu; r_esp -= 4; W32(r_esp, v); }
    /* 007426e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007426e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007426e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007426f0: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007426f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007426f6: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 007426f9: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 007426fc: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 007426ff: movsx eax, word ptr [ecx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 00742703: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00742706: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742707: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74270cu); f_0068d5a8();
    /* 0074270c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074270f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00742712: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742714: je 0x742722 */ if (fZ) goto L_00742722;
L_00742716:; BB(0x00742716);
    /* 00742716: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00742719: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x74271eu); f_00712480();
    /* 0074271e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742720: jne 0x74274f */ if (!fZ) goto L_0074274f;
L_00742722:; BB(0x00742722);
    /* 00742722: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00742724:; BB(0x00742724);
    /* 00742724: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00742727: mov ecx, dword ptr [eax + esi*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x64u));
    /* 0074272b: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0074272e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742730: je 0x742742 */ if (fZ) goto L_00742742;
L_00742732:; BB(0x00742732);
    /* 00742732: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x742737u); f_007127b0();
    /* 00742737: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074273a: mov dword ptr [eax + ebx*2 + 0x64], 0 */ W32((u32)(r_eax+r_ebx*2+0x64u), 0x0u);
L_00742742:; BB(0x00742742);
    /* 00742742: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00742745: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00742748: jl 0x742724 */ if ((fS!=fO)) goto L_00742724;
L_0074274a:; BB(0x0074274a);
    /* 0074274a: jmp 0x742834 */ goto L_00742834;
L_0074274f:; BB(0x0074274f);
    /* 0074274f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00742752: lea ebx, [ebp - 0x74] */ r_ebx = (u32)(r_ebp+0xffffff8cu);
    /* 00742755: movsx ecx, word ptr [edx + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 00742759: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074275a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074275c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0074275f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00742760: call 0x67e334 */ r_esp -= 4; W32(r_esp, 0x742765u); f_0067e334();
    /* 00742765: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00742768: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074276b: je 0x7428d8 */ if (fZ) goto L_007428d8;
L_00742771:; BB(0x00742771);
    /* 00742771: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742774: je 0x7428d8 */ if (fZ) goto L_007428d8;
L_0074277a:; BB(0x0074277a);
    /* 0074277a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074277d: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00742780: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742782: je 0x742793 */ if (fZ) goto L_00742793;
L_00742784:; BB(0x00742784);
    /* 00742784: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x742789u); f_007127b0();
    /* 00742789: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074278c: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_00742793:; BB(0x00742793);
    /* 00742793: mov eax, 1 */ r_eax = 0x1u;
    /* 00742798: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0074279b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0074279d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_007427a0:; BB(0x007427a0);
    /* 007427a0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007427a3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007427a6: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007427a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007427ab: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007427ae: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007427b0: mov eax, dword ptr [ecx + ebx + 0x25c] */ r_eax = R32((u32)(r_ecx+r_ebx+0x25cu));
    /* 007427b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007427b9: jne 0x7427de */ if (!fZ) goto L_007427de;
L_007427bb:; BB(0x007427bb);
    /* 007427bb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007427be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007427c1: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 007427c5: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 007427c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007427ca: je 0x74281e */ if (fZ) goto L_0074281e;
L_007427cc:; BB(0x007427cc);
    /* 007427cc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7427d1u); f_007127b0();
    /* 007427d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007427d4: mov dword ptr [eax + ebx*2 + 0x64], 0 */ W32((u32)(r_eax+r_ebx*2+0x64u), 0x0u);
    /* 007427dc: jmp 0x74281e */ goto L_0074281e;
L_007427de:; BB(0x007427de);
    /* 007427de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007427df: call 0x715a5c */ r_esp -= 4; W32(r_esp, 0x7427e4u); f_00715a5c();
    /* 007427e4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007427e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007427ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007427ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007427f0: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007427f3: mov ecx, dword ptr [edx + ecx*4 + 0x64] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 007427f7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007427fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007427fc: je 0x74284d */ if (fZ) goto L_0074284d;
L_007427fe:; BB(0x007427fe);
    /* 007427fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00742801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742802: call 0x7159f8 */ r_esp -= 4; W32(r_esp, 0x742807u); f_007159f8();
    /* 00742807: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074280a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074280d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00742810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742811: mov ecx, dword ptr [edx + ebx*2 + 0x64] */ r_ecx = R32((u32)(r_edx+r_ebx*2+0x64u));
    /* 00742815: call 0x715a34 */ r_esp -= 4; W32(r_esp, 0x74281au); f_00715a34();
L_0074281a:; BB(0x0074281a);
    /* 0074281a: add dword ptr [ebp - 0x24], 1 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0074281e:; BB(0x0074281e);
    /* 0074281e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00742821: add dword ptr [ebp - 0x20], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00742825: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00742828: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074282b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0074282e: jl 0x7427a0 */ if ((fS!=fO)) goto L_007427a0;
L_00742834:; BB(0x00742834);
    /* 00742834: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00742837: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0074283a: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0074283d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00742840: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00742847: mov esp, ebp */ r_esp = r_ebp;
    /* 00742849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074284a: ret 4 */ FN_RET(0x007426d8); r_esp += 8; return;
L_0074284d:; BB(0x0074284d);
    /* 0074284d: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00742854: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00742856: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74285bu); f_005caba4();
    /* 0074285b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0074285e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00742861: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00742864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742866: je 0x7428d1 */ if (fZ) goto L_007428d1;
L_00742868:; BB(0x00742868);
    /* 00742868: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0074286f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00742876: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00742879: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074287c: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074287f: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00742882: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00742886: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00742889: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074288a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074288b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074288c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074288d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074288e: call 0x715870 */ r_esp -= 4; W32(r_esp, 0x742893u); f_00715870();
    /* 00742893: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0074289a:; BB(0x0074289a);
    /* 0074289a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0074289d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007428a0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007428a3: mov dword ptr [edx + ecx*2 + 0x64], eax */ W32((u32)(r_edx+r_ecx*2+0x64u), r_eax);
    /* 007428a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007428ae: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007428b1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007428b4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 007428b7: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 007428ba: fadd dword ptr [0x973058] */ ST(0) = ST(0) + R_F32((u32)(0x973058u));
    /* 007428c0: fadd dword ptr [edx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x1cu));
    /* 007428c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007428c4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007428c7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7428ccu); f_00712624();
    /* 007428cc: jmp 0x74281a */ goto L_0074281a;
L_007428d1:; BB(0x007428d1);
    /* 007428d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007428d3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007428d6: jmp 0x74289a */ goto L_0074289a;
L_007428d8:; BB(0x007428d8);
    /* 007428d8: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 007428db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007428dd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007428e0: je 0x7428fb */ if (fZ) goto L_007428fb;
L_007428e2:; BB(0x007428e2);
    /* 007428e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007428e5: movsx eax, word ptr [eax + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
L_007428e9:; BB(0x007428e9);
    /* 007428e9: cmp eax, dword ptr [ebp + ecx*4 - 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffff9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007428ed: je 0x7428fb */ if (fZ) goto L_007428fb;
L_007428ef:; BB(0x007428ef);
    /* 007428ef: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007428f2: mov edx, dword ptr [ebp + ecx*4 - 0x74] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff8cu));
    /* 007428f6: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007428f9: jne 0x7428e9 */ if (!fZ) goto L_007428e9;
L_007428fb:; BB(0x007428fb);
    /* 007428fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007428fc: call 0x715abc */ r_esp -= 4; W32(r_esp, 0x742901u); f_00715abc();
    /* 00742901: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00742904: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00742907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074290a: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0074290d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074290f: je 0x742934 */ if (fZ) goto L_00742934;
L_00742911:; BB(0x00742911);
    /* 00742911: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00742913: call 0x7159f8 */ r_esp -= 4; W32(r_esp, 0x742918u); f_007159f8();
    /* 00742918: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074291b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074291e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074291f: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 00742922: call 0x715a34 */ r_esp -= 4; W32(r_esp, 0x742927u); f_00715a34();
L_00742927:; BB(0x00742927);
    /* 00742927: mov eax, 1 */ r_eax = 0x1u;
    /* 0074292c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0074292f: jmp 0x742793 */ goto L_00742793;
L_00742934:; BB(0x00742934);
    /* 00742934: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0074293b: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 0074293d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x742942u); f_005caba4();
    /* 00742942: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00742945: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00742948: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0074294b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074294d: je 0x7429a7 */ if (fZ) goto L_007429a7;
L_0074294f:; BB(0x0074294f);
    /* 0074294f: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00742956: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074295d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00742960: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00742963: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00742966: mov ecx, eax */ r_ecx = r_eax;
    /* 00742968: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0074296c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074296d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074296e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00742970: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00742971: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00742972: call 0x715870 */ r_esp -= 4; W32(r_esp, 0x742977u); f_00715870();
    /* 00742977: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0074297e:; BB(0x0074297e);
    /* 0074297e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00742981: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00742984: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00742987: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074298e: fld dword ptr [0x97305c] */ FPUSH(R_F32((u32)(0x97305cu)));
    /* 00742994: mov eax, edx */ r_eax = r_edx;
    /* 00742996: fadd dword ptr [eax + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1cu));
    /* 00742999: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0074299c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074299d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007429a0: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7429a5u); f_00712624();
    /* 007429a5: jmp 0x742927 */ goto L_00742927;
L_007429a7:; BB(0x007429a7);
    /* 007429a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007429a9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007429ac: jmp 0x74297e */ goto L_0074297e;
}

void f_007429b0(void) /* sub_7429B0 */
{
    FN_ENTER(0x007429b0);
    /* 007429b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007429b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007429b2: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007429b5: mov esi, ecx */ r_esi = r_ecx;
    /* 007429b7: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 007429ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007429bc: jbe 0x742a42 */ if ((fC||fZ)) goto L_00742a42;
L_007429c2:; BB(0x007429c2);
    /* 007429c2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007429c5: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 007429c8: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x7429cdu); f_008587a5();
    /* 007429cd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007429d0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007429d3: fdiv dword ptr [0x973050] */ ST(0) = ST(0) / R_F32((u32)(0x973050u));
    /* 007429d9: fmul dword ptr [0x973054] */ ST(0) = ST(0) * R_F32((u32)(0x973054u));
    /* 007429df: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007429e3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007429e8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007429ed: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007429f1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007429f5: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007429f9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007429fd: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00742a01: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x742a06u); f_008587a5();
    /* 00742a06: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00742a0a: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00742a0e: fdiv dword ptr [0x973050] */ ST(0) = ST(0) / R_F32((u32)(0x973050u));
    /* 00742a14: fmul dword ptr [0x97304c] */ ST(0) = ST(0) * R_F32((u32)(0x97304cu));
    /* 00742a1a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00742a1c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00742a20: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x742a25u); f_0082ddd8();
    /* 00742a25: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 00742a29: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00742a2c: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 00742a2f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00742a31: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x742a36u); f_0082dcbc();
    /* 00742a36: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00742a3a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00742a3c: fadd dword ptr [esi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x44u));
    /* 00742a3f: fstp dword ptr [esi + 0x44] */ W_F32((u32)(r_esi+0x44u), ST(0)); FPOP();
L_00742a42:; BB(0x00742a42);
    /* 00742a42: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742a45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742a46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742a47: ret  */ FN_RET(0x007429b0); r_esp += 4; return;
}

void f_00742a48(void) /* sub_742A48 */
{
    FN_ENTER(0x00742a48);
    /* 00742a48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742a49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00742a4a: mov edi, ecx */ r_edi = r_ecx;
    /* 00742a4c: mov ecx, edi */ r_ecx = r_edi;
    /* 00742a4e: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x742a53u); f_00712644();
    /* 00742a53: mov esi, eax */ r_esi = r_eax;
    /* 00742a55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00742a56: mov ecx, edi */ r_ecx = r_edi;
    /* 00742a58: call 0x742a6c */ r_esp -= 4; W32(r_esp, 0x742a5du); f_00742a6c();
    /* 00742a5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00742a5e: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 00742a61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00742a62: mov ecx, edi */ r_ecx = r_edi;
    /* 00742a64: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x742a69u); f_0072a648();
    /* 00742a69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742a6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742a6b: ret  */ FN_RET(0x00742a48); r_esp += 4; return;
}

void f_00742a6c(void) /* sub_742A6C */
{
    FN_ENTER(0x00742a6c);
    /* 00742a6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742a6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00742a6e: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00742a71: mov edi, ecx */ r_edi = r_ecx;
    /* 00742a73: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 00742a77: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00742a7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742a7c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x742a81u); f_0068d5a8();
    /* 00742a81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00742a82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742a84: je 0x742ab0 */ if (fZ) goto L_00742ab0;
L_00742a86:; BB(0x00742a86);
    /* 00742a86: fld dword ptr [eax + 0x520] */ FPUSH(R_F32((u32)(r_eax+0x520u)));
    /* 00742a8c: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00742a90: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 00742a95: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00742a9a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00742a9e: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 00742aa2: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 00742aa6: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00742aaa: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00742aae: jmp 0x742ab6 */ goto L_00742ab6;
L_00742ab0:; BB(0x00742ab0);
    /* 00742ab0: fld dword ptr [0x973048] */ FPUSH(R_F32((u32)(0x973048u)));
L_00742ab6:; BB(0x00742ab6);
    /* 00742ab6: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00742ab9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00742abd: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00742ac0: mov ecx, edi */ r_ecx = r_edi;
    /* 00742ac2: mov dword ptr [esp + 4], 0x973028 */ W32((u32)(r_esp+0x4u), 0x973028u);
    /* 00742aca: mov dword ptr [esp + 0xc], 0x41880000 */ W32((u32)(r_esp+0xcu), 0x41880000u);
    /* 00742ad2: call 0x742bd4 */ r_esp -= 4; W32(r_esp, 0x742ad7u); f_00742bd4();
    /* 00742ad7: fld dword ptr [0x973024] */ FPUSH(R_F32((u32)(0x973024u)));
    /* 00742add: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 00742ae0: fld dword ptr [0x973020] */ FPUSH(R_F32((u32)(0x973020u)));
    /* 00742ae6: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 00742ae9: fld dword ptr [0x973040] */ FPUSH(R_F32((u32)(0x973040u)));
    /* 00742aef: fdiv dword ptr [edi + 0x54] */ ST(0) = ST(0) / R_F32((u32)(r_edi+0x54u));
    /* 00742af2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00742af4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00742af7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00742afb: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00742aff: mov dword ptr [esp + 8], 0x42100000 */ W32((u32)(r_esp+0x8u), 0x42100000u);
    /* 00742b07: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00742b0c: mov dword ptr [esp + 0xc], 0x420c0000 */ W32((u32)(r_esp+0xcu), 0x420c0000u);
    /* 00742b14: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x742b19u); f_0082bb30();
    /* 00742b19: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00742b1f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x742b24u); f_00829cc8();
    /* 00742b24: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 00742b27: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00742b2c: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x742b31u); f_0082bb60();
    /* 00742b31: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00742b34: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00742b38: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00742b3c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00742b40: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00742b44: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00742b48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00742b4a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00742b4e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00742b52: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00742b56: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00742b5a: mov dword ptr [esp + 0x20], 0x3f3e0000 */ W32((u32)(r_esp+0x20u), 0x3f3e0000u);
    /* 00742b62: mov dword ptr [esp + 0x24], 0x3ea00000 */ W32((u32)(r_esp+0x24u), 0x3ea00000u);
    /* 00742b6a: lea edi, [esp + 0x10] */ r_edi = (u32)(r_esp+0x10u);
    /* 00742b6e: mov dword ptr [esp + 0x28], 0x3f620000 */ W32((u32)(r_esp+0x28u), 0x3f620000u);
    /* 00742b76: mov dword ptr [esp + 0x2c], 0x3ee60000 */ W32((u32)(r_esp+0x2cu), 0x3ee60000u);
    /* 00742b7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742b7f: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x742b84u); f_0071bbb4();
    /* 00742b84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742b85: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00742b89: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00742b8c: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00742b90: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x742b95u); f_0082b440();
    /* 00742b95: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x742b9au); f_004ac444();
    /* 00742b9a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00742b9d: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00742ba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742ba2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00742ba3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00742ba4: call 0x712914 */ r_esp -= 4; W32(r_esp, 0x742ba9u); f_00712914();
    /* 00742ba9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00742bac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742bae: je 0x742bcc */ if (fZ) goto L_00742bcc;
L_00742bb0:; BB(0x00742bb0);
    /* 00742bb0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00742bb2: call 0x712964 */ r_esp -= 4; W32(r_esp, 0x742bb7u); f_00712964();
    /* 00742bb7: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00742bbb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00742bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742bbd: call 0x7129a8 */ r_esp -= 4; W32(r_esp, 0x742bc2u); f_007129a8();
    /* 00742bc2: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00742bc4: call 0x712bc0 */ r_esp -= 4; W32(r_esp, 0x742bc9u); f_00712bc0();
    /* 00742bc9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00742bcc:; BB(0x00742bcc);
    /* 00742bcc: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742bcf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00742bd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742bd1: ret 4 */ FN_RET(0x00742a6c); r_esp += 8; return;
}

void f_00742bd4(void) /* sub_742BD4 */
{
    FN_ENTER(0x00742bd4);
    /* 00742bd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742bd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00742bd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00742bd7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00742bd8: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00742bde: mov esi, ecx */ r_esi = r_ecx;
    /* 00742be0: mov ebp, dword ptr [esp + 0xbc] */ r_ebp = R32((u32)(r_esp+0xbcu));
    /* 00742be7: fld dword ptr [esp + 0xc4] */ FPUSH(R_F32((u32)(r_esp+0xc4u)));
    /* 00742bee: fld dword ptr [0x973014] */ FPUSH(R_F32((u32)(0x973014u)));
    /* 00742bf4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00742bf6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00742bf8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00742bf9: fld dword ptr [0x973010] */ FPUSH(R_F32((u32)(0x973010u)));
    /* 00742bff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00742c01: jb 0x742c05 */ if (fC) goto L_00742c05;
L_00742c03:; BB(0x00742c03);
    /* 00742c03: fst st(1) */ ST(1) = ST(0);
L_00742c05:; BB(0x00742c05);
    /* 00742c05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00742c07: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00742c09: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00742c0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742c0e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00742c11: call 0x83c230 */ r_esp -= 4; W32(r_esp, 0x742c16u); f_0083c230();
    /* 00742c16: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00742c1a: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00742c1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00742c1f: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00742c23: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00742c28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00742c2d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00742c31: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00742c35: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00742c39: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00742c3d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00742c41: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00742c45: mov eax, ebx */ r_eax = r_ebx;
    /* 00742c47: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00742c4a: fadd dword ptr [eax*4 + 0x972fc0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x972fc0u));
    /* 00742c51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00742c53: fmul dword ptr [0x97300c] */ ST(0) = ST(0) * R_F32((u32)(0x97300cu));
    /* 00742c59: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00742c5b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00742c5f: jl 0x742f5f */ if ((fS!=fO)) goto L_00742f5f;
L_00742c65:; BB(0x00742c65);
    /* 00742c65: mov edi, dword ptr [esp + 0xc0] */ r_edi = R32((u32)(r_esp+0xc0u));
    /* 00742c6c: mov ecx, dword ptr [ebx*4 + 0x972fa0] */ r_ecx = R32((u32)(r_ebx*4+0x972fa0u));
    /* 00742c73: fld dword ptr [esp + 0xc8] */ FPUSH(R_F32((u32)(r_esp+0xc8u)));
    /* 00742c7a: fld dword ptr [esp + 0xc8] */ FPUSH(R_F32((u32)(r_esp+0xc8u)));
    /* 00742c81: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00742c84: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 00742c86: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00742c89: fld dword ptr [esi + 0x54] */ FPUSH(R_F32((u32)(r_esi+0x54u)));
    /* 00742c8c: fadd dword ptr [0x973008] */ ST(0) = ST(0) + R_F32((u32)(0x973008u));
    /* 00742c92: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00742c95: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00742c98: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00742c9b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00742c9d: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 00742c9f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00742ca1: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00742ca3: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00742ca5: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00742ca9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00742cab: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 00742cae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00742cb0: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00742cb4: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00742cb6: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00742cba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00742cbc: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00742cc0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00742cc2: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00742cc6: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00742cc8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00742cca: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00742ccc: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00742ccf: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 00742cd1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00742cd3: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00742cd5: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00742cd7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00742cd9: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00742cdd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00742cdf: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00742ce3: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 00742ceb: mov dword ptr [esp + 0x4c], 1 */ W32((u32)(r_esp+0x4cu), 0x1u);
    /* 00742cf3: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 00742cf7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00742cf9: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00742cfd: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 00742d01: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00742d05: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00742d09: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 00742d0d: mov dword ptr [esp + 0x70], ecx */ W32((u32)(r_esp+0x70u), r_ecx);
    /* 00742d11: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00742d13: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x742d18u); f_0082ddd8();
    /* 00742d18: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00742d1c: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 00742d20: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00742d24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00742d26: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x742d2bu); f_0082dcbc();
    /* 00742d2b: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 00742d2f: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00742d33: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00742d37:; BB(0x00742d37);
    /* 00742d37: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00742d3b: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00742d3f: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00742d43: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00742d47: mov eax, 0xd700 */ r_eax = 0xd700u;
    /* 00742d4c: add edi, 0x800 */ {  u32 a = r_edi; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00742d52: cmp edi, 0xd700 */ {  u32 a = r_edi; u32 b = 0xd700u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00742d58: jle 0x742d5c */ if ((fZ||fS!=fO)) goto L_00742d5c;
L_00742d5a:; BB(0x00742d5a);
    /* 00742d5a: mov edi, eax */ r_edi = r_eax;
L_00742d5c:; BB(0x00742d5c);
    /* 00742d5c: mov ecx, edi */ r_ecx = r_edi;
    /* 00742d5e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x742d63u); f_0082ddd8();
    /* 00742d63: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00742d67: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 00742d6b: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00742d6f: mov ecx, edi */ r_ecx = r_edi;
    /* 00742d71: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x742d76u); f_0082dcbc();
    /* 00742d76: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 00742d7a: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00742d7e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00742d82: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00742d86: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00742d8a: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 00742d92: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00742d96: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00742d99: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 00742da1: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x742da6u); f_0082b5d8();
    /* 00742da6: cmp edi, 0xd700 */ {  u32 a = r_edi; u32 b = 0xd700u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00742dac: jl 0x742d37 */ if ((fS!=fO)) goto L_00742d37;
L_00742dae:; BB(0x00742dae);
    /* 00742dae: fld dword ptr [0x973004] */ FPUSH(R_F32((u32)(0x973004u)));
    /* 00742db4: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00742db8: mov edx, dword ptr [ebx*4 + 0x972fa4] */ r_edx = R32((u32)(r_ebx*4+0x972fa4u));
    /* 00742dbf: fld dword ptr [esp + 0xc8] */ FPUSH(R_F32((u32)(r_esp+0xc8u)));
    /* 00742dc6: fld dword ptr [esi + 0x54] */ FPUSH(R_F32((u32)(r_esi+0x54u)));
    /* 00742dc9: fadd dword ptr [0x972ffc] */ ST(0) = ST(0) + R_F32((u32)(0x972ffcu));
    /* 00742dcf: fld dword ptr [esp + 0xc8] */ FPUSH(R_F32((u32)(r_esp+0xc8u)));
    /* 00742dd6: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00742dd9: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00742ddc: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00742dde: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00742de0: fmul dword ptr [0x973000] */ ST(0) = ST(0) * R_F32((u32)(0x973000u));
    /* 00742de6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00742de8: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00742dea: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00742dec: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00742df0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00742df2: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00742df6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00742df8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00742dfa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00742dfc: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00742e00: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00742e05: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00742e0a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00742e0e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00742e12: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00742e16: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00742e1a: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00742e1e: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00742e21: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00742e23: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00742e25: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00742e29: mov ecx, edi */ r_ecx = r_edi;
    /* 00742e2b: lea esi, [esp + 0x84] */ r_esi = (u32)(r_esp+0x84u);
    /* 00742e32: mov dword ptr [esp + 0x74], esi */ W32((u32)(r_esp+0x74u), r_esi);
    /* 00742e36: mov dword ptr [esp + 0x7c], 0 */ W32((u32)(r_esp+0x7cu), 0x0u);
    /* 00742e3e: lea eax, [esp + 0x9c] */ r_eax = (u32)(r_esp+0x9cu);
    /* 00742e45: mov dword ptr [esp + 0x80], 1 */ W32((u32)(r_esp+0x80u), 0x1u);
    /* 00742e50: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 00742e54: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 00742e5b: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 00742e62: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
    /* 00742e69: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00742e6d: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00742e6f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00742e71: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00742e74: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00742e76: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00742e78: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00742e7f: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00742e83: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00742e85: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00742e87: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00742e89: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00742e90: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x742e95u); f_0082ddd8();
    /* 00742e95: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00742e99: fadd dword ptr [esp + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x84u));
    /* 00742ea0: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 00742ea7: mov ecx, edi */ r_ecx = r_edi;
    /* 00742ea9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x742eaeu); f_0082dcbc();
    /* 00742eae: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 00742eb2: fadd dword ptr [esp + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x88u));
    /* 00742eb9: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 00742ec0: cmp edi, 0xd700 */ {  u32 a = r_edi; u32 b = 0xd700u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00742ec6: jge 0x742f5f */ if ((fS==fO)) goto L_00742f5f;
L_00742ecc:; BB(0x00742ecc);
    /* 00742ecc: mov eax, dword ptr [esp + 0x94] */ r_eax = R32((u32)(r_esp+0x94u));
    /* 00742ed3: mov edx, dword ptr [esp + 0x98] */ r_edx = R32((u32)(r_esp+0x98u));
    /* 00742eda: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 00742ee1: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 00742ee8: mov ebx, 0xd700 */ r_ebx = 0xd700u;
    /* 00742eed: add edi, 0x800 */ {  u32 a = r_edi; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00742ef3: cmp edi, 0xd700 */ {  u32 a = r_edi; u32 b = 0xd700u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00742ef9: jle 0x742efd */ if ((fZ||fS!=fO)) goto L_00742efd;
L_00742efb:; BB(0x00742efb);
    /* 00742efb: mov edi, ebx */ r_edi = r_ebx;
L_00742efd:; BB(0x00742efd);
    /* 00742efd: mov ecx, edi */ r_ecx = r_edi;
    /* 00742eff: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x742f04u); f_0082ddd8();
    /* 00742f04: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00742f08: fadd dword ptr [esp + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x84u));
    /* 00742f0f: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 00742f16: mov ecx, edi */ r_ecx = r_edi;
    /* 00742f18: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x742f1du); f_0082dcbc();
    /* 00742f1d: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 00742f21: fadd dword ptr [esp + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x88u));
    /* 00742f28: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 00742f2f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00742f33: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00742f37: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 00742f3f: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00742f43: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00742f46: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 00742f4e: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x742f53u); f_0082b5d8();
    /* 00742f53: cmp edi, 0xd700 */ {  u32 a = r_edi; u32 b = 0xd700u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00742f59: jl 0x742ecc */ if ((fS!=fO)) goto L_00742ecc;
L_00742f5f:; BB(0x00742f5f);
    /* 00742f5f: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742f65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00742f66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00742f67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00742f68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742f69: ret 0x10 */ FN_RET(0x00742bd4); r_esp += 20; return;
}

void f_00742f6c(void) /* sub_742F6C */
{
    FN_ENTER(0x00742f6c);
    /* 00742f6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742f6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00742f6e: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00742f71: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00742f76: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00742f7a: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742f80: jne 0x742f88 */ if (!fZ) goto L_00742f88;
L_00742f82:; BB(0x00742f82);
    /* 00742f82: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742f85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00742f86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742f87: ret  */ FN_RET(0x00742f6c); r_esp += 4; return;
L_00742f88:; BB(0x00742f88);
    /* 00742f88: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00742f8b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00742f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00742f8d: call 0x67e334 */ r_esp -= 4; W32(r_esp, 0x742f92u); f_0067e334();
    /* 00742f92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00742f95: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742f98: je 0x7430c4 */ if (fZ) goto L_007430c4;
L_00742f9e:; BB(0x00742f9e);
    /* 00742f9e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742fa1: je 0x7430c4 */ if (fZ) goto L_007430c4;
L_00742fa7:; BB(0x00742fa7);
    /* 00742fa7: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742faa: je 0x7430ae */ if (fZ) goto L_007430ae;
L_00742fb0:; BB(0x00742fb0);
    /* 00742fb0: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742fb3: je 0x743095 */ if (fZ) goto L_00743095;
L_00742fb9:; BB(0x00742fb9);
    /* 00742fb9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742fbc: je 0x74307c */ if (fZ) goto L_0074307c;
L_00742fc2:; BB(0x00742fc2);
    /* 00742fc2: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742fc5: je 0x74304d */ if (fZ) goto L_0074304d;
L_00742fcb:; BB(0x00742fcb);
    /* 00742fcb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742fce: jne 0x742fe9 */ if (!fZ) goto L_00742fe9;
L_00742fd0:; BB(0x00742fd0);
    /* 00742fd0: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00742fd5: push 0x43080000 */ { u32 v = 0x43080000u; r_esp -= 4; W32(r_esp, v); }
    /* 00742fda: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00742fde: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x742fe3u); f_0072e7e4();
    /* 00742fe3: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742fe6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00742fe7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00742fe8: ret  */ FN_RET(0x00742f6c); r_esp += 4; return;
L_00742fe9:; BB(0x00742fe9);
    /* 00742fe9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00742feb: jne 0x743006 */ if (!fZ) goto L_00743006;
L_00742fed:; BB(0x00742fed);
    /* 00742fed: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00742ff2: push 0x432a0000 */ { u32 v = 0x432a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00742ff7: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00742ffb: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x743000u); f_0072e7e4();
    /* 00743000: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743004: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00743005: ret  */ FN_RET(0x00742f6c); r_esp += 4; return;
L_00743006:; BB(0x00743006);
    /* 00743006: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0074300b: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x743010u); f_006a8f2c();
    /* 00743010: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00743013: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00743016: je 0x743066 */ if (fZ) goto L_00743066;
L_00743018:; BB(0x00743018);
    /* 00743018: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074301b: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0074301f: mov dword ptr [esp + 4], 0x434a0000 */ W32((u32)(r_esp+0x4u), 0x434a0000u);
    /* 00743027: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0074302b: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0074302f: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00743032: fadd dword ptr [edi*4 + 0x972fb8] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x972fb8u));
    /* 00743039: fmul dword ptr [0x972ff4] */ ST(0) = ST(0) * R_F32((u32)(0x972ff4u));
    /* 0074303f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00743042: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x743047u); f_0072e7e4();
    /* 00743047: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074304a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074304b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074304c: ret  */ FN_RET(0x00742f6c); r_esp += 4; return;
L_0074304d:; BB(0x0074304d);
    /* 0074304d: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00743052: push 0x42cc0000 */ { u32 v = 0x42cc0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00743057: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0074305b: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x743060u); f_0072e7e4();
    /* 00743060: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743063: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743064: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00743065: ret  */ FN_RET(0x00742f6c); r_esp += 4; return;
L_00743066:; BB(0x00743066);
    /* 00743066: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00743067: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74306cu); f_0068d5a8();
    /* 0074306c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074306d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074306f: je 0x743018 */ if (fZ) goto L_00743018;
L_00743071:; BB(0x00743071);
    /* 00743071: mov edi, dword ptr [eax + 0x900] */ r_edi = R32((u32)(r_eax+0x900u));
    /* 00743077: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074307a: jmp 0x743018 */ goto L_00743018;
L_0074307c:; BB(0x0074307c);
    /* 0074307c: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00743081: push 0x42880000 */ { u32 v = 0x42880000u; r_esp -= 4; W32(r_esp, v); }
    /* 00743086: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0074308a: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x74308fu); f_0072e7e4();
    /* 0074308f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00743092: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00743093: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00743094: ret  */ FN_RET(0x00742f6c); r_esp += 4; return;
L_00743095:; BB(0x00743095);
    /* 00743095: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074309a: push 0x42080000 */ { u32 v = 0x42080000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074309f: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 007430a3: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7430a8u); f_0072e7e4();
    /* 007430a8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007430ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007430ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007430ad: ret  */ FN_RET(0x00742f6c); r_esp += 4; return;
L_007430ae:; BB(0x007430ae);
    /* 007430ae: push 0x432d0000 */ { u32 v = 0x432d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007430b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007430b5: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 007430b9: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7430beu); f_0072e7e4();
    /* 007430be: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007430c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007430c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007430c3: ret  */ FN_RET(0x00742f6c); r_esp += 4; return;
L_007430c4:; BB(0x007430c4);
    /* 007430c4: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007430c7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007430c9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007430cc: je 0x7430f3 */ if (fZ) goto L_007430f3;
L_007430ce:; BB(0x007430ce);
    /* 007430ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007430d0:; BB(0x007430d0);
    /* 007430d0: cmp edi, dword ptr [esp + edx*4 + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_edx*4+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007430d4: je 0x7430eb */ if (fZ) goto L_007430eb;
L_007430d6:; BB(0x007430d6);
    /* 007430d6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007430d9: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007430dc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007430de: mov ebx, dword ptr [esp + eax] */ r_ebx = R32((u32)(r_esp+r_eax));
    /* 007430e1: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007430e4: jne 0x7430d0 */ if (!fZ) goto L_007430d0;
L_007430e6:; BB(0x007430e6);
    /* 007430e6: jmp 0x742fa7 */ goto L_00742fa7;
L_007430eb:; BB(0x007430eb);
    /* 007430eb: mov ebx, dword ptr [esp + eax] */ r_ebx = R32((u32)(r_esp+r_eax));
    /* 007430ee: jmp 0x742fa7 */ goto L_00742fa7;
L_007430f3:; BB(0x007430f3);
    /* 007430f3: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007430f6: jmp 0x742fa7 */ goto L_00742fa7;
}

