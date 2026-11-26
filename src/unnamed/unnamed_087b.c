#include "protos.h"

void f_0087b2f8(void) /* sub_87B2F8 */
{
    FN_ENTER(0x0087b2f8);
    /* 0087b2f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087b2f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087b2fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087b2fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087b2fc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087b2ff: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0087b303: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0087b307: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0087b30a: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0087b30d: fld dword ptr [eax + ecx*4 + 0xc] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xcu)));
    /* 0087b311: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087b313: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087b315: jle 0x87b43c */ if ((fZ||fS!=fO)) goto L_0087b43c;
L_0087b31b:; BB(0x0087b31b);
    /* 0087b31b: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b31e: jl 0x87b3e9 */ if ((fS!=fO)) goto L_0087b3e9;
L_0087b324:; BB(0x0087b324);
    /* 0087b324: lea esi, [edi - 4] */ r_esi = (u32)(r_edi+0xfffffffcu);
    /* 0087b327: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0087b32b: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0087b32f: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0087b333: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0087b336: jmp 0x87b33b */ goto L_0087b33b;
L_0087b338:; BB(0x0087b338);
    /* 0087b338: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
L_0087b33b:; BB(0x0087b33b);
    /* 0087b33b: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0087b33e: mov edi, dword ptr [edi + ecx*4] */ r_edi = R32((u32)(r_edi+r_ecx*4));
    /* 0087b341: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 0087b344: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 0087b347: fld dword ptr [eax + 0x6c] */ FPUSH(R_F32((u32)(r_eax+0x6cu)));
    /* 0087b34a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b34c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b34e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b34f: ja 0x87b353 */ if ((!fC&&!fZ)) goto L_0087b353;
L_0087b351:; BB(0x0087b351);
    /* 0087b351: fst st(1) */ ST(1) = ST(0);
L_0087b353:; BB(0x0087b353);
    /* 0087b353: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b355: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0087b359: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 0087b35c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087b35e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b360: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b362: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b363: jb 0x87b367 */ if (fC) goto L_0087b367;
L_0087b365:; BB(0x0087b365);
    /* 0087b365: fst st(1) */ ST(1) = ST(0);
L_0087b367:; BB(0x0087b367);
    /* 0087b367: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b369: fstp dword ptr [ebx + edx*4] */ W_F32((u32)(r_ebx+r_edx*4), ST(0)); FPOP();
    /* 0087b36c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0087b36f: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 0087b372: fld dword ptr [esi + edx*4 + 4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0x4u)));
    /* 0087b376: fadd dword ptr [eax + edx*4 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_edx*4+0x4u));
    /* 0087b37a: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0087b37d: fld dword ptr [eax + 0x6c] */ FPUSH(R_F32((u32)(r_eax+0x6cu)));
    /* 0087b380: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b382: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b384: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b385: ja 0x87b389 */ if ((!fC&&!fZ)) goto L_0087b389;
L_0087b387:; BB(0x0087b387);
    /* 0087b387: fst st(1) */ ST(1) = ST(0);
L_0087b389:; BB(0x0087b389);
    /* 0087b389: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b38b: fld dword ptr [edi + edx*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4+0x4u)));
    /* 0087b38f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087b391: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b393: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b395: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b396: jb 0x87b39a */ if (fC) goto L_0087b39a;
L_0087b398:; BB(0x0087b398);
    /* 0087b398: fst st(1) */ ST(1) = ST(0);
L_0087b39a:; BB(0x0087b39a);
    /* 0087b39a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b39c: fstp dword ptr [ebx + edx*4 + 4] */ W_F32((u32)(r_ebx+r_edx*4+0x4u), ST(0)); FPOP();
    /* 0087b3a0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0087b3a3: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 0087b3a6: fld dword ptr [esi + edx*4 + 8] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0x8u)));
    /* 0087b3aa: fadd dword ptr [eax + edx*4 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_edx*4+0x8u));
    /* 0087b3ae: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0087b3b1: fld dword ptr [eax + 0x6c] */ FPUSH(R_F32((u32)(r_eax+0x6cu)));
    /* 0087b3b4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b3b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b3b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b3b9: ja 0x87b3bd */ if ((!fC&&!fZ)) goto L_0087b3bd;
L_0087b3bb:; BB(0x0087b3bb);
    /* 0087b3bb: fst st(1) */ ST(1) = ST(0);
L_0087b3bd:; BB(0x0087b3bd);
    /* 0087b3bd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b3bf: fld dword ptr [edi + edx*4 + 8] */ FPUSH(R_F32((u32)(r_edi+r_edx*4+0x8u)));
    /* 0087b3c3: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087b3c5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b3c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b3c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b3ca: jb 0x87b3ce */ if (fC) goto L_0087b3ce;
L_0087b3cc:; BB(0x0087b3cc);
    /* 0087b3cc: fst st(1) */ ST(1) = ST(0);
L_0087b3ce:; BB(0x0087b3ce);
    /* 0087b3ce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b3d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0087b3d4: fstp dword ptr [ebx + edx*4 + 8] */ W_F32((u32)(r_ebx+r_edx*4+0x8u), ST(0)); FPOP();
    /* 0087b3d8: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087b3db: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b3dd: jle 0x87b338 */ if ((fZ||fS!=fO)) goto L_0087b338;
L_0087b3e3:; BB(0x0087b3e3);
    /* 0087b3e3: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0087b3e6: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
L_0087b3e9:; BB(0x0087b3e9);
    /* 0087b3e9: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0087b3ec: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0087b3f0: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0087b3f4: jmp 0x87b3f9 */ goto L_0087b3f9;
L_0087b3f6:; BB(0x0087b3f6);
    /* 0087b3f6: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
L_0087b3f9:; BB(0x0087b3f9);
    /* 0087b3f9: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0087b3fc: mov edi, dword ptr [edi + ecx*4] */ r_edi = R32((u32)(r_edi+r_ecx*4));
    /* 0087b3ff: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 0087b402: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 0087b405: fld dword ptr [eax + 0x6c] */ FPUSH(R_F32((u32)(r_eax+0x6cu)));
    /* 0087b408: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b40a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b40c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b40d: ja 0x87b411 */ if ((!fC&&!fZ)) goto L_0087b411;
L_0087b40f:; BB(0x0087b40f);
    /* 0087b40f: fst st(1) */ ST(1) = ST(0);
L_0087b411:; BB(0x0087b411);
    /* 0087b411: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b413: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0087b417: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 0087b41a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087b41c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b41e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b420: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b421: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0087b424: jb 0x87b428 */ if (fC) goto L_0087b428;
L_0087b426:; BB(0x0087b426);
    /* 0087b426: fst st(1) */ ST(1) = ST(0);
L_0087b428:; BB(0x0087b428);
    /* 0087b428: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b42a: fstp dword ptr [ebx + edx*4] */ W_F32((u32)(r_ebx+r_edx*4), ST(0)); FPOP();
    /* 0087b42d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087b42e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b430: jl 0x87b3f6 */ if ((fS!=fO)) goto L_0087b3f6;
L_0087b432:; BB(0x0087b432);
    /* 0087b432: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b434: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087b437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087b438: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087b439: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087b43a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087b43b: ret  */ FN_RET(0x0087b2f8); r_esp += 4; return;
L_0087b43c:; BB(0x0087b43c);
    /* 0087b43c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b43e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087b441: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087b442: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087b443: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087b444: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087b445: ret  */ FN_RET(0x0087b2f8); r_esp += 4; return;
}

