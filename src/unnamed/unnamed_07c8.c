#include "protos.h"

void f_007c8318(void)
{
    FN_ENTER(0x007c8318);
    /* 007c8318: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8319: mov esi, ecx */ r_esi = r_ecx;
    /* 007c831b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007c831d: mov ecx, esi */ r_ecx = r_esi;
    /* 007c831f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x7c8322u); call_ind(t); }
    /* 007c8322: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c8324: mov dword ptr [esi + 0x1211c], eax */ W32((u32)(r_esi+0x1211cu), r_eax);
    /* 007c832a: mov dword ptr [esi + 0x12130], eax */ W32((u32)(r_esi+0x12130u), r_eax);
    /* 007c8330: mov dword ptr [esi + 0x1641c], eax */ W32((u32)(r_esi+0x1641cu), r_eax);
    /* 007c8336: mov dword ptr [esi + 0x16420], eax */ W32((u32)(r_esi+0x16420u), r_eax);
    /* 007c833c: mov eax, dword ptr [esi + 0x1e080] */ r_eax = R32((u32)(r_esi+0x1e080u));
    /* 007c8342: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c8344: je 0x7c8348 */ if (fZ) goto L_007c8348;
L_007c8346:; BB(0x007c8346);
    /* 007c8346: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x7c8348u); call_ind(t); }
L_007c8348:; BB(0x007c8348);
    /* 007c8348: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c8349: ret 4 */ FN_RET(0x007c8318); r_esp += 8; return;
}

void f_007c834c(void) /* sub_7C834C */
{
    FN_ENTER(0x007c834c);
    /* 007c834c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c834d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c834e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c834f: mov edi, ecx */ r_edi = r_ecx;
    /* 007c8351: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007c8355: mov eax, dword ptr [edi + 0x1e094] */ r_eax = R32((u32)(r_edi+0x1e094u));
    /* 007c835b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c835d: je 0x7c8377 */ if (fZ) goto L_007c8377;
L_007c835f:; BB(0x007c835f);
    /* 007c835f: lea ebx, [esi + 0x10] */ r_ebx = (u32)(r_esi+0x10u);
    /* 007c8362: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8363: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8364: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7c8369u); f_00813a78();
    /* 007c8369: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c836a: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 007c836d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c836e: call dword ptr [edi + 0x1e094] */ { u32 t = R32((u32)(r_edi+0x1e094u)); r_esp -= 4; W32(r_esp, 0x7c8374u); call_ind(t); }
    /* 007c8374: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007c8377:; BB(0x007c8377);
    /* 007c8377: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c8378: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c8379: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c837a: ret 4 */ FN_RET(0x007c834c); r_esp += 8; return;
}

