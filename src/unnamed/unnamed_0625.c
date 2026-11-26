#include "protos.h"

void f_0062504c(void) /* sub_62504C */
{
    FN_ENTER(0x0062504c);
    /* 0062504c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062504d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062504f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00625051: push 0x8e281c */ { u32 v = 0x8e281cu; r_esp -= 4; W32(r_esp, v); }
    /* 00625056: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062505c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062505d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625064: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625067: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062506a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062506d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00625070: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00625073: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625076: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062507c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062507f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00625082: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x625087u); f_007ba278();
    /* 00625087: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062508a: fld dword ptr [0x931a04] */ FPUSH(R_F32((u32)(0x931a04u)));
    /* 00625090: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 00625093: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 00625099: mov edx, 0 */ r_edx = 0x0u;
    /* 0062509e: mov dword ptr [ecx], 0xb28668 */ W32((u32)(r_ecx), 0xb28668u);
    /* 006250a4: mov eax, dword ptr [0x9c56c0] */ r_eax = R32((u32)(0x9c56c0u));
    /* 006250a9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006250ac: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 006250b2: mov dword ptr [ecx + 0x90], 0x43fa0000 */ W32((u32)(r_ecx+0x90u), 0x43fa0000u);
    /* 006250bc: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 006250c2: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 006250c8: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 006250ce: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 006250d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006250df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006250e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006250e5: mov dword ptr [ecx], 0xb28694 */ W32((u32)(r_ecx), 0xb28694u);
    /* 006250eb: mov eax, dword ptr [0x9c56c4] */ r_eax = R32((u32)(0x9c56c4u));
    /* 006250f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006250f1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006250f4: call dword ptr [0xb286a8] */ { u32 t = R32((u32)(0xb286a8u)); r_esp -= 4; W32(r_esp, 0x6250fau); call_ind(t); }
    /* 006250fa: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625100: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625102: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x625107u); f_005b8610();
    /* 00625107: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062510a: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625110: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625112: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00625115: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62511au); f_005b8624();
    /* 0062511a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062511d: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625123: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00625125: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00625128: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0062512b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0062512e: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00625131: mov dword ptr [esi + 0x94], ebx */ W32((u32)(r_esi+0x94u), r_ebx);
    /* 00625137: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62513cu); f_005b8610();
    /* 0062513c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062513f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00625141: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00625147: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 0062514d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x625152u); f_005b8624();
    /* 00625152: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625155: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00625157: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 0062515d: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625163: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x625168u); f_005b8610();
    /* 00625168: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062516b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062516d: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 00625173: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625179: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62517eu); f_005b8624();
    /* 0062517e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625181: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00625184: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00625187: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 0062518d: mov eax, edx */ r_eax = r_edx;
    /* 0062518f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625192: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625199: mov esp, ebp */ r_esp = r_ebp;
    /* 0062519b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062519c: ret 4 */ FN_RET(0x0062504c); r_esp += 8; return;
}

