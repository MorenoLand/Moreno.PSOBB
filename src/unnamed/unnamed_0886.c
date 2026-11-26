#include "protos.h"

void f_0088600c(void) /* sub_88600C */
{
    FN_ENTER(0x0088600c);
    /* 0088600c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088600d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088600e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088600f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886010: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00886013: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00886017: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0088601b: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0088601e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886022: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886025: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00886026: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88602bu); f_00877bcc();
    /* 0088602b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088602e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886030: jl 0x88614c */ if ((fS!=fO)) goto L_0088614c;
L_00886036:; BB(0x00886036);
    /* 00886036: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886039: mov edi, dword ptr [edx + eax*4] */ r_edi = R32((u32)(r_edx+r_eax*4));
    /* 0088603c: test edi, 0x80000000 */ {  u32 a = r_edi; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886042: je 0x886116 */ if (fZ) goto L_00886116;
L_00886048:; BB(0x00886048);
    /* 00886048: mov ebp, edi */ r_ebp = r_edi;
    /* 0088604a: sar ebp, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0088604d: and ebp, 0x7fff */ {  u32 a = r_ebp; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00886053: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00886056: and edi, 0x7fff */ {  u32 a = r_edi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0088605c: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_0088605e:; BB(0x0088605e);
    /* 0088605e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00886062: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886063: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00886067: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00886068: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88606du); f_00877bcc();
    /* 0088606d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886070: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886072: jge 0x88609c */ if ((fS==fO)) goto L_0088609c;
L_00886074:; BB(0x00886074);
    /* 00886074: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00886078: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
L_0088607c:; BB(0x0088607c);
    /* 0088607c: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088607f: jle 0x886141 */ if ((fZ||fS!=fO)) goto L_00886141;
L_00886085:; BB(0x00886085);
    /* 00886085: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00886086: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886087: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886088: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88608du); f_00877bcc();
    /* 0088608d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886092: jl 0x88607c */ if ((fS!=fO)) goto L_0088607c;
L_00886094:; BB(0x00886094);
    /* 00886094: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00886098: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_0088609c:; BB(0x0088609c);
    /* 0088609c: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8860a1u); f_008867ec();
    /* 008860a1: mov edx, ebx */ r_edx = r_ebx;
    /* 008860a3: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008860a5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008860a8: jle 0x8860df */ if ((fZ||fS!=fO)) goto L_008860df;
L_008860aa:; BB(0x008860aa);
    /* 008860aa: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
L_008860ad:; BB(0x008860ad);
    /* 008860ad: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008860af: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 008860b3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008860b5: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008860b7: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008860ba: jae 0x8860c3 */ if (!fC) goto L_008860c3;
L_008860bc:; BB(0x008860bc);
    /* 008860bc: mov edi, 1 */ r_edi = 0x1u;
    /* 008860c1: jmp 0x8860c5 */ goto L_008860c5;
L_008860c3:; BB(0x008860c3);
    /* 008860c3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008860c5:; BB(0x008860c5);
    /* 008860c5: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008860c8: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008860ca: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008860cc: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008860ce: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008860d0: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008860d2: mov edx, ebx */ r_edx = r_ebx;
    /* 008860d4: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008860d6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008860d9: jg 0x8860ad */ if ((!fZ&&fS==fO)) goto L_008860ad;
L_008860db:; BB(0x008860db);
    /* 008860db: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_008860df:; BB(0x008860df);
    /* 008860df: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008860e2: movsx eax, byte ptr [ebp + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_eax));
    /* 008860e7: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008860eb: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008860ed: jg 0x8860ff */ if ((!fZ&&fS==fO)) goto L_008860ff;
L_008860ef:; BB(0x008860ef);
    /* 008860ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008860f0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008860f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008860f5: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x8860fau); f_00877c74();
    /* 008860fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008860fd: jmp 0x88612f */ goto L_0088612f;
L_008860ff:; BB(0x008860ff);
    /* 008860ff: mov eax, edx */ r_eax = r_edx;
    /* 00886101: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886102: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00886106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00886107: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x88610cu); f_00877c74();
    /* 0088610c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088610f: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00886114: jmp 0x88612f */ goto L_0088612f;
L_00886116:; BB(0x00886116);
    /* 00886116: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886119: movsx edx, byte ptr [edi + eax - 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+r_eax+0xffffffffu));
    /* 0088611e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088611f: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00886123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886124: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886129u); f_00877c74();
    /* 00886129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088612c: lea ebp, [edi - 1] */ r_ebp = (u32)(r_edi+0xffffffffu);
L_0088612f:; BB(0x0088612f);
    /* 0088612f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886131: jl 0x886156 */ if ((fS!=fO)) goto L_00886156;
L_00886133:; BB(0x00886133);
    /* 00886133: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00886136: mov eax, dword ptr [edx + ebp*4] */ r_eax = R32((u32)(r_edx+r_ebp*4));
    /* 00886139: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088613c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088613d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088613e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088613f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886140: ret  */ FN_RET(0x0088600c); r_esp += 4; return;
L_00886141:; BB(0x00886141);
    /* 00886141: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00886145: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 0088614a: jmp 0x88612f */ goto L_0088612f;
L_0088614c:; BB(0x0088614c);
    /* 0088614c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088614e: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00886151: jmp 0x88605e */ goto L_0088605e;
L_00886156:; BB(0x00886156);
    /* 00886156: mov eax, ebp */ r_eax = r_ebp;
    /* 00886158: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088615b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088615c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088615d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088615e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088615f: ret  */ FN_RET(0x0088600c); r_esp += 4; return;
}

void f_00886160(void) /* sub_886160 */
{
    FN_ENTER(0x00886160);
    /* 00886160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00886161: mov ebp, esp */ r_ebp = r_esp;
    /* 00886163: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00886166: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 00886169: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0088616c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0088616f: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00886172: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00886174: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00886177: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00886178: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00886178, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00886178, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088617a: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0088617d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00886180: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00886182: mov eax, edi */ r_eax = r_edi;
    /* 00886184: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x886189u); f_00858020();
    /* 00886189: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088618c: mov eax, esp */ r_eax = r_esp;
    /* 0088618e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00886191: mov eax, edi */ r_eax = r_edi;
    /* 00886193: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x886198u); f_00858020();
    /* 00886198: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088619b: mov eax, esp */ r_eax = r_esp;
    /* 0088619d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008861a0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008861a2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008861a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008861a7: jle 0x886305 */ if ((fZ||fS!=fO)) goto L_00886305;
L_008861ad:; BB(0x008861ad);
    /* 008861ad: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 008861b0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008861b3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008861b6: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008861b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008861ba: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8861bfu); f_00877bcc();
    /* 008861bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008861c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008861c4: jl 0x8863fa */ if ((fS!=fO)) goto L_008863fa;
L_008861ca:; BB(0x008861ca);
    /* 008861ca: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 008861cd: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 008861d0: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008861d5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008861d8: je 0x8862b8 */ if (fZ) goto L_008862b8;
L_008861de:; BB(0x008861de);
    /* 008861de: mov esi, eax */ r_esi = r_eax;
    /* 008861e0: sar esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008861e3: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008861e9: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008861ec: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008861f1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008861f3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_008861f6:; BB(0x008861f6);
    /* 008861f6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 008861f9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008861fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008861fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008861fe: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x886203u); f_00877bcc();
    /* 00886203: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886208: jge 0x886234 */ if ((fS==fO)) goto L_00886234;
L_0088620a:; BB(0x0088620a);
    /* 0088620a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0088620d: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00886210: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
L_00886213:; BB(0x00886213);
    /* 00886213: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886216: jle 0x8863db */ if ((fZ||fS!=fO)) goto L_008863db;
L_0088621c:; BB(0x0088621c);
    /* 0088621c: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088621d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088621e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088621f: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x886224u); f_00877bcc();
    /* 00886224: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886227: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886229: jl 0x886213 */ if ((fS!=fO)) goto L_00886213;
L_0088622b:; BB(0x0088622b);
    /* 0088622b: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0088622e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00886231: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_00886234:; BB(0x00886234);
    /* 00886234: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886235: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x88623au); f_008867ec();
    /* 0088623a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088623b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088623e: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00886240: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886243: jle 0x886285 */ if ((fZ||fS!=fO)) goto L_00886285;
L_00886245:; BB(0x00886245);
    /* 00886245: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00886248: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0088624b: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0088624e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
L_00886251:; BB(0x00886251);
    /* 00886251: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00886253: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00886256: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886258: add ebx, dword ptr [ebp - 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088625b: cmp eax, dword ptr [ebx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088625e: jae 0x886267 */ if (!fC) goto L_00886267;
L_00886260:; BB(0x00886260);
    /* 00886260: mov edi, 1 */ r_edi = 0x1u;
    /* 00886265: jmp 0x886269 */ goto L_00886269;
L_00886267:; BB(0x00886267);
    /* 00886267: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00886269:; BB(0x00886269);
    /* 00886269: lea ebx, [edi - 1] */ r_ebx = (u32)(r_edi+0xffffffffu);
    /* 0088626c: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0088626e: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00886270: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886272: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00886274: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00886276: mov ecx, edx */ r_ecx = r_edx;
    /* 00886278: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088627a: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088627d: jg 0x886251 */ if ((!fZ&&fS==fO)) goto L_00886251;
L_0088627f:; BB(0x0088627f);
    /* 0088627f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00886282: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_00886285:; BB(0x00886285);
    /* 00886285: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00886288: movsx eax, byte ptr [esi + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+r_eax));
    /* 0088628c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088628f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886291: jg 0x8862a2 */ if ((!fZ&&fS==fO)) goto L_008862a2;
L_00886293:; BB(0x00886293);
    /* 00886293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886294: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00886297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886298: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x88629du); f_00877c74();
    /* 0088629d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008862a0: jmp 0x8862d3 */ goto L_008862d3;
L_008862a2:; BB(0x008862a2);
    /* 008862a2: mov eax, edx */ r_eax = r_edx;
    /* 008862a4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008862a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008862a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008862a9: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x8862aeu); f_00877c74();
    /* 008862ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008862b1: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 008862b6: jmp 0x8862d3 */ goto L_008862d3;
L_008862b8:; BB(0x008862b8);
    /* 008862b8: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 008862bb: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 008862c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008862c1: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008862c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008862c5: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x8862cau); f_00877c74();
    /* 008862ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008862cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008862d0: lea esi, [eax - 1] */ r_esi = (u32)(r_eax+0xffffffffu);
L_008862d3:; BB(0x008862d3);
    /* 008862d3: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 008862d6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008862d9: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008862dc: mov dword ptr [edx + edi*4], esi */ W32((u32)(r_edx+r_edi*4), r_esi);
    /* 008862df: je 0x886407 */ if (fZ) goto L_00886407;
L_008862e5:; BB(0x008862e5);
    /* 008862e5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008862e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008862e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008862eb: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008862ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008862f1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008862f2: add edx, dword ptr [ebx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008862f5: mov dword ptr [ecx + eax*2], edx */ W32((u32)(r_ecx+r_eax*2), r_edx);
    /* 008862f8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008862fb: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008862fd: jl 0x8861ad */ if ((fS!=fO)) goto L_008861ad;
L_00886303:; BB(0x00886303);
    /* 00886303: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
L_00886305:; BB(0x00886305);
    /* 00886305: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886307: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00886309: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088630b: jle 0x8863cc */ if ((fZ||fS!=fO)) goto L_008863cc;
L_00886311:; BB(0x00886311);
    /* 00886311: lea eax, [eax - 5] */ r_eax = (u32)(r_eax+0xfffffffbu);
    /* 00886314: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00886317: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_0088631a:; BB(0x0088631a);
    /* 0088631a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088631c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088631e: jle 0x8863c1 */ if ((fZ||fS!=fO)) goto L_008863c1;
L_00886324:; BB(0x00886324);
    /* 00886324: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886327: jl 0x8863eb */ if ((fS!=fO)) goto L_008863eb;
L_0088632d:; BB(0x0088632d);
    /* 0088632d: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00886330: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886332: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 00886335: add ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886338: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088633a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0088633d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00886340: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00886343: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00886346: jmp 0x88634c */ goto L_0088634c;
L_00886348:; BB(0x00886348);
    /* 00886348: fstp dword ptr [ebx + edx*4 - 4] */ W_F32((u32)(r_ebx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_0088634c:; BB(0x0088634c);
    /* 0088634c: mov edi, dword ptr [ecx + edx*4] */ r_edi = R32((u32)(r_ecx+r_edx*4));
    /* 0088634f: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 00886352: fadd dword ptr [edi + esi] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_esi));
    /* 00886355: fstp dword ptr [ebx + edx*4] */ W_F32((u32)(r_ebx+r_edx*4), ST(0)); FPOP();
    /* 00886358: mov edi, dword ptr [ecx + edx*4 + 4] */ r_edi = R32((u32)(r_ecx+r_edx*4+0x4u));
    /* 0088635c: fld dword ptr [ebx + edx*4 + 4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x4u)));
    /* 00886360: fadd dword ptr [edi + esi] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_esi));
    /* 00886363: fstp dword ptr [ebx + edx*4 + 4] */ W_F32((u32)(r_ebx+r_edx*4+0x4u), ST(0)); FPOP();
    /* 00886367: mov edi, dword ptr [ecx + edx*4 + 8] */ r_edi = R32((u32)(r_ecx+r_edx*4+0x8u));
    /* 0088636b: fld dword ptr [ebx + edx*4 + 8] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x8u)));
    /* 0088636f: fadd dword ptr [edi + esi] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_esi));
    /* 00886372: fstp dword ptr [ebx + edx*4 + 8] */ W_F32((u32)(r_ebx+r_edx*4+0x8u), ST(0)); FPOP();
    /* 00886376: mov edi, dword ptr [ecx + edx*4 + 0xc] */ r_edi = R32((u32)(r_ecx+r_edx*4+0xcu));
    /* 0088637a: fld dword ptr [ebx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0xcu)));
    /* 0088637e: fadd dword ptr [edi + esi] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_esi));
    /* 00886381: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00886384: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886386: jle 0x886348 */ if ((fZ||fS!=fO)) goto L_00886348;
L_00886388:; BB(0x00886388);
    /* 00886388: fstp dword ptr [ebx + edx*4 - 4] */ W_F32((u32)(r_ebx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088638c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088638f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00886392: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_00886395:; BB(0x00886395);
    /* 00886395: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00886398: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0088639b: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0088639e: jmp 0x8863a4 */ goto L_008863a4;
L_008863a0:; BB(0x008863a0);
    /* 008863a0: fstp dword ptr [ebx + edx*4 - 4] */ W_F32((u32)(r_ebx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_008863a4:; BB(0x008863a4);
    /* 008863a4: mov ecx, dword ptr [edi + edx*4] */ r_ecx = R32((u32)(r_edi+r_edx*4));
    /* 008863a7: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 008863aa: fadd dword ptr [ecx + esi] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi));
    /* 008863ad: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008863ae: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008863b0: jl 0x8863a0 */ if ((fS!=fO)) goto L_008863a0;
L_008863b2:; BB(0x008863b2);
    /* 008863b2: fstp dword ptr [ebx + edx*4 - 4] */ W_F32((u32)(r_ebx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 008863b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008863b9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008863bc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008863bf: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
L_008863c1:; BB(0x008863c1);
    /* 008863c1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008863c2: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008863c4: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008863c6: jl 0x88631a */ if ((fS!=fO)) goto L_0088631a;
L_008863cc:; BB(0x008863cc);
    /* 008863cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008863ce: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008863d1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008863d4: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008863d7: mov esp, ebp */ r_esp = r_ebp;
    /* 008863d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008863da: ret  */ FN_RET(0x00886160); r_esp += 4; return;
L_008863db:; BB(0x008863db);
    /* 008863db: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008863de: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008863e1: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 008863e6: jmp 0x8862d3 */ goto L_008862d3;
L_008863eb:; BB(0x008863eb);
    /* 008863eb: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 008863ee: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008863f0: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 008863f3: add ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008863f6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008863f8: jmp 0x886395 */ goto L_00886395;
L_008863fa:; BB(0x008863fa);
    /* 008863fa: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008863fc: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008863ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00886402: jmp 0x8861f6 */ goto L_008861f6;
L_00886407:; BB(0x00886407);
    /* 00886407: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0088640c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088640f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00886412: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00886415: mov esp, ebp */ r_esp = r_ebp;
    /* 00886417: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886418: ret  */ FN_RET(0x00886160); r_esp += 4; return;
}

void f_0088641c(void) /* sub_88641C */
{
    FN_ENTER(0x0088641c);
    /* 0088641c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088641d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088641e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088641f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886420: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00886423: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886427: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0088642b: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0088642f: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00886433: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00886435: cmp dword ptr [esi], 8 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886438: jg 0x886658 */ if ((!fZ&&fS==fO)) goto L_00886658;
L_0088643e:; BB(0x0088643e);
    /* 0088643e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886442: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886444: jge 0x88664e */ if ((fS==fO)) goto L_0088664e;
L_0088644a:; BB(0x0088644a);
    /* 0088644a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088644d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886450: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886455: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88645au); f_00877bcc();
    /* 0088645a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088645f: jl 0x886640 */ if ((fS!=fO)) goto L_00886640;
L_00886465:; BB(0x00886465);
    /* 00886465: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886468: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088646b: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886470: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00886474: je 0x88654d */ if (fZ) goto L_0088654d;
L_0088647a:; BB(0x0088647a);
    /* 0088647a: mov ebx, eax */ r_ebx = r_eax;
    /* 0088647c: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088647f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886485: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00886488: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088648d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088648f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00886493:; BB(0x00886493);
    /* 00886493: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886494: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886499: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88649eu); f_00877bcc();
    /* 0088649e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864a3: jge 0x8864c5 */ if ((fS==fO)) goto L_008864c5;
L_008864a5:; BB(0x008864a5);
    /* 008864a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008864a9:; BB(0x008864a9);
    /* 008864a9: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864ac: jle 0x886632 */ if ((fZ||fS!=fO)) goto L_00886632;
L_008864b2:; BB(0x008864b2);
    /* 008864b2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008864b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b5: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8864bau); f_00877bcc();
    /* 008864ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864bf: jl 0x8864a9 */ if ((fS!=fO)) goto L_008864a9;
L_008864c1:; BB(0x008864c1);
    /* 008864c1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008864c5:; BB(0x008864c5);
    /* 008864c5: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8864cau); f_008867ec();
    /* 008864ca: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008864ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008864d0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864d3: jle 0x88651d */ if ((fZ||fS!=fO)) goto L_0088651d;
L_008864d5:; BB(0x008864d5);
    /* 008864d5: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008864d8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008864dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008864e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008864e4:; BB(0x008864e4);
    /* 008864e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008864e6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008864e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864eb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864ed: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008864f0: jae 0x8864f9 */ if (!fC) goto L_008864f9;
L_008864f2:; BB(0x008864f2);
    /* 008864f2: mov edi, 1 */ r_edi = 0x1u;
    /* 008864f7: jmp 0x8864fb */ goto L_008864fb;
L_008864f9:; BB(0x008864f9);
    /* 008864f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008864fb:; BB(0x008864fb);
    /* 008864fb: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008864fe: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886500: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886502: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886504: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886506: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886508: mov edx, ebp */ r_edx = r_ebp;
    /* 0088650a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088650c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088650f: jg 0x8864e4 */ if ((!fZ&&fS==fO)) goto L_008864e4;
L_00886511:; BB(0x00886511);
    /* 00886511: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00886515: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886519: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088651d:; BB(0x0088651d);
    /* 0088651d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886520: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886524: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886526: jg 0x886538 */ if ((!fZ&&fS==fO)) goto L_00886538;
L_00886528:; BB(0x00886528);
    /* 00886528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886529: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088652d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088652e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886533u); f_00877c74();
    /* 00886533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886536: jmp 0x88656a */ goto L_0088656a;
L_00886538:; BB(0x00886538);
    /* 00886538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886539: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088653d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088653e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886543u); f_00877c74();
    /* 00886543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886546: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088654b: jmp 0x88656a */ goto L_0088656a;
L_0088654d:; BB(0x0088654d);
    /* 0088654d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886550: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886556: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088655a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088655b: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886560u); f_00877c74();
    /* 00886560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886563: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00886567: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088656a:; BB(0x0088656a);
    /* 0088656a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088656d: je 0x8867d1 */ if (fZ) goto L_008867d1;
L_00886573:; BB(0x00886573);
    /* 00886573: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00886575: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886578: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088657b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088657d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00886580: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886582: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886584: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00886587: ja 0x88643e */ if ((!fC&&!fZ)) goto L_0088643e;
L_0088658d:; BB(0x0088658d);
    /* 0088658d: mov eax, dword ptr [eax*4 + 0x99aec0] */ r_eax = R32((u32)(r_eax*4+0x99aec0u));
    /* 00886594: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00886632:; BB(0x00886632);
    /* 00886632: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886636: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088663b: jmp 0x88656a */ goto L_0088656a;
L_00886640:; BB(0x00886640);
    /* 00886640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886642: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00886645: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886649: jmp 0x886493 */ goto L_00886493;
L_0088664e:; BB(0x0088664e);
    /* 0088664e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886657: ret  */ FN_RET(0x0088641c); r_esp += 4; return;
L_00886658:; BB(0x00886658);
    /* 00886658: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088665a: jle 0x88664e */ if ((fZ||fS!=fO)) goto L_0088664e;
L_0088665c:; BB(0x0088665c);
    /* 0088665c: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088665f: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886662: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886667: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88666cu); f_00877bcc();
    /* 0088666c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088666f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886671: jl 0x8867c3 */ if ((fS!=fO)) goto L_008867c3;
L_00886677:; BB(0x00886677);
    /* 00886677: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0088667a: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088667d: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886682: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886686: je 0x88675f */ if (fZ) goto L_0088675f;
L_0088668c:; BB(0x0088668c);
    /* 0088668c: mov ebx, eax */ r_ebx = r_eax;
    /* 0088668e: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00886691: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886697: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0088669a: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088669f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008866a1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_008866a5:; BB(0x008866a5);
    /* 008866a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008866a6: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 008866aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008866ab: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8866b0u); f_00877bcc();
    /* 008866b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008866b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008866b5: jge 0x8866d7 */ if ((fS==fO)) goto L_008866d7;
L_008866b7:; BB(0x008866b7);
    /* 008866b7: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008866bb:; BB(0x008866bb);
    /* 008866bb: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008866be: jle 0x8867b8 */ if ((fZ||fS!=fO)) goto L_008867b8;
L_008866c4:; BB(0x008866c4);
    /* 008866c4: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008866c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008866c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008866c7: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8866ccu); f_00877bcc();
    /* 008866cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008866cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008866d1: jl 0x8866bb */ if ((fS!=fO)) goto L_008866bb;
L_008866d3:; BB(0x008866d3);
    /* 008866d3: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008866d7:; BB(0x008866d7);
    /* 008866d7: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8866dcu); f_008867ec();
    /* 008866dc: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008866e0: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008866e2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008866e5: jle 0x88672f */ if ((fZ||fS!=fO)) goto L_0088672f;
L_008866e7:; BB(0x008866e7);
    /* 008866e7: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008866ea: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 008866ee: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008866f2: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_008866f6:; BB(0x008866f6);
    /* 008866f6: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008866f8: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008866fb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008866fd: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008866ff: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00886702: jae 0x88670b */ if (!fC) goto L_0088670b;
L_00886704:; BB(0x00886704);
    /* 00886704: mov edi, 1 */ r_edi = 0x1u;
    /* 00886709: jmp 0x88670d */ goto L_0088670d;
L_0088670b:; BB(0x0088670b);
    /* 0088670b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0088670d:; BB(0x0088670d);
    /* 0088670d: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 00886710: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886712: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886714: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886716: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886718: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088671a: mov edx, ebp */ r_edx = r_ebp;
    /* 0088671c: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088671e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886721: jg 0x8866f6 */ if ((!fZ&&fS==fO)) goto L_008866f6;
L_00886723:; BB(0x00886723);
    /* 00886723: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00886727: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0088672b: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088672f:; BB(0x0088672f);
    /* 0088672f: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886732: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886736: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886738: jg 0x88674a */ if ((!fZ&&fS==fO)) goto L_0088674a;
L_0088673a:; BB(0x0088673a);
    /* 0088673a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088673b: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088673f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886740: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886745u); f_00877c74();
    /* 00886745: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886748: jmp 0x88677c */ goto L_0088677c;
L_0088674a:; BB(0x0088674a);
    /* 0088674a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088674b: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088674f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886750: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886755u); f_00877c74();
    /* 00886755: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886758: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088675d: jmp 0x88677c */ goto L_0088677c;
L_0088675f:; BB(0x0088675f);
    /* 0088675f: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886762: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886767: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886768: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088676c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088676d: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886772u); f_00877c74();
    /* 00886772: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886775: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00886779: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088677c:; BB(0x0088677c);
    /* 0088677c: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088677f: je 0x8867de */ if (fZ) goto L_008867de;
L_00886781:; BB(0x00886781);
    /* 00886781: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00886783: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00886786: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00886788: imul edx, ebx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088678b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088678d: add edx, dword ptr [esi + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00886790: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00886792: jle 0x8867a7 */ if ((fZ||fS!=fO)) goto L_008867a7;
L_00886794:; BB(0x00886794);
    /* 00886794: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
L_00886798:; BB(0x00886798);
    /* 00886798: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 0088679b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088679c: fadd dword ptr [ecx + ebp*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebp*4));
    /* 0088679f: fstp dword ptr [ecx + ebp*4] */ W_F32((u32)(r_ecx+r_ebp*4), ST(0)); FPOP();
    /* 008867a2: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008867a3: cmp eax, dword ptr [esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008867a5: jl 0x886798 */ if ((fS!=fO)) goto L_00886798;
L_008867a7:; BB(0x008867a7);
    /* 008867a7: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 008867ab: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008867ad: jl 0x88665c */ if ((fS!=fO)) goto L_0088665c;
L_008867b3:; BB(0x008867b3);
    /* 008867b3: jmp 0x88664e */ goto L_0088664e;
L_008867b8:; BB(0x008867b8);
    /* 008867b8: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 008867bc: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008867c1: jmp 0x88677c */ goto L_0088677c;
L_008867c3:; BB(0x008867c3);
    /* 008867c3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008867c5: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008867c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008867cc: jmp 0x8866a5 */ goto L_008866a5;
L_008867d1:; BB(0x008867d1);
    /* 008867d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867dd: ret  */ FN_RET(0x0088641c); r_esp += 4; return;
L_008867de:; BB(0x008867de);
    /* 008867de: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867e3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867ea: ret  */ FN_RET(0x0088641c); r_esp += 4; return;
}

void f_0088643e(void)
{
    FN_ENTER(0x0088643e);
L_0088643e:; BB(0x0088643e);
    /* 0088643e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886442: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886444: jge 0x88664e */ if ((fS==fO)) goto L_0088664e;
L_0088644a:; BB(0x0088644a);
    /* 0088644a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088644d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886450: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886455: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88645au); f_00877bcc();
    /* 0088645a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088645f: jl 0x886640 */ if ((fS!=fO)) goto L_00886640;
L_00886465:; BB(0x00886465);
    /* 00886465: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886468: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088646b: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886470: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00886474: je 0x88654d */ if (fZ) goto L_0088654d;
L_0088647a:; BB(0x0088647a);
    /* 0088647a: mov ebx, eax */ r_ebx = r_eax;
    /* 0088647c: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088647f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886485: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00886488: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088648d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088648f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00886493:; BB(0x00886493);
    /* 00886493: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886494: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886499: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88649eu); f_00877bcc();
    /* 0088649e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864a3: jge 0x8864c5 */ if ((fS==fO)) goto L_008864c5;
L_008864a5:; BB(0x008864a5);
    /* 008864a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008864a9:; BB(0x008864a9);
    /* 008864a9: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864ac: jle 0x886632 */ if ((fZ||fS!=fO)) goto L_00886632;
L_008864b2:; BB(0x008864b2);
    /* 008864b2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008864b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b5: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8864bau); f_00877bcc();
    /* 008864ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864bf: jl 0x8864a9 */ if ((fS!=fO)) goto L_008864a9;
L_008864c1:; BB(0x008864c1);
    /* 008864c1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008864c5:; BB(0x008864c5);
    /* 008864c5: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8864cau); f_008867ec();
    /* 008864ca: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008864ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008864d0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864d3: jle 0x88651d */ if ((fZ||fS!=fO)) goto L_0088651d;
L_008864d5:; BB(0x008864d5);
    /* 008864d5: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008864d8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008864dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008864e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008864e4:; BB(0x008864e4);
    /* 008864e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008864e6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008864e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864eb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864ed: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008864f0: jae 0x8864f9 */ if (!fC) goto L_008864f9;
L_008864f2:; BB(0x008864f2);
    /* 008864f2: mov edi, 1 */ r_edi = 0x1u;
    /* 008864f7: jmp 0x8864fb */ goto L_008864fb;
L_008864f9:; BB(0x008864f9);
    /* 008864f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008864fb:; BB(0x008864fb);
    /* 008864fb: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008864fe: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886500: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886502: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886504: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886506: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886508: mov edx, ebp */ r_edx = r_ebp;
    /* 0088650a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088650c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088650f: jg 0x8864e4 */ if ((!fZ&&fS==fO)) goto L_008864e4;
L_00886511:; BB(0x00886511);
    /* 00886511: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00886515: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886519: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088651d:; BB(0x0088651d);
    /* 0088651d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886520: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886524: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886526: jg 0x886538 */ if ((!fZ&&fS==fO)) goto L_00886538;
L_00886528:; BB(0x00886528);
    /* 00886528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886529: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088652d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088652e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886533u); f_00877c74();
    /* 00886533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886536: jmp 0x88656a */ goto L_0088656a;
L_00886538:; BB(0x00886538);
    /* 00886538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886539: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088653d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088653e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886543u); f_00877c74();
    /* 00886543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886546: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088654b: jmp 0x88656a */ goto L_0088656a;
L_0088654d:; BB(0x0088654d);
    /* 0088654d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886550: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886556: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088655a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088655b: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886560u); f_00877c74();
    /* 00886560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886563: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00886567: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088656a:; BB(0x0088656a);
    /* 0088656a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088656d: je 0x8867d1 */ if (fZ) goto L_008867d1;
L_00886573:; BB(0x00886573);
    /* 00886573: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00886575: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886578: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088657b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088657d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00886580: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886582: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886584: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00886587: ja 0x88643e */ if ((!fC&&!fZ)) goto L_0088643e;
L_0088658d:; BB(0x0088658d);
    /* 0088658d: mov eax, dword ptr [eax*4 + 0x99aec0] */ r_eax = R32((u32)(r_eax*4+0x99aec0u));
    /* 00886594: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00886632:; BB(0x00886632);
    /* 00886632: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886636: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088663b: jmp 0x88656a */ goto L_0088656a;
L_00886640:; BB(0x00886640);
    /* 00886640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886642: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00886645: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886649: jmp 0x886493 */ goto L_00886493;
L_0088664e:; BB(0x0088664e);
    /* 0088664e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886657: ret  */ FN_RET(0x0088643e); r_esp += 4; return;
L_008867d1:; BB(0x008867d1);
    /* 008867d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867dd: ret  */ FN_RET(0x0088643e); r_esp += 4; return;
}

void f_00886596(void)
{
    FN_ENTER(0x00886596);
    goto L_00886596;
L_0088643e:; BB(0x0088643e);
    /* 0088643e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886442: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886444: jge 0x88664e */ if ((fS==fO)) goto L_0088664e;
L_0088644a:; BB(0x0088644a);
    /* 0088644a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088644d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886450: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886455: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88645au); f_00877bcc();
    /* 0088645a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088645f: jl 0x886640 */ if ((fS!=fO)) goto L_00886640;
L_00886465:; BB(0x00886465);
    /* 00886465: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886468: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088646b: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886470: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00886474: je 0x88654d */ if (fZ) goto L_0088654d;
L_0088647a:; BB(0x0088647a);
    /* 0088647a: mov ebx, eax */ r_ebx = r_eax;
    /* 0088647c: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088647f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886485: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00886488: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088648d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088648f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00886493:; BB(0x00886493);
    /* 00886493: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886494: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886499: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88649eu); f_00877bcc();
    /* 0088649e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864a3: jge 0x8864c5 */ if ((fS==fO)) goto L_008864c5;
L_008864a5:; BB(0x008864a5);
    /* 008864a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008864a9:; BB(0x008864a9);
    /* 008864a9: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864ac: jle 0x886632 */ if ((fZ||fS!=fO)) goto L_00886632;
L_008864b2:; BB(0x008864b2);
    /* 008864b2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008864b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b5: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8864bau); f_00877bcc();
    /* 008864ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864bf: jl 0x8864a9 */ if ((fS!=fO)) goto L_008864a9;
L_008864c1:; BB(0x008864c1);
    /* 008864c1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008864c5:; BB(0x008864c5);
    /* 008864c5: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8864cau); f_008867ec();
    /* 008864ca: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008864ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008864d0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864d3: jle 0x88651d */ if ((fZ||fS!=fO)) goto L_0088651d;
L_008864d5:; BB(0x008864d5);
    /* 008864d5: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008864d8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008864dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008864e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008864e4:; BB(0x008864e4);
    /* 008864e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008864e6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008864e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864eb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864ed: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008864f0: jae 0x8864f9 */ if (!fC) goto L_008864f9;
L_008864f2:; BB(0x008864f2);
    /* 008864f2: mov edi, 1 */ r_edi = 0x1u;
    /* 008864f7: jmp 0x8864fb */ goto L_008864fb;
L_008864f9:; BB(0x008864f9);
    /* 008864f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008864fb:; BB(0x008864fb);
    /* 008864fb: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008864fe: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886500: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886502: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886504: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886506: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886508: mov edx, ebp */ r_edx = r_ebp;
    /* 0088650a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088650c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088650f: jg 0x8864e4 */ if ((!fZ&&fS==fO)) goto L_008864e4;
L_00886511:; BB(0x00886511);
    /* 00886511: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00886515: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886519: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088651d:; BB(0x0088651d);
    /* 0088651d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886520: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886524: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886526: jg 0x886538 */ if ((!fZ&&fS==fO)) goto L_00886538;
L_00886528:; BB(0x00886528);
    /* 00886528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886529: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088652d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088652e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886533u); f_00877c74();
    /* 00886533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886536: jmp 0x88656a */ goto L_0088656a;
L_00886538:; BB(0x00886538);
    /* 00886538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886539: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088653d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088653e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886543u); f_00877c74();
    /* 00886543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886546: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088654b: jmp 0x88656a */ goto L_0088656a;
L_0088654d:; BB(0x0088654d);
    /* 0088654d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886550: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886556: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088655a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088655b: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886560u); f_00877c74();
    /* 00886560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886563: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00886567: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088656a:; BB(0x0088656a);
    /* 0088656a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088656d: je 0x8867d1 */ if (fZ) goto L_008867d1;
L_00886573:; BB(0x00886573);
    /* 00886573: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00886575: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886578: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088657b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088657d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00886580: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886582: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886584: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00886587: ja 0x88643e */ if ((!fC&&!fZ)) goto L_0088643e;
L_0088658d:; BB(0x0088658d);
    /* 0088658d: mov eax, dword ptr [eax*4 + 0x99aec0] */ r_eax = R32((u32)(r_eax*4+0x99aec0u));
    /* 00886594: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00886596:; BB(0x00886596);
    /* 00886596: mov edi, 1 */ r_edi = 0x1u;
    /* 0088659b: mov eax, ebp */ r_eax = r_ebp;
    /* 0088659d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088659e: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865a1: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865a5: fadd dword ptr [edx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_eax*4));
    /* 008865a8: fstp dword ptr [edx + eax*4] */ W_F32((u32)(r_edx+r_eax*4), ST(0)); FPOP();
    /* 008865ab: mov eax, edi */ r_eax = r_edi;
    /* 008865ad: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865ae: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865b0: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865b1: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865b5: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865b8: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865bb: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865be: mov eax, edi */ r_eax = r_edi;
    /* 008865c0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865c1: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865c3: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865c4: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865c8: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865cb: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865ce: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865d1: mov eax, edi */ r_eax = r_edi;
    /* 008865d3: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865d4: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865d6: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865d7: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865db: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865de: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865e1: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865e4: mov eax, edi */ r_eax = r_edi;
    /* 008865e6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865e7: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865e9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865ea: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865ee: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865f1: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865f4: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865f7: mov eax, edi */ r_eax = r_edi;
    /* 008865f9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865fa: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865fc: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865fd: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886601: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886604: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 00886607: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088660a: mov eax, edi */ r_eax = r_edi;
    /* 0088660c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088660d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0088660f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886610: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886614: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886617: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 0088661a: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088661d: mov edx, ebp */ r_edx = r_ebp;
    /* 0088661f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886620: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00886624: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00886627: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0088662a: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 0088662d: jmp 0x88643e */ goto L_0088643e;
L_00886632:; BB(0x00886632);
    /* 00886632: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886636: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088663b: jmp 0x88656a */ goto L_0088656a;
L_00886640:; BB(0x00886640);
    /* 00886640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886642: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00886645: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886649: jmp 0x886493 */ goto L_00886493;
L_0088664e:; BB(0x0088664e);
    /* 0088664e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886657: ret  */ FN_RET(0x00886596); r_esp += 4; return;
L_008867d1:; BB(0x008867d1);
    /* 008867d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867dd: ret  */ FN_RET(0x00886596); r_esp += 4; return;
}

void f_008865ab(void)
{
    FN_ENTER(0x008865ab);
    goto L_008865ab;
L_0088643e:; BB(0x0088643e);
    /* 0088643e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886442: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886444: jge 0x88664e */ if ((fS==fO)) goto L_0088664e;
L_0088644a:; BB(0x0088644a);
    /* 0088644a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088644d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886450: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886455: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88645au); f_00877bcc();
    /* 0088645a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088645f: jl 0x886640 */ if ((fS!=fO)) goto L_00886640;
L_00886465:; BB(0x00886465);
    /* 00886465: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886468: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088646b: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886470: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00886474: je 0x88654d */ if (fZ) goto L_0088654d;
L_0088647a:; BB(0x0088647a);
    /* 0088647a: mov ebx, eax */ r_ebx = r_eax;
    /* 0088647c: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088647f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886485: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00886488: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088648d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088648f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00886493:; BB(0x00886493);
    /* 00886493: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886494: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886499: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88649eu); f_00877bcc();
    /* 0088649e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864a3: jge 0x8864c5 */ if ((fS==fO)) goto L_008864c5;
L_008864a5:; BB(0x008864a5);
    /* 008864a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008864a9:; BB(0x008864a9);
    /* 008864a9: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864ac: jle 0x886632 */ if ((fZ||fS!=fO)) goto L_00886632;
L_008864b2:; BB(0x008864b2);
    /* 008864b2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008864b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b5: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8864bau); f_00877bcc();
    /* 008864ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864bf: jl 0x8864a9 */ if ((fS!=fO)) goto L_008864a9;
L_008864c1:; BB(0x008864c1);
    /* 008864c1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008864c5:; BB(0x008864c5);
    /* 008864c5: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8864cau); f_008867ec();
    /* 008864ca: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008864ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008864d0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864d3: jle 0x88651d */ if ((fZ||fS!=fO)) goto L_0088651d;
L_008864d5:; BB(0x008864d5);
    /* 008864d5: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008864d8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008864dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008864e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008864e4:; BB(0x008864e4);
    /* 008864e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008864e6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008864e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864eb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864ed: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008864f0: jae 0x8864f9 */ if (!fC) goto L_008864f9;
L_008864f2:; BB(0x008864f2);
    /* 008864f2: mov edi, 1 */ r_edi = 0x1u;
    /* 008864f7: jmp 0x8864fb */ goto L_008864fb;
L_008864f9:; BB(0x008864f9);
    /* 008864f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008864fb:; BB(0x008864fb);
    /* 008864fb: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008864fe: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886500: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886502: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886504: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886506: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886508: mov edx, ebp */ r_edx = r_ebp;
    /* 0088650a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088650c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088650f: jg 0x8864e4 */ if ((!fZ&&fS==fO)) goto L_008864e4;
L_00886511:; BB(0x00886511);
    /* 00886511: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00886515: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886519: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088651d:; BB(0x0088651d);
    /* 0088651d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886520: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886524: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886526: jg 0x886538 */ if ((!fZ&&fS==fO)) goto L_00886538;
L_00886528:; BB(0x00886528);
    /* 00886528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886529: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088652d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088652e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886533u); f_00877c74();
    /* 00886533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886536: jmp 0x88656a */ goto L_0088656a;
L_00886538:; BB(0x00886538);
    /* 00886538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886539: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088653d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088653e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886543u); f_00877c74();
    /* 00886543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886546: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088654b: jmp 0x88656a */ goto L_0088656a;
L_0088654d:; BB(0x0088654d);
    /* 0088654d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886550: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886556: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088655a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088655b: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886560u); f_00877c74();
    /* 00886560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886563: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00886567: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088656a:; BB(0x0088656a);
    /* 0088656a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088656d: je 0x8867d1 */ if (fZ) goto L_008867d1;
L_00886573:; BB(0x00886573);
    /* 00886573: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00886575: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886578: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088657b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088657d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00886580: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886582: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886584: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00886587: ja 0x88643e */ if ((!fC&&!fZ)) goto L_0088643e;
L_0088658d:; BB(0x0088658d);
    /* 0088658d: mov eax, dword ptr [eax*4 + 0x99aec0] */ r_eax = R32((u32)(r_eax*4+0x99aec0u));
    /* 00886594: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_008865ab:; BB(0x008865ab);
    /* 008865ab: mov eax, edi */ r_eax = r_edi;
    /* 008865ad: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865ae: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865b0: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865b1: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865b5: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865b8: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865bb: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865be: mov eax, edi */ r_eax = r_edi;
    /* 008865c0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865c1: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865c3: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865c4: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865c8: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865cb: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865ce: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865d1: mov eax, edi */ r_eax = r_edi;
    /* 008865d3: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865d4: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865d6: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865d7: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865db: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865de: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865e1: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865e4: mov eax, edi */ r_eax = r_edi;
    /* 008865e6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865e7: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865e9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865ea: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865ee: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865f1: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865f4: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865f7: mov eax, edi */ r_eax = r_edi;
    /* 008865f9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865fa: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865fc: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865fd: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886601: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886604: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 00886607: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088660a: mov eax, edi */ r_eax = r_edi;
    /* 0088660c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088660d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0088660f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886610: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886614: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886617: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 0088661a: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088661d: mov edx, ebp */ r_edx = r_ebp;
    /* 0088661f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886620: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00886624: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00886627: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0088662a: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 0088662d: jmp 0x88643e */ goto L_0088643e;
L_00886632:; BB(0x00886632);
    /* 00886632: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886636: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088663b: jmp 0x88656a */ goto L_0088656a;
L_00886640:; BB(0x00886640);
    /* 00886640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886642: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00886645: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886649: jmp 0x886493 */ goto L_00886493;
L_0088664e:; BB(0x0088664e);
    /* 0088664e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886657: ret  */ FN_RET(0x008865ab); r_esp += 4; return;
L_008867d1:; BB(0x008867d1);
    /* 008867d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867dd: ret  */ FN_RET(0x008865ab); r_esp += 4; return;
}

void f_008865be(void)
{
    FN_ENTER(0x008865be);
    goto L_008865be;
L_0088643e:; BB(0x0088643e);
    /* 0088643e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886442: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886444: jge 0x88664e */ if ((fS==fO)) goto L_0088664e;
L_0088644a:; BB(0x0088644a);
    /* 0088644a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088644d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886450: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886455: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88645au); f_00877bcc();
    /* 0088645a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088645f: jl 0x886640 */ if ((fS!=fO)) goto L_00886640;
L_00886465:; BB(0x00886465);
    /* 00886465: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886468: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088646b: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886470: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00886474: je 0x88654d */ if (fZ) goto L_0088654d;
L_0088647a:; BB(0x0088647a);
    /* 0088647a: mov ebx, eax */ r_ebx = r_eax;
    /* 0088647c: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088647f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886485: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00886488: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088648d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088648f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00886493:; BB(0x00886493);
    /* 00886493: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886494: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886499: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88649eu); f_00877bcc();
    /* 0088649e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864a3: jge 0x8864c5 */ if ((fS==fO)) goto L_008864c5;
L_008864a5:; BB(0x008864a5);
    /* 008864a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008864a9:; BB(0x008864a9);
    /* 008864a9: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864ac: jle 0x886632 */ if ((fZ||fS!=fO)) goto L_00886632;
L_008864b2:; BB(0x008864b2);
    /* 008864b2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008864b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b5: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8864bau); f_00877bcc();
    /* 008864ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864bf: jl 0x8864a9 */ if ((fS!=fO)) goto L_008864a9;
L_008864c1:; BB(0x008864c1);
    /* 008864c1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008864c5:; BB(0x008864c5);
    /* 008864c5: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8864cau); f_008867ec();
    /* 008864ca: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008864ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008864d0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864d3: jle 0x88651d */ if ((fZ||fS!=fO)) goto L_0088651d;
L_008864d5:; BB(0x008864d5);
    /* 008864d5: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008864d8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008864dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008864e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008864e4:; BB(0x008864e4);
    /* 008864e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008864e6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008864e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864eb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864ed: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008864f0: jae 0x8864f9 */ if (!fC) goto L_008864f9;
L_008864f2:; BB(0x008864f2);
    /* 008864f2: mov edi, 1 */ r_edi = 0x1u;
    /* 008864f7: jmp 0x8864fb */ goto L_008864fb;
L_008864f9:; BB(0x008864f9);
    /* 008864f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008864fb:; BB(0x008864fb);
    /* 008864fb: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008864fe: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886500: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886502: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886504: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886506: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886508: mov edx, ebp */ r_edx = r_ebp;
    /* 0088650a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088650c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088650f: jg 0x8864e4 */ if ((!fZ&&fS==fO)) goto L_008864e4;
L_00886511:; BB(0x00886511);
    /* 00886511: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00886515: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886519: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088651d:; BB(0x0088651d);
    /* 0088651d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886520: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886524: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886526: jg 0x886538 */ if ((!fZ&&fS==fO)) goto L_00886538;
L_00886528:; BB(0x00886528);
    /* 00886528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886529: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088652d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088652e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886533u); f_00877c74();
    /* 00886533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886536: jmp 0x88656a */ goto L_0088656a;
L_00886538:; BB(0x00886538);
    /* 00886538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886539: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088653d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088653e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886543u); f_00877c74();
    /* 00886543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886546: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088654b: jmp 0x88656a */ goto L_0088656a;
L_0088654d:; BB(0x0088654d);
    /* 0088654d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886550: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886556: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088655a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088655b: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886560u); f_00877c74();
    /* 00886560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886563: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00886567: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088656a:; BB(0x0088656a);
    /* 0088656a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088656d: je 0x8867d1 */ if (fZ) goto L_008867d1;
L_00886573:; BB(0x00886573);
    /* 00886573: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00886575: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886578: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088657b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088657d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00886580: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886582: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886584: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00886587: ja 0x88643e */ if ((!fC&&!fZ)) goto L_0088643e;
L_0088658d:; BB(0x0088658d);
    /* 0088658d: mov eax, dword ptr [eax*4 + 0x99aec0] */ r_eax = R32((u32)(r_eax*4+0x99aec0u));
    /* 00886594: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_008865be:; BB(0x008865be);
    /* 008865be: mov eax, edi */ r_eax = r_edi;
    /* 008865c0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865c1: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865c3: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865c4: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865c8: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865cb: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865ce: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865d1: mov eax, edi */ r_eax = r_edi;
    /* 008865d3: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865d4: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865d6: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865d7: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865db: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865de: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865e1: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865e4: mov eax, edi */ r_eax = r_edi;
    /* 008865e6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865e7: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865e9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865ea: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865ee: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865f1: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865f4: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865f7: mov eax, edi */ r_eax = r_edi;
    /* 008865f9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865fa: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865fc: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865fd: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886601: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886604: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 00886607: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088660a: mov eax, edi */ r_eax = r_edi;
    /* 0088660c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088660d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0088660f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886610: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886614: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886617: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 0088661a: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088661d: mov edx, ebp */ r_edx = r_ebp;
    /* 0088661f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886620: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00886624: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00886627: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0088662a: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 0088662d: jmp 0x88643e */ goto L_0088643e;
L_00886632:; BB(0x00886632);
    /* 00886632: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886636: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088663b: jmp 0x88656a */ goto L_0088656a;
L_00886640:; BB(0x00886640);
    /* 00886640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886642: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00886645: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886649: jmp 0x886493 */ goto L_00886493;
L_0088664e:; BB(0x0088664e);
    /* 0088664e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886657: ret  */ FN_RET(0x008865be); r_esp += 4; return;
L_008867d1:; BB(0x008867d1);
    /* 008867d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867dd: ret  */ FN_RET(0x008865be); r_esp += 4; return;
}

void f_008865d1(void)
{
    FN_ENTER(0x008865d1);
    goto L_008865d1;
L_0088643e:; BB(0x0088643e);
    /* 0088643e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886442: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886444: jge 0x88664e */ if ((fS==fO)) goto L_0088664e;
L_0088644a:; BB(0x0088644a);
    /* 0088644a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088644d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886450: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886455: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88645au); f_00877bcc();
    /* 0088645a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088645f: jl 0x886640 */ if ((fS!=fO)) goto L_00886640;
L_00886465:; BB(0x00886465);
    /* 00886465: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886468: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088646b: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886470: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00886474: je 0x88654d */ if (fZ) goto L_0088654d;
L_0088647a:; BB(0x0088647a);
    /* 0088647a: mov ebx, eax */ r_ebx = r_eax;
    /* 0088647c: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088647f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886485: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00886488: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088648d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088648f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00886493:; BB(0x00886493);
    /* 00886493: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886494: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886499: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88649eu); f_00877bcc();
    /* 0088649e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864a3: jge 0x8864c5 */ if ((fS==fO)) goto L_008864c5;
L_008864a5:; BB(0x008864a5);
    /* 008864a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008864a9:; BB(0x008864a9);
    /* 008864a9: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864ac: jle 0x886632 */ if ((fZ||fS!=fO)) goto L_00886632;
L_008864b2:; BB(0x008864b2);
    /* 008864b2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008864b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b5: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8864bau); f_00877bcc();
    /* 008864ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864bf: jl 0x8864a9 */ if ((fS!=fO)) goto L_008864a9;
L_008864c1:; BB(0x008864c1);
    /* 008864c1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008864c5:; BB(0x008864c5);
    /* 008864c5: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8864cau); f_008867ec();
    /* 008864ca: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008864ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008864d0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864d3: jle 0x88651d */ if ((fZ||fS!=fO)) goto L_0088651d;
L_008864d5:; BB(0x008864d5);
    /* 008864d5: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008864d8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008864dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008864e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008864e4:; BB(0x008864e4);
    /* 008864e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008864e6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008864e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864eb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864ed: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008864f0: jae 0x8864f9 */ if (!fC) goto L_008864f9;
L_008864f2:; BB(0x008864f2);
    /* 008864f2: mov edi, 1 */ r_edi = 0x1u;
    /* 008864f7: jmp 0x8864fb */ goto L_008864fb;
L_008864f9:; BB(0x008864f9);
    /* 008864f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008864fb:; BB(0x008864fb);
    /* 008864fb: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008864fe: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886500: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886502: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886504: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886506: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886508: mov edx, ebp */ r_edx = r_ebp;
    /* 0088650a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088650c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088650f: jg 0x8864e4 */ if ((!fZ&&fS==fO)) goto L_008864e4;
L_00886511:; BB(0x00886511);
    /* 00886511: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00886515: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886519: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088651d:; BB(0x0088651d);
    /* 0088651d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886520: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886524: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886526: jg 0x886538 */ if ((!fZ&&fS==fO)) goto L_00886538;
L_00886528:; BB(0x00886528);
    /* 00886528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886529: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088652d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088652e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886533u); f_00877c74();
    /* 00886533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886536: jmp 0x88656a */ goto L_0088656a;
L_00886538:; BB(0x00886538);
    /* 00886538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886539: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088653d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088653e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886543u); f_00877c74();
    /* 00886543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886546: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088654b: jmp 0x88656a */ goto L_0088656a;
L_0088654d:; BB(0x0088654d);
    /* 0088654d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886550: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886556: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088655a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088655b: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886560u); f_00877c74();
    /* 00886560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886563: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00886567: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088656a:; BB(0x0088656a);
    /* 0088656a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088656d: je 0x8867d1 */ if (fZ) goto L_008867d1;
L_00886573:; BB(0x00886573);
    /* 00886573: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00886575: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886578: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088657b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088657d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00886580: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886582: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886584: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00886587: ja 0x88643e */ if ((!fC&&!fZ)) goto L_0088643e;
L_0088658d:; BB(0x0088658d);
    /* 0088658d: mov eax, dword ptr [eax*4 + 0x99aec0] */ r_eax = R32((u32)(r_eax*4+0x99aec0u));
    /* 00886594: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_008865d1:; BB(0x008865d1);
    /* 008865d1: mov eax, edi */ r_eax = r_edi;
    /* 008865d3: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865d4: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865d6: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865d7: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865db: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865de: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865e1: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865e4: mov eax, edi */ r_eax = r_edi;
    /* 008865e6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865e7: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865e9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865ea: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865ee: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865f1: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865f4: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865f7: mov eax, edi */ r_eax = r_edi;
    /* 008865f9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865fa: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865fc: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865fd: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886601: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886604: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 00886607: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088660a: mov eax, edi */ r_eax = r_edi;
    /* 0088660c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088660d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0088660f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886610: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886614: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886617: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 0088661a: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088661d: mov edx, ebp */ r_edx = r_ebp;
    /* 0088661f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886620: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00886624: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00886627: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0088662a: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 0088662d: jmp 0x88643e */ goto L_0088643e;
L_00886632:; BB(0x00886632);
    /* 00886632: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886636: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088663b: jmp 0x88656a */ goto L_0088656a;
L_00886640:; BB(0x00886640);
    /* 00886640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886642: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00886645: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886649: jmp 0x886493 */ goto L_00886493;
L_0088664e:; BB(0x0088664e);
    /* 0088664e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886657: ret  */ FN_RET(0x008865d1); r_esp += 4; return;
L_008867d1:; BB(0x008867d1);
    /* 008867d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867dd: ret  */ FN_RET(0x008865d1); r_esp += 4; return;
}

void f_008865e4(void)
{
    FN_ENTER(0x008865e4);
    goto L_008865e4;
L_0088643e:; BB(0x0088643e);
    /* 0088643e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886442: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886444: jge 0x88664e */ if ((fS==fO)) goto L_0088664e;
L_0088644a:; BB(0x0088644a);
    /* 0088644a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088644d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886450: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886455: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88645au); f_00877bcc();
    /* 0088645a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088645f: jl 0x886640 */ if ((fS!=fO)) goto L_00886640;
L_00886465:; BB(0x00886465);
    /* 00886465: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886468: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088646b: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886470: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00886474: je 0x88654d */ if (fZ) goto L_0088654d;
L_0088647a:; BB(0x0088647a);
    /* 0088647a: mov ebx, eax */ r_ebx = r_eax;
    /* 0088647c: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088647f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886485: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00886488: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088648d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088648f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00886493:; BB(0x00886493);
    /* 00886493: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886494: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886499: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88649eu); f_00877bcc();
    /* 0088649e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864a3: jge 0x8864c5 */ if ((fS==fO)) goto L_008864c5;
L_008864a5:; BB(0x008864a5);
    /* 008864a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008864a9:; BB(0x008864a9);
    /* 008864a9: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864ac: jle 0x886632 */ if ((fZ||fS!=fO)) goto L_00886632;
L_008864b2:; BB(0x008864b2);
    /* 008864b2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008864b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b5: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8864bau); f_00877bcc();
    /* 008864ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864bf: jl 0x8864a9 */ if ((fS!=fO)) goto L_008864a9;
L_008864c1:; BB(0x008864c1);
    /* 008864c1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008864c5:; BB(0x008864c5);
    /* 008864c5: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8864cau); f_008867ec();
    /* 008864ca: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008864ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008864d0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864d3: jle 0x88651d */ if ((fZ||fS!=fO)) goto L_0088651d;
L_008864d5:; BB(0x008864d5);
    /* 008864d5: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008864d8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008864dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008864e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008864e4:; BB(0x008864e4);
    /* 008864e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008864e6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008864e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864eb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864ed: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008864f0: jae 0x8864f9 */ if (!fC) goto L_008864f9;
L_008864f2:; BB(0x008864f2);
    /* 008864f2: mov edi, 1 */ r_edi = 0x1u;
    /* 008864f7: jmp 0x8864fb */ goto L_008864fb;
L_008864f9:; BB(0x008864f9);
    /* 008864f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008864fb:; BB(0x008864fb);
    /* 008864fb: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008864fe: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886500: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886502: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886504: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886506: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886508: mov edx, ebp */ r_edx = r_ebp;
    /* 0088650a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088650c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088650f: jg 0x8864e4 */ if ((!fZ&&fS==fO)) goto L_008864e4;
L_00886511:; BB(0x00886511);
    /* 00886511: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00886515: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886519: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088651d:; BB(0x0088651d);
    /* 0088651d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886520: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886524: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886526: jg 0x886538 */ if ((!fZ&&fS==fO)) goto L_00886538;
L_00886528:; BB(0x00886528);
    /* 00886528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886529: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088652d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088652e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886533u); f_00877c74();
    /* 00886533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886536: jmp 0x88656a */ goto L_0088656a;
L_00886538:; BB(0x00886538);
    /* 00886538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886539: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088653d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088653e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886543u); f_00877c74();
    /* 00886543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886546: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088654b: jmp 0x88656a */ goto L_0088656a;
L_0088654d:; BB(0x0088654d);
    /* 0088654d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886550: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886556: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088655a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088655b: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886560u); f_00877c74();
    /* 00886560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886563: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00886567: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088656a:; BB(0x0088656a);
    /* 0088656a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088656d: je 0x8867d1 */ if (fZ) goto L_008867d1;
L_00886573:; BB(0x00886573);
    /* 00886573: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00886575: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886578: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088657b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088657d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00886580: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886582: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886584: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00886587: ja 0x88643e */ if ((!fC&&!fZ)) goto L_0088643e;
L_0088658d:; BB(0x0088658d);
    /* 0088658d: mov eax, dword ptr [eax*4 + 0x99aec0] */ r_eax = R32((u32)(r_eax*4+0x99aec0u));
    /* 00886594: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_008865e4:; BB(0x008865e4);
    /* 008865e4: mov eax, edi */ r_eax = r_edi;
    /* 008865e6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865e7: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865e9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865ea: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008865ee: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 008865f1: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 008865f4: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 008865f7: mov eax, edi */ r_eax = r_edi;
    /* 008865f9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865fa: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865fc: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865fd: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886601: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886604: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 00886607: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088660a: mov eax, edi */ r_eax = r_edi;
    /* 0088660c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088660d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0088660f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886610: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886614: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886617: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 0088661a: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088661d: mov edx, ebp */ r_edx = r_ebp;
    /* 0088661f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886620: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00886624: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00886627: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0088662a: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 0088662d: jmp 0x88643e */ goto L_0088643e;
L_00886632:; BB(0x00886632);
    /* 00886632: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886636: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088663b: jmp 0x88656a */ goto L_0088656a;
L_00886640:; BB(0x00886640);
    /* 00886640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886642: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00886645: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886649: jmp 0x886493 */ goto L_00886493;
L_0088664e:; BB(0x0088664e);
    /* 0088664e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886657: ret  */ FN_RET(0x008865e4); r_esp += 4; return;
L_008867d1:; BB(0x008867d1);
    /* 008867d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867dd: ret  */ FN_RET(0x008865e4); r_esp += 4; return;
}

void f_008865f7(void)
{
    FN_ENTER(0x008865f7);
    goto L_008865f7;
L_0088643e:; BB(0x0088643e);
    /* 0088643e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886442: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886444: jge 0x88664e */ if ((fS==fO)) goto L_0088664e;
L_0088644a:; BB(0x0088644a);
    /* 0088644a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088644d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886450: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886455: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88645au); f_00877bcc();
    /* 0088645a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088645f: jl 0x886640 */ if ((fS!=fO)) goto L_00886640;
L_00886465:; BB(0x00886465);
    /* 00886465: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886468: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088646b: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886470: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00886474: je 0x88654d */ if (fZ) goto L_0088654d;
L_0088647a:; BB(0x0088647a);
    /* 0088647a: mov ebx, eax */ r_ebx = r_eax;
    /* 0088647c: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088647f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886485: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00886488: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088648d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088648f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00886493:; BB(0x00886493);
    /* 00886493: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886494: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886499: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88649eu); f_00877bcc();
    /* 0088649e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864a3: jge 0x8864c5 */ if ((fS==fO)) goto L_008864c5;
L_008864a5:; BB(0x008864a5);
    /* 008864a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008864a9:; BB(0x008864a9);
    /* 008864a9: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864ac: jle 0x886632 */ if ((fZ||fS!=fO)) goto L_00886632;
L_008864b2:; BB(0x008864b2);
    /* 008864b2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008864b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b5: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8864bau); f_00877bcc();
    /* 008864ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864bf: jl 0x8864a9 */ if ((fS!=fO)) goto L_008864a9;
L_008864c1:; BB(0x008864c1);
    /* 008864c1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008864c5:; BB(0x008864c5);
    /* 008864c5: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8864cau); f_008867ec();
    /* 008864ca: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008864ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008864d0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864d3: jle 0x88651d */ if ((fZ||fS!=fO)) goto L_0088651d;
L_008864d5:; BB(0x008864d5);
    /* 008864d5: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008864d8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008864dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008864e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008864e4:; BB(0x008864e4);
    /* 008864e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008864e6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008864e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864eb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864ed: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008864f0: jae 0x8864f9 */ if (!fC) goto L_008864f9;
L_008864f2:; BB(0x008864f2);
    /* 008864f2: mov edi, 1 */ r_edi = 0x1u;
    /* 008864f7: jmp 0x8864fb */ goto L_008864fb;
L_008864f9:; BB(0x008864f9);
    /* 008864f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008864fb:; BB(0x008864fb);
    /* 008864fb: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008864fe: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886500: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886502: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886504: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886506: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886508: mov edx, ebp */ r_edx = r_ebp;
    /* 0088650a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088650c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088650f: jg 0x8864e4 */ if ((!fZ&&fS==fO)) goto L_008864e4;
L_00886511:; BB(0x00886511);
    /* 00886511: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00886515: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886519: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088651d:; BB(0x0088651d);
    /* 0088651d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886520: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886524: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886526: jg 0x886538 */ if ((!fZ&&fS==fO)) goto L_00886538;
L_00886528:; BB(0x00886528);
    /* 00886528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886529: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088652d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088652e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886533u); f_00877c74();
    /* 00886533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886536: jmp 0x88656a */ goto L_0088656a;
L_00886538:; BB(0x00886538);
    /* 00886538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886539: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088653d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088653e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886543u); f_00877c74();
    /* 00886543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886546: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088654b: jmp 0x88656a */ goto L_0088656a;
L_0088654d:; BB(0x0088654d);
    /* 0088654d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886550: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886556: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088655a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088655b: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886560u); f_00877c74();
    /* 00886560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886563: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00886567: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088656a:; BB(0x0088656a);
    /* 0088656a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088656d: je 0x8867d1 */ if (fZ) goto L_008867d1;
L_00886573:; BB(0x00886573);
    /* 00886573: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00886575: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886578: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088657b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088657d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00886580: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886582: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886584: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00886587: ja 0x88643e */ if ((!fC&&!fZ)) goto L_0088643e;
L_0088658d:; BB(0x0088658d);
    /* 0088658d: mov eax, dword ptr [eax*4 + 0x99aec0] */ r_eax = R32((u32)(r_eax*4+0x99aec0u));
    /* 00886594: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_008865f7:; BB(0x008865f7);
    /* 008865f7: mov eax, edi */ r_eax = r_edi;
    /* 008865f9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008865fa: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008865fc: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008865fd: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886601: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886604: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 00886607: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088660a: mov eax, edi */ r_eax = r_edi;
    /* 0088660c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088660d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0088660f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886610: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886614: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886617: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 0088661a: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088661d: mov edx, ebp */ r_edx = r_ebp;
    /* 0088661f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886620: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00886624: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00886627: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0088662a: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 0088662d: jmp 0x88643e */ goto L_0088643e;
L_00886632:; BB(0x00886632);
    /* 00886632: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886636: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088663b: jmp 0x88656a */ goto L_0088656a;
L_00886640:; BB(0x00886640);
    /* 00886640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886642: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00886645: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886649: jmp 0x886493 */ goto L_00886493;
L_0088664e:; BB(0x0088664e);
    /* 0088664e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886657: ret  */ FN_RET(0x008865f7); r_esp += 4; return;
L_008867d1:; BB(0x008867d1);
    /* 008867d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867dd: ret  */ FN_RET(0x008865f7); r_esp += 4; return;
}

void f_0088660a(void)
{
    FN_ENTER(0x0088660a);
    goto L_0088660a;
L_0088643e:; BB(0x0088643e);
    /* 0088643e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886442: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886444: jge 0x88664e */ if ((fS==fO)) goto L_0088664e;
L_0088644a:; BB(0x0088644a);
    /* 0088644a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088644d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886450: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886455: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88645au); f_00877bcc();
    /* 0088645a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088645f: jl 0x886640 */ if ((fS!=fO)) goto L_00886640;
L_00886465:; BB(0x00886465);
    /* 00886465: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886468: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088646b: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886470: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00886474: je 0x88654d */ if (fZ) goto L_0088654d;
L_0088647a:; BB(0x0088647a);
    /* 0088647a: mov ebx, eax */ r_ebx = r_eax;
    /* 0088647c: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088647f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886485: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00886488: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088648d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088648f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00886493:; BB(0x00886493);
    /* 00886493: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886494: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886499: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88649eu); f_00877bcc();
    /* 0088649e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864a3: jge 0x8864c5 */ if ((fS==fO)) goto L_008864c5;
L_008864a5:; BB(0x008864a5);
    /* 008864a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008864a9:; BB(0x008864a9);
    /* 008864a9: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864ac: jle 0x886632 */ if ((fZ||fS!=fO)) goto L_00886632;
L_008864b2:; BB(0x008864b2);
    /* 008864b2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008864b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b5: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8864bau); f_00877bcc();
    /* 008864ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864bf: jl 0x8864a9 */ if ((fS!=fO)) goto L_008864a9;
L_008864c1:; BB(0x008864c1);
    /* 008864c1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008864c5:; BB(0x008864c5);
    /* 008864c5: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8864cau); f_008867ec();
    /* 008864ca: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008864ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008864d0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864d3: jle 0x88651d */ if ((fZ||fS!=fO)) goto L_0088651d;
L_008864d5:; BB(0x008864d5);
    /* 008864d5: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008864d8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008864dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008864e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008864e4:; BB(0x008864e4);
    /* 008864e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008864e6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008864e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864eb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864ed: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008864f0: jae 0x8864f9 */ if (!fC) goto L_008864f9;
L_008864f2:; BB(0x008864f2);
    /* 008864f2: mov edi, 1 */ r_edi = 0x1u;
    /* 008864f7: jmp 0x8864fb */ goto L_008864fb;
L_008864f9:; BB(0x008864f9);
    /* 008864f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008864fb:; BB(0x008864fb);
    /* 008864fb: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008864fe: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886500: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886502: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886504: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886506: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886508: mov edx, ebp */ r_edx = r_ebp;
    /* 0088650a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088650c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088650f: jg 0x8864e4 */ if ((!fZ&&fS==fO)) goto L_008864e4;
L_00886511:; BB(0x00886511);
    /* 00886511: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00886515: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886519: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088651d:; BB(0x0088651d);
    /* 0088651d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886520: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886524: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886526: jg 0x886538 */ if ((!fZ&&fS==fO)) goto L_00886538;
L_00886528:; BB(0x00886528);
    /* 00886528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886529: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088652d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088652e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886533u); f_00877c74();
    /* 00886533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886536: jmp 0x88656a */ goto L_0088656a;
L_00886538:; BB(0x00886538);
    /* 00886538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886539: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088653d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088653e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886543u); f_00877c74();
    /* 00886543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886546: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088654b: jmp 0x88656a */ goto L_0088656a;
L_0088654d:; BB(0x0088654d);
    /* 0088654d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886550: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886556: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088655a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088655b: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886560u); f_00877c74();
    /* 00886560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886563: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00886567: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088656a:; BB(0x0088656a);
    /* 0088656a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088656d: je 0x8867d1 */ if (fZ) goto L_008867d1;
L_00886573:; BB(0x00886573);
    /* 00886573: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00886575: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886578: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088657b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088657d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00886580: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886582: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886584: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00886587: ja 0x88643e */ if ((!fC&&!fZ)) goto L_0088643e;
L_0088658d:; BB(0x0088658d);
    /* 0088658d: mov eax, dword ptr [eax*4 + 0x99aec0] */ r_eax = R32((u32)(r_eax*4+0x99aec0u));
    /* 00886594: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0088660a:; BB(0x0088660a);
    /* 0088660a: mov eax, edi */ r_eax = r_edi;
    /* 0088660c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088660d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0088660f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886610: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00886614: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 00886617: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 0088661a: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0088661d: mov edx, ebp */ r_edx = r_ebp;
    /* 0088661f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886620: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00886624: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00886627: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0088662a: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 0088662d: jmp 0x88643e */ goto L_0088643e;
L_00886632:; BB(0x00886632);
    /* 00886632: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886636: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088663b: jmp 0x88656a */ goto L_0088656a;
L_00886640:; BB(0x00886640);
    /* 00886640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886642: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00886645: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886649: jmp 0x886493 */ goto L_00886493;
L_0088664e:; BB(0x0088664e);
    /* 0088664e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886657: ret  */ FN_RET(0x0088660a); r_esp += 4; return;
L_008867d1:; BB(0x008867d1);
    /* 008867d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867dd: ret  */ FN_RET(0x0088660a); r_esp += 4; return;
}

void f_0088661d(void)
{
    FN_ENTER(0x0088661d);
    goto L_0088661d;
L_0088643e:; BB(0x0088643e);
    /* 0088643e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886442: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886444: jge 0x88664e */ if ((fS==fO)) goto L_0088664e;
L_0088644a:; BB(0x0088644a);
    /* 0088644a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0088644d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886450: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886455: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88645au); f_00877bcc();
    /* 0088645a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088645f: jl 0x886640 */ if ((fS!=fO)) goto L_00886640;
L_00886465:; BB(0x00886465);
    /* 00886465: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00886468: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0088646b: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886470: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00886474: je 0x88654d */ if (fZ) goto L_0088654d;
L_0088647a:; BB(0x0088647a);
    /* 0088647a: mov ebx, eax */ r_ebx = r_eax;
    /* 0088647c: sar ebx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088647f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886485: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00886488: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088648d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088648f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00886493:; BB(0x00886493);
    /* 00886493: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886494: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886499: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x88649eu); f_00877bcc();
    /* 0088649e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864a3: jge 0x8864c5 */ if ((fS==fO)) goto L_008864c5;
L_008864a5:; BB(0x008864a5);
    /* 008864a5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_008864a9:; BB(0x008864a9);
    /* 008864a9: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864ac: jle 0x886632 */ if ((fZ||fS!=fO)) goto L_00886632;
L_008864b2:; BB(0x008864b2);
    /* 008864b2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008864b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008864b5: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8864bau); f_00877bcc();
    /* 008864ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008864bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008864bf: jl 0x8864a9 */ if ((fS!=fO)) goto L_008864a9;
L_008864c1:; BB(0x008864c1);
    /* 008864c1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_008864c5:; BB(0x008864c5);
    /* 008864c5: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8864cau); f_008867ec();
    /* 008864ca: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008864ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008864d0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008864d3: jle 0x88651d */ if ((fZ||fS!=fO)) goto L_0088651d;
L_008864d5:; BB(0x008864d5);
    /* 008864d5: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008864d8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008864dc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008864e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008864e4:; BB(0x008864e4);
    /* 008864e4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008864e6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 008864e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864eb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008864ed: cmp eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008864f0: jae 0x8864f9 */ if (!fC) goto L_008864f9;
L_008864f2:; BB(0x008864f2);
    /* 008864f2: mov edi, 1 */ r_edi = 0x1u;
    /* 008864f7: jmp 0x8864fb */ goto L_008864fb;
L_008864f9:; BB(0x008864f9);
    /* 008864f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008864fb:; BB(0x008864fb);
    /* 008864fb: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 008864fe: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886500: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886502: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886504: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886506: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886508: mov edx, ebp */ r_edx = r_ebp;
    /* 0088650a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088650c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088650f: jg 0x8864e4 */ if ((!fZ&&fS==fO)) goto L_008864e4;
L_00886511:; BB(0x00886511);
    /* 00886511: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00886515: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886519: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088651d:; BB(0x0088651d);
    /* 0088651d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00886520: movsx eax, byte ptr [ebx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax));
    /* 00886524: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886526: jg 0x886538 */ if ((!fZ&&fS==fO)) goto L_00886538;
L_00886528:; BB(0x00886528);
    /* 00886528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886529: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088652d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088652e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886533u); f_00877c74();
    /* 00886533: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886536: jmp 0x88656a */ goto L_0088656a;
L_00886538:; BB(0x00886538);
    /* 00886538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886539: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088653d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088653e: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886543u); f_00877c74();
    /* 00886543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886546: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088654b: jmp 0x88656a */ goto L_0088656a;
L_0088654d:; BB(0x0088654d);
    /* 0088654d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00886550: movsx ecx, byte ptr [eax + edx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 00886555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886556: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0088655a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088655b: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886560u); f_00877c74();
    /* 00886560: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886563: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00886567: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
L_0088656a:; BB(0x0088656a);
    /* 0088656a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088656d: je 0x8867d1 */ if (fZ) goto L_008867d1;
L_00886573:; BB(0x00886573);
    /* 00886573: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00886575: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886578: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088657b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088657d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00886580: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886582: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00886584: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00886587: ja 0x88643e */ if ((!fC&&!fZ)) goto L_0088643e;
L_0088658d:; BB(0x0088658d);
    /* 0088658d: mov eax, dword ptr [eax*4 + 0x99aec0] */ r_eax = R32((u32)(r_eax*4+0x99aec0u));
    /* 00886594: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0088661d:; BB(0x0088661d);
    /* 0088661d: mov edx, ebp */ r_edx = r_ebp;
    /* 0088661f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886620: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00886624: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00886627: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0088662a: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 0088662d: jmp 0x88643e */ goto L_0088643e;
L_00886632:; BB(0x00886632);
    /* 00886632: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00886636: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0088663b: jmp 0x88656a */ goto L_0088656a;
L_00886640:; BB(0x00886640);
    /* 00886640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886642: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00886645: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00886649: jmp 0x886493 */ goto L_00886493;
L_0088664e:; BB(0x0088664e);
    /* 0088664e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886650: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886653: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886657: ret  */ FN_RET(0x0088661d); r_esp += 4; return;
L_008867d1:; BB(0x008867d1);
    /* 008867d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008867d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008867d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008867da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008867db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008867dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008867dd: ret  */ FN_RET(0x0088661d); r_esp += 4; return;
}

void f_008867ec(void) /* sub_8867EC */
{
    FN_ENTER(0x008867ec);
    /* 008867ec: mov edx, eax */ r_edx = r_eax;
    /* 008867ee: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008867f1: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008867f4: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008867f6: mov ecx, edx */ r_ecx = r_edx;
    /* 008867f8: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008867fb: and ecx, 0xff00ff */ {  u32 a = r_ecx; u32 b = 0xff00ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00886801: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00886804: and edx, 0xff00ff00 */ {  u32 a = r_edx; u32 b = 0xff00ff00u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0088680a: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0088680c: mov eax, ecx */ r_eax = r_ecx;
    /* 0088680e: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00886811: and eax, 0xf0f0f0f */ {  u32 a = r_eax; u32 b = 0xf0f0f0fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00886816: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00886819: and ecx, 0xf0f0f0f0 */ {  u32 a = r_ecx; u32 b = 0xf0f0f0f0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0088681f: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00886821: mov edx, eax */ r_edx = r_eax;
    /* 00886823: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00886826: and edx, 0x33333333 */ {  u32 a = r_edx; u32 b = 0x33333333u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0088682c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088682e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00886830: and eax, 0xcccccccc */ {  u32 a = r_eax; u32 b = 0xccccccccu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00886835: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00886837: mov eax, edx */ r_eax = r_edx;
    /* 00886839: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088683b: and eax, 0x55555555 */ {  u32 a = r_eax; u32 b = 0x55555555u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00886840: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00886842: and edx, 0xaaaaaaaa */ {  u32 a = r_edx; u32 b = 0xaaaaaaaau; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00886848: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088684a: ret  */ FN_RET(0x008867ec); r_esp += 4; return;
}

void f_0088684c(void) /* sub_88684C */
{
    FN_ENTER(0x0088684c);
    /* 0088684c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088684d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088684e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088684f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886850: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00886853: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00886857: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0088685b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088685d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088685f: jle 0x8869c8 */ if ((fZ||fS!=fO)) goto L_008869c8;
L_00886865:; BB(0x00886865);
    /* 00886865: mov ebx, eax */ r_ebx = r_eax;
    /* 00886867: mov ebp, edx */ r_ebp = r_edx;
L_00886869:; BB(0x00886869);
    /* 00886869: mov edi, dword ptr [ebp + 0x28] */ r_edi = R32((u32)(r_ebp+0x28u));
    /* 0088686c: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088686f: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00886873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886874: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x886879u); f_00877bcc();
    /* 00886879: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088687c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088687e: jl 0x8869dd */ if ((fS!=fO)) goto L_008869dd;
L_00886884:; BB(0x00886884);
    /* 00886884: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00886887: mov esi, dword ptr [ecx + eax*4] */ r_esi = R32((u32)(r_ecx+r_eax*4));
    /* 0088688a: test esi, 0x80000000 */ {  u32 a = r_esi; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886890: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00886894: je 0x886971 */ if (fZ) goto L_00886971;
L_0088689a:; BB(0x0088689a);
    /* 0088689a: mov ecx, esi */ r_ecx = r_esi;
    /* 0088689c: mov esi, ecx */ r_esi = r_ecx;
    /* 0088689e: sar esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008868a1: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008868a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008868aa: and ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008868b0: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008868b2: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_008868b6:; BB(0x008868b6);
    /* 008868b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008868b7: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 008868bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008868bc: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8868c1u); f_00877bcc();
    /* 008868c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008868c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008868c6: jge 0x8868e8 */ if ((fS==fO)) goto L_008868e8;
L_008868c8:; BB(0x008868c8);
    /* 008868c8: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_008868cc:; BB(0x008868cc);
    /* 008868cc: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008868cf: jle 0x8869d2 */ if ((fZ||fS!=fO)) goto L_008869d2;
L_008868d5:; BB(0x008868d5);
    /* 008868d5: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008868d6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008868d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008868d8: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x8868ddu); f_00877bcc();
    /* 008868dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008868e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008868e2: jl 0x8868cc */ if ((fS!=fO)) goto L_008868cc;
L_008868e4:; BB(0x008868e4);
    /* 008868e4: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_008868e8:; BB(0x008868e8);
    /* 008868e8: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x8868edu); f_008867ec();
    /* 008868ed: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008868f1: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008868f3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008868f6: jle 0x886941 */ if ((fZ||fS!=fO)) goto L_00886941;
L_008868f8:; BB(0x008868f8);
    /* 008868f8: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008868fb: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 008868ff: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00886903: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_00886907:; BB(0x00886907);
    /* 00886907: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00886909: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 0088690c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088690e: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886910: cmp eax, dword ptr [ebp + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00886914: jae 0x88691d */ if (!fC) goto L_0088691d;
L_00886916:; BB(0x00886916);
    /* 00886916: mov edi, 1 */ r_edi = 0x1u;
    /* 0088691b: jmp 0x88691f */ goto L_0088691f;
L_0088691d:; BB(0x0088691d);
    /* 0088691d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0088691f:; BB(0x0088691f);
    /* 0088691f: lea ebp, [edi - 1] */ r_ebp = (u32)(r_edi+0xffffffffu);
    /* 00886922: and ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00886924: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00886926: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00886928: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0088692a: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088692c: mov edx, ebx */ r_edx = r_ebx;
    /* 0088692e: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00886930: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886933: jg 0x886907 */ if ((!fZ&&fS==fO)) goto L_00886907;
L_00886935:; BB(0x00886935);
    /* 00886935: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886939: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0088693d: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_00886941:; BB(0x00886941);
    /* 00886941: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00886944: movsx ecx, byte ptr [esi + ecx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+r_ecx));
    /* 00886948: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088694a: jg 0x88695c */ if ((!fZ&&fS==fO)) goto L_0088695c;
L_0088694c:; BB(0x0088694c);
    /* 0088694c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088694d: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00886951: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886952: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886957u); f_00877c74();
    /* 00886957: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088695a: jmp 0x886992 */ goto L_00886992;
L_0088695c:; BB(0x0088695c);
    /* 0088695c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088695d: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00886961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886962: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886967u); f_00877c74();
    /* 00886967: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088696a: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0088696f: jmp 0x886992 */ goto L_00886992;
L_00886971:; BB(0x00886971);
    /* 00886971: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 00886974: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00886978: movsx edi, byte ptr [ecx + esi - 1] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ecx+r_esi+0xffffffffu));
    /* 0088697d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088697e: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00886982: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886983: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886988u); f_00877c74();
    /* 00886988: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088698b: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0088698f: lea esi, [ecx - 1] */ r_esi = (u32)(r_ecx+0xffffffffu);
L_00886992:; BB(0x00886992);
    /* 00886992: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886995: je 0x8869eb */ if (fZ) goto L_008869eb;
L_00886997:; BB(0x00886997);
    /* 00886997: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0088699a: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0088699d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088699f: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008869a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008869a4: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008869a7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008869a9: jle 0x8869bc */ if ((fZ||fS!=fO)) goto L_008869bc;
L_008869ab:; BB(0x008869ab);
    /* 008869ab: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_008869af:; BB(0x008869af);
    /* 008869af: mov esi, dword ptr [eax + ecx*4] */ r_esi = R32((u32)(r_eax+r_ecx*4));
    /* 008869b2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008869b3: mov dword ptr [edi + ebx*4], esi */ W32((u32)(r_edi+r_ebx*4), r_esi);
    /* 008869b6: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008869b7: cmp ecx, dword ptr [ebp] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008869ba: jl 0x8869af */ if ((fS!=fO)) goto L_008869af;
L_008869bc:; BB(0x008869bc);
    /* 008869bc: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 008869c0: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008869c2: jl 0x886869 */ if ((fS!=fO)) goto L_00886869;
L_008869c8:; BB(0x008869c8);
    /* 008869c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008869ca: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008869cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008869ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008869cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008869d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008869d1: ret  */ FN_RET(0x0088684c); r_esp += 4; return;
L_008869d2:; BB(0x008869d2);
    /* 008869d2: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 008869d6: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 008869db: jmp 0x886992 */ goto L_00886992;
L_008869dd:; BB(0x008869dd);
    /* 008869dd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008869df: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008869e2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008869e6: jmp 0x8868b6 */ goto L_008868b6;
L_008869eb:; BB(0x008869eb);
    /* 008869eb: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008869f0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008869f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008869f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008869f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008869f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008869f7: ret  */ FN_RET(0x0088684c); r_esp += 4; return;
}

void f_008869f8(void) /* sub_8869F8 */
{
    FN_ENTER(0x008869f8);
    /* 008869f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008869f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008869fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008869fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008869fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008869ff: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00886a03: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00886a07: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00886a09: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886a0d: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00886a11: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00886a12: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00886a12, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00886a12, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00886a14: mov ecx, eax */ r_ecx = r_eax;
    /* 00886a16: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00886a1a: add eax, dword ptr [esp + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00886a1e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00886a1f: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00886a1f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00886a1f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00886a21: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886a23: jge 0x886ba6 */ if ((fS==fO)) goto L_00886ba6;
L_00886a29:; BB(0x00886a29);
    /* 00886a29: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00886a2d: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_00886a31:; BB(0x00886a31);
    /* 00886a31: mov ebx, dword ptr [ebp + 0x28] */ r_ebx = R32((u32)(r_ebp+0x28u));
    /* 00886a34: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886a37: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00886a3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886a3c: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x886a41u); f_00877bcc();
    /* 00886a41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886a44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886a46: jl 0x886bb7 */ if ((fS!=fO)) goto L_00886bb7;
L_00886a4c:; BB(0x00886a4c);
    /* 00886a4c: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00886a4f: mov edi, dword ptr [edx + eax*4] */ r_edi = R32((u32)(r_edx+r_eax*4));
    /* 00886a52: test edi, 0x80000000 */ {  u32 a = r_edi; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886a58: je 0x886b26 */ if (fZ) goto L_00886b26;
L_00886a5e:; BB(0x00886a5e);
    /* 00886a5e: mov esi, edi */ r_esi = r_edi;
    /* 00886a60: sar esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00886a63: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00886a69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00886a6c: and edi, 0x7fff */ {  u32 a = r_edi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00886a72: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00886a74: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00886a78:; BB(0x00886a78);
    /* 00886a78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886a79: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00886a7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886a7e: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x886a83u); f_00877bcc();
    /* 00886a83: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886a86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886a88: jge 0x886aa6 */ if ((fS==fO)) goto L_00886aa6;
L_00886a8a:; BB(0x00886a8a);
    /* 00886a8a: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
L_00886a8e:; BB(0x00886a8e);
    /* 00886a8e: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886a91: jle 0x886bb0 */ if ((fZ||fS!=fO)) goto L_00886bb0;
L_00886a97:; BB(0x00886a97);
    /* 00886a97: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00886a98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886a99: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886a9a: call 0x877bcc */ r_esp -= 4; W32(r_esp, 0x886a9fu); f_00877bcc();
    /* 00886a9f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886aa4: jl 0x886a8e */ if ((fS!=fO)) goto L_00886a8e;
L_00886aa6:; BB(0x00886aa6);
    /* 00886aa6: call 0x8867ec */ r_esp -= 4; W32(r_esp, 0x886aabu); f_008867ec();
    /* 00886aab: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00886aaf: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00886ab1: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886ab4: jle 0x886af6 */ if ((fZ||fS!=fO)) goto L_00886af6;
L_00886ab6:; BB(0x00886ab6);
    /* 00886ab6: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00886ab9: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00886abd: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
L_00886ac1:; BB(0x00886ac1);
    /* 00886ac1: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00886ac3: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00886ac6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886ac8: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886aca: cmp eax, dword ptr [ebx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00886acd: jae 0x886ad6 */ if (!fC) goto L_00886ad6;
L_00886acf:; BB(0x00886acf);
    /* 00886acf: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00886ad4: jmp 0x886ad8 */ goto L_00886ad8;
L_00886ad6:; BB(0x00886ad6);
    /* 00886ad6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00886ad8:; BB(0x00886ad8);
    /* 00886ad8: lea ebx, [ebp - 1] */ r_ebx = (u32)(r_ebp+0xffffffffu);
    /* 00886adb: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00886add: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00886adf: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00886ae1: and ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00886ae3: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00886ae5: mov ecx, edx */ r_ecx = r_edx;
    /* 00886ae7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00886ae9: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886aec: jg 0x886ac1 */ if ((!fZ&&fS==fO)) goto L_00886ac1;
L_00886aee:; BB(0x00886aee);
    /* 00886aee: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00886af2: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
L_00886af6:; BB(0x00886af6);
    /* 00886af6: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00886af9: movsx eax, byte ptr [esi + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+r_eax));
    /* 00886afd: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886aff: jg 0x886b11 */ if ((!fZ&&fS==fO)) goto L_00886b11;
L_00886b01:; BB(0x00886b01);
    /* 00886b01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886b02: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00886b06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886b07: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886b0cu); f_00877c74();
    /* 00886b0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886b0f: jmp 0x886b3f */ goto L_00886b3f;
L_00886b11:; BB(0x00886b11);
    /* 00886b11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886b12: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00886b16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886b17: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886b1cu); f_00877c74();
    /* 00886b1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886b1f: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00886b24: jmp 0x886b3f */ goto L_00886b3f;
L_00886b26:; BB(0x00886b26);
    /* 00886b26: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00886b29: movsx edx, byte ptr [edi + eax - 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+r_eax+0xffffffffu));
    /* 00886b2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00886b2f: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00886b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886b34: call 0x877c74 */ r_esp -= 4; W32(r_esp, 0x886b39u); f_00877c74();
    /* 00886b39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886b3c: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
L_00886b3f:; BB(0x00886b3f);
    /* 00886b3f: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886b42: je 0x886bc5 */ if (fZ) goto L_00886bc5;
L_00886b48:; BB(0x00886b48);
    /* 00886b48: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00886b4b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00886b4e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00886b50: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00886b53: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00886b55: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00886b58: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00886b5a: jle 0x886b96 */ if ((fZ||fS!=fO)) goto L_00886b96;
L_00886b5c:; BB(0x00886b5c);
    /* 00886b5c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00886b60: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00886b64: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00886b68: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_00886b6c:; BB(0x00886b6c);
    /* 00886b6c: mov edi, dword ptr [ebp + ecx*4] */ r_edi = R32((u32)(r_ebp+r_ecx*4));
    /* 00886b70: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00886b71: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886b73: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00886b76: fadd dword ptr [eax + esi*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_esi*4));
    /* 00886b79: fstp dword ptr [edi + edx*4] */ W_F32((u32)(r_edi+r_edx*4), ST(0)); FPOP();
    /* 00886b7c: jne 0x886b81 */ if (!fZ) goto L_00886b81;
L_00886b7e:; BB(0x00886b7e);
    /* 00886b7e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00886b80: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00886b81:; BB(0x00886b81);
    /* 00886b81: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00886b82: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00886b86: cmp esi, dword ptr [edi] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886b88: jl 0x886b6c */ if ((fS!=fO)) goto L_00886b6c;
L_00886b8a:; BB(0x00886b8a);
    /* 00886b8a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00886b8e: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00886b92: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
L_00886b96:; BB(0x00886b96);
    /* 00886b96: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00886b9a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00886b9e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886ba0: jl 0x886a31 */ if ((fS!=fO)) goto L_00886a31;
L_00886ba6:; BB(0x00886ba6);
    /* 00886ba6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886ba8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886bab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886bac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886bad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886bae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886baf: ret  */ FN_RET(0x008869f8); r_esp += 4; return;
L_00886bb0:; BB(0x00886bb0);
    /* 00886bb0: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00886bb5: jmp 0x886b3f */ goto L_00886b3f;
L_00886bb7:; BB(0x00886bb7);
    /* 00886bb7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00886bb9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00886bbc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00886bc0: jmp 0x886a78 */ goto L_00886a78;
L_00886bc5:; BB(0x00886bc5);
    /* 00886bc5: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00886bca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886bcd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886bce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886bcf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886bd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886bd1: ret  */ FN_RET(0x008869f8); r_esp += 4; return;
}

void f_00886bd4(void)
{
    FN_ENTER(0x00886bd4);
    /* 00886bd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886bd5: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00886bd9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00886bdb: je 0x886c2c */ if (fZ) goto L_00886c2c;
L_00886bdd:; BB(0x00886bdd);
    /* 00886bdd: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00886be0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886be2: je 0x886c0c */ if (fZ) goto L_00886c0c;
L_00886be4:; BB(0x00886be4);
    /* 00886be4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00886be6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886be8: je 0x886bf4 */ if (fZ) goto L_00886bf4;
L_00886bea:; BB(0x00886bea);
    /* 00886bea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886beb: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x886bf0u); f_00858882();
    /* 00886bf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00886bf1: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
L_00886bf4:; BB(0x00886bf4);
    /* 00886bf4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00886bf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886bf9: je 0x886c05 */ if (fZ) goto L_00886c05;
L_00886bfb:; BB(0x00886bfb);
    /* 00886bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886bfc: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x886c01u); f_00858882();
    /* 00886c01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00886c02: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
L_00886c05:; BB(0x00886c05);
    /* 00886c05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00886c06: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x886c0bu); f_00858882();
    /* 00886c0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00886c0c:; BB(0x00886c0c);
    /* 00886c0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886c0e: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00886c10: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00886c13: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00886c16: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00886c19: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 00886c1c: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 00886c1f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00886c22: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00886c25: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886c26: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x886c2bu); f_00858882();
    /* 00886c2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00886c2c:; BB(0x00886c2c);
    /* 00886c2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886c2d: ret  */ FN_RET(0x00886bd4); r_esp += 4; return;
}

void f_00886c30(void) /* sub_886C30 */
{
    FN_ENTER(0x00886c30);
    /* 00886c30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886c31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886c32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00886c33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00886c36: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00886c3a: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00886c3e: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 00886c41: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00886c43: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x886c48u); f_00859c55();
    /* 00886c48: mov ebp, eax */ r_ebp = r_eax;
    /* 00886c4a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00886c4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886c4d: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x886c52u); f_00877c98();
    /* 00886c52: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00886c55: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00886c57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886c58: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x886c5du); f_00877c98();
    /* 00886c5d: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00886c60: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00886c62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886c63: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x886c68u); f_00877c98();
    /* 00886c68: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00886c6b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00886c6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886c6e: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x886c73u); f_00877c98();
    /* 00886c73: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00886c76: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00886c78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886c79: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x886c7eu); f_00877c98();
    /* 00886c7e: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00886c81: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00886c83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886c84: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x886c89u); f_00877c98();
    /* 00886c89: mov edx, eax */ r_edx = r_eax;
    /* 00886c8b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886c8e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00886c8f: cmp dword ptr [ebp], 0 */ {  u32 a = R32((u32)(r_ebp)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886c93: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00886c96: jle 0x886ce2 */ if ((fZ||fS!=fO)) goto L_00886ce2;
L_00886c98:; BB(0x00886c98);
    /* 00886c98: cmp dword ptr [ebp + 4], 0 */ {  u32 a = R32((u32)(r_ebp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886c9c: jle 0x886ce2 */ if ((fZ||fS!=fO)) goto L_00886ce2;
L_00886c9e:; BB(0x00886c9e);
    /* 00886c9e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886ca2: jle 0x886ce2 */ if ((fZ||fS!=fO)) goto L_00886ce2;
L_00886ca4:; BB(0x00886ca4);
    /* 00886ca4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00886ca6: jle 0x886ce2 */ if ((fZ||fS!=fO)) goto L_00886ce2;
L_00886ca8:; BB(0x00886ca8);
    /* 00886ca8: mov eax, 0 */ r_eax = 0x0u;
    /* 00886cad: jle 0x886cd9 */ if ((fZ||fS!=fO)) goto L_00886cd9;
L_00886caf:; BB(0x00886caf);
    /* 00886caf: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00886cb3: mov ebx, esi */ r_ebx = r_esi;
    /* 00886cb5: mov esi, eax */ r_esi = r_eax;
L_00886cb7:; BB(0x00886cb7);
    /* 00886cb7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00886cb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886cba: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x886cbfu); f_00877c98();
    /* 00886cbf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886cc2: mov dword ptr [ebp + esi*4 + 0x18], eax */ W32((u32)(r_ebp+r_esi*4+0x18u), r_eax);
    /* 00886cc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00886cc8: jl 0x886cf8 */ if ((fS!=fO)) goto L_00886cf8;
L_00886cca:; BB(0x00886cca);
    /* 00886cca: cmp eax, dword ptr [edi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886ccd: jge 0x886cf2 */ if ((fS==fO)) goto L_00886cf2;
L_00886ccf:; BB(0x00886ccf);
    /* 00886ccf: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00886cd0: cmp esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886cd3: jl 0x886cb7 */ if ((fS!=fO)) goto L_00886cb7;
L_00886cd5:; BB(0x00886cd5);
    /* 00886cd5: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_00886cd9:; BB(0x00886cd9);
    /* 00886cd9: mov eax, ebp */ r_eax = r_ebp;
    /* 00886cdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886cde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886cdf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886ce0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886ce1: ret  */ FN_RET(0x00886c30); r_esp += 4; return;
L_00886ce2:; BB(0x00886ce2);
    /* 00886ce2: mov eax, ebp */ r_eax = r_ebp;
    /* 00886ce4: call 0x886d04 */ r_esp -= 4; W32(r_esp, 0x886ce9u); f_00886d04();
    /* 00886ce9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886ceb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886cee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886cef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886cf0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886cf1: ret  */ FN_RET(0x00886c30); r_esp += 4; return;
L_00886cf2:; BB(0x00886cf2);
    /* 00886cf2: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00886cf6: jmp 0x886ce2 */ goto L_00886ce2;
L_00886cf8:; BB(0x00886cf8);
    /* 00886cf8: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00886cfc: jmp 0x886ce2 */ goto L_00886ce2;
}

void f_00886d00(void)
{
    FN_ENTER(0x00886d00);
    /* 00886d00: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00886d04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00886d06: je 0x886d58 */ if (fZ) goto L_00886d58;
L_00886d08:; BB(0x00886d08);
    /* 00886d08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00886d0a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00886d0c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00886d0f: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00886d12: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00886d15: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00886d18: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00886d1b: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00886d1e: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00886d21: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00886d24: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00886d27: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00886d2a: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00886d2d: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00886d30: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00886d33: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 00886d36: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 00886d39: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 00886d3c: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 00886d3f: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 00886d42: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 00886d45: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 00886d48: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 00886d4b: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 00886d4e: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 00886d51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886d52: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x886d57u); f_00858882();
    /* 00886d57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00886d58:; BB(0x00886d58);
    /* 00886d58: ret  */ FN_RET(0x00886d00); r_esp += 4; return;
}

void f_00886d04(void) /* sub_886D04 */
{
    FN_ENTER(0x00886d04);
    /* 00886d04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00886d06: je 0x886d58 */ if (fZ) goto L_00886d58;
L_00886d08:; BB(0x00886d08);
    /* 00886d08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00886d0a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00886d0c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00886d0f: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00886d12: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00886d15: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00886d18: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00886d1b: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00886d1e: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00886d21: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00886d24: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00886d27: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00886d2a: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00886d2d: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00886d30: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00886d33: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 00886d36: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 00886d39: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 00886d3c: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 00886d3f: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 00886d42: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 00886d45: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 00886d48: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 00886d4b: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 00886d4e: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 00886d51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886d52: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x886d57u); f_00858882();
    /* 00886d57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00886d58:; BB(0x00886d58);
    /* 00886d58: ret  */ FN_RET(0x00886d04); r_esp += 4; return;
}

void f_00886d5c(void) /* sub_886D5C */
{
    FN_ENTER(0x00886d5c);
    /* 00886d5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886d5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886d5e: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00886d62: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00886d64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00886d66: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x886d6bu); f_008587c7();
    /* 00886d6b: mov edi, eax */ r_edi = r_eax;
    /* 00886d6d: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00886d6f: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00886d72: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00886d75: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 00886d77: mov dword ptr [edi + 0x14], ebx */ W32((u32)(r_edi+0x14u), r_ebx);
    /* 00886d7a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00886d7c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00886d7e: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x886d83u); f_008587c7();
    /* 00886d83: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00886d86: mov eax, edi */ r_eax = r_edi;
    /* 00886d88: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886d8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886d8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886d8d: ret  */ FN_RET(0x00886d5c); r_esp += 4; return;
}

void f_00886d90(void) /* sub_886D90 */
{
    FN_ENTER(0x00886d90);
    /* 00886d90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886d91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886d92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00886d93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886d94: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00886d97: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00886d9b: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00886d9f: mov ebp, dword ptr [eax + 0x14] */ r_ebp = R32((u32)(r_eax+0x14u));
    /* 00886da2: lea edi, [ebx + 4] */ r_edi = (u32)(r_ebx+0x4u);
    /* 00886da5: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00886da8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886da9: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x886daeu); f_00877c98();
    /* 00886dae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886db1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00886db3: jle 0x886edb */ if ((fZ||fS!=fO)) goto L_00886edb;
L_00886db9:; BB(0x00886db9);
    /* 00886db9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00886dbc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00886dbf: mov eax, 1 */ r_eax = 0x1u;
    /* 00886dc4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00886dc7: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00886dc9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00886dca: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00886dce: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00886dd2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00886dd4: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 00886dd7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00886dd9: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00886ddd: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00886de0: call 0x884908 */ r_esp -= 4; W32(r_esp, 0x886de5u); f_00884908();
    /* 00886de5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886de6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886de7: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x886decu); f_00877c98();
    /* 00886dec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886def: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886df2: je 0x886edb */ if (fZ) goto L_00886edb;
L_00886df8:; BB(0x00886df8);
    /* 00886df8: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886dfb: jge 0x886edb */ if ((fS==fO)) goto L_00886edb;
L_00886e01:; BB(0x00886e01);
    /* 00886e01: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 00886e04: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00886e07: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00886e0a: mov ebp, dword ptr [ebp + eax*4 + 0x18] */ r_ebp = R32((u32)(r_ebp+r_eax*4+0x18u));
    /* 00886e0e: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 00886e12: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00886e14: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00886e16: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00886e18: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00886e1a: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00886e1c: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 00886e1f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886e21: mov eax, dword ptr [edx + 0xb20] */ r_eax = R32((u32)(r_edx+0xb20u));
    /* 00886e27: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886e29: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00886e2c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00886e30: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00886e34: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00886e37: fld dword ptr [0x99af50] */ FPUSH(R_F32((u32)(0x99af50u)));
    /* 00886e3d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00886e3f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00886e41: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00886e45: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00886e47: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00886e49: lea eax, [eax + edx + 4] */ r_eax = (u32)(r_eax+r_edx+0x4u);
    /* 00886e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886e4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886e4f: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x886e54u); f_0087421c();
    /* 00886e54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886e57: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886e59: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00886e5d: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00886e60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00886e62: jle 0x886ea1 */ if ((fZ||fS!=fO)) goto L_00886ea1;
L_00886e64:; BB(0x00886e64);
    /* 00886e64: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00886e68: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 00886e6b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_00886e6f:; BB(0x00886e6f);
    /* 00886e6f: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00886e72: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00886e74: add eax, dword ptr [esp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00886e78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886e79: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886e7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00886e7b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00886e7c: call 0x88684c */ r_esp -= 4; W32(r_esp, 0x886e81u); f_0088684c();
    /* 00886e81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886e84: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886e87: je 0x886edb */ if (fZ) goto L_00886edb;
L_00886e89:; BB(0x00886e89);
    /* 00886e89: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00886e8d: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 00886e90: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886e92: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00886e96: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00886e99: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886e9b: jl 0x886e6f */ if ((fS!=fO)) goto L_00886e6f;
L_00886e9d:; BB(0x00886e9d);
    /* 00886e9d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00886ea1:; BB(0x00886ea1);
    /* 00886ea1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00886ea3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00886ea5: jle 0x886ef4 */ if ((fZ||fS!=fO)) goto L_00886ef4;
L_00886ea7:; BB(0x00886ea7);
    /* 00886ea7: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00886eab: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 00886eae: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00886eb2: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00886eb6: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00886eba: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
L_00886ebe:; BB(0x00886ebe);
    /* 00886ebe: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00886ec0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00886ec2: jle 0x886f03 */ if ((fZ||fS!=fO)) goto L_00886f03;
L_00886ec4:; BB(0x00886ec4);
    /* 00886ec4: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00886ec8:; BB(0x00886ec8);
    /* 00886ec8: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00886eca: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00886ecb: fadd dword ptr [eax + ebx*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ebx*4));
    /* 00886ece: fstp dword ptr [eax + ebx*4] */ W_F32((u32)(r_eax+r_ebx*4), ST(0)); FPOP();
    /* 00886ed1: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00886ed2: mov ecx, dword ptr [esi + edx*4] */ r_ecx = R32((u32)(r_esi+r_edx*4));
    /* 00886ed5: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886ed7: jl 0x886ec8 */ if ((fS!=fO)) goto L_00886ec8;
L_00886ed9:; BB(0x00886ed9);
    /* 00886ed9: jmp 0x886ee5 */ goto L_00886ee5;
L_00886edb:; BB(0x00886edb);
    /* 00886edb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886edd: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886ee0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886ee1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886ee2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886ee3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886ee4: ret  */ FN_RET(0x00886d90); r_esp += 4; return;
L_00886ee5:; BB(0x00886ee5);
    /* 00886ee5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00886ee7: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
L_00886eea:; BB(0x00886eea);
    /* 00886eea: fld dword ptr [eax + ebx*4 - 4] */ FPUSH(R_F32((u32)(r_eax+r_ebx*4+0xfffffffcu)));
    /* 00886eee: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00886ef0: jl 0x886ebe */ if ((fS!=fO)) goto L_00886ebe;
L_00886ef2:; BB(0x00886ef2);
    /* 00886ef2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00886ef4:; BB(0x00886ef4);
    /* 00886ef4: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00886ef8: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 00886efb: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886efe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886eff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886f00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886f01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886f02: ret  */ FN_RET(0x00886d90); r_esp += 4; return;
L_00886f03:; BB(0x00886f03);
    /* 00886f03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00886f05: jmp 0x886eea */ goto L_00886eea;
}

void f_00886f08(void) /* sub_886F08 */
{
    FN_ENTER(0x00886f08);
    /* 00886f08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886f09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886f0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00886f0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886f0c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00886f0f: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 00886f13: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00886f17: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00886f1b: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00886f1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00886f1f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886f20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886f21: call 0x886fa0 */ r_esp -= 4; W32(r_esp, 0x886f26u); f_00886fa0();
    /* 00886f26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00886f29: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886f2b: je 0x886f7b */ if (fZ) goto L_00886f7b;
L_00886f2d:; BB(0x00886f2d);
    /* 00886f2d: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00886f30: mov edx, dword ptr [esi + eax*4] */ r_edx = R32((u32)(r_esi+r_eax*4));
    /* 00886f33: mov ebx, dword ptr [ebx + 0x1c] */ r_ebx = R32((u32)(r_ebx+0x1cu));
    /* 00886f36: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00886f3a: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00886f3d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00886f40: mov ecx, dword ptr [ecx + ebx*4] */ r_ecx = R32((u32)(r_ecx+r_ebx*4));
    /* 00886f43: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00886f47: mov ecx, dword ptr [ebp + ebx*4 + 0xc] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xcu));
    /* 00886f4b: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 00886f4e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00886f52: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00886f56: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00886f5a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00886f5e: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00886f62: fild dword ptr [edi + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x10u)));
    /* 00886f65: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00886f69: call 0x88f198 */ r_esp -= 4; W32(r_esp, 0x886f6eu); f_0088f198();
    /* 00886f6e: mov eax, 1 */ r_eax = 0x1u;
    /* 00886f73: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886f76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886f77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886f78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886f79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886f7a: ret  */ FN_RET(0x00886f08); r_esp += 4; return;
L_00886f7b:; BB(0x00886f7b);
    /* 00886f7b: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00886f7e: mov edx, dword ptr [ebp + eax*4 + 0xc] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xcu));
    /* 00886f82: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00886f84: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00886f86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00886f87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00886f89: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00886f8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00886f8e: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x886f93u); f_0086b688();
    /* 00886f93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00886f95: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886f98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886f99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886f9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886f9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886f9c: ret  */ FN_RET(0x00886f08); r_esp += 4; return;
}

void f_00886fa0(void) /* sub_886FA0 */
{
    FN_ENTER(0x00886fa0);
    /* 00886fa0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00886fa1: mov ebx, esp */ r_ebx = r_esp;
    /* 00886fa3: and esp, 0xffffffe0 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00886fa6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00886fa7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00886fa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00886fa9: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00886fac: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00886faf: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 00886fb2: mov ebp, dword ptr [edx + 0x1c] */ r_ebp = R32((u32)(r_edx+0x1cu));
    /* 00886fb5: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00886fb8: cmp dword ptr [eax + ebp*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ebp*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00886fbc: je 0x886fc8 */ if (fZ) goto L_00886fc8;
L_00886fbe:; BB(0x00886fbe);
    /* 00886fbe: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886fc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00886fc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00886fc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886fc4: mov esp, ebx */ r_esp = r_ebx;
    /* 00886fc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886fc7: ret  */ FN_RET(0x00886fa0); r_esp += 4; return;
L_00886fc8:; BB(0x00886fc8);
    /* 00886fc8: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 00886fcb: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00886fce: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00886fd1: mov esi, dword ptr [edx + ebp*4] */ r_esi = R32((u32)(r_edx+r_ebp*4));
    /* 00886fd4: mov ecx, esi */ r_ecx = r_esi;
    /* 00886fd6: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00886fd9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00886fdb: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00886fdd: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00886fe0: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00886fe3: fdiv dword ptr [0x99af48] */ ST(0) = ST(0) / R_F32((u32)(0x99af48u));
    /* 00886fe9: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00886fed: fld dword ptr [0x99af4c] */ FPUSH(R_F32((u32)(0x99af4cu)));
    /* 00886ff3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00886ff5: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00886ff8: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x886ffdu); f_0084d1fc();
    /* 00886ffd: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00887001: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00887005: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00887007: fmul dword ptr [0x99af44] */ ST(0) = ST(0) * R_F32((u32)(0x99af44u));
    /* 0088700d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00887010: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x887015u); f_0084d1fc();
    /* 00887015: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00887018: lea edx, [eax + eax + 4] */ r_edx = (u32)(r_eax+r_eax+0x4u);
    /* 0088701c: fild dword ptr [edi] */ FPUSH((long double)(i32)R32((u32)(r_edi)));
    /* 0088701e: fld qword ptr [esp + 0x30] */ FPUSH(R_F64((u32)(r_esp+0x30u)));
    /* 00887022: fmul qword ptr [0x99af38] */ ST(0) = ST(0) * R_F64((u32)(0x99af38u));
    /* 00887028: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0088702a: fmul qword ptr [0x99af30] */ ST(0) = ST(0) * R_F64((u32)(0x99af30u));
    /* 00887030: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00887032: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00887036: fmul dword ptr [0x99af40] */ ST(0) = ST(0) * R_F32((u32)(0x99af40u));
    /* 0088703c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0088703e: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00887040: fstp qword ptr [esp + 0x40] */ W_F64((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00887044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00887045: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x88704au); f_00859c55();
    /* 0088704a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088704b: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0088704e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00887050: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 00887053: mov eax, 0 */ r_eax = 0x0u;
    /* 00887058: jle 0x88716c */ if ((fZ||fS!=fO)) goto L_0088716c;
L_0088705e:; BB(0x0088705e);
    /* 0088705e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00887060: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00887062: fld dword ptr [0x99af48] */ FPUSH(R_F32((u32)(0x99af48u)));
    /* 00887068: fld dword ptr [0x99af44] */ FPUSH(R_F32((u32)(0x99af44u)));
    /* 0088706e: fld qword ptr [0x99af38] */ FPUSH(R_F64((u32)(0x99af38u)));
    /* 00887074: fld qword ptr [0x99af30] */ FPUSH(R_F64((u32)(0x99af30u)));
    /* 0088707a: fld dword ptr [0x99af40] */ FPUSH(R_F32((u32)(0x99af40u)));
    /* 00887080: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00887084: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00887088: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0088708c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00887090: mov ebp, eax */ r_ebp = r_eax;
    /* 00887092: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00887094: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00887096: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00887098: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088709a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0088709c:; BB(0x0088709c);
    /* 0088709c: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0088709f: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 008870a2: fdiv dword ptr [0x99af48] */ ST(0) = ST(0) / R_F32((u32)(0x99af48u));
    /* 008870a8: fdiv dword ptr [esp + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x28u));
    /* 008870ac: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 008870b0: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 008870b4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008870b6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 008870ba: fld dword ptr [0x99af4c] */ FPUSH(R_F32((u32)(0x99af4cu)));
    /* 008870c0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008870c2: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008870c5: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x8870cau); f_0084d1fc();
    /* 008870ca: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008870ce: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 008870d2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008870d4: fmul dword ptr [0x99af44] */ ST(0) = ST(0) * R_F32((u32)(0x99af44u));
    /* 008870da: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008870dd: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x8870e2u); f_0084d1fc();
    /* 008870e2: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008870e4: fld qword ptr [esp + 0x30] */ FPUSH(R_F64((u32)(r_esp+0x30u)));
    /* 008870e8: fmul qword ptr [0x99af38] */ ST(0) = ST(0) * R_F64((u32)(0x99af38u));
    /* 008870ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008870f0: fmul qword ptr [0x99af30] */ ST(0) = ST(0) * R_F64((u32)(0x99af30u));
    /* 008870f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008870f8: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 008870fc: fmul dword ptr [0x99af40] */ ST(0) = ST(0) * R_F32((u32)(0x99af40u));
    /* 00887102: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00887104: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 00887108: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0088710c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00887111: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00887116: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0088711b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088711f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00887123: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00887127: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0088712b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0088712f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887131: jl 0x887136 */ if ((fS!=fO)) goto L_00887136;
L_00887133:; BB(0x00887133);
    /* 00887133: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
L_00887136:; BB(0x00887136);
    /* 00887136: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00887139: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0088713d: mov edx, dword ptr [edx + ecx] */ r_edx = R32((u32)(r_edx+r_ecx));
    /* 00887140: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 00887143: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00887144: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00887146: jl 0x88709c */ if ((fS!=fO)) goto L_0088709c;
L_0088714c:; BB(0x0088714c);
    /* 0088714c: mov eax, ebp */ r_eax = r_ebp;
    /* 0088714e: mov ebp, ecx */ r_ebp = r_ecx;
L_00887150:; BB(0x00887150);
    /* 00887150: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00887153: mov ecx, dword ptr [ebp + edx] */ r_ecx = R32((u32)(r_ebp+r_edx));
    /* 00887157: mov dword ptr [ecx + eax*4], 0xffffffff */ W32((u32)(r_ecx+r_eax*4), 0xffffffffu);
    /* 0088715e: mov dword ptr [ebp + edi + 0xc], esi */ W32((u32)(r_ebp+r_edi+0xcu), r_esi);
    /* 00887162: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00887165: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00887166: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00887167: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00887168: mov esp, ebx */ r_esp = r_ebx;
    /* 0088716a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088716b: ret  */ FN_RET(0x00886fa0); r_esp += 4; return;
L_0088716c:; BB(0x0088716c);
    /* 0088716c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088716e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00887170: jmp 0x887150 */ goto L_00887150;
}