void f_007c8380(void) /* sub_7C8380 */
{
    FN_ENTER(0x007c8380);
    /* 007c8380: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8381: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8382: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8383: sub esp, 0xb34 */ {  u32 a = r_esp; u32 b = 0xb34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c8389: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007c838b: mov esi, dword ptr [esp + 0xb44] */ r_esi = R32((u32)(r_esp+0xb44u));
    /* 007c8392: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c8395: mov ecx, 0xb34 */ r_ecx = 0xb34u;
    /* 007c839a: mov dword ptr [ebx + 0x12130], 1 */ W32((u32)(r_ebx+0x12130u), 0x1u);
    /* 007c83a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c83a5: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c83a8: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c83aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c83ab: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c83ae: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c83b0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007c83b4: mov dword ptr [ebx + 0x12140], ecx */ W32((u32)(r_ebx+0x12140u), r_ecx);
    /* 007c83ba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007c83bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007c83be: jle 0x7c8462 */ if ((fZ||fS!=fO)) goto L_007c8462;
L_007c83c4:; BB(0x007c83c4);
    /* 007c83c4: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007c83c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c83c9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c83cb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c83cd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c83cf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c83d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c83d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007c83d5:; BB(0x007c83d5);
    /* 007c83d5: mov ecx, dword ptr [esp + eax + 0x34] */ r_ecx = R32((u32)(r_esp+r_eax+0x34u));
    /* 007c83d9: mov dword ptr [ebx + eax + 0x126b8], ecx */ W32((u32)(r_ebx+r_eax+0x126b8u), r_ecx);
    /* 007c83e0: mov esi, dword ptr [esp + eax + 0x38] */ r_esi = R32((u32)(r_esp+r_eax+0x38u));
    /* 007c83e4: mov dword ptr [ebx + eax + 0x126bc], esi */ W32((u32)(r_ebx+r_eax+0x126bcu), r_esi);
    /* 007c83eb: mov edi, dword ptr [esp + eax + 0x3c] */ r_edi = R32((u32)(r_esp+r_eax+0x3cu));
    /* 007c83ef: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c83f2: mov dword ptr [ebx + eax + 0x126c0], edi */ W32((u32)(r_ebx+r_eax+0x126c0u), r_edi);
    /* 007c83f9: mov ecx, dword ptr [esp + eax + 0x40] */ r_ecx = R32((u32)(r_esp+r_eax+0x40u));
    /* 007c83fd: mov dword ptr [ebx + eax + 0x126c4], ecx */ W32((u32)(r_ebx+r_eax+0x126c4u), r_ecx);
    /* 007c8404: mov ecx, dword ptr [esp + eax + 0x44] */ r_ecx = R32((u32)(r_esp+r_eax+0x44u));
    /* 007c8408: mov dword ptr [ebx + eax + 0x126c8], ecx */ W32((u32)(r_ebx+r_eax+0x126c8u), r_ecx);
    /* 007c840f: mov ecx, dword ptr [esp + eax + 0x48] */ r_ecx = R32((u32)(r_esp+r_eax+0x48u));
    /* 007c8413: mov dword ptr [ebx + eax + 0x126cc], ecx */ W32((u32)(r_ebx+r_eax+0x126ccu), r_ecx);
    /* 007c841a: mov ecx, dword ptr [esp + eax + 0x4c] */ r_ecx = R32((u32)(r_esp+r_eax+0x4cu));
    /* 007c841e: mov dword ptr [ebx + eax + 0x126d0], ecx */ W32((u32)(r_ebx+r_eax+0x126d0u), r_ecx);
    /* 007c8425: mov ecx, dword ptr [esp + eax + 0x50] */ r_ecx = R32((u32)(r_esp+r_eax+0x50u));
    /* 007c8429: mov dword ptr [ebx + eax + 0x126d4], ecx */ W32((u32)(r_ebx+r_eax+0x126d4u), r_ecx);
    /* 007c8430: mov ecx, dword ptr [esp + eax + 0x54] */ r_ecx = R32((u32)(r_esp+r_eax+0x54u));
    /* 007c8434: mov dword ptr [ebx + eax + 0x126d8], ecx */ W32((u32)(r_ebx+r_eax+0x126d8u), r_ecx);
    /* 007c843b: mov ecx, dword ptr [esp + eax + 0x58] */ r_ecx = R32((u32)(r_esp+r_eax+0x58u));
    /* 007c843f: mov dword ptr [ebx + eax + 0x126dc], ecx */ W32((u32)(r_ebx+r_eax+0x126dcu), r_ecx);
    /* 007c8446: mov ecx, dword ptr [esp + eax + 0x5c] */ r_ecx = R32((u32)(r_esp+r_eax+0x5cu));
    /* 007c844a: mov dword ptr [ebx + eax + 0x126e0], ecx */ W32((u32)(r_ebx+r_eax+0x126e0u), r_ecx);
    /* 007c8451: mov ecx, dword ptr [ebx + 0x12140] */ r_ecx = R32((u32)(r_ebx+0x12140u));
    /* 007c8457: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c845a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c845c: jl 0x7c83d5 */ if ((fS!=fO)) goto L_007c83d5;
L_007c8462:; BB(0x007c8462);
    /* 007c8462: mov edx, dword ptr [ebx + 0x1e084] */ r_edx = R32((u32)(r_ebx+0x1e084u));
    /* 007c8468: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c846a: je 0x7c847e */ if (fZ) goto L_007c847e;
L_007c846c:; BB(0x007c846c);
    /* 007c846c: add ebx, 0x126b8 */ {  u32 a = r_ebx; u32 b = 0x126b8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c8472: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007c8476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8477: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8478: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8479: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c847bu); call_ind(t); }
    /* 007c847b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007c847e:; BB(0x007c847e);
    /* 007c847e: add esp, 0xb34 */ {  u32 a = r_esp; u32 b = 0xb34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8484: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c8485: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c8486: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c8487: ret 4 */ FN_RET(0x007c8380); r_esp += 8; return;
}

void f_007c83f8(void)
{
    FN_ENTER(0x007c83f8);
    goto L_007c83f8;
L_007c83d5:; BB(0x007c83d5);
    /* 007c83d5: mov ecx, dword ptr [esp + eax + 0x34] */ r_ecx = R32((u32)(r_esp+r_eax+0x34u));
    /* 007c83d9: mov dword ptr [ebx + eax + 0x126b8], ecx */ W32((u32)(r_ebx+r_eax+0x126b8u), r_ecx);
    /* 007c83e0: mov esi, dword ptr [esp + eax + 0x38] */ r_esi = R32((u32)(r_esp+r_eax+0x38u));
    /* 007c83e4: mov dword ptr [ebx + eax + 0x126bc], esi */ W32((u32)(r_ebx+r_eax+0x126bcu), r_esi);
    /* 007c83eb: mov edi, dword ptr [esp + eax + 0x3c] */ r_edi = R32((u32)(r_esp+r_eax+0x3cu));
    /* 007c83ef: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c83f2: mov dword ptr [ebx + eax + 0x126c0], edi */ W32((u32)(r_ebx+r_eax+0x126c0u), r_edi);
L_007c83f8:; BB(0x007c83f8);
    /* 007c83f8: add byte ptr [ebx - 0x76bffbb4], cl */ { u32 ad = (u32)(r_ebx+0x8940044cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007c83f9: mov ecx, dword ptr [esp + eax + 0x40] */ r_ecx = R32((u32)(r_esp+r_eax+0x40u));
    /* 007c83fd: mov dword ptr [ebx + eax + 0x126c4], ecx */ W32((u32)(r_ebx+r_eax+0x126c4u), r_ecx);
    /* 007c83fe: mov word ptr [ebx], es */ W16((u32)(r_ebx), 0x2bu);
    /* 007c8400: les esp, ptr [esi] */ UNSUP(0x007c8400, "les esp, ptr [esi]");
    /* 007c8402: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007c8404: mov ecx, dword ptr [esp + eax + 0x44] */ r_ecx = R32((u32)(r_esp+r_eax+0x44u));
    /* 007c8408: mov dword ptr [ebx + eax + 0x126c8], ecx */ W32((u32)(r_ebx+r_eax+0x126c8u), r_ecx);
    /* 007c840f: mov ecx, dword ptr [esp + eax + 0x48] */ r_ecx = R32((u32)(r_esp+r_eax+0x48u));
    /* 007c8413: mov dword ptr [ebx + eax + 0x126cc], ecx */ W32((u32)(r_ebx+r_eax+0x126ccu), r_ecx);
    /* 007c841a: mov ecx, dword ptr [esp + eax + 0x4c] */ r_ecx = R32((u32)(r_esp+r_eax+0x4cu));
    /* 007c841e: mov dword ptr [ebx + eax + 0x126d0], ecx */ W32((u32)(r_ebx+r_eax+0x126d0u), r_ecx);
    /* 007c8425: mov ecx, dword ptr [esp + eax + 0x50] */ r_ecx = R32((u32)(r_esp+r_eax+0x50u));
    /* 007c8429: mov dword ptr [ebx + eax + 0x126d4], ecx */ W32((u32)(r_ebx+r_eax+0x126d4u), r_ecx);
    /* 007c8430: mov ecx, dword ptr [esp + eax + 0x54] */ r_ecx = R32((u32)(r_esp+r_eax+0x54u));
    /* 007c8434: mov dword ptr [ebx + eax + 0x126d8], ecx */ W32((u32)(r_ebx+r_eax+0x126d8u), r_ecx);
    /* 007c843b: mov ecx, dword ptr [esp + eax + 0x58] */ r_ecx = R32((u32)(r_esp+r_eax+0x58u));
    /* 007c843f: mov dword ptr [ebx + eax + 0x126dc], ecx */ W32((u32)(r_ebx+r_eax+0x126dcu), r_ecx);
    /* 007c8446: mov ecx, dword ptr [esp + eax + 0x5c] */ r_ecx = R32((u32)(r_esp+r_eax+0x5cu));
    /* 007c844a: mov dword ptr [ebx + eax + 0x126e0], ecx */ W32((u32)(r_ebx+r_eax+0x126e0u), r_ecx);
    /* 007c8451: mov ecx, dword ptr [ebx + 0x12140] */ r_ecx = R32((u32)(r_ebx+0x12140u));
    /* 007c8457: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c845a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c845c: jl 0x7c83d5 */ if ((fS!=fO)) goto L_007c83d5;
L_007c8462:; BB(0x007c8462);
    /* 007c8462: mov edx, dword ptr [ebx + 0x1e084] */ r_edx = R32((u32)(r_ebx+0x1e084u));
    /* 007c8468: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c846a: je 0x7c847e */ if (fZ) goto L_007c847e;
L_007c846c:; BB(0x007c846c);
    /* 007c846c: add ebx, 0x126b8 */ {  u32 a = r_ebx; u32 b = 0x126b8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c8472: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007c8476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8477: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8478: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8479: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c847bu); call_ind(t); }
    /* 007c847b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007c847e:; BB(0x007c847e);
    /* 007c847e: add esp, 0xb34 */ {  u32 a = r_esp; u32 b = 0xb34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8484: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c8485: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c8486: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c8487: ret 4 */ FN_RET(0x007c83f8); r_esp += 8; return;
}

void f_007c848c(void) /* sub_7C848C */
{
    FN_ENTER(0x007c848c);
    /* 007c848c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c848d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c848e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c848f: sub esp, 0xb34 */ {  u32 a = r_esp; u32 b = 0xb34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c8495: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007c8497: mov esi, dword ptr [esp + 0xb44] */ r_esi = R32((u32)(r_esp+0xb44u));
    /* 007c849e: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c84a1: mov ecx, 0xb34 */ r_ecx = 0xb34u;
    /* 007c84a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c84a7: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c84aa: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c84ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c84ad: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c84b0: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c84b2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c84b6: mov dword ptr [ebx + 0x12140], eax */ W32((u32)(r_ebx+0x12140u), r_eax);
    /* 007c84bc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007c84be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007c84c0: jle 0x7c8564 */ if ((fZ||fS!=fO)) goto L_007c8564;
L_007c84c6:; BB(0x007c84c6);
    /* 007c84c6: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007c84c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c84cb: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007c84cd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c84cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c84d1: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007c84d3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c84d5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_007c84d7:; BB(0x007c84d7);
    /* 007c84d7: mov eax, dword ptr [esp + edx + 0x34] */ r_eax = R32((u32)(r_esp+r_edx+0x34u));
    /* 007c84db: mov dword ptr [edx + ebx + 0x126b8], eax */ W32((u32)(r_edx+r_ebx+0x126b8u), r_eax);
    /* 007c84e2: mov esi, dword ptr [esp + edx + 0x38] */ r_esi = R32((u32)(r_esp+r_edx+0x38u));
    /* 007c84e6: mov dword ptr [edx + ebx + 0x126bc], esi */ W32((u32)(r_edx+r_ebx+0x126bcu), r_esi);
    /* 007c84ed: mov edi, dword ptr [esp + edx + 0x3c] */ r_edi = R32((u32)(r_esp+r_edx+0x3cu));
    /* 007c84f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c84f4: mov dword ptr [edx + ebx + 0x126c0], edi */ W32((u32)(r_edx+r_ebx+0x126c0u), r_edi);
    /* 007c84fb: mov eax, dword ptr [esp + edx + 0x40] */ r_eax = R32((u32)(r_esp+r_edx+0x40u));
    /* 007c84ff: mov dword ptr [edx + ebx + 0x126c4], eax */ W32((u32)(r_edx+r_ebx+0x126c4u), r_eax);
    /* 007c8506: mov eax, dword ptr [esp + edx + 0x44] */ r_eax = R32((u32)(r_esp+r_edx+0x44u));
    /* 007c850a: mov dword ptr [edx + ebx + 0x126c8], eax */ W32((u32)(r_edx+r_ebx+0x126c8u), r_eax);
    /* 007c8511: mov eax, dword ptr [esp + edx + 0x48] */ r_eax = R32((u32)(r_esp+r_edx+0x48u));
    /* 007c8515: mov dword ptr [edx + ebx + 0x126cc], eax */ W32((u32)(r_edx+r_ebx+0x126ccu), r_eax);
    /* 007c851c: mov eax, dword ptr [esp + edx + 0x4c] */ r_eax = R32((u32)(r_esp+r_edx+0x4cu));
    /* 007c8520: mov dword ptr [edx + ebx + 0x126d0], eax */ W32((u32)(r_edx+r_ebx+0x126d0u), r_eax);
    /* 007c8527: mov eax, dword ptr [esp + edx + 0x50] */ r_eax = R32((u32)(r_esp+r_edx+0x50u));
    /* 007c852b: mov dword ptr [edx + ebx + 0x126d4], eax */ W32((u32)(r_edx+r_ebx+0x126d4u), r_eax);
    /* 007c8532: mov eax, dword ptr [esp + edx + 0x54] */ r_eax = R32((u32)(r_esp+r_edx+0x54u));
    /* 007c8536: mov dword ptr [edx + ebx + 0x126d8], eax */ W32((u32)(r_edx+r_ebx+0x126d8u), r_eax);
    /* 007c853d: mov eax, dword ptr [esp + edx + 0x58] */ r_eax = R32((u32)(r_esp+r_edx+0x58u));
    /* 007c8541: mov dword ptr [edx + ebx + 0x126dc], eax */ W32((u32)(r_edx+r_ebx+0x126dcu), r_eax);
    /* 007c8548: mov eax, dword ptr [esp + edx + 0x5c] */ r_eax = R32((u32)(r_esp+r_edx+0x5cu));
    /* 007c854c: mov dword ptr [edx + ebx + 0x126e0], eax */ W32((u32)(r_edx+r_ebx+0x126e0u), r_eax);
    /* 007c8553: mov eax, dword ptr [ebx + 0x12140] */ r_eax = R32((u32)(r_ebx+0x12140u));
    /* 007c8559: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c855c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c855e: jl 0x7c84d7 */ if ((fS!=fO)) goto L_007c84d7;
L_007c8564:; BB(0x007c8564);
    /* 007c8564: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007c8566: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8568: je 0x7c859e */ if (fZ) goto L_007c859e;
L_007c856a:; BB(0x007c856a);
    /* 007c856a: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 007c856d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c856f: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c8571: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c8573: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c8575: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c8577: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c8579: lea esi, [eax + eax + 0x126c2] */ r_esi = (u32)(r_eax+r_eax+0x126c2u);
    /* 007c8580: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_007c8582:; BB(0x007c8582);
    /* 007c8582: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007c8584: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8585: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8586: call 0x813e08 */ r_esp -= 4; W32(r_esp, 0x7c858bu); f_00813e08();
    /* 007c858b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c858e: mov eax, dword ptr [ebx + 0x12140] */ r_eax = R32((u32)(r_ebx+0x12140u));
    /* 007c8594: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c8597: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007c859a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c859c: jne 0x7c8582 */ if (!fZ) goto L_007c8582;
L_007c859e:; BB(0x007c859e);
    /* 007c859e: mov esi, dword ptr [ebx + 0x1e088] */ r_esi = R32((u32)(r_ebx+0x1e088u));
    /* 007c85a4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c85a6: je 0x7c85ba */ if (fZ) goto L_007c85ba;
L_007c85a8:; BB(0x007c85a8);
    /* 007c85a8: add ebx, 0x126b8 */ {  u32 a = r_ebx; u32 b = 0x126b8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c85ae: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007c85b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c85b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c85b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c85b5: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x7c85b7u); call_ind(t); }
    /* 007c85b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007c85ba:; BB(0x007c85ba);
    /* 007c85ba: add esp, 0xb34 */ {  u32 a = r_esp; u32 b = 0xb34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c85c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c85c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c85c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c85c3: ret 4 */ FN_RET(0x007c848c); r_esp += 8; return;
}

void f_007c85c8(void) /* sub_7C85C8 */
{
    FN_ENTER(0x007c85c8);
    /* 007c85c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c85c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c85ca: sub esp, 0x1a8 */ {  u32 a = r_esp; u32 b = 0x1a8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c85d0: mov edx, ecx */ r_edx = r_ecx;
    /* 007c85d2: mov esi, dword ptr [esp + 0x1b4] */ r_esi = R32((u32)(r_esp+0x1b4u));
    /* 007c85d9: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c85dc: mov ecx, 0x1a8 */ r_ecx = 0x1a8u;
    /* 007c85e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c85e2: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c85e5: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c85e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c85e8: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c85eb: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c85ed: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 007c85f1: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007c85f5: mov eax, 0xaaeba0 */ r_eax = 0xaaeba0u;
    /* 007c85fa: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 007c85fc: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007c8600: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 007c8603: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 007c8606: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 007c860a: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 007c860d: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007c8611: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 007c8614: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 007c8618: mov dword ptr [eax + 0x14], esi */ W32((u32)(r_eax+0x14u), r_esi);
    /* 007c861b: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007c861f: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 007c8622: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007c8626: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 007c8629: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 007c862d: mov dword ptr [eax + 0x20], esi */ W32((u32)(r_eax+0x20u), r_esi);
    /* 007c8630: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 007c8634: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 007c8637: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 007c863b: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 007c863e: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 007c8642: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 007c8645: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 007c8649: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 007c864c: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 007c8650: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 007c8653: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 007c8657: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 007c865a: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 007c865e: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 007c8661: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 007c8665: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 007c8668: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 007c866c: mov dword ptr [eax + 0x44], esi */ W32((u32)(r_eax+0x44u), r_esi);
    /* 007c866f: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 007c8673: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 007c8676: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 007c867a: mov dword ptr [eax + 0x4c], esi */ W32((u32)(r_eax+0x4cu), r_esi);
    /* 007c867d: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 007c8681: mov dword ptr [eax + 0x50], esi */ W32((u32)(r_eax+0x50u), r_esi);
    /* 007c8684: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 007c8688: mov dword ptr [eax + 0x54], esi */ W32((u32)(r_eax+0x54u), r_esi);
    /* 007c868b: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 007c868f: mov dword ptr [eax + 0x58], esi */ W32((u32)(r_eax+0x58u), r_esi);
    /* 007c8692: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007c8696: mov dword ptr [eax + 0x5c], esi */ W32((u32)(r_eax+0x5cu), r_esi);
    /* 007c8699: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 007c869d: mov dword ptr [eax + 0x60], esi */ W32((u32)(r_eax+0x60u), r_esi);
    /* 007c86a0: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 007c86a4: mov dword ptr [eax + 0x64], esi */ W32((u32)(r_eax+0x64u), r_esi);
    /* 007c86a7: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 007c86ab: mov dword ptr [eax + 0x68], esi */ W32((u32)(r_eax+0x68u), r_esi);
    /* 007c86ae: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
    /* 007c86b2: mov dword ptr [eax + 0x6c], esi */ W32((u32)(r_eax+0x6cu), r_esi);
    /* 007c86b5: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 007c86b9: mov dword ptr [eax + 0x70], esi */ W32((u32)(r_eax+0x70u), r_esi);
    /* 007c86bc: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 007c86c0: mov dword ptr [eax + 0x74], esi */ W32((u32)(r_eax+0x74u), r_esi);
    /* 007c86c3: mov esi, dword ptr [esp + 0x80] */ r_esi = R32((u32)(r_esp+0x80u));
    /* 007c86ca: mov dword ptr [eax + 0x78], esi */ W32((u32)(r_eax+0x78u), r_esi);
    /* 007c86cd: mov esi, dword ptr [esp + 0x84] */ r_esi = R32((u32)(r_esp+0x84u));
    /* 007c86d4: mov dword ptr [eax + 0x7c], esi */ W32((u32)(r_eax+0x7cu), r_esi);
    /* 007c86d7: mov dword ptr [edx + 0x12134], 1 */ W32((u32)(r_edx+0x12134u), 0x1u);
    /* 007c86e1: mov edx, dword ptr [edx + 0x1e0a0] */ r_edx = R32((u32)(r_edx+0x1e0a0u));
    /* 007c86e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c86e9: je 0x7c86f2 */ if (fZ) goto L_007c86f2;
L_007c86eb:; BB(0x007c86eb);
    /* 007c86eb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007c86ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c86ef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c86f1u); call_ind(t); }
    /* 007c86f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c86f2:; BB(0x007c86f2);
    /* 007c86f2: add esp, 0x1a8 */ {  u32 a = r_esp; u32 b = 0x1a8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c86f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c86f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c86fa: ret 4 */ FN_RET(0x007c85c8); r_esp += 8; return;
}

void f_007c8700(void) /* sub_7C8700 */
{
    FN_ENTER(0x007c8700);
    /* 007c8700: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8701: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8702: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8703: sub esp, 0x434 */ {  u32 a = r_esp; u32 b = 0x434u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c8709: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007c870b: mov esi, dword ptr [esp + 0x444] */ r_esi = R32((u32)(r_esp+0x444u));
    /* 007c8712: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c8715: mov ecx, 0x41c */ r_ecx = 0x41cu;
    /* 007c871a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c871b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c871e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c8720: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8721: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8724: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c8726: movzx eax, byte ptr [esp + 2] */ r_eax = (u32)R8((u32)(r_esp+0x2u));
    /* 007c872b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007c872f: mov byte ptr [esp + 0x41f], 0 */ W8((u32)(r_esp+0x41fu), 0x0u);
    /* 007c8737: mov esi, 0x18 */ r_esi = 0x18u;
    /* 007c873c: mov byte ptr [esp + 0x41e], al */ W8((u32)(r_esp+0x41eu), (u8)r_eax);
    /* 007c8743: mov dword ptr [esp + 0x420], edx */ W32((u32)(r_esp+0x420u), r_edx);
    /* 007c874a: mov word ptr [esp + 0x41c], si */ W16((u32)(r_esp+0x41cu), (u16)r_esi);
    /* 007c8752: lea eax, [esp + 0x424] */ r_eax = (u32)(r_esp+0x424u);
    /* 007c8759: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 007c875d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007c875f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8761: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7c8766u); f_00858900();
    /* 007c8766: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c8769: mov edx, dword ptr [ebx + 0x1e0fc] */ r_edx = R32((u32)(r_ebx+0x1e0fcu));
    /* 007c876f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8771: je 0x7c877a */ if (fZ) goto L_007c877a;
L_007c8773:; BB(0x007c8773);
    /* 007c8773: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007c8776: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8777: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c8779u); call_ind(t); }
    /* 007c8779: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c877a:; BB(0x007c877a);
    /* 007c877a: movzx eax, word ptr [esp + 0x41c] */ r_eax = (u32)R16((u32)(r_esp+0x41cu));
    /* 007c8782: lea edx, [esp + 0x41c] */ r_edx = (u32)(r_esp+0x41cu);
    /* 007c8789: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c878a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007c878c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c878d: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7c8792u); f_0077fd10();
    /* 007c8792: add esp, 0x434 */ {  u32 a = r_esp; u32 b = 0x434u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8798: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c8799: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c879a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c879b: ret 4 */ FN_RET(0x007c8700); r_esp += 8; return;
}

void f_007c87a0(void) /* sub_7C87A0 */
{
    FN_ENTER(0x007c87a0);
    /* 007c87a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c87a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c87a2: sub esp, 0x410 */ {  u32 a = r_esp; u32 b = 0x410u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c87a8: mov eax, ecx */ r_eax = r_ecx;
    /* 007c87aa: mov esi, dword ptr [esp + 0x41c] */ r_esi = R32((u32)(r_esp+0x41cu));
    /* 007c87b1: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c87b4: mov ecx, 0x410 */ r_ecx = 0x410u;
    /* 007c87b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c87ba: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c87bd: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c87bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c87c0: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c87c3: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c87c5: mov edx, dword ptr [eax + 0x1e098] */ r_edx = R32((u32)(r_eax+0x1e098u));
    /* 007c87cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c87cd: je 0x7c87dd */ if (fZ) goto L_007c87dd;
L_007c87cf:; BB(0x007c87cf);
    /* 007c87cf: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 007c87d3: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c87d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c87d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c87dau); call_ind(t); }
    /* 007c87da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007c87dd:; BB(0x007c87dd);
    /* 007c87dd: add esp, 0x410 */ {  u32 a = r_esp; u32 b = 0x410u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c87e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c87e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c87e5: ret 4 */ FN_RET(0x007c87a0); r_esp += 8; return;
}

void f_007c87e8(void)
{
    FN_ENTER(0x007c87e8);
    /* 007c87e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c87e9: mov edi, ecx */ r_edi = r_ecx;
    /* 007c87eb: mov ecx, edi */ r_ecx = r_edi;
    /* 007c87ed: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007c87f1: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007c87f4: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 007c87f7: mov dword ptr [0xaaecc4], edx */ W32((u32)(0xaaecc4u), r_edx);
    /* 007c87fd: mov word ptr [0xaaecc0], ax */ W16((u32)(0xaaecc0u), (u16)r_eax);
    /* 007c8803: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 007c8805: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x7c8808u); call_ind(t); }
    /* 007c8808: push dword ptr [0xaaecc4] */ { u32 v = R32((u32)(0xaaecc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c880e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c8810: mov ecx, edi */ r_ecx = r_edi;
    /* 007c8812: mov dword ptr [edi + 0x1211c], eax */ W32((u32)(r_edi+0x1211cu), r_eax);
    /* 007c8818: mov dword ptr [edi + 0x12130], eax */ W32((u32)(r_edi+0x12130u), r_eax);
    /* 007c881e: mov dword ptr [edi + 0x1641c], eax */ W32((u32)(r_edi+0x1641cu), r_eax);
    /* 007c8824: mov dword ptr [edi + 0x16420], eax */ W32((u32)(r_edi+0x16420u), r_eax);
    /* 007c882a: call 0x77f8c8 */ r_esp -= 4; W32(r_esp, 0x7c882fu); f_0077f8c8();
    /* 007c882f: movsx eax, word ptr [0xaaecc0] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaaecc0u));
    /* 007c8836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8837: mov ecx, edi */ r_ecx = r_edi;
    /* 007c8839: call 0x77f8ec */ r_esp -= 4; W32(r_esp, 0x7c883eu); f_0077f8ec();
    /* 007c883e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 007c8840: mov ecx, edi */ r_ecx = r_edi;
    /* 007c8842: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x7c8845u); call_ind(t); }
    /* 007c8845: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c8847: jge 0x7c8850 */ if ((fS==fO)) goto L_007c8850;
L_007c8849:; BB(0x007c8849);
    /* 007c8849: mov byte ptr [edi + 0x10074], 1 */ W8((u32)(r_edi+0x10074u), 0x1u);
L_007c8850:; BB(0x007c8850);
    /* 007c8850: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c8851: ret 4 */ FN_RET(0x007c87e8); r_esp += 8; return;
}

void f_007c8854(void) /* sub_7C8854 */
{
    FN_ENTER(0x007c8854);
    /* 007c8854: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8855: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8856: sub esp, 0x808 */ {  u32 a = r_esp; u32 b = 0x808u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c885c: mov eax, ecx */ r_eax = r_ecx;
    /* 007c885e: mov esi, dword ptr [esp + 0x814] */ r_esi = R32((u32)(r_esp+0x814u));
    /* 007c8865: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c8868: mov ecx, 0x808 */ r_ecx = 0x808u;
    /* 007c886d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c886e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c8871: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c8873: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8874: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8877: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c8879: mov edx, dword ptr [eax + 0x1e09c] */ r_edx = R32((u32)(r_eax+0x1e09cu));
    /* 007c887f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8881: je 0x7c888b */ if (fZ) goto L_007c888b;
L_007c8883:; BB(0x007c8883);
    /* 007c8883: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007c8887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8888: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c888au); call_ind(t); }
    /* 007c888a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c888b:; BB(0x007c888b);
    /* 007c888b: add esp, 0x808 */ {  u32 a = r_esp; u32 b = 0x808u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8891: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c8892: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c8893: ret 4 */ FN_RET(0x007c8854); r_esp += 8; return;
}

void f_007c8898(void) /* sub_7C8898 */
{
    FN_ENTER(0x007c8898);
    /* 007c8898: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8899: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c889a: sub esp, 0x408 */ {  u32 a = r_esp; u32 b = 0x408u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c88a0: mov ecx, 0x408 */ r_ecx = 0x408u;
    /* 007c88a5: mov esi, dword ptr [esp + 0x414] */ r_esi = R32((u32)(r_esp+0x414u));
    /* 007c88ac: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c88af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c88b0: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c88b3: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c88b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c88b6: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c88b9: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c88bb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007c88bf: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007c88c3: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c88c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c88c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c88c8: call 0x800860 */ r_esp -= 4; W32(r_esp, 0x7c88cdu); f_00800860();
    /* 007c88cd: add esp, 0x410 */ {  u32 a = r_esp; u32 b = 0x410u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c88d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c88d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c88d5: ret 4 */ FN_RET(0x007c8898); r_esp += 8; return;
}

void f_007c88a0(void)
{
    FN_ENTER(0x007c88a0);
    /* 007c88a0: mov ecx, 0x408 */ r_ecx = 0x408u;
    /* 007c88a5: mov esi, dword ptr [esp + 0x414] */ r_esi = R32((u32)(r_esp+0x414u));
    /* 007c88ac: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c88af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c88b0: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c88b3: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c88b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c88b6: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c88b9: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c88bb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007c88bf: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007c88c3: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c88c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c88c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c88c8: call 0x800860 */ r_esp -= 4; W32(r_esp, 0x7c88cdu); f_00800860();
    /* 007c88cd: add esp, 0x410 */ {  u32 a = r_esp; u32 b = 0x410u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c88d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c88d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c88d5: ret 4 */ FN_RET(0x007c88a0); r_esp += 8; return;
}

void f_007c88d8(void)
{
    FN_ENTER(0x007c88d8);
    /* 007c88d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c88d9: mov ebp, esp */ r_ebp = r_esp;
    /* 007c88db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c88dd: push 0x8f691a */ { u32 v = 0x8f691au; r_esp -= 4; W32(r_esp, v); }
    /* 007c88e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007c88e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c88e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007c88f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c88f1: mov eax, 0x3da4 */ r_eax = 0x3da4u;
    /* 007c88f6: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x7c88fbu); f_00858020();
    /* 007c88fb: mov ecx, dword ptr [esp + 0x3da4] */ r_ecx = R32((u32)(r_esp+0x3da4u));
    /* 007c8902: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007c8905: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007c8908: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007c890b: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007c890e: mov eax, ecx */ r_eax = r_ecx;
    /* 007c8910: mov ecx, 0x3d94 */ r_ecx = 0x3d94u;
    /* 007c8915: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007c8918: lea edi, [ebp - 0x3db0] */ r_edi = (u32)(r_ebp+0xffffc250u);
    /* 007c891e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c891f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c8922: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c8924: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8925: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8928: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c892a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007c8931: mov edx, dword ptr [eax + 0x1e0a4] */ r_edx = R32((u32)(r_eax+0x1e0a4u));
    /* 007c8937: mov dword ptr [eax + 0x12134], 1 */ W32((u32)(r_eax+0x12134u), 0x1u);
    /* 007c8941: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8943: je 0x7c894f */ if (fZ) goto L_007c894f;
L_007c8945:; BB(0x007c8945);
    /* 007c8945: lea eax, [ebp - 0x3db0] */ r_eax = (u32)(r_ebp+0xffffc250u);
    /* 007c894b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c894c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c894eu); call_ind(t); }
    /* 007c894e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c894f:; BB(0x007c894f);
    /* 007c894f: lea eax, [ebp - 0x3db0] */ r_eax = (u32)(r_ebp+0xffffc250u);
    /* 007c8955: mov dword ptr [ebp - 0x3db4], eax */ W32((u32)(r_ebp+0xffffc24cu), r_eax);
    /* 007c895b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007c8962: push 0x79cb0c */ { u32 v = 0x79cb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 007c8967: lea eax, [ebp - 0x3d9c] */ r_eax = (u32)(r_ebp+0xffffc264u);
    /* 007c896d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007c896f: push 0x520 */ { u32 v = 0x520u; r_esp -= 4; W32(r_esp, v); }
    /* 007c8974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8975: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c897au); f_008586d6();
    /* 007c897a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007c897d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007c8980: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007c8983: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c8986: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007c898d: mov esp, ebp */ r_esp = r_ebp;
    /* 007c898f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c8990: ret 4 */ FN_RET(0x007c88d8); r_esp += 8; return;
}

void f_007c89ec(void) /* sub_7C89EC */
{
    FN_ENTER(0x007c89ec);
    /* 007c89ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c89ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c89ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c89ef: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c89f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007c89f7: mov esi, dword ptr [esp + 0xd8] */ r_esi = R32((u32)(r_esp+0xd8u));
    /* 007c89fe: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c8a01: mov ecx, 0xc8 */ r_ecx = 0xc8u;
    /* 007c8a06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8a07: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c8a0a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c8a0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8a0d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8a10: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c8a12: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007c8a16: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 007c8a1b: mov dword ptr [ebx + 0x12148], esi */ W32((u32)(r_ebx+0x12148u), r_esi);
    /* 007c8a21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8a23: je 0x7c8a6d */ if (fZ) goto L_007c8a6d;
L_007c8a25:; BB(0x007c8a25);
    /* 007c8a25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007c8a27: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007c8a29: jle 0x7c8b99 */ if ((fZ||fS!=fO)) goto L_007c8b99;
L_007c8a2f:; BB(0x007c8a2f);
    /* 007c8a2f: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007c8a32: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c8a34: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007c8a37: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007c8a39:; BB(0x007c8a39);
    /* 007c8a39: mov ecx, dword ptr [esp + eax + 8] */ r_ecx = R32((u32)(r_esp+r_eax+0x8u));
    /* 007c8a3d: mov dword ptr [eax + ebx + 0x13cb8], ecx */ W32((u32)(r_eax+r_ebx+0x13cb8u), r_ecx);
    /* 007c8a44: mov esi, dword ptr [esp + eax + 0xc] */ r_esi = R32((u32)(r_esp+r_eax+0xcu));
    /* 007c8a48: mov dword ptr [eax + ebx + 0x13cbc], esi */ W32((u32)(r_eax+r_ebx+0x13cbcu), r_esi);
    /* 007c8a4f: mov edi, dword ptr [esp + eax + 0x10] */ r_edi = R32((u32)(r_esp+r_eax+0x10u));
    /* 007c8a53: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c8a56: mov dword ptr [eax + ebx + 0x13cc0], edi */ W32((u32)(r_eax+r_ebx+0x13cc0u), r_edi);
    /* 007c8a5d: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c8a60: cmp edx, dword ptr [ebx + 0x12148] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x12148u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c8a66: jl 0x7c8a39 */ if ((fS!=fO)) goto L_007c8a39;
L_007c8a68:; BB(0x007c8a68);
    /* 007c8a68: jmp 0x7c8b99 */ goto L_007c8b99;
L_007c8a6d:; BB(0x007c8a6d);
    /* 007c8a6d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007c8a71: mov dword ptr [ebx + 0x13cb8], eax */ W32((u32)(r_ebx+0x13cb8u), r_eax);
    /* 007c8a77: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007c8a7b: mov dword ptr [ebx + 0x13cbc], edx */ W32((u32)(r_ebx+0x13cbcu), r_edx);
    /* 007c8a81: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007c8a85: mov dword ptr [ebx + 0x13cc0], esi */ W32((u32)(r_ebx+0x13cc0u), r_esi);
    /* 007c8a8b: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007c8a8f: mov dword ptr [ebx + 0x13cc4], edi */ W32((u32)(r_ebx+0x13cc4u), r_edi);
    /* 007c8a95: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007c8a99: mov dword ptr [ebx + 0x13cc8], eax */ W32((u32)(r_ebx+0x13cc8u), r_eax);
    /* 007c8a9f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007c8aa3: mov dword ptr [ebx + 0x13ccc], eax */ W32((u32)(r_ebx+0x13cccu), r_eax);
    /* 007c8aa9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007c8aad: mov dword ptr [ebx + 0x13cd0], eax */ W32((u32)(r_ebx+0x13cd0u), r_eax);
    /* 007c8ab3: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007c8ab7: mov dword ptr [ebx + 0x13cd4], eax */ W32((u32)(r_ebx+0x13cd4u), r_eax);
    /* 007c8abd: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 007c8ac1: mov dword ptr [ebx + 0x13cd8], eax */ W32((u32)(r_ebx+0x13cd8u), r_eax);
    /* 007c8ac7: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 007c8acb: mov dword ptr [ebx + 0x13cdc], eax */ W32((u32)(r_ebx+0x13cdcu), r_eax);
    /* 007c8ad1: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007c8ad5: mov dword ptr [ebx + 0x13ce0], eax */ W32((u32)(r_ebx+0x13ce0u), r_eax);
    /* 007c8adb: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007c8adf: mov dword ptr [ebx + 0x13ce4], eax */ W32((u32)(r_ebx+0x13ce4u), r_eax);
    /* 007c8ae5: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007c8ae9: mov dword ptr [ebx + 0x13ce8], eax */ W32((u32)(r_ebx+0x13ce8u), r_eax);
    /* 007c8aef: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007c8af3: mov dword ptr [ebx + 0x13cec], eax */ W32((u32)(r_ebx+0x13cecu), r_eax);
    /* 007c8af9: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007c8afd: mov dword ptr [ebx + 0x13cf0], eax */ W32((u32)(r_ebx+0x13cf0u), r_eax);
    /* 007c8b03: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007c8b07: mov dword ptr [ebx + 0x13cf4], eax */ W32((u32)(r_ebx+0x13cf4u), r_eax);
    /* 007c8b0d: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007c8b11: mov dword ptr [ebx + 0x13cf8], eax */ W32((u32)(r_ebx+0x13cf8u), r_eax);
    /* 007c8b17: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007c8b1b: mov dword ptr [ebx + 0x13cfc], eax */ W32((u32)(r_ebx+0x13cfcu), r_eax);
    /* 007c8b21: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007c8b25: mov dword ptr [ebx + 0x13d00], eax */ W32((u32)(r_ebx+0x13d00u), r_eax);
    /* 007c8b2b: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 007c8b2f: mov dword ptr [ebx + 0x13d04], eax */ W32((u32)(r_ebx+0x13d04u), r_eax);
    /* 007c8b35: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 007c8b39: mov dword ptr [ebx + 0x13d08], eax */ W32((u32)(r_ebx+0x13d08u), r_eax);
    /* 007c8b3f: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 007c8b43: mov dword ptr [ebx + 0x13d0c], eax */ W32((u32)(r_ebx+0x13d0cu), r_eax);
    /* 007c8b49: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 007c8b4d: mov dword ptr [ebx + 0x13d10], eax */ W32((u32)(r_ebx+0x13d10u), r_eax);
    /* 007c8b53: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 007c8b57: mov dword ptr [ebx + 0x13d14], eax */ W32((u32)(r_ebx+0x13d14u), r_eax);
    /* 007c8b5d: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 007c8b61: mov dword ptr [ebx + 0x13d18], eax */ W32((u32)(r_ebx+0x13d18u), r_eax);
    /* 007c8b67: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 007c8b6b: mov dword ptr [ebx + 0x13d1c], eax */ W32((u32)(r_ebx+0x13d1cu), r_eax);
    /* 007c8b71: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 007c8b75: mov dword ptr [ebx + 0x13d20], eax */ W32((u32)(r_ebx+0x13d20u), r_eax);
    /* 007c8b7b: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 007c8b7f: mov dword ptr [ebx + 0x13d24], eax */ W32((u32)(r_ebx+0x13d24u), r_eax);
    /* 007c8b85: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 007c8b89: mov dword ptr [ebx + 0x13d28], eax */ W32((u32)(r_ebx+0x13d28u), r_eax);
    /* 007c8b8f: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 007c8b93: mov dword ptr [ebx + 0x13d2c], eax */ W32((u32)(r_ebx+0x13d2cu), r_eax);
L_007c8b99:; BB(0x007c8b99);
    /* 007c8b99: add esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8b9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c8ba0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c8ba1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c8ba2: ret 4 */ FN_RET(0x007c89ec); r_esp += 8; return;
}

void f_007c8ba8(void) /* sub_7C8BA8 */
{
    FN_ENTER(0x007c8ba8);
    /* 007c8ba8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8ba9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8baa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c8bab: sub esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c8bb1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007c8bb3: mov esi, dword ptr [esp + 0x140] */ r_esi = R32((u32)(r_esp+0x140u));
    /* 007c8bba: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c8bbd: mov ecx, 0x130 */ r_ecx = 0x130u;
    /* 007c8bc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8bc3: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c8bc6: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c8bc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8bc9: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8bcc: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c8bce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007c8bd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8bd2: call 0x74eef0 */ r_esp -= 4; W32(r_esp, 0x7c8bd7u); f_0074eef0();
    /* 007c8bd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8bd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8bda: jne 0x7c8bed */ if (!fZ) goto L_007c8bed;
L_007c8bdc:; BB(0x007c8bdc);
    /* 007c8bdc: mov edx, dword ptr [ebp + 0x1e0d4] */ r_edx = R32((u32)(r_ebp+0x1e0d4u));
    /* 007c8be2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8be4: je 0x7c8bed */ if (fZ) goto L_007c8bed;
L_007c8be6:; BB(0x007c8be6);
    /* 007c8be6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007c8be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8bea: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c8becu); call_ind(t); }
    /* 007c8bec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c8bed:; BB(0x007c8bed);
    /* 007c8bed: add esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8bf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c8bf4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c8bf5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c8bf6: ret 4 */ FN_RET(0x007c8ba8); r_esp += 8; return;
}

void f_007c8bfc(void) /* sub_7C8BFC */
{
    FN_ENTER(0x007c8bfc);
    /* 007c8bfc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c8bff: mov byte ptr [esp + 2], 0x1d */ W8((u32)(r_esp+0x2u), 0x1du);
    /* 007c8c04: mov eax, 8 */ r_eax = 0x8u;
    /* 007c8c09: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007c8c0d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007c8c10: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007c8c12: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007c8c16: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007c8c1a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007c8c1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8c1d: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7c8c22u); f_0077fd10();
    /* 007c8c22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8c25: ret 4 */ FN_RET(0x007c8bfc); r_esp += 8; return;
}

void f_007c8c28(void)
{
    FN_ENTER(0x007c8c28);
    /* 007c8c28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c8c29: mov ebp, esp */ r_ebp = r_esp;
    /* 007c8c2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c8c2d: push 0x8f6986 */ { u32 v = 0x8f6986u; r_esp -= 4; W32(r_esp, v); }
    /* 007c8c32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007c8c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8c39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007c8c40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8c41: mov eax, 0x3da4 */ r_eax = 0x3da4u;
    /* 007c8c46: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x7c8c4bu); f_00858020();
    /* 007c8c4b: mov ecx, dword ptr [esp + 0x3da4] */ r_ecx = R32((u32)(r_esp+0x3da4u));
    /* 007c8c52: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007c8c55: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007c8c58: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007c8c5b: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007c8c5e: mov eax, ecx */ r_eax = r_ecx;
    /* 007c8c60: mov ecx, 0x3d94 */ r_ecx = 0x3d94u;
    /* 007c8c65: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007c8c68: lea edi, [ebp - 0x3db0] */ r_edi = (u32)(r_ebp+0xffffc250u);
    /* 007c8c6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8c6f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c8c72: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c8c74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8c75: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8c78: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c8c7a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007c8c81: mov ebx, dword ptr [eax + 0x1e0b0] */ r_ebx = R32((u32)(r_eax+0x1e0b0u));
    /* 007c8c87: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8c89: je 0x7c8ca7 */ if (fZ) goto L_007c8ca7;
L_007c8c8b:; BB(0x007c8c8b);
    /* 007c8c8b: movsx edx, byte ptr [ebp - 0x3da7] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffc259u));
    /* 007c8c92: movsx eax, byte ptr [ebp - 0x3da6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffc25au));
    /* 007c8c99: lea ecx, [ebp - 0x3d9c] */ r_ecx = (u32)(r_ebp+0xffffc264u);
    /* 007c8c9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8ca0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8ca1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8ca2: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x7c8ca4u); call_ind(t); }
    /* 007c8ca4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007c8ca7:; BB(0x007c8ca7);
    /* 007c8ca7: lea eax, [ebp - 0x3db0] */ r_eax = (u32)(r_ebp+0xffffc250u);
    /* 007c8cad: mov dword ptr [ebp - 0x3db4], eax */ W32((u32)(r_ebp+0xffffc24cu), r_eax);
    /* 007c8cb3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007c8cba: push 0x79cb0c */ { u32 v = 0x79cb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 007c8cbf: lea eax, [ebp - 0x3d9c] */ r_eax = (u32)(r_ebp+0xffffc264u);
    /* 007c8cc5: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007c8cc7: push 0x520 */ { u32 v = 0x520u; r_esp -= 4; W32(r_esp, v); }
    /* 007c8ccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8ccd: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c8cd2u); f_008586d6();
    /* 007c8cd2: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007c8cd5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007c8cd8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007c8cdb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c8cde: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007c8ce5: mov esp, ebp */ r_esp = r_ebp;
    /* 007c8ce7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c8ce8: ret 4 */ FN_RET(0x007c8c28); r_esp += 8; return;
}

void f_007c8cec(void)
{
    FN_ENTER(0x007c8cec);
    /* 007c8cec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c8ced: mov ebp, esp */ r_ebp = r_esp;
    /* 007c8cef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c8cf1: push 0x8f69c6 */ { u32 v = 0x8f69c6u; r_esp -= 4; W32(r_esp, v); }
    /* 007c8cf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007c8cfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8cfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007c8d04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8d05: mov eax, 0x3da4 */ r_eax = 0x3da4u;
    /* 007c8d0a: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x7c8d0fu); f_00858020();
    /* 007c8d0f: mov ecx, dword ptr [esp + 0x3da4] */ r_ecx = R32((u32)(r_esp+0x3da4u));
    /* 007c8d16: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007c8d19: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007c8d1c: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007c8d1f: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007c8d22: mov eax, ecx */ r_eax = r_ecx;
    /* 007c8d24: mov ecx, 0x3d94 */ r_ecx = 0x3d94u;
    /* 007c8d29: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007c8d2c: lea edi, [ebp - 0x3db0] */ r_edi = (u32)(r_ebp+0xffffc250u);
    /* 007c8d32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8d33: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c8d36: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c8d38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8d39: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8d3c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c8d3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007c8d45: mov ecx, dword ptr [eax + 0x1e0b8] */ r_ecx = R32((u32)(r_eax+0x1e0b8u));
    /* 007c8d4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8d4d: je 0x7c8d63 */ if (fZ) goto L_007c8d63;
L_007c8d4f:; BB(0x007c8d4f);
    /* 007c8d4f: movsx eax, byte ptr [ebp - 0x3da7] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffc259u));
    /* 007c8d56: lea edx, [ebp - 0x3d9c] */ r_edx = (u32)(r_ebp+0xffffc264u);
    /* 007c8d5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8d5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8d5e: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x7c8d60u); call_ind(t); }
    /* 007c8d60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007c8d63:; BB(0x007c8d63);
    /* 007c8d63: lea eax, [ebp - 0x3db0] */ r_eax = (u32)(r_ebp+0xffffc250u);
    /* 007c8d69: mov dword ptr [ebp - 0x3db4], eax */ W32((u32)(r_ebp+0xffffc24cu), r_eax);
    /* 007c8d6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007c8d76: push 0x79cb0c */ { u32 v = 0x79cb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 007c8d7b: lea eax, [ebp - 0x3d9c] */ r_eax = (u32)(r_ebp+0xffffc264u);
    /* 007c8d81: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007c8d83: push 0x520 */ { u32 v = 0x520u; r_esp -= 4; W32(r_esp, v); }
    /* 007c8d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8d89: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c8d8eu); f_008586d6();
    /* 007c8d8e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007c8d91: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007c8d94: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007c8d97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c8d9a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007c8da1: mov esp, ebp */ r_esp = r_ebp;
    /* 007c8da3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c8da4: ret 4 */ FN_RET(0x007c8cec); r_esp += 8; return;
}

void f_007c8da8(void)
{
    FN_ENTER(0x007c8da8);
    /* 007c8da8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c8dac: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007c8daf: lea ecx, [eax + 8] */ r_ecx = (u32)(r_eax+0x8u);
    /* 007c8db2: add edx, -8 */ {  u32 a = r_edx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c8db5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8db6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8db7: call 0x800860 */ r_esp -= 4; W32(r_esp, 0x7c8dbcu); f_00800860();
    /* 007c8dbc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8dbf: ret 4 */ FN_RET(0x007c8da8); r_esp += 8; return;
}

void f_007c8dc4(void) /* sub_7C8DC4 */
{
    FN_ENTER(0x007c8dc4);
    /* 007c8dc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8dc5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8dc6: mov edi, ecx */ r_edi = r_ecx;
    /* 007c8dc8: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007c8dcc: mov eax, dword ptr [edi + 0x1e0d0] */ r_eax = R32((u32)(r_edi+0x1e0d0u));
    /* 007c8dd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c8dd4: je 0x7c8dea */ if (fZ) goto L_007c8dea;
L_007c8dd6:; BB(0x007c8dd6);
    /* 007c8dd6: lea eax, [ebx + 0x5c] */ r_eax = (u32)(r_ebx+0x5cu);
    /* 007c8dd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8dda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8ddb: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7c8de0u); f_00813a78();
    /* 007c8de0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8de1: call dword ptr [edi + 0x1e0d0] */ { u32 t = R32((u32)(r_edi+0x1e0d0u)); r_esp -= 4; W32(r_esp, 0x7c8de7u); call_ind(t); }
    /* 007c8de7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007c8dea:; BB(0x007c8dea);
    /* 007c8dea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c8deb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c8dec: ret 4 */ FN_RET(0x007c8dc4); r_esp += 8; return;
}

void f_007c8df0(void)
{
    FN_ENTER(0x007c8df0);
    /* 007c8df0: mov eax, dword ptr [ecx + 0x1e0cc] */ r_eax = R32((u32)(r_ecx+0x1e0ccu));
    /* 007c8df6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c8df8: je 0x7c8dfc */ if (fZ) goto L_007c8dfc;
L_007c8dfa:; BB(0x007c8dfa);
    /* 007c8dfa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x7c8dfcu); call_ind(t); }
L_007c8dfc:; BB(0x007c8dfc);
    /* 007c8dfc: ret 4 */ FN_RET(0x007c8df0); r_esp += 8; return;
}

void f_007c8e00(void) /* sub_7C8E00 */
{
    FN_ENTER(0x007c8e00);
    /* 007c8e00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8e01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8e02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8e03: mov eax, 0x250c */ r_eax = 0x250cu;
    /* 007c8e08: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x7c8e0du); f_00858020();
    /* 007c8e0d: mov ecx, dword ptr [esp + 0x250c] */ r_ecx = R32((u32)(r_esp+0x250cu));
    /* 007c8e14: mov eax, ecx */ r_eax = r_ecx;
    /* 007c8e16: mov esi, dword ptr [esp + 0x251c] */ r_esi = R32((u32)(r_esp+0x251cu));
    /* 007c8e1d: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c8e20: mov ecx, 0x2510 */ r_ecx = 0x2510u;
    /* 007c8e25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8e26: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c8e29: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c8e2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8e2c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8e2f: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c8e31: mov edx, dword ptr [eax + 0x1e0f0] */ r_edx = R32((u32)(r_eax+0x1e0f0u));
    /* 007c8e37: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8e39: je 0x7c8e42 */ if (fZ) goto L_007c8e42;
L_007c8e3b:; BB(0x007c8e3b);
    /* 007c8e3b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007c8e3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8e3f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c8e41u); call_ind(t); }
    /* 007c8e41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c8e42:; BB(0x007c8e42);
    /* 007c8e42: add esp, 0x2510 */ {  u32 a = r_esp; u32 b = 0x2510u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8e48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c8e49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c8e4a: ret 4 */ FN_RET(0x007c8e00); r_esp += 8; return;
}

void f_007c8e50(void) /* sub_7C8E50 */
{
    FN_ENTER(0x007c8e50);
    /* 007c8e50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8e51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8e52: sub esp, 0x248 */ {  u32 a = r_esp; u32 b = 0x248u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c8e58: mov eax, ecx */ r_eax = r_ecx;
    /* 007c8e5a: mov esi, dword ptr [esp + 0x254] */ r_esi = R32((u32)(r_esp+0x254u));
    /* 007c8e61: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007c8e64: mov ecx, 0x248 */ r_ecx = 0x248u;
    /* 007c8e69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8e6a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c8e6d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c8e6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8e70: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8e73: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c8e75: mov edx, dword ptr [eax + 0x1e0f4] */ r_edx = R32((u32)(r_eax+0x1e0f4u));
    /* 007c8e7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8e7d: je 0x7c8e86 */ if (fZ) goto L_007c8e86;
L_007c8e7f:; BB(0x007c8e7f);
    /* 007c8e7f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007c8e82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8e83: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c8e85u); call_ind(t); }
    /* 007c8e85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c8e86:; BB(0x007c8e86);
    /* 007c8e86: add esp, 0x248 */ {  u32 a = r_esp; u32 b = 0x248u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8e8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c8e8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c8e8e: ret 4 */ FN_RET(0x007c8e50); r_esp += 8; return;
}

void f_007c8e94(void) /* sub_7C8E94 */
{
    FN_ENTER(0x007c8e94);
    /* 007c8e94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8e95: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c8e98: mov esi, ecx */ r_esi = r_ecx;
    /* 007c8e9a: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 007c8e9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007c8ea0: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007c8ea3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007c8ea6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007c8eaa: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007c8ead: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007c8eb1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 007c8eb4: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007c8eb8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007c8ebb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007c8ebf: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007c8ec2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007c8ec6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007c8ec9: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007c8ecd: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 007c8ed0: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007c8ed4: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007c8ed7: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 007c8edb: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007c8ede: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 007c8ee2: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007c8ee5: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007c8ee9: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 007c8eec: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 007c8ef0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007c8ef3: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 007c8ef7: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 007c8efa: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 007c8efe: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 007c8f01: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007c8f05: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007c8f08: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 007c8f0c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 007c8f0f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 007c8f13: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 007c8f16: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 007c8f1a: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 007c8f1d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007c8f21: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 007c8f24: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 007c8f28: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 007c8f2b: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 007c8f2e: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 007c8f32: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007c8f36: movzx eax, byte ptr [esp + 2] */ r_eax = (u32)R8((u32)(r_esp+0x2u));
    /* 007c8f3b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007c8f3f: mov byte ptr [esp + 0x5b], 0 */ W8((u32)(r_esp+0x5bu), 0x0u);
    /* 007c8f44: mov byte ptr [esp + 0x5a], al */ W8((u32)(r_esp+0x5au), (u8)r_eax);
    /* 007c8f48: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 007c8f4c: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 007c8f50: mov eax, 0x18 */ r_eax = 0x18u;
    /* 007c8f55: mov word ptr [esp + 0x58], ax */ W16((u32)(r_esp+0x58u), (u16)r_eax);
    /* 007c8f5a: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 007c8f5e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007c8f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8f61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8f62: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7c8f67u); f_00858900();
    /* 007c8f67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c8f6a: mov edx, dword ptr [esi + 0x1e0f8] */ r_edx = R32((u32)(r_esi+0x1e0f8u));
    /* 007c8f70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c8f72: je 0x7c8f7b */ if (fZ) goto L_007c8f7b;
L_007c8f74:; BB(0x007c8f74);
    /* 007c8f74: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007c8f77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8f78: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c8f7au); call_ind(t); }
    /* 007c8f7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c8f7b:; BB(0x007c8f7b);
    /* 007c8f7b: movzx eax, word ptr [esp + 0x58] */ r_eax = (u32)R16((u32)(r_esp+0x58u));
    /* 007c8f80: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 007c8f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c8f85: mov ecx, esi */ r_ecx = r_esi;
    /* 007c8f87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8f88: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7c8f8du); f_0077fd10();
    /* 007c8f8d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c8f90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c8f91: ret 4 */ FN_RET(0x007c8e94); r_esp += 8; return;
}

void f_007c8f94(void) /* sub_7C8F94 */
{
    FN_ENTER(0x007c8f94);
    /* 007c8f94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8f95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c8f96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8f97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8f98: mov eax, 0x2510 */ r_eax = 0x2510u;
    /* 007c8f9d: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x7c8fa2u); f_00858020();
    /* 007c8fa2: mov ecx, dword ptr [esp + 0x2510] */ r_ecx = R32((u32)(r_esp+0x2510u));
    /* 007c8fa9: mov eax, ecx */ r_eax = r_ecx;
    /* 007c8fab: mov esi, dword ptr [esp + 0x2524] */ r_esi = R32((u32)(r_esp+0x2524u));
    /* 007c8fb2: lea edi, [esp + 4] */ r_edi = (u32)(r_esp+0x4u);
    /* 007c8fb6: mov ecx, 0x2510 */ r_ecx = 0x2510u;
    /* 007c8fbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c8fbc: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c8fbf: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c8fc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c8fc2: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8fc5: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c8fc7: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007c8fcb: mov dword ptr [eax + 0x12140], edx */ W32((u32)(r_eax+0x12140u), r_edx);
    /* 007c8fd1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007c8fd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007c8fd5: jle 0x7c9039 */ if ((fZ||fS!=fO)) goto L_007c9039;
L_007c8fd7:; BB(0x007c8fd7);
    /* 007c8fd7: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007c8fda: lea ebx, [ecx + ecx*4] */ r_ebx = (u32)(r_ecx+r_ecx*4);
    /* 007c8fdd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c8fdf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c8fe1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c8fe3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c8fe5: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007c8fe7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c8fe9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c8feb: lea edx, [ecx + ecx*4] */ r_edx = (u32)(r_ecx+r_ecx*4);
    /* 007c8fee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c8ff0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c8ff2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c8ff4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c8ff6: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007c8ff8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c8ffa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007c8ffc: lea edx, [edx + edx + 0x13d78] */ r_edx = (u32)(r_edx+r_edx+0x13d78u);
    /* 007c9003: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_007c9005:; BB(0x007c9005);
    /* 007c9005: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 007c9009: lea esi, [esi + ebx] */ r_esi = (u32)(r_esi+r_ebx);
    /* 007c900c: mov edi, edx */ r_edi = r_edx;
    /* 007c900e: mov ecx, 0x13c */ r_ecx = 0x13cu;
    /* 007c9013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c9014: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007c9017: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007c9019: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c901a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007c901d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007c901f: add ebx, 0x13c */ {  u32 a = r_ebx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c9025: add edx, 0x13c */ {  u32 a = r_edx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c902b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007c902e: cmp ebp, dword ptr [eax + 0x12140] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x12140u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c9034: jl 0x7c9005 */ if ((fS!=fO)) goto L_007c9005;
L_007c9036:; BB(0x007c9036);
    /* 007c9036: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007c9039:; BB(0x007c9039);
    /* 007c9039: mov edx, dword ptr [eax + 0x1e100] */ r_edx = R32((u32)(r_eax+0x1e100u));
    /* 007c903f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c9041: je 0x7c9051 */ if (fZ) goto L_007c9051;
L_007c9043:; BB(0x007c9043);
    /* 007c9043: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 007c9047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c9048: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007c904c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7c904eu); call_ind(t); }
    /* 007c904e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007c9051:; BB(0x007c9051);
    /* 007c9051: add esp, 0x2514 */ {  u32 a = r_esp; u32 b = 0x2514u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c9057: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c9058: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c9059: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c905a: ret 4 */ FN_RET(0x007c8f94); r_esp += 8; return;
}