void f_00625053(void)
{
    FN_ENTER(0x00625053);
    /* 00625053: sub byte ptr [esi + 0xa16400], cl */ { u32 ad = (u32)(r_esi+0xa16400u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 00625059: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062505b: add byte ptr [eax + 0x64], dl */ { u32 ad = (u32)(r_eax+0x64u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062505e: mov dword ptr [0], esp */ W32((u32)(0x0u), r_esp);
    /* 00625064: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625067: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062506a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062506d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00625070: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00625073: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625076: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062507c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062507f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00625082: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x625087u); f_007ba278();
    /* 00625087: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062508a: fld dword ptr [0x931a04] */ FPUSH(R_F32((u32)(0x931a04u)));
    /* 00625090: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 00625093: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 00625099: mov edx, 0 */ r_edx = 0x0u;
    /* 0062509e: mov dword ptr [ecx], 0xb28668 */ W32((u32)(r_ecx), 0xb28668u);
    /* 006250a4: mov eax, dword ptr [0x9c56c0] */ r_eax = R32((u32)(0x9c56c0u));
    /* 006250a9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006250ac: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 006250b2: mov dword ptr [ecx + 0x90], 0x43fa0000 */ W32((u32)(r_ecx+0x90u), 0x43fa0000u);
    /* 006250bc: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 006250c2: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 006250c8: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 006250ce: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 006250d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006250df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006250e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006250e5: mov dword ptr [ecx], 0xb28694 */ W32((u32)(r_ecx), 0xb28694u);
    /* 006250eb: mov eax, dword ptr [0x9c56c4] */ r_eax = R32((u32)(0x9c56c4u));
    /* 006250f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006250f1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006250f4: call dword ptr [0xb286a8] */ { u32 t = R32((u32)(0xb286a8u)); r_esp -= 4; W32(r_esp, 0x6250fau); call_ind(t); }
    /* 006250fa: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625100: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625102: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x625107u); f_005b8610();
    /* 00625107: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062510a: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625110: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625112: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00625115: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62511au); f_005b8624();
    /* 0062511a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062511d: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625123: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00625125: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00625128: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0062512b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0062512e: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00625131: mov dword ptr [esi + 0x94], ebx */ W32((u32)(r_esi+0x94u), r_ebx);
    /* 00625137: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62513cu); f_005b8610();
    /* 0062513c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062513f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00625141: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00625147: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 0062514d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x625152u); f_005b8624();
    /* 00625152: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625155: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00625157: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 0062515d: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625163: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x625168u); f_005b8610();
    /* 00625168: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062516b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062516d: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 00625173: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625179: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62517eu); f_005b8624();
    /* 0062517e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625181: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00625184: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00625187: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 0062518d: mov eax, edx */ r_eax = r_edx;
    /* 0062518f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625192: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625199: mov esp, ebp */ r_esp = r_ebp;
    /* 0062519b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062519c: ret 4 */ FN_RET(0x00625053); r_esp += 8; return;
}

void f_006251a0(void)
{
    FN_ENTER(0x006251a0);
    /* 006251a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006251a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006251a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006251a5: push 0x8e2844 */ { u32 v = 0x8e2844u; r_esp -= 4; W32(r_esp, v); }
    /* 006251aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006251b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006251b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006251b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006251bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006251be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006251c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006251c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006251c7: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006251cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006251d3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6251d8u); f_005caba4();
    /* 006251d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006251d9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006251dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006251de: je 0x625211 */ if (fZ) goto L_00625211;
L_006251e0:; BB(0x006251e0);
    /* 006251e0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006251e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006251ee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006251f1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006251f4: call 0x625218 */ r_esp -= 4; W32(r_esp, 0x6251f9u); f_00625218();
    /* 006251f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006251fc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00625203:; BB(0x00625203);
    /* 00625203: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625206: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062520d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062520f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625210: ret  */ FN_RET(0x006251a0); r_esp += 4; return;
L_00625211:; BB(0x00625211);
    /* 00625211: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00625213: jmp 0x625203 */ goto L_00625203;
}

void f_00625218(void) /* sub_625218 */
{
    FN_ENTER(0x00625218);
    /* 00625218: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625219: mov ebp, esp */ r_ebp = r_esp;
    /* 0062521b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062521d: push 0x8e2860 */ { u32 v = 0x8e2860u; r_esp -= 4; W32(r_esp, v); }
    /* 00625222: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625229: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625230: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625233: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625236: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00625239: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062523c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062523f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625242: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00625248: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062524b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062524e: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x625253u); f_007ba278();
    /* 00625253: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625256: fld dword ptr [0x931a04] */ FPUSH(R_F32((u32)(0x931a04u)));
    /* 0062525c: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 0062525f: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 00625265: mov edx, 0 */ r_edx = 0x0u;
    /* 0062526a: mov dword ptr [ecx], 0xb28668 */ W32((u32)(r_ecx), 0xb28668u);
    /* 00625270: mov eax, dword ptr [0x9c56c0] */ r_eax = R32((u32)(0x9c56c0u));
    /* 00625275: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00625278: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 0062527e: mov dword ptr [ecx + 0x90], 0x43fa0000 */ W32((u32)(r_ecx+0x90u), 0x43fa0000u);
    /* 00625288: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 0062528e: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 00625294: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 0062529a: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 006252a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006252ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006252ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006252b1: mov dword ptr [ecx], 0xb286c0 */ W32((u32)(r_ecx), 0xb286c0u);
    /* 006252b7: mov eax, dword ptr [0x9c56c8] */ r_eax = R32((u32)(0x9c56c8u));
    /* 006252bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006252bd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006252c0: call dword ptr [0xb286d4] */ { u32 t = R32((u32)(0xb286d4u)); r_esp -= 4; W32(r_esp, 0x6252c6u); call_ind(t); }
    /* 006252c6: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 006252cc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006252ce: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6252d3u); f_005b8610();
    /* 006252d3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006252d6: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 006252dc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006252de: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006252e1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6252e6u); f_005b8624();
    /* 006252e6: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006252e9: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 006252ef: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006252f1: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 006252f4: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006252f7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006252fa: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 006252fd: mov dword ptr [esi + 0x94], ebx */ W32((u32)(r_esi+0x94u), r_ebx);
    /* 00625303: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x625308u); f_005b8610();
    /* 00625308: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062530b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062530d: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00625313: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625319: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62531eu); f_005b8624();
    /* 0062531e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625321: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00625323: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 00625329: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 0062532f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x625334u); f_005b8610();
    /* 00625334: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625337: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00625339: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 0062533f: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625345: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62534au); f_005b8624();
    /* 0062534a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062534d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00625350: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00625353: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 00625359: mov eax, edx */ r_eax = r_edx;
    /* 0062535b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062535e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625365: mov esp, ebp */ r_esp = r_ebp;
    /* 00625367: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625368: ret 4 */ FN_RET(0x00625218); r_esp += 8; return;
}

void f_0062536c(void)
{
    FN_ENTER(0x0062536c);
    /* 0062536c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062536d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062536f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00625371: push 0x8e2888 */ { u32 v = 0x8e2888u; r_esp -= 4; W32(r_esp, v); }
    /* 00625376: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062537c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062537d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625384: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625387: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062538a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062538d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00625390: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00625393: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00625398: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062539f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6253a4u); f_005caba4();
    /* 006253a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006253a5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006253a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006253aa: je 0x6253dd */ if (fZ) goto L_006253dd;
L_006253ac:; BB(0x006253ac);
    /* 006253ac: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006253b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006253ba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006253bd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006253c0: call 0x6253e4 */ r_esp -= 4; W32(r_esp, 0x6253c5u); f_006253e4();
    /* 006253c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006253c8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006253cf:; BB(0x006253cf);
    /* 006253cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006253d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006253d9: mov esp, ebp */ r_esp = r_ebp;
    /* 006253db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006253dc: ret  */ FN_RET(0x0062536c); r_esp += 4; return;
L_006253dd:; BB(0x006253dd);
    /* 006253dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006253df: jmp 0x6253cf */ goto L_006253cf;
}

void f_006253e4(void) /* sub_6253E4 */
{
    FN_ENTER(0x006253e4);
    /* 006253e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006253e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006253e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006253e9: push 0x8e28a4 */ { u32 v = 0x8e28a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006253ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006253f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006253f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006253fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006253ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625402: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00625405: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00625408: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062540b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062540e: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00625414: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00625417: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062541a: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x62541fu); f_007ba278();
    /* 0062541f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625422: fld dword ptr [0x931a04] */ FPUSH(R_F32((u32)(0x931a04u)));
    /* 00625428: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 0062542b: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 00625431: mov edx, 0 */ r_edx = 0x0u;
    /* 00625436: mov dword ptr [ecx], 0xb28668 */ W32((u32)(r_ecx), 0xb28668u);
    /* 0062543c: mov eax, dword ptr [0x9c56c0] */ r_eax = R32((u32)(0x9c56c0u));
    /* 00625441: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00625444: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 0062544a: mov dword ptr [ecx + 0x90], 0x43fa0000 */ W32((u32)(r_ecx+0x90u), 0x43fa0000u);
    /* 00625454: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 0062545a: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 00625460: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 00625466: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 00625470: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625477: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062547a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062547d: mov dword ptr [ecx], 0xb286ec */ W32((u32)(r_ecx), 0xb286ecu);
    /* 00625483: mov eax, dword ptr [0x9c56cc] */ r_eax = R32((u32)(0x9c56ccu));
    /* 00625488: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625489: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062548c: call dword ptr [0xb28700] */ { u32 t = R32((u32)(0xb28700u)); r_esp -= 4; W32(r_esp, 0x625492u); call_ind(t); }
    /* 00625492: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625498: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0062549a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62549fu); f_005b8610();
    /* 0062549f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006254a2: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 006254a8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006254aa: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006254ad: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6254b2u); f_005b8624();
    /* 006254b2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006254b5: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 006254bb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006254bd: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 006254c0: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006254c3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006254c6: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 006254c9: mov dword ptr [esi + 0x94], ebx */ W32((u32)(r_esi+0x94u), r_ebx);
    /* 006254cf: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6254d4u); f_005b8610();
    /* 006254d4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006254d7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006254d9: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 006254df: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 006254e5: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6254eau); f_005b8624();
    /* 006254ea: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006254ed: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006254ef: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 006254f5: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 006254fb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x625500u); f_005b8610();
    /* 00625500: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625503: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00625505: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 0062550b: mov ecx, dword ptr [0xa8ed0c] */ r_ecx = R32((u32)(0xa8ed0cu));
    /* 00625511: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x625516u); f_005b8624();
    /* 00625516: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625519: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062551c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062551f: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 00625525: mov eax, edx */ r_eax = r_edx;
    /* 00625527: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062552a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625531: mov esp, ebp */ r_esp = r_ebp;
    /* 00625533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625534: ret 4 */ FN_RET(0x006253e4); r_esp += 8; return;
}

void f_00625538(void) /* sub_625538 */
{
    FN_ENTER(0x00625538);
    /* 00625538: mov dword ptr [0xa8ed00], 0x3f800000 */ W32((u32)(0xa8ed00u), 0x3f800000u);
    /* 00625542: mov dword ptr [0xa8ed04], 0x41000000 */ W32((u32)(0xa8ed04u), 0x41000000u);
    /* 0062554c: mov dword ptr [0xa8ed08], 0x3fc00000 */ W32((u32)(0xa8ed08u), 0x3fc00000u);
    /* 00625556: ret  */ FN_RET(0x00625538); r_esp += 4; return;
}

void f_00625558(void) /* sub_625558 */
{
    FN_ENTER(0x00625558);
    /* 00625558: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625559: mov ebp, esp */ r_ebp = r_esp;
    /* 0062555b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062555d: push 0x8e28cc */ { u32 v = 0x8e28ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00625562: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625569: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625570: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625573: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625576: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00625579: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062557c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062557f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00625584: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062558b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x625590u); f_008581c5();
    /* 00625590: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625591: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00625594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625596: je 0x6255d7 */ if (fZ) goto L_006255d7;
L_00625598:; BB(0x00625598);
    /* 00625598: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062559f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006255a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006255a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006255ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006255ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006255ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006255ae: push 0x9c56b0 */ { u32 v = 0x9c56b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006255b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006255b5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6255bau); f_005b7a84();
    /* 006255ba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006255bd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006255c4:; BB(0x006255c4);
    /* 006255c4: mov dword ptr [0xa8ed0c], eax */ W32((u32)(0xa8ed0cu), r_eax);
    /* 006255c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006255cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006255d3: mov esp, ebp */ r_esp = r_ebp;
    /* 006255d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006255d6: ret  */ FN_RET(0x00625558); r_esp += 4; return;
L_006255d7:; BB(0x006255d7);
    /* 006255d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006255d9: jmp 0x6255c4 */ goto L_006255c4;
}

void f_006255dc(void) /* sub_6255DC */
{
    FN_ENTER(0x006255dc);
    /* 006255dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006255dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006255df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006255e1: call 0x625600 */ r_esp -= 4; W32(r_esp, 0x6255e6u); f_00625600();
    /* 006255e6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006255ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006255ec: jne 0x6255f2 */ if (!fZ) goto L_006255f2;
L_006255ee:; BB(0x006255ee);
    /* 006255ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006255ef: ret 4 */ FN_RET(0x006255dc); r_esp += 8; return;
L_006255f2:; BB(0x006255f2);
    /* 006255f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006255f3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6255f8u); f_005c2f74();
    /* 006255f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006255f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006255fa: ret 4 */ FN_RET(0x006255dc); r_esp += 8; return;
}

void f_00625600(void) /* sub_625600 */
{
    FN_ENTER(0x00625600);
    /* 00625600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625601: mov ebp, esp */ r_ebp = r_esp;
    /* 00625603: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00625605: push 0x8e28e8 */ { u32 v = 0x8e28e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062560a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625611: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625618: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062561b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062561e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00625621: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00625624: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00625627: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062562a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062562d: mov dword ptr [ecx], 0xb28740 */ W32((u32)(r_ecx), 0xb28740u);
    /* 00625633: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062563a: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x62563fu); f_006131f4();
    /* 0062563f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625642: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625649: mov esp, ebp */ r_esp = r_ebp;
    /* 0062564b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062564c: ret  */ FN_RET(0x00625600); r_esp += 4; return;
}

void f_00625650(void) /* sub_625650 */
{
    FN_ENTER(0x00625650);
    /* 00625650: fld dword ptr [0x931b08] */ FPUSH(R_F32((u32)(0x931b08u)));
    /* 00625656: ret  */ FN_RET(0x00625650); r_esp += 4; return;
}

void f_00625658(void) /* sub_625658 */
{
    FN_ENTER(0x00625658);
    /* 00625658: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00625659: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062565b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062565f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00625661: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x625666u); f_006132e4();
    /* 00625666: mov dword ptr [ebx], 0xb28740 */ W32((u32)(r_ebx), 0xb28740u);
    /* 0062566c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062566e: mov dword ptr [ebx + 0xac], edx */ W32((u32)(r_ebx+0xacu), r_edx);
    /* 00625674: mov dword ptr [ebx + 0xc8], edx */ W32((u32)(r_ebx+0xc8u), r_edx);
    /* 0062567a: mov dword ptr [ebx + 0xcc], 0xffffffff */ W32((u32)(r_ebx+0xccu), 0xffffffffu);
    /* 00625684: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 0062568a: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 00625690: mov eax, ebx */ r_eax = r_ebx;
    /* 00625692: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00625693: ret 4 */ FN_RET(0x00625658); r_esp += 8; return;
}

void f_00625698(void) /* sub_625698 */
{
    FN_ENTER(0x00625698);
    /* 00625698: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00625699: mov esi, ecx */ r_esi = r_ecx;
    /* 0062569b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0062569d: mov ecx, esi */ r_ecx = r_esi;
    /* 0062569f: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006256a5: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006256ab: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6256aeu); call_ind(t); }
    /* 006256ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006256b0: je 0x62573e */ if (fZ) goto L_0062573e;
L_006256b6:; BB(0x006256b6);
    /* 006256b6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6256bbu); f_0082d7b0();
    /* 006256bb: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006256be: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6256c3u); f_0082d838();
    /* 006256c3: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006256c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006256c8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6256cdu); f_0082d8bc();
    /* 006256cd: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006256d0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6256d5u); f_00829cc8();
    /* 006256d5: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 006256db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006256dd: jne 0x6256f5 */ if (!fZ) goto L_006256f5;
L_006256df:; BB(0x006256df);
    /* 006256df: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006256e5: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006256e8: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 006256ee: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x6256f3u); f_0083bd00();
    /* 006256f3: jmp 0x625739 */ goto L_00625739;
L_006256f5:; BB(0x006256f5);
    /* 006256f5: mov esi, dword ptr [esi + 0x34] */ r_esi = R32((u32)(r_esi+0x34u));
    /* 006256f8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6256fdu); f_0082d7b0();
    /* 006256fd: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00625700: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x625705u); f_0082d838();
    /* 00625705: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00625708: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062570a: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x62570fu); f_00830c04();
    /* 0062570f: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 00625712: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00625714: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x625719u); f_0082e9e4();
    /* 00625719: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0062571c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062571e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x625723u); f_0082d8bc();
    /* 00625723: lea ecx, [esi + 0x20] */ r_ecx = (u32)(r_esi+0x20u);
    /* 00625726: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x62572bu); f_00831290();
    /* 0062572b: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062572e: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x625733u); f_008321d8();
    /* 00625733: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625734: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x625739u); f_0082da80();
L_00625739:; BB(0x00625739);
    /* 00625739: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62573eu); f_0082da80();
L_0062573e:; BB(0x0062573e);
    /* 0062573e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062573f: ret  */ FN_RET(0x00625698); r_esp += 4; return;
}

void f_00625740(void) /* sub_625740 */
{
    FN_ENTER(0x00625740);
    /* 00625740: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00625741: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625744: mov esi, ecx */ r_esi = r_ecx;
    /* 00625746: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x62574bu); f_004f7c84();
    /* 0062574b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062574e: je 0x625807 */ if (fZ) goto L_00625807;
L_00625754:; BB(0x00625754);
    /* 00625754: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0062575a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062575c: jne 0x625767 */ if (!fZ) goto L_00625767;
L_0062575e:; BB(0x0062575e);
    /* 0062575e: mov ecx, esi */ r_ecx = r_esi;
    /* 00625760: call 0x625868 */ r_esp -= 4; W32(r_esp, 0x625765u); f_00625868();
    /* 00625765: jmp 0x625773 */ goto L_00625773;
L_00625767:; BB(0x00625767);
    /* 00625767: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062576a: jne 0x625773 */ if (!fZ) goto L_00625773;
L_0062576c:; BB(0x0062576c);
    /* 0062576c: mov ecx, esi */ r_ecx = r_esi;
    /* 0062576e: call 0x62581c */ r_esp -= 4; W32(r_esp, 0x625773u); f_0062581c();
L_00625773:; BB(0x00625773);
    /* 00625773: fld dword ptr [0x931b00] */ FPUSH(R_F32((u32)(0x931b00u)));
    /* 00625779: fadd dword ptr [esi + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xb0u));
    /* 0062577f: fld dword ptr [esi + 0xb4] */ FPUSH(R_F32((u32)(r_esi+0xb4u)));
    /* 00625785: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00625787: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00625789: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062578a: jae 0x625796 */ if (!fC) goto L_00625796;
L_0062578c:; BB(0x0062578c);
    /* 0062578c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0062578e: fstp dword ptr [esi + 0xb0] */ W_F32((u32)(r_esi+0xb0u), ST(0)); FPOP();
    /* 00625794: jmp 0x62579e */ goto L_0062579e;
L_00625796:; BB(0x00625796);
    /* 00625796: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00625798: fstp dword ptr [esi + 0xb0] */ W_F32((u32)(r_esi+0xb0u), ST(0)); FPOP();
L_0062579e:; BB(0x0062579e);
    /* 0062579e: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 006257a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006257a6: jne 0x625802 */ if (!fZ) goto L_00625802;
L_006257a8:; BB(0x006257a8);
    /* 006257a8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006257aa: mov ecx, esi */ r_ecx = r_esi;
    /* 006257ac: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6257afu); call_ind(t); }
    /* 006257af: fcom dword ptr [0x931b04] */ fx_compare(ST(0), R_F32((u32)(0x931b04u))); 
    /* 006257b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006257b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006257b8: jb 0x625813 */ if (fC) goto L_00625813;
L_006257ba:; BB(0x006257ba);
    /* 006257ba: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 006257c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006257c2: jne 0x6257cb */ if (!fZ) goto L_006257cb;
L_006257c4:; BB(0x006257c4);
    /* 006257c4: mov edx, 0xffff0000 */ r_edx = 0xffff0000u;
    /* 006257c9: jmp 0x6257d0 */ goto L_006257d0;
L_006257cb:; BB(0x006257cb);
    /* 006257cb: mov edx, 0xff00ff00 */ r_edx = 0xff00ff00u;
L_006257d0:; BB(0x006257d0);
    /* 006257d0: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006257d4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006257d8: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006257db: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 006257de: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006257e1: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006257e7: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 006257ec: mov ecx, 3 */ r_ecx = 0x3u;
    /* 006257f1: mov word ptr [esp + 0x10], cx */ W16((u32)(r_esp+0x10u), (u16)r_ecx);
    /* 006257f6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006257f8: mov word ptr [esp + 0x14], si */ W16((u32)(r_esp+0x14u), (u16)r_esi);
    /* 006257fd: call 0x805804 */ r_esp -= 4; W32(r_esp, 0x625802u); f_00805804();
L_00625802:; BB(0x00625802);
    /* 00625802: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00625805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00625806: ret  */ FN_RET(0x00625740); r_esp += 4; return;
L_00625807:; BB(0x00625807);
    /* 00625807: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00625809: mov ecx, esi */ r_ecx = r_esi;
    /* 0062580b: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x62580eu); call_ind(t); }
    /* 0062580e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00625811: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00625812: ret  */ FN_RET(0x00625740); r_esp += 4; return;
L_00625813:; BB(0x00625813);
    /* 00625813: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00625815: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00625818: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00625819: ret  */ FN_RET(0x00625740); r_esp += 4; return;
}

void f_0062581c(void) /* sub_62581C */
{
    FN_ENTER(0x0062581c);
    /* 0062581c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062581d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062581f: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 00625825: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625828: jne 0x625844 */ if (!fZ) goto L_00625844;
L_0062582a:; BB(0x0062582a);
    /* 0062582a: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062582f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00625831: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x625836u); f_006134c8();
    /* 00625836: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00625839: je 0x625866 */ if (fZ) goto L_00625866;
L_0062583b:; BB(0x0062583b);
    /* 0062583b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0062583d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062583f: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x625842u); call_ind(t); }
    /* 00625842: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00625843: ret  */ FN_RET(0x0062581c); r_esp += 4; return;
L_00625844:; BB(0x00625844);
    /* 00625844: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00625847: jne 0x625866 */ if (!fZ) goto L_00625866;
L_00625849:; BB(0x00625849);
    /* 00625849: movzx eax, word ptr [ebx + 0xcc] */ r_eax = (u32)R16((u32)(r_ebx+0xccu));
    /* 00625850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625851: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x625856u); f_00816eec();
    /* 00625856: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625857: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062585a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062585d: je 0x625866 */ if (fZ) goto L_00625866;
L_0062585f:; BB(0x0062585f);
    /* 0062585f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00625861: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00625863: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x625866u); call_ind(t); }
L_00625866:; BB(0x00625866);
    /* 00625866: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00625867: ret  */ FN_RET(0x0062581c); r_esp += 4; return;
}

void f_00625868(void) /* sub_625868 */
{
    FN_ENTER(0x00625868);
    /* 00625868: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625869: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062586b: mov eax, dword ptr [ebp + 0xc8] */ r_eax = R32((u32)(r_ebp+0xc8u));
    /* 00625871: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625874: jne 0x625889 */ if (!fZ) goto L_00625889;
L_00625876:; BB(0x00625876);
    /* 00625876: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062587b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062587d: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x625882u); f_006134c8();
    /* 00625882: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625885: je 0x6258bc */ if (fZ) goto L_006258bc;
L_00625887:; BB(0x00625887);
    /* 00625887: jmp 0x6258a4 */ goto L_006258a4;
L_00625889:; BB(0x00625889);
    /* 00625889: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062588c: jne 0x6258a4 */ if (!fZ) goto L_006258a4;
L_0062588e:; BB(0x0062588e);
    /* 0062588e: movzx eax, word ptr [ebp + 0xcc] */ r_eax = (u32)R16((u32)(r_ebp+0xccu));
    /* 00625895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625896: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x62589bu); f_00816eec();
    /* 0062589b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062589c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062589f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006258a2: je 0x6258c6 */ if (fZ) goto L_006258c6;
L_006258a4:; BB(0x006258a4);
    /* 006258a4: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006258a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006258a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006258aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006258ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006258ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006258ad: push 0x480 */ { u32 v = 0x480u; r_esp -= 4; W32(r_esp, v); }
    /* 006258b2: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6258b7u); f_008144b0();
    /* 006258b7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006258ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006258bb: ret  */ FN_RET(0x00625868); r_esp += 4; return;
L_006258bc:; BB(0x006258bc);
    /* 006258bc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006258bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006258c1: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x6258c4u); call_ind(t); }
    /* 006258c4: jmp 0x6258a4 */ goto L_006258a4;
L_006258c6:; BB(0x006258c6);
    /* 006258c6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006258c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006258cb: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x6258ceu); call_ind(t); }
    /* 006258ce: jmp 0x6258a4 */ goto L_006258a4;
}

void f_006258d0(void) /* sub_6258D0 */
{
    FN_ENTER(0x006258d0);
    /* 006258d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006258d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006258d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006258d5: call 0x6258f4 */ r_esp -= 4; W32(r_esp, 0x6258dau); f_006258f4();
    /* 006258da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006258de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006258e0: jne 0x6258e6 */ if (!fZ) goto L_006258e6;
L_006258e2:; BB(0x006258e2);
    /* 006258e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006258e3: ret 4 */ FN_RET(0x006258d0); r_esp += 8; return;
L_006258e6:; BB(0x006258e6);
    /* 006258e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006258e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6258ecu); f_005c2f74();
    /* 006258ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006258ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006258ee: ret 4 */ FN_RET(0x006258d0); r_esp += 8; return;
}

void f_006258f4(void) /* sub_6258F4 */
{
    FN_ENTER(0x006258f4);
    /* 006258f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006258f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006258f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006258f9: push 0x8e2904 */ { u32 v = 0x8e2904u; r_esp -= 4; W32(r_esp, v); }
    /* 006258fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625905: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062590c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062590f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625912: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00625915: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00625918: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062591b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062591e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625925: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625928: mov dword ptr [eax], 0xb28820 */ W32((u32)(r_eax), 0xb28820u);
    /* 0062592e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062592f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x625934u); f_007b4e84();
    /* 00625934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625935: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625938: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x62593du); f_007b9c8c();
    /* 0062593d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00625944: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625947: call 0x625600 */ r_esp -= 4; W32(r_esp, 0x62594cu); f_00625600();
    /* 0062594c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062594f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625956: mov esp, ebp */ r_esp = r_ebp;
    /* 00625958: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625959: ret  */ FN_RET(0x006258f4); r_esp += 4; return;
}

void f_0062595c(void) /* sub_62595C */
{
    FN_ENTER(0x0062595c);
    /* 0062595c: fld dword ptr [0x931b24] */ FPUSH(R_F32((u32)(0x931b24u)));
    /* 00625962: ret  */ FN_RET(0x0062595c); r_esp += 4; return;
}

void f_00625964(void) /* sub_625964 */
{
    FN_ENTER(0x00625964);
    /* 00625964: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00625966: mov eax, 1 */ r_eax = 0x1u;
    /* 0062596b: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 00625971: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625973: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 00625979: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x62597eu); f_007b52c4();
    /* 0062597e: ret  */ FN_RET(0x00625964); r_esp += 4; return;
}

void f_00625980(void) /* sub_625980 */
{
    FN_ENTER(0x00625980);
    /* 00625980: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00625981: mov edx, dword ptr [0xa8ed24] */ r_edx = R32((u32)(0xa8ed24u));
    /* 00625987: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625989: je 0x6259cb */ if (fZ) goto L_006259cb;
L_0062598b:; BB(0x0062598b);
    /* 0062598b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0062598e: mov eax, 1 */ r_eax = 0x1u;
    /* 00625993: mov ebx, eax */ r_ebx = r_eax;
    /* 00625995: jmp 0x62599d */ goto L_0062599d;
L_00625997:; BB(0x00625997);
    /* 00625997: mov edx, dword ptr [0xa8ed24] */ r_edx = R32((u32)(0xa8ed24u));
L_0062599d:; BB(0x0062599d);
    /* 0062599d: push dword ptr [edx + ebx*4] */ { u32 v = R32((u32)(r_edx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006259a0: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x6259a5u); f_00800b5c();
    /* 006259a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006259a6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006259a9: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006259ac: jl 0x625997 */ if ((fS!=fO)) goto L_00625997;
L_006259ae:; BB(0x006259ae);
    /* 006259ae: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006259b1: mov eax, dword ptr [0xa8ed24] */ r_eax = R32((u32)(0xa8ed24u));
    /* 006259b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006259b8: je 0x6259cb */ if (fZ) goto L_006259cb;
L_006259ba:; BB(0x006259ba);
    /* 006259ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006259bb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6259c0u); f_00857e98();
    /* 006259c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006259c1: mov dword ptr [0xa8ed24], 0 */ W32((u32)(0xa8ed24u), 0x0u);
L_006259cb:; BB(0x006259cb);
    /* 006259cb: mov ecx, dword ptr [0xa8ed28] */ r_ecx = R32((u32)(0xa8ed28u));
    /* 006259d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006259d3: je 0x6259e8 */ if (fZ) goto L_006259e8;
L_006259d5:; BB(0x006259d5);
    /* 006259d5: je 0x6259de */ if (fZ) goto L_006259de;
L_006259d7:; BB(0x006259d7);
    /* 006259d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006259d9: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6259deu); f_004066a8();
L_006259de:; BB(0x006259de);
    /* 006259de: mov dword ptr [0xa8ed28], 0 */ W32((u32)(0xa8ed28u), 0x0u);
L_006259e8:; BB(0x006259e8);
    /* 006259e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006259e9: ret  */ FN_RET(0x00625980); r_esp += 4; return;
}

void f_006259ec(void)
{
    FN_ENTER(0x006259ec);
    /* 006259ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006259ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006259ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006259f1: push 0x8e292c */ { u32 v = 0x8e292cu; r_esp -= 4; W32(r_esp, v); }
    /* 006259f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006259fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006259fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625a04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625a07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625a0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00625a0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00625a10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00625a13: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00625a18: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00625a1f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x625a24u); f_005caba4();
    /* 00625a24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625a25: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00625a28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625a2a: je 0x625a63 */ if (fZ) goto L_00625a63;
L_00625a2c:; BB(0x00625a2c);
    /* 00625a2c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00625a33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625a3a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00625a3d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00625a43: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625a46: call 0x625a68 */ r_esp -= 4; W32(r_esp, 0x625a4bu); f_00625a68();
    /* 00625a4b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625a4e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00625a55:; BB(0x00625a55);
    /* 00625a55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625a58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625a5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00625a61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625a62: ret  */ FN_RET(0x006259ec); r_esp += 4; return;
L_00625a63:; BB(0x00625a63);
    /* 00625a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00625a65: jmp 0x625a55 */ goto L_00625a55;
}

void f_00625a68(void) /* sub_625A68 */
{
    FN_ENTER(0x00625a68);
    /* 00625a68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625a69: mov ebp, esp */ r_ebp = r_esp;
    /* 00625a6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00625a6d: push 0x8e2948 */ { u32 v = 0x8e2948u; r_esp -= 4; W32(r_esp, v); }
    /* 00625a72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625a78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625a79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625a80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625a83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625a86: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00625a89: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00625a8c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00625a8f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00625a92: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00625a95: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00625a98: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00625a9b: call 0x625658 */ r_esp -= 4; W32(r_esp, 0x625aa0u); f_00625658();
    /* 00625aa0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625aa7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625aaa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00625aad: mov dword ptr [ecx], 0xb28820 */ W32((u32)(r_ecx), 0xb28820u);
    /* 00625ab3: mov eax, dword ptr [0x9c5784] */ r_eax = R32((u32)(0x9c5784u));
    /* 00625ab8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625ab9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00625abc: call dword ptr [0xb28834] */ { u32 t = R32((u32)(0xb28834u)); r_esp -= 4; W32(r_esp, 0x625ac2u); call_ind(t); }
    /* 00625ac2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625ac5: mov eax, dword ptr [0xa8ed28] */ r_eax = R32((u32)(0xa8ed28u));
    /* 00625aca: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00625ad0: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00625ad3: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 00625ad6: mov ebx, dword ptr [ecx + 0x88] */ r_ebx = R32((u32)(r_ecx+0x88u));
    /* 00625adc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00625ade: jl 0x625bbf */ if ((fS!=fO)) goto L_00625bbf;
L_00625ae4:; BB(0x00625ae4);
    /* 00625ae4: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00625ae7: jge 0x625af1 */ if ((fS==fO)) goto L_00625af1;
L_00625ae9:; BB(0x00625ae9);
    /* 00625ae9: mov dword ptr [ecx + 0xd4], ebx */ W32((u32)(r_ecx+0xd4u), r_ebx);
    /* 00625aef: jmp 0x625b00 */ goto L_00625b00;
L_00625af1:; BB(0x00625af1);
    /* 00625af1: mov dword ptr [ecx + 0xd4], 3 */ W32((u32)(r_ecx+0xd4u), 0x3u);
    /* 00625afb: mov ebx, 3 */ r_ebx = 0x3u;
L_00625b00:; BB(0x00625b00);
    /* 00625b00: mov edx, dword ptr [0xa8ed24] */ r_edx = R32((u32)(0xa8ed24u));
    /* 00625b06: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00625b08: mov ebx, dword ptr [edx + ebx*4] */ r_ebx = R32((u32)(r_edx+r_ebx*4));
    /* 00625b0b: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 00625b0e: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 00625b14: push 0x9c56e0 */ { u32 v = 0x9c56e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625b19: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00625b1c: mov dword ptr [ecx + 0xbc], esi */ W32((u32)(r_ecx+0xbcu), r_esi);
    /* 00625b22: fild dword ptr [esi + 4] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x4u)));
    /* 00625b25: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00625b28: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00625b2b: fadd dword ptr [edi*4 + 0x931b10] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x931b10u));
    /* 00625b32: fadd dword ptr [0x931b20] */ ST(0) = ST(0) + R_F32((u32)(0x931b20u));
    /* 00625b38: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 00625b3e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x625b43u); f_007b9a88();
    /* 00625b43: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00625b46: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x625b4bu); f_007b999c();
    /* 00625b4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625b4c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625b4f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x625b54u); f_007b4f54();
    /* 00625b54: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625b57: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00625b5d: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 00625b63: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00625b68: jle 0x625b76 */ if ((fZ||fS!=fO)) goto L_00625b76;
L_00625b6a:; BB(0x00625b6a);
    /* 00625b6a: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 00625b74: jmp 0x625b84 */ goto L_00625b84;
L_00625b76:; BB(0x00625b76);
    /* 00625b76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00625b78: jl 0x625bb3 */ if ((fS!=fO)) goto L_00625bb3;
L_00625b7a:; BB(0x00625b7a);
    /* 00625b7a: mov dword ptr [edx + 0xc8], 2 */ W32((u32)(r_edx+0xc8u), 0x2u);
L_00625b84:; BB(0x00625b84);
    /* 00625b84: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625b87: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00625b8a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00625b8d: mov eax, edx */ r_eax = r_edx;
    /* 00625b8f: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 00625b99: mov dword ptr [edx + 0xc4], 0x42200000 */ W32((u32)(r_edx+0xc4u), 0x42200000u);
    /* 00625ba3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625ba6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625bad: mov esp, ebp */ r_esp = r_ebp;
    /* 00625baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625bb0: ret 8 */ FN_RET(0x00625a68); r_esp += 12; return;
L_00625bb3:; BB(0x00625bb3);
    /* 00625bb3: mov dword ptr [edx + 0xc8], 1 */ W32((u32)(r_edx+0xc8u), 0x1u);
    /* 00625bbd: jmp 0x625b84 */ goto L_00625b84;
L_00625bbf:; BB(0x00625bbf);
    /* 00625bbf: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 00625bc9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00625bcb: jmp 0x625b00 */ goto L_00625b00;
}

void f_00625bd0(void) /* sub_625BD0 */
{
    FN_ENTER(0x00625bd0);
    /* 00625bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00625bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00625bd5: push 0x8e2970 */ { u32 v = 0x8e2970u; r_esp -= 4; W32(r_esp, v); }
    /* 00625bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625be1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625be8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625beb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625bee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00625bf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00625bf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00625bf7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00625bfc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00625c03: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x625c08u); f_008581c5();
    /* 00625c08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625c09: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00625c0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625c0e: je 0x625cb6 */ if (fZ) goto L_00625cb6;
L_00625c14:; BB(0x00625c14);
    /* 00625c14: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00625c1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625c22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625c25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00625c27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625c28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625c29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625c2a: push 0x9c5774 */ { u32 v = 0x9c5774u; r_esp -= 4; W32(r_esp, v); }
    /* 00625c2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00625c31: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x625c36u); f_005b7a84();
    /* 00625c36: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625c39: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00625c40:; BB(0x00625c40);
    /* 00625c40: mov dword ptr [0xa8ed28], eax */ W32((u32)(0xa8ed28u), r_eax);
    /* 00625c45: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00625c4c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00625c4e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x625c53u); f_008581c5();
    /* 00625c53: mov edx, dword ptr [0xa8ed28] */ r_edx = R32((u32)(0xa8ed28u));
    /* 00625c59: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00625c5f: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 00625c62: mov dword ptr [0xa8ed24], eax */ W32((u32)(0xa8ed24u), r_eax);
    /* 00625c67: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00625c69: push 0x931b74 */ { u32 v = 0x931b74u; r_esp -= 4; W32(r_esp, v); }
    /* 00625c6e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x625c73u); f_008009dc();
    /* 00625c73: push 0x931b8c */ { u32 v = 0x931b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00625c78: mov edx, dword ptr [0xa8ed24] */ r_edx = R32((u32)(0xa8ed24u));
    /* 00625c7e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00625c81: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x625c86u); f_008009dc();
    /* 00625c86: push 0x931ba4 */ { u32 v = 0x931ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 00625c8b: mov edx, dword ptr [0xa8ed24] */ r_edx = R32((u32)(0xa8ed24u));
    /* 00625c91: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00625c94: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x625c99u); f_008009dc();
    /* 00625c99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00625c9c: mov edx, dword ptr [0xa8ed24] */ r_edx = R32((u32)(0xa8ed24u));
    /* 00625ca2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00625ca5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00625ca8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625cab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625cb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00625cb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625cb5: ret  */ FN_RET(0x00625bd0); r_esp += 4; return;
L_00625cb6:; BB(0x00625cb6);
    /* 00625cb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00625cb8: jmp 0x625c40 */ goto L_00625c40;
}

void f_00625cbc(void) /* sub_625CBC */
{
    FN_ENTER(0x00625cbc);
    /* 00625cbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00625cbd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00625cbf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00625cc1: call 0x625ce0 */ r_esp -= 4; W32(r_esp, 0x625cc6u); f_00625ce0();
    /* 00625cc6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00625cca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00625ccc: jne 0x625cd2 */ if (!fZ) goto L_00625cd2;
L_00625cce:; BB(0x00625cce);
    /* 00625cce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00625ccf: ret 4 */ FN_RET(0x00625cbc); r_esp += 8; return;
L_00625cd2:; BB(0x00625cd2);
    /* 00625cd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00625cd3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x625cd8u); f_005c2f74();
    /* 00625cd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625cd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00625cda: ret 4 */ FN_RET(0x00625cbc); r_esp += 8; return;
}

void f_00625ce0(void) /* sub_625CE0 */
{
    FN_ENTER(0x00625ce0);
    /* 00625ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00625ce3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00625ce5: push 0x8e298c */ { u32 v = 0x8e298cu; r_esp -= 4; W32(r_esp, v); }
    /* 00625cea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625cf1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625cf8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625cfb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625cfe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00625d01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00625d04: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00625d07: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00625d0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625d11: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625d14: mov dword ptr [eax], 0xb28900 */ W32((u32)(r_eax), 0xb28900u);
    /* 00625d1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625d1b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x625d20u); f_007b4e84();
    /* 00625d20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625d21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625d24: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x625d29u); f_007b9c8c();
    /* 00625d29: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00625d30: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625d33: call 0x625600 */ r_esp -= 4; W32(r_esp, 0x625d38u); f_00625600();
    /* 00625d38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625d3b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625d42: mov esp, ebp */ r_esp = r_ebp;
    /* 00625d44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625d45: ret  */ FN_RET(0x00625ce0); r_esp += 4; return;
}

void f_00625d48(void) /* sub_625D48 */
{
    FN_ENTER(0x00625d48);
    /* 00625d48: fld dword ptr [0x931bd4] */ FPUSH(R_F32((u32)(0x931bd4u)));
    /* 00625d4e: ret  */ FN_RET(0x00625d48); r_esp += 4; return;
}

void f_00625d50(void) /* sub_625D50 */
{
    FN_ENTER(0x00625d50);
    /* 00625d50: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00625d52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00625d54: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 00625d5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625d5b: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 00625d61: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x625d66u); f_007b52ec();
    /* 00625d66: ret  */ FN_RET(0x00625d50); r_esp += 4; return;
}

void f_00625d68(void) /* sub_625D68 */
{
    FN_ENTER(0x00625d68);
    /* 00625d68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00625d69: mov edx, dword ptr [0xa8ed30] */ r_edx = R32((u32)(0xa8ed30u));
    /* 00625d6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625d71: je 0x625db3 */ if (fZ) goto L_00625db3;
L_00625d73:; BB(0x00625d73);
    /* 00625d73: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00625d76: mov eax, 1 */ r_eax = 0x1u;
    /* 00625d7b: mov ebx, eax */ r_ebx = r_eax;
    /* 00625d7d: jmp 0x625d85 */ goto L_00625d85;
L_00625d7f:; BB(0x00625d7f);
    /* 00625d7f: mov edx, dword ptr [0xa8ed30] */ r_edx = R32((u32)(0xa8ed30u));
L_00625d85:; BB(0x00625d85);
    /* 00625d85: push dword ptr [edx + ebx*4] */ { u32 v = R32((u32)(r_edx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00625d88: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x625d8du); f_00800b5c();
    /* 00625d8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625d8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00625d91: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00625d94: jl 0x625d7f */ if ((fS!=fO)) goto L_00625d7f;
L_00625d96:; BB(0x00625d96);
    /* 00625d96: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00625d99: mov eax, dword ptr [0xa8ed30] */ r_eax = R32((u32)(0xa8ed30u));
    /* 00625d9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625da0: je 0x625db3 */ if (fZ) goto L_00625db3;
L_00625da2:; BB(0x00625da2);
    /* 00625da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625da3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x625da8u); f_00857e98();
    /* 00625da8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625da9: mov dword ptr [0xa8ed30], 0 */ W32((u32)(0xa8ed30u), 0x0u);
L_00625db3:; BB(0x00625db3);
    /* 00625db3: mov ecx, dword ptr [0xa8ed34] */ r_ecx = R32((u32)(0xa8ed34u));
    /* 00625db9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00625dbb: je 0x625dd0 */ if (fZ) goto L_00625dd0;
L_00625dbd:; BB(0x00625dbd);
    /* 00625dbd: je 0x625dc6 */ if (fZ) goto L_00625dc6;
L_00625dbf:; BB(0x00625dbf);
    /* 00625dbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00625dc1: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x625dc6u); f_004066a8();
L_00625dc6:; BB(0x00625dc6);
    /* 00625dc6: mov dword ptr [0xa8ed34], 0 */ W32((u32)(0xa8ed34u), 0x0u);
L_00625dd0:; BB(0x00625dd0);
    /* 00625dd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625dd1: ret  */ FN_RET(0x00625d68); r_esp += 4; return;
}

void f_00625dd4(void)
{
    FN_ENTER(0x00625dd4);
    /* 00625dd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625dd5: mov ebp, esp */ r_ebp = r_esp;
    /* 00625dd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00625dd9: push 0x8e29b4 */ { u32 v = 0x8e29b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00625dde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625de4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625de5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625dec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625def: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625df2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00625df5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00625df8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00625dfb: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00625e00: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00625e07: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x625e0cu); f_005caba4();
    /* 00625e0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625e0d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00625e10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625e12: je 0x625e4b */ if (fZ) goto L_00625e4b;
L_00625e14:; BB(0x00625e14);
    /* 00625e14: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00625e1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625e22: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00625e25: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00625e2b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625e2e: call 0x625e50 */ r_esp -= 4; W32(r_esp, 0x625e33u); f_00625e50();
    /* 00625e33: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625e36: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00625e3d:; BB(0x00625e3d);
    /* 00625e3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625e40: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625e47: mov esp, ebp */ r_esp = r_ebp;
    /* 00625e49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625e4a: ret  */ FN_RET(0x00625dd4); r_esp += 4; return;
L_00625e4b:; BB(0x00625e4b);
    /* 00625e4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00625e4d: jmp 0x625e3d */ goto L_00625e3d;
}

void f_00625e50(void) /* sub_625E50 */
{
    FN_ENTER(0x00625e50);
    /* 00625e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00625e53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00625e55: push 0x8e29d0 */ { u32 v = 0x8e29d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625e5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625e60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625e61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625e68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625e6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625e6e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00625e71: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00625e74: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00625e77: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00625e7a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00625e7d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00625e80: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00625e83: call 0x625658 */ r_esp -= 4; W32(r_esp, 0x625e88u); f_00625658();
    /* 00625e88: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625e8f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625e92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00625e95: mov dword ptr [ecx], 0xb28900 */ W32((u32)(r_ecx), 0xb28900u);
    /* 00625e9b: mov eax, dword ptr [0x9c5844] */ r_eax = R32((u32)(0x9c5844u));
    /* 00625ea0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625ea1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00625ea4: call dword ptr [0xb28914] */ { u32 t = R32((u32)(0xb28914u)); r_esp -= 4; W32(r_esp, 0x625eaau); call_ind(t); }
    /* 00625eaa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625ead: mov eax, dword ptr [0xa8ed34] */ r_eax = R32((u32)(0xa8ed34u));
    /* 00625eb2: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00625eb8: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00625ebb: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 00625ebe: mov ebx, dword ptr [ecx + 0x88] */ r_ebx = R32((u32)(r_ecx+0x88u));
    /* 00625ec4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00625ec6: jl 0x625fa7 */ if ((fS!=fO)) goto L_00625fa7;
L_00625ecc:; BB(0x00625ecc);
    /* 00625ecc: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00625ecf: jge 0x625ed9 */ if ((fS==fO)) goto L_00625ed9;
L_00625ed1:; BB(0x00625ed1);
    /* 00625ed1: mov dword ptr [ecx + 0xd4], ebx */ W32((u32)(r_ecx+0xd4u), r_ebx);
    /* 00625ed7: jmp 0x625ee8 */ goto L_00625ee8;
L_00625ed9:; BB(0x00625ed9);
    /* 00625ed9: mov dword ptr [ecx + 0xd4], 3 */ W32((u32)(r_ecx+0xd4u), 0x3u);
    /* 00625ee3: mov ebx, 3 */ r_ebx = 0x3u;
L_00625ee8:; BB(0x00625ee8);
    /* 00625ee8: mov edx, dword ptr [0xa8ed30] */ r_edx = R32((u32)(0xa8ed30u));
    /* 00625eee: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00625ef0: mov ebx, dword ptr [edx + ebx*4] */ r_ebx = R32((u32)(r_edx+r_ebx*4));
    /* 00625ef3: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 00625ef6: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 00625efc: push 0x9c57a0 */ { u32 v = 0x9c57a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625f01: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00625f04: mov dword ptr [ecx + 0xbc], esi */ W32((u32)(r_ecx+0xbcu), r_esi);
    /* 00625f0a: fild dword ptr [esi + 4] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x4u)));
    /* 00625f0d: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00625f10: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00625f13: fadd dword ptr [edi*4 + 0x931bc0] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x931bc0u));
    /* 00625f1a: fadd dword ptr [0x931bd0] */ ST(0) = ST(0) + R_F32((u32)(0x931bd0u));
    /* 00625f20: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 00625f26: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x625f2bu); f_007b9a88();
    /* 00625f2b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00625f2e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x625f33u); f_007b999c();
    /* 00625f33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625f34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625f37: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x625f3cu); f_007b4f54();
    /* 00625f3c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625f3f: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00625f45: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 00625f4b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00625f50: jle 0x625f5e */ if ((fZ||fS!=fO)) goto L_00625f5e;
L_00625f52:; BB(0x00625f52);
    /* 00625f52: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 00625f5c: jmp 0x625f6c */ goto L_00625f6c;
L_00625f5e:; BB(0x00625f5e);
    /* 00625f5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00625f60: jl 0x625f9b */ if ((fS!=fO)) goto L_00625f9b;
L_00625f62:; BB(0x00625f62);
    /* 00625f62: mov dword ptr [edx + 0xc8], 2 */ W32((u32)(r_edx+0xc8u), 0x2u);
L_00625f6c:; BB(0x00625f6c);
    /* 00625f6c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625f6f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00625f72: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00625f75: mov eax, edx */ r_eax = r_edx;
    /* 00625f77: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 00625f81: mov dword ptr [edx + 0xc4], 0x42200000 */ W32((u32)(r_edx+0xc4u), 0x42200000u);
    /* 00625f8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625f8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625f95: mov esp, ebp */ r_esp = r_ebp;
    /* 00625f97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625f98: ret 8 */ FN_RET(0x00625e50); r_esp += 12; return;
L_00625f9b:; BB(0x00625f9b);
    /* 00625f9b: mov dword ptr [edx + 0xc8], 1 */ W32((u32)(r_edx+0xc8u), 0x1u);
    /* 00625fa5: jmp 0x625f6c */ goto L_00625f6c;
L_00625fa7:; BB(0x00625fa7);
    /* 00625fa7: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 00625fb1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00625fb3: jmp 0x625ee8 */ goto L_00625ee8;
}

void f_00625f6e(void)
{
    FN_ENTER(0x00625f6e);
    goto L_00625f6e;
L_00625efb:; BB(0x00625efb);
    /* 00625efb: add byte ptr [eax - 0x60], ch */ { u32 ad = (u32)(r_eax+0xffffffa0u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00625efe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00625eff: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 00625f00: add byte ptr [ebx - 0x4e76fb90], cl */ { u32 ad = (u32)(r_ebx+0xb1890470u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00625f06: mov esp, 0xdb000000 */ r_esp = 0xdb000000u;
    /* 00625f0b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00625f0c: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 00625f0e: jle 0x625f14 */ if ((fZ||fS!=fO)) goto L_00625f14;
L_00625f10:; BB(0x00625f10);
    /* 00625f10: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00625f13: fadd dword ptr [edi*4 + 0x931bc0] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x931bc0u));
L_00625f14:; BB(0x00625f14);
    /* 00625f14: add al, 0xbd */ {  u32 a = (u8)r_eax; u32 b = 0xbdu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00625f16: rcr byte ptr [ebx], 0x93 */ UNSUP(0x00625f16, "rcr byte ptr [ebx], 0x93");
    /* 00625f19: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00625f1a: fadd dword ptr [0x931bd0] */ ST(0) = ST(0) + R_F32((u32)(0x931bd0u));
    /* 00625f1b: add eax, 0x931bd0 */ {  u32 a = r_eax; u32 b = 0x931bd0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625f20: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 00625f26: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x625f2bu); f_007b9a88();
    /* 00625f2b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00625f2e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x625f33u); f_007b999c();
    /* 00625f33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625f34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625f37: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x625f3cu); f_007b4f54();
    /* 00625f3c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625f3f: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00625f45: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 00625f4b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00625f50: jle 0x625f5e */ if ((fZ||fS!=fO)) goto L_00625f5e;
L_00625f52:; BB(0x00625f52);
    /* 00625f52: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
L_00625f56:; BB(0x00625f56);
    /* 00625f56: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00625f58: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00625f5a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00625f5c: jmp 0x625f6c */ goto L_00625f6c;
L_00625f5e:; BB(0x00625f5e);
    /* 00625f5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00625f60: jl 0x625f9b */ if ((fS!=fO)) goto L_00625f9b;
L_00625f62:; BB(0x00625f62);
    /* 00625f62: mov dword ptr [edx + 0xc8], 2 */ W32((u32)(r_edx+0xc8u), 0x2u);
L_00625f6c:; BB(0x00625f6c);
    /* 00625f6c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
L_00625f6e:; BB(0x00625f6e);
    /* 00625f6e: loopne 0x625efb */ r_ecx--; if (r_ecx && !fZ) goto L_00625efb;
    /* 00625f6f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00625f70: jne 0x625f56 */ if (!fZ) goto L_00625f56;
L_00625f72:; BB(0x00625f72);
    /* 00625f72: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00625f75: mov eax, edx */ r_eax = r_edx;
    /* 00625f77: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 00625f81: mov dword ptr [edx + 0xc4], 0x42200000 */ W32((u32)(r_edx+0xc4u), 0x42200000u);
    /* 00625f8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625f8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625f95: mov esp, ebp */ r_esp = r_ebp;
    /* 00625f97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625f98: ret 8 */ FN_RET(0x00625f6e); r_esp += 12; return;
L_00625f9b:; BB(0x00625f9b);
    /* 00625f9b: mov dword ptr [edx + 0xc8], 1 */ W32((u32)(r_edx+0xc8u), 0x1u);
    /* 00625fa5: jmp 0x625f6c */ goto L_00625f6c;
}

void f_00625f74(void)
{
    FN_ENTER(0x00625f74);
    /* 00625f74: call 0x832a2204 */ r_esp -= 4; W32(r_esp, 0x625f79u); f_832a2204();
    /* 00625f79: rol byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax); u32 c = (0u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 00625f7c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00625f7e: add al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 00625f80: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00625f81: mov dword ptr [edx + 0xc4], 0x42200000 */ W32((u32)(r_edx+0xc4u), 0x42200000u);
    /* 00625f8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625f8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625f95: mov esp, ebp */ r_esp = r_ebp;
    /* 00625f97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625f98: ret 8 */ FN_RET(0x00625f74); r_esp += 12; return;
}

void f_00625fb8(void) /* sub_625FB8 */
{
    FN_ENTER(0x00625fb8);
    /* 00625fb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625fb9: mov ebp, esp */ r_ebp = r_esp;
    /* 00625fbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00625fbd: push 0x8e29f8 */ { u32 v = 0x8e29f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00625fc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625fc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625fc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00625fd0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625fd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00625fd6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00625fd9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00625fdc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00625fdf: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00625fe4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00625feb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x625ff0u); f_008581c5();
    /* 00625ff0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625ff1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00625ff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625ff6: je 0x62609e */ if (fZ) goto L_0062609e;
L_00625ffc:; BB(0x00625ffc);
    /* 00625ffc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00626003: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062600a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062600d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062600f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626011: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626012: push 0x9c5834 */ { u32 v = 0x9c5834u; r_esp -= 4; W32(r_esp, v); }
    /* 00626017: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00626019: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62601eu); f_005b7a84();
    /* 0062601e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626021: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00626028:; BB(0x00626028);
    /* 00626028: mov dword ptr [0xa8ed34], eax */ W32((u32)(0xa8ed34u), r_eax);
    /* 0062602d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00626034: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00626036: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62603bu); f_008581c5();
    /* 0062603b: mov edx, dword ptr [0xa8ed34] */ r_edx = R32((u32)(0xa8ed34u));
    /* 00626041: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00626047: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0062604a: mov dword ptr [0xa8ed30], eax */ W32((u32)(0xa8ed30u), r_eax);
    /* 0062604f: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00626051: push 0x931b74 */ { u32 v = 0x931b74u; r_esp -= 4; W32(r_esp, v); }
    /* 00626056: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62605bu); f_008009dc();
    /* 0062605b: push 0x931b8c */ { u32 v = 0x931b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00626060: mov edx, dword ptr [0xa8ed30] */ r_edx = R32((u32)(0xa8ed30u));
    /* 00626066: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00626069: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62606eu); f_008009dc();
    /* 0062606e: push 0x931ba4 */ { u32 v = 0x931ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 00626073: mov edx, dword ptr [0xa8ed30] */ r_edx = R32((u32)(0xa8ed30u));
    /* 00626079: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0062607c: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626081u); f_008009dc();
    /* 00626081: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00626084: mov edx, dword ptr [0xa8ed30] */ r_edx = R32((u32)(0xa8ed30u));
    /* 0062608a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062608d: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00626090: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626093: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062609a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062609c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062609d: ret  */ FN_RET(0x00625fb8); r_esp += 4; return;
L_0062609e:; BB(0x0062609e);
    /* 0062609e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006260a0: jmp 0x626028 */ goto L_00626028;
}

