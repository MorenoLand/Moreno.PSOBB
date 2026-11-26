#include "protos.h"

void f_0060373c(void) /* sub_60373C */
{
    FN_ENTER(0x0060373c);
    /* 0060373c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0060373d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060373e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060373f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00603740: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603743: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00603745: mov edx, dword ptr [ebx + 0x3e0] */ r_edx = R32((u32)(r_ebx+0x3e0u));
    /* 0060374b: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00603750: lea eax, [edx + 0x23600] */ r_eax = (u32)(r_edx+0x23600u);
    /* 00603756: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00603758: jae 0x60379f */ if (!fC) goto L_0060379f;
L_0060375a:; BB(0x0060375a);
    /* 0060375a: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0060375c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060375e: je 0x603795 */ if (fZ) goto L_00603795;
L_00603760:; BB(0x00603760);
    /* 00603760: mov ebp, dword ptr [edx + 0x14] */ r_ebp = R32((u32)(r_edx+0x14u));
    /* 00603763: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603765: je 0x603771 */ if (fZ) goto L_00603771;
L_00603767:; BB(0x00603767);
    /* 00603767: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 0060376a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060376c: jne 0x603771 */ if (!fZ) goto L_00603771;
L_0060376e:; BB(0x0060376e);
    /* 0060376e: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00603771:; BB(0x00603771);
    /* 00603771: mov ebp, dword ptr [edx + 0x188] */ r_ebp = R32((u32)(r_edx+0x188u));
    /* 00603777: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603779: je 0x603788 */ if (fZ) goto L_00603788;
L_0060377b:; BB(0x0060377b);
    /* 0060377b: mov ebp, dword ptr [edx + 0x184] */ r_ebp = R32((u32)(r_edx+0x184u));
    /* 00603781: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603783: jne 0x603788 */ if (!fZ) goto L_00603788;
L_00603785:; BB(0x00603785);
    /* 00603785: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00603788:; BB(0x00603788);
    /* 00603788: mov ebp, dword ptr [edx + 0x2f8] */ r_ebp = R32((u32)(r_edx+0x2f8u));
    /* 0060378e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603790: jne 0x603795 */ if (!fZ) goto L_00603795;
L_00603792:; BB(0x00603792);
    /* 00603792: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00603795:; BB(0x00603795);
    /* 00603795: add edx, 0x46c */ {  u32 a = r_edx; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060379b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0060379d: jb 0x60375a */ if (fC) goto L_0060375a;
L_0060379f:; BB(0x0060379f);
    /* 0060379f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006037a1: jle 0x6039b8 */ if ((fZ||fS!=fO)) goto L_006039b8;
L_006037a7:; BB(0x006037a7);
    /* 006037a7: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 006037ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006037af: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 006037b2: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006037b5: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006037b8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006037bb: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006037be: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 006037c2: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006037c6: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006037ca: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006037ce: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006037d1: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006037d5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006037d8: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006037dc: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006037df: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006037e3: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006037e6: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006037ea: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006037ed: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006037f1: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006037f4: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006037f8: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006037fb: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006037ff: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00603802: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00603806: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00603809: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0060380d: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00603810: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00603814: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00603817: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0060381b: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0060381e: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00603822: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00603825: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00603829: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0060382c: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00603830: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00603833: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00603837: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0060383a: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0060383e: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00603841: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00603845: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 00603848: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0060384c: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0060384f: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00603853: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00603856: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0060385a: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 0060385d: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00603861: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00603864: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 00603867: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0060386b: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0060386f: mov esi, dword ptr [ebx + 0x3e0] */ r_esi = R32((u32)(r_ebx+0x3e0u));
    /* 00603875: lea eax, [esi + 0x23600] */ r_eax = (u32)(r_esi+0x23600u);
    /* 0060387b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0060387d: jae 0x6038e1 */ if (!fC) goto L_006038e1;
L_0060387f:; BB(0x0060387f);
    /* 0060387f: mov edx, eax */ r_edx = r_eax;
    /* 00603881: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00603883: cmp edx, 0x1a88 */ {  u32 a = r_edx; u32 b = 0x1a88u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00603889: jb 0x6038d1 */ if (fC) goto L_006038d1;
L_0060388b:; BB(0x0060388b);
    /* 0060388b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0060388d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060388f: je 0x6038e3 */ if (fZ) goto L_006038e3;
L_00603891:; BB(0x00603891);
    /* 00603891: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603897: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00603899: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060389b: je 0x6038e3 */ if (fZ) goto L_006038e3;
L_0060389d:; BB(0x0060389d);
    /* 0060389d: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006038a3: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006038a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006038a7: je 0x6038e3 */ if (fZ) goto L_006038e3;
L_006038a9:; BB(0x006038a9);
    /* 006038a9: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006038af: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006038b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006038b3: je 0x6038e3 */ if (fZ) goto L_006038e3;
L_006038b5:; BB(0x006038b5);
    /* 006038b5: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006038bb: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006038bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006038bf: je 0x6038e3 */ if (fZ) goto L_006038e3;
L_006038c1:; BB(0x006038c1);
    /* 006038c1: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006038c7: lea edx, [eax - 0x1a88] */ r_edx = (u32)(r_eax+0xffffe578u);
    /* 006038cd: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006038cf: jbe 0x60388b */ if ((fC||fZ)) goto L_0060388b;
L_006038d1:; BB(0x006038d1);
    /* 006038d1: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006038d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006038d5: je 0x6038e3 */ if (fZ) goto L_006038e3;
L_006038d7:; BB(0x006038d7);
    /* 006038d7: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006038dd: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006038df: jb 0x6038d1 */ if (fC) goto L_006038d1;
L_006038e1:; BB(0x006038e1);
    /* 006038e1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006038e3:; BB(0x006038e3);
    /* 006038e3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006038e5: je 0x6039c2 */ if (fZ) goto L_006039c2;
L_006038eb:; BB(0x006038eb);
    /* 006038eb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006038ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006038ef: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 006038f2: lea ebp, [esi + 0x188] */ r_ebp = (u32)(r_esi+0x188u);
    /* 006038f8: lea edx, [esi + 0x2fc] */ r_edx = (u32)(r_esi+0x2fcu);
    /* 006038fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006038ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603900: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00603901: call 0x4e6914 */ r_esp -= 4; W32(r_esp, 0x603906u); f_004e6914();
    /* 00603906: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0060390a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060390b: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x603910u); f_004e6f24();
    /* 00603910: mov ebp, eax */ r_ebp = r_eax;
    /* 00603912: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603915: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 00603918: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 0060391b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060391d: je 0x603937 */ if (fZ) goto L_00603937;
L_0060391f:; BB(0x0060391f);
    /* 0060391f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603920: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00603921: lea edx, [edi + 0x168] */ r_edx = (u32)(r_edi+0x168u);
    /* 00603927: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603928: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00603929: call 0x4edb08 */ r_esp -= 4; W32(r_esp, 0x60392eu); f_004edb08();
    /* 0060392e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603931: mov dword ptr [edi + 0x170], eax */ W32((u32)(r_edi+0x170u), r_eax);
L_00603937:; BB(0x00603937);
    /* 00603937: mov edx, dword ptr [esi + 0x188] */ r_edx = R32((u32)(r_esi+0x188u));
    /* 0060393d: lea edi, [esi + 0x184] */ r_edi = (u32)(r_esi+0x184u);
    /* 00603943: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603945: je 0x60395f */ if (fZ) goto L_0060395f;
L_00603947:; BB(0x00603947);
    /* 00603947: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00603949: lea edx, [edi + 0x168] */ r_edx = (u32)(r_edi+0x168u);
    /* 0060394f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603950: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00603951: call 0x4edb08 */ r_esp -= 4; W32(r_esp, 0x603956u); f_004edb08();
    /* 00603956: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603959: mov dword ptr [edi + 0x170], eax */ W32((u32)(r_edi+0x170u), r_eax);
L_0060395f:; BB(0x0060395f);
    /* 0060395f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603960: lea edi, [esi + 0x2f8] */ r_edi = (u32)(r_esi+0x2f8u);
    /* 00603966: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00603967: lea edx, [esi + 0x460] */ r_edx = (u32)(r_esi+0x460u);
    /* 0060396d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060396e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060396f: call 0x4edb08 */ r_esp -= 4; W32(r_esp, 0x603974u); f_004edb08();
    /* 00603974: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603977: mov dword ptr [edi + 0x170], eax */ W32((u32)(r_edi+0x170u), r_eax);
    /* 0060397d: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 00603983: movzx ebp, word ptr [esp + 0x38] */ r_ebp = (u32)R16((u32)(r_esp+0x38u));
    /* 00603988: mov word ptr [esi + 4], bp */ W16((u32)(r_esi+0x4u), (u16)r_ebp);
    /* 0060398c: movzx edi, word ptr [esp + 0x3a] */ r_edi = (u32)R16((u32)(r_esp+0x3au));
    /* 00603991: mov word ptr [esi + 6], di */ W16((u32)(r_esi+0x6u), (u16)r_edi);
    /* 00603995: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 0060399a: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0060399e: movzx edx, word ptr [esp + 0x3e] */ r_edx = (u32)R16((u32)(r_esp+0x3eu));
    /* 006039a3: mov word ptr [esi + 0xa], dx */ W16((u32)(r_esi+0xau), (u16)r_edx);
    /* 006039a7: movzx ecx, word ptr [esp + 0x40] */ r_ecx = (u32)R16((u32)(r_esp+0x40u));
    /* 006039ac: mov word ptr [esi + 0xc], cx */ W16((u32)(r_esi+0xcu), (u16)r_ecx);
    /* 006039b0: movzx ebx, byte ptr [esp + 0x30] */ r_ebx = (u32)R8((u32)(r_esp+0x30u));
    /* 006039b5: mov byte ptr [esi + 0xe], bl */ W8((u32)(r_esi+0xeu), (u8)r_ebx);
L_006039b8:; BB(0x006039b8);
    /* 006039b8: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006039bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006039bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006039bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006039be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006039bf: ret 4 */ FN_RET(0x0060373c); r_esp += 8; return;
L_006039c2:; BB(0x006039c2);
    /* 006039c2: call 0x4e71e0 */ r_esp -= 4; W32(r_esp, 0x6039c7u); f_004e71e0();
    /* 006039c7: mov edx, dword ptr [ebx + 0x3e0] */ r_edx = R32((u32)(r_ebx+0x3e0u));
    /* 006039cd: lea eax, [edx + 0x23194] */ r_eax = (u32)(r_edx+0x23194u);
    /* 006039d3: mov esi, 4 */ r_esi = 0x4u;
L_006039d8:; BB(0x006039d8);
    /* 006039d8: mov ebp, eax */ r_ebp = r_eax;
    /* 006039da: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006039dc: jb 0x603b1c */ if (fC) goto L_00603b1c;
L_006039e2:; BB(0x006039e2);
    /* 006039e2: mov edi, dword ptr [ebx + 0x3e4] */ r_edi = R32((u32)(r_ebx+0x3e4u));
    /* 006039e8: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 006039ec: mov dword ptr [esp + 0x74], esi */ W32((u32)(r_esp+0x74u), r_esi);
    /* 006039f0: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
L_006039f4:; BB(0x006039f4);
    /* 006039f4: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006039f6: je 0x603b02 */ if (fZ) goto L_00603b02;
L_006039fc:; BB(0x006039fc);
    /* 006039fc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006039ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603a01: je 0x603b02 */ if (fZ) goto L_00603b02;
L_00603a07:; BB(0x00603a07);
    /* 00603a07: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00603a0a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603a0c: je 0x603a19 */ if (fZ) goto L_00603a19;
L_00603a0e:; BB(0x00603a0e);
    /* 00603a0e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00603a11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603a13: je 0x603b02 */ if (fZ) goto L_00603b02;
L_00603a19:; BB(0x00603a19);
    /* 00603a19: mov eax, dword ptr [ebp + 0x188] */ r_eax = R32((u32)(r_ebp+0x188u));
    /* 00603a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603a21: je 0x603a31 */ if (fZ) goto L_00603a31;
L_00603a23:; BB(0x00603a23);
    /* 00603a23: mov eax, dword ptr [ebp + 0x184] */ r_eax = R32((u32)(r_ebp+0x184u));
    /* 00603a29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603a2b: je 0x603b02 */ if (fZ) goto L_00603b02;
L_00603a31:; BB(0x00603a31);
    /* 00603a31: mov eax, dword ptr [ebp + 0x2f8] */ r_eax = R32((u32)(r_ebp+0x2f8u));
    /* 00603a37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603a39: je 0x603b02 */ if (fZ) goto L_00603b02;
L_00603a3f:; BB(0x00603a3f);
    /* 00603a3f: mov ebx, dword ptr [esp + 0x78] */ r_ebx = R32((u32)(r_esp+0x78u));
    /* 00603a43: mov ecx, dword ptr [ebx + 0x3cc] */ r_ecx = R32((u32)(r_ebx+0x3ccu));
    /* 00603a49: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00603a4d: cmp ax, word ptr [ecx + 0x38] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0x38u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00603a51: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00603a56: je 0x603a5d */ if (fZ) goto L_00603a5d;
L_00603a58:; BB(0x00603a58);
    /* 00603a58: mov ebx, 1 */ r_ebx = 0x1u;
L_00603a5d:; BB(0x00603a5d);
    /* 00603a5d: movsx eax, word ptr [ebp + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00603a61: cmp ax, word ptr [ecx + 0x3a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0x3au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00603a65: je 0x603a6a */ if (fZ) goto L_00603a6a;
L_00603a67:; BB(0x00603a67);
    /* 00603a67: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00603a6a:; BB(0x00603a6a);
    /* 00603a6a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00603a6e: cmp ax, word ptr [ecx + 0x3c] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0x3cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00603a72: je 0x603a77 */ if (fZ) goto L_00603a77;
L_00603a74:; BB(0x00603a74);
    /* 00603a74: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00603a77:; BB(0x00603a77);
    /* 00603a77: movsx eax, word ptr [ebp + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00603a7b: cmp ax, word ptr [ecx + 0x3e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0x3eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00603a7f: je 0x603a84 */ if (fZ) goto L_00603a84;
L_00603a81:; BB(0x00603a81);
    /* 00603a81: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00603a84:; BB(0x00603a84);
    /* 00603a84: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 00603a88: cmp ax, word ptr [ecx + 0x40] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0x40u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00603a8c: je 0x603a91 */ if (fZ) goto L_00603a91;
L_00603a8e:; BB(0x00603a8e);
    /* 00603a8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00603a91:; BB(0x00603a91);
    /* 00603a91: mov al, byte ptr [ebp + 0xe] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xeu))) & 0xffu);
    /* 00603a94: cmp al, byte ptr [ecx + 0x30] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx+0x30u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00603a97: je 0x603a9c */ if (fZ) goto L_00603a9c;
L_00603a99:; BB(0x00603a99);
    /* 00603a99: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00603a9c:; BB(0x00603a9c);
    /* 00603a9c: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00603aa0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603aa2: jl 0x603b02 */ if ((fS!=fO)) goto L_00603b02;
L_00603aa4:; BB(0x00603aa4);
    /* 00603aa4: mov ebx, dword ptr [esp + 0x78] */ r_ebx = R32((u32)(r_esp+0x78u));
    /* 00603aa8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00603aab: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 00603ab2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603ab4: je 0x603ac5 */ if (fZ) goto L_00603ac5;
L_00603ab6:; BB(0x00603ab6);
    /* 00603ab6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603ab8: je 0x603ac5 */ if (fZ) goto L_00603ac5;
L_00603aba:; BB(0x00603aba);
    /* 00603aba: lea ecx, [ebp + 0x178] */ r_ecx = (u32)(r_ebp+0x178u);
    /* 00603ac0: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x603ac5u); f_00829de0();
L_00603ac5:; BB(0x00603ac5);
    /* 00603ac5: mov eax, dword ptr [ebp + 0x184] */ r_eax = R32((u32)(r_ebp+0x184u));
    /* 00603acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603acd: je 0x603ae4 */ if (fZ) goto L_00603ae4;
L_00603acf:; BB(0x00603acf);
    /* 00603acf: mov eax, dword ptr [ebp + 0x188] */ r_eax = R32((u32)(r_ebp+0x188u));
    /* 00603ad5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603ad7: je 0x603ae4 */ if (fZ) goto L_00603ae4;
L_00603ad9:; BB(0x00603ad9);
    /* 00603ad9: lea ecx, [ebp + 0x2ec] */ r_ecx = (u32)(r_ebp+0x2ecu);
    /* 00603adf: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x603ae4u); f_00829de0();
L_00603ae4:; BB(0x00603ae4);
    /* 00603ae4: mov eax, dword ptr [ebp + 0x2f8] */ r_eax = R32((u32)(r_ebp+0x2f8u));
    /* 00603aea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603aec: je 0x603afb */ if (fZ) goto L_00603afb;
L_00603aee:; BB(0x00603aee);
    /* 00603aee: add ebp, 0x460 */ {  u32 a = r_ebp; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00603af4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00603af6: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x603afbu); f_00829de0();
L_00603afb:; BB(0x00603afb);
    /* 00603afb: mov eax, 1 */ r_eax = 0x1u;
    /* 00603b00: jmp 0x603b29 */ goto L_00603b29;
L_00603b02:; BB(0x00603b02);
    /* 00603b02: add ebp, 0xfffffb94 */ {  u32 a = r_ebp; u32 b = 0xfffffb94u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00603b08: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00603b0a: jae 0x6039f4 */ if (!fC) goto L_006039f4;
L_00603b10:; BB(0x00603b10);
    /* 00603b10: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00603b14: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
    /* 00603b18: mov ebx, dword ptr [esp + 0x78] */ r_ebx = R32((u32)(r_esp+0x78u));
L_00603b1c:; BB(0x00603b1c);
    /* 00603b1c: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603b1f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00603b21: jg 0x6039d8 */ if ((!fZ&&fS==fO)) goto L_006039d8;
L_00603b27:; BB(0x00603b27);
    /* 00603b27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00603b29:; BB(0x00603b29);
    /* 00603b29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603b2b: je 0x6039b8 */ if (fZ) goto L_006039b8;
L_00603b31:; BB(0x00603b31);
    /* 00603b31: mov esi, dword ptr [ebx + 0x3e0] */ r_esi = R32((u32)(r_ebx+0x3e0u));
    /* 00603b37: lea eax, [esi + 0x23600] */ r_eax = (u32)(r_esi+0x23600u);
    /* 00603b3d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00603b3f: jae 0x603bbb */ if (!fC) goto L_00603bbb;
L_00603b41:; BB(0x00603b41);
    /* 00603b41: mov edx, eax */ r_edx = r_eax;
    /* 00603b43: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00603b45: cmp edx, 0x1a88 */ {  u32 a = r_edx; u32 b = 0x1a88u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00603b4b: jb 0x603ba7 */ if (fC) goto L_00603ba7;
L_00603b4d:; BB(0x00603b4d);
    /* 00603b4d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00603b4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603b51: je 0x6038eb */ if (fZ) goto L_006038eb;
L_00603b57:; BB(0x00603b57);
    /* 00603b57: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603b5d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00603b5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603b61: je 0x6038eb */ if (fZ) goto L_006038eb;
L_00603b67:; BB(0x00603b67);
    /* 00603b67: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603b6d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00603b6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603b71: je 0x6038eb */ if (fZ) goto L_006038eb;
L_00603b77:; BB(0x00603b77);
    /* 00603b77: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603b7d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00603b7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603b81: je 0x6038eb */ if (fZ) goto L_006038eb;
L_00603b87:; BB(0x00603b87);
    /* 00603b87: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603b8d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00603b8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603b91: je 0x6038eb */ if (fZ) goto L_006038eb;
L_00603b97:; BB(0x00603b97);
    /* 00603b97: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603b9d: lea edx, [eax - 0x1a88] */ r_edx = (u32)(r_eax+0xffffe578u);
    /* 00603ba3: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00603ba5: jbe 0x603b4d */ if ((fC||fZ)) goto L_00603b4d;
L_00603ba7:; BB(0x00603ba7);
    /* 00603ba7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00603ba9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603bab: je 0x6038eb */ if (fZ) goto L_006038eb;
L_00603bb1:; BB(0x00603bb1);
    /* 00603bb1: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603bb7: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00603bb9: jb 0x603ba7 */ if (fC) goto L_00603ba7;
L_00603bbb:; BB(0x00603bbb);
    /* 00603bbb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00603bbd: jmp 0x6038eb */ goto L_006038eb;
}

void f_00603bc8(void) /* sub_603BC8 */
{
    FN_ENTER(0x00603bc8);
    /* 00603bc8: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00603bcb: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00603bce: jne 0x603bdf */ if (!fZ) goto L_00603bdf;
L_00603bd0:; BB(0x00603bd0);
    /* 00603bd0: movsx eax, byte ptr [eax + 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x31u));
    /* 00603bd4: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00603bd7: je 0x603be2 */ if (fZ) goto L_00603be2;
L_00603bd9:; BB(0x00603bd9);
    /* 00603bd9: mov eax, 1 */ r_eax = 0x1u;
    /* 00603bde: ret  */ FN_RET(0x00603bc8); r_esp += 4; return;
L_00603bdf:; BB(0x00603bdf);
    /* 00603bdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00603be1: ret  */ FN_RET(0x00603bc8); r_esp += 4; return;
L_00603be2:; BB(0x00603be2);
    /* 00603be2: mov eax, 2 */ r_eax = 0x2u;
    /* 00603be7: ret  */ FN_RET(0x00603bc8); r_esp += 4; return;
}

void f_00603be8(void) /* sub_603BE8 */
{
    FN_ENTER(0x00603be8);
    /* 00603be8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603be9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00603beb: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 00603bf1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00603bf4: je 0x603c21 */ if (fZ) goto L_00603c21;
L_00603bf6:; BB(0x00603bf6);
    /* 00603bf6: mov ecx, dword ptr [ebp + 0x4fc] */ r_ecx = R32((u32)(r_ebp+0x4fcu));
    /* 00603bfc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00603bfe: je 0x603c21 */ if (fZ) goto L_00603c21;
L_00603c00:; BB(0x00603c00);
    /* 00603c00: movsx edx, word ptr [ebp + 0x500] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x500u));
    /* 00603c07: movsx eax, word ptr [ebp + 0x502] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x502u));
    /* 00603c0e: movsx ebp, byte ptr [ebp + 0x504] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ebp+0x504u));
    /* 00603c15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603c17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603c18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603c19: call 0x5c5834 */ r_esp -= 4; W32(r_esp, 0x603c1eu); f_005c5834();
    /* 00603c1e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00603c21:; BB(0x00603c21);
    /* 00603c21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603c22: ret  */ FN_RET(0x00603be8); r_esp += 4; return;
}

void f_00603c24(void) /* sub_603C24 */
{
    FN_ENTER(0x00603c24);
    /* 00603c24: fld dword ptr [0x92e31c] */ FPUSH(R_F32((u32)(0x92e31cu)));
    /* 00603c2a: mov edx, dword ptr [ecx + 0x484] */ r_edx = R32((u32)(r_ecx+0x484u));
    /* 00603c30: test edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00603c36: jne 0x603c44 */ if (!fZ) goto L_00603c44;
L_00603c38:; BB(0x00603c38);
    /* 00603c38: fld dword ptr [ecx + 0x494] */ FPUSH(R_F32((u32)(r_ecx+0x494u)));
    /* 00603c3e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603c40: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00603c42: jmp 0x603c4e */ goto L_00603c4e;
L_00603c44:; BB(0x00603c44);
    /* 00603c44: fld dword ptr [ecx + 0x494] */ FPUSH(R_F32((u32)(r_ecx+0x494u)));
    /* 00603c4a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00603c4c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
L_00603c4e:; BB(0x00603c4e);
    /* 00603c4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00603c50: fcom dword ptr [0x92e324] */ fx_compare(ST(0), R_F32((u32)(0x92e324u))); 
    /* 00603c56: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00603c58: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00603c59: jb 0x603c79 */ if (fC) goto L_00603c79;
L_00603c5b:; BB(0x00603c5b);
    /* 00603c5b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00603c5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00603c5f: fld dword ptr [0x92e324] */ FPUSH(R_F32((u32)(0x92e324u)));
    /* 00603c65: fld dword ptr [0x92e324] */ FPUSH(R_F32((u32)(0x92e324u)));
    /* 00603c6b: or edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00603c71: mov dword ptr [ecx + 0x484], edx */ W32((u32)(r_ecx+0x484u), r_edx);
    /* 00603c77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00603c79:; BB(0x00603c79);
    /* 00603c79: fcomp dword ptr [0x92e320] */ fx_compare(ST(0), R_F32((u32)(0x92e320u))); FPOP();
    /* 00603c7f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00603c81: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00603c82: jbe 0x603c8b */ if ((fC||fZ)) goto L_00603c8b;
L_00603c84:; BB(0x00603c84);
    /* 00603c84: fstp dword ptr [ecx + 0x494] */ W_F32((u32)(r_ecx+0x494u), ST(0)); FPOP();
    /* 00603c8a: ret  */ FN_RET(0x00603c24); r_esp += 4; return;
L_00603c8b:; BB(0x00603c8b);
    /* 00603c8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00603c8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603c8f: mov dword ptr [ecx + 0x494], eax */ W32((u32)(r_ecx+0x494u), r_eax);
    /* 00603c95: and edx, 0xbfffffff */ {  u32 a = r_edx; u32 b = 0xbfffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00603c9b: mov dword ptr [ecx + 0x484], edx */ W32((u32)(r_ecx+0x484u), r_edx);
    /* 00603ca1: ret  */ FN_RET(0x00603c24); r_esp += 4; return;
}

void f_00603ca4(void) /* sub_603CA4 */
{
    FN_ENTER(0x00603ca4);
    /* 00603ca4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00603ca5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00603ca6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00603ca8: mov eax, dword ptr [0xaca334] */ r_eax = R32((u32)(0xaca334u));
    /* 00603cad: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 00603cb3: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00603cb6: mov edi, dword ptr [ecx + 0x18] */ r_edi = R32((u32)(r_ecx+0x18u));
    /* 00603cb9: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00603cbc: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00603cbf: call 0x5baacc */ r_esp -= 4; W32(r_esp, 0x603cc4u); f_005baacc();
    /* 00603cc4: call 0x5b90bc */ r_esp -= 4; W32(r_esp, 0x603cc9u); f_005b90bc();
    /* 00603cc9: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 00603cce: mov edx, dword ptr [0xaca334] */ r_edx = R32((u32)(0xaca334u));
    /* 00603cd4: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00603cd7: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 00603cda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00603cdb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00603cdc: ret  */ FN_RET(0x00603ca4); r_esp += 4; return;
}

void f_00603ce0(void) /* sub_603CE0 */
{
    FN_ENTER(0x00603ce0);
    /* 00603ce0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00603ce1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00603ce2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603ce3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00603ce4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603ce7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00603ce9: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00603ced: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00603cee: call 0x4e686c */ r_esp -= 4; W32(r_esp, 0x603cf3u); f_004e686c();
    /* 00603cf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00603cf4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00603cf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00603cf7: call 0x604550 */ r_esp -= 4; W32(r_esp, 0x603cfcu); f_00604550();
    /* 00603cfc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00603cff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603d00: push dword ptr [ebp + 0x3f8] */ { u32 v = R32((u32)(r_ebp+0x3f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00603d06: call 0x4e93b4 */ r_esp -= 4; W32(r_esp, 0x603d0bu); f_004e93b4();
    /* 00603d0b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603d0e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00603d11: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00603d15: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00603d19: mov esi, dword ptr [ebp + 0x42c] */ r_esi = R32((u32)(r_ebp+0x42cu));
    /* 00603d1f: mov dword ptr [ebp + 0x408], esi */ W32((u32)(r_ebp+0x408u), r_esi);
    /* 00603d25: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00603d28: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603d2a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603d2c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603d2e: add eax, dword ptr [ebp + 0x430] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x430u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603d34: mov dword ptr [ebp + 0x40c], eax */ W32((u32)(r_ebp+0x40cu), r_eax);
    /* 00603d3a: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 00603d3d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603d3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603d41: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603d43: lea ecx, [ebx + ebx*4] */ r_ecx = (u32)(r_ebx+r_ebx*4);
    /* 00603d46: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603d48: add edx, dword ptr [ebp + 0x430] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x430u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603d4e: mov dword ptr [ebp + 0x410], edx */ W32((u32)(r_ebp+0x410u), r_edx);
    /* 00603d54: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603d56: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603d58: mov ebx, 5 */ r_ebx = 0x5u;
    /* 00603d5d: add ecx, dword ptr [ebp + 0x430] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x430u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603d63: mov dword ptr [ebp + 0x414], ecx */ W32((u32)(r_ebp+0x414u), r_ecx);
    /* 00603d69: jmp 0x603d83 */ goto L_00603d83;
L_00603d6b:; BB(0x00603d6b);
    /* 00603d6b: mov dword ptr [ebp + 0x414], ecx */ W32((u32)(r_ebp+0x414u), r_ecx);
    /* 00603d71: mov dword ptr [ebp + 0x410], edx */ W32((u32)(r_ebp+0x410u), r_edx);
    /* 00603d77: mov dword ptr [ebp + 0x40c], eax */ W32((u32)(r_ebp+0x40cu), r_eax);
    /* 00603d7d: mov dword ptr [ebp + 0x408], esi */ W32((u32)(r_ebp+0x408u), r_esi);
L_00603d83:; BB(0x00603d83);
    /* 00603d83: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00603d85: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603d87: je 0x603eeb */ if (fZ) goto L_00603eeb;
L_00603d8d:; BB(0x00603d8d);
    /* 00603d8d: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00603d90: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603d92: je 0x603e1f */ if (fZ) goto L_00603e1f;
L_00603d98:; BB(0x00603d98);
    /* 00603d98: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00603d9a: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00603d9d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00603d9f: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00603da2: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 00603da4: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 00603da7: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 00603dad: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00603db0: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00603db6: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00603db9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603dbb: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00603dc1: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 00603dc4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603dc6: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00603dc9: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 00603dcf: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00603dd2: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00603dd8: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 00603ddb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603ddd: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00603de3: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 00603de6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603de8: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 00603deb: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 00603df1: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 00603df4: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00603dfa: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 00603dfd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603dff: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00603e05: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 00603e08: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603e0a: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 00603e0d: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 00603e13: mov edx, dword ptr [ebp + 0x410] */ r_edx = R32((u32)(r_ebp+0x410u));
    /* 00603e19: mov ecx, dword ptr [ebp + 0x414] */ r_ecx = R32((u32)(r_ebp+0x414u));
L_00603e1f:; BB(0x00603e1f);
    /* 00603e1f: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00603e22: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00603e25: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00603e27: or edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00603e2a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00603e2d: je 0x603ecd */ if (fZ) goto L_00603ecd;
L_00603e33:; BB(0x00603e33);
    /* 00603e33: mov esi, dword ptr [ebp + 0x408] */ r_esi = R32((u32)(r_ebp+0x408u));
    /* 00603e39: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00603e3b: and dword ptr [edi], 0xfffffffe */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00603e3e: mov eax, dword ptr [ebp + 0x408] */ r_eax = R32((u32)(r_ebp+0x408u));
    /* 00603e44: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603e46: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 00603e4c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00603e4e: mov esi, dword ptr [ebp + 0x410] */ r_esi = R32((u32)(r_ebp+0x410u));
    /* 00603e54: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00603e56: mov esi, dword ptr [ebp + 0x414] */ r_esi = R32((u32)(r_ebp+0x414u));
    /* 00603e5c: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00603e5e: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 00603e64: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00603e67: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00603e6d: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 00603e70: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603e72: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00603e78: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00603e7b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603e7d: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00603e80: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 00603e86: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00603e89: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00603e8f: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 00603e92: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603e94: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00603e9a: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00603e9d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603e9f: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 00603ea2: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 00603ea8: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 00603eab: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00603eb1: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 00603eb4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603eb6: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00603ebc: fmul dword ptr [esi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x10u));
    /* 00603ebf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603ec1: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00603ec4: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 00603eca: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00603ecd:; BB(0x00603ecd);
    /* 00603ecd: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603ed3: jne 0x6041b8 */ if (!fZ) goto L_006041b8;
L_00603ed9:; BB(0x00603ed9);
    /* 00603ed9: mov esi, dword ptr [ebp + 0x408] */ r_esi = R32((u32)(r_ebp+0x408u));
    /* 00603edf: mov edx, dword ptr [ebp + 0x410] */ r_edx = R32((u32)(r_ebp+0x410u));
    /* 00603ee5: mov ecx, dword ptr [ebp + 0x414] */ r_ecx = R32((u32)(r_ebp+0x414u));
L_00603eeb:; BB(0x00603eeb);
    /* 00603eeb: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00603eee: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603ef1: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603ef4: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603ef7: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603efa: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00603efc: jg 0x603d6b */ if ((!fZ&&fS==fO)) goto L_00603d6b;
L_00603f02:; BB(0x00603f02);
    /* 00603f02: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00603f05: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00603f09: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00603f0d: mov esi, dword ptr [ebp + 0x434] */ r_esi = R32((u32)(r_ebp+0x434u));
    /* 00603f13: mov dword ptr [ebp + 0x408], esi */ W32((u32)(r_ebp+0x408u), r_esi);
    /* 00603f19: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f1b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f1d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f1f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00603f22: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603f24: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603f26: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603f28: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603f2a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603f2c: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603f2e: add ecx, dword ptr [ebp + 0x438] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x438u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603f34: mov dword ptr [ebp + 0x40c], ecx */ W32((u32)(r_ebp+0x40cu), r_ecx);
    /* 00603f3a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f3c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f40: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00603f43: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f45: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f47: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f4b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f4d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f4f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00603f51: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00603f53: add edx, dword ptr [ebp + 0x438] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x438u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f59: mov dword ptr [ebp + 0x410], edx */ W32((u32)(r_ebp+0x410u), r_edx);
    /* 00603f5f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00603f61: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00603f64: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f66: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f68: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f6a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f6c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f6e: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f70: mov ebx, 0x40 */ r_ebx = 0x40u;
    /* 00603f75: add eax, dword ptr [ebp + 0x438] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x438u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603f7b: mov dword ptr [ebp + 0x414], eax */ W32((u32)(r_ebp+0x414u), r_eax);
L_00603f81:; BB(0x00603f81);
    /* 00603f81: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00603f83: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 00603f86: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603f88: je 0x604015 */ if (fZ) goto L_00604015;
L_00603f8e:; BB(0x00603f8e);
    /* 00603f8e: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 00603f90: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 00603f93: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00603f95: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00603f98: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00603f9a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00603f9d: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 00603fa3: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 00603fa6: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00603fac: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00603faf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603fb1: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00603fb7: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00603fba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603fbc: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00603fbf: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 00603fc5: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 00603fc8: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00603fce: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 00603fd1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603fd3: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00603fd9: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00603fdc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603fde: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 00603fe1: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 00603fe7: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 00603fea: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00603ff0: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 00603ff3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00603ff5: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00603ffb: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 00603ffe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604000: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 00604003: mov ecx, dword ptr [ebp + 0x40c] */ r_ecx = R32((u32)(r_ebp+0x40cu));
    /* 00604009: mov edx, dword ptr [ebp + 0x410] */ r_edx = R32((u32)(r_ebp+0x410u));
    /* 0060400f: mov eax, dword ptr [ebp + 0x414] */ r_eax = R32((u32)(r_ebp+0x414u));
L_00604015:; BB(0x00604015);
    /* 00604015: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00604018: or esi, dword ptr [edx + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0060401b: or esi, dword ptr [eax + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0060401e: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604024: je 0x6040bb */ if (fZ) goto L_006040bb;
L_0060402a:; BB(0x0060402a);
    /* 0060402a: mov eax, dword ptr [ebp + 0x408] */ r_eax = R32((u32)(r_ebp+0x408u));
    /* 00604030: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00604032: and dword ptr [eax], 0xfffffffe */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00604035: mov eax, dword ptr [ebp + 0x408] */ r_eax = R32((u32)(r_ebp+0x408u));
    /* 0060403b: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0060403d: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 00604043: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604045: mov eax, dword ptr [ebp + 0x410] */ r_eax = R32((u32)(r_ebp+0x410u));
    /* 0060404b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060404d: mov ecx, dword ptr [ebp + 0x414] */ r_ecx = R32((u32)(r_ebp+0x414u));
    /* 00604053: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00604055: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 0060405b: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 0060405e: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00604064: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00604067: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604069: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 0060406f: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00604072: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604074: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00604077: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 0060407d: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 00604080: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00604086: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00604089: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0060408b: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00604091: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00604094: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604096: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 00604099: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 0060409f: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 006040a2: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 006040a8: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 006040ab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006040ad: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 006040b3: fmul dword ptr [ecx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x10u));
    /* 006040b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006040b8: fstp dword ptr [edi + 0x10] */ W_F32((u32)(r_edi+0x10u), ST(0)); FPOP();
L_006040bb:; BB(0x006040bb);
    /* 006040bb: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006040c1: je 0x604158 */ if (fZ) goto L_00604158;
L_006040c7:; BB(0x006040c7);
    /* 006040c7: mov eax, dword ptr [ebp + 0x408] */ r_eax = R32((u32)(r_ebp+0x408u));
    /* 006040cd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006040cf: and dword ptr [eax], 0xfffffffb */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006040d2: mov eax, dword ptr [ebp + 0x408] */ r_eax = R32((u32)(r_ebp+0x408u));
    /* 006040d8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 006040da: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 006040e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006040e2: mov eax, dword ptr [ebp + 0x410] */ r_eax = R32((u32)(r_ebp+0x410u));
    /* 006040e8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006040ea: mov ecx, dword ptr [ebp + 0x414] */ r_ecx = R32((u32)(r_ebp+0x414u));
    /* 006040f0: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 006040f2: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 006040f8: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 006040fb: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00604101: fmul dword ptr [eax + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x20u));
    /* 00604104: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604106: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 0060410c: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 0060410f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604111: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 00604114: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 0060411a: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 0060411d: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00604123: fmul dword ptr [eax + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x24u));
    /* 00604126: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604128: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 0060412e: fmul dword ptr [ecx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x24u));
    /* 00604131: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604133: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 00604136: fld dword ptr [ebp + 0x3fc] */ FPUSH(R_F32((u32)(r_ebp+0x3fcu)));
    /* 0060413c: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 0060413f: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00604145: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 00604148: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0060414a: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 00604150: fmul dword ptr [ecx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x28u));
    /* 00604153: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604155: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
L_00604158:; BB(0x00604158);
    /* 00604158: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060415e: je 0x604167 */ if (fZ) goto L_00604167;
L_00604160:; BB(0x00604160);
    /* 00604160: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604162: call 0x6041dc */ r_esp -= 4; W32(r_esp, 0x604167u); f_006041dc();
L_00604167:; BB(0x00604167);
    /* 00604167: mov esi, dword ptr [ebp + 0x408] */ r_esi = R32((u32)(r_ebp+0x408u));
    /* 0060416d: mov ecx, dword ptr [ebp + 0x40c] */ r_ecx = R32((u32)(r_ebp+0x40cu));
    /* 00604173: mov edx, dword ptr [ebp + 0x410] */ r_edx = R32((u32)(r_ebp+0x410u));
    /* 00604179: mov eax, dword ptr [ebp + 0x414] */ r_eax = R32((u32)(r_ebp+0x414u));
    /* 0060417f: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00604182: mov dword ptr [ebp + 0x408], esi */ W32((u32)(r_ebp+0x408u), r_esi);
    /* 00604188: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060418b: mov dword ptr [ebp + 0x40c], ecx */ W32((u32)(r_ebp+0x40cu), r_ecx);
    /* 00604191: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00604194: mov dword ptr [ebp + 0x410], edx */ W32((u32)(r_ebp+0x410u), r_edx);
    /* 0060419a: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060419d: mov dword ptr [ebp + 0x414], eax */ W32((u32)(r_ebp+0x414u), r_eax);
    /* 006041a3: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006041a6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006041a8: jg 0x603f81 */ if ((!fZ&&fS==fO)) goto L_00603f81;
L_006041ae:; BB(0x006041ae);
    /* 006041ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006041b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006041b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006041b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006041b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006041b5: ret 4 */ FN_RET(0x00603ce0); r_esp += 8; return;
L_006041b8:; BB(0x006041b8);
    /* 006041b8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006041ba: call 0x6041dc */ r_esp -= 4; W32(r_esp, 0x6041bfu); f_006041dc();
    /* 006041bf: mov esi, dword ptr [ebp + 0x408] */ r_esi = R32((u32)(r_ebp+0x408u));
    /* 006041c5: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 006041cb: mov edx, dword ptr [ebp + 0x410] */ r_edx = R32((u32)(r_ebp+0x410u));
    /* 006041d1: mov ecx, dword ptr [ebp + 0x414] */ r_ecx = R32((u32)(r_ebp+0x414u));
    /* 006041d7: jmp 0x603eeb */ goto L_00603eeb;
}

