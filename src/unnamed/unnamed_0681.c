#include "protos.h"

void f_00681240(void) /* sub_681240 */
{
    FN_ENTER(0x00681240);
    /* 00681240: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00681241: mov edi, ecx */ r_edi = r_ecx;
    /* 00681243: mov eax, dword ptr [edi + 0x1a0] */ r_eax = R32((u32)(r_edi+0x1a0u));
    /* 00681249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068124b: jne 0x68124f */ if (!fZ) goto L_0068124f;
L_0068124d:; BB(0x0068124d);
    /* 0068124d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068124e: ret  */ FN_RET(0x00681240); r_esp += 4; return;
L_0068124f:; BB(0x0068124f);
    /* 0068124f: mov ecx, dword ptr [0xa904e0] */ r_ecx = R32((u32)(0xa904e0u));
    /* 00681255: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681257: movsx eax, word ptr [edi + 0x14c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x14cu));
    /* 0068125e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068125f: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x681264u); f_0052ddac();
    /* 00681264: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x681269u); f_0082dbac();
    /* 00681269: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0068126c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x681271u); f_00829cc8();
    /* 00681271: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x681276u); f_0082d7b0();
    /* 00681276: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00681279: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068127c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068127e: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00681281: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x681286u); f_00830b74();
    /* 00681286: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00681289: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068128b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x681290u); f_0082d8bc();
    /* 00681290: mov ecx, edi */ r_ecx = r_edi;
    /* 00681292: call 0x67d5e0 */ r_esp -= 4; W32(r_esp, 0x681297u); f_0067d5e0();
    /* 00681297: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0068129c: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 006812a2: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 006812a7: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 006812ad: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 006812b3: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 006812b9: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 006812bf: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 006812c5: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 006812cb: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 006812d1: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 006812d7: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 006812dd: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 006812e3: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 006812e9: or eax, 0x200820 */ {  u32 a = r_eax; u32 b = 0x200820u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006812ee: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006812f3: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x6812f8u); f_0082fa9c();
    /* 006812f8: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 006812fd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006812ff: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x681304u); f_0082d6fc();
    /* 00681304: lea eax, [edi + 0x184] */ r_eax = (u32)(r_edi+0x184u);
    /* 0068130a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068130b: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x681310u); f_0082d710();
    /* 00681310: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681313: mov ecx, edi */ r_ecx = r_edi;
    /* 00681315: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x68131au); f_007aa668();
    /* 0068131a: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x68131fu); f_0082faac();
    /* 0068131f: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00681324: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0068132a: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0068132f: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 00681334: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0068133a: mov ecx, edi */ r_ecx = r_edi;
    /* 0068133c: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 00681341: mov eax, dword ptr [0xaab50c] */ r_eax = R32((u32)(0xaab50cu));
    /* 00681346: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 0068134b: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 00681350: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 00681355: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 0068135a: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 0068135f: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00681364: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00681369: call 0x67ccc8 */ r_esp -= 4; W32(r_esp, 0x68136eu); f_0067ccc8();
    /* 0068136e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x681373u); f_0082da80();
    /* 00681373: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x681378u); f_0082dab0();
    /* 00681378: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00681379: ret  */ FN_RET(0x00681240); r_esp += 4; return;
}

void f_0068137c(void) /* sub_68137C */
{
    FN_ENTER(0x0068137c);
    /* 0068137c: mov dword ptr [0xa904d4], 0x3f800000 */ W32((u32)(0xa904d4u), 0x3f800000u);
    /* 00681386: mov dword ptr [0xa904d8], 0x41000000 */ W32((u32)(0xa904d8u), 0x41000000u);
    /* 00681390: mov dword ptr [0xa904dc], 0x3fc00000 */ W32((u32)(0xa904dcu), 0x3fc00000u);
    /* 0068139a: ret  */ FN_RET(0x0068137c); r_esp += 4; return;
}

void f_0068139c(void) /* sub_68139C */
{
    FN_ENTER(0x0068139c);
    /* 0068139c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068139d: mov ebp, esp */ r_ebp = r_esp;
    /* 0068139f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006813a1: push 0x8ea67c */ { u32 v = 0x8ea67cu; r_esp -= 4; W32(r_esp, v); }
    /* 006813a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006813ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006813ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006813b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006813b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006813ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006813bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006813c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006813c3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006813c5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006813cc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6813d1u); f_008581c5();
    /* 006813d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006813d2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006813d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006813d7: je 0x68141c */ if (fZ) goto L_0068141c;
L_006813d9:; BB(0x006813d9);
    /* 006813d9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006813e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006813e7: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 006813ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006813ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006813f1: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 006813f7: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006813fa: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x6813ffu); f_0052d584();
    /* 006813ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681402: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00681409:; BB(0x00681409);
    /* 00681409: mov dword ptr [0xa904e0], eax */ W32((u32)(0xa904e0u), r_eax);
    /* 0068140e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681411: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00681418: mov esp, ebp */ r_esp = r_ebp;
    /* 0068141a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068141b: ret  */ FN_RET(0x0068139c); r_esp += 4; return;
L_0068141c:; BB(0x0068141c);
    /* 0068141c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068141e: jmp 0x681409 */ goto L_00681409;
}

void f_00681420(void) /* sub_681420 */
{
    FN_ENTER(0x00681420);
    /* 00681420: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00681421: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00681423: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00681425: call 0x681444 */ r_esp -= 4; W32(r_esp, 0x68142au); f_00681444();
    /* 0068142a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068142e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00681430: jne 0x681436 */ if (!fZ) goto L_00681436;
L_00681432:; BB(0x00681432);
    /* 00681432: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00681433: ret 4 */ FN_RET(0x00681420); r_esp += 8; return;
L_00681436:; BB(0x00681436);
    /* 00681436: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00681437: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x68143cu); f_005c2f74();
    /* 0068143c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068143d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068143e: ret 4 */ FN_RET(0x00681420); r_esp += 8; return;
}

void f_00681444(void) /* sub_681444 */
{
    FN_ENTER(0x00681444);
    /* 00681444: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00681445: mov ebp, esp */ r_ebp = r_esp;
    /* 00681447: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00681449: push 0x8ea698 */ { u32 v = 0x8ea698u; r_esp -= 4; W32(r_esp, v); }
    /* 0068144e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00681454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681455: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0068145c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068145f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00681462: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00681465: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00681468: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0068146b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0068146e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00681475: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681478: mov dword ptr [ecx], 0xb38620 */ W32((u32)(r_ecx), 0xb38620u);
    /* 0068147e: call dword ptr [0xb38654] */ { u32 t = R32((u32)(0xb38654u)); r_esp -= 4; W32(r_esp, 0x681484u); call_ind(t); }
    /* 00681484: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681487: call 0x67cc20 */ r_esp -= 4; W32(r_esp, 0x68148cu); f_0067cc20();
    /* 0068148c: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068148f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x681494u); f_007b4e84();
    /* 00681494: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681495: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681498: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x68149du); f_007b9c8c();
    /* 0068149d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006814a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006814a7: call 0x67c61c */ r_esp -= 4; W32(r_esp, 0x6814acu); f_0067c61c();
    /* 006814ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006814af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006814b6: mov esp, ebp */ r_esp = r_ebp;
    /* 006814b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006814b9: ret  */ FN_RET(0x00681444); r_esp += 4; return;
}

void f_006814bc(void) /* sub_6814BC */
{
    FN_ENTER(0x006814bc);
    /* 006814bc: mov ecx, dword ptr [0xa904f4] */ r_ecx = R32((u32)(0xa904f4u));
    /* 006814c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006814c4: je 0x6814cf */ if (fZ) goto L_006814cf;
L_006814c6:; BB(0x006814c6);
    /* 006814c6: je 0x6814cf */ if (fZ) goto L_006814cf;
L_006814c8:; BB(0x006814c8);
    /* 006814c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006814ca: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x6814cfu); f_0044bbac();
L_006814cf:; BB(0x006814cf);
    /* 006814cf: mov dword ptr [0xa904f4], 0 */ W32((u32)(0xa904f4u), 0x0u);
    /* 006814d9: ret  */ FN_RET(0x006814bc); r_esp += 4; return;
}

