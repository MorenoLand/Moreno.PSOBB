#include "protos.h"

void f_006af27c(void) /* sub_6AF27C */
{
    FN_ENTER(0x006af27c);
    /* 006af27c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006af27d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006af27e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006af27f: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006af285: call 0x6aea24 */ r_esp -= 4; W32(r_esp, 0x6af28au); f_006aea24();
    /* 006af28a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006af28f: mov word ptr [0xa94af4], ax */ W16((u32)(0xa94af4u), (u16)r_eax);
    /* 006af295: mov word ptr [0xa94afc], ax */ W16((u32)(0xa94afcu), (u16)r_eax);
    /* 006af29b: mov word ptr [0xa94b04], ax */ W16((u32)(0xa94b04u), (u16)r_eax);
    /* 006af2a1: mov word ptr [0xa94b0c], ax */ W16((u32)(0xa94b0cu), (u16)r_eax);
    /* 006af2a7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006af2a9: mov word ptr [0xa94af6], dx */ W16((u32)(0xa94af6u), (u16)r_edx);
    /* 006af2b0: mov dword ptr [0xa94af8], edx */ W32((u32)(0xa94af8u), r_edx);
    /* 006af2b6: mov word ptr [0xa94afe], dx */ W16((u32)(0xa94afeu), (u16)r_edx);
    /* 006af2bd: mov dword ptr [0xa94b00], edx */ W32((u32)(0xa94b00u), r_edx);
    /* 006af2c3: mov word ptr [0xa94b06], dx */ W16((u32)(0xa94b06u), (u16)r_edx);
    /* 006af2ca: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006af2cc: mov dword ptr [0xa94b08], edx */ W32((u32)(0xa94b08u), r_edx);
    /* 006af2d2: mov word ptr [0xa94b0e], dx */ W16((u32)(0xa94b0eu), (u16)r_edx);
    /* 006af2d9: mov dword ptr [0xa94b10], edx */ W32((u32)(0xa94b10u), r_edx);
    /* 006af2df: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006af2e4: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x6af2e9u); f_006a8f2c();
    /* 006af2e9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006af2ec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af2ef: je 0x6af4c0 */ if (fZ) goto L_006af4c0;
L_006af2f5:; BB(0x006af2f5);
    /* 006af2f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006af2f7: mov edi, eax */ r_edi = r_eax;
L_006af2f9:; BB(0x006af2f9);
    /* 006af2f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006af2fa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6af2ffu); f_0068d5a8();
    /* 006af2ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af300: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af302: je 0x6af320 */ if (fZ) goto L_006af320;
L_006af304:; BB(0x006af304);
    /* 006af304: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006af308: mov word ptr [ebp*8 + 0xa94af4], dx */ W16((u32)(r_ebp*8+0xa94af4u), (u16)r_edx);
    /* 006af310: mov ecx, dword ptr [eax + 0x898] */ r_ecx = R32((u32)(r_eax+0x898u));
    /* 006af316: mov dword ptr [ebp*8 + 0xa94af8], ecx */ W32((u32)(r_ebp*8+0xa94af8u), r_ecx);
    /* 006af31d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006af320:; BB(0x006af320);
    /* 006af320: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006af323: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af326: jl 0x6af2f9 */ if ((fS!=fO)) goto L_006af2f9;
L_006af328:; BB(0x006af328);
    /* 006af328: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af32b: jle 0x6af442 */ if ((fZ||fS!=fO)) goto L_006af442;
L_006af331:; BB(0x006af331);
    /* 006af331: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006af333: lea edx, [ebp - 1] */ r_edx = (u32)(r_ebp+0xffffffffu);
    /* 006af336: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006af338: jle 0x6af406 */ if ((fZ||fS!=fO)) goto L_006af406;
L_006af33e:; BB(0x006af33e);
    /* 006af33e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_006af342:; BB(0x006af342);
    /* 006af342: movzx ecx, word ptr [eax*8 + 0xa94af4] */ r_ecx = (u32)R16((u32)(r_eax*8+0xa94af4u));
    /* 006af34a: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af350: je 0x6af4b8 */ if (fZ) goto L_006af4b8;
L_006af356:; BB(0x006af356);
    /* 006af356: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 006af359: mov ebx, esi */ r_ebx = r_esi;
    /* 006af35b: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af35d: jge 0x6af3f8 */ if ((fS==fO)) goto L_006af3f8;
L_006af363:; BB(0x006af363);
    /* 006af363: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006af367: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006af36a: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 006af36e: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 006af371: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006af373: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006af375:; BB(0x006af375);
    /* 006af375: movzx edi, word ptr [ebx*8 + 0xa94af4] */ r_edi = (u32)R16((u32)(r_ebx*8+0xa94af4u));
    /* 006af37d: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af383: je 0x6af3df */ if (fZ) goto L_006af3df;
L_006af385:; BB(0x006af385);
    /* 006af385: mov esi, dword ptr [eax*8 + 0xa94af8] */ r_esi = R32((u32)(r_eax*8+0xa94af8u));
    /* 006af38c: cmp esi, dword ptr [ecx + 0xa94af8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa94af8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af392: jge 0x6af3df */ if ((fS==fO)) goto L_006af3df;
L_006af394:; BB(0x006af394);
    /* 006af394: movzx edx, word ptr [eax*8 + 0xa94af4] */ r_edx = (u32)R16((u32)(r_eax*8+0xa94af4u));
    /* 006af39c: movzx ebp, word ptr [eax*8 + 0xa94af6] */ r_ebp = (u32)R16((u32)(r_eax*8+0xa94af6u));
    /* 006af3a4: mov word ptr [eax*8 + 0xa94af4], di */ W16((u32)(r_eax*8+0xa94af4u), (u16)r_edi);
    /* 006af3ac: movzx edi, word ptr [ecx + 0xa94af6] */ r_edi = (u32)R16((u32)(r_ecx+0xa94af6u));
    /* 006af3b3: mov word ptr [eax*8 + 0xa94af6], di */ W16((u32)(r_eax*8+0xa94af6u), (u16)r_edi);
    /* 006af3bb: mov edi, dword ptr [ebx*8 + 0xa94af8] */ r_edi = R32((u32)(r_ebx*8+0xa94af8u));
    /* 006af3c2: mov dword ptr [eax*8 + 0xa94af8], edi */ W32((u32)(r_eax*8+0xa94af8u), r_edi);
    /* 006af3c9: mov word ptr [ebx*8 + 0xa94af4], dx */ W16((u32)(r_ebx*8+0xa94af4u), (u16)r_edx);
    /* 006af3d1: mov word ptr [ecx + 0xa94af6], bp */ W16((u32)(r_ecx+0xa94af6u), (u16)r_ebp);
    /* 006af3d8: mov dword ptr [ebx*8 + 0xa94af8], esi */ W32((u32)(r_ebx*8+0xa94af8u), r_esi);
L_006af3df:; BB(0x006af3df);
    /* 006af3df: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006af3e3: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006af3e6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006af3e9: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af3eb: jl 0x6af375 */ if ((fS!=fO)) goto L_006af375;
L_006af3ed:; BB(0x006af3ed);
    /* 006af3ed: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006af3f1: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 006af3f4: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_006af3f8:; BB(0x006af3f8);
    /* 006af3f8: mov eax, esi */ r_eax = r_esi;
    /* 006af3fa: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af3fc: jl 0x6af342 */ if ((fS!=fO)) goto L_006af342;
L_006af402:; BB(0x006af402);
    /* 006af402: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_006af406:; BB(0x006af406);
    /* 006af406: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006af408: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006af40a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006af40c: jle 0x6af442 */ if ((fZ||fS!=fO)) goto L_006af442;
L_006af40e:; BB(0x006af40e);
    /* 006af40e: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006af411: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 006af414: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006af416: mov word ptr [edi + 0xa94af6], cx */ W16((u32)(r_edi+0xa94af6u), (u16)r_ecx);
    /* 006af41d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af41f: jge 0x6af43b */ if ((fS==fO)) goto L_006af43b;
L_006af421:; BB(0x006af421);
    /* 006af421: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 006af424: mov edi, dword ptr [edi*4 + 0xa94af8] */ r_edi = R32((u32)(r_edi*4+0xa94af8u));
    /* 006af42b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006af42e: cmp edi, dword ptr [esi*4 + 0xa94b00] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xa94b00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af435: je 0x6af43e */ if (fZ) goto L_006af43e;
L_006af437:; BB(0x006af437);
    /* 006af437: mov ecx, eax */ r_ecx = r_eax;
    /* 006af439: jmp 0x6af43e */ goto L_006af43e;
L_006af43b:; BB(0x006af43b);
    /* 006af43b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006af43e:; BB(0x006af43e);
    /* 006af43e: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af440: jl 0x6af40e */ if ((fS!=fO)) goto L_006af40e;
L_006af442:; BB(0x006af442);
    /* 006af442: push 0x9695a8 */ { u32 v = 0x9695a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006af447: call 0x7182bc */ r_esp -= 4; W32(r_esp, 0x6af44cu); f_007182bc();
    /* 006af44c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af44d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_006af44f:; BB(0x006af44f);
    /* 006af44f: movzx eax, word ptr [ebp + 0xa94af4] */ r_eax = (u32)R16((u32)(r_ebp+0xa94af4u));
    /* 006af456: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006af457: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6af45cu); f_0068d5a8();
    /* 006af45c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af45d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af45f: je 0x6af493 */ if (fZ) goto L_006af493;
L_006af461:; BB(0x006af461);
    /* 006af461: mov ecx, eax */ r_ecx = r_eax;
    /* 006af463: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x6af468u); f_006936b4();
    /* 006af468: movzx edx, word ptr [ebp + 0xa94af6] */ r_edx = (u32)R16((u32)(r_ebp+0xa94af6u));
    /* 006af46f: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 006af473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006af474: push dword ptr [edx*4 + 0x9ccb64] */ { u32 v = R32((u32)(r_edx*4+0x9ccb64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006af47b: push 0x92c4f8 */ { u32 v = 0x92c4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006af480: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006af481: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6af486u); f_00857e29();
    /* 006af486: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 006af48a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006af48b: call 0x7182bc */ r_esp -= 4; W32(r_esp, 0x6af490u); f_007182bc();
    /* 006af490: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006af493:; BB(0x006af493);
    /* 006af493: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006af496: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af499: jl 0x6af44f */ if ((fS!=fO)) goto L_006af44f;
L_006af49b:; BB(0x006af49b);
    /* 006af49b: push 0x9695b4 */ { u32 v = 0x9695b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006af4a0: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6af4a5u); f_00814f0c();
    /* 006af4a5: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006af4a7: push -0x32 */ { u32 v = 0xffffffceu; r_esp -= 4; W32(r_esp, v); }
    /* 006af4a9: call 0x6ad3d0 */ r_esp -= 4; W32(r_esp, 0x6af4aeu); f_006ad3d0();
    /* 006af4ae: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006af4b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af4b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006af4b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006af4b7: ret  */ FN_RET(0x006af27c); r_esp += 4; return;
L_006af4b8:; BB(0x006af4b8);
    /* 006af4b8: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 006af4bb: jmp 0x6af3f8 */ goto L_006af3f8;
L_006af4c0:; BB(0x006af4c0);
    /* 006af4c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006af4c2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006af4c6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006af4ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006af4cc: mov edi, eax */ r_edi = r_eax;
L_006af4ce:; BB(0x006af4ce);
    /* 006af4ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006af4cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6af4d4u); f_0068d5a8();
    /* 006af4d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af4d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af4d7: je 0x6af4f3 */ if (fZ) goto L_006af4f3;
L_006af4d9:; BB(0x006af4d9);
    /* 006af4d9: mov edx, dword ptr [eax + 0x900] */ r_edx = R32((u32)(r_eax+0x900u));
    /* 006af4df: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af4e2: je 0x6af541 */ if (fZ) goto L_006af541;
L_006af4e4:; BB(0x006af4e4);
    /* 006af4e4: mov ecx, 1 */ r_ecx = 0x1u;
L_006af4e9:; BB(0x006af4e9);
    /* 006af4e9: mov edx, dword ptr [eax + 0x898] */ r_edx = R32((u32)(r_eax+0x898u));
    /* 006af4ef: add dword ptr [esp + ecx*4 + 0x10], edx */ { u32 ad = (u32)(r_esp+r_ecx*4+0x10u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006af4f3:; BB(0x006af4f3);
    /* 006af4f3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006af4f6: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af4f9: jl 0x6af4ce */ if ((fS!=fO)) goto L_006af4ce;
L_006af4fb:; BB(0x006af4fb);
    /* 006af4fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006af4fd: mov edi, eax */ r_edi = r_eax;
L_006af4ff:; BB(0x006af4ff);
    /* 006af4ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006af500: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6af505u); f_0068d5a8();
    /* 006af505: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af506: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af508: je 0x6af534 */ if (fZ) goto L_006af534;
L_006af50a:; BB(0x006af50a);
    /* 006af50a: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006af50e: mov word ptr [ebp*8 + 0xa94af4], dx */ W16((u32)(r_ebp*8+0xa94af4u), (u16)r_edx);
    /* 006af516: mov ecx, dword ptr [eax + 0x900] */ r_ecx = R32((u32)(r_eax+0x900u));
    /* 006af51c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af51f: je 0x6af545 */ if (fZ) goto L_006af545;
L_006af521:; BB(0x006af521);
    /* 006af521: mov edx, 1 */ r_edx = 0x1u;
L_006af526:; BB(0x006af526);
    /* 006af526: mov edx, dword ptr [esp + edx*4 + 0x10] */ r_edx = R32((u32)(r_esp+r_edx*4+0x10u));
    /* 006af52a: mov dword ptr [ebp*8 + 0xa94af8], edx */ W32((u32)(r_ebp*8+0xa94af8u), r_edx);
    /* 006af531: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006af534:; BB(0x006af534);
    /* 006af534: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006af537: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af53a: jl 0x6af4ff */ if ((fS!=fO)) goto L_006af4ff;
L_006af53c:; BB(0x006af53c);
    /* 006af53c: jmp 0x6af331 */ goto L_006af331;
L_006af541:; BB(0x006af541);
    /* 006af541: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006af543: jmp 0x6af4e9 */ goto L_006af4e9;
L_006af545:; BB(0x006af545);
    /* 006af545: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006af547: jmp 0x6af526 */ goto L_006af526;
}

void f_006af54c(void) /* sub_6AF54C */
{
    FN_ENTER(0x006af54c);
    /* 006af54c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006af54d: mov ebp, esp */ r_ebp = r_esp;
    /* 006af54f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006af551: push 0x8ebd1c */ { u32 v = 0x8ebd1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006af556: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006af55c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006af55d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006af564: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006af56a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006af56d: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006af570: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006af573: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006af576: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 006af579: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006af57c: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006af57f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006af582: ja 0x6af83b */ if ((!fC&&!fZ)) goto L_006af83b;
L_006af588:; BB(0x006af588);
    /* 006af588: mov eax, dword ptr [edx*4 + 0x969510] */ r_eax = R32((u32)(r_edx*4+0x969510u));
    /* 006af58f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006af83b:; BB(0x006af83b);
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af54c); r_esp += 4; return;
}

void f_006af591(void)
{
    FN_ENTER(0x006af591);
    /* 006af591: mov eax, ecx */ r_eax = r_ecx;
    /* 006af593: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006af596: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006af599: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 006af59c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af59e: jg 0x6af83b */ if ((!fZ&&fS==fO)) goto L_006af83b;
L_006af5a4:; BB(0x006af5a4);
    /* 006af5a4: mov dword ptr [eax + 0x24], 2 */ W32((u32)(r_eax+0x24u), 0x2u);
    /* 006af5ab: jmp 0x6af83b */ goto L_006af83b;
L_006af83b:; BB(0x006af83b);
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af591); r_esp += 4; return;
}

void f_006af5b0(void)
{
    FN_ENTER(0x006af5b0);
    /* 006af5b0: mov eax, ecx */ r_eax = r_ecx;
    /* 006af5b2: add dword ptr [eax + 0x3c], -1 */ { u32 ad = (u32)(r_eax+0x3cu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006af5b6: mov ebx, 1 */ r_ebx = 0x1u;
    /* 006af5bb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006af5bd:; BB(0x006af5bd);
    /* 006af5bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006af5be: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6af5c3u); f_0068d5a8();
    /* 006af5c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af5c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af5c6: je 0x6af5d7 */ if (fZ) goto L_006af5d7;
L_006af5c8:; BB(0x006af5c8);
    /* 006af5c8: movsx eax, byte ptr [esi + 0xa94b14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xa94b14u));
    /* 006af5cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af5d1: je 0x6af852 */ if (fZ) goto L_006af852;
L_006af5d7:; BB(0x006af5d7);
    /* 006af5d7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006af5da: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af5dd: jl 0x6af5bd */ if ((fS!=fO)) goto L_006af5bd;
L_006af5df:; BB(0x006af5df);
    /* 006af5df: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af5e1: je 0x6af631 */ if (fZ) goto L_006af631;
L_006af5e3:; BB(0x006af5e3);
    /* 006af5e3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006af5ea: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006af5ec: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6af5f1u); f_005caba4();
    /* 006af5f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af5f2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006af5f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af5f7: je 0x6af61b */ if (fZ) goto L_006af61b;
L_006af5f9:; BB(0x006af5f9);
    /* 006af5f9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006af600: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006af607: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006af60a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006af60c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006af60d: mov ecx, eax */ r_ecx = r_eax;
    /* 006af60f: call 0x784370 */ r_esp -= 4; W32(r_esp, 0x6af614u); f_00784370();
    /* 006af614: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006af61b:; BB(0x006af61b);
    /* 006af61b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af61e: mov dword ptr [eax + 0x2c], 0x96 */ W32((u32)(r_eax+0x2cu), 0x96u);
    /* 006af625: mov dword ptr [eax + 0x20], 8 */ W32((u32)(r_eax+0x20u), 0x8u);
    /* 006af62c: jmp 0x6af83b */ goto L_006af83b;
L_006af631:; BB(0x006af631);
    /* 006af631: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af634: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006af637: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af639: jle 0x6af5e3 */ if ((fZ||fS!=fO)) goto L_006af5e3;
L_006af63b:; BB(0x006af63b);
    /* 006af63b: jmp 0x6af83b */ goto L_006af83b;
L_006af83b:; BB(0x006af83b);
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af5b0); r_esp += 4; return;
L_006af852:; BB(0x006af852);
    /* 006af852: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006af854: jmp 0x6af5df */ goto L_006af5df;
}

void f_006af640(void)
{
    FN_ENTER(0x006af640);
    /* 006af640: mov eax, ecx */ r_eax = r_ecx;
    /* 006af642: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006af645: jmp 0x6af655 */ goto L_006af655;
L_006af655:; BB(0x006af655);
    /* 006af655: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006af658: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 006af65b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006af65d:; BB(0x006af65d);
    /* 006af65d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006af65e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6af663u); f_0068d5a8();
    /* 006af663: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af664: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af666: je 0x6af676 */ if (fZ) goto L_006af676;
L_006af668:; BB(0x006af668);
    /* 006af668: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 006af66b: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af670: jne 0x6af859 */ if (!fZ) goto L_006af859;
L_006af676:; BB(0x006af676);
    /* 006af676: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006af679: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af67c: jl 0x6af65d */ if ((fS!=fO)) goto L_006af65d;
L_006af67e:; BB(0x006af67e);
    /* 006af67e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af681: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006af684: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6af689u); f_007127b0();
    /* 006af689: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006af68c: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 006af693: call 0x6af8d4 */ r_esp -= 4; W32(r_esp, 0x6af698u); f_006af8d4();
    /* 006af698: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af69b: mov dword ptr [eax + 0x3c], 0x1c2 */ W32((u32)(r_eax+0x3cu), 0x1c2u);
    /* 006af6a2: mov dword ptr [eax + 0x20], 7 */ W32((u32)(r_eax+0x20u), 0x7u);
    /* 006af6a9: jmp 0x6af83b */ goto L_006af83b;
L_006af83b:; BB(0x006af83b);
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af640); r_esp += 4; return;
L_006af859:; BB(0x006af859);
    /* 006af859: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af85c: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006af85f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af861: jle 0x6af67e */ if ((fZ||fS!=fO)) goto L_006af67e;
L_006af867:; BB(0x006af867);
    /* 006af867: jmp 0x6af83b */ goto L_006af83b;
}

void f_006af647(void)
{
    FN_ENTER(0x006af647);
    /* 006af647: mov eax, ecx */ r_eax = r_ecx;
    /* 006af649: mov dword ptr [eax + 0x20], 6 */ W32((u32)(r_eax+0x20u), 0x6u);
    /* 006af650: mov edx, 0x384 */ r_edx = 0x384u;
    /* 006af655: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006af658: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 006af65b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006af65d:; BB(0x006af65d);
    /* 006af65d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006af65e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6af663u); f_0068d5a8();
    /* 006af663: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af664: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af666: je 0x6af676 */ if (fZ) goto L_006af676;
L_006af668:; BB(0x006af668);
    /* 006af668: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 006af66b: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af670: jne 0x6af859 */ if (!fZ) goto L_006af859;
L_006af676:; BB(0x006af676);
    /* 006af676: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006af679: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af67c: jl 0x6af65d */ if ((fS!=fO)) goto L_006af65d;
L_006af67e:; BB(0x006af67e);
    /* 006af67e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af681: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006af684: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6af689u); f_007127b0();
    /* 006af689: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006af68c: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 006af693: call 0x6af8d4 */ r_esp -= 4; W32(r_esp, 0x6af698u); f_006af8d4();
    /* 006af698: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af69b: mov dword ptr [eax + 0x3c], 0x1c2 */ W32((u32)(r_eax+0x3cu), 0x1c2u);
    /* 006af6a2: mov dword ptr [eax + 0x20], 7 */ W32((u32)(r_eax+0x20u), 0x7u);
    /* 006af6a9: jmp 0x6af83b */ goto L_006af83b;
L_006af83b:; BB(0x006af83b);
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af647); r_esp += 4; return;
L_006af859:; BB(0x006af859);
    /* 006af859: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af85c: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006af85f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af861: jle 0x6af67e */ if ((fZ||fS!=fO)) goto L_006af67e;
L_006af867:; BB(0x006af867);
    /* 006af867: jmp 0x6af83b */ goto L_006af83b;
}

void f_006af6ae(void)
{
    FN_ENTER(0x006af6ae);
    /* 006af6ae: mov eax, ecx */ r_eax = r_ecx;
    /* 006af6b0: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006af6b3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006af6b6: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 006af6b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af6bb: jg 0x6af83b */ if ((!fZ&&fS==fO)) goto L_006af83b;
L_006af6c1:; BB(0x006af6c1);
    /* 006af6c1: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
    /* 006af6c8: jmp 0x6af83b */ goto L_006af83b;
L_006af83b:; BB(0x006af83b);
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af6ae); r_esp += 4; return;
}

void f_006af6cd(void)
{
    FN_ENTER(0x006af6cd);
    /* 006af6cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006af6cf: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 006af6d5: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 006af6db: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006af6dd: mov word ptr [ebp - 0xa8], ax */ W16((u32)(r_ebp+0xffffff58u), (u16)r_eax);
    /* 006af6e4: mov word ptr [ebp - 0x88], ax */ W16((u32)(r_ebp+0xffffff78u), (u16)r_eax);
    /* 006af6eb: mov word ptr [ebp - 0x68], ax */ W16((u32)(r_ebp+0xffffff98u), (u16)r_eax);
    /* 006af6ef: mov word ptr [ebp - 0x48], ax */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_eax);
L_006af6f3:; BB(0x006af6f3);
    /* 006af6f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006af6f4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6af6f9u); f_0068d5a8();
    /* 006af6f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af6fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af6fc: je 0x6af763 */ if (fZ) goto L_006af763;
L_006af6fe:; BB(0x006af6fe);
    /* 006af6fe: mov edx, dword ptr [esi*4 + 0xa94ab0] */ r_edx = R32((u32)(r_esi*4+0xa94ab0u));
    /* 006af705: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af708: je 0x6af869 */ if (fZ) goto L_006af869;
L_006af70e:; BB(0x006af70e);
    /* 006af70e: mov ebx, 1 */ r_ebx = 0x1u;
L_006af713:; BB(0x006af713);
    /* 006af713: mov edx, dword ptr [ebp + ebx*4 - 0xb0] */ r_edx = R32((u32)(r_ebp+r_ebx*4+0xffffff50u));
    /* 006af71a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af71d: jge 0x6af763 */ if ((fS==fO)) goto L_006af763;
L_006af71f:; BB(0x006af71f);
    /* 006af71f: mov ecx, eax */ r_ecx = r_eax;
    /* 006af721: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x6af726u); f_006936b4();
    /* 006af726: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006af728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006af729: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 006af72c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006af72e: mov edi, dword ptr [ebp + ecx - 0xb0] */ r_edi = R32((u32)(r_ebp+r_ecx+0xffffff50u));
    /* 006af735: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006af738: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 006af73e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006af740: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006af742: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006af744: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006af746: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006af748: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006af74a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006af74c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006af74e: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006af750: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006af752: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006af753: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6af758u); f_00857dec();
    /* 006af758: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006af75b: add dword ptr [ebp + ebx*4 - 0xb0], 1 */ { u32 ad = (u32)(r_ebp+r_ebx*4+0xffffff50u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006af763:; BB(0x006af763);
    /* 006af763: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006af766: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af769: jl 0x6af6f3 */ if ((fS!=fO)) goto L_006af6f3;
L_006af76b:; BB(0x006af76b);
    /* 006af76b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006af76d: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006af76f: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6af774u); f_00792fe8();
    /* 006af774: lea esi, [ebp - 0xa8] */ r_esi = (u32)(r_ebp+0xffffff58u);
    /* 006af77a: lea ebx, [ebp - 0x88] */ r_ebx = (u32)(r_ebp+0xffffff78u);
    /* 006af780: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 006af783: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006af786: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006af787: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006af788: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006af789: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006af78a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006af78b: push 0xa948a0 */ { u32 v = 0xa948a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006af790: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6af795u); f_00857e29();
    /* 006af795: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006af798: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af79b: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006af7a0: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006af7a3: push 0xa948a0 */ { u32 v = 0xa948a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006af7a8: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6af7adu); f_0073ae38();
    /* 006af7ad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af7b0: mov dword ptr [eax + 0x2c], 0xf0 */ W32((u32)(r_eax+0x2cu), 0xf0u);
    /* 006af7b7: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006af7be: jmp 0x6af83b */ goto L_006af83b;
L_006af83b:; BB(0x006af83b);
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af6cd); r_esp += 4; return;
L_006af869:; BB(0x006af869);
    /* 006af869: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006af86b: jmp 0x6af713 */ goto L_006af713;
}

void f_006af7c0(void)
{
    FN_ENTER(0x006af7c0);
    /* 006af7c0: mov eax, ecx */ r_eax = r_ecx;
    /* 006af7c2: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006af7c5: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006af7c8: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 006af7cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af7cd: jle 0x6af870 */ if ((fZ||fS!=fO)) goto L_006af870;
L_006af7d3:; BB(0x006af7d3);
    /* 006af7d3: jmp 0x6af83b */ goto L_006af83b;
L_006af83b:; BB(0x006af83b);
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af7c0); r_esp += 4; return;
L_006af870:; BB(0x006af870);
    /* 006af870: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006af875: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x6af87au); f_006a8f2c();
    /* 006af87a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006af87d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006af880: je 0x6af88e */ if (fZ) goto L_006af88e;
L_006af882:; BB(0x006af882);
    /* 006af882: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af885: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
    /* 006af88c: jmp 0x6af83b */ goto L_006af83b;
L_006af88e:; BB(0x006af88e);
    /* 006af88e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af891: mov dword ptr [eax + 0x20], 3 */ W32((u32)(r_eax+0x20u), 0x3u);
    /* 006af898: jmp 0x6af83b */ goto L_006af83b;
}

void f_006af7d5(void)
{
    FN_ENTER(0x006af7d5);
    /* 006af7d5: mov edx, ecx */ r_edx = r_ecx;
    /* 006af7d7: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006af7dc: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 006af7df: lea eax, [edx + 0x60] */ r_eax = (u32)(r_edx+0x60u);
    /* 006af7e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006af7e3: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6af7e8u); f_0073ae38();
    /* 006af7e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af7eb: mov dword ptr [eax + 0x2c], 0xf0 */ W32((u32)(r_eax+0x2cu), 0xf0u);
    /* 006af7f2: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 006af7f9: jmp 0x6af83b */ goto L_006af83b;
L_006af83b:; BB(0x006af83b);
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af7d5); r_esp += 4; return;
}

void f_006af7fb(void)
{
    FN_ENTER(0x006af7fb);
    /* 006af7fb: mov eax, ecx */ r_eax = r_ecx;
    /* 006af7fd: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006af800: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af802: je 0x6af89a */ if (fZ) goto L_006af89a;
L_006af808:; BB(0x006af808);
    /* 006af808: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af80b: mov dword ptr [0xa94b20], 0 */ W32((u32)(0xa94b20u), 0x0u);
    /* 006af815: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 006af81c: jmp 0x6af83b */ goto L_006af83b;
L_006af83b:; BB(0x006af83b);
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af7fb); r_esp += 4; return;
L_006af89a:; BB(0x006af89a);
    /* 006af89a: mov dword ptr [ebp - 0xb8], 0x43a40000 */ W32((u32)(r_ebp+0xffffff48u), 0x43a40000u);
    /* 006af8a4: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 006af8a6: mov dword ptr [ebp - 0xb4], 0x43260000 */ W32((u32)(r_ebp+0xffffff4cu), 0x43260000u);
    /* 006af8b0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6af8b5u); f_0073ec50();
    /* 006af8b5: lea edx, [ebp - 0xb8] */ r_edx = (u32)(r_ebp+0xffffff48u);
    /* 006af8bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006af8bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006af8be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006af8bf: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x6af8c4u); f_0073a8dc();
    /* 006af8c4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006af8c7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006af8ca: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006af8cd: jmp 0x6af808 */ goto L_006af808;
}

void f_006af81e(void)
{
    FN_ENTER(0x006af81e);
    /* 006af81e: mov eax, ecx */ r_eax = r_ecx;
    /* 006af820: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006af823: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af825: je 0x6af836 */ if (fZ) goto L_006af836;
L_006af827:; BB(0x006af827);
    /* 006af827: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6af82cu); f_007127b0();
    /* 006af82c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006af82f: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006af836:; BB(0x006af836);
    /* 006af836: call 0x6b02e0 */ r_esp -= 4; W32(r_esp, 0x6af83bu); f_006b02e0();
    /* 006af83b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af83e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af841: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af844: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af847: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af84e: mov esp, ebp */ r_esp = r_ebp;
    /* 006af850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af851: ret  */ FN_RET(0x006af81e); r_esp += 4; return;
}

void f_006af8d4(void) /* sub_6AF8D4 */
{
    FN_ENTER(0x006af8d4);
    /* 006af8d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006af8d7: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 006af8dd: mov byte ptr [esp], 0x7d */ W8((u32)(r_esp), 0x7du);
    /* 006af8e1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006af8e6: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 006af8eb: mov byte ptr [esp + 7], al */ W8((u32)(r_esp+0x7u), (u8)r_eax);
    /* 006af8ef: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 006af8f3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006af8f7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006af8fb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006af8ff: mov byte ptr [esp + 4], 4 */ W8((u32)(r_esp+0x4u), 0x4u);
    /* 006af904: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006af908: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006af90b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6af910u); f_008003e0();
    /* 006af910: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006af913: ret  */ FN_RET(0x006af8d4); r_esp += 4; return;
}

void f_006af914(void)
{
    FN_ENTER(0x006af914);
    /* 006af914: call 0x687ef8 */ r_esp -= 4; W32(r_esp, 0x6af919u); f_00687ef8();
    /* 006af919: call 0x5c5874 */ r_esp -= 4; W32(r_esp, 0x6af91eu); f_005c5874();
    /* 006af91e: mov dword ptr [0xa94b34], 1 */ W32((u32)(0xa94b34u), 0x1u);
    /* 006af928: ret  */ FN_RET(0x006af914); r_esp += 4; return;
}

void f_006af92c(void)
{
    FN_ENTER(0x006af92c);
    /* 006af92c: mov eax, dword ptr [0xa94b28] */ r_eax = R32((u32)(0xa94b28u));
    /* 006af931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af933: je 0x6af93c */ if (fZ) goto L_006af93c;
L_006af935:; BB(0x006af935);
    /* 006af935: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_006af93c:; BB(0x006af93c);
    /* 006af93c: ret  */ FN_RET(0x006af92c); r_esp += 4; return;
}

void f_006af940(void) /* sub_6AF940 */
{
    FN_ENTER(0x006af940);
    /* 006af940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006af941: mov ebp, esp */ r_ebp = r_esp;
    /* 006af943: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006af945: push 0x6af9aa */ { u32 v = 0x6af9aau; r_esp -= 4; W32(r_esp, v); }
    /* 006af94a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006af950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006af951: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006af958: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006af95b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006af95e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006af961: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006af964: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006af967: mov eax, dword ptr [0xa94af0] */ r_eax = R32((u32)(0xa94af0u));
    /* 006af96c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af96e: je 0x6af999 */ if (fZ) goto L_006af999;
L_006af970:; BB(0x006af970);
    /* 006af970: je 0x6af98f */ if (fZ) goto L_006af98f;
L_006af972:; BB(0x006af972);
    /* 006af972: push 0x685724 */ { u32 v = 0x685724u; r_esp -= 4; W32(r_esp, v); }
    /* 006af977: push dword ptr [eax - 4] */ { u32 v = R32((u32)(r_eax+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006af97a: lea ebx, [eax - 4] */ r_ebx = (u32)(r_eax+0xfffffffcu);
    /* 006af97d: push 0x4f8 */ { u32 v = 0x4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006af982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006af983: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6af988u); f_008586d6();
    /* 006af988: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006af989: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6af98eu); f_00857e98();
    /* 006af98e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006af98f:; BB(0x006af98f);
    /* 006af98f: mov dword ptr [0xa94af0], 0 */ W32((u32)(0xa94af0u), 0x0u);
L_006af999:; BB(0x006af999);
    /* 006af999: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006af99c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af99f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af9a6: mov esp, ebp */ r_esp = r_ebp;
    /* 006af9a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af9a9: ret  */ FN_RET(0x006af940); r_esp += 4; return;
}

void f_006af9aa(void)
{
    FN_ENTER(0x006af9aa);
    /* 006af9aa: mov eax, 0xb3a730 */ r_eax = 0xb3a730u;
    /* 006af9af: jmp 0x857a43 */ f_00857a43(); return;
}

void f_006af9b4(void)
{
    FN_ENTER(0x006af9b4);
    /* 006af9b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006af9b5: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006af9b9: movsx eax, byte ptr [ebp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x4u));
    /* 006af9bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af9bf: je 0x6afa7c */ if (fZ) goto L_006afa7c;
L_006af9c5:; BB(0x006af9c5);
    /* 006af9c5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006af9c8: je 0x6afa70 */ if (fZ) goto L_006afa70;
L_006af9ce:; BB(0x006af9ce);
    /* 006af9ce: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af9d1: je 0x6afa38 */ if (fZ) goto L_006afa38;
L_006af9d3:; BB(0x006af9d3);
    /* 006af9d3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006af9d6: je 0x6afa2c */ if (fZ) goto L_006afa2c;
L_006af9d8:; BB(0x006af9d8);
    /* 006af9d8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af9db: jne 0x6af9ee */ if (!fZ) goto L_006af9ee;
L_006af9dd:; BB(0x006af9dd);
    /* 006af9dd: mov ecx, dword ptr [0xa94b28] */ r_ecx = R32((u32)(0xa94b28u));
    /* 006af9e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af9e5: je 0x6afa36 */ if (fZ) goto L_006afa36;
L_006af9e7:; BB(0x006af9e7);
    /* 006af9e7: call 0x6ae8f8 */ r_esp -= 4; W32(r_esp, 0x6af9ecu); f_006ae8f8();
    /* 006af9ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af9ed: ret  */ FN_RET(0x006af9b4); r_esp += 4; return;
L_006af9ee:; BB(0x006af9ee);
    /* 006af9ee: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006af9f1: jne 0x6afa36 */ if (!fZ) goto L_006afa36;
L_006af9f3:; BB(0x006af9f3);
    /* 006af9f3: mov eax, dword ptr [0xa94b28] */ r_eax = R32((u32)(0xa94b28u));
    /* 006af9f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af9fa: je 0x6afa36 */ if (fZ) goto L_006afa36;
L_006af9fc:; BB(0x006af9fc);
    /* 006af9fc: mov dword ptr [eax + 0x24], 6 */ W32((u32)(r_eax+0x24u), 0x6u);
    /* 006afa03: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006afa06: mov word ptr [0xa94acc], ax */ W16((u32)(0xa94accu), (u16)r_eax);
    /* 006afa0c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006afa0f: mov word ptr [0xa94ace], dx */ W16((u32)(0xa94aceu), (u16)r_edx);
    /* 006afa16: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006afa19: mov word ptr [0xa94ad0], cx */ W16((u32)(0xa94ad0u), (u16)r_ecx);
    /* 006afa20: mov ebp, dword ptr [ebp + 0x14] */ r_ebp = R32((u32)(r_ebp+0x14u));
    /* 006afa23: mov word ptr [0xa94ad2], bp */ W16((u32)(0xa94ad2u), (u16)r_ebp);
    /* 006afa2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006afa2b: ret  */ FN_RET(0x006af9b4); r_esp += 4; return;
L_006afa2c:; BB(0x006afa2c);
    /* 006afa2c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006afa2f: mov byte ptr [eax + 0xa94b14], 1 */ W8((u32)(r_eax+0xa94b14u), 0x1u);
L_006afa36:; BB(0x006afa36);
    /* 006afa36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006afa37: ret  */ FN_RET(0x006af9b4); r_esp += 4; return;
L_006afa38:; BB(0x006afa38);
    /* 006afa38: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006afa3b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6afa40u); f_0068d5a8();
    /* 006afa40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006afa41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006afa43: je 0x6afa67 */ if (fZ) goto L_006afa67;
L_006afa45:; BB(0x006afa45);
    /* 006afa45: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006afa48: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006afa4e: je 0x6afa5c */ if (fZ) goto L_006afa5c;
L_006afa50:; BB(0x006afa50);
    /* 006afa50: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006afa53: mov dword ptr [eax + 0x898], edx */ W32((u32)(r_eax+0x898u), r_edx);
    /* 006afa59: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
L_006afa5c:; BB(0x006afa5c);
    /* 006afa5c: movsx eax, byte ptr [ebp + 7] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x7u));
    /* 006afa60: mov dword ptr [edx*4 + 0xa94aa0], eax */ W32((u32)(r_edx*4+0xa94aa0u), r_eax);
L_006afa67:; BB(0x006afa67);
    /* 006afa67: add dword ptr [0xa94b38], 1 */ { u32 ad = (u32)(0xa94b38u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006afa6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006afa6f: ret  */ FN_RET(0x006af9b4); r_esp += 4; return;
L_006afa70:; BB(0x006afa70);
    /* 006afa70: mov dword ptr [0xa94b20], 1 */ W32((u32)(0xa94b20u), 0x1u);
    /* 006afa7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006afa7b: ret  */ FN_RET(0x006af9b4); r_esp += 4; return;
L_006afa7c:; BB(0x006afa7c);
    /* 006afa7c: mov eax, dword ptr [0xa94b28] */ r_eax = R32((u32)(0xa94b28u));
    /* 006afa81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006afa83: je 0x6afa36 */ if (fZ) goto L_006afa36;
L_006afa85:; BB(0x006afa85);
    /* 006afa85: movsx edx, byte ptr [ebp + 5] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x5u));
    /* 006afa89: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 006afa8c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006afa8f: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 006afa92: mov ebp, dword ptr [ebp + 0xc] */ r_ebp = R32((u32)(r_ebp+0xcu));
    /* 006afa95: mov dword ptr [eax + 0x54], ebp */ W32((u32)(r_eax+0x54u), r_ebp);
    /* 006afa98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006afa99: ret  */ FN_RET(0x006af9b4); r_esp += 4; return;
}

void f_006afa9c(void)
{
    FN_ENTER(0x006afa9c);
    /* 006afa9c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006afaa0: mov edx, 0xa94af4 */ r_edx = 0xa94af4u;
    /* 006afaa5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006afaa8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006afaaa: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006afaac: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006afaaf: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006afab2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006afab5: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006afab8: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006afabb: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006afabe: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006afac1: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006afac4: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006afac7: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006afaca: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006afacd: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 006afad0: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006afad3: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006afad6: mov dword ptr [0xa94b18], 1 */ W32((u32)(0xa94b18u), 0x1u);
    /* 006afae0: ret  */ FN_RET(0x006afa9c); r_esp += 4; return;
}

void f_006afae4(void) /* sub_6AFAE4 */
{
    FN_ENTER(0x006afae4);
    /* 006afae4: mov eax, dword ptr [0xa94b28] */ r_eax = R32((u32)(0xa94b28u));
    /* 006afae9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006afaeb: je 0x6afb03 */ if (fZ) goto L_006afb03;
L_006afaed:; BB(0x006afaed);
    /* 006afaed: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 006afaf0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006afaf3: je 0x6afafd */ if (fZ) goto L_006afafd;
L_006afaf5:; BB(0x006afaf5);
    /* 006afaf5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006afaf8: je 0x6afafd */ if (fZ) goto L_006afafd;
L_006afafa:; BB(0x006afafa);
    /* 006afafa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006afafc: ret  */ FN_RET(0x006afae4); r_esp += 4; return;
L_006afafd:; BB(0x006afafd);
    /* 006afafd: mov eax, 1 */ r_eax = 0x1u;
    /* 006afb02: ret  */ FN_RET(0x006afae4); r_esp += 4; return;
L_006afb03:; BB(0x006afb03);
    /* 006afb03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006afb05: ret  */ FN_RET(0x006afae4); r_esp += 4; return;
}

void f_006afb08(void) /* sub_6AFB08 */
{
    FN_ENTER(0x006afb08);
    /* 006afb08: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006afb0c: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6afb11u); f_00814f0c();
    /* 006afb11: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006afb15: push -0x32 */ { u32 v = 0xffffffceu; r_esp -= 4; W32(r_esp, v); }
    /* 006afb17: call 0x6ad3d0 */ r_esp -= 4; W32(r_esp, 0x6afb1cu); f_006ad3d0();
    /* 006afb1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006afb1f: ret  */ FN_RET(0x006afb08); r_esp += 4; return;
}

void f_006afb20(void) /* sub_6AFB20 */
{
    FN_ENTER(0x006afb20);
    /* 006afb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006afb21: mov ebp, esp */ r_ebp = r_esp;
    /* 006afb23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006afb25: push 0x8ebd44 */ { u32 v = 0x8ebd44u; r_esp -= 4; W32(r_esp, v); }
    /* 006afb2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006afb30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006afb31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006afb38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006afb3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006afb3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006afb41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006afb44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006afb47: mov eax, dword ptr [0xa94b28] */ r_eax = R32((u32)(0xa94b28u));
    /* 006afb4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006afb4e: je 0x6afb7e */ if (fZ) goto L_006afb7e;
L_006afb50:; BB(0x006afb50);
    /* 006afb50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006afb52: je 0x6afb70 */ if (fZ) goto L_006afb70;
L_006afb54:; BB(0x006afb54);
    /* 006afb54: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006afb59: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006afb5c: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006afb5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006afb60: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6afb65u); f_00857dec();
    /* 006afb65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006afb68: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006afb6b: mov dword ptr [0xa94b2c], eax */ W32((u32)(0xa94b2cu), r_eax);
L_006afb70:; BB(0x006afb70);
    /* 006afb70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006afb73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006afb7a: mov esp, ebp */ r_esp = r_ebp;
    /* 006afb7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006afb7d: ret  */ FN_RET(0x006afb20); r_esp += 4; return;
L_006afb7e:; BB(0x006afb7e);
    /* 006afb7e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006afb85: push 0x46c */ { u32 v = 0x46cu; r_esp -= 4; W32(r_esp, v); }
    /* 006afb8a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6afb8fu); f_005caba4();
    /* 006afb8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006afb90: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006afb93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006afb95: je 0x6afbcb */ if (fZ) goto L_006afbcb;
L_006afb97:; BB(0x006afb97);
    /* 006afb97: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006afb9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006afba5: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006afbab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006afbae: call 0x6afbd0 */ r_esp -= 4; W32(r_esp, 0x6afbb3u); f_006afbd0();
    /* 006afbb3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006afbb6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006afbbd:; BB(0x006afbbd);
    /* 006afbbd: mov dword ptr [0xa94b28], eax */ W32((u32)(0xa94b28u), r_eax);
    /* 006afbc2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006afbc9: jmp 0x6afb50 */ goto L_006afb50;
L_006afbcb:; BB(0x006afbcb);
    /* 006afbcb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006afbcd: jmp 0x6afbbd */ goto L_006afbbd;
}

void f_006afbd0(void) /* sub_6AFBD0 */
{
    FN_ENTER(0x006afbd0);
    /* 006afbd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006afbd1: mov ebp, esp */ r_ebp = r_esp;
    /* 006afbd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006afbd5: push 0x8ebd60 */ { u32 v = 0x8ebd60u; r_esp -= 4; W32(r_esp, v); }
    /* 006afbda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006afbe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006afbe1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006afbe8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006afbeb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006afbee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006afbf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006afbf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006afbf7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006afbfa: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006afbfd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6afc02u); f_008193cc();
    /* 006afc02: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006afc09: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006afc0c: mov dword ptr [ecx], 0xb3a7f0 */ W32((u32)(r_ecx), 0xb3a7f0u);
    /* 006afc12: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006afc14: mov eax, dword ptr [0x9ccb74] */ r_eax = R32((u32)(0x9ccb74u));
    /* 006afc19: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006afc1f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006afc22: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 006afc25: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006afc28: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 006afc2b: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006afc2e: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 006afc31: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 006afc34: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 006afc37: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6afc3cu); f_0068d5a8();
    /* 006afc3c: mov ebx, eax */ r_ebx = r_eax;
    /* 006afc3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006afc41: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006afc43: je 0x6afc59 */ if (fZ) goto L_006afc59;
L_006afc45:; BB(0x006afc45);
    /* 006afc45: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006afc4a: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x6afc4fu); f_006c1bcc();
    /* 006afc4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006afc50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006afc51: call 0x6aab4c */ r_esp -= 4; W32(r_esp, 0x6afc56u); f_006aab4c();
    /* 006afc56: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006afc59:; BB(0x006afc59);
    /* 006afc59: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x6afc5eu); f_00815434();
    /* 006afc5e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006afc61: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006afc64: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 006afc6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006afc6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006afc75: mov esp, ebp */ r_esp = r_ebp;
    /* 006afc77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006afc78: ret 4 */ FN_RET(0x006afbd0); r_esp += 8; return;
}

void f_006afc7c(void) /* sub_6AFC7C */
{
    FN_ENTER(0x006afc7c);
    /* 006afc7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006afc7d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006afc7e: mov eax, 1 */ r_eax = 0x1u;
    /* 006afc83: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006afc85: mov ebp, eax */ r_ebp = r_eax;
    /* 006afc87: mov edi, edx */ r_edi = r_edx;
L_006afc89:; BB(0x006afc89);
    /* 006afc89: movzx ecx, word ptr [edi + 0xa94af4] */ r_ecx = (u32)R16((u32)(r_edi+0xa94af4u));
    /* 006afc90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006afc91: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6afc96u); f_0068d5a8();
    /* 006afc96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006afc97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006afc99: je 0x6afca6 */ if (fZ) goto L_006afca6;
L_006afc9b:; BB(0x006afc9b);
    /* 006afc9b: movsx ecx, word ptr [edi + 0xa94af6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xa94af6u));
    /* 006afca2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006afca4: jne 0x6afcc1 */ if (!fZ) goto L_006afcc1;
L_006afca6:; BB(0x006afca6);
    /* 006afca6: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006afca9: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006afcac: jl 0x6afc89 */ if ((fS!=fO)) goto L_006afc89;
L_006afcae:; BB(0x006afcae);
    /* 006afcae: mov eax, ebp */ r_eax = r_ebp;
L_006afcb0:; BB(0x006afcb0);
    /* 006afcb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006afcb2: je 0x6afcb9 */ if (fZ) goto L_006afcb9;
L_006afcb4:; BB(0x006afcb4);
    /* 006afcb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006afcb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006afcb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006afcb8: ret  */ FN_RET(0x006afc7c); r_esp += 4; return;
L_006afcb9:; BB(0x006afcb9);
    /* 006afcb9: mov eax, dword ptr [0xa94ad4] */ r_eax = R32((u32)(0xa94ad4u));
    /* 006afcbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006afcbf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006afcc0: ret  */ FN_RET(0x006afc7c); r_esp += 4; return;
L_006afcc1:; BB(0x006afcc1);
    /* 006afcc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006afcc3: jmp 0x6afcb0 */ goto L_006afcb0;
}

void f_006afcc8(void) /* sub_6AFCC8 */
{
    FN_ENTER(0x006afcc8);
    /* 006afcc8: mov eax, 0xa94af4 */ r_eax = 0xa94af4u;
    /* 006afccd: ret  */ FN_RET(0x006afcc8); r_esp += 4; return;
}

void f_006afcd0(void) /* sub_6AFCD0 */
{
    FN_ENTER(0x006afcd0);
    /* 006afcd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006afcd1: mov esi, ecx */ r_esi = r_ecx;
    /* 006afcd3: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006afcd6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006afcd9: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 006afcdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006afcde: jle 0x6afce2 */ if ((fZ||fS!=fO)) goto L_006afce2;
L_006afce0:; BB(0x006afce0);
    /* 006afce0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006afce1: ret  */ FN_RET(0x006afcd0); r_esp += 4; return;
L_006afce2:; BB(0x006afce2);
    /* 006afce2: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 006afce5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006afce6: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x6afcebu); f_00814afc();
    /* 006afceb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006afcec: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006afcf0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006afcf5: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 006afcf9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006afcfa: ret  */ FN_RET(0x006afcd0); r_esp += 4; return;
}

void f_006afcfc(void) /* sub_6AFCFC */
{
    FN_ENTER(0x006afcfc);
    /* 006afcfc: mov dword ptr [0xa94ac0], 0x3f800000 */ W32((u32)(0xa94ac0u), 0x3f800000u);
    /* 006afd06: mov dword ptr [0xa94ac4], 0x41000000 */ W32((u32)(0xa94ac4u), 0x41000000u);
    /* 006afd10: mov dword ptr [0xa94ac8], 0x3fc00000 */ W32((u32)(0xa94ac8u), 0x3fc00000u);
    /* 006afd1a: ret  */ FN_RET(0x006afcfc); r_esp += 4; return;
}

void f_006afd1c(void) /* sub_6AFD1C */
{
    FN_ENTER(0x006afd1c);
    /* 006afd1c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006afd1f: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afd24: call 0x6a92e8 */ r_esp -= 4; W32(r_esp, 0x6afd29u); f_006a92e8();
    /* 006afd29: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006afd2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006afd2f: je 0x6b0105 */ if (fZ) goto L_006b0105;
L_006afd35:; BB(0x006afd35);
    /* 006afd35: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afd3a: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 006afd3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afd3e: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afd43: call 0x6a8d7c */ r_esp -= 4; W32(r_esp, 0x6afd48u); f_006a8d7c();
    /* 006afd48: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afd4d: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 006afd51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afd52: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afd57: call 0x6a8d90 */ r_esp -= 4; W32(r_esp, 0x6afd5cu); f_006a8d90();
    /* 006afd5c: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afd61: movzx edx, byte ptr [eax + 2] */ r_edx = (u32)R8((u32)(r_eax+0x2u));
    /* 006afd65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afd66: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afd6b: call 0x6a8da4 */ r_esp -= 4; W32(r_esp, 0x6afd70u); f_006a8da4();
    /* 006afd70: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afd75: movzx edx, byte ptr [eax + 3] */ r_edx = (u32)R8((u32)(r_eax+0x3u));
    /* 006afd79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afd7a: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afd7f: call 0x6a8db8 */ r_esp -= 4; W32(r_esp, 0x6afd84u); f_006a8db8();
    /* 006afd84: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afd89: movzx edx, byte ptr [eax + 4] */ r_edx = (u32)R8((u32)(r_eax+0x4u));
    /* 006afd8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afd8e: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afd93: call 0x6a92d4 */ r_esp -= 4; W32(r_esp, 0x6afd98u); f_006a92d4();
    /* 006afd98: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afd9d: movzx edx, byte ptr [eax + 5] */ r_edx = (u32)R8((u32)(r_eax+0x5u));
    /* 006afda1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afda2: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afda7: call 0x6a8dcc */ r_esp -= 4; W32(r_esp, 0x6afdacu); f_006a8dcc();
    /* 006afdac: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afdb1: movzx edx, byte ptr [eax + 6] */ r_edx = (u32)R8((u32)(r_eax+0x6u));
    /* 006afdb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afdb6: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afdbb: call 0x6a8de0 */ r_esp -= 4; W32(r_esp, 0x6afdc0u); f_006a8de0();
    /* 006afdc0: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afdc5: movzx edx, byte ptr [eax + 7] */ r_edx = (u32)R8((u32)(r_eax+0x7u));
    /* 006afdc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afdca: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afdcf: call 0x6a8df4 */ r_esp -= 4; W32(r_esp, 0x6afdd4u); f_006a8df4();
    /* 006afdd4: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afdd9: movzx edx, byte ptr [eax + 8] */ r_edx = (u32)R8((u32)(r_eax+0x8u));
    /* 006afddd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afdde: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afde3: call 0x6a8e08 */ r_esp -= 4; W32(r_esp, 0x6afde8u); f_006a8e08();
    /* 006afde8: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afded: movzx edx, byte ptr [eax + 0xa] */ r_edx = (u32)R8((u32)(r_eax+0xau));
    /* 006afdf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afdf2: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afdf7: call 0x6a8e30 */ r_esp -= 4; W32(r_esp, 0x6afdfcu); f_006a8e30();
    /* 006afdfc: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afe01: movzx edx, byte ptr [eax + 0xb] */ r_edx = (u32)R8((u32)(r_eax+0xbu));
    /* 006afe05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afe06: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afe0b: call 0x6a8e44 */ r_esp -= 4; W32(r_esp, 0x6afe10u); f_006a8e44();
    /* 006afe10: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afe15: movsx edx, byte ptr [eax + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0xcu));
    /* 006afe19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afe1a: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afe1f: call 0x6a8e80 */ r_esp -= 4; W32(r_esp, 0x6afe24u); f_006a8e80();
    /* 006afe24: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006afe27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006afe29: mov ebx, eax */ r_ebx = r_eax;
L_006afe2b:; BB(0x006afe2b);
    /* 006afe2b: mov edx, dword ptr [0xa94b2c] */ r_edx = R32((u32)(0xa94b2cu));
    /* 006afe31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006afe32: movsx edx, byte ptr [ebx + edx + 0xd] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+r_edx+0xdu));
    /* 006afe37: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afe3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afe3d: call 0x6a92a4 */ r_esp -= 4; W32(r_esp, 0x6afe42u); f_006a92a4();
    /* 006afe42: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006afe45: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006afe48: jl 0x6afe2b */ if ((fS!=fO)) goto L_006afe2b;
L_006afe4a:; BB(0x006afe4a);
    /* 006afe4a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006afe4d: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afe52: movzx edx, byte ptr [eax + 0x11] */ r_edx = (u32)R8((u32)(r_eax+0x11u));
    /* 006afe56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afe57: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afe5c: call 0x6a8e58 */ r_esp -= 4; W32(r_esp, 0x6afe61u); f_006a8e58();
    /* 006afe61: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afe66: movsx edx, byte ptr [eax + 0x12] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x12u));
    /* 006afe6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afe6b: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afe70: call 0x6a9050 */ r_esp -= 4; W32(r_esp, 0x6afe75u); f_006a9050();
    /* 006afe75: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afe7a: movzx edx, byte ptr [eax + 0x13] */ r_edx = (u32)R8((u32)(r_eax+0x13u));
    /* 006afe7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afe7f: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afe84: call 0x6a8e6c */ r_esp -= 4; W32(r_esp, 0x6afe89u); f_006a8e6c();
    /* 006afe89: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afe8e: movzx edx, byte ptr [eax + 0x18] */ r_edx = (u32)R8((u32)(r_eax+0x18u));
    /* 006afe92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afe93: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afe98: call 0x6a8f9c */ r_esp -= 4; W32(r_esp, 0x6afe9du); f_006a8f9c();
    /* 006afe9d: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afea2: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 006afea6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afea7: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afeac: call 0x6a8fbc */ r_esp -= 4; W32(r_esp, 0x6afeb1u); f_006a8fbc();
    /* 006afeb1: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afeb6: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 006afeba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afebb: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afec0: call 0x6a8ffc */ r_esp -= 4; W32(r_esp, 0x6afec5u); f_006a8ffc();
    /* 006afec5: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afeca: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006afecd: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afed2: call 0x6a9038 */ r_esp -= 4; W32(r_esp, 0x6afed7u); f_006a9038();
    /* 006afed7: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afedc: movzx edx, word ptr [eax + 0x28] */ r_edx = (u32)R16((u32)(r_eax+0x28u));
    /* 006afee0: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006afee3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006afee4: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006afee9: call 0x6a8e98 */ r_esp -= 4; W32(r_esp, 0x6afeeeu); f_006a8e98();
    /* 006afeee: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006afef3: movsx edx, byte ptr [eax + 9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x9u));
    /* 006afef7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006afefa: je 0x6b0120 */ if (fZ) goto L_006b0120;
L_006aff00:; BB(0x006aff00);
    /* 006aff00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006aff02:; BB(0x006aff02);
    /* 006aff02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aff03: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006aff08: call 0x6a8e1c */ r_esp -= 4; W32(r_esp, 0x6aff0du); f_006a8e1c();
    /* 006aff0d: mov eax, dword ptr [0xa94254] */ r_eax = R32((u32)(0xa94254u));
    /* 006aff12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aff14: je 0x6aff88 */ if (fZ) goto L_006aff88;
L_006aff16:; BB(0x006aff16);
    /* 006aff16: mov edx, dword ptr [0x9ccb78] */ r_edx = R32((u32)(0x9ccb78u));
    /* 006aff1c: mov ecx, dword ptr [0x9ccb88] */ r_ecx = R32((u32)(0x9ccb88u));
    /* 006aff22: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 006aff28: mov edx, dword ptr [0x9ccb7c] */ r_edx = R32((u32)(0x9ccb7cu));
    /* 006aff2e: mov dword ptr [eax + 0x86c], ecx */ W32((u32)(r_eax+0x86cu), r_ecx);
    /* 006aff34: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 006aff3a: mov edx, dword ptr [0xa94aec] */ r_edx = R32((u32)(0xa94aecu));
    /* 006aff40: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 006aff46: mov edx, dword ptr [0x9ccb80] */ r_edx = R32((u32)(0x9ccb80u));
    /* 006aff4c: mov dword ptr [eax + 0x840], edx */ W32((u32)(r_eax+0x840u), r_edx);
    /* 006aff52: mov edx, dword ptr [0x9ccb8c] */ r_edx = R32((u32)(0x9ccb8cu));
    /* 006aff58: mov dword ptr [eax + 0x83c], edx */ W32((u32)(r_eax+0x83cu), r_edx);
    /* 006aff5e: mov edx, dword ptr [0x9ccb84] */ r_edx = R32((u32)(0x9ccb84u));
    /* 006aff64: mov dword ptr [eax + 0x850], edx */ W32((u32)(r_eax+0x850u), r_edx);
    /* 006aff6a: mov edx, dword ptr [0x9ccb90] */ r_edx = R32((u32)(0x9ccb90u));
    /* 006aff70: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 006aff76: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006aff7c: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006aff82: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_006aff88:; BB(0x006aff88);
    /* 006aff88: mov eax, dword ptr [0xa94258] */ r_eax = R32((u32)(0xa94258u));
    /* 006aff8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aff8f: je 0x6b0003 */ if (fZ) goto L_006b0003;
L_006aff91:; BB(0x006aff91);
    /* 006aff91: mov edx, dword ptr [0x9ccb78] */ r_edx = R32((u32)(0x9ccb78u));
    /* 006aff97: mov ecx, dword ptr [0x9ccb88] */ r_ecx = R32((u32)(0x9ccb88u));
    /* 006aff9d: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 006affa3: mov edx, dword ptr [0x9ccb7c] */ r_edx = R32((u32)(0x9ccb7cu));
    /* 006affa9: mov dword ptr [eax + 0x86c], ecx */ W32((u32)(r_eax+0x86cu), r_ecx);
    /* 006affaf: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 006affb5: mov edx, dword ptr [0xa94aec] */ r_edx = R32((u32)(0xa94aecu));
    /* 006affbb: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 006affc1: mov edx, dword ptr [0x9ccb80] */ r_edx = R32((u32)(0x9ccb80u));
    /* 006affc7: mov dword ptr [eax + 0x840], edx */ W32((u32)(r_eax+0x840u), r_edx);
    /* 006affcd: mov edx, dword ptr [0x9ccb8c] */ r_edx = R32((u32)(0x9ccb8cu));
    /* 006affd3: mov dword ptr [eax + 0x83c], edx */ W32((u32)(r_eax+0x83cu), r_edx);
    /* 006affd9: mov edx, dword ptr [0x9ccb84] */ r_edx = R32((u32)(0x9ccb84u));
    /* 006affdf: mov dword ptr [eax + 0x850], edx */ W32((u32)(r_eax+0x850u), r_edx);
    /* 006affe5: mov edx, dword ptr [0x9ccb90] */ r_edx = R32((u32)(0x9ccb90u));
    /* 006affeb: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 006afff1: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006afff7: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006afffd: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_006b0003:; BB(0x006b0003);
    /* 006b0003: mov eax, dword ptr [0xa9425c] */ r_eax = R32((u32)(0xa9425cu));
    /* 006b0008: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b000a: je 0x6b007e */ if (fZ) goto L_006b007e;
L_006b000c:; BB(0x006b000c);
    /* 006b000c: mov edx, dword ptr [0x9ccb78] */ r_edx = R32((u32)(0x9ccb78u));
    /* 006b0012: mov ecx, dword ptr [0x9ccb88] */ r_ecx = R32((u32)(0x9ccb88u));
    /* 006b0018: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 006b001e: mov edx, dword ptr [0x9ccb7c] */ r_edx = R32((u32)(0x9ccb7cu));
    /* 006b0024: mov dword ptr [eax + 0x86c], ecx */ W32((u32)(r_eax+0x86cu), r_ecx);
    /* 006b002a: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 006b0030: mov edx, dword ptr [0xa94aec] */ r_edx = R32((u32)(0xa94aecu));
    /* 006b0036: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 006b003c: mov edx, dword ptr [0x9ccb80] */ r_edx = R32((u32)(0x9ccb80u));
    /* 006b0042: mov dword ptr [eax + 0x840], edx */ W32((u32)(r_eax+0x840u), r_edx);
    /* 006b0048: mov edx, dword ptr [0x9ccb8c] */ r_edx = R32((u32)(0x9ccb8cu));
    /* 006b004e: mov dword ptr [eax + 0x83c], edx */ W32((u32)(r_eax+0x83cu), r_edx);
    /* 006b0054: mov edx, dword ptr [0x9ccb84] */ r_edx = R32((u32)(0x9ccb84u));
    /* 006b005a: mov dword ptr [eax + 0x850], edx */ W32((u32)(r_eax+0x850u), r_edx);
    /* 006b0060: mov edx, dword ptr [0x9ccb90] */ r_edx = R32((u32)(0x9ccb90u));
    /* 006b0066: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 006b006c: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006b0072: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006b0078: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_006b007e:; BB(0x006b007e);
    /* 006b007e: mov eax, dword ptr [0xa94260] */ r_eax = R32((u32)(0xa94260u));
    /* 006b0083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0085: je 0x6b00f9 */ if (fZ) goto L_006b00f9;
L_006b0087:; BB(0x006b0087);
    /* 006b0087: mov edx, dword ptr [0x9ccb78] */ r_edx = R32((u32)(0x9ccb78u));
    /* 006b008d: mov ecx, dword ptr [0x9ccb88] */ r_ecx = R32((u32)(0x9ccb88u));
    /* 006b0093: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 006b0099: mov edx, dword ptr [0x9ccb7c] */ r_edx = R32((u32)(0x9ccb7cu));
    /* 006b009f: mov dword ptr [eax + 0x86c], ecx */ W32((u32)(r_eax+0x86cu), r_ecx);
    /* 006b00a5: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 006b00ab: mov edx, dword ptr [0xa94aec] */ r_edx = R32((u32)(0xa94aecu));
    /* 006b00b1: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 006b00b7: mov edx, dword ptr [0x9ccb80] */ r_edx = R32((u32)(0x9ccb80u));
    /* 006b00bd: mov dword ptr [eax + 0x840], edx */ W32((u32)(r_eax+0x840u), r_edx);
    /* 006b00c3: mov edx, dword ptr [0x9ccb8c] */ r_edx = R32((u32)(0x9ccb8cu));
    /* 006b00c9: mov dword ptr [eax + 0x83c], edx */ W32((u32)(r_eax+0x83cu), r_edx);
    /* 006b00cf: mov edx, dword ptr [0x9ccb84] */ r_edx = R32((u32)(0x9ccb84u));
    /* 006b00d5: mov dword ptr [eax + 0x850], edx */ W32((u32)(r_eax+0x850u), r_edx);
    /* 006b00db: mov edx, dword ptr [0x9ccb90] */ r_edx = R32((u32)(0x9ccb90u));
    /* 006b00e1: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 006b00e7: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006b00ed: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006b00f3: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_006b00f9:; BB(0x006b00f9);
    /* 006b00f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b00fb: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006b0100: call 0x6a8d68 */ r_esp -= 4; W32(r_esp, 0x6b0105u); f_006a8d68();
L_006b0105:; BB(0x006b0105);
    /* 006b0105: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b010b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0110u); f_0068d5a8();
    /* 006b0110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0113: je 0x6b011a */ if (fZ) goto L_006b011a;
L_006b0115:; BB(0x006b0115);
    /* 006b0115: call 0x690674 */ r_esp -= 4; W32(r_esp, 0x6b011au); f_00690674();
L_006b011a:; BB(0x006b011a);
    /* 006b011a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b011d: ret 4 */ FN_RET(0x006afd1c); r_esp += 8; return;
L_006b0120:; BB(0x006b0120);
    /* 006b0120: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006b0125: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0128: jne 0x6aff00 */ if (!fZ) goto L_006aff00;
L_006b012e:; BB(0x006b012e);
    /* 006b012e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006b0131: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006b0135: mov edx, 1 */ r_edx = 0x1u;
    /* 006b013a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b013c: mov ebx, eax */ r_ebx = r_eax;
    /* 006b013e: mov esi, edx */ r_esi = r_edx;
L_006b0140:; BB(0x006b0140);
    /* 006b0140: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b0141: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0146u); f_0068d5a8();
    /* 006b0146: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0149: je 0x6b0184 */ if (fZ) goto L_006b0184;
L_006b014b:; BB(0x006b014b);
    /* 006b014b: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006b014d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006b0150: je 0x6b0159 */ if (fZ) goto L_006b0159;
L_006b0152:; BB(0x006b0152);
    /* 006b0152: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006b0157: jmp 0x6b015e */ goto L_006b015e;
L_006b0159:; BB(0x006b0159);
    /* 006b0159: mov ecx, 2 */ r_ecx = 0x2u;
L_006b015e:; BB(0x006b015e);
    /* 006b015e: mov dword ptr [ebx*4 + 0xa94ab0], ecx */ W32((u32)(r_ebx*4+0xa94ab0u), r_ecx);
    /* 006b0165: mov dword ptr [eax + 0x900], ecx */ W32((u32)(r_eax+0x900u), r_ecx);
L_006b016b:; BB(0x006b016b);
    /* 006b016b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b016e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b0171: jl 0x6b0140 */ if ((fS!=fO)) goto L_006b0140;
L_006b0173:; BB(0x006b0173);
    /* 006b0173: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006b0176: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006b017a: mov eax, 1 */ r_eax = 0x1u;
    /* 006b017f: jmp 0x6aff02 */ goto L_006aff02;
L_006b0184:; BB(0x006b0184);
    /* 006b0184: mov dword ptr [ebx*4 + 0xa94ab0], 0xffffffff */ W32((u32)(r_ebx*4+0xa94ab0u), 0xffffffffu);
    /* 006b018f: jmp 0x6b016b */ goto L_006b016b;
}

