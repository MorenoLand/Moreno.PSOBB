#include "protos.h"

void f_005b82cf(void)
{
    FN_ENTER(0x005b82cf);
    goto L_005b82cf;
L_005b7bd1:; BB(0x005b7bd1);
    /* 005b7bd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7bd4: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 005b7bd7: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b7bda: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b7bdd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7be0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b7be7: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7be9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7bea: ret 0x14 */ FN_RET(0x005b82cf); r_esp += 24; return;
L_005b8261:; BB(0x005b8261);
    /* 005b8261: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8264: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005b826a: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 005b826d: mov ecx, dword ptr [edx + ebx*8 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 005b8271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8273: je 0x5b8304 */ if (fZ) goto L_005b8304;
L_005b8279:; BB(0x005b8279);
    /* 005b8279: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b827c: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 005b827f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8282: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8283: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5b8288u); f_00858900();
    /* 005b8288: push 0x92b2b8 */ { u32 v = 0x92b2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b828d: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 005b8290: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 005b8293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8294: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8295: call 0x78e1c0 */ r_esp -= 4; W32(r_esp, 0x5b829au); f_0078e1c0();
    /* 005b829a: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b82a0: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 005b82a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b82a4: call 0x5bb53c */ r_esp -= 4; W32(r_esp, 0x5b82a9u); f_005bb53c();
    /* 005b82a9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b82ac: cmp eax, 0x90000 */ {  u32 a = r_eax; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b82b1: jg 0x5b833c */ if ((!fZ&&fS==fO)) goto L_005b833c;
L_005b82b7:; BB(0x005b82b7);
    /* 005b82b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b82b9: jle 0x5b82e8 */ if ((fZ||fS!=fO)) goto L_005b82e8;
L_005b82bb:; BB(0x005b82bb);
    /* 005b82bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b82be: mov ecx, dword ptr [0xa74a60] */ r_ecx = R32((u32)(0xa74a60u));
    /* 005b82c4: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 005b82ca: mov edx, dword ptr [edi + ebx*8 + 0xc] */ r_edx = R32((u32)(r_edi+r_ebx*8+0xcu));
    /* 005b82ce: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5b82d3u); f_0082a7d8();
L_005b82cf:; BB(0x005b82cf);
    /* 005b82cf: add eax, 0x8b002725 */ {  u32 a = r_eax; u32 b = 0x8b002725u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b82d3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b82d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b82d5: in al, dx */ UNSUP(0x005b82d5, "in al, dx");
    /* 005b82d6: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 005b82dc: or dword ptr [eax + ebx*8], 1 */ { u32 ad = (u32)(r_eax+r_ebx*8);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b82e0: mov edi, dword ptr [edx + 0x434] */ r_edi = R32((u32)(r_edx+0x434u));
    /* 005b82e6: jmp 0x5b8304 */ goto L_005b8304;
L_005b82e8:; BB(0x005b82e8);
    /* 005b82e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b82eb: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 005b82f1: or dword ptr [eax + ebx*8], 2 */ { u32 ad = (u32)(r_eax+r_ebx*8);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b82f5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005b82f7: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b82fa: je 0x5b8320 */ if (fZ) goto L_005b8320;
L_005b82fc:; BB(0x005b82fc);
    /* 005b82fc: mov eax, edx */ r_eax = r_edx;
    /* 005b82fe: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
L_005b8304:; BB(0x005b8304);
    /* 005b8304: add dword ptr [ebp - 0x28], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8308: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b830b: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b830d: jl 0x5b8261 */ if ((fS!=fO)) goto L_005b8261;
L_005b8313:; BB(0x005b8313);
    /* 005b8313: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8316: call 0x5b745c */ r_esp -= 4; W32(r_esp, 0x5b831bu); f_005b745c();
    /* 005b831b: jmp 0x5b7bd1 */ goto L_005b7bd1;
L_005b8320:; BB(0x005b8320);
    /* 005b8320: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 005b8323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8324: push 0x92b2dc */ { u32 v = 0x92b2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8329: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b832eu); f_0061cdb0();
    /* 005b832e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8331: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8334: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
    /* 005b833a: jmp 0x5b8304 */ goto L_005b8304;
L_005b833c:; BB(0x005b833c);
    /* 005b833c: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 005b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8340: push 0x92b2bc */ { u32 v = 0x92b2bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8345: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b834au); f_0061cdb0();
    /* 005b834a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b834d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8350: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
    /* 005b8356: jmp 0x5b8304 */ goto L_005b8304;
}

void f_005b83bc(void) /* sub_5B83BC */
{
    FN_ENTER(0x005b83bc);
    /* 005b83bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b83bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b83be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b83bf: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b83c1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005b83c5: mov ebp, dword ptr [ebx + 0x424] */ r_ebp = R32((u32)(r_ebx+0x424u));
    /* 005b83cb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b83cd: je 0x5b840a */ if (fZ) goto L_005b840a;
L_005b83cf:; BB(0x005b83cf);
    /* 005b83cf: mov edx, dword ptr [ebx + 0x428] */ r_edx = R32((u32)(r_ebx+0x428u));
    /* 005b83d5: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b83d7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005b83da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b83db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b83dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b83dd: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005b83e1: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 005b83e5: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b83eau); f_0083b124();
    /* 005b83ea: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005b83ed: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b83f0: lea eax, [edx + edx + 2] */ r_eax = (u32)(r_edx+r_edx+0x2u);
    /* 005b83f4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b83f6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b83f8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b83fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b83fc: add dword ptr [ebx + 0x428], eax */ { u32 ad = (u32)(r_ebx+0x428u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8402: mov eax, ebp */ r_eax = r_ebp;
    /* 005b8404: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8405: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8406: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8407: ret 0xc */ FN_RET(0x005b83bc); r_esp += 16; return;
L_005b840a:; BB(0x005b840a);
    /* 005b840a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b840c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b840d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b840e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b840f: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005b8413: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 005b8417: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b841cu); f_0083b124();
    /* 005b841c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b841d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b841e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b841f: ret 0xc */ FN_RET(0x005b83bc); r_esp += 16; return;
}

void f_005b8424(void) /* sub_5B8424 */
{
    FN_ENTER(0x005b8424);
    /* 005b8424: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8425: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8426: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8427: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8428: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b842a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005b842c: mov eax, edx */ r_eax = r_edx;
    /* 005b842e: and eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b8433: jne 0x5b856f */ if (!fZ) goto L_005b856f;
L_005b8439:; BB(0x005b8439);
    /* 005b8439: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b843c: je 0x5b847d */ if (fZ) goto L_005b847d;
L_005b843e:; BB(0x005b843e);
    /* 005b843e: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8444: je 0x5b8450 */ if (fZ) goto L_005b8450;
L_005b8446:; BB(0x005b8446);
    /* 005b8446: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b844c: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 005b844e: jmp 0x5b847d */ goto L_005b847d;
L_005b8450:; BB(0x005b8450);
    /* 005b8450: mov edx, dword ptr [ebx + 0x418] */ r_edx = R32((u32)(r_ebx+0x418u));
    /* 005b8456: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8458: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b845a: jle 0x5b8473 */ if ((fZ||fS!=fO)) goto L_005b8473;
L_005b845c:; BB(0x005b845c);
    /* 005b845c: mov esi, eax */ r_esi = r_eax;
L_005b845e:; BB(0x005b845e);
    /* 005b845e: push dword ptr [ebx + esi*4 + 0x18] */ { u32 v = R32((u32)(r_ebx+r_esi*4+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8462: call 0x5baa9c */ r_esp -= 4; W32(r_esp, 0x5b8467u); f_005baa9c();
    /* 005b8467: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8468: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b846b: cmp esi, dword ptr [ebx + 0x418] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x418u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8471: jl 0x5b845e */ if ((fS!=fO)) goto L_005b845e;
L_005b8473:; BB(0x005b8473);
    /* 005b8473: mov eax, 0x92b2a8 */ r_eax = 0x92b2a8u;
    /* 005b8478: call 0x5b85c0 */ r_esp -= 4; W32(r_esp, 0x5b847du); f_005b85c0();
L_005b847d:; BB(0x005b847d);
    /* 005b847d: mov eax, dword ptr [ebx + 0x434] */ r_eax = R32((u32)(r_ebx+0x434u));
    /* 005b8483: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b8485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b8487: jle 0x5b8564 */ if ((fZ||fS!=fO)) goto L_005b8564;
L_005b848d:; BB(0x005b848d);
    /* 005b848d: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b8493: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005b8496: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8498: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b849a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b849c: mov edi, edx */ r_edi = r_edx;
    /* 005b849e: mov esi, ecx */ r_esi = r_ecx;
L_005b84a0:; BB(0x005b84a0);
    /* 005b84a0: mov ecx, dword ptr [eax + esi + 8] */ r_ecx = R32((u32)(r_eax+r_esi+0x8u));
    /* 005b84a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84a6: je 0x5b84b2 */ if (fZ) goto L_005b84b2;
L_005b84a8:; BB(0x005b84a8);
    /* 005b84a8: mov edx, dword ptr [ebx + 0x424] */ r_edx = R32((u32)(r_ebx+0x424u));
    /* 005b84ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84b0: je 0x5b851b */ if (fZ) goto L_005b851b;
L_005b84b2:; BB(0x005b84b2);
    /* 005b84b2: mov ecx, dword ptr [eax + esi + 0xc] */ r_ecx = R32((u32)(r_eax+r_esi+0xcu));
    /* 005b84b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84b8: je 0x5b84d0 */ if (fZ) goto L_005b84d0;
L_005b84ba:; BB(0x005b84ba);
    /* 005b84ba: mov edx, dword ptr [eax + esi] */ r_edx = R32((u32)(r_eax+r_esi));
    /* 005b84bd: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b84c0: jne 0x5b8550 */ if (!fZ) goto L_005b8550;
L_005b84c6:; BB(0x005b84c6);
    /* 005b84c6: mov edx, dword ptr [ebx + 0x424] */ r_edx = R32((u32)(r_ebx+0x424u));
    /* 005b84cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84ce: je 0x5b8543 */ if (fZ) goto L_005b8543;
L_005b84d0:; BB(0x005b84d0);
    /* 005b84d0: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b84d3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b84d6: cmp edi, dword ptr [ebx + 0x434] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x434u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b84dc: jl 0x5b84a0 */ if ((fS!=fO)) goto L_005b84a0;
L_005b84de:; BB(0x005b84de);
    /* 005b84de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b84df: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5b84e4u); f_00857e98();
    /* 005b84e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b84e5: mov edx, dword ptr [ebx + 0x438] */ r_edx = R32((u32)(r_ebx+0x438u));
    /* 005b84eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b84ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b84ef: jle 0x5b853b */ if ((fZ||fS!=fO)) goto L_005b853b;
L_005b84f1:; BB(0x005b84f1);
    /* 005b84f1: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 005b84f7: mov esi, ecx */ r_esi = r_ecx;
L_005b84f9:; BB(0x005b84f9);
    /* 005b84f9: mov ecx, dword ptr [eax + esi*8 + 4] */ r_ecx = R32((u32)(r_eax+r_esi*8+0x4u));
    /* 005b84fd: mov edi, dword ptr [ebx + 0x424] */ r_edi = R32((u32)(r_ebx+0x424u));
    /* 005b8503: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8505: je 0x5b8528 */ if (fZ) goto L_005b8528;
L_005b8507:; BB(0x005b8507);
    /* 005b8507: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b850a: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b850c: jl 0x5b84f9 */ if ((fS!=fO)) goto L_005b84f9;
L_005b850e:; BB(0x005b850e);
    /* 005b850e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b850f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5b8514u); f_00857e98();
    /* 005b8514: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8517: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8518: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b8519: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b851a: ret  */ FN_RET(0x005b8424); r_esp += 4; return;
L_005b851b:; BB(0x005b851b);
    /* 005b851b: call 0x83b118 */ r_esp -= 4; W32(r_esp, 0x5b8520u); f_0083b118();
    /* 005b8520: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b8526: jmp 0x5b84b2 */ goto L_005b84b2;
L_005b8528:; BB(0x005b8528);
    /* 005b8528: call 0x83b118 */ r_esp -= 4; W32(r_esp, 0x5b852du); f_0083b118();
    /* 005b852d: mov edx, dword ptr [ebx + 0x438] */ r_edx = R32((u32)(r_ebx+0x438u));
    /* 005b8533: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 005b8539: jmp 0x5b8507 */ goto L_005b8507;
L_005b853b:; BB(0x005b853b);
    /* 005b853b: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 005b8541: jmp 0x5b850e */ goto L_005b850e;
L_005b8543:; BB(0x005b8543);
    /* 005b8543: call 0x83b118 */ r_esp -= 4; W32(r_esp, 0x5b8548u); f_0083b118();
    /* 005b8548: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b854e: jmp 0x5b84d0 */ goto L_005b84d0;
L_005b8550:; BB(0x005b8550);
    /* 005b8550: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x5b8555u); f_00829de0();
    /* 005b8555: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b855b: mov ecx, dword ptr [eax + esi + 0xc] */ r_ecx = R32((u32)(r_eax+r_esi+0xcu));
    /* 005b855f: jmp 0x5b84c6 */ goto L_005b84c6;
L_005b8564:; BB(0x005b8564);
    /* 005b8564: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b856a: jmp 0x5b84de */ goto L_005b84de;
L_005b856f:; BB(0x005b856f);
    /* 005b856f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8571: je 0x5b8439 */ if (fZ) goto L_005b8439;
L_005b8577:; BB(0x005b8577);
    /* 005b8577: mov ecx, dword ptr [ebx + 0x434] */ r_ecx = R32((u32)(r_ebx+0x434u));
    /* 005b857d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b857f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8581: je 0x5b85af */ if (fZ) goto L_005b85af;
L_005b8583:; BB(0x005b8583);
    /* 005b8583: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005b8586: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8588: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b858a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b858c: mov edi, eax */ r_edi = r_eax;
    /* 005b858e: mov esi, edx */ r_esi = r_edx;
L_005b8590:; BB(0x005b8590);
    /* 005b8590: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b8596: mov ecx, dword ptr [esi + eax + 8] */ r_ecx = R32((u32)(r_esi+r_eax+0x8u));
    /* 005b859a: call 0x834f64 */ r_esp -= 4; W32(r_esp, 0x5b859fu); f_00834f64();
    /* 005b859f: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b85a2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b85a5: cmp edi, dword ptr [ebx + 0x434] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x434u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b85ab: jb 0x5b8590 */ if (fC) goto L_005b8590;
L_005b85ad:; BB(0x005b85ad);
    /* 005b85ad: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
L_005b85af:; BB(0x005b85af);
    /* 005b85af: and edx, 0xffffefff */ {  u32 a = r_edx; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b85b5: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 005b85b7: jmp 0x5b8439 */ goto L_005b8439;
}

void f_005b84a2(void)
{
    FN_ENTER(0x005b84a2);
    goto L_005b84a2;
L_005b84a0:; BB(0x005b84a0);
    /* 005b84a0: mov ecx, dword ptr [eax + esi + 8] */ r_ecx = R32((u32)(r_eax+r_esi+0x8u));
L_005b84a2:; BB(0x005b84a2);
    /* 005b84a2: xor byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 005b84a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84a6: je 0x5b84b2 */ if (fZ) goto L_005b84b2;
L_005b84a8:; BB(0x005b84a8);
    /* 005b84a8: mov edx, dword ptr [ebx + 0x424] */ r_edx = R32((u32)(r_ebx+0x424u));
    /* 005b84ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84b0: je 0x5b851b */ if (fZ) goto L_005b851b;
L_005b84b2:; BB(0x005b84b2);
    /* 005b84b2: mov ecx, dword ptr [eax + esi + 0xc] */ r_ecx = R32((u32)(r_eax+r_esi+0xcu));
    /* 005b84b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84b8: je 0x5b84d0 */ if (fZ) goto L_005b84d0;
L_005b84ba:; BB(0x005b84ba);
    /* 005b84ba: mov edx, dword ptr [eax + esi] */ r_edx = R32((u32)(r_eax+r_esi));
    /* 005b84bd: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b84c0: jne 0x5b8550 */ if (!fZ) goto L_005b8550;
L_005b84c6:; BB(0x005b84c6);
    /* 005b84c6: mov edx, dword ptr [ebx + 0x424] */ r_edx = R32((u32)(r_ebx+0x424u));
    /* 005b84cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84ce: je 0x5b8543 */ if (fZ) goto L_005b8543;
L_005b84d0:; BB(0x005b84d0);
    /* 005b84d0: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b84d3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b84d6: cmp edi, dword ptr [ebx + 0x434] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x434u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b84dc: jl 0x5b84a0 */ if ((fS!=fO)) goto L_005b84a0;
L_005b84de:; BB(0x005b84de);
    /* 005b84de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b84df: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5b84e4u); f_00857e98();
    /* 005b84e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b84e5: mov edx, dword ptr [ebx + 0x438] */ r_edx = R32((u32)(r_ebx+0x438u));
    /* 005b84eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b84ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b84ef: jle 0x5b853b */ if ((fZ||fS!=fO)) goto L_005b853b;
L_005b84f1:; BB(0x005b84f1);
    /* 005b84f1: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 005b84f7: mov esi, ecx */ r_esi = r_ecx;
L_005b84f9:; BB(0x005b84f9);
    /* 005b84f9: mov ecx, dword ptr [eax + esi*8 + 4] */ r_ecx = R32((u32)(r_eax+r_esi*8+0x4u));
    /* 005b84fd: mov edi, dword ptr [ebx + 0x424] */ r_edi = R32((u32)(r_ebx+0x424u));
    /* 005b8503: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8505: je 0x5b8528 */ if (fZ) goto L_005b8528;
L_005b8507:; BB(0x005b8507);
    /* 005b8507: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b850a: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b850c: jl 0x5b84f9 */ if ((fS!=fO)) goto L_005b84f9;
L_005b850e:; BB(0x005b850e);
    /* 005b850e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b850f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5b8514u); f_00857e98();
    /* 005b8514: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8517: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8518: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b8519: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b851a: ret  */ FN_RET(0x005b84a2); r_esp += 4; return;
L_005b851b:; BB(0x005b851b);
    /* 005b851b: call 0x83b118 */ r_esp -= 4; W32(r_esp, 0x5b8520u); f_0083b118();
    /* 005b8520: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b8526: jmp 0x5b84b2 */ goto L_005b84b2;
L_005b8528:; BB(0x005b8528);
    /* 005b8528: call 0x83b118 */ r_esp -= 4; W32(r_esp, 0x5b852du); f_0083b118();
    /* 005b852d: mov edx, dword ptr [ebx + 0x438] */ r_edx = R32((u32)(r_ebx+0x438u));
    /* 005b8533: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 005b8539: jmp 0x5b8507 */ goto L_005b8507;
L_005b853b:; BB(0x005b853b);
    /* 005b853b: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 005b8541: jmp 0x5b850e */ goto L_005b850e;
L_005b8543:; BB(0x005b8543);
    /* 005b8543: call 0x83b118 */ r_esp -= 4; W32(r_esp, 0x5b8548u); f_0083b118();
    /* 005b8548: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b854e: jmp 0x5b84d0 */ goto L_005b84d0;
L_005b8550:; BB(0x005b8550);
    /* 005b8550: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x5b8555u); f_00829de0();
    /* 005b8555: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b855b: mov ecx, dword ptr [eax + esi + 0xc] */ r_ecx = R32((u32)(r_eax+r_esi+0xcu));
    /* 005b855f: jmp 0x5b84c6 */ goto L_005b84c6;
}

void f_005b85bc(void) /* sub_5B85BC */
{
    FN_ENTER(0x005b85bc);
    /* 005b85bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b85c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b85c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b85c2: mov edx, dword ptr [0xa74a58] */ r_edx = R32((u32)(0xa74a58u));
    /* 005b85c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b85ca: jne 0x5b860d */ if (!fZ) goto L_005b860d;
L_005b85cc:; BB(0x005b85cc);
    /* 005b85cc: mov edi, 0xa74a38 */ r_edi = 0xa74a38u;
    /* 005b85d1: mov esi, eax */ r_esi = r_eax;
L_005b85d3:; BB(0x005b85d3);
    /* 005b85d3: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 005b85d5: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b85d7: jne 0x5b85f3 */ if (!fZ) goto L_005b85f3;
L_005b85d9:; BB(0x005b85d9);
    /* 005b85d9: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005b85db: je 0x5b85ef */ if (fZ) goto L_005b85ef;
L_005b85dd:; BB(0x005b85dd);
    /* 005b85dd: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 005b85e0: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b85e3: jne 0x5b85f3 */ if (!fZ) goto L_005b85f3;
L_005b85e5:; BB(0x005b85e5);
    /* 005b85e5: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b85e8: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b85eb: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005b85ed: jne 0x5b85d3 */ if (!fZ) goto L_005b85d3;
L_005b85ef:; BB(0x005b85ef);
    /* 005b85ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b85f1: jmp 0x5b85f8 */ goto L_005b85f8;
L_005b85f3:; BB(0x005b85f3);
    /* 005b85f3: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005b85f5: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b85f8:; BB(0x005b85f8);
    /* 005b85f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b85fa: jne 0x5b860d */ if (!fZ) goto L_005b860d;
L_005b85fc:; BB(0x005b85fc);
    /* 005b85fc: mov dword ptr [0xa74a58], 1 */ W32((u32)(0xa74a58u), 0x1u);
    /* 005b8606: mov byte ptr [0xa74a38], 0 */ W8((u32)(0xa74a38u), 0x0u);
L_005b860d:; BB(0x005b860d);
    /* 005b860d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b860e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b860f: ret  */ FN_RET(0x005b85bc); r_esp += 4; return;
}

void f_005b85c0(void) /* sub_5B85C0 */
{
    FN_ENTER(0x005b85c0);
    /* 005b85c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b85c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b85c2: mov edx, dword ptr [0xa74a58] */ r_edx = R32((u32)(0xa74a58u));
    /* 005b85c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b85ca: jne 0x5b860d */ if (!fZ) goto L_005b860d;
L_005b85cc:; BB(0x005b85cc);
    /* 005b85cc: mov edi, 0xa74a38 */ r_edi = 0xa74a38u;
    /* 005b85d1: mov esi, eax */ r_esi = r_eax;
L_005b85d3:; BB(0x005b85d3);
    /* 005b85d3: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 005b85d5: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b85d7: jne 0x5b85f3 */ if (!fZ) goto L_005b85f3;
L_005b85d9:; BB(0x005b85d9);
    /* 005b85d9: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005b85db: je 0x5b85ef */ if (fZ) goto L_005b85ef;
L_005b85dd:; BB(0x005b85dd);
    /* 005b85dd: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 005b85e0: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b85e3: jne 0x5b85f3 */ if (!fZ) goto L_005b85f3;
L_005b85e5:; BB(0x005b85e5);
    /* 005b85e5: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b85e8: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b85eb: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 005b85ed: jne 0x5b85d3 */ if (!fZ) goto L_005b85d3;
L_005b85ef:; BB(0x005b85ef);
    /* 005b85ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b85f1: jmp 0x5b85f8 */ goto L_005b85f8;
L_005b85f3:; BB(0x005b85f3);
    /* 005b85f3: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005b85f5: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b85f8:; BB(0x005b85f8);
    /* 005b85f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b85fa: jne 0x5b860d */ if (!fZ) goto L_005b860d;
L_005b85fc:; BB(0x005b85fc);
    /* 005b85fc: mov dword ptr [0xa74a58], 1 */ W32((u32)(0xa74a58u), 0x1u);
    /* 005b8606: mov byte ptr [0xa74a38], 0 */ W8((u32)(0xa74a38u), 0x0u);
L_005b860d:; BB(0x005b860d);
    /* 005b860d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b860e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b860f: ret  */ FN_RET(0x005b85c0); r_esp += 4; return;
}

void f_005b8610(void) /* sub_5B8610 */
{
    FN_ENTER(0x005b8610);
    /* 005b8610: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005b8614: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 005b861a: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 005b861d: mov eax, dword ptr [eax + edx*8 + 8] */ r_eax = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 005b8621: ret 4 */ FN_RET(0x005b8610); r_esp += 8; return;
}

void f_005b8624(void) /* sub_5B8624 */
{
    FN_ENTER(0x005b8624);
    /* 005b8624: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005b8628: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 005b862e: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 005b8631: mov eax, dword ptr [eax + edx*8 + 0xc] */ r_eax = R32((u32)(r_eax+r_edx*8+0xcu));
    /* 005b8635: ret 4 */ FN_RET(0x005b8624); r_esp += 8; return;
}

void f_005b8638(void) /* sub_5B8638 */
{
    FN_ENTER(0x005b8638);
    /* 005b8638: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b863c: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 005b8642: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 005b8646: ret 4 */ FN_RET(0x005b8638); r_esp += 8; return;
}

void f_005b864c(void) /* sub_5B864C */
{
    FN_ENTER(0x005b864c);
    /* 005b864c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005b864e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b8653: je 0x5b865b */ if (fZ) goto L_005b865b;
L_005b8655:; BB(0x005b8655);
    /* 005b8655: mov eax, 1 */ r_eax = 0x1u;
    /* 005b865a: ret  */ FN_RET(0x005b864c); r_esp += 4; return;
L_005b865b:; BB(0x005b865b);
    /* 005b865b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b865d: ret  */ FN_RET(0x005b864c); r_esp += 4; return;
}

void f_005b8660(void) /* sub_5B8660 */
{
    FN_ENTER(0x005b8660);
    /* 005b8660: mov eax, dword ptr [0xa74a30] */ r_eax = R32((u32)(0xa74a30u));
    /* 005b8665: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8667: je 0x5b867a */ if (fZ) goto L_005b867a;
L_005b8669:; BB(0x005b8669);
    /* 005b8669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b866a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b866fu); f_0082e960();
    /* 005b866f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8670: mov dword ptr [0xa74a30], 0 */ W32((u32)(0xa74a30u), 0x0u);
L_005b867a:; BB(0x005b867a);
    /* 005b867a: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8680: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b8685u); f_0082e960();
    /* 005b8685: mov dword ptr [0xa74a60], 0 */ W32((u32)(0xa74a60u), 0x0u);
    /* 005b868f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8690: ret  */ FN_RET(0x005b8660); r_esp += 4; return;
}

void f_005b8694(void) /* sub_5B8694 */
{
    FN_ENTER(0x005b8694);
    /* 005b8694: mov eax, dword ptr [ecx + 0x428] */ r_eax = R32((u32)(r_ecx+0x428u));
    /* 005b869a: ret  */ FN_RET(0x005b8694); r_esp += 4; return;
}

void f_005b869c(void) /* sub_5B869C */
{
    FN_ENTER(0x005b869c);
    /* 005b869c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b869d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b869e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b869f: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b86a2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b86a4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 005b86a7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b86aa: ja 0x5b8a7b */ if ((!fC&&!fZ)) goto L_005b8a7b;
L_005b86b0:; BB(0x005b86b0);
    /* 005b86b0: mov eax, dword ptr [eax*4 + 0x92b184] */ r_eax = R32((u32)(r_eax*4+0x92b184u));
    /* 005b86b7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005b8a7b:; BB(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b869c); r_esp += 8; return;
}

void f_005b86b9(void)
{
    FN_ENTER(0x005b86b9);
    /* 005b86b9: mov eax, 0x92b45c */ r_eax = 0x92b45cu;
    /* 005b86be: call 0x5b900c */ r_esp -= 4; W32(r_esp, 0x5b86c3u); f_005b900c();
    /* 005b86c3: mov dword ptr [0xa74a1c], 0 */ W32((u32)(0xa74a1cu), 0x0u);
    /* 005b86cd: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005b86d2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b86d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b86d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b86d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b86d8: ret 4 */ FN_RET(0x005b86b9); r_esp += 8; return;
}

void f_005b86db(void)
{
    FN_ENTER(0x005b86db);
    /* 005b86db: mov dword ptr [ebx + 0x10], 0xa */ W32((u32)(r_ebx+0x10u), 0xau);
    /* 005b86e2: mov eax, 0x92b45c */ r_eax = 0x92b45cu;
    /* 005b86e7: call 0x5b900c */ r_esp -= 4; W32(r_esp, 0x5b86ecu); f_005b900c();
    /* 005b86ec: mov dword ptr [0xa74a1c], 0 */ W32((u32)(0xa74a1cu), 0x0u);
    /* 005b86f6: mov eax, 1 */ r_eax = 0x1u;
    /* 005b86fb: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b86fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b86ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8700: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8701: ret 4 */ FN_RET(0x005b86db); r_esp += 8; return;
}

void f_005b86e2(void)
{
    FN_ENTER(0x005b86e2);
    /* 005b86e2: mov eax, 0x92b45c */ r_eax = 0x92b45cu;
    /* 005b86e7: call 0x5b900c */ r_esp -= 4; W32(r_esp, 0x5b86ecu); f_005b900c();
    /* 005b86ec: mov dword ptr [0xa74a1c], 0 */ W32((u32)(0xa74a1cu), 0x0u);
    /* 005b86f6: mov eax, 1 */ r_eax = 0x1u;
    /* 005b86fb: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b86fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b86ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8700: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8701: ret 4 */ FN_RET(0x005b86e2); r_esp += 8; return;
}

void f_005b8704(void)
{
    FN_ENTER(0x005b8704);
    /* 005b8704: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b8706: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b870b: je 0x5b872a */ if (fZ) goto L_005b872a;
L_005b870d:; BB(0x005b870d);
    /* 005b870d: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8712u); f_005b9354();
    /* 005b8712: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8718: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5b871du); f_0086db40();
    /* 005b871d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b871e: mov dword ptr [ebx + 0x10], 9 */ W32((u32)(r_ebx+0x10u), 0x9u);
    /* 005b8725: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b872a:; BB(0x005b872a);
    /* 005b872a: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8730: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5b8735u); f_0086dc94();
    /* 005b8735: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8736: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8739: jne 0x5b8a7b */ if (!fZ) goto L_005b8a7b;
L_005b873f:; BB(0x005b873f);
    /* 005b873f: jmp 0x5b8a86 */ goto L_005b8a86;
L_005b8a7b:; BB(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b8704); r_esp += 8; return;
L_005b8a86:; BB(0x005b8a86);
    /* 005b8a86: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8a8bu); f_005b9354();
    /* 005b8a8b: mov ebp, dword ptr [0xa74a24] */ r_ebp = R32((u32)(0xa74a24u));
    /* 005b8a91: mov ecx, dword ptr [0xa74a28] */ r_ecx = R32((u32)(0xa74a28u));
    /* 005b8a97: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b8a9d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b8a9f: mov edx, dword ptr [eax + ebp*8 + 0xc] */ r_edx = R32((u32)(r_eax+r_ebp*8+0xcu));
    /* 005b8aa3: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5b8aa8u); f_0082a7d8();
    /* 005b8aa8: mov ebp, dword ptr [0xa74a24] */ r_ebp = R32((u32)(0xa74a24u));
    /* 005b8aae: mov edi, dword ptr [0xa74a2c] */ r_edi = R32((u32)(0xa74a2cu));
    /* 005b8ab4: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b8aba: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 005b8abe: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b8ac1: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b8ac4: or dword ptr [eax + edx*8], 1 */ { u32 ad = (u32)(r_eax+r_edx*8);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8ac8: mov dword ptr [0xa74a24], ebp */ W32((u32)(0xa74a24u), r_ebp);
    /* 005b8ace: mov dword ptr [0xa74a2c], edi */ W32((u32)(0xa74a2cu), r_edi);
    /* 005b8ad4: add dword ptr [ebx + 0xc], 1 */ { u32 ad = (u32)(r_ebx+0xcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8ad8: mov dword ptr [ebx + 0x10], 6 */ W32((u32)(r_ebx+0x10u), 0x6u);
    /* 005b8adf: jmp 0x5b8a7b */ goto L_005b8a7b;
}

void f_005b8744(void)
{
    FN_ENTER(0x005b8744);
    /* 005b8744: mov ecx, dword ptr [0xa74a24] */ r_ecx = R32((u32)(0xa74a24u));
    /* 005b874a: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 005b8750: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005b8753: mov ebp, dword ptr [edx + eax*8 + 0xc] */ r_ebp = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 005b8757: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8759: jne 0x5b8b44 */ if (!fZ) goto L_005b8b44;
L_005b875f:; BB(0x005b875f);
    /* 005b875f: mov edi, dword ptr [0xa74a2c] */ r_edi = R32((u32)(0xa74a2cu));
    /* 005b8765: mov ebp, dword ptr [ebx + 0x434] */ r_ebp = R32((u32)(r_ebx+0x434u));
    /* 005b876b: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 005b876f: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005b8772: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8774: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8776: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005b8778:; BB(0x005b8778);
    /* 005b8778: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b877b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b877e: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b8781: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8783: jge 0x5b8b2f */ if ((fS==fO)) goto L_005b8b2f;
L_005b8789:; BB(0x005b8789);
    /* 005b8789: mov esi, dword ptr [edx + eax + 0xc] */ r_esi = R32((u32)(r_edx+r_eax+0xcu));
    /* 005b878d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b878f: je 0x5b8778 */ if (fZ) goto L_005b8778;
L_005b8791:; BB(0x005b8791);
    /* 005b8791: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 005b8795: mov dword ptr [0xa74a2c], edi */ W32((u32)(0xa74a2cu), r_edi);
    /* 005b879b: mov dword ptr [0xa74a24], ecx */ W32((u32)(0xa74a24u), r_ecx);
L_005b87a1:; BB(0x005b87a1);
    /* 005b87a1: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b87a3: jge 0x5b8857 */ if ((fS==fO)) goto L_005b8857;
L_005b87a9:; BB(0x005b87a9);
    /* 005b87a9: push 0x92b2b8 */ { u32 v = 0x92b2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b87ae: push dword ptr [0xa74a2c] */ { u32 v = R32((u32)(0xa74a2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b87b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b87b6: call 0x78e1c0 */ r_esp -= 4; W32(r_esp, 0x5b87bbu); f_0078e1c0();
    /* 005b87bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b87bd: push dword ptr [0xa74a2c] */ { u32 v = R32((u32)(0xa74a2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b87c3: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5b87c8u); f_00708238();
    /* 005b87c8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b87cb: mov dword ptr [0xa74a20], eax */ W32((u32)(0xa74a20u), r_eax);
    /* 005b87d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b87d2: je 0x5b881d */ if (fZ) goto L_005b881d;
L_005b87d4:; BB(0x005b87d4);
    /* 005b87d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b87d5: call 0x86dc64 */ r_esp -= 4; W32(r_esp, 0x5b87dau); f_0086dc64();
    /* 005b87da: mov ebp, eax */ r_ebp = r_eax;
    /* 005b87dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b87df: cmp ebp, 0x120 */ {  u32 a = r_ebp; u32 b = 0x120u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b87e5: jg 0x5b8ae1 */ if ((!fZ&&fS==fO)) goto L_005b8ae1;
L_005b87eb:; BB(0x005b87eb);
    /* 005b87eb: push dword ptr [0xa74a28] */ { u32 v = R32((u32)(0xa74a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b87f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b87f2: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b87f8: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5b87fdu); f_0086db64();
    /* 005b87fd: push dword ptr [0xa74a28] */ { u32 v = R32((u32)(0xa74a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8803: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8804: push 0xa74a20 */ { u32 v = 0xa74a20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8809: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5b880eu); f_005b9334();
    /* 005b880e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b8811:; BB(0x005b8811);
    /* 005b8811: mov dword ptr [ebx + 0x10], 7 */ W32((u32)(r_ebx+0x10u), 0x7u);
    /* 005b8818: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b881d:; BB(0x005b881d);
    /* 005b881d: mov ebp, dword ptr [0xa74a24] */ r_ebp = R32((u32)(0xa74a24u));
    /* 005b8823: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005b8829: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 005b882d: or dword ptr [eax + edx*8], 2 */ { u32 ad = (u32)(r_eax+r_edx*8);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8831: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 005b8833: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b8836: je 0x5b8b11 */ if (fZ) goto L_005b8b11;
L_005b883c:; BB(0x005b883c);
    /* 005b883c: mov eax, dword ptr [0xa74a2c] */ r_eax = R32((u32)(0xa74a2cu));
    /* 005b8841: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b8844: mov dword ptr [0xa74a24], ebp */ W32((u32)(0xa74a24u), r_ebp);
    /* 005b884a: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b884d: mov dword ptr [0xa74a2c], eax */ W32((u32)(0xa74a2cu), r_eax);
    /* 005b8852: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8857:; BB(0x005b8857);
    /* 005b8857: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b8859: call 0x5b745c */ r_esp -= 4; W32(r_esp, 0x5b885eu); f_005b745c();
    /* 005b885e: mov dword ptr [ebx + 0x10], 0xa */ W32((u32)(r_ebx+0x10u), 0xau);
    /* 005b8865: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8a7b:; BB(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b8744); r_esp += 8; return;
L_005b8ae1:; BB(0x005b8ae1);
    /* 005b8ae1: shl ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 005b8ae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ae5: push dword ptr [0xa74a2c] */ { u32 v = R32((u32)(0xa74a2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8aeb: push 0x92b4f0 */ { u32 v = 0x92b4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8af0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8af5u); f_0061cdb0();
    /* 005b8af5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8af8: mov eax, dword ptr [0xa74a2c] */ r_eax = R32((u32)(0xa74a2cu));
    /* 005b8afd: add dword ptr [0xa74a24], 1 */ { u32 ad = (u32)(0xa74a24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8b04: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8b07: mov dword ptr [0xa74a2c], eax */ W32((u32)(0xa74a2cu), r_eax);
    /* 005b8b0c: jmp 0x5b8811 */ goto L_005b8811;
L_005b8b11:; BB(0x005b8b11);
    /* 005b8b11: push dword ptr [0xa74a2c] */ { u32 v = R32((u32)(0xa74a2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8b17: push 0x92b510 */ { u32 v = 0x92b510u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8b1c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8b21u); f_0061cdb0();
    /* 005b8b21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8b24: mov ebp, dword ptr [0xa74a24] */ r_ebp = R32((u32)(0xa74a24u));
    /* 005b8b2a: jmp 0x5b883c */ goto L_005b883c;
L_005b8b2f:; BB(0x005b8b2f);
    /* 005b8b2f: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 005b8b33: mov dword ptr [0xa74a2c], edi */ W32((u32)(0xa74a2cu), r_edi);
    /* 005b8b39: mov dword ptr [0xa74a24], ecx */ W32((u32)(0xa74a24u), r_ecx);
    /* 005b8b3f: jmp 0x5b87a1 */ goto L_005b87a1;
L_005b8b44:; BB(0x005b8b44);
    /* 005b8b44: mov ebp, dword ptr [ebx + 0x434] */ r_ebp = R32((u32)(r_ebx+0x434u));
    /* 005b8b4a: jmp 0x5b87a1 */ goto L_005b87a1;
}

void f_005b886a(void)
{
    FN_ENTER(0x005b886a);
    /* 005b886a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b886c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8871: je 0x5b8890 */ if (fZ) goto L_005b8890;
L_005b8873:; BB(0x005b8873);
    /* 005b8873: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8878u); f_005b9354();
    /* 005b8878: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b887e: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5b8883u); f_0086db40();
    /* 005b8883: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8884: mov dword ptr [ebx + 0x10], 9 */ W32((u32)(r_ebx+0x10u), 0x9u);
    /* 005b888b: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8890:; BB(0x005b8890);
    /* 005b8890: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8896: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5b889bu); f_0086dc94();
    /* 005b889b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b889c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b889f: jne 0x5b8a7b */ if (!fZ) goto L_005b8a7b;
L_005b88a5:; BB(0x005b88a5);
    /* 005b88a5: jmp 0x5b8b4f */ goto L_005b8b4f;
L_005b8a7b:; BB(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b886a); r_esp += 8; return;
L_005b8b4f:; BB(0x005b8b4f);
    /* 005b8b4f: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8b54u); f_005b9354();
    /* 005b8b54: movsx eax, byte ptr [0xa74a64] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa74a64u));
    /* 005b8b5b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8b5e: jne 0x5b8ba0 */ if (!fZ) goto L_005b8ba0;
L_005b8b60:; BB(0x005b8b60);
    /* 005b8b60: mov eax, dword ptr [0xa74a2c] */ r_eax = R32((u32)(0xa74a2cu));
    /* 005b8b65: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8b68: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b8b6du); f_0082e940();
    /* 005b8b6d: mov ebp, eax */ r_ebp = r_eax;
    /* 005b8b6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8b72: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8b74: je 0x5b8bd4 */ if (fZ) goto L_005b8bd4;
L_005b8b76:; BB(0x005b8b76);
    /* 005b8b76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8b77: push dword ptr [0xa74a28] */ { u32 v = R32((u32)(0xa74a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8b7d: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b8b82u); f_00788154();
    /* 005b8b82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8b85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8b86: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 005b8b89: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8b8a: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 005b8b8d: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005b8b90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b8b92: call 0x5b8fa8 */ r_esp -= 4; W32(r_esp, 0x5b8b97u); f_005b8fa8();
    /* 005b8b97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8b98: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b8b9du); f_0082e960();
    /* 005b8b9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8b9e: jmp 0x5b8bbb */ goto L_005b8bbb;
L_005b8ba0:; BB(0x005b8ba0);
    /* 005b8ba0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8ba2: jne 0x5b8bbb */ if (!fZ) goto L_005b8bbb;
L_005b8ba4:; BB(0x005b8ba4);
    /* 005b8ba4: push dword ptr [0xa74a28] */ { u32 v = R32((u32)(0xa74a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8baa: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 005b8bad: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 005b8bb0: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 005b8bb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8bb4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b8bb6: call 0x5b8fa8 */ r_esp -= 4; W32(r_esp, 0x5b8bbbu); f_005b8fa8();
L_005b8bbb:; BB(0x005b8bbb);
    /* 005b8bbb: mov eax, dword ptr [0xa74a2c] */ r_eax = R32((u32)(0xa74a2cu));
    /* 005b8bc0: mov dword ptr [ebx + 0x10], 4 */ W32((u32)(r_ebx+0x10u), 0x4u);
    /* 005b8bc7: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8bca: mov dword ptr [0xa74a2c], eax */ W32((u32)(0xa74a2cu), r_eax);
    /* 005b8bcf: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8bd4:; BB(0x005b8bd4);
    /* 005b8bd4: push 0x92b4cc */ { u32 v = 0x92b4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8bd9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8bdeu); f_0061cdb0();
    /* 005b8bde: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8bdf: jmp 0x5b8bbb */ goto L_005b8bbb;
}

void f_005b88aa(void)
{
    FN_ENTER(0x005b88aa);
    /* 005b88aa: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b88ac: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b88b1: jne 0x5b8be1 */ if (!fZ) goto L_005b8be1;
L_005b88b7:; BB(0x005b88b7);
    /* 005b88b7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005b88ba: cmp eax, dword ptr [ebx + 0x438] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x438u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b88c0: jge 0x5b892f */ if ((fS==fO)) goto L_005b892f;
L_005b88c2:; BB(0x005b88c2);
    /* 005b88c2: mov eax, dword ptr [0xa74a2c] */ r_eax = R32((u32)(0xa74a2cu));
    /* 005b88c7: mov ebp, dword ptr [eax + 0x20] */ r_ebp = R32((u32)(r_eax+0x20u));
    /* 005b88ca: movsx eax, byte ptr [0xa74a64] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa74a64u));
    /* 005b88d1: lea edx, [ebp + 0x7ff] */ r_edx = (u32)(r_ebp+0x7ffu);
    /* 005b88d7: sar edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005b88da: shr edx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b88dd: lea ebp, [edx + ebp + 0x7ff] */ r_ebp = (u32)(r_edx+r_ebp+0x7ffu);
    /* 005b88e4: sar ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005b88e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b88e9: jl 0x5b8918 */ if ((fS!=fO)) goto L_005b8918;
L_005b88eb:; BB(0x005b88eb);
    /* 005b88eb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b88ee: jg 0x5b8918 */ if ((!fZ&&fS==fO)) goto L_005b8918;
L_005b88f0:; BB(0x005b88f0);
    /* 005b88f0: push dword ptr [0xa74a28] */ { u32 v = R32((u32)(0xa74a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b88f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b88f7: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b88fd: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5b8902u); f_0086db64();
    /* 005b8902: push dword ptr [0xa74a28] */ { u32 v = R32((u32)(0xa74a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8908: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8909: push 0xa74a20 */ { u32 v = 0xa74a20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b890e: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5b8913u); f_005b9334();
    /* 005b8913: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8916: jmp 0x5b8923 */ goto L_005b8923;
L_005b8918:; BB(0x005b8918);
    /* 005b8918: push 0x92b488 */ { u32 v = 0x92b488u; r_esp -= 4; W32(r_esp, v); }
    /* 005b891d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8922u); f_0061cdb0();
    /* 005b8922: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005b8923:; BB(0x005b8923);
    /* 005b8923: mov dword ptr [ebx + 0x10], 5 */ W32((u32)(r_ebx+0x10u), 0x5u);
    /* 005b892a: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b892f:; BB(0x005b892f);
    /* 005b892f: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8934u); f_005b9354();
    /* 005b8934: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b893a: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5b893fu); f_0086db40();
    /* 005b893f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8940: mov eax, dword ptr [0xa74a1c] */ r_eax = R32((u32)(0xa74a1cu));
    /* 005b8945: mov dword ptr [ebx + 0x10], 6 */ W32((u32)(r_ebx+0x10u), 0x6u);
    /* 005b894c: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b894f: mov dword ptr [0xa74a2c], eax */ W32((u32)(0xa74a2cu), r_eax);
    /* 005b8954: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8a7b:; BB(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b88aa); r_esp += 8; return;
L_005b8be1:; BB(0x005b8be1);
    /* 005b8be1: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8be6u); f_005b9354();
    /* 005b8be6: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8bec: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5b8bf1u); f_0086db40();
    /* 005b8bf1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8bf2: mov dword ptr [ebx + 0x10], 9 */ W32((u32)(r_ebx+0x10u), 0x9u);
    /* 005b8bf9: jmp 0x5b8a7b */ goto L_005b8a7b;
}

void f_005b8959(void)
{
    FN_ENTER(0x005b8959);
    /* 005b8959: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b895b: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8960: je 0x5b897f */ if (fZ) goto L_005b897f;
L_005b8962:; BB(0x005b8962);
    /* 005b8962: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8967u); f_005b9354();
    /* 005b8967: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b896d: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5b8972u); f_0086db40();
    /* 005b8972: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8973: mov dword ptr [ebx + 0x10], 9 */ W32((u32)(r_ebx+0x10u), 0x9u);
    /* 005b897a: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b897f:; BB(0x005b897f);
    /* 005b897f: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8985: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5b898au); f_0086dc94();
    /* 005b898a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b898b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b898e: jne 0x5b8a7b */ if (!fZ) goto L_005b8a7b;
L_005b8994:; BB(0x005b8994);
    /* 005b8994: jmp 0x5b8bfe */ goto L_005b8bfe;
L_005b8a7b:; BB(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b8959); r_esp += 8; return;
L_005b8bfe:; BB(0x005b8bfe);
    /* 005b8bfe: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8c03u); f_005b9354();
    /* 005b8c03: movsx eax, byte ptr [0xa74a64] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa74a64u));
    /* 005b8c0a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8c0d: jne 0x5b8d2b */ if (!fZ) goto L_005b8d2b;
L_005b8c13:; BB(0x005b8c13);
    /* 005b8c13: mov eax, dword ptr [0xa74a2c] */ r_eax = R32((u32)(0xa74a2cu));
    /* 005b8c18: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8c1b: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b8c20u); f_0082e940();
    /* 005b8c20: mov edi, eax */ r_edi = r_eax;
    /* 005b8c22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c25: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8c27: je 0x5b8e47 */ if (fZ) goto L_005b8e47;
L_005b8c2d:; BB(0x005b8c2d);
    /* 005b8c2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c2e: push dword ptr [0xa74a28] */ { u32 v = R32((u32)(0xa74a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8c34: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b8c39u); f_00788154();
    /* 005b8c39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c3c: mov edx, dword ptr [0xa74a2c] */ r_edx = R32((u32)(0xa74a2cu));
    /* 005b8c42: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005b8c45: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 005b8c4b: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 005b8c4f: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 005b8c52: mov dword ptr [ebx + 4], ebp */ W32((u32)(r_ebx+0x4u), r_ebp);
    /* 005b8c55: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 005b8c58: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8c5a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005b8c5e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b8c60: mov dword ptr [ecx + eax*8 + 8], edx */ W32((u32)(r_ecx+r_eax*8+0x8u), r_edx);
    /* 005b8c64: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 005b8c6a: mov dword ptr [ecx + eax*8 + 0xc], edx */ W32((u32)(r_ecx+r_eax*8+0xcu), r_edx);
    /* 005b8c6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8c70: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_005b8c74:; BB(0x005b8c74);
    /* 005b8c74: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b8c76: jae 0x5b8d1b */ if (!fC) goto L_005b8d1b;
L_005b8c7c:; BB(0x005b8c7c);
    /* 005b8c7c: mov esi, dword ptr [ebx + 0x424] */ r_esi = R32((u32)(r_ebx+0x424u));
    /* 005b8c82: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8c84: je 0x5b8e2c */ if (fZ) goto L_005b8e2c;
L_005b8c8a:; BB(0x005b8c8a);
    /* 005b8c8a: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005b8c8e: mov edx, dword ptr [ebx + 0x428] */ r_edx = R32((u32)(r_ebx+0x428u));
    /* 005b8c94: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b8c96: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005b8c9a: mov ecx, edi */ r_ecx = r_edi;
    /* 005b8c9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c9f: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 005b8ca3: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b8ca8u); f_0083b124();
    /* 005b8ca8: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005b8cac: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b8caf: lea edx, [edx + edx + 2] */ r_edx = (u32)(r_edx+r_edx+0x2u);
    /* 005b8cb3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8cb5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8cb7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8cb9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8cbb: add dword ptr [ebx + 0x428], edx */ { u32 ad = (u32)(r_ebx+0x428u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8cc1: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
L_005b8cc5:; BB(0x005b8cc5);
    /* 005b8cc5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005b8cc9: cmp edx, 0x4e4a434d */ {  u32 a = r_edx; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8ccf: jne 0x5b8ce5 */ if (!fZ) goto L_005b8ce5;
L_005b8cd1:; BB(0x005b8cd1);
    /* 005b8cd1: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005b8cd5: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005b8cd9: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 005b8cdf: mov dword ptr [edx + eax*8 + 8], esi */ W32((u32)(r_edx+r_eax*8+0x8u), r_esi);
    /* 005b8ce3: jmp 0x5b8c74 */ goto L_005b8c74;
L_005b8ce5:; BB(0x005b8ce5);
    /* 005b8ce5: cmp edx, 0x4e4a544c */ {  u32 a = r_edx; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8ceb: jne 0x5b8d04 */ if (!fZ) goto L_005b8d04;
L_005b8ced:; BB(0x005b8ced);
    /* 005b8ced: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005b8cf1: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005b8cf5: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 005b8cfb: mov dword ptr [edx + eax*8 + 0xc], esi */ W32((u32)(r_edx+r_eax*8+0xcu), r_esi);
    /* 005b8cff: jmp 0x5b8c74 */ goto L_005b8c74;
L_005b8d04:; BB(0x005b8d04);
    /* 005b8d04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d05: push 0x92b25c */ { u32 v = 0x92b25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d0a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8d0fu); f_0061cdb0();
    /* 005b8d0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8d12: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005b8d16: jmp 0x5b8c74 */ goto L_005b8c74;
L_005b8d1b:; BB(0x005b8d1b);
    /* 005b8d1b: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 005b8d1f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d20: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b8d25u); f_0082e960();
    /* 005b8d25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8d26: jmp 0x5b8e13 */ goto L_005b8e13;
L_005b8d2b:; BB(0x005b8d2b);
    /* 005b8d2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8d2d: jne 0x5b8e13 */ if (!fZ) goto L_005b8e13;
L_005b8d33:; BB(0x005b8d33);
    /* 005b8d33: mov edi, dword ptr [0xa74a2c] */ r_edi = R32((u32)(0xa74a2cu));
    /* 005b8d39: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 005b8d3c: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 005b8d42: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 005b8d46: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 005b8d49: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005b8d4c: mov eax, dword ptr [0xa74a28] */ r_eax = R32((u32)(0xa74a28u));
    /* 005b8d51: mov edi, dword ptr [edi + 0x20] */ r_edi = R32((u32)(r_edi+0x20u));
    /* 005b8d54: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005b8d58: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b8d5a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b8d5c: mov dword ptr [ecx + ebp*8 + 8], edx */ W32((u32)(r_ecx+r_ebp*8+0x8u), r_edx);
    /* 005b8d60: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 005b8d66: mov dword ptr [ecx + ebp*8 + 0xc], edx */ W32((u32)(r_ecx+r_ebp*8+0xcu), r_edx);
    /* 005b8d6a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8d6c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_005b8d70:; BB(0x005b8d70);
    /* 005b8d70: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b8d72: jae 0x5b8e0f */ if (!fC) goto L_005b8e0f;
L_005b8d78:; BB(0x005b8d78);
    /* 005b8d78: mov esi, dword ptr [ebx + 0x424] */ r_esi = R32((u32)(r_ebx+0x424u));
    /* 005b8d7e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8d80: je 0x5b8e54 */ if (fZ) goto L_005b8e54;
L_005b8d86:; BB(0x005b8d86);
    /* 005b8d86: add esi, dword ptr [ebx + 0x428] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x428u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b8d8c: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005b8d90: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b8d94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d97: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005b8d9b: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005b8d9f: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b8da4u); f_0083b124();
    /* 005b8da4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005b8da8: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b8dab: lea edx, [edx + edx + 2] */ r_edx = (u32)(r_edx+r_edx+0x2u);
    /* 005b8daf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8db1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8db3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8db5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8db7: add dword ptr [ebx + 0x428], edx */ { u32 ad = (u32)(r_ebx+0x428u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8dbd: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
L_005b8dc1:; BB(0x005b8dc1);
    /* 005b8dc1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005b8dc5: cmp edx, 0x4e4a434d */ {  u32 a = r_edx; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8dcb: jne 0x5b8ddd */ if (!fZ) goto L_005b8ddd;
L_005b8dcd:; BB(0x005b8dcd);
    /* 005b8dcd: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005b8dd1: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 005b8dd7: mov dword ptr [edx + ebp*8 + 8], esi */ W32((u32)(r_edx+r_ebp*8+0x8u), r_esi);
    /* 005b8ddb: jmp 0x5b8d70 */ goto L_005b8d70;
L_005b8ddd:; BB(0x005b8ddd);
    /* 005b8ddd: cmp edx, 0x4e4a544c */ {  u32 a = r_edx; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8de3: jne 0x5b8df8 */ if (!fZ) goto L_005b8df8;
L_005b8de5:; BB(0x005b8de5);
    /* 005b8de5: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005b8de9: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 005b8def: mov dword ptr [edx + ebp*8 + 0xc], esi */ W32((u32)(r_edx+r_ebp*8+0xcu), r_esi);
    /* 005b8df3: jmp 0x5b8d70 */ goto L_005b8d70;
L_005b8df8:; BB(0x005b8df8);
    /* 005b8df8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8df9: push 0x92b25c */ { u32 v = 0x92b25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8dfe: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8e03u); f_0061cdb0();
    /* 005b8e03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8e06: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005b8e0a: jmp 0x5b8d70 */ goto L_005b8d70;
L_005b8e0f:; BB(0x005b8e0f);
    /* 005b8e0f: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_005b8e13:; BB(0x005b8e13);
    /* 005b8e13: mov eax, dword ptr [0xa74a2c] */ r_eax = R32((u32)(0xa74a2cu));
    /* 005b8e18: mov dword ptr [ebx + 0x10], 2 */ W32((u32)(r_ebx+0x10u), 0x2u);
    /* 005b8e1f: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8e22: mov dword ptr [0xa74a2c], eax */ W32((u32)(0xa74a2cu), r_eax);
    /* 005b8e27: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8e2c:; BB(0x005b8e2c);
    /* 005b8e2c: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 005b8e30: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005b8e32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e33: mov ecx, edi */ r_ecx = r_edi;
    /* 005b8e35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e37: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 005b8e3b: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b8e40u); f_0083b124();
    /* 005b8e40: mov esi, eax */ r_esi = r_eax;
    /* 005b8e42: jmp 0x5b8cc5 */ goto L_005b8cc5;
L_005b8e47:; BB(0x005b8e47);
    /* 005b8e47: push 0x92b4a8 */ { u32 v = 0x92b4a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e4c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8e51u); f_0061cdb0();
    /* 005b8e51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8e52: jmp 0x5b8e13 */ goto L_005b8e13;
L_005b8e54:; BB(0x005b8e54);
    /* 005b8e54: lea esi, [esp + 8] */ r_esi = (u32)(r_esp+0x8u);
    /* 005b8e58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8e5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e5d: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005b8e61: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005b8e65: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b8e6au); f_0083b124();
    /* 005b8e6a: mov esi, eax */ r_esi = r_eax;
    /* 005b8e6c: jmp 0x5b8dc1 */ goto L_005b8dc1;
}

void f_005b8999(void)
{
    FN_ENTER(0x005b8999);
    /* 005b8999: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b899b: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b89a0: jne 0x5b8e71 */ if (!fZ) goto L_005b8e71;
L_005b89a6:; BB(0x005b89a6);
    /* 005b89a6: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005b89a9: cmp eax, dword ptr [ebx + 0x434] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x434u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b89af: jge 0x5b8a1b */ if ((fS==fO)) goto L_005b8a1b;
L_005b89b1:; BB(0x005b89b1);
    /* 005b89b1: mov eax, dword ptr [0xa74a2c] */ r_eax = R32((u32)(0xa74a2cu));
    /* 005b89b6: mov ebp, dword ptr [eax + 0x20] */ r_ebp = R32((u32)(r_eax+0x20u));
    /* 005b89b9: movsx eax, byte ptr [0xa74a64] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa74a64u));
    /* 005b89c0: lea edx, [ebp + 0x7ff] */ r_edx = (u32)(r_ebp+0x7ffu);
    /* 005b89c6: sar edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005b89c9: shr edx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b89cc: lea ebp, [edx + ebp + 0x7ff] */ r_ebp = (u32)(r_edx+r_ebp+0x7ffu);
    /* 005b89d3: sar ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005b89d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b89d8: jl 0x5b8a07 */ if ((fS!=fO)) goto L_005b8a07;
L_005b89da:; BB(0x005b89da);
    /* 005b89da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b89dd: jg 0x5b8a07 */ if ((!fZ&&fS==fO)) goto L_005b8a07;
L_005b89df:; BB(0x005b89df);
    /* 005b89df: push dword ptr [0xa74a28] */ { u32 v = R32((u32)(0xa74a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b89e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b89e6: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b89ec: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5b89f1u); f_0086db64();
    /* 005b89f1: push dword ptr [0xa74a28] */ { u32 v = R32((u32)(0xa74a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b89f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b89f8: push 0xa74a20 */ { u32 v = 0xa74a20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b89fd: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5b8a02u); f_005b9334();
    /* 005b8a02: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8a05: jmp 0x5b8a12 */ goto L_005b8a12;
L_005b8a07:; BB(0x005b8a07);
    /* 005b8a07: push 0x92b488 */ { u32 v = 0x92b488u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a0c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8a11u); f_0061cdb0();
    /* 005b8a11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005b8a12:; BB(0x005b8a12);
    /* 005b8a12: mov dword ptr [ebx + 0x10], 3 */ W32((u32)(r_ebx+0x10u), 0x3u);
    /* 005b8a19: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8a1b:; BB(0x005b8a1b);
    /* 005b8a1b: mov dword ptr [ebx + 0x10], 4 */ W32((u32)(r_ebx+0x10u), 0x4u);
    /* 005b8a22: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8a7b:; BB(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b8999); r_esp += 8; return;
L_005b8e71:; BB(0x005b8e71);
    /* 005b8e71: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8e76u); f_005b9354();
    /* 005b8e76: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8e7c: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5b8e81u); f_0086db40();
    /* 005b8e81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8e82: mov dword ptr [ebx + 0x10], 9 */ W32((u32)(r_ebx+0x10u), 0x9u);
    /* 005b8e89: jmp 0x5b8a7b */ goto L_005b8a7b;
}

void f_005b8a24(void)
{
    FN_ENTER(0x005b8a24);
    /* 005b8a24: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b8a26: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a2b: je 0x5b8a47 */ if (fZ) goto L_005b8a47;
L_005b8a2d:; BB(0x005b8a2d);
    /* 005b8a2d: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8a32u); f_005b9354();
    /* 005b8a32: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8a38: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5b8a3du); f_0086db40();
    /* 005b8a3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8a3e: mov dword ptr [ebx + 0x10], 9 */ W32((u32)(r_ebx+0x10u), 0x9u);
    /* 005b8a45: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8a47:; BB(0x005b8a47);
    /* 005b8a47: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8a4d: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5b8a52u); f_0086dc94();
    /* 005b8a52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8a53: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a56: jne 0x5b8a7b */ if (!fZ) goto L_005b8a7b;
L_005b8a58:; BB(0x005b8a58);
    /* 005b8a58: jmp 0x5b8e8e */ goto L_005b8e8e;
L_005b8a7b:; BB(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b8a24); r_esp += 8; return;
L_005b8e8e:; BB(0x005b8e8e);
    /* 005b8e8e: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8e93u); f_005b9354();
    /* 005b8e93: mov eax, dword ptr [0xa74a1c] */ r_eax = R32((u32)(0xa74a1cu));
    /* 005b8e98: movsx edx, byte ptr [eax + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x8u));
    /* 005b8e9c: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8e9f: jne 0x5b8eaa */ if (!fZ) goto L_005b8eaa;
L_005b8ea1:; BB(0x005b8ea1);
    /* 005b8ea1: mov byte ptr [0xa74a64], 1 */ W8((u32)(0xa74a64u), 0x1u);
    /* 005b8ea8: jmp 0x5b8eb1 */ goto L_005b8eb1;
L_005b8eaa:; BB(0x005b8eaa);
    /* 005b8eaa: mov byte ptr [0xa74a64], 0 */ W8((u32)(0xa74a64u), 0x0u);
L_005b8eb1:; BB(0x005b8eb1);
    /* 005b8eb1: mov dword ptr [ebx + 0x10], 2 */ W32((u32)(r_ebx+0x10u), 0x2u);
    /* 005b8eb8: jmp 0x5b8a7b */ goto L_005b8a7b;
}

void f_005b8a5d(void)
{
    FN_ENTER(0x005b8a5d);
    goto L_005b8a5d;
L_005b8a24:; BB(0x005b8a24);
    /* 005b8a24: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b8a26: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a2b: je 0x5b8a47 */ if (fZ) goto L_005b8a47;
L_005b8a2d:; BB(0x005b8a2d);
    /* 005b8a2d: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8a32u); f_005b9354();
    /* 005b8a32: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8a38: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5b8a3du); f_0086db40();
    /* 005b8a3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8a3e: mov dword ptr [ebx + 0x10], 9 */ W32((u32)(r_ebx+0x10u), 0x9u);
    /* 005b8a45: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8a47:; BB(0x005b8a47);
    /* 005b8a47: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8a4d: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5b8a52u); f_0086dc94();
    /* 005b8a52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8a53: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a56: jne 0x5b8a7b */ if (!fZ) goto L_005b8a7b;
L_005b8a58:; BB(0x005b8a58);
    /* 005b8a58: jmp 0x5b8e8e */ goto L_005b8e8e;
L_005b8a5d:; BB(0x005b8a5d);
    /* 005b8a5d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b8a5f: mov dword ptr [0xa74a1c], 0 */ W32((u32)(0xa74a1cu), 0x0u);
    /* 005b8a69: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a6e: je 0x5b8ebd */ if (fZ) goto L_005b8ebd;
L_005b8a74:; BB(0x005b8a74);
    /* 005b8a74: mov dword ptr [ebx + 0x10], 9 */ W32((u32)(r_ebx+0x10u), 0x9u);
L_005b8a7b:; BB(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b8a5d); r_esp += 8; return;
L_005b8e8e:; BB(0x005b8e8e);
    /* 005b8e8e: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8e93u); f_005b9354();
    /* 005b8e93: mov eax, dword ptr [0xa74a1c] */ r_eax = R32((u32)(0xa74a1cu));
    /* 005b8e98: movsx edx, byte ptr [eax + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x8u));
    /* 005b8e9c: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8e9f: jne 0x5b8eaa */ if (!fZ) goto L_005b8eaa;
L_005b8ea1:; BB(0x005b8ea1);
    /* 005b8ea1: mov byte ptr [0xa74a64], 1 */ W8((u32)(0xa74a64u), 0x1u);
    /* 005b8ea8: jmp 0x5b8eb1 */ goto L_005b8eb1;
L_005b8eaa:; BB(0x005b8eaa);
    /* 005b8eaa: mov byte ptr [0xa74a64], 0 */ W8((u32)(0xa74a64u), 0x0u);
L_005b8eb1:; BB(0x005b8eb1);
    /* 005b8eb1: mov dword ptr [ebx + 0x10], 2 */ W32((u32)(r_ebx+0x10u), 0x2u);
    /* 005b8eb8: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8ebd:; BB(0x005b8ebd);
    /* 005b8ebd: mov dword ptr [0xa74a24], 0 */ W32((u32)(0xa74a24u), 0x0u);
    /* 005b8ec7: mov eax, 0x92b45c */ r_eax = 0x92b45cu;
    /* 005b8ecc: call 0x5b7a48 */ r_esp -= 4; W32(r_esp, 0x5b8ed1u); f_005b7a48();
    /* 005b8ed1: mov dword ptr [0xa74a28], eax */ W32((u32)(0xa74a28u), r_eax);
    /* 005b8ed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8ed8: je 0x5b8a7b */ if (fZ) goto L_005b8a7b;
L_005b8ede:; BB(0x005b8ede);
    /* 005b8ede: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ee0: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005b8ee4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ee5: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x5b8eeau); f_00708238();
    /* 005b8eea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8eed: mov dword ptr [0xa74a20], eax */ W32((u32)(0xa74a20u), r_eax);
    /* 005b8ef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8ef4: je 0x5b8f84 */ if (fZ) goto L_005b8f84;
L_005b8efa:; BB(0x005b8efa);
    /* 005b8efa: mov edx, dword ptr [ebx + 0x434] */ r_edx = R32((u32)(r_ebx+0x434u));
    /* 005b8f00: add edx, dword ptr [ebx + 0x438] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x438u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8f06: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8f08: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8f0a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8f0c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8f0e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8f10: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 005b8f13: lea ebp, [edx + edx + 0x83f] */ r_ebp = (u32)(r_edx+r_edx+0x83fu);
    /* 005b8f1a: sar ebp, 0xa */ { u32 c = (10u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005b8f1d: shr ebp, 0x15 */ { u32 c = (21u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 005b8f20: lea ebp, [ebp + edi + 0x83f] */ r_ebp = (u32)(r_ebp+r_edi+0x83fu);
    /* 005b8f27: sar ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005b8f2a: cmp ebp, 0x4000 */ {  u32 a = r_ebp; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8f30: jg 0x5b8f6f */ if ((!fZ&&fS==fO)) goto L_005b8f6f;
L_005b8f32:; BB(0x005b8f32);
    /* 005b8f32: mov edi, dword ptr [0xa74a30] */ r_edi = R32((u32)(0xa74a30u));
    /* 005b8f38: mov dword ptr [0xa74a1c], edi */ W32((u32)(0xa74a1cu), r_edi);
    /* 005b8f3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f3f: lea edx, [edi + 0x40] */ r_edx = (u32)(r_edi+0x40u);
    /* 005b8f42: mov dword ptr [0xa74a2c], edx */ W32((u32)(0xa74a2cu), r_edx);
    /* 005b8f48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f4a: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5b8f4fu); f_0086db64();
    /* 005b8f4f: push dword ptr [0xa74a1c] */ { u32 v = R32((u32)(0xa74a1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8f55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f56: push 0xa74a20 */ { u32 v = 0xa74a20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f5b: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5b8f60u); f_005b9334();
    /* 005b8f60: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8f63: mov dword ptr [ebx + 0x10], 1 */ W32((u32)(r_ebx+0x10u), 0x1u);
    /* 005b8f6a: jmp 0x5b8a24 */ goto L_005b8a24;
L_005b8f6f:; BB(0x005b8f6f);
    /* 005b8f6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f70: push 0x92b3c4 */ { u32 v = 0x92b3c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f75: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8f7au); f_0061cdb0();
    /* 005b8f7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8f7d: mov eax, dword ptr [0xa74a20] */ r_eax = R32((u32)(0xa74a20u));
    /* 005b8f82: jmp 0x5b8f32 */ goto L_005b8f32;
L_005b8f84:; BB(0x005b8f84);
    /* 005b8f84: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005b8f88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f89: push 0x92b468 */ { u32 v = 0x92b468u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f8e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8f93u); f_0061cdb0();
    /* 005b8f93: mov dword ptr [ebx + 0x10], 0xb */ W32((u32)(r_ebx+0x10u), 0xbu);
    /* 005b8f9a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005b8f9f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8fa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8fa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8fa4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8fa5: ret 4 */ FN_RET(0x005b8a5d); r_esp += 8; return;
}

void f_005b8a7b(void)
{
    FN_ENTER(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b8a7b); r_esp += 8; return;
}

void f_005b8ef1(void)
{
    FN_ENTER(0x005b8ef1);
    goto L_005b8ef1;
L_005b8a24:; BB(0x005b8a24);
    /* 005b8a24: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b8a26: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a2b: je 0x5b8a47 */ if (fZ) goto L_005b8a47;
L_005b8a2d:; BB(0x005b8a2d);
    /* 005b8a2d: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8a32u); f_005b9354();
    /* 005b8a32: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8a38: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5b8a3du); f_0086db40();
    /* 005b8a3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8a3e: mov dword ptr [ebx + 0x10], 9 */ W32((u32)(r_ebx+0x10u), 0x9u);
    /* 005b8a45: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8a47:; BB(0x005b8a47);
    /* 005b8a47: push dword ptr [0xa74a20] */ { u32 v = R32((u32)(0xa74a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8a4d: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5b8a52u); f_0086dc94();
    /* 005b8a52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8a53: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a56: jne 0x5b8a7b */ if (!fZ) goto L_005b8a7b;
L_005b8a58:; BB(0x005b8a58);
    /* 005b8a58: jmp 0x5b8e8e */ goto L_005b8e8e;
L_005b8a7b:; BB(0x005b8a7b);
    /* 005b8a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8a7d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b8a81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8a83: ret 4 */ FN_RET(0x005b8ef1); r_esp += 8; return;
L_005b8e8e:; BB(0x005b8e8e);
    /* 005b8e8e: call 0x5b9354 */ r_esp -= 4; W32(r_esp, 0x5b8e93u); f_005b9354();
    /* 005b8e93: mov eax, dword ptr [0xa74a1c] */ r_eax = R32((u32)(0xa74a1cu));
    /* 005b8e98: movsx edx, byte ptr [eax + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x8u));
    /* 005b8e9c: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8e9f: jne 0x5b8eaa */ if (!fZ) goto L_005b8eaa;
L_005b8ea1:; BB(0x005b8ea1);
    /* 005b8ea1: mov byte ptr [0xa74a64], 1 */ W8((u32)(0xa74a64u), 0x1u);
    /* 005b8ea8: jmp 0x5b8eb1 */ goto L_005b8eb1;
L_005b8eaa:; BB(0x005b8eaa);
    /* 005b8eaa: mov byte ptr [0xa74a64], 0 */ W8((u32)(0xa74a64u), 0x0u);
L_005b8eb1:; BB(0x005b8eb1);
    /* 005b8eb1: mov dword ptr [ebx + 0x10], 2 */ W32((u32)(r_ebx+0x10u), 0x2u);
    /* 005b8eb8: jmp 0x5b8a7b */ goto L_005b8a7b;
L_005b8ef1:; BB(0x005b8ef1);
    /* 005b8ef1: add byte ptr [ebp - 0x757bf040], al */ { u32 ad = (u32)(r_ebp+0x8a840fc0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b8ef7: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b8ef9: add byte ptr [ebx + 0x43493], cl */ { u32 ad = (u32)(r_ebx+0x43493u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b8eff: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b8f01: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 005b8f02: cmp byte ptr [eax + eax], al */ {  u32 a = R8((u32)(r_eax+r_eax)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;   }
    /* 005b8f05: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 005b8f07: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 005b8f09: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 005b8f0b: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 005b8f0d: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 005b8f0f: ror byte ptr [ebp - 0x5372edc4], cl */ { u32 ad = (u32)(r_ebp+0xac8d123cu); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r); fC = (r >> 7) & 1; } }
    /* 005b8f15: adc bh, byte ptr [edi] */ { u32 c = fC; u32 a = (u8)(r_ebx>>8); u32 b = R8((u32)(r_edi)); u32 r = (a + b + c) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 005b8f17: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 005b8f19: add cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b8f1b: std  */ rt_df = 1;
    /* 005b8f1c: or al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 005b8f1e: in eax, dx */ UNSUP(0x005b8f1e, "in eax, dx");
    /* 005b8f1f: adc eax, 0x3f3dac8d */ { u32 c = fC; u32 a = r_eax; u32 b = 0x3f3dac8du; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 005b8f24: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 005b8f26: add cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b8f28: std  */ rt_df = 1;
    /* 005b8f29: or eax, dword ptr [ecx + 0x4000fd] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4000fdu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b8f2f: add byte ptr [edi + 0x3d], bh */ { u32 ad = (u32)(r_edi+0x3du);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b8f32: mov edi, dword ptr [0xa74a30] */ r_edi = R32((u32)(0xa74a30u));
    /* 005b8f38: mov dword ptr [0xa74a1c], edi */ W32((u32)(0xa74a1cu), r_edi);
    /* 005b8f3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f3f: lea edx, [edi + 0x40] */ r_edx = (u32)(r_edi+0x40u);
    /* 005b8f42: mov dword ptr [0xa74a2c], edx */ W32((u32)(0xa74a2cu), r_edx);
    /* 005b8f48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f4a: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5b8f4fu); f_0086db64();
    /* 005b8f4f: push dword ptr [0xa74a1c] */ { u32 v = R32((u32)(0xa74a1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8f55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f56: push 0xa74a20 */ { u32 v = 0xa74a20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f5b: call 0x5b9334 */ r_esp -= 4; W32(r_esp, 0x5b8f60u); f_005b9334();
    /* 005b8f60: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8f63: mov dword ptr [ebx + 0x10], 1 */ W32((u32)(r_ebx+0x10u), 0x1u);
    /* 005b8f6a: jmp 0x5b8a24 */ goto L_005b8a24;
}

void f_005b8fa8(void) /* sub_5B8FA8 */
{
    FN_ENTER(0x005b8fa8);
    /* 005b8fa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8fa9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8faa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8fad: mov esi, ecx */ r_esi = r_ecx;
    /* 005b8faf: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 005b8fb3: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 005b8fb9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b8fbb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005b8fbe: mov ecx, esi */ r_ecx = r_esi;
    /* 005b8fc0: mov dword ptr [eax + edi*8 + 4], edx */ W32((u32)(r_eax+r_edi*8+0x4u), r_edx);
    /* 005b8fc4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005b8fc7: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005b8fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8fcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8fcd: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8fd1: call 0x5b83bc */ r_esp -= 4; W32(r_esp, 0x5b8fd6u); f_005b83bc();
    /* 005b8fd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8fd8: je 0x5b8ff1 */ if (fZ) goto L_005b8ff1;
L_005b8fda:; BB(0x005b8fda);
    /* 005b8fda: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 005b8fe0: mov dword ptr [edx + edi*8 + 4], eax */ W32((u32)(r_edx+r_edi*8+0x4u), r_eax);
    /* 005b8fe4: mov eax, 1 */ r_eax = 0x1u;
    /* 005b8fe9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b8fec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b8fed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b8fee: ret 8 */ FN_RET(0x005b8fa8); r_esp += 12; return;
L_005b8ff1:; BB(0x005b8ff1);
    /* 005b8ff1: push 0x92b284 */ { u32 v = 0x92b284u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ff6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8ffbu); f_0061cdb0();
    /* 005b8ffb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8ffd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b9000: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9001: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b9002: ret 8 */ FN_RET(0x005b8fa8); r_esp += 12; return;
}