void f_006814dc(void) /* sub_6814DC */
{
    FN_ENTER(0x006814dc);
    /* 006814dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006814dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006814df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006814e1: push 0x8ea710 */ { u32 v = 0x8ea710u; r_esp -= 4; W32(r_esp, v); }
    /* 006814e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006814ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006814ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006814f4: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006814fa: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006814fd: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00681500: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00681503: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00681506: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00681509: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0068150c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068150f: call 0x67c674 */ r_esp -= 4; W32(r_esp, 0x681514u); f_0067c674();
    /* 00681514: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068151b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068151e: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00681521: mov dword ptr [ecx], 0xb38620 */ W32((u32)(r_ecx), 0xb38620u);
    /* 00681527: mov eax, dword ptr [0x9cb734] */ r_eax = R32((u32)(0x9cb734u));
    /* 0068152c: mov dword ptr [ecx + 0x138], 2 */ W32((u32)(r_ecx+0x138u), 0x2u);
    /* 00681536: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00681539: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0068153b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068153d: push 0x9cb758 */ { u32 v = 0x9cb758u; r_esp -= 4; W32(r_esp, v); }
    /* 00681542: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00681545: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00681548: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 0068154b: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 0068154e: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 00681551: movzx eax, word ptr [edi + 0xc] */ r_eax = (u32)R16((u32)(r_edi+0xcu));
    /* 00681555: mov word ptr [ecx + 0x158], ax */ W16((u32)(r_ecx+0x158u), (u16)r_eax);
    /* 0068155c: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x681561u); f_007b9a88();
    /* 00681561: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00681564: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x681569u); f_007b999c();
    /* 00681569: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068156a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068156d: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x681572u); f_007b4f54();
    /* 00681572: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681575: movzx edx, word ptr [eax + 0x158] */ r_edx = (u32)R16((u32)(r_eax+0x158u));
    /* 0068157c: mov dword ptr [eax + 0x1a8], 0 */ W32((u32)(r_eax+0x1a8u), 0x0u);
    /* 00681586: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681587: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68158cu); f_007b4d18();
    /* 0068158c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068158d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681590: mov dword ptr [ecx + 0x1a4], eax */ W32((u32)(r_ecx+0x1a4u), r_eax);
    /* 00681596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681598: je 0x681a8e */ if (fZ) goto L_00681a8e;
L_0068159e:; BB(0x0068159e);
    /* 0068159e: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 006815a1: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_006815a4:; BB(0x006815a4);
    /* 006815a4: mov edi, dword ptr [0xa9049c] */ r_edi = R32((u32)(0xa9049cu));
    /* 006815aa: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 006815b0: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 006815b3: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 006815b6: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 006815bc: mov esi, dword ptr [ebx + 0x4c] */ r_esi = R32((u32)(r_ebx+0x4cu));
    /* 006815bf: mov dword ptr [ecx + 0xd8], 0x9cb738 */ W32((u32)(r_ecx+0xd8u), 0x9cb738u);
    /* 006815c9: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 006815cc: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 006815d2: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 006815d8: mov eax, 1 */ r_eax = 0x1u;
    /* 006815dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006815de: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006815e5: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x6815eau); f_007aa4c8();
    /* 006815ea: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006815ed: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006815f0: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 006815f7: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006815fe: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00681600: mov edx, 1 */ r_edx = 0x1u;
    /* 00681605: mov word ptr [ecx + 0x1b8], dx */ W16((u32)(r_ecx+0x1b8u), (u16)r_edx);
    /* 0068160c: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 0068160f: mov dword ptr [ecx + 0x1bc], ebx */ W32((u32)(r_ecx+0x1bcu), r_ebx);
    /* 00681615: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00681618: mov dword ptr [ecx + 0x1c0], edi */ W32((u32)(r_ecx+0x1c0u), r_edi);
    /* 0068161e: mov dword ptr [ecx + 0x1c4], 0 */ W32((u32)(r_ecx+0x1c4u), 0x0u);
    /* 00681628: mov dword ptr [ecx + 0x134], 5 */ W32((u32)(r_ecx+0x134u), 0x5u);
    /* 00681632: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x681635u); call_ind(t); }
    /* 00681635: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681638: mov dword ptr [eax + 0x1c8], 0 */ W32((u32)(r_eax+0x1c8u), 0x0u);
    /* 00681642: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x681647u); f_00807ac0();
    /* 00681647: lea edx, [eax - 0xb] */ r_edx = (u32)(r_eax+0xfffffff5u);
    /* 0068164a: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068164d: ja 0x6816b0 */ if ((!fC&&!fZ)) goto L_006816b0;
L_0068164f:; BB(0x0068164f);
    /* 0068164f: mov eax, dword ptr [eax*4 + 0x93c134] */ r_eax = R32((u32)(r_eax*4+0x93c134u));
    /* 00681656: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006816b0:; BB(0x006816b0);
    /* 006816b0: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 006816ba: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006816bf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6816c4u); f_005caba4();
    /* 006816c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006816c5: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 006816cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006816cd: je 0x6816ff */ if (fZ) goto L_006816ff;
L_006816cf:; BB(0x006816cf);
    /* 006816cf: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 006816d9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006816e0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006816e3: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 006816e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006816eb: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 006816ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006816ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006816f0: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x6816f5u); f_00684ab0();
    /* 006816f5: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_006816ff:; BB(0x006816ff);
    /* 006816ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00681706: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681709: mov dword ptr [eax + 0x19c], 0 */ W32((u32)(r_eax+0x19cu), 0x0u);
    /* 00681713: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x681718u); f_007b51c4();
    /* 00681718: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068171b: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x681720u); f_007b8980();
    /* 00681720: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681723: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00681729: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0068172c: test ecx, 0x100000 */ {  u32 a = r_ecx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681732: je 0x68191d */ if (fZ) goto L_0068191d;
L_00681738:; BB(0x00681738);
    /* 00681738: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
    /* 0068173e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00681740:; BB(0x00681740);
    /* 00681740: mov esi, dword ptr [ebx*4 + 0xaad6e0] */ r_esi = R32((u32)(r_ebx*4+0xaad6e0u));
    /* 00681747: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681749: je 0x68190f */ if (fZ) goto L_0068190f;
L_0068174f:; BB(0x0068174f);
    /* 0068174f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681751: je 0x681907 */ if (fZ) goto L_00681907;
L_00681757:; BB(0x00681757);
    /* 00681757: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 0068175d: mov edi, dword ptr [ecx + 0x304] */ r_edi = R32((u32)(r_ecx+0x304u));
    /* 00681763: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00681769: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 0068176f: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681772: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 00681775: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00681778: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0068177e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x681783u); f_0082f9c4();
    /* 00681783: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681786: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00681789: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0068178f: mov edi, dword ptr [esi + 0x304] */ r_edi = R32((u32)(r_esi+0x304u));
    /* 00681795: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681798: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0068179b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 006817a1: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 006817a4: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006817a7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x6817acu); f_0082f9c4();
    /* 006817ac: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 006817af: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x6817b4u); f_0082def4();
    /* 006817b4: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 006817b7: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 006817bd: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x6817c2u); f_0082def4();
    /* 006817c2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006817c5: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 006817c8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006817ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006817cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006817cd: jae 0x6817d5 */ if (!fC) goto L_006817d5;
L_006817cf:; BB(0x006817cf);
    /* 006817cf: mov dword ptr [edx + 0x1a8], esi */ W32((u32)(r_edx+0x1a8u), r_esi);
L_006817d5:; BB(0x006817d5);
    /* 006817d5: movzx eax, word ptr [edx + 0x158] */ r_eax = (u32)R16((u32)(r_edx+0x158u));
    /* 006817dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006817dd: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6817e2u); f_007b4d18();
    /* 006817e2: mov esi, eax */ r_esi = r_eax;
    /* 006817e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006817e7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006817ea: mov edx, dword ptr [edx + 0x1a8] */ r_edx = R32((u32)(r_edx+0x1a8u));
    /* 006817f0: mov ecx, dword ptr [edx + 0x300] */ r_ecx = R32((u32)(r_edx+0x300u));
    /* 006817f6: mov edi, dword ptr [edx + 0x304] */ r_edi = R32((u32)(r_edx+0x304u));
    /* 006817fc: mov edx, dword ptr [edx + 0x308] */ r_edx = R32((u32)(r_edx+0x308u));
    /* 00681802: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681804: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00681807: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0068180a: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0068180d: je 0x68181a */ if (fZ) goto L_0068181a;
L_0068180f:; BB(0x0068180f);
    /* 0068180f: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00681812: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00681815: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x68181au); f_0082f9c4();
L_0068181a:; BB(0x0068181a);
    /* 0068181a: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 0068181d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x681822u); f_0082df08();
    /* 00681822: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00681824: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0068182b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00681830: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00681837: mov dword ptr [ebp - 0x58], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa8u), 0x3f800000u);
    /* 0068183e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x681843u); f_0082d990();
    /* 00681843: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681845: je 0x681857 */ if (fZ) goto L_00681857;
L_00681847:; BB(0x00681847);
    /* 00681847: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0068184a: add edx, 0x1555 */ {  u32 a = r_edx; u32 b = 0x1555u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681850: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681852: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x681857u); f_0082d8bc();
L_00681857:; BB(0x00681857);
    /* 00681857: lea edi, [ebp - 0x54] */ r_edi = (u32)(r_ebp+0xffffffacu);
    /* 0068185a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068185b: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 0068185e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681860: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x681865u); f_0082eab8();
    /* 00681865: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0068186a: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x68186fu); f_0082eb80();
    /* 0068186f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00681874: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x681879u); f_0082d990();
    /* 00681879: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068187b: je 0x68188d */ if (fZ) goto L_0068188d;
L_0068187d:; BB(0x0068187d);
    /* 0068187d: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00681880: add edx, 0xffffeaab */ {  u32 a = r_edx; u32 b = 0xffffeaabu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681886: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681888: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x68188du); f_0082d8bc();
L_0068188d:; BB(0x0068188d);
    /* 0068188d: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00681890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681891: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 00681894: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681896: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x68189bu); f_0082eab8();
    /* 0068189b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006818a0: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6818a5u); f_0082eb80();
    /* 006818a5: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818a8: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 006818ab: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818b0u); f_0082f9e0();
    /* 006818b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006818b2: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818b5: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006818b8: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818bdu); f_0082f9e0();
    /* 006818bd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006818bf: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818c2: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 006818c5: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818cau); f_0082f9e0();
    /* 006818ca: fcomp dword ptr [0x93c22c] */ fx_compare(ST(0), R_F32((u32)(0x93c22cu))); FPOP();
    /* 006818d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006818d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006818d3: jbe 0x6818f6 */ if ((fC||fZ)) goto L_006818f6;
L_006818d5:; BB(0x006818d5);
    /* 006818d5: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818d8: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006818db: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818e0u); f_0082f9e0();
    /* 006818e0: fcomp dword ptr [0x93c22c] */ fx_compare(ST(0), R_F32((u32)(0x93c22cu))); FPOP();
    /* 006818e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006818e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006818e9: jbe 0x6818f6 */ if ((fC||fZ)) goto L_006818f6;
L_006818eb:; BB(0x006818eb);
    /* 006818eb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006818ee: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
    /* 006818f4: jmp 0x68190f */ goto L_0068190f;
L_006818f6:; BB(0x006818f6);
    /* 006818f6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006818f9: mov dword ptr [edx + 0x1a8], 0 */ W32((u32)(r_edx+0x1a8u), 0x0u);
    /* 00681903: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681905: jmp 0x68190f */ goto L_0068190f;
L_00681907:; BB(0x00681907);
    /* 00681907: mov ecx, esi */ r_ecx = r_esi;
    /* 00681909: mov dword ptr [edx + 0x1a8], esi */ W32((u32)(r_edx+0x1a8u), r_esi);
L_0068190f:; BB(0x0068190f);
    /* 0068190f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00681912: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00681915: jl 0x681740 */ if ((fS!=fO)) goto L_00681740;
L_0068191b:; BB(0x0068191b);
    /* 0068191b: jmp 0x681923 */ goto L_00681923;
L_0068191d:; BB(0x0068191d);
    /* 0068191d: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
L_00681923:; BB(0x00681923);
    /* 00681923: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681925: je 0x681947 */ if (fZ) goto L_00681947;
L_00681927:; BB(0x00681927);
    /* 00681927: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681929: push dword ptr [edx + 0x150] */ { u32 v = R32((u32)(r_edx+0x150u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068192f: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00681933: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681936: call 0x67d488 */ r_esp -= 4; W32(r_esp, 0x68193bu); f_0067d488();
    /* 0068193b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068193e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681941: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
L_00681947:; BB(0x00681947);
    /* 00681947: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068194a: mov dword ptr [edx + 0x19c], ecx */ W32((u32)(r_edx+0x19cu), r_ecx);
    /* 00681950: movzx ebx, byte ptr [eax + 0x1c] */ r_ebx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00681954: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00681955: mov ecx, edx */ r_ecx = r_edx;
    /* 00681957: call 0x681a9c */ r_esp -= 4; W32(r_esp, 0x68195cu); f_00681a9c();
    /* 0068195c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068195f: mov eax, dword ptr [ecx + 0x1c0] */ r_eax = R32((u32)(r_ecx+0x1c0u));
    /* 00681965: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681968: jne 0x681979 */ if (!fZ) goto L_00681979;
L_0068196a:; BB(0x0068196a);
    /* 0068196a: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 00681970: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00681973: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00681979:; BB(0x00681979);
    /* 00681979: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068197c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0068197f: mov ebx, dword ptr [ecx + 0x1bc] */ r_ebx = R32((u32)(r_ecx+0x1bcu));
    /* 00681985: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 0068198b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068198d: jne 0x681a56 */ if (!fZ) goto L_00681a56;
L_00681993:; BB(0x00681993);
    /* 00681993: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00681995: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00681997: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0068199e: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x6819a3u); f_0067c75c();
    /* 006819a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006819a6: movzx ebx, word ptr [ecx + 0x158] */ r_ebx = (u32)R16((u32)(r_ecx+0x158u));
    /* 006819ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006819ae: mov edx, 1 */ r_edx = 0x1u;
    /* 006819b3: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
    /* 006819b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006819bb: mov word ptr [ecx + 0x1b8], ax */ W16((u32)(r_ecx+0x1b8u), (u16)r_eax);
    /* 006819c2: mov dword ptr [ecx + 0x1c4], edx */ W32((u32)(r_ecx+0x1c4u), r_edx);
    /* 006819c8: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6819cdu); f_007b4d18();
    /* 006819cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006819ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006819d0: je 0x6819e4 */ if (fZ) goto L_006819e4;
L_006819d2:; BB(0x006819d2);
    /* 006819d2: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006819d5: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006819d8: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006819db: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006819de: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006819e1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_006819e4:; BB(0x006819e4);
    /* 006819e4: fld dword ptr [0x93c228] */ FPUSH(R_F32((u32)(0x93c228u)));
    /* 006819ea: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 006819ed: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 006819f0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006819f7: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006819fc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x681a01u); f_005caba4();
    /* 00681a01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681a02: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00681a05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681a07: je 0x681a38 */ if (fZ) goto L_00681a38;
L_00681a09:; BB(0x00681a09);
    /* 00681a09: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00681a10: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00681a17: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a1c: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00681a1f: mov ecx, eax */ r_ecx = r_eax;
    /* 00681a21: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681a27: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a29: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00681a2c: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x681a31u); f_00683398();
    /* 00681a31: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00681a38:; BB(0x00681a38);
    /* 00681a38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00681a3f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681a42: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a44: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x681a49u); f_0067d660();
    /* 00681a49: push 0x93c260 */ { u32 v = 0x93c260u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a4e: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x681a53u); f_00814f0c();
    /* 00681a53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681a54: jmp 0x681a72 */ goto L_00681a72;
L_00681a56:; BB(0x00681a56);
    /* 00681a56: movzx eax, word ptr [ecx + 0x158] */ r_eax = (u32)R16((u32)(r_ecx+0x158u));
    /* 00681a5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681a5e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a60: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x681a65u); f_0067cd64();
    /* 00681a65: push 0x93c26c */ { u32 v = 0x93c26cu; r_esp -= 4; W32(r_esp, v); }
    /* 00681a6a: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x681a6fu); f_00814f0c();
    /* 00681a6f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00681a72:; BB(0x00681a72);
    /* 00681a72: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681a75: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00681a78: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681a7b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00681a7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681a81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00681a88: mov esp, ebp */ r_esp = r_ebp;
    /* 00681a8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681a8b: ret 4 */ FN_RET(0x006814dc); r_esp += 8; return;
L_00681a8e:; BB(0x00681a8e);
    /* 00681a8e: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 00681a95: jmp 0x6815a4 */ goto L_006815a4;
}

void f_00681658(void)
{
    FN_ENTER(0x00681658);
    /* 00681658: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00681662: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00681667: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x68166cu); f_005caba4();
    /* 0068166c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068166d: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00681673: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681675: je 0x6816a7 */ if (fZ) goto L_006816a7;
L_00681677:; BB(0x00681677);
    /* 00681677: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 00681681: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00681688: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068168b: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00681691: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00681693: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00681696: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681697: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681698: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x68169du); f_00684ab0();
    /* 0068169d: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_006816a7:; BB(0x006816a7);
    /* 006816a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006816ae: jmp 0x681706 */ goto L_00681706;
L_00681706:; BB(0x00681706);
    /* 00681706: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681709: mov dword ptr [eax + 0x19c], 0 */ W32((u32)(r_eax+0x19cu), 0x0u);
    /* 00681713: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x681718u); f_007b51c4();
    /* 00681718: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068171b: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x681720u); f_007b8980();
    /* 00681720: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681723: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00681729: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0068172c: test ecx, 0x100000 */ {  u32 a = r_ecx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681732: je 0x68191d */ if (fZ) goto L_0068191d;
L_00681738:; BB(0x00681738);
    /* 00681738: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
    /* 0068173e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00681740:; BB(0x00681740);
    /* 00681740: mov esi, dword ptr [ebx*4 + 0xaad6e0] */ r_esi = R32((u32)(r_ebx*4+0xaad6e0u));
    /* 00681747: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681749: je 0x68190f */ if (fZ) goto L_0068190f;
L_0068174f:; BB(0x0068174f);
    /* 0068174f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681751: je 0x681907 */ if (fZ) goto L_00681907;
L_00681757:; BB(0x00681757);
    /* 00681757: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 0068175d: mov edi, dword ptr [ecx + 0x304] */ r_edi = R32((u32)(r_ecx+0x304u));
    /* 00681763: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00681769: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 0068176f: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681772: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 00681775: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00681778: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0068177e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x681783u); f_0082f9c4();
    /* 00681783: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681786: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00681789: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0068178f: mov edi, dword ptr [esi + 0x304] */ r_edi = R32((u32)(r_esi+0x304u));
    /* 00681795: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681798: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0068179b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 006817a1: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 006817a4: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006817a7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x6817acu); f_0082f9c4();
    /* 006817ac: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 006817af: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x6817b4u); f_0082def4();
    /* 006817b4: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 006817b7: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 006817bd: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x6817c2u); f_0082def4();
    /* 006817c2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006817c5: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 006817c8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006817ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006817cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006817cd: jae 0x6817d5 */ if (!fC) goto L_006817d5;
L_006817cf:; BB(0x006817cf);
    /* 006817cf: mov dword ptr [edx + 0x1a8], esi */ W32((u32)(r_edx+0x1a8u), r_esi);
L_006817d5:; BB(0x006817d5);
    /* 006817d5: movzx eax, word ptr [edx + 0x158] */ r_eax = (u32)R16((u32)(r_edx+0x158u));
    /* 006817dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006817dd: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6817e2u); f_007b4d18();
    /* 006817e2: mov esi, eax */ r_esi = r_eax;
    /* 006817e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006817e7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006817ea: mov edx, dword ptr [edx + 0x1a8] */ r_edx = R32((u32)(r_edx+0x1a8u));
    /* 006817f0: mov ecx, dword ptr [edx + 0x300] */ r_ecx = R32((u32)(r_edx+0x300u));
    /* 006817f6: mov edi, dword ptr [edx + 0x304] */ r_edi = R32((u32)(r_edx+0x304u));
    /* 006817fc: mov edx, dword ptr [edx + 0x308] */ r_edx = R32((u32)(r_edx+0x308u));
    /* 00681802: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681804: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00681807: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0068180a: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0068180d: je 0x68181a */ if (fZ) goto L_0068181a;
L_0068180f:; BB(0x0068180f);
    /* 0068180f: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00681812: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00681815: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x68181au); f_0082f9c4();
L_0068181a:; BB(0x0068181a);
    /* 0068181a: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 0068181d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x681822u); f_0082df08();
    /* 00681822: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00681824: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0068182b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00681830: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00681837: mov dword ptr [ebp - 0x58], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa8u), 0x3f800000u);
    /* 0068183e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x681843u); f_0082d990();
    /* 00681843: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681845: je 0x681857 */ if (fZ) goto L_00681857;
L_00681847:; BB(0x00681847);
    /* 00681847: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0068184a: add edx, 0x1555 */ {  u32 a = r_edx; u32 b = 0x1555u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681850: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681852: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x681857u); f_0082d8bc();
L_00681857:; BB(0x00681857);
    /* 00681857: lea edi, [ebp - 0x54] */ r_edi = (u32)(r_ebp+0xffffffacu);
    /* 0068185a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068185b: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 0068185e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681860: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x681865u); f_0082eab8();
    /* 00681865: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0068186a: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x68186fu); f_0082eb80();
    /* 0068186f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00681874: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x681879u); f_0082d990();
    /* 00681879: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068187b: je 0x68188d */ if (fZ) goto L_0068188d;
L_0068187d:; BB(0x0068187d);
    /* 0068187d: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00681880: add edx, 0xffffeaab */ {  u32 a = r_edx; u32 b = 0xffffeaabu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681886: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681888: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x68188du); f_0082d8bc();
L_0068188d:; BB(0x0068188d);
    /* 0068188d: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00681890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681891: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 00681894: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681896: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x68189bu); f_0082eab8();
    /* 0068189b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006818a0: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6818a5u); f_0082eb80();
    /* 006818a5: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818a8: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 006818ab: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818b0u); f_0082f9e0();
    /* 006818b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006818b2: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818b5: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006818b8: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818bdu); f_0082f9e0();
    /* 006818bd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006818bf: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818c2: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 006818c5: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818cau); f_0082f9e0();
    /* 006818ca: fcomp dword ptr [0x93c22c] */ fx_compare(ST(0), R_F32((u32)(0x93c22cu))); FPOP();
    /* 006818d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006818d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006818d3: jbe 0x6818f6 */ if ((fC||fZ)) goto L_006818f6;
L_006818d5:; BB(0x006818d5);
    /* 006818d5: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818d8: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006818db: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818e0u); f_0082f9e0();
    /* 006818e0: fcomp dword ptr [0x93c22c] */ fx_compare(ST(0), R_F32((u32)(0x93c22cu))); FPOP();
    /* 006818e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006818e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006818e9: jbe 0x6818f6 */ if ((fC||fZ)) goto L_006818f6;
L_006818eb:; BB(0x006818eb);
    /* 006818eb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006818ee: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
    /* 006818f4: jmp 0x68190f */ goto L_0068190f;
L_006818f6:; BB(0x006818f6);
    /* 006818f6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006818f9: mov dword ptr [edx + 0x1a8], 0 */ W32((u32)(r_edx+0x1a8u), 0x0u);
    /* 00681903: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681905: jmp 0x68190f */ goto L_0068190f;
L_00681907:; BB(0x00681907);
    /* 00681907: mov ecx, esi */ r_ecx = r_esi;
    /* 00681909: mov dword ptr [edx + 0x1a8], esi */ W32((u32)(r_edx+0x1a8u), r_esi);
L_0068190f:; BB(0x0068190f);
    /* 0068190f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00681912: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00681915: jl 0x681740 */ if ((fS!=fO)) goto L_00681740;
L_0068191b:; BB(0x0068191b);
    /* 0068191b: jmp 0x681923 */ goto L_00681923;
L_0068191d:; BB(0x0068191d);
    /* 0068191d: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
L_00681923:; BB(0x00681923);
    /* 00681923: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681925: je 0x681947 */ if (fZ) goto L_00681947;
L_00681927:; BB(0x00681927);
    /* 00681927: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681929: push dword ptr [edx + 0x150] */ { u32 v = R32((u32)(r_edx+0x150u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068192f: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00681933: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681936: call 0x67d488 */ r_esp -= 4; W32(r_esp, 0x68193bu); f_0067d488();
    /* 0068193b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068193e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681941: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
L_00681947:; BB(0x00681947);
    /* 00681947: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068194a: mov dword ptr [edx + 0x19c], ecx */ W32((u32)(r_edx+0x19cu), r_ecx);
    /* 00681950: movzx ebx, byte ptr [eax + 0x1c] */ r_ebx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00681954: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00681955: mov ecx, edx */ r_ecx = r_edx;
    /* 00681957: call 0x681a9c */ r_esp -= 4; W32(r_esp, 0x68195cu); f_00681a9c();
    /* 0068195c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068195f: mov eax, dword ptr [ecx + 0x1c0] */ r_eax = R32((u32)(r_ecx+0x1c0u));
    /* 00681965: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681968: jne 0x681979 */ if (!fZ) goto L_00681979;
L_0068196a:; BB(0x0068196a);
    /* 0068196a: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 00681970: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00681973: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00681979:; BB(0x00681979);
    /* 00681979: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068197c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0068197f: mov ebx, dword ptr [ecx + 0x1bc] */ r_ebx = R32((u32)(r_ecx+0x1bcu));
    /* 00681985: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 0068198b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068198d: jne 0x681a56 */ if (!fZ) goto L_00681a56;
L_00681993:; BB(0x00681993);
    /* 00681993: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00681995: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00681997: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0068199e: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x6819a3u); f_0067c75c();
    /* 006819a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006819a6: movzx ebx, word ptr [ecx + 0x158] */ r_ebx = (u32)R16((u32)(r_ecx+0x158u));
    /* 006819ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006819ae: mov edx, 1 */ r_edx = 0x1u;
    /* 006819b3: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
    /* 006819b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006819bb: mov word ptr [ecx + 0x1b8], ax */ W16((u32)(r_ecx+0x1b8u), (u16)r_eax);
    /* 006819c2: mov dword ptr [ecx + 0x1c4], edx */ W32((u32)(r_ecx+0x1c4u), r_edx);
    /* 006819c8: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6819cdu); f_007b4d18();
    /* 006819cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006819ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006819d0: je 0x6819e4 */ if (fZ) goto L_006819e4;
L_006819d2:; BB(0x006819d2);
    /* 006819d2: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006819d5: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006819d8: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006819db: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006819de: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006819e1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_006819e4:; BB(0x006819e4);
    /* 006819e4: fld dword ptr [0x93c228] */ FPUSH(R_F32((u32)(0x93c228u)));
    /* 006819ea: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 006819ed: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 006819f0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006819f7: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006819fc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x681a01u); f_005caba4();
    /* 00681a01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681a02: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00681a05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681a07: je 0x681a38 */ if (fZ) goto L_00681a38;
L_00681a09:; BB(0x00681a09);
    /* 00681a09: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00681a10: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00681a17: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a1c: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00681a1f: mov ecx, eax */ r_ecx = r_eax;
    /* 00681a21: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681a27: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a29: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00681a2c: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x681a31u); f_00683398();
    /* 00681a31: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00681a38:; BB(0x00681a38);
    /* 00681a38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00681a3f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681a42: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a44: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x681a49u); f_0067d660();
    /* 00681a49: push 0x93c260 */ { u32 v = 0x93c260u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a4e: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x681a53u); f_00814f0c();
    /* 00681a53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681a54: jmp 0x681a72 */ goto L_00681a72;
L_00681a56:; BB(0x00681a56);
    /* 00681a56: movzx eax, word ptr [ecx + 0x158] */ r_eax = (u32)R16((u32)(r_ecx+0x158u));
    /* 00681a5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681a5e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a60: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x681a65u); f_0067cd64();
    /* 00681a65: push 0x93c26c */ { u32 v = 0x93c26cu; r_esp -= 4; W32(r_esp, v); }
    /* 00681a6a: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x681a6fu); f_00814f0c();
    /* 00681a6f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00681a72:; BB(0x00681a72);
    /* 00681a72: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681a75: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00681a78: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681a7b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00681a7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681a81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00681a88: mov esp, ebp */ r_esp = r_ebp;
    /* 00681a8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681a8b: ret 4 */ FN_RET(0x00681658); r_esp += 8; return;
}

void f_006816b0(void)
{
    FN_ENTER(0x006816b0);
    /* 006816b0: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 006816ba: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006816bf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6816c4u); f_005caba4();
    /* 006816c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006816c5: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 006816cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006816cd: je 0x6816ff */ if (fZ) goto L_006816ff;
L_006816cf:; BB(0x006816cf);
    /* 006816cf: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 006816d9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006816e0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006816e3: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 006816e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006816eb: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 006816ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006816ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006816f0: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x6816f5u); f_00684ab0();
    /* 006816f5: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_006816ff:; BB(0x006816ff);
    /* 006816ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00681706: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681709: mov dword ptr [eax + 0x19c], 0 */ W32((u32)(r_eax+0x19cu), 0x0u);
    /* 00681713: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x681718u); f_007b51c4();
    /* 00681718: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068171b: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x681720u); f_007b8980();
    /* 00681720: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681723: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00681729: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0068172c: test ecx, 0x100000 */ {  u32 a = r_ecx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681732: je 0x68191d */ if (fZ) goto L_0068191d;
L_00681738:; BB(0x00681738);
    /* 00681738: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
    /* 0068173e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00681740:; BB(0x00681740);
    /* 00681740: mov esi, dword ptr [ebx*4 + 0xaad6e0] */ r_esi = R32((u32)(r_ebx*4+0xaad6e0u));
    /* 00681747: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681749: je 0x68190f */ if (fZ) goto L_0068190f;
L_0068174f:; BB(0x0068174f);
    /* 0068174f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681751: je 0x681907 */ if (fZ) goto L_00681907;
L_00681757:; BB(0x00681757);
    /* 00681757: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 0068175d: mov edi, dword ptr [ecx + 0x304] */ r_edi = R32((u32)(r_ecx+0x304u));
    /* 00681763: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00681769: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 0068176f: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681772: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 00681775: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00681778: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0068177e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x681783u); f_0082f9c4();
    /* 00681783: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681786: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00681789: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0068178f: mov edi, dword ptr [esi + 0x304] */ r_edi = R32((u32)(r_esi+0x304u));
    /* 00681795: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681798: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0068179b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 006817a1: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 006817a4: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006817a7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x6817acu); f_0082f9c4();
    /* 006817ac: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 006817af: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x6817b4u); f_0082def4();
    /* 006817b4: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 006817b7: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 006817bd: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x6817c2u); f_0082def4();
    /* 006817c2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006817c5: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 006817c8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006817ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006817cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006817cd: jae 0x6817d5 */ if (!fC) goto L_006817d5;
L_006817cf:; BB(0x006817cf);
    /* 006817cf: mov dword ptr [edx + 0x1a8], esi */ W32((u32)(r_edx+0x1a8u), r_esi);
L_006817d5:; BB(0x006817d5);
    /* 006817d5: movzx eax, word ptr [edx + 0x158] */ r_eax = (u32)R16((u32)(r_edx+0x158u));
    /* 006817dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006817dd: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6817e2u); f_007b4d18();
    /* 006817e2: mov esi, eax */ r_esi = r_eax;
    /* 006817e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006817e7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006817ea: mov edx, dword ptr [edx + 0x1a8] */ r_edx = R32((u32)(r_edx+0x1a8u));
    /* 006817f0: mov ecx, dword ptr [edx + 0x300] */ r_ecx = R32((u32)(r_edx+0x300u));
    /* 006817f6: mov edi, dword ptr [edx + 0x304] */ r_edi = R32((u32)(r_edx+0x304u));
    /* 006817fc: mov edx, dword ptr [edx + 0x308] */ r_edx = R32((u32)(r_edx+0x308u));
    /* 00681802: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681804: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00681807: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0068180a: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0068180d: je 0x68181a */ if (fZ) goto L_0068181a;
L_0068180f:; BB(0x0068180f);
    /* 0068180f: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00681812: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00681815: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x68181au); f_0082f9c4();
L_0068181a:; BB(0x0068181a);
    /* 0068181a: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 0068181d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x681822u); f_0082df08();
    /* 00681822: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00681824: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0068182b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00681830: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00681837: mov dword ptr [ebp - 0x58], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa8u), 0x3f800000u);
    /* 0068183e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x681843u); f_0082d990();
    /* 00681843: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681845: je 0x681857 */ if (fZ) goto L_00681857;
L_00681847:; BB(0x00681847);
    /* 00681847: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0068184a: add edx, 0x1555 */ {  u32 a = r_edx; u32 b = 0x1555u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681850: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681852: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x681857u); f_0082d8bc();
L_00681857:; BB(0x00681857);
    /* 00681857: lea edi, [ebp - 0x54] */ r_edi = (u32)(r_ebp+0xffffffacu);
    /* 0068185a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068185b: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 0068185e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681860: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x681865u); f_0082eab8();
    /* 00681865: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0068186a: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x68186fu); f_0082eb80();
    /* 0068186f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00681874: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x681879u); f_0082d990();
    /* 00681879: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068187b: je 0x68188d */ if (fZ) goto L_0068188d;
L_0068187d:; BB(0x0068187d);
    /* 0068187d: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00681880: add edx, 0xffffeaab */ {  u32 a = r_edx; u32 b = 0xffffeaabu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681886: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681888: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x68188du); f_0082d8bc();
L_0068188d:; BB(0x0068188d);
    /* 0068188d: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00681890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681891: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 00681894: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681896: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x68189bu); f_0082eab8();
    /* 0068189b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006818a0: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6818a5u); f_0082eb80();
    /* 006818a5: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818a8: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 006818ab: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818b0u); f_0082f9e0();
    /* 006818b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006818b2: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818b5: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006818b8: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818bdu); f_0082f9e0();
    /* 006818bd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006818bf: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818c2: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 006818c5: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818cau); f_0082f9e0();
    /* 006818ca: fcomp dword ptr [0x93c22c] */ fx_compare(ST(0), R_F32((u32)(0x93c22cu))); FPOP();
    /* 006818d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006818d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006818d3: jbe 0x6818f6 */ if ((fC||fZ)) goto L_006818f6;
L_006818d5:; BB(0x006818d5);
    /* 006818d5: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 006818d8: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006818db: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6818e0u); f_0082f9e0();
    /* 006818e0: fcomp dword ptr [0x93c22c] */ fx_compare(ST(0), R_F32((u32)(0x93c22cu))); FPOP();
    /* 006818e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006818e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006818e9: jbe 0x6818f6 */ if ((fC||fZ)) goto L_006818f6;
L_006818eb:; BB(0x006818eb);
    /* 006818eb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006818ee: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
    /* 006818f4: jmp 0x68190f */ goto L_0068190f;
L_006818f6:; BB(0x006818f6);
    /* 006818f6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006818f9: mov dword ptr [edx + 0x1a8], 0 */ W32((u32)(r_edx+0x1a8u), 0x0u);
    /* 00681903: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681905: jmp 0x68190f */ goto L_0068190f;
L_00681907:; BB(0x00681907);
    /* 00681907: mov ecx, esi */ r_ecx = r_esi;
    /* 00681909: mov dword ptr [edx + 0x1a8], esi */ W32((u32)(r_edx+0x1a8u), r_esi);
L_0068190f:; BB(0x0068190f);
    /* 0068190f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00681912: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00681915: jl 0x681740 */ if ((fS!=fO)) goto L_00681740;
L_0068191b:; BB(0x0068191b);
    /* 0068191b: jmp 0x681923 */ goto L_00681923;
L_0068191d:; BB(0x0068191d);
    /* 0068191d: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
L_00681923:; BB(0x00681923);
    /* 00681923: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681925: je 0x681947 */ if (fZ) goto L_00681947;
L_00681927:; BB(0x00681927);
    /* 00681927: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681929: push dword ptr [edx + 0x150] */ { u32 v = R32((u32)(r_edx+0x150u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068192f: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00681933: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681936: call 0x67d488 */ r_esp -= 4; W32(r_esp, 0x68193bu); f_0067d488();
    /* 0068193b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068193e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681941: mov ecx, dword ptr [edx + 0x1a8] */ r_ecx = R32((u32)(r_edx+0x1a8u));
L_00681947:; BB(0x00681947);
    /* 00681947: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068194a: mov dword ptr [edx + 0x19c], ecx */ W32((u32)(r_edx+0x19cu), r_ecx);
    /* 00681950: movzx ebx, byte ptr [eax + 0x1c] */ r_ebx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00681954: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00681955: mov ecx, edx */ r_ecx = r_edx;
    /* 00681957: call 0x681a9c */ r_esp -= 4; W32(r_esp, 0x68195cu); f_00681a9c();
    /* 0068195c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068195f: mov eax, dword ptr [ecx + 0x1c0] */ r_eax = R32((u32)(r_ecx+0x1c0u));
    /* 00681965: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681968: jne 0x681979 */ if (!fZ) goto L_00681979;
L_0068196a:; BB(0x0068196a);
    /* 0068196a: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 00681970: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00681973: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00681979:; BB(0x00681979);
    /* 00681979: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068197c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0068197f: mov ebx, dword ptr [ecx + 0x1bc] */ r_ebx = R32((u32)(r_ecx+0x1bcu));
    /* 00681985: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 0068198b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068198d: jne 0x681a56 */ if (!fZ) goto L_00681a56;
L_00681993:; BB(0x00681993);
    /* 00681993: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00681995: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00681997: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0068199e: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x6819a3u); f_0067c75c();
    /* 006819a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006819a6: movzx ebx, word ptr [ecx + 0x158] */ r_ebx = (u32)R16((u32)(r_ecx+0x158u));
    /* 006819ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006819ae: mov edx, 1 */ r_edx = 0x1u;
    /* 006819b3: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
    /* 006819b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006819bb: mov word ptr [ecx + 0x1b8], ax */ W16((u32)(r_ecx+0x1b8u), (u16)r_eax);
    /* 006819c2: mov dword ptr [ecx + 0x1c4], edx */ W32((u32)(r_ecx+0x1c4u), r_edx);
    /* 006819c8: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6819cdu); f_007b4d18();
    /* 006819cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006819ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006819d0: je 0x6819e4 */ if (fZ) goto L_006819e4;
L_006819d2:; BB(0x006819d2);
    /* 006819d2: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006819d5: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006819d8: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006819db: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006819de: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006819e1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_006819e4:; BB(0x006819e4);
    /* 006819e4: fld dword ptr [0x93c228] */ FPUSH(R_F32((u32)(0x93c228u)));
    /* 006819ea: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 006819ed: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 006819f0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006819f7: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006819fc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x681a01u); f_005caba4();
    /* 00681a01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681a02: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00681a05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681a07: je 0x681a38 */ if (fZ) goto L_00681a38;
L_00681a09:; BB(0x00681a09);
    /* 00681a09: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00681a10: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00681a17: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a1c: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00681a1f: mov ecx, eax */ r_ecx = r_eax;
    /* 00681a21: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681a27: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a29: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00681a2c: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x681a31u); f_00683398();
    /* 00681a31: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00681a38:; BB(0x00681a38);
    /* 00681a38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00681a3f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681a42: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a44: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x681a49u); f_0067d660();
    /* 00681a49: push 0x93c260 */ { u32 v = 0x93c260u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a4e: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x681a53u); f_00814f0c();
    /* 00681a53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681a54: jmp 0x681a72 */ goto L_00681a72;
L_00681a56:; BB(0x00681a56);
    /* 00681a56: movzx eax, word ptr [ecx + 0x158] */ r_eax = (u32)R16((u32)(r_ecx+0x158u));
    /* 00681a5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681a5e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681a60: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x681a65u); f_0067cd64();
    /* 00681a65: push 0x93c26c */ { u32 v = 0x93c26cu; r_esp -= 4; W32(r_esp, v); }
    /* 00681a6a: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x681a6fu); f_00814f0c();
    /* 00681a6f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00681a72:; BB(0x00681a72);
    /* 00681a72: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681a75: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00681a78: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681a7b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00681a7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681a81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00681a88: mov esp, ebp */ r_esp = r_ebp;
    /* 00681a8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681a8b: ret 4 */ FN_RET(0x006816b0); r_esp += 8; return;
}

void f_00681a9c(void) /* sub_681A9C */
{
    FN_ENTER(0x00681a9c);
    /* 00681a9c: mov dword ptr [ecx + 0x15c], 0 */ W32((u32)(r_ecx+0x15cu), 0x0u);
    /* 00681aa6: mov dword ptr [ecx + 0x160], 0 */ W32((u32)(r_ecx+0x160u), 0x0u);
    /* 00681ab0: mov dword ptr [ecx + 0x164], 0 */ W32((u32)(r_ecx+0x164u), 0x0u);
    /* 00681aba: mov dword ptr [ecx + 0x168], 0 */ W32((u32)(r_ecx+0x168u), 0x0u);
    /* 00681ac4: ret 4 */ FN_RET(0x00681a9c); r_esp += 8; return;
}

void f_00681ac8(void) /* sub_681AC8 */
{
    FN_ENTER(0x00681ac8);
    /* 00681ac8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00681ac9: mov ebp, esp */ r_ebp = r_esp;
    /* 00681acb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00681acd: push 0x8ea738 */ { u32 v = 0x8ea738u; r_esp -= 4; W32(r_esp, v); }
    /* 00681ad2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00681ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681ad9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00681ae0: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00681ae3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00681ae6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00681ae9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00681aec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00681aef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00681af2: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 00681af8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00681afb: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681afe: je 0x681c5e */ if (fZ) goto L_00681c5e;
L_00681b04:; BB(0x00681b04);
    /* 00681b04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681b07: mov dword ptr [eax + 0x1c8], ecx */ W32((u32)(r_eax+0x1c8u), r_ecx);
L_00681b0d:; BB(0x00681b0d);
    /* 00681b0d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00681b10: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00681b13: fcomp dword ptr [0x93c214] */ fx_compare(ST(0), R_F32((u32)(0x93c214u))); FPOP();
    /* 00681b19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00681b1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00681b1c: je 0x681c19 */ if (fZ) goto L_00681c19;
L_00681b22:; BB(0x00681b22);
    /* 00681b22: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681b25: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
L_00681b2c:; BB(0x00681b2c);
    /* 00681b2c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681b2f: mov word ptr [ecx + 0x1b8], ax */ W16((u32)(r_ecx+0x1b8u), (u16)r_eax);
    /* 00681b36: call 0x67c7d8 */ r_esp -= 4; W32(r_esp, 0x681b3bu); f_0067c7d8();
    /* 00681b3b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681b3e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x681b43u); f_007aa094();
    /* 00681b43: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681b46: call 0x67cc34 */ r_esp -= 4; W32(r_esp, 0x681b4bu); f_0067cc34();
    /* 00681b4b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681b4e: movzx eax, word ptr [edx + 0x14c] */ r_eax = (u32)R16((u32)(r_edx+0x14cu));
    /* 00681b55: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00681b58: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00681b5b: mov word ptr [edx + 0x14c], ax */ W16((u32)(r_edx+0x14cu), (u16)r_eax);
    /* 00681b62: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00681b68: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b6b: je 0x681bce */ if (fZ) goto L_00681bce;
L_00681b6d:; BB(0x00681b6d);
    /* 00681b6d: cmp eax, 0x56 */ {  u32 a = r_eax; u32 b = 0x56u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b70: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b72:; BB(0x00681b72);
    /* 00681b72: cmp eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b75: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b77:; BB(0x00681b77);
    /* 00681b77: cmp eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b7a: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b7c:; BB(0x00681b7c);
    /* 00681b7c: cmp eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b7f: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b81:; BB(0x00681b81);
    /* 00681b81: cmp eax, 0x6e */ {  u32 a = r_eax; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b84: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b86:; BB(0x00681b86);
    /* 00681b86: cmp eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b89: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b8b:; BB(0x00681b8b);
    /* 00681b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681b8e: mov edx, dword ptr [eax + 0x1c4] */ r_edx = R32((u32)(r_eax+0x1c4u));
    /* 00681b94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00681b96: je 0x681bad */ if (fZ) goto L_00681bad;
L_00681b98:; BB(0x00681b98);
    /* 00681b98: mov edx, eax */ r_edx = r_eax;
    /* 00681b9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00681b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681b9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681b9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681ba0: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 00681ba5: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x681baau); f_008144b0();
    /* 00681baa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00681bad:; BB(0x00681bad);
    /* 00681bad: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681bb0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00681bb3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00681bb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681bb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00681bc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00681bc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681bc3: ret  */ FN_RET(0x00681ac8); r_esp += 4; return;
L_00681bc4:; BB(0x00681bc4);
    /* 00681bc4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681bc7: call 0x681d18 */ r_esp -= 4; W32(r_esp, 0x681bccu); f_00681d18();
    /* 00681bcc: jmp 0x681b8b */ goto L_00681b8b;
L_00681bce:; BB(0x00681bce);
    /* 00681bce: mov esi, edx */ r_esi = r_edx;
    /* 00681bd0: push 0x133 */ { u32 v = 0x133u; r_esp -= 4; W32(r_esp, v); }
    /* 00681bd5: mov ecx, dword ptr [esi + 0x148] */ r_ecx = R32((u32)(r_esi+0x148u));
    /* 00681bdb: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 00681bde: mov dword ptr [esi + 0x1ac], eax */ W32((u32)(r_esi+0x1acu), r_eax);
    /* 00681be4: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00681be7: mov dword ptr [esi + 0x1b0], edx */ W32((u32)(r_esi+0x1b0u), r_edx);
    /* 00681bed: mov ebx, dword ptr [ecx + 0x4c] */ r_ebx = R32((u32)(r_ecx+0x4cu));
    /* 00681bf0: mov dword ptr [esi + 0x1b4], ebx */ W32((u32)(r_esi+0x1b4u), r_ebx);
    /* 00681bf6: lea edi, [esi + 0x1ac] */ r_edi = (u32)(r_esi+0x1acu);
    /* 00681bfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00681bfd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x681c02u); f_0050b510();
    /* 00681c02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681c05: mov ecx, esi */ r_ecx = r_esi;
    /* 00681c07: call 0x681d18 */ r_esp -= 4; W32(r_esp, 0x681c0cu); f_00681d18();
    /* 00681c0c: mov eax, esi */ r_eax = r_esi;
    /* 00681c0e: mov eax, dword ptr [eax + 0x1c8] */ r_eax = R32((u32)(r_eax+0x1c8u));
    /* 00681c14: jmp 0x681b6d */ goto L_00681b6d;
L_00681c19:; BB(0x00681c19);
    /* 00681c19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681c1c: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00681c23: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681c26: jne 0x681b2c */ if (!fZ) goto L_00681b2c;
L_00681c2c:; BB(0x00681c2c);
    /* 00681c2c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681c2f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00681c31: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x681c36u); f_0067c75c();
    /* 00681c36: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681c39: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00681c3d: mov dword ptr [ecx + 0x1c8], eax */ W32((u32)(r_ecx+0x1c8u), r_eax);
    /* 00681c43: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00681c4a: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x681c4fu); f_0067d660();
    /* 00681c4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681c52: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00681c59: jmp 0x681b2c */ goto L_00681b2c;
L_00681c5e:; BB(0x00681c5e);
    /* 00681c5e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681c61: mov edx, dword ptr [eax + 0x1c4] */ r_edx = R32((u32)(r_eax+0x1c4u));
    /* 00681c67: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681c69: je 0x681c76 */ if (fZ) goto L_00681c76;
L_00681c6b:; BB(0x00681c6b);
    /* 00681c6b: mov dword ptr [eax + 0x1c8], ecx */ W32((u32)(r_eax+0x1c8u), r_ecx);
    /* 00681c71: jmp 0x681b0d */ goto L_00681b0d;
L_00681c76:; BB(0x00681c76);
    /* 00681c76: movzx edx, word ptr [eax + 0x158] */ r_edx = (u32)R16((u32)(r_eax+0x158u));
    /* 00681c7d: mov dword ptr [eax + 0x1c4], 1 */ W32((u32)(r_eax+0x1c4u), 0x1u);
    /* 00681c87: mov dword ptr [eax + 0x1c8], 0 */ W32((u32)(r_eax+0x1c8u), 0x0u);
    /* 00681c91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681c92: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x681c97u); f_007b4d18();
    /* 00681c97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681c98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681c9a: je 0x681cae */ if (fZ) goto L_00681cae;
L_00681c9c:; BB(0x00681c9c);
    /* 00681c9c: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00681c9f: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00681ca2: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00681ca5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00681ca8: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00681cab: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00681cae:; BB(0x00681cae);
    /* 00681cae: fld dword ptr [0x93c21c] */ FPUSH(R_F32((u32)(0x93c21cu)));
    /* 00681cb4: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 00681cb7: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00681cba: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00681cc1: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681cc6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x681ccbu); f_005caba4();
    /* 00681ccb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681ccc: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00681ccf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681cd1: je 0x681d03 */ if (fZ) goto L_00681d03;
L_00681cd3:; BB(0x00681cd3);
    /* 00681cd3: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00681cda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00681ce1: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00681ce6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681ce9: mov ecx, eax */ r_ecx = r_eax;
    /* 00681ceb: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00681cee: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 00681cf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681cf4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00681cf6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00681cf7: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x681cfcu); f_00683398();
    /* 00681cfc: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00681d03:; BB(0x00681d03);
    /* 00681d03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00681d0a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681d0d: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00681d13: jmp 0x681b0d */ goto L_00681b0d;
}

void f_00681b40(void)
{
    FN_ENTER(0x00681b40);
    /* 00681b40: test dword ptr [edx], edx */ {  u32 a = R32((u32)(r_edx)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;   }
    /* 00681b42: add byte ptr [ebx - 0x161713b3], cl */ { u32 ad = (u32)(r_ebx+0xe9e8ec4du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00681b48: mov al, 0xff */ r_eax = (r_eax & 0xffffff00u) | ((0xffu) & 0xffu);
    /* 00681b4a: dec dword ptr [ebx - 0x48f013ab] */ { u32 ad = (u32)(r_ebx+0xb70fec55u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00681b50: or byte ptr [ecx + eax], 0 */ { u32 ad = (u32)(r_ecx+r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00681b55: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00681b58: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00681b5b: mov word ptr [edx + 0x14c], ax */ W16((u32)(r_edx+0x14cu), (u16)r_eax);
    /* 00681b62: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00681b68: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b6b: je 0x681bce */ if (fZ) goto L_00681bce;
L_00681b6d:; BB(0x00681b6d);
    /* 00681b6d: cmp eax, 0x56 */ {  u32 a = r_eax; u32 b = 0x56u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b70: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b72:; BB(0x00681b72);
    /* 00681b72: cmp eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b75: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b77:; BB(0x00681b77);
    /* 00681b77: cmp eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b7a: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b7c:; BB(0x00681b7c);
    /* 00681b7c: cmp eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b7f: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b81:; BB(0x00681b81);
    /* 00681b81: cmp eax, 0x6e */ {  u32 a = r_eax; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b84: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b86:; BB(0x00681b86);
    /* 00681b86: cmp eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b89: je 0x681bc4 */ if (fZ) goto L_00681bc4;
L_00681b8b:; BB(0x00681b8b);
    /* 00681b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681b8e: mov edx, dword ptr [eax + 0x1c4] */ r_edx = R32((u32)(r_eax+0x1c4u));
    /* 00681b94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00681b96: je 0x681bad */ if (fZ) goto L_00681bad;
L_00681b98:; BB(0x00681b98);
    /* 00681b98: mov edx, eax */ r_edx = r_eax;
    /* 00681b9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00681b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681b9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681b9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681ba0: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 00681ba5: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x681baau); f_008144b0();
    /* 00681baa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00681bad:; BB(0x00681bad);
    /* 00681bad: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681bb0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00681bb3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00681bb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681bb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00681bc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00681bc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681bc3: ret  */ FN_RET(0x00681b40); r_esp += 4; return;
L_00681bc4:; BB(0x00681bc4);
    /* 00681bc4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681bc7: call 0x681d18 */ r_esp -= 4; W32(r_esp, 0x681bccu); f_00681d18();
    /* 00681bcc: jmp 0x681b8b */ goto L_00681b8b;
L_00681bce:; BB(0x00681bce);
    /* 00681bce: mov esi, edx */ r_esi = r_edx;
    /* 00681bd0: push 0x133 */ { u32 v = 0x133u; r_esp -= 4; W32(r_esp, v); }
    /* 00681bd5: mov ecx, dword ptr [esi + 0x148] */ r_ecx = R32((u32)(r_esi+0x148u));
    /* 00681bdb: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 00681bde: mov dword ptr [esi + 0x1ac], eax */ W32((u32)(r_esi+0x1acu), r_eax);
    /* 00681be4: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00681be7: mov dword ptr [esi + 0x1b0], edx */ W32((u32)(r_esi+0x1b0u), r_edx);
    /* 00681bed: mov ebx, dword ptr [ecx + 0x4c] */ r_ebx = R32((u32)(r_ecx+0x4cu));
    /* 00681bf0: mov dword ptr [esi + 0x1b4], ebx */ W32((u32)(r_esi+0x1b4u), r_ebx);
    /* 00681bf6: lea edi, [esi + 0x1ac] */ r_edi = (u32)(r_esi+0x1acu);
    /* 00681bfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00681bfd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x681c02u); f_0050b510();
    /* 00681c02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681c05: mov ecx, esi */ r_ecx = r_esi;
    /* 00681c07: call 0x681d18 */ r_esp -= 4; W32(r_esp, 0x681c0cu); f_00681d18();
    /* 00681c0c: mov eax, esi */ r_eax = r_esi;
    /* 00681c0e: mov eax, dword ptr [eax + 0x1c8] */ r_eax = R32((u32)(r_eax+0x1c8u));
    /* 00681c14: jmp 0x681b6d */ goto L_00681b6d;
}

void f_00681d18(void) /* sub_681D18 */
{
    FN_ENTER(0x00681d18);
    /* 00681d18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00681d19: mov ebp, esp */ r_ebp = r_esp;
    /* 00681d1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00681d1d: push 0x8ea760 */ { u32 v = 0x8ea760u; r_esp -= 4; W32(r_esp, v); }
    /* 00681d22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00681d28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681d29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00681d30: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00681d36: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00681d39: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00681d3c: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00681d3f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00681d42: mov eax, dword ptr [ecx + 0x19c] */ r_eax = R32((u32)(r_ecx+0x19cu));
    /* 00681d48: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00681d4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681d4d: je 0x681ebc */ if (fZ) goto L_00681ebc;
L_00681d53:; BB(0x00681d53);
    /* 00681d53: mov eax, ecx */ r_eax = r_ecx;
    /* 00681d55: mov edx, dword ptr [eax + 0x1a8] */ r_edx = R32((u32)(r_eax+0x1a8u));
    /* 00681d5b: mov ecx, dword ptr [edx + 0x300] */ r_ecx = R32((u32)(r_edx+0x300u));
    /* 00681d61: mov eax, dword ptr [edx + 0x304] */ r_eax = R32((u32)(r_edx+0x304u));
    /* 00681d67: mov edx, dword ptr [edx + 0x308] */ r_edx = R32((u32)(r_edx+0x308u));
    /* 00681d6d: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 00681d73: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00681d79: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
L_00681d7f:; BB(0x00681d7f);
    /* 00681d7f: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 00681d85: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00681d8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681d8e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00681d94: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 00681d9a: lea edx, [eax + 0x1ac] */ r_edx = (u32)(r_eax+0x1acu);
    /* 00681da0: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x681da5u); f_0082f9c4();
    /* 00681da5: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 00681dab: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x681db0u); f_0082df08();
    /* 00681db0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00681db2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x681db7u); f_008587a5();
    /* 00681db7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681dba: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 00681dc0: mov ebx, dword ptr [edx + 0x1b0] */ r_ebx = R32((u32)(r_edx+0x1b0u));
    /* 00681dc6: mov esi, dword ptr [edx + 0x1b4] */ r_esi = R32((u32)(r_edx+0x1b4u));
    /* 00681dcc: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00681dcf: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00681dd2: fdiv dword ptr [0x93c204] */ ST(0) = ST(0) / R_F32((u32)(0x93c204u));
    /* 00681dd8: fmul dword ptr [0x93c200] */ ST(0) = ST(0) * R_F32((u32)(0x93c200u));
    /* 00681dde: fadd dword ptr [0x93c208] */ ST(0) = ST(0) + R_F32((u32)(0x93c208u));
    /* 00681de4: mov dword ptr [ebp - 0x7c], ebx */ W32((u32)(r_ebp+0xffffff84u), r_ebx);
    /* 00681de7: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00681dea: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00681dee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00681df3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00681df6: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00681df9: fistp qword ptr [ebp - 0x28] */ W64((u32)(r_ebp+0xffffffd8u), (u64)fx_int64(ST(0))); FPOP();
    /* 00681dfc: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00681dff: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00681e02: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 00681e08: mov dword ptr [ebp - 0x5c], 0x43fa0000 */ W32((u32)(r_ebp+0xffffffa4u), 0x43fa0000u);
    /* 00681e0f: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00681e12: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00681e18: mov dword ptr [ebp - 0x58], 0x40a00000 */ W32((u32)(r_ebp+0xffffffa8u), 0x40a00000u);
    /* 00681e1f: mov dword ptr [ebp - 0x54], 0x41f00000 */ W32((u32)(r_ebp+0xffffffacu), 0x41f00000u);
    /* 00681e26: mov dword ptr [ebp - 0x78], esi */ W32((u32)(r_ebp+0xffffff88u), r_esi);
    /* 00681e29: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 00681e2c: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00681e33: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00681e36: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 00681e3c: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00681e3f: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00681e45: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00681e48: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00681e4e: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00681e51: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00681e57: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00681e5a: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 00681e60: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00681e63: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00681e66: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 00681e6b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x681e70u); f_005caba4();
    /* 00681e70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681e71: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00681e74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00681e76: je 0x681ea5 */ if (fZ) goto L_00681ea5;
L_00681e78:; BB(0x00681e78);
    /* 00681e78: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00681e7f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00681e86: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681e89: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00681e8c: lea ebx, [ebp - 0x80] */ r_ebx = (u32)(r_ebp+0xffffff80u);
    /* 00681e8f: movzx eax, word ptr [edx + 0x158] */ r_eax = (u32)R16((u32)(r_edx+0x158u));
    /* 00681e96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681e97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681e98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00681e99: call 0x67d8f0 */ r_esp -= 4; W32(r_esp, 0x681e9eu); f_0067d8f0();
    /* 00681e9e: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00681ea5:; BB(0x00681ea5);
    /* 00681ea5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681ea8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00681eab: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00681eae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681eb1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00681eb8: mov esp, ebp */ r_esp = r_ebp;
    /* 00681eba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681ebb: ret  */ FN_RET(0x00681d18); r_esp += 4; return;
L_00681ebc:; BB(0x00681ebc);
    /* 00681ebc: mov eax, ecx */ r_eax = r_ecx;
    /* 00681ebe: movzx edx, word ptr [eax + 0x158] */ r_edx = (u32)R16((u32)(r_eax+0x158u));
    /* 00681ec5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681ec6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x681ecbu); f_007b4d18();
    /* 00681ecb: mov ebx, eax */ r_ebx = r_eax;
    /* 00681ecd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681ed0: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 00681eda: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681edc: je 0x681ee7 */ if (fZ) goto L_00681ee7;
L_00681ede:; BB(0x00681ede);
    /* 00681ede: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00681ee1: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
L_00681ee7:; BB(0x00681ee7);
    /* 00681ee7: mov dword ptr [ebp - 0x9c], 0x42c80000 */ W32((u32)(r_ebp+0xffffff64u), 0x42c80000u);
    /* 00681ef1: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00681ef6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x681efbu); f_0082d990();
    /* 00681efb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681efd: je 0x681f09 */ if (fZ) goto L_00681f09;
L_00681eff:; BB(0x00681eff);
    /* 00681eff: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00681f02: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681f04: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x681f09u); f_0082d8bc();
L_00681f09:; BB(0x00681f09);
    /* 00681f09: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 00681f0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681f10: lea edx, [ebp - 0xa4] */ r_edx = (u32)(r_ebp+0xffffff5cu);
    /* 00681f16: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681f18: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x681f1du); f_0082eab8();
    /* 00681f1d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00681f22: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x681f27u); f_0082eb80();
    /* 00681f27: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00681f2a: lea ecx, [ebp - 0xb0] */ r_ecx = (u32)(r_ebp+0xffffff50u);
    /* 00681f30: lea edx, [ebp - 0x98] */ r_edx = (u32)(r_ebp+0xffffff68u);
    /* 00681f36: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00681f39: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 00681f3c: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00681f3f: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00681f45: mov dword ptr [ebp - 0xac], ebx */ W32((u32)(r_ebp+0xffffff54u), r_ebx);
    /* 00681f4b: mov dword ptr [ebp - 0xa8], edi */ W32((u32)(r_ebp+0xffffff58u), r_edi);
    /* 00681f51: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x681f56u); f_0082ebac();
    /* 00681f56: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00681f5c: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00681f62: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00681f68: jmp 0x681d7f */ goto L_00681d7f;
}

void f_00681f70(void) /* sub_681F70 */
{
    FN_ENTER(0x00681f70);
    /* 00681f70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00681f71: mov esi, ecx */ r_esi = r_ecx;
    /* 00681f73: mov eax, dword ptr [esi + 0x1c4] */ r_eax = R32((u32)(r_esi+0x1c4u));
    /* 00681f79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00681f7b: jne 0x681f7f */ if (!fZ) goto L_00681f7f;
L_00681f7d:; BB(0x00681f7d);
    /* 00681f7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00681f7e: ret  */ FN_RET(0x00681f70); r_esp += 4; return;
L_00681f7f:; BB(0x00681f7f);
    /* 00681f7f: mov ecx, dword ptr [0xa904f4] */ r_ecx = R32((u32)(0xa904f4u));
    /* 00681f85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681f87: movsx eax, word ptr [esi + 0x14c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x14cu));
    /* 00681f8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681f8f: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x681f94u); f_0052ddac();
    /* 00681f94: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x681f99u); f_0082dbac();
    /* 00681f99: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00681f9c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x681fa1u); f_00829cc8();
    /* 00681fa1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x681fa6u); f_0082d7b0();
    /* 00681fa6: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00681fa9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x681faeu); f_0082d838();
    /* 00681fae: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00681fb1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00681fb3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x681fb8u); f_0082d8bc();
    /* 00681fb8: mov ecx, esi */ r_ecx = r_esi;
    /* 00681fba: call 0x67d5e0 */ r_esp -= 4; W32(r_esp, 0x681fbfu); f_0067d5e0();
    /* 00681fbf: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00681fc4: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00681fca: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00681fcf: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00681fd5: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 00681fdb: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 00681fe1: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 00681fe7: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 00681fed: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 00681ff3: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00681ff9: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00681fff: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00682005: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0068200b: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00682011: or eax, 0x200820 */ {  u32 a = r_eax; u32 b = 0x200820u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00682016: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0068201b: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x682020u); f_0082fa9c();
    /* 00682020: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00682025: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00682027: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x68202cu); f_0082d6fc();
    /* 0068202c: lea eax, [esi + 0x15c] */ r_eax = (u32)(r_esi+0x15cu);
    /* 00682032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682033: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x682038u); f_0082d710();
    /* 00682038: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068203b: mov ecx, esi */ r_ecx = r_esi;
    /* 0068203d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x682042u); f_007aa668();
    /* 00682042: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x682047u); f_0082faac();
    /* 00682047: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0068204c: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00682052: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00682057: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 0068205c: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00682062: mov ecx, esi */ r_ecx = r_esi;
    /* 00682064: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 00682069: mov eax, dword ptr [0xaab50c] */ r_eax = R32((u32)(0xaab50cu));
    /* 0068206e: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 00682073: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 00682078: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 0068207d: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00682082: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 00682087: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0068208c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00682091: call 0x67ccc8 */ r_esp -= 4; W32(r_esp, 0x682096u); f_0067ccc8();
    /* 00682096: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x68209bu); f_0082da80();
    /* 0068209b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6820a0u); f_0082dab0();
    /* 006820a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006820a1: ret  */ FN_RET(0x00681f70); r_esp += 4; return;
}