void f_0087b448(void) /* sub_87B448 */
{
    FN_ENTER(0x0087b448);
    /* 0087b448: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087b449: mov ebx, esp */ r_ebx = r_esp;
    /* 0087b44b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087b44e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087b44f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087b450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087b451: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087b454: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0087b457: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 0087b45a: mov ebp, dword ptr [ebx + 0x14] */ r_ebp = R32((u32)(r_ebx+0x14u));
    /* 0087b45d: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0087b45f: mov eax, dword ptr [ebp + 0x484] */ r_eax = R32((u32)(r_ebp+0x484u));
    /* 0087b465: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b467: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087b46a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087b46b: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x87b470u); f_0087421c();
    /* 0087b470: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087b473: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0087b476: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0087b478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b47a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b47c: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0087b47f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b481: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b483: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b485: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087b487: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0087b48a: mov edx, dword ptr [esi + edx + 0xa0] */ r_edx = R32((u32)(r_esi+r_edx+0xa0u));
    /* 0087b491: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087b493: cmp dword ptr [ebp + 0x484], 0 */ {  u32 a = R32((u32)(r_ebp+0x484u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b49a: jle 0x87b669 */ if ((fZ||fS!=fO)) goto L_0087b669;
L_0087b4a0:; BB(0x0087b4a0);
    /* 0087b4a0: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0087b4a3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b4a5: mov ebp, eax */ r_ebp = r_eax;
    /* 0087b4a7: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0087b4ab: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0087b4af: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0087b4b2:; BB(0x0087b4b2);
    /* 0087b4b2: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0087b4b5: mov edi, dword ptr [ecx + esi*4 + 0x488] */ r_edi = R32((u32)(r_ecx+r_esi*4+0x488u));
    /* 0087b4bc: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0087b4bf: mov edi, dword ptr [edx + edi*4] */ r_edi = R32((u32)(r_edx+r_edi*4));
    /* 0087b4c2: mov ecx, dword ptr [ecx + esi*4 + 0x888] */ r_ecx = R32((u32)(r_ecx+r_esi*4+0x888u));
    /* 0087b4c9: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 0087b4cc: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0087b4d0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0087b4d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087b4d5: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0087b4d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087b4d9: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x87b4deu); f_0087421c();
    /* 0087b4de: mov edx, eax */ r_edx = r_eax;
    /* 0087b4e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087b4e3: mov dword ptr [ebp + esi*4], edx */ W32((u32)(r_ebp+r_esi*4), r_edx);
    /* 0087b4e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b4e9: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0087b4ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087b4ef: jle 0x87b5ac */ if ((fZ||fS!=fO)) goto L_0087b5ac;
L_0087b4f5:; BB(0x0087b4f5);
    /* 0087b4f5: fld qword ptr [0x99ab20] */ FPUSH(R_F64((u32)(0x99ab20u)));
    /* 0087b4fb: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0087b4ff: jmp 0x87b508 */ goto L_0087b508;
L_0087b501:; BB(0x0087b501);
    /* 0087b501: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0087b505: mov edx, dword ptr [eax + esi*4] */ r_edx = R32((u32)(r_eax+r_esi*4));
L_0087b508:; BB(0x0087b508);
    /* 0087b508: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 0087b50b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0087b50f: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0087b512: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 0087b515: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b517: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0087b519: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b51b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b51c: jbe 0x87b55a */ if ((fC||fZ)) goto L_0087b55a;
L_0087b51e:; BB(0x0087b51e);
    /* 0087b51e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b520: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0087b522: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b524: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b525: ja 0x87b54c */ if ((!fC&&!fZ)) goto L_0087b54c;
L_0087b527:; BB(0x0087b527);
    /* 0087b527: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087b529: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b52b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087b52d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b52f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087b531: fchs  */ ST(0) = -ST(0);
    /* 0087b533: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0087b535: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087b537: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b539: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b53b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b53c: jae 0x87b544 */ if (!fC) goto L_0087b544;
L_0087b53e:; BB(0x0087b53e);
    /* 0087b53e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087b540: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b542: jmp 0x87b596 */ goto L_0087b596;
L_0087b544:; BB(0x0087b544);
    /* 0087b544: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0087b546: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b548: fchs  */ ST(0) = -ST(0);
    /* 0087b54a: jmp 0x87b596 */ goto L_0087b596;
L_0087b54c:; BB(0x0087b54c);
    /* 0087b54c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b54e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b550: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b552: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b554: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087b556: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b558: jmp 0x87b596 */ goto L_0087b596;
L_0087b55a:; BB(0x0087b55a);
    /* 0087b55a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b55c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0087b55e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b560: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b561: jb 0x87b588 */ if (fC) goto L_0087b588;
L_0087b563:; BB(0x0087b563);
    /* 0087b563: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087b565: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b567: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087b569: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b56b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087b56d: fchs  */ ST(0) = -ST(0);
    /* 0087b56f: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0087b571: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b573: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b575: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b577: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b578: jbe 0x87b582 */ if ((fC||fZ)) goto L_0087b582;
L_0087b57a:; BB(0x0087b57a);
    /* 0087b57a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0087b57c: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b57e: fchs  */ ST(0) = -ST(0);
    /* 0087b580: jmp 0x87b596 */ goto L_0087b596;
L_0087b582:; BB(0x0087b582);
    /* 0087b582: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087b584: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b586: jmp 0x87b596 */ goto L_0087b596;
L_0087b588:; BB(0x0087b588);
    /* 0087b588: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b58a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b58c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b58e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b590: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087b592: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b594: fchs  */ ST(0) = -ST(0);
L_0087b596:; BB(0x0087b596);
    /* 0087b596: fstp dword ptr [edx + ebp*2] */ W_F32((u32)(r_edx+r_ebp*2), ST(0)); FPOP();
    /* 0087b599: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b59a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0087b59e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b5a0: jl 0x87b501 */ if ((fS!=fO)) goto L_0087b501;
L_0087b5a6:; BB(0x0087b5a6);
    /* 0087b5a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b5a8: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_0087b5ac:; BB(0x0087b5ac);
    /* 0087b5ac: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0087b5af: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b5b1: jge 0x87b657 */ if ((fS==fO)) goto L_0087b657;
L_0087b5b7:; BB(0x0087b5b7);
    /* 0087b5b7: fld qword ptr [0x99ab20] */ FPUSH(R_F64((u32)(0x99ab20u)));
    /* 0087b5bd: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
L_0087b5c1:; BB(0x0087b5c1);
    /* 0087b5c1: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0087b5c4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b5c6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b5c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b5c9: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 0087b5cc: jbe 0x87b608 */ if ((fC||fZ)) goto L_0087b608;
L_0087b5ce:; BB(0x0087b5ce);
    /* 0087b5ce: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0087b5d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b5d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b5d3: ja 0x87b5fa */ if ((!fC&&!fZ)) goto L_0087b5fa;
L_0087b5d5:; BB(0x0087b5d5);
    /* 0087b5d5: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087b5d7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b5d9: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087b5db: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b5dd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087b5df: fchs  */ ST(0) = -ST(0);
    /* 0087b5e1: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0087b5e3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087b5e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b5e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b5e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b5ea: jae 0x87b5f2 */ if (!fC) goto L_0087b5f2;
L_0087b5ec:; BB(0x0087b5ec);
    /* 0087b5ec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087b5ee: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b5f0: jmp 0x87b642 */ goto L_0087b642;
L_0087b5f2:; BB(0x0087b5f2);
    /* 0087b5f2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087b5f4: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b5f6: fchs  */ ST(0) = -ST(0);
    /* 0087b5f8: jmp 0x87b642 */ goto L_0087b642;
L_0087b5fa:; BB(0x0087b5fa);
    /* 0087b5fa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b5fc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b5fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b600: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b602: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087b604: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b606: jmp 0x87b642 */ goto L_0087b642;
L_0087b608:; BB(0x0087b608);
    /* 0087b608: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0087b60a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b60c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b60d: jb 0x87b634 */ if (fC) goto L_0087b634;
L_0087b60f:; BB(0x0087b60f);
    /* 0087b60f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087b611: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b613: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087b615: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b617: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087b619: fchs  */ ST(0) = -ST(0);
    /* 0087b61b: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0087b61d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b61f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b621: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b623: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b624: jbe 0x87b62e */ if ((fC||fZ)) goto L_0087b62e;
L_0087b626:; BB(0x0087b626);
    /* 0087b626: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087b628: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b62a: fchs  */ ST(0) = -ST(0);
    /* 0087b62c: jmp 0x87b642 */ goto L_0087b642;
L_0087b62e:; BB(0x0087b62e);
    /* 0087b62e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087b630: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b632: jmp 0x87b642 */ goto L_0087b642;
L_0087b634:; BB(0x0087b634);
    /* 0087b634: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b636: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b638: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b63a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087b63c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087b63e: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0087b640: fchs  */ ST(0) = -ST(0);
L_0087b642:; BB(0x0087b642);
    /* 0087b642: mov eax, dword ptr [ebp + esi*4] */ r_eax = R32((u32)(r_ebp+r_esi*4));
    /* 0087b646: fstp dword ptr [eax + ecx*4] */ W_F32((u32)(r_eax+r_ecx*4), ST(0)); FPOP();
    /* 0087b649: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b64a: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0087b64d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b64f: jl 0x87b5c1 */ if ((fS!=fO)) goto L_0087b5c1;
L_0087b655:; BB(0x0087b655);
    /* 0087b655: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087b657:; BB(0x0087b657);
    /* 0087b657: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b658: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0087b65b: cmp esi, dword ptr [edx + 0x484] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x484u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b661: jl 0x87b4b2 */ if ((fS!=fO)) goto L_0087b4b2;
L_0087b667:; BB(0x0087b667);
    /* 0087b667: mov eax, ebp */ r_eax = r_ebp;
L_0087b669:; BB(0x0087b669);
    /* 0087b669: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087b66c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087b66d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087b66e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087b66f: mov esp, ebx */ r_esp = r_ebx;
    /* 0087b671: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087b672: ret  */ FN_RET(0x0087b448); r_esp += 4; return;
}

void f_0087b674(void) /* CompareFunction */
{
    FN_ENTER(0x0087b674);
    /* 0087b674: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0087b678: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0087b67c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0087b67e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0087b683: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0087b685: fabs  */ ST(0) = fabsl(ST(0));
    /* 0087b687: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0087b689: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0087b68b: fabs  */ ST(0) = fabsl(ST(0));
    /* 0087b68d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087b68f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b691: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b693: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b694: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0087b696: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b698: ja 0x87b69c */ if ((!fC&&!fZ)) goto L_0087b69c;
L_0087b69a:; BB(0x0087b69a);
    /* 0087b69a: mov ecx, edx */ r_ecx = r_edx;
L_0087b69c:; BB(0x0087b69c);
    /* 0087b69c: mov edx, 0 */ r_edx = 0x0u;
    /* 0087b6a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b6a2: mov eax, 1 */ r_eax = 0x1u;
    /* 0087b6a7: jb 0x87b6ab */ if (fC) goto L_0087b6ab;
L_0087b6a9:; BB(0x0087b6a9);
    /* 0087b6a9: mov eax, edx */ r_eax = r_edx;
L_0087b6ab:; BB(0x0087b6ab);
    /* 0087b6ab: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087b6ad: mov eax, ecx */ r_eax = r_ecx;
    /* 0087b6af: ret  */ FN_RET(0x0087b674); r_esp += 4; return;
}

void f_0087b6b0(void) /* sub_87B6B0 */
{
    FN_ENTER(0x0087b6b0);
L_0087b6b0:; BB(0x0087b6b0);
    /* 0087b6b0: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087b6ba: jne 0x87b6d8 */ if (!fZ) goto L_0087b6d8;
L_0087b6c0:; BB(0x0087b6c0);
    /* 0087b6c0: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087b6ca: jne 0x87ba70 */ if (!fZ) goto L_0087ba70;
L_0087b6d0:; BB(0x0087b6d0);
    /* 0087b6d0: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x87b6d5u); f_0086b8a0();
    /* 0087b6d5: jmp 0x87b6b0 */ goto L_0087b6b0;
L_0087b6d8:; BB(0x0087b6d8);
    /* 0087b6d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087b6d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0087b6db: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087b6de: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0087b6e1: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0087b6e4: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0087b6e7: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0087b6ea: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0087b6ed: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0087b6f0: cmp dword ptr [eax + 0x1f8], 0 */ {  u32 a = R32((u32)(r_eax+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087b6f7: je 0x87ba00 */ if (fZ) goto L_0087ba00;
L_0087b6fd:; BB(0x0087b6fd);
    /* 0087b6fd: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0087b6ff: mov eax, dword ptr [esi + 0x484] */ r_eax = R32((u32)(r_esi+0x484u));
    /* 0087b705: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b707: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b709: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0087b70c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087b70d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087b70e: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x87b713u); f_0087421c();
    /* 0087b713: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0087b716: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087b719: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0087b71c: mov ebx, dword ptr [ebx + 0x200] */ r_ebx = R32((u32)(r_ebx+0x200u));
    /* 0087b722: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0087b725: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b727: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87b72cu); f_00858020();
    /* 0087b72c: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087b72f: mov eax, esp */ r_eax = r_esp;
    /* 0087b731: mov edx, eax */ r_edx = r_eax;
    /* 0087b733: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087b735: cmp dword ptr [esi + 0x484], 0 */ {  u32 a = R32((u32)(r_esi+0x484u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087b73c: jle 0x87ba25 */ if ((fZ||fS!=fO)) goto L_0087ba25;
L_0087b742:; BB(0x0087b742);
    /* 0087b742: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0087b745: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b747: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0087b74a: lea ecx, [ebx - 5] */ r_ecx = (u32)(r_ebx+0xfffffffbu);
    /* 0087b74d: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0087b750: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0087b753: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b755: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b757: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0087b75a: mov ecx, edx */ r_ecx = r_edx;
    /* 0087b75c: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b75f: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0087b762: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b765: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0087b768: lea ecx, [ebx - 1] */ r_ecx = (u32)(r_ebx+0xffffffffu);
    /* 0087b76b: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0087b76e: lea ecx, [ebx - 6] */ r_ecx = (u32)(r_ebx+0xfffffffau);
    /* 0087b771: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0087b774: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0087b777: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b779: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0087b77c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0087b77f: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0087b782: mov edi, esi */ r_edi = r_esi;
    /* 0087b784: mov esi, eax */ r_esi = r_eax;
    /* 0087b786: mov ebx, ecx */ r_ebx = r_ecx;
L_0087b788:; BB(0x0087b788);
    /* 0087b788: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0087b78b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087b78c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0087b78f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087b790: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x87b795u); f_0087421c();
    /* 0087b795: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087b798: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087b79b: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 0087b79e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087b7a0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087b7a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087b7a5: jle 0x87ba15 */ if ((fZ||fS!=fO)) goto L_0087ba15;
L_0087b7ab:; BB(0x0087b7ab);
    /* 0087b7ab: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0087b7ae: lea edx, [edx + ebx] */ r_edx = (u32)(r_edx+r_ebx);
    /* 0087b7b1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0087b7b4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0087b7b7: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0087b7ba: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_0087b7bd:; BB(0x0087b7bd);
    /* 0087b7bd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087b7c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087b7c2: jle 0x87b905 */ if ((fZ||fS!=fO)) goto L_0087b905;
L_0087b7c8:; BB(0x0087b7c8);
    /* 0087b7c8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087b7ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087b7cd: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 0087b7d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b7d2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087b7d5: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087b7d8: jb 0x87b86c */ if (fC) goto L_0087b86c;
L_0087b7de:; BB(0x0087b7de);
    /* 0087b7de: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087b7e1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087b7e4: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087b7e6: ja 0x87ba5e */ if ((!fC&&!fZ)) goto L_0087ba5e;
L_0087b7ec:; BB(0x0087b7ec);
    /* 0087b7ec: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087b7ef: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087b7f2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087b7f4: je 0x87b810 */ if (fZ) goto L_0087b810;
L_0087b7f6:; BB(0x0087b7f6);
    /* 0087b7f6: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0087b7f9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087b7fb: jne 0x87b86c */ if (!fZ) goto L_0087b86c;
L_0087b7fd:; BB(0x0087b7fd);
    /* 0087b7fd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0087b800: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0087b803: mov edi, dword ptr [edx + esi*4] */ r_edi = R32((u32)(r_edx+r_esi*4));
    /* 0087b806: lea edx, [edi + ecx] */ r_edx = (u32)(r_edi+r_ecx);
    /* 0087b809: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 0087b80b: mov edx, 1 */ r_edx = 0x1u;
L_0087b810:; BB(0x0087b810);
    /* 0087b810: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087b813: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087b815: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 0087b818: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b81b: movd mm3, dword ptr [edi + esi*4] */ { u64 v = R32((u32)(r_edi+r_esi*4)); fpr[3] = (long double)(i64)v; }
    /* 0087b81f: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 0087b822: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0087b825: movq mm2, qword ptr [0x99ab10] */ { MM64 r; r.q = R64((u32)(0x99ab10u)); fpr[2] = (long double)(i64)(r.q); }
    /* 0087b82c: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0087b82f: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0087b832: lea edi, [edi + edi + 4] */ r_edi = (u32)(r_edi+r_edi+0x4u);
    /* 0087b836: movd mm1, eax */ { u64 v = r_eax; fpr[1] = (long double)(i64)v; }
    /* 0087b839: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087b83c: movd mm0, edi */ { u64 v = r_edi; fpr[0] = (long double)(i64)v; }
    /* 0087b83f: punpckldq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 0087b842: movd mm0, ecx */ { u64 v = r_ecx; fpr[0] = (long double)(i64)v; }
    /* 0087b845: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
L_0087b848:; BB(0x0087b848);
    /* 0087b848: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 0087b84b: paddd mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 0087b84e: paddd mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 0087b851: movq qword ptr [ebx + edx*4], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_ebx+r_edx*4), r.q); }
    /* 0087b855: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087b858: paddd mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 0087b85b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087b85d: jb 0x87b848 */ if (fC) goto L_0087b848;
L_0087b85f:; BB(0x0087b85f);
    /* 0087b85f: emms  */ ; /* the MMX tag state is not modelled */
    /* 0087b861: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087b864: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087b866: jae 0x87b905 */ if (!fC) goto L_0087b905;
L_0087b86c:; BB(0x0087b86c);
    /* 0087b86c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087b86f: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087b871: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087b874: jb 0x87b8e4 */ if (fC) goto L_0087b8e4;
L_0087b876:; BB(0x0087b876);
    /* 0087b876: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0087b879: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b87b: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 0087b87e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0087b881:; BB(0x0087b881);
    /* 0087b881: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0087b884: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 0087b887: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b88a: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b88c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b88e: mov dword ptr [ebx + edx*4], esi */ W32((u32)(r_ebx+r_edx*4), r_esi);
    /* 0087b891: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087b894: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 0087b897: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b899: lea esi, [esi + eax + 4] */ r_esi = (u32)(r_esi+r_eax+0x4u);
    /* 0087b89d: mov dword ptr [ebx + edx*4 + 4], esi */ W32((u32)(r_ebx+r_edx*4+0x4u), r_esi);
    /* 0087b8a1: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087b8a4: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 0087b8a7: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b8a9: lea esi, [esi + eax + 8] */ r_esi = (u32)(r_esi+r_eax+0x8u);
    /* 0087b8ad: mov dword ptr [ebx + edx*4 + 8], esi */ W32((u32)(r_ebx+r_edx*4+0x8u), r_esi);
    /* 0087b8b1: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087b8b4: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 0087b8b7: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b8b9: lea esi, [esi + eax + 0xc] */ r_esi = (u32)(r_esi+r_eax+0xcu);
    /* 0087b8bd: mov dword ptr [ebx + edx*4 + 0xc], esi */ W32((u32)(r_ebx+r_edx*4+0xcu), r_esi);
    /* 0087b8c1: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087b8c4: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 0087b8c7: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b8c9: lea ecx, [esi + eax + 0x10] */ r_ecx = (u32)(r_esi+r_eax+0x10u);
    /* 0087b8cd: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b8d0: mov dword ptr [ebx + edx*4 + 0x10], ecx */ W32((u32)(r_ebx+r_edx*4+0x10u), r_ecx);
    /* 0087b8d4: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087b8d7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0087b8da: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087b8dc: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087b8df: jbe 0x87b881 */ if ((fC||fZ)) goto L_0087b881;
L_0087b8e1:; BB(0x0087b8e1);
    /* 0087b8e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
L_0087b8e4:; BB(0x0087b8e4);
    /* 0087b8e4: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0087b8e7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087b8e9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0087b8ec: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0087b8ef:; BB(0x0087b8ef);
    /* 0087b8ef: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 0087b8f2: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b8f5: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b8f7: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087b8fa: mov dword ptr [ebx + edx*4], ecx */ W32((u32)(r_ebx+r_edx*4), r_ecx);
    /* 0087b8fd: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087b8fe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087b901: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087b903: jb 0x87b8ef */ if (fC) goto L_0087b8ef;
L_0087b905:; BB(0x0087b905);
    /* 0087b905: push 0x87b674 */ { u32 v = 0x87b674u; r_esp -= 4; W32(r_esp, v); }
    /* 0087b90a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087b90d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0087b90f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087b910: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087b911: call 0x8cade0 */ r_esp -= 4; W32(r_esp, 0x87b916u); f_008cade0();
    /* 0087b916: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087b919: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087b91b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087b91e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087b920: jle 0x87ba3f */ if ((fZ||fS!=fO)) goto L_0087ba3f;
L_0087b926:; BB(0x0087b926);
    /* 0087b926: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b929: jl 0x87ba35 */ if ((fS!=fO)) goto L_0087ba35;
L_0087b92f:; BB(0x0087b92f);
    /* 0087b92f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087b932: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 0087b935: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b937: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0087b93a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0087b93d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0087b940: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_0087b943:; BB(0x0087b943);
    /* 0087b943: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087b946: mov edi, dword ptr [ebx + ecx*4] */ r_edi = R32((u32)(r_ebx+r_ecx*4));
    /* 0087b949: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0087b94c: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0087b94f: sub edi, dword ptr [eax + esi*4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_esi*4)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087b952: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087b955: mov esi, dword ptr [edx + esi*4] */ r_esi = R32((u32)(r_edx+r_esi*4));
    /* 0087b958: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b95b: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b95d: mov dword ptr [esi + ecx*4], edi */ W32((u32)(r_esi+r_ecx*4), r_edi);
    /* 0087b960: mov edi, dword ptr [ebx + ecx*4 + 4] */ r_edi = R32((u32)(r_ebx+r_ecx*4+0x4u));
    /* 0087b964: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087b967: sub edi, dword ptr [eax + esi*4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_esi*4)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087b96a: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087b96d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087b970: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 0087b973: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b975: mov dword ptr [eax + ecx*4 + 4], edi */ W32((u32)(r_eax+r_ecx*4+0x4u), r_edi);
    /* 0087b979: mov edi, dword ptr [ebx + ecx*4 + 8] */ r_edi = R32((u32)(r_ebx+r_ecx*4+0x8u));
    /* 0087b97d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0087b980: sub edi, dword ptr [eax + esi*4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_esi*4)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087b983: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087b986: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087b989: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 0087b98c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b98e: mov dword ptr [eax + ecx*4 + 8], edi */ W32((u32)(r_eax+r_ecx*4+0x8u), r_edi);
    /* 0087b992: mov eax, dword ptr [ebx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_ebx+r_ecx*4+0xcu));
    /* 0087b996: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 0087b999: sub eax, dword ptr [edi + esi*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+r_esi*4)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087b99c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0087b99f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087b9a2: mov edi, dword ptr [edi + esi*4] */ r_edi = R32((u32)(r_edi+r_esi*4));
    /* 0087b9a5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087b9a7: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0087b9aa: mov dword ptr [edi + ecx*4 + 0xc], eax */ W32((u32)(r_edi+r_ecx*4+0xcu), r_eax);
    /* 0087b9ae: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b9b1: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b9b3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0087b9b6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0087b9b9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087b9bc: jle 0x87b943 */ if ((fZ||fS!=fO)) goto L_0087b943;
L_0087b9be:; BB(0x0087b9be);
    /* 0087b9be: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0087b9c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b9c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
L_0087b9c7:; BB(0x0087b9c7);
    /* 0087b9c7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0087b9ca:; BB(0x0087b9ca);
    /* 0087b9ca: mov eax, dword ptr [ebx + edx*4] */ r_eax = R32((u32)(r_ebx+r_edx*4));
    /* 0087b9cd: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0087b9d0: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b9d3: sub eax, dword ptr [ecx + esi*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi*4)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087b9d6: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0087b9d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087b9dc: add edi, dword ptr [ecx + esi*4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087b9df: mov dword ptr [edi + edx*4], eax */ W32((u32)(r_edi+r_edx*4), r_eax);
    /* 0087b9e2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087b9e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087b9e6: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b9e8: jl 0x87b9ca */ if ((fS!=fO)) goto L_0087b9ca;
L_0087b9ea:; BB(0x0087b9ea);
    /* 0087b9ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087b9ed: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087b9f0: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087b9f3: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b9f5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0087b9f8: jl 0x87b7bd */ if ((fS!=fO)) goto L_0087b7bd;
L_0087b9fe:; BB(0x0087b9fe);
    /* 0087b9fe: jmp 0x87ba0c */ goto L_0087ba0c;
L_0087ba00:; BB(0x0087ba00);
    /* 0087ba00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087ba02: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087ba05: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087ba08: mov esp, ebp */ r_esp = r_ebp;
    /* 0087ba0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087ba0b: ret  */ FN_RET(0x0087b6b0); r_esp += 4; return;
L_0087ba0c:; BB(0x0087ba0c);
    /* 0087ba0c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0087ba0f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087ba12: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
L_0087ba15:; BB(0x0087ba15);
    /* 0087ba15: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087ba18: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087ba19: cmp esi, dword ptr [edi + 0x484] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x484u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087ba1f: jl 0x87b788 */ if ((fS!=fO)) goto L_0087b788;
L_0087ba25:; BB(0x0087ba25);
    /* 0087ba25: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087ba28: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087ba2b: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087ba2e: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087ba31: mov esp, ebp */ r_esp = r_ebp;
    /* 0087ba33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087ba34: ret  */ FN_RET(0x0087b6b0); r_esp += 4; return;
L_0087ba35:; BB(0x0087ba35);
    /* 0087ba35: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087ba38: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 0087ba3b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087ba3d: jmp 0x87b9c7 */ goto L_0087b9c7;
L_0087ba3f:; BB(0x0087ba3f);
    /* 0087ba3f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087ba42: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087ba45: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ba48: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ba4a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0087ba4d: jl 0x87b7bd */ if ((fS!=fO)) goto L_0087b7bd;
L_0087ba53:; BB(0x0087ba53);
    /* 0087ba53: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0087ba56: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087ba59: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0087ba5c: jmp 0x87ba15 */ goto L_0087ba15;
L_0087ba5e:; BB(0x0087ba5e);
    /* 0087ba5e: mov edi, eax */ r_edi = r_eax;
    /* 0087ba60: lea edi, [edi + 4] */ r_edi = (u32)(r_edi+0x4u);
    /* 0087ba63: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087ba65: jb 0x87b86c */ if (fC) goto L_0087b86c;
L_0087ba6b:; BB(0x0087ba6b);
    /* 0087ba6b: jmp 0x87b7ec */ goto L_0087b7ec;
L_0087ba70:; BB(0x0087ba70);
    /* 0087ba70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087ba71: mov ebp, esp */ r_ebp = r_esp;
    /* 0087ba73: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087ba76: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0087ba79: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0087ba7c: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0087ba7f: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0087ba82: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0087ba85: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0087ba88: cmp dword ptr [eax + 0x1f8], 0 */ {  u32 a = R32((u32)(r_eax+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087ba8f: je 0x87bd16 */ if (fZ) goto L_0087bd16;
L_0087ba95:; BB(0x0087ba95);
    /* 0087ba95: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0087ba97: mov eax, dword ptr [edi + 0x484] */ r_eax = R32((u32)(r_edi+0x484u));
    /* 0087ba9d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087ba9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087baa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087baa2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0087baa5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087baa6: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x87baabu); f_0087421c();
    /* 0087baab: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0087baae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087bab1: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0087bab4: mov ebx, dword ptr [ebx + 0x200] */ r_ebx = R32((u32)(r_ebx+0x200u));
    /* 0087baba: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0087babd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087babf: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87bac4u); f_00858020();
    /* 0087bac4: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087bac7: mov eax, esp */ r_eax = r_esp;
    /* 0087bac9: mov edx, eax */ r_edx = r_eax;
    /* 0087bacb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087bacd: cmp dword ptr [edi + 0x484], 0 */ {  u32 a = R32((u32)(r_edi+0x484u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087bad4: jle 0x87bd06 */ if ((fZ||fS!=fO)) goto L_0087bd06;
L_0087bada:; BB(0x0087bada);
    /* 0087bada: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0087badd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087badf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0087bae2: lea ecx, [ebx - 5] */ r_ecx = (u32)(r_ebx+0xfffffffbu);
    /* 0087bae5: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0087bae8: lea ecx, [ebx - 6] */ r_ecx = (u32)(r_ebx+0xfffffffau);
    /* 0087baeb: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0087baee: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0087baf1: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0087baf4: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0087baf7: mov ebx, eax */ r_ebx = r_eax;
    /* 0087baf9: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_0087bafc:; BB(0x0087bafc);
    /* 0087bafc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087baff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087bb00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087bb01: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x87bb06u); f_0087421c();
    /* 0087bb06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087bb09: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087bb0c: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 0087bb0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087bb11: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087bb14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087bb16: jle 0x87bcf9 */ if ((fZ||fS!=fO)) goto L_0087bcf9;
L_0087bb1c:; BB(0x0087bb1c);
    /* 0087bb1c: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0087bb1f: mov ebx, eax */ r_ebx = r_eax;
    /* 0087bb21: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087bb24: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
L_0087bb27:; BB(0x0087bb27);
    /* 0087bb27: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087bb29: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087bb2b: jle 0x87bbe8 */ if ((fZ||fS!=fO)) goto L_0087bbe8;
L_0087bb31:; BB(0x0087bb31);
    /* 0087bb31: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087bb34: jl 0x87bd29 */ if ((fS!=fO)) goto L_0087bd29;
L_0087bb3a:; BB(0x0087bb3a);
    /* 0087bb3a: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0087bb3d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bb3f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0087bb42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bb44: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0087bb47: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0087bb4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bb4d: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
L_0087bb50:; BB(0x0087bb50);
    /* 0087bb50: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0087bb53: mov edi, dword ptr [ebx + ecx*4] */ r_edi = R32((u32)(r_ebx+r_ecx*4));
    /* 0087bb56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087bb59: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bb5b: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bb5d: mov dword ptr [esi + edx*4], edi */ W32((u32)(r_esi+r_edx*4), r_edi);
    /* 0087bb60: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bb63: mov edi, dword ptr [ebx + edi*4] */ r_edi = R32((u32)(r_ebx+r_edi*4));
    /* 0087bb66: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bb68: lea edi, [edi + eax + 4] */ r_edi = (u32)(r_edi+r_eax+0x4u);
    /* 0087bb6c: mov dword ptr [esi + edx*4 + 4], edi */ W32((u32)(r_esi+r_edx*4+0x4u), r_edi);
    /* 0087bb70: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bb73: mov edi, dword ptr [ebx + edi*4] */ r_edi = R32((u32)(r_ebx+r_edi*4));
    /* 0087bb76: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bb78: lea edi, [edi + eax + 8] */ r_edi = (u32)(r_edi+r_eax+0x8u);
    /* 0087bb7c: mov dword ptr [esi + edx*4 + 8], edi */ W32((u32)(r_esi+r_edx*4+0x8u), r_edi);
    /* 0087bb80: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bb83: mov edi, dword ptr [ebx + edi*4] */ r_edi = R32((u32)(r_ebx+r_edi*4));
    /* 0087bb86: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bb88: lea edi, [edi + eax + 0xc] */ r_edi = (u32)(r_edi+r_eax+0xcu);
    /* 0087bb8c: mov dword ptr [esi + edx*4 + 0xc], edi */ W32((u32)(r_esi+r_edx*4+0xcu), r_edi);
    /* 0087bb90: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bb93: mov edi, dword ptr [ebx + edi*4] */ r_edi = R32((u32)(r_ebx+r_edi*4));
    /* 0087bb96: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bb98: lea ecx, [edi + eax + 0x10] */ r_ecx = (u32)(r_edi+r_eax+0x10u);
    /* 0087bb9c: mov dword ptr [esi + edx*4 + 0x10], ecx */ W32((u32)(r_esi+r_edx*4+0x10u), r_ecx);
    /* 0087bba0: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bba3: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bba6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0087bba9: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087bbab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bbae: jle 0x87bb50 */ if ((fZ||fS!=fO)) goto L_0087bb50;
L_0087bbb0:; BB(0x0087bbb0);
    /* 0087bbb0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0087bbb3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087bbb6: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087bbb9: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
L_0087bbbc:; BB(0x0087bbbc);
    /* 0087bbbc: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0087bbbf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bbc1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0087bbc4: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
L_0087bbc7:; BB(0x0087bbc7);
    /* 0087bbc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087bbca: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bbcd: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0087bbd0: add ecx, dword ptr [ebx + edi*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+r_edi*4)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bbd3: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bbd5: mov dword ptr [esi + edx*4], ecx */ W32((u32)(r_esi+r_edx*4), r_ecx);
    /* 0087bbd8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bbdb: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bbdc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087bbdf: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087bbe1: jl 0x87bbc7 */ if ((fS!=fO)) goto L_0087bbc7;
L_0087bbe3:; BB(0x0087bbe3);
    /* 0087bbe3: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087bbe6: mov edi, ecx */ r_edi = r_ecx;
L_0087bbe8:; BB(0x0087bbe8);
    /* 0087bbe8: push 0x87b674 */ { u32 v = 0x87b674u; r_esp -= 4; W32(r_esp, v); }
    /* 0087bbed: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0087bbef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087bbf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087bbf1: call 0x8cade0 */ r_esp -= 4; W32(r_esp, 0x87bbf6u); f_008cade0();
    /* 0087bbf6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087bbf9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087bbfb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087bbfd: jle 0x87bce3 */ if ((fZ||fS!=fO)) goto L_0087bce3;
L_0087bc03:; BB(0x0087bc03);
    /* 0087bc03: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087bc06: jl 0x87bd22 */ if ((fS!=fO)) goto L_0087bd22;
L_0087bc0c:; BB(0x0087bc0c);
    /* 0087bc0c: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0087bc0f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bc11: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0087bc14: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0087bc17: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0087bc1a: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bc1d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087bc20: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
L_0087bc23:; BB(0x0087bc23);
    /* 0087bc23: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0087bc26: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0087bc29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087bc2c: mov edi, dword ptr [esi + ecx*4] */ r_edi = R32((u32)(r_esi+r_ecx*4));
    /* 0087bc2f: sub edi, dword ptr [eax + ebx*4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_ebx*4)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087bc32: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087bc35: mov ebx, dword ptr [edx + ebx*4] */ r_ebx = R32((u32)(r_edx+r_ebx*4));
    /* 0087bc38: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087bc3b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087bc3d: mov dword ptr [ebx + ecx*4], edi */ W32((u32)(r_ebx+r_ecx*4), r_edi);
    /* 0087bc40: mov edi, dword ptr [esi + ecx*4 + 4] */ r_edi = R32((u32)(r_esi+r_ecx*4+0x4u));
    /* 0087bc44: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bc47: sub edi, dword ptr [eax + ebx*4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_ebx*4)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087bc4a: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087bc4d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087bc50: mov eax, dword ptr [eax + ebx*4] */ r_eax = R32((u32)(r_eax+r_ebx*4));
    /* 0087bc53: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bc55: mov dword ptr [eax + ecx*4 + 4], edi */ W32((u32)(r_eax+r_ecx*4+0x4u), r_edi);
    /* 0087bc59: mov edi, dword ptr [esi + ecx*4 + 8] */ r_edi = R32((u32)(r_esi+r_ecx*4+0x8u));
    /* 0087bc5d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0087bc60: sub edi, dword ptr [eax + ebx*4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_ebx*4)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087bc63: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087bc66: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087bc69: mov eax, dword ptr [eax + ebx*4] */ r_eax = R32((u32)(r_eax+r_ebx*4));
    /* 0087bc6c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bc6e: mov dword ptr [eax + ecx*4 + 8], edi */ W32((u32)(r_eax+r_ecx*4+0x8u), r_edi);
    /* 0087bc72: mov eax, dword ptr [esi + ecx*4 + 0xc] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xcu));
    /* 0087bc76: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 0087bc79: sub eax, dword ptr [edi + ebx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+r_ebx*4)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087bc7c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0087bc7f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087bc82: mov edi, dword ptr [edi + ebx*4] */ r_edi = R32((u32)(r_edi+r_ebx*4));
    /* 0087bc85: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bc87: mov dword ptr [edi + ecx*4 + 0xc], eax */ W32((u32)(r_edi+r_ecx*4+0xcu), r_eax);
    /* 0087bc8b: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bc8e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0087bc91: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087bc94: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087bc96: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0087bc99: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087bc9c: jle 0x87bc23 */ if ((fZ||fS!=fO)) goto L_0087bc23;
L_0087bc9e:; BB(0x0087bc9e);
    /* 0087bc9e: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0087bca1: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0087bca4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087bca7: mov eax, ecx */ r_eax = r_ecx;
    /* 0087bca9: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087bcac: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
L_0087bcaf:; BB(0x0087bcaf);
    /* 0087bcaf: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0087bcb2: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0087bcb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bcb8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087bcbb: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
L_0087bcbe:; BB(0x0087bcbe);
    /* 0087bcbe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087bcc1: mov edx, dword ptr [edi + eax*4] */ r_edx = R32((u32)(r_edi+r_eax*4));
    /* 0087bcc4: sub edx, dword ptr [esi + ecx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ecx*4)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087bcc7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087bcca: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087bccd: add edi, dword ptr [ebx + ecx*4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+r_ecx*4)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bcd0: mov dword ptr [edi + eax*4], edx */ W32((u32)(r_edi+r_eax*4), r_edx);
    /* 0087bcd3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bcd4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087bcd7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087bcd9: jl 0x87bcbe */ if ((fS!=fO)) goto L_0087bcbe;
L_0087bcdb:; BB(0x0087bcdb);
    /* 0087bcdb: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087bcde: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087bce1: mov edi, edx */ r_edi = r_edx;
L_0087bce3:; BB(0x0087bce3);
    /* 0087bce3: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087bce5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087bce8: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087bcea: jl 0x87bb27 */ if ((fS!=fO)) goto L_0087bb27;
L_0087bcf0:; BB(0x0087bcf0);
    /* 0087bcf0: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bcf3: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0087bcf6: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_0087bcf9:; BB(0x0087bcf9);
    /* 0087bcf9: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087bcfa: cmp ebx, dword ptr [edi + 0x484] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x484u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087bd00: jl 0x87bafc */ if ((fS!=fO)) goto L_0087bafc;
L_0087bd06:; BB(0x0087bd06);
    /* 0087bd06: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087bd09: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087bd0c: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bd0f: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087bd12: mov esp, ebp */ r_esp = r_ebp;
    /* 0087bd14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087bd15: ret  */ FN_RET(0x0087b6b0); r_esp += 4; return;
L_0087bd16:; BB(0x0087bd16);
    /* 0087bd16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087bd18: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087bd1b: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087bd1e: mov esp, ebp */ r_esp = r_ebp;
    /* 0087bd20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087bd21: ret  */ FN_RET(0x0087b6b0); r_esp += 4; return;
L_0087bd22:; BB(0x0087bd22);
    /* 0087bd22: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0087bd25: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bd27: jmp 0x87bcaf */ goto L_0087bcaf;
L_0087bd29:; BB(0x0087bd29);
    /* 0087bd29: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0087bd2c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bd2e: jmp 0x87bbbc */ goto L_0087bbbc;
}

void f_0087bd34(void) /* sub_87BD34 */
{
    FN_ENTER(0x0087bd34);
L_0087bd34:; BB(0x0087bd34);
    /* 0087bd34: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087bd3e: jne 0x87bd5c */ if (!fZ) goto L_0087bd5c;
L_0087bd44:; BB(0x0087bd44);
    /* 0087bd44: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087bd4e: jne 0x87c00c */ if (!fZ) goto L_0087c00c;
L_0087bd54:; BB(0x0087bd54);
    /* 0087bd54: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x87bd59u); f_0086b8a0();
    /* 0087bd59: jmp 0x87bd34 */ goto L_0087bd34;
L_0087bd5c:; BB(0x0087bd5c);
    /* 0087bd5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087bd5d: mov ebp, esp */ r_ebp = r_esp;
    /* 0087bd5f: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087bd62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0087bd65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0087bd68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0087bd6b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0087bd6e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0087bd70: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0087bd73: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 0087bd76: mov eax, dword ptr [esi + 0x200] */ r_eax = R32((u32)(r_esi+0x200u));
    /* 0087bd7c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0087bd7f: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 0087bd82: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bd84: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87bd89u); f_00858020();
    /* 0087bd89: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087bd8c: mov eax, esp */ r_eax = r_esp;
    /* 0087bd8e: mov ebx, eax */ r_ebx = r_eax;
    /* 0087bd90: mov esi, dword ptr [esi + 0x1fc] */ r_esi = R32((u32)(r_esi+0x1fcu));
    /* 0087bd96: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087bd99: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087bd9b: jge 0x87bfb8 */ if ((fS==fO)) goto L_0087bfb8;
L_0087bda1:; BB(0x0087bda1);
    /* 0087bda1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0087bda4: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087bda6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0087bda9: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0087bdac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bdae: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bdb0: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0087bdb3: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bdb5: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0087bdb8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bdba: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087bdbc: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bdbe: mov edi, ebx */ r_edi = r_ebx;
    /* 0087bdc0: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0087bdc3: mov eax, edi */ r_eax = r_edi;
    /* 0087bdc5: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087bdc8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0087bdcb: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0087bdce: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0087bdd1: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0087bdd4: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0087bdd7: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
L_0087bdda:; BB(0x0087bdda);
    /* 0087bdda: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bddd: lea edi, [esi + edx] */ r_edi = (u32)(r_esi+r_edx);
    /* 0087bde0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087bde3: mov eax, ecx */ r_eax = r_ecx;
    /* 0087bde5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087bde7: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087bde9: cmovl esi, eax */ if ((fS!=fO)) { r_esi = r_eax; }
    /* 0087bdec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087bdee: jle 0x87be85 */ if ((fZ||fS!=fO)) goto L_0087be85;
L_0087bdf4:; BB(0x0087bdf4);
    /* 0087bdf4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087bdf6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bdf9: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0087bdfc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bdfe: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087be01: jb 0x87c000 */ if (fC) goto L_0087c000;
L_0087be07:; BB(0x0087be07);
    /* 0087be07: mov ecx, esi */ r_ecx = r_esi;
    /* 0087be09: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087be0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087be0e: je 0x87be30 */ if (fZ) goto L_0087be30;
L_0087be10:; BB(0x0087be10);
    /* 0087be10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087be13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087be15: jne 0x87bfc5 */ if (!fZ) goto L_0087bfc5;
L_0087be1b:; BB(0x0087be1b);
    /* 0087be1b: lea ecx, [esi - 1] */ r_ecx = (u32)(r_esi+0xffffffffu);
    /* 0087be1e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0087be21: lea eax, [edx + edi] */ r_eax = (u32)(r_edx+r_edi);
    /* 0087be24: lea edi, [edx + edi] */ r_edi = (u32)(r_edx+r_edi);
    /* 0087be27: mov edx, 1 */ r_edx = 0x1u;
    /* 0087be2c: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 0087be2e: jmp 0x87be36 */ goto L_0087be36;
L_0087be30:; BB(0x0087be30);
    /* 0087be30: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0087be33: lea eax, [eax + edi] */ r_eax = (u32)(r_eax+r_edi);
L_0087be36:; BB(0x0087be36);
    /* 0087be36: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087be39: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087be3b: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087be3d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0087be40: movq mm1, qword ptr [0x99ab00] */ { MM64 r; r.q = R64((u32)(0x99ab00u)); fpr[1] = (long double)(i64)(r.q); }
    /* 0087be47: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0087be4a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087be4c: lea ecx, [eax + edi] */ r_ecx = (u32)(r_eax+r_edi);
    /* 0087be4f: lea edi, [eax + edi + 4] */ r_edi = (u32)(r_eax+r_edi+0x4u);
    /* 0087be53: movd mm0, ecx */ { u64 v = r_ecx; fpr[0] = (long double)(i64)v; }
    /* 0087be56: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087be59: movd mm2, edi */ { u64 v = r_edi; fpr[2] = (long double)(i64)v; }
    /* 0087be5c: punpckldq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
L_0087be5f:; BB(0x0087be5f);
    /* 0087be5f: movq qword ptr [ebx + edx*4], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebx+r_edx*4), r.q); }
    /* 0087be63: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087be66: paddd mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0087be69: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087be6b: jb 0x87be5f */ if (fC) goto L_0087be5f;
L_0087be6d:; BB(0x0087be6d);
    /* 0087be6d: emms  */ ; /* the MMX tag state is not modelled */
    /* 0087be6f: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087be71: jae 0x87be85 */ if (!fC) goto L_0087be85;
L_0087be73:; BB(0x0087be73);
    /* 0087be73: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0087be76: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087be78: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0087be7a:; BB(0x0087be7a);
    /* 0087be7a: mov dword ptr [ebx + edx*4], ecx */ W32((u32)(r_ebx+r_edx*4), r_ecx);
    /* 0087be7d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087be80: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087be81: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087be83: jb 0x87be7a */ if (fC) goto L_0087be7a;
L_0087be85:; BB(0x0087be85);
    /* 0087be85: push 0x87b674 */ { u32 v = 0x87b674u; r_esp -= 4; W32(r_esp, v); }
    /* 0087be8a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0087be8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087be8d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087be8e: call 0x8cade0 */ r_esp -= 4; W32(r_esp, 0x87be93u); f_008cade0();
    /* 0087be93: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087be96: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087be98: jle 0x87bfa5 */ if ((fZ||fS!=fO)) goto L_0087bfa5;
L_0087be9e:; BB(0x0087be9e);
    /* 0087be9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087bea0: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bea3: jb 0x87bfed */ if (fC) goto L_0087bfed;
L_0087bea9:; BB(0x0087bea9);
    /* 0087bea9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087beac: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0087beaf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087beb1: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087beb4: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0087beb7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087beb9: lea ecx, [edi + edx] */ r_ecx = (u32)(r_edi+r_edx);
    /* 0087bebc: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bebe: jb 0x87bfd0 */ if (fC) goto L_0087bfd0;
L_0087bec4:; BB(0x0087bec4);
    /* 0087bec4: mov edx, esi */ r_edx = r_esi;
    /* 0087bec6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bec9: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0087becc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bece: add edi, dword ptr [ebp - 0x24] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bed1: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 0087bed4: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0087bed7: je 0x87befa */ if (fZ) goto L_0087befa;
L_0087bed9:; BB(0x0087bed9);
    /* 0087bed9: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087bedf: jne 0x87bf31 */ if (!fZ) goto L_0087bf31;
L_0087bee1:; BB(0x0087bee1);
    /* 0087bee1: lea edx, [esi - 1] */ r_edx = (u32)(r_esi+0xffffffffu);
    /* 0087bee4: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0087bee6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087bee9: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087beec: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0087beef: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bef2: mov dword ptr [edi + eax*4], ecx */ W32((u32)(r_edi+r_eax*4), r_ecx);
    /* 0087bef5: mov eax, 1 */ r_eax = 0x1u;
L_0087befa:; BB(0x0087befa);
    /* 0087befa: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0087befd: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087beff: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bf01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bf04: movd mm0, ecx */ { u64 v = r_ecx; fpr[0] = (long double)(i64)v; }
    /* 0087bf07: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 0087bf0a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087bf0d: jmp 0x87bf14 */ goto L_0087bf14;
L_0087bf0f:; BB(0x0087bf0f);
    /* 0087bf0f: movq qword ptr [ecx + eax*4 - 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_ecx+r_eax*4+0xfffffff8u), r.q); }
L_0087bf14:; BB(0x0087bf14);
    /* 0087bf14: movq mm1, qword ptr [ebx + eax*4] */ { MM64 r; r.q = R64((u32)(r_ebx+r_eax*4)); fpr[1] = (long double)(i64)(r.q); }
    /* 0087bf18: paddd mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 0087bf1b: psrad mm1, 2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 0087bf1f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bf22: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bf24: jb 0x87bf0f */ if (fC) goto L_0087bf0f;
L_0087bf26:; BB(0x0087bf26);
    /* 0087bf26: movq qword ptr [ecx + eax*4 - 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_ecx+r_eax*4+0xfffffff8u), r.q); }
    /* 0087bf2b: emms  */ ; /* the MMX tag state is not modelled */
    /* 0087bf2d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bf2f: jae 0x87bfa5 */ if (!fC) goto L_0087bfa5;
L_0087bf31:; BB(0x0087bf31);
    /* 0087bf31: mov edx, esi */ r_edx = r_esi;
    /* 0087bf33: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087bf35: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bf38: jb 0x87bf8f */ if (fC) goto L_0087bf8f;
L_0087bf3a:; BB(0x0087bf3a);
    /* 0087bf3a: lea edi, [esi - 6] */ r_edi = (u32)(r_esi+0xfffffffau);
    /* 0087bf3d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087bf40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bf43: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
L_0087bf46:; BB(0x0087bf46);
    /* 0087bf46: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 0087bf49: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087bf4b: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087bf4e: mov dword ptr [edx + eax*4], esi */ W32((u32)(r_edx+r_eax*4), r_esi);
    /* 0087bf51: mov esi, dword ptr [ebx + eax*4 + 4] */ r_esi = R32((u32)(r_ebx+r_eax*4+0x4u));
    /* 0087bf55: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087bf57: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087bf5a: mov dword ptr [edx + eax*4 + 4], esi */ W32((u32)(r_edx+r_eax*4+0x4u), r_esi);
    /* 0087bf5e: mov esi, dword ptr [ebx + eax*4 + 8] */ r_esi = R32((u32)(r_ebx+r_eax*4+0x8u));
    /* 0087bf62: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087bf64: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087bf67: mov dword ptr [edx + eax*4 + 8], esi */ W32((u32)(r_edx+r_eax*4+0x8u), r_esi);
    /* 0087bf6b: mov esi, dword ptr [ebx + eax*4 + 0xc] */ r_esi = R32((u32)(r_ebx+r_eax*4+0xcu));
    /* 0087bf6f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087bf71: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087bf74: mov dword ptr [edx + eax*4 + 0xc], esi */ W32((u32)(r_edx+r_eax*4+0xcu), r_esi);
    /* 0087bf78: mov esi, dword ptr [ebx + eax*4 + 0x10] */ r_esi = R32((u32)(r_ebx+r_eax*4+0x10u));
    /* 0087bf7c: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087bf7e: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087bf81: mov dword ptr [edx + eax*4 + 0x10], esi */ W32((u32)(r_edx+r_eax*4+0x10u), r_esi);
    /* 0087bf85: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bf88: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087bf8a: jbe 0x87bf46 */ if ((fC||fZ)) goto L_0087bf46;
L_0087bf8c:; BB(0x0087bf8c);
    /* 0087bf8c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
L_0087bf8f:; BB(0x0087bf8f);
    /* 0087bf8f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087bf92: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
L_0087bf95:; BB(0x0087bf95);
    /* 0087bf95: mov edx, dword ptr [ebx + eax*4] */ r_edx = R32((u32)(r_ebx+r_eax*4));
    /* 0087bf98: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bf9a: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087bf9d: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 0087bfa0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bfa1: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bfa3: jb 0x87bf95 */ if (fC) goto L_0087bf95;
L_0087bfa5:; BB(0x0087bfa5);
    /* 0087bfa5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bfa8: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bfaa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087bfad: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0087bfb0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087bfb2: jl 0x87bdda */ if ((fS!=fO)) goto L_0087bdda;
L_0087bfb8:; BB(0x0087bfb8);
    /* 0087bfb8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087bfbb: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087bfbe: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087bfc1: mov esp, ebp */ r_esp = r_ebp;
    /* 0087bfc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087bfc4: ret  */ FN_RET(0x0087bd34); r_esp += 4; return;
L_0087bfc5:; BB(0x0087bfc5);
    /* 0087bfc5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0087bfc8: lea eax, [ecx + edi] */ r_eax = (u32)(r_ecx+r_edi);
    /* 0087bfcb: jmp 0x87be73 */ goto L_0087be73;
L_0087bfd0:; BB(0x0087bfd0);
    /* 0087bfd0: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bfd2: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bfd4: jae 0x87bec4 */ if (!fC) goto L_0087bec4;
L_0087bfda:; BB(0x0087bfda);
    /* 0087bfda: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bfdd: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0087bfe0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bfe2: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bfe5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0087bfe8: jmp 0x87bf31 */ goto L_0087bf31;
L_0087bfed:; BB(0x0087bfed);
    /* 0087bfed: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bff0: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0087bff3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bff5: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bff8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0087bffb: jmp 0x87bf31 */ goto L_0087bf31;
L_0087c000:; BB(0x0087c000);
    /* 0087c000: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0087c003: lea eax, [ecx + edi] */ r_eax = (u32)(r_ecx+r_edi);
    /* 0087c006: jmp 0x87be73 */ goto L_0087be73;
L_0087c00c:; BB(0x0087c00c);
    /* 0087c00c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087c00d: mov ebp, esp */ r_ebp = r_esp;
    /* 0087c00f: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087c012: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0087c015: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0087c018: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0087c01b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0087c01e: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0087c020: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0087c023: mov esi, dword ptr [ebx + 0x200] */ r_esi = R32((u32)(r_ebx+0x200u));
    /* 0087c029: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0087c02c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087c02e: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87c033u); f_00858020();
    /* 0087c033: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087c036: mov eax, esp */ r_eax = r_esp;
    /* 0087c038: mov ebx, dword ptr [ebx + 0x1fc] */ r_ebx = R32((u32)(r_ebx+0x1fcu));
    /* 0087c03e: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087c040: jge 0x87c1e5 */ if ((fS==fO)) goto L_0087c1e5;
L_0087c046:; BB(0x0087c046);
    /* 0087c046: mov edx, ebx */ r_edx = r_ebx;
    /* 0087c048: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087c04a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c04c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c04e: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c051: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0087c054: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0087c057: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
L_0087c05a:; BB(0x0087c05a);
    /* 0087c05a: lea edi, [esi + ebx] */ r_edi = (u32)(r_esi+r_ebx);
    /* 0087c05d: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0087c060: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c062: jge 0x87c06b */ if ((fS==fO)) goto L_0087c06b;
L_0087c064:; BB(0x0087c064);
    /* 0087c064: mov esi, eax */ r_esi = r_eax;
    /* 0087c066: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087c068: lea edi, [ebx + esi] */ r_edi = (u32)(r_ebx+r_esi);
L_0087c06b:; BB(0x0087c06b);
    /* 0087c06b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087c06d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087c06f: jle 0x87c133 */ if ((fZ||fS!=fO)) goto L_0087c133;
L_0087c075:; BB(0x0087c075);
    /* 0087c075: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c078: jl 0x87c1fb */ if ((fS!=fO)) goto L_0087c1fb;
L_0087c07e:; BB(0x0087c07e);
    /* 0087c07e: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0087c081: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c083: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c086: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0087c089: lea ecx, [esi - 6] */ r_ecx = (u32)(r_esi+0xfffffffau);
    /* 0087c08c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0087c08f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0087c092: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c094: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c096: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0087c099: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0087c09c: lea ecx, [ecx + ecx + 4] */ r_ecx = (u32)(r_ecx+r_ecx+0x4u);
    /* 0087c0a0: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c0a2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0087c0a5: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0087c0a8: lea ecx, [ecx + ecx + 8] */ r_ecx = (u32)(r_ecx+r_ecx+0x8u);
    /* 0087c0ac: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c0ae: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0087c0b1: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0087c0b4: lea ecx, [ecx + ecx + 0xc] */ r_ecx = (u32)(r_ecx+r_ecx+0xcu);
    /* 0087c0b8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c0ba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0087c0bd: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0087c0c0: lea ecx, [ecx + ecx + 0x10] */ r_ecx = (u32)(r_ecx+r_ecx+0x10u);
    /* 0087c0c4: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c0c6: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0087c0c9: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0087c0cc: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0087c0cf: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 0087c0d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087c0d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087c0d8: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
L_0087c0db:; BB(0x0087c0db);
    /* 0087c0db: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087c0de: mov dword ptr [edx + eax*4], esi */ W32((u32)(r_edx+r_eax*4), r_esi);
    /* 0087c0e1: mov dword ptr [edx + eax*4 + 4], ebx */ W32((u32)(r_edx+r_eax*4+0x4u), r_ebx);
    /* 0087c0e5: mov dword ptr [edx + eax*4 + 8], ecx */ W32((u32)(r_edx+r_eax*4+0x8u), r_ecx);
    /* 0087c0e9: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087c0ec: mov dword ptr [edx + eax*4 + 0xc], edi */ W32((u32)(r_edx+r_eax*4+0xcu), r_edi);
    /* 0087c0f0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087c0f3: mov dword ptr [edx + eax*4 + 0x10], edi */ W32((u32)(r_edx+r_eax*4+0x10u), r_edi);
    /* 0087c0f7: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087c0fa: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087c0fd: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087c100: add dword ptr [ebp - 4], 0x14 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087c104: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087c107: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 0087c10a: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087c10d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087c110: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c112: jle 0x87c0db */ if ((fZ||fS!=fO)) goto L_0087c0db;
L_0087c114:; BB(0x0087c114);
    /* 0087c114: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087c117: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087c11a: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
L_0087c11d:; BB(0x0087c11d);
    /* 0087c11d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0087c120: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c122: add edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c125: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
L_0087c128:; BB(0x0087c128);
    /* 0087c128: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 0087c12b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c12e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087c12f: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c131: jl 0x87c128 */ if ((fS!=fO)) goto L_0087c128;
L_0087c133:; BB(0x0087c133);
    /* 0087c133: push 0x87b674 */ { u32 v = 0x87b674u; r_esp -= 4; W32(r_esp, v); }
    /* 0087c138: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0087c13a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087c13b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087c13e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087c13f: call 0x8cade0 */ r_esp -= 4; W32(r_esp, 0x87c144u); f_008cade0();
    /* 0087c144: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087c147: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087c149: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087c14b: jle 0x87c1d8 */ if ((fZ||fS!=fO)) goto L_0087c1d8;
L_0087c151:; BB(0x0087c151);
    /* 0087c151: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c154: jl 0x87c1f2 */ if ((fS!=fO)) goto L_0087c1f2;
L_0087c15a:; BB(0x0087c15a);
    /* 0087c15a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087c15c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087c15e: add ebx, dword ptr [ebp - 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087c161: lea eax, [esi - 6] */ r_eax = (u32)(r_esi+0xfffffffau);
    /* 0087c164: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0087c167: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 0087c16a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087c16d: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
L_0087c170:; BB(0x0087c170);
    /* 0087c170: mov edi, dword ptr [ecx + edx*4] */ r_edi = R32((u32)(r_ecx+r_edx*4));
    /* 0087c173: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087c175: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087c178: mov dword ptr [ebx + edx*4], edi */ W32((u32)(r_ebx+r_edx*4), r_edi);
    /* 0087c17b: mov edi, dword ptr [ecx + edx*4 + 4] */ r_edi = R32((u32)(r_ecx+r_edx*4+0x4u));
    /* 0087c17f: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087c181: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087c184: mov dword ptr [ebx + edx*4 + 4], edi */ W32((u32)(r_ebx+r_edx*4+0x4u), r_edi);
    /* 0087c188: mov edi, dword ptr [ecx + edx*4 + 8] */ r_edi = R32((u32)(r_ecx+r_edx*4+0x8u));
    /* 0087c18c: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087c18e: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087c191: mov dword ptr [ebx + edx*4 + 8], edi */ W32((u32)(r_ebx+r_edx*4+0x8u), r_edi);
    /* 0087c195: mov edi, dword ptr [ecx + edx*4 + 0xc] */ r_edi = R32((u32)(r_ecx+r_edx*4+0xcu));
    /* 0087c199: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087c19b: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087c19e: mov dword ptr [ebx + edx*4 + 0xc], edi */ W32((u32)(r_ebx+r_edx*4+0xcu), r_edi);
    /* 0087c1a2: mov edi, dword ptr [ecx + edx*4 + 0x10] */ r_edi = R32((u32)(r_ecx+r_edx*4+0x10u));
    /* 0087c1a6: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087c1a8: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087c1ab: mov dword ptr [ebx + edx*4 + 0x10], edi */ W32((u32)(r_ebx+r_edx*4+0x10u), r_edi);
    /* 0087c1af: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c1b2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c1b4: jle 0x87c170 */ if ((fZ||fS!=fO)) goto L_0087c170;
L_0087c1b6:; BB(0x0087c1b6);
    /* 0087c1b6: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087c1b9: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
L_0087c1bc:; BB(0x0087c1bc);
    /* 0087c1bc: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0087c1bf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087c1c2: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
L_0087c1c5:; BB(0x0087c1c5);
    /* 0087c1c5: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0087c1c8: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087c1ca: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0087c1cd: mov dword ptr [ebx + edx*4], eax */ W32((u32)(r_ebx+r_edx*4), r_eax);
    /* 0087c1d0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c1d1: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087c1d3: jl 0x87c1c5 */ if ((fS!=fO)) goto L_0087c1c5;
L_0087c1d5:; BB(0x0087c1d5);
    /* 0087c1d5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
L_0087c1d8:; BB(0x0087c1d8);
    /* 0087c1d8: mov ebx, edi */ r_ebx = r_edi;
    /* 0087c1da: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0087c1dd: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087c1df: jl 0x87c05a */ if ((fS!=fO)) goto L_0087c05a;
L_0087c1e5:; BB(0x0087c1e5);
    /* 0087c1e5: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087c1e8: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087c1eb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087c1ee: mov esp, ebp */ r_esp = r_ebp;
    /* 0087c1f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087c1f1: ret  */ FN_RET(0x0087bd34); r_esp += 4; return;
L_0087c1f2:; BB(0x0087c1f2);
    /* 0087c1f2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087c1f4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087c1f6: add ebx, dword ptr [ebp - 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087c1f9: jmp 0x87c1bc */ goto L_0087c1bc;
L_0087c1fb:; BB(0x0087c1fb);
    /* 0087c1fb: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0087c1fe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c200: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087c203: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0087c206: jmp 0x87c11d */ goto L_0087c11d;
}

void f_0087bdee(void)
{
    FN_ENTER(0x0087bdee);
    goto L_0087bdee;
L_0087bdda:; BB(0x0087bdda);
    /* 0087bdda: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bddd: lea edi, [esi + edx] */ r_edi = (u32)(r_esi+r_edx);
    /* 0087bde0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087bde3: mov eax, ecx */ r_eax = r_ecx;
    /* 0087bde5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087bde7: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087bde9: cmovl esi, eax */ if ((fS!=fO)) { r_esi = r_eax; }
    /* 0087bdec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
L_0087bdee:; BB(0x0087bdee);
    /* 0087bdee: jle 0x87be85 */ if ((fZ||fS!=fO)) goto L_0087be85;
L_0087bdf4:; BB(0x0087bdf4);
    /* 0087bdf4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087bdf6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bdf9: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0087bdfc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bdfe: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087be01: jb 0x87c000 */ if (fC) goto L_0087c000;
L_0087be07:; BB(0x0087be07);
    /* 0087be07: mov ecx, esi */ r_ecx = r_esi;
    /* 0087be09: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087be0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087be0e: je 0x87be30 */ if (fZ) goto L_0087be30;
L_0087be10:; BB(0x0087be10);
    /* 0087be10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087be13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087be15: jne 0x87bfc5 */ if (!fZ) goto L_0087bfc5;
L_0087be1b:; BB(0x0087be1b);
    /* 0087be1b: lea ecx, [esi - 1] */ r_ecx = (u32)(r_esi+0xffffffffu);
    /* 0087be1e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0087be21: lea eax, [edx + edi] */ r_eax = (u32)(r_edx+r_edi);
    /* 0087be24: lea edi, [edx + edi] */ r_edi = (u32)(r_edx+r_edi);
    /* 0087be27: mov edx, 1 */ r_edx = 0x1u;
    /* 0087be2c: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 0087be2e: jmp 0x87be36 */ goto L_0087be36;
L_0087be30:; BB(0x0087be30);
    /* 0087be30: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0087be33: lea eax, [eax + edi] */ r_eax = (u32)(r_eax+r_edi);
L_0087be36:; BB(0x0087be36);
    /* 0087be36: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087be39: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087be3b: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087be3d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0087be40: movq mm1, qword ptr [0x99ab00] */ { MM64 r; r.q = R64((u32)(0x99ab00u)); fpr[1] = (long double)(i64)(r.q); }
    /* 0087be47: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0087be4a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087be4c: lea ecx, [eax + edi] */ r_ecx = (u32)(r_eax+r_edi);
    /* 0087be4f: lea edi, [eax + edi + 4] */ r_edi = (u32)(r_eax+r_edi+0x4u);
    /* 0087be53: movd mm0, ecx */ { u64 v = r_ecx; fpr[0] = (long double)(i64)v; }
    /* 0087be56: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087be59: movd mm2, edi */ { u64 v = r_edi; fpr[2] = (long double)(i64)v; }
    /* 0087be5c: punpckldq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
L_0087be5f:; BB(0x0087be5f);
    /* 0087be5f: movq qword ptr [ebx + edx*4], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebx+r_edx*4), r.q); }
    /* 0087be63: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087be66: paddd mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0087be69: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087be6b: jb 0x87be5f */ if (fC) goto L_0087be5f;
L_0087be6d:; BB(0x0087be6d);
    /* 0087be6d: emms  */ ; /* the MMX tag state is not modelled */
    /* 0087be6f: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087be71: jae 0x87be85 */ if (!fC) goto L_0087be85;
L_0087be73:; BB(0x0087be73);
    /* 0087be73: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0087be76: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087be78: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0087be7a:; BB(0x0087be7a);
    /* 0087be7a: mov dword ptr [ebx + edx*4], ecx */ W32((u32)(r_ebx+r_edx*4), r_ecx);
    /* 0087be7d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087be80: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087be81: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087be83: jb 0x87be7a */ if (fC) goto L_0087be7a;
L_0087be85:; BB(0x0087be85);
    /* 0087be85: push 0x87b674 */ { u32 v = 0x87b674u; r_esp -= 4; W32(r_esp, v); }
    /* 0087be8a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0087be8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087be8d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087be8e: call 0x8cade0 */ r_esp -= 4; W32(r_esp, 0x87be93u); f_008cade0();
    /* 0087be93: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087be96: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087be98: jle 0x87bfa5 */ if ((fZ||fS!=fO)) goto L_0087bfa5;
L_0087be9e:; BB(0x0087be9e);
    /* 0087be9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087bea0: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bea3: jb 0x87bfed */ if (fC) goto L_0087bfed;
L_0087bea9:; BB(0x0087bea9);
    /* 0087bea9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087beac: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0087beaf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087beb1: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087beb4: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0087beb7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087beb9: lea ecx, [edi + edx] */ r_ecx = (u32)(r_edi+r_edx);
    /* 0087bebc: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bebe: jb 0x87bfd0 */ if (fC) goto L_0087bfd0;
L_0087bec4:; BB(0x0087bec4);
    /* 0087bec4: mov edx, esi */ r_edx = r_esi;
    /* 0087bec6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bec9: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0087becc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bece: add edi, dword ptr [ebp - 0x24] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bed1: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 0087bed4: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0087bed7: je 0x87befa */ if (fZ) goto L_0087befa;
L_0087bed9:; BB(0x0087bed9);
    /* 0087bed9: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087bedf: jne 0x87bf31 */ if (!fZ) goto L_0087bf31;
L_0087bee1:; BB(0x0087bee1);
    /* 0087bee1: lea edx, [esi - 1] */ r_edx = (u32)(r_esi+0xffffffffu);
    /* 0087bee4: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0087bee6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087bee9: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087beec: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0087beef: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bef2: mov dword ptr [edi + eax*4], ecx */ W32((u32)(r_edi+r_eax*4), r_ecx);
    /* 0087bef5: mov eax, 1 */ r_eax = 0x1u;
L_0087befa:; BB(0x0087befa);
    /* 0087befa: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0087befd: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087beff: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bf01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bf04: movd mm0, ecx */ { u64 v = r_ecx; fpr[0] = (long double)(i64)v; }
    /* 0087bf07: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 0087bf0a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087bf0d: jmp 0x87bf14 */ goto L_0087bf14;
L_0087bf0f:; BB(0x0087bf0f);
    /* 0087bf0f: movq qword ptr [ecx + eax*4 - 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_ecx+r_eax*4+0xfffffff8u), r.q); }
L_0087bf14:; BB(0x0087bf14);
    /* 0087bf14: movq mm1, qword ptr [ebx + eax*4] */ { MM64 r; r.q = R64((u32)(r_ebx+r_eax*4)); fpr[1] = (long double)(i64)(r.q); }
    /* 0087bf18: paddd mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 0087bf1b: psrad mm1, 2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2u; r.d[0] = c > 31 ? (u32)((i32)a.d[0] >> 31) : (u32)((i32)a.d[0] >> c); r.d[1] = c > 31 ? (u32)((i32)a.d[1] >> 31) : (u32)((i32)a.d[1] >> c); fpr[1] = (long double)(i64)(r.q); }
    /* 0087bf1f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bf22: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bf24: jb 0x87bf0f */ if (fC) goto L_0087bf0f;
L_0087bf26:; BB(0x0087bf26);
    /* 0087bf26: movq qword ptr [ecx + eax*4 - 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_ecx+r_eax*4+0xfffffff8u), r.q); }
    /* 0087bf2b: emms  */ ; /* the MMX tag state is not modelled */
    /* 0087bf2d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bf2f: jae 0x87bfa5 */ if (!fC) goto L_0087bfa5;
L_0087bf31:; BB(0x0087bf31);
    /* 0087bf31: mov edx, esi */ r_edx = r_esi;
    /* 0087bf33: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087bf35: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bf38: jb 0x87bf8f */ if (fC) goto L_0087bf8f;
L_0087bf3a:; BB(0x0087bf3a);
    /* 0087bf3a: lea edi, [esi - 6] */ r_edi = (u32)(r_esi+0xfffffffau);
    /* 0087bf3d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087bf40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087bf43: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
L_0087bf46:; BB(0x0087bf46);
    /* 0087bf46: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 0087bf49: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087bf4b: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087bf4e: mov dword ptr [edx + eax*4], esi */ W32((u32)(r_edx+r_eax*4), r_esi);
    /* 0087bf51: mov esi, dword ptr [ebx + eax*4 + 4] */ r_esi = R32((u32)(r_ebx+r_eax*4+0x4u));
    /* 0087bf55: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087bf57: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087bf5a: mov dword ptr [edx + eax*4 + 4], esi */ W32((u32)(r_edx+r_eax*4+0x4u), r_esi);
    /* 0087bf5e: mov esi, dword ptr [ebx + eax*4 + 8] */ r_esi = R32((u32)(r_ebx+r_eax*4+0x8u));
    /* 0087bf62: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087bf64: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087bf67: mov dword ptr [edx + eax*4 + 8], esi */ W32((u32)(r_edx+r_eax*4+0x8u), r_esi);
    /* 0087bf6b: mov esi, dword ptr [ebx + eax*4 + 0xc] */ r_esi = R32((u32)(r_ebx+r_eax*4+0xcu));
    /* 0087bf6f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087bf71: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087bf74: mov dword ptr [edx + eax*4 + 0xc], esi */ W32((u32)(r_edx+r_eax*4+0xcu), r_esi);
    /* 0087bf78: mov esi, dword ptr [ebx + eax*4 + 0x10] */ r_esi = R32((u32)(r_ebx+r_eax*4+0x10u));
    /* 0087bf7c: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087bf7e: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087bf81: mov dword ptr [edx + eax*4 + 0x10], esi */ W32((u32)(r_edx+r_eax*4+0x10u), r_esi);
    /* 0087bf85: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bf88: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087bf8a: jbe 0x87bf46 */ if ((fC||fZ)) goto L_0087bf46;
L_0087bf8c:; BB(0x0087bf8c);
    /* 0087bf8c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
L_0087bf8f:; BB(0x0087bf8f);
    /* 0087bf8f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087bf92: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
L_0087bf95:; BB(0x0087bf95);
    /* 0087bf95: mov edx, dword ptr [ebx + eax*4] */ r_edx = R32((u32)(r_ebx+r_eax*4));
    /* 0087bf98: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bf9a: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087bf9d: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 0087bfa0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087bfa1: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bfa3: jb 0x87bf95 */ if (fC) goto L_0087bf95;
L_0087bfa5:; BB(0x0087bfa5);
    /* 0087bfa5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bfa8: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087bfaa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087bfad: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0087bfb0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087bfb2: jl 0x87bdda */ if ((fS!=fO)) goto L_0087bdda;
L_0087bfb8:; BB(0x0087bfb8);
    /* 0087bfb8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0087bfbb: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087bfbe: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087bfc1: mov esp, ebp */ r_esp = r_ebp;
    /* 0087bfc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087bfc4: ret  */ FN_RET(0x0087bdee); r_esp += 4; return;
L_0087bfc5:; BB(0x0087bfc5);
    /* 0087bfc5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0087bfc8: lea eax, [ecx + edi] */ r_eax = (u32)(r_ecx+r_edi);
    /* 0087bfcb: jmp 0x87be73 */ goto L_0087be73;
L_0087bfd0:; BB(0x0087bfd0);
    /* 0087bfd0: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087bfd2: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087bfd4: jae 0x87bec4 */ if (!fC) goto L_0087bec4;
L_0087bfda:; BB(0x0087bfda);
    /* 0087bfda: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bfdd: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0087bfe0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bfe2: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bfe5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0087bfe8: jmp 0x87bf31 */ goto L_0087bf31;
L_0087bfed:; BB(0x0087bfed);
    /* 0087bfed: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087bff0: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0087bff3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bff5: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087bff8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0087bffb: jmp 0x87bf31 */ goto L_0087bf31;
L_0087c000:; BB(0x0087c000);
    /* 0087c000: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0087c003: lea eax, [ecx + edi] */ r_eax = (u32)(r_ecx+r_edi);
    /* 0087c006: jmp 0x87be73 */ goto L_0087be73;
}

