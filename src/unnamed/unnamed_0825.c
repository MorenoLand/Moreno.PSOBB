#include "protos.h"

void f_00825268(void)
{
    FN_ENTER(0x00825268);
    /* 00825268: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082526c: movzx edx, byte ptr [eax + 5] */ r_edx = (u32)R8((u32)(r_eax+0x5u));
    /* 00825270: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825272: jne 0x8252a2 */ if (!fZ) goto L_008252a2;
L_00825274:; BB(0x00825274);
    /* 00825274: movsx ecx, byte ptr [0xaca904] */ r_ecx = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 0082527b: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 0082527f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825281: jne 0x8252a2 */ if (!fZ) goto L_008252a2;
L_00825283:; BB(0x00825283);
    /* 00825283: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00825286: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00825289: mov ecx, 0xaca6f0 */ r_ecx = 0xaca6f0u;
    /* 0082528e: call 0x8252a4 */ r_esp -= 4; W32(r_esp, 0x825293u); f_008252a4();
    /* 00825293: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00825299: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082529b: je 0x8252a2 */ if (fZ) goto L_008252a2;
L_0082529d:; BB(0x0082529d);
    /* 0082529d: call 0x760728 */ r_esp -= 4; W32(r_esp, 0x8252a2u); f_00760728();
L_008252a2:; BB(0x008252a2);
    /* 008252a2: ret  */ FN_RET(0x00825268); r_esp += 4; return;
}

void f_008252a4(void) /* sub_8252A4 */
{
    FN_ENTER(0x008252a4);
    /* 008252a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008252a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008252a6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008252a8: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 008252ac: cmp ebx, dword ptr [ebp] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008252af: mov edx, ebp */ r_edx = r_ebp;
    /* 008252b1: je 0x825400 */ if (fZ) goto L_00825400;
L_008252b7:; BB(0x008252b7);
    /* 008252b7: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 008252ba: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008252bc: je 0x825400 */ if (fZ) goto L_00825400;
L_008252c2:; BB(0x008252c2);
    /* 008252c2: lea edx, [ebp + 0x10] */ r_edx = (u32)(r_ebp+0x10u);
    /* 008252c5: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008252c7: je 0x825400 */ if (fZ) goto L_00825400;
L_008252cd:; BB(0x008252cd);
    /* 008252cd: lea edx, [ebp + 0x18] */ r_edx = (u32)(r_ebp+0x18u);
    /* 008252d0: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008252d2: je 0x825400 */ if (fZ) goto L_00825400;
L_008252d8:; BB(0x008252d8);
    /* 008252d8: lea edx, [ebp + 0x20] */ r_edx = (u32)(r_ebp+0x20u);
    /* 008252db: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008252dd: je 0x825400 */ if (fZ) goto L_00825400;
L_008252e3:; BB(0x008252e3);
    /* 008252e3: lea edx, [ebp + 0x28] */ r_edx = (u32)(r_ebp+0x28u);
    /* 008252e6: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008252e8: je 0x825400 */ if (fZ) goto L_00825400;
L_008252ee:; BB(0x008252ee);
    /* 008252ee: lea edx, [ebp + 0x30] */ r_edx = (u32)(r_ebp+0x30u);
    /* 008252f1: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008252f3: je 0x825400 */ if (fZ) goto L_00825400;
L_008252f9:; BB(0x008252f9);
    /* 008252f9: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 008252fc: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008252fe: je 0x825400 */ if (fZ) goto L_00825400;
L_00825304:; BB(0x00825304);
    /* 00825304: lea edx, [ebp + 0x40] */ r_edx = (u32)(r_ebp+0x40u);
    /* 00825307: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825309: je 0x825400 */ if (fZ) goto L_00825400;
L_0082530f:; BB(0x0082530f);
    /* 0082530f: lea edx, [ebp + 0x48] */ r_edx = (u32)(r_ebp+0x48u);
    /* 00825312: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825314: je 0x825400 */ if (fZ) goto L_00825400;
L_0082531a:; BB(0x0082531a);
    /* 0082531a: lea edx, [ebp + 0x50] */ r_edx = (u32)(r_ebp+0x50u);
    /* 0082531d: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082531f: je 0x825400 */ if (fZ) goto L_00825400;
L_00825325:; BB(0x00825325);
    /* 00825325: lea edx, [ebp + 0x58] */ r_edx = (u32)(r_ebp+0x58u);
    /* 00825328: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082532a: je 0x825400 */ if (fZ) goto L_00825400;
L_00825330:; BB(0x00825330);
    /* 00825330: lea edx, [ebp + 0x60] */ r_edx = (u32)(r_ebp+0x60u);
    /* 00825333: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825335: je 0x825400 */ if (fZ) goto L_00825400;
L_0082533b:; BB(0x0082533b);
    /* 0082533b: lea edx, [ebp + 0x68] */ r_edx = (u32)(r_ebp+0x68u);
    /* 0082533e: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825340: je 0x825400 */ if (fZ) goto L_00825400;
L_00825346:; BB(0x00825346);
    /* 00825346: lea edx, [ebp + 0x70] */ r_edx = (u32)(r_ebp+0x70u);
    /* 00825349: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082534b: je 0x825400 */ if (fZ) goto L_00825400;
L_00825351:; BB(0x00825351);
    /* 00825351: lea edx, [ebp + 0x78] */ r_edx = (u32)(r_ebp+0x78u);
    /* 00825354: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825356: je 0x825400 */ if (fZ) goto L_00825400;
L_0082535c:; BB(0x0082535c);
    /* 0082535c: lea edx, [ebp + 0x80] */ r_edx = (u32)(r_ebp+0x80u);
    /* 00825362: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825364: je 0x825400 */ if (fZ) goto L_00825400;
L_0082536a:; BB(0x0082536a);
    /* 0082536a: lea edx, [ebp + 0x88] */ r_edx = (u32)(r_ebp+0x88u);
    /* 00825370: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825372: je 0x825400 */ if (fZ) goto L_00825400;
L_00825378:; BB(0x00825378);
    /* 00825378: lea edx, [ebp + 0x90] */ r_edx = (u32)(r_ebp+0x90u);
    /* 0082537e: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825380: je 0x825400 */ if (fZ) goto L_00825400;
L_00825386:; BB(0x00825386);
    /* 00825386: lea edx, [ebp + 0x98] */ r_edx = (u32)(r_ebp+0x98u);
    /* 0082538c: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082538e: je 0x825400 */ if (fZ) goto L_00825400;
L_00825390:; BB(0x00825390);
    /* 00825390: lea edx, [ebp + 0xa0] */ r_edx = (u32)(r_ebp+0xa0u);
    /* 00825396: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825398: je 0x825400 */ if (fZ) goto L_00825400;
L_0082539a:; BB(0x0082539a);
    /* 0082539a: lea edx, [ebp + 0xa8] */ r_edx = (u32)(r_ebp+0xa8u);
    /* 008253a0: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008253a2: je 0x825400 */ if (fZ) goto L_00825400;
L_008253a4:; BB(0x008253a4);
    /* 008253a4: lea edx, [ebp + 0xb0] */ r_edx = (u32)(r_ebp+0xb0u);
    /* 008253aa: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008253ac: je 0x825400 */ if (fZ) goto L_00825400;
L_008253ae:; BB(0x008253ae);
    /* 008253ae: lea edx, [ebp + 0xb8] */ r_edx = (u32)(r_ebp+0xb8u);
    /* 008253b4: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008253b6: je 0x825400 */ if (fZ) goto L_00825400;
L_008253b8:; BB(0x008253b8);
    /* 008253b8: lea edx, [ebp + 0xc0] */ r_edx = (u32)(r_ebp+0xc0u);
    /* 008253be: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008253c0: je 0x825400 */ if (fZ) goto L_00825400;
L_008253c2:; BB(0x008253c2);
    /* 008253c2: lea edx, [ebp + 0xc8] */ r_edx = (u32)(r_ebp+0xc8u);
    /* 008253c8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008253ca: je 0x825400 */ if (fZ) goto L_00825400;
L_008253cc:; BB(0x008253cc);
    /* 008253cc: lea edx, [ebp + 0xd0] */ r_edx = (u32)(r_ebp+0xd0u);
    /* 008253d2: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008253d4: je 0x825400 */ if (fZ) goto L_00825400;
L_008253d6:; BB(0x008253d6);
    /* 008253d6: lea edx, [ebp + 0xd8] */ r_edx = (u32)(r_ebp+0xd8u);
    /* 008253dc: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008253de: je 0x825400 */ if (fZ) goto L_00825400;
L_008253e0:; BB(0x008253e0);
    /* 008253e0: lea edx, [ebp + 0xe0] */ r_edx = (u32)(r_ebp+0xe0u);
    /* 008253e6: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008253e8: je 0x825400 */ if (fZ) goto L_00825400;
L_008253ea:; BB(0x008253ea);
    /* 008253ea: lea edx, [ebp + 0xe8] */ r_edx = (u32)(r_ebp+0xe8u);
    /* 008253f0: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008253f2: je 0x825400 */ if (fZ) goto L_00825400;
L_008253f4:; BB(0x008253f4);
    /* 008253f4: lea edx, [ebp + 0xf0] */ r_edx = (u32)(r_ebp+0xf0u);
    /* 008253fa: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008253fc: je 0x825400 */ if (fZ) goto L_00825400;
L_008253fe:; BB(0x008253fe);
    /* 008253fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00825400:; BB(0x00825400);
    /* 00825400: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825402: je 0x8258ce */ if (fZ) goto L_008258ce;
L_00825408:; BB(0x00825408);
    /* 00825408: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0082540c: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0082540f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00825411: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00825414: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00825416: jle 0x8255b4 */ if ((fZ||fS!=fO)) goto L_008255b4;
L_0082541c:; BB(0x0082541c);
    /* 0082541c: lea edx, [ebp + 0xf8] */ r_edx = (u32)(r_ebp+0xf8u);
    /* 00825422: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825424: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082542a:; BB(0x0082542a);
    /* 0082542a: lea edx, [ebp + 0x100] */ r_edx = (u32)(r_ebp+0x100u);
    /* 00825430: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825432: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825438:; BB(0x00825438);
    /* 00825438: lea edx, [ebp + 0x108] */ r_edx = (u32)(r_ebp+0x108u);
    /* 0082543e: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825440: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825446:; BB(0x00825446);
    /* 00825446: lea edx, [ebp + 0x110] */ r_edx = (u32)(r_ebp+0x110u);
    /* 0082544c: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082544e: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825454:; BB(0x00825454);
    /* 00825454: lea edx, [ebp + 0x118] */ r_edx = (u32)(r_ebp+0x118u);
    /* 0082545a: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082545c: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825462:; BB(0x00825462);
    /* 00825462: lea edx, [ebp + 0x120] */ r_edx = (u32)(r_ebp+0x120u);
    /* 00825468: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082546a: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825470:; BB(0x00825470);
    /* 00825470: lea edx, [ebp + 0x128] */ r_edx = (u32)(r_ebp+0x128u);
    /* 00825476: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825478: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082547e:; BB(0x0082547e);
    /* 0082547e: lea edx, [ebp + 0x130] */ r_edx = (u32)(r_ebp+0x130u);
    /* 00825484: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825486: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082548c:; BB(0x0082548c);
    /* 0082548c: lea edx, [ebp + 0x138] */ r_edx = (u32)(r_ebp+0x138u);
    /* 00825492: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825494: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082549a:; BB(0x0082549a);
    /* 0082549a: lea edx, [ebp + 0x140] */ r_edx = (u32)(r_ebp+0x140u);
    /* 008254a0: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254a2: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254a8:; BB(0x008254a8);
    /* 008254a8: lea edx, [ebp + 0x148] */ r_edx = (u32)(r_ebp+0x148u);
    /* 008254ae: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254b0: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254b6:; BB(0x008254b6);
    /* 008254b6: lea edx, [ebp + 0x150] */ r_edx = (u32)(r_ebp+0x150u);
    /* 008254bc: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254be: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254c4:; BB(0x008254c4);
    /* 008254c4: lea edx, [ebp + 0x158] */ r_edx = (u32)(r_ebp+0x158u);
    /* 008254ca: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254cc: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254d2:; BB(0x008254d2);
    /* 008254d2: lea edx, [ebp + 0x160] */ r_edx = (u32)(r_ebp+0x160u);
    /* 008254d8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254da: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254e0:; BB(0x008254e0);
    /* 008254e0: lea edx, [ebp + 0x168] */ r_edx = (u32)(r_ebp+0x168u);
    /* 008254e6: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254e8: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254ee:; BB(0x008254ee);
    /* 008254ee: lea edx, [ebp + 0x170] */ r_edx = (u32)(r_ebp+0x170u);
    /* 008254f4: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254f6: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254fc:; BB(0x008254fc);
    /* 008254fc: lea edx, [ebp + 0x178] */ r_edx = (u32)(r_ebp+0x178u);
    /* 00825502: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825504: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082550a:; BB(0x0082550a);
    /* 0082550a: lea edx, [ebp + 0x180] */ r_edx = (u32)(r_ebp+0x180u);
    /* 00825510: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825512: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825518:; BB(0x00825518);
    /* 00825518: lea edx, [ebp + 0x188] */ r_edx = (u32)(r_ebp+0x188u);
    /* 0082551e: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825520: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825526:; BB(0x00825526);
    /* 00825526: lea edx, [ebp + 0x190] */ r_edx = (u32)(r_ebp+0x190u);
    /* 0082552c: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082552e: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825530:; BB(0x00825530);
    /* 00825530: lea edx, [ebp + 0x198] */ r_edx = (u32)(r_ebp+0x198u);
    /* 00825536: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825538: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082553a:; BB(0x0082553a);
    /* 0082553a: lea edx, [ebp + 0x1a0] */ r_edx = (u32)(r_ebp+0x1a0u);
    /* 00825540: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825542: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825544:; BB(0x00825544);
    /* 00825544: lea edx, [ebp + 0x1a8] */ r_edx = (u32)(r_ebp+0x1a8u);
    /* 0082554a: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082554c: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082554e:; BB(0x0082554e);
    /* 0082554e: lea edx, [ebp + 0x1b0] */ r_edx = (u32)(r_ebp+0x1b0u);
    /* 00825554: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825556: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825558:; BB(0x00825558);
    /* 00825558: lea edx, [ebp + 0x1b8] */ r_edx = (u32)(r_ebp+0x1b8u);
    /* 0082555e: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825560: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825562:; BB(0x00825562);
    /* 00825562: lea edx, [ebp + 0x1c0] */ r_edx = (u32)(r_ebp+0x1c0u);
    /* 00825568: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082556a: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082556c:; BB(0x0082556c);
    /* 0082556c: lea edx, [ebp + 0x1c8] */ r_edx = (u32)(r_ebp+0x1c8u);
    /* 00825572: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825574: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825576:; BB(0x00825576);
    /* 00825576: lea edx, [ebp + 0x1d0] */ r_edx = (u32)(r_ebp+0x1d0u);
    /* 0082557c: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082557e: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825580:; BB(0x00825580);
    /* 00825580: lea edx, [ebp + 0x1d8] */ r_edx = (u32)(r_ebp+0x1d8u);
    /* 00825586: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825588: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082558a:; BB(0x0082558a);
    /* 0082558a: lea edx, [ebp + 0x1e0] */ r_edx = (u32)(r_ebp+0x1e0u);
    /* 00825590: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825592: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825594:; BB(0x00825594);
    /* 00825594: lea edx, [ebp + 0x1e8] */ r_edx = (u32)(r_ebp+0x1e8u);
    /* 0082559a: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082559c: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082559e:; BB(0x0082559e);
    /* 0082559e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_008255a0:; BB(0x008255a0);
    /* 008255a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008255a2: je 0x8258ce */ if (fZ) goto L_008258ce;
L_008255a8:; BB(0x008255a8);
    /* 008255a8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008255ac: add dword ptr [edx + 4], eax */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008255af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008255b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008255b1: ret 8 */ FN_RET(0x008252a4); r_esp += 12; return;
L_008255b4:; BB(0x008255b4);
    /* 008255b4: cmp ebx, 0xffffff01 */ {  u32 a = r_ebx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008255ba: je 0x8258bf */ if (fZ) goto L_008258bf;
L_008255c0:; BB(0x008255c0);
    /* 008255c0: cmp ebx, dword ptr [ebp] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008255c3: mov edx, ebp */ r_edx = r_ebp;
    /* 008255c5: mov ecx, 0 */ r_ecx = 0x0u;
    /* 008255ca: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008255d0:; BB(0x008255d0);
    /* 008255d0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008255d5: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 008255d8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008255da: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008255e0:; BB(0x008255e0);
    /* 008255e0: mov ecx, 2 */ r_ecx = 0x2u;
    /* 008255e5: lea edx, [ebp + 0x10] */ r_edx = (u32)(r_ebp+0x10u);
    /* 008255e8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008255ea: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008255f0:; BB(0x008255f0);
    /* 008255f0: mov ecx, 3 */ r_ecx = 0x3u;
    /* 008255f5: lea edx, [ebp + 0x18] */ r_edx = (u32)(r_ebp+0x18u);
    /* 008255f8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008255fa: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825600:; BB(0x00825600);
    /* 00825600: mov ecx, 4 */ r_ecx = 0x4u;
    /* 00825605: lea edx, [ebp + 0x20] */ r_edx = (u32)(r_ebp+0x20u);
    /* 00825608: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082560a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825610:; BB(0x00825610);
    /* 00825610: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00825615: lea edx, [ebp + 0x28] */ r_edx = (u32)(r_ebp+0x28u);
    /* 00825618: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082561a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825620:; BB(0x00825620);
    /* 00825620: mov ecx, 6 */ r_ecx = 0x6u;
    /* 00825625: lea edx, [ebp + 0x30] */ r_edx = (u32)(r_ebp+0x30u);
    /* 00825628: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082562a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825630:; BB(0x00825630);
    /* 00825630: mov ecx, 7 */ r_ecx = 0x7u;
    /* 00825635: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00825638: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082563a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825640:; BB(0x00825640);
    /* 00825640: mov ecx, 8 */ r_ecx = 0x8u;
    /* 00825645: lea edx, [ebp + 0x40] */ r_edx = (u32)(r_ebp+0x40u);
    /* 00825648: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082564a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825650:; BB(0x00825650);
    /* 00825650: mov ecx, 9 */ r_ecx = 0x9u;
    /* 00825655: lea edx, [ebp + 0x48] */ r_edx = (u32)(r_ebp+0x48u);
    /* 00825658: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082565a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825660:; BB(0x00825660);
    /* 00825660: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00825665: lea edx, [ebp + 0x50] */ r_edx = (u32)(r_ebp+0x50u);
    /* 00825668: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082566a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825670:; BB(0x00825670);
    /* 00825670: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 00825675: lea edx, [ebp + 0x58] */ r_edx = (u32)(r_ebp+0x58u);
    /* 00825678: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082567a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825680:; BB(0x00825680);
    /* 00825680: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00825685: lea edx, [ebp + 0x60] */ r_edx = (u32)(r_ebp+0x60u);
    /* 00825688: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082568a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825690:; BB(0x00825690);
    /* 00825690: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00825695: lea edx, [ebp + 0x68] */ r_edx = (u32)(r_ebp+0x68u);
    /* 00825698: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082569a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256a0:; BB(0x008256a0);
    /* 008256a0: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 008256a5: lea edx, [ebp + 0x70] */ r_edx = (u32)(r_ebp+0x70u);
    /* 008256a8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008256aa: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256b0:; BB(0x008256b0);
    /* 008256b0: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 008256b5: lea edx, [ebp + 0x78] */ r_edx = (u32)(r_ebp+0x78u);
    /* 008256b8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008256ba: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256c0:; BB(0x008256c0);
    /* 008256c0: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 008256c5: lea edx, [ebp + 0x80] */ r_edx = (u32)(r_ebp+0x80u);
    /* 008256cb: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008256cd: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256d3:; BB(0x008256d3);
    /* 008256d3: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 008256d8: lea edx, [ebp + 0x88] */ r_edx = (u32)(r_ebp+0x88u);
    /* 008256de: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008256e0: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256e6:; BB(0x008256e6);
    /* 008256e6: mov ecx, 0x12 */ r_ecx = 0x12u;
    /* 008256eb: lea edx, [ebp + 0x90] */ r_edx = (u32)(r_ebp+0x90u);
    /* 008256f1: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008256f3: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256f9:; BB(0x008256f9);
    /* 008256f9: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 008256fe: lea edx, [ebp + 0x98] */ r_edx = (u32)(r_ebp+0x98u);
    /* 00825704: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825706: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_0082570c:; BB(0x0082570c);
    /* 0082570c: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 00825711: lea edx, [ebp + 0xa0] */ r_edx = (u32)(r_ebp+0xa0u);
    /* 00825717: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825719: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_0082571f:; BB(0x0082571f);
    /* 0082571f: mov ecx, 0x15 */ r_ecx = 0x15u;
    /* 00825724: lea edx, [ebp + 0xa8] */ r_edx = (u32)(r_ebp+0xa8u);
    /* 0082572a: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082572c: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825732:; BB(0x00825732);
    /* 00825732: mov ecx, 0x16 */ r_ecx = 0x16u;
    /* 00825737: lea edx, [ebp + 0xb0] */ r_edx = (u32)(r_ebp+0xb0u);
    /* 0082573d: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082573f: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825745:; BB(0x00825745);
    /* 00825745: mov ecx, 0x17 */ r_ecx = 0x17u;
    /* 0082574a: lea edx, [ebp + 0xb8] */ r_edx = (u32)(r_ebp+0xb8u);
    /* 00825750: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825752: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825754:; BB(0x00825754);
    /* 00825754: mov ecx, 0x18 */ r_ecx = 0x18u;
    /* 00825759: lea edx, [ebp + 0xc0] */ r_edx = (u32)(r_ebp+0xc0u);
    /* 0082575f: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825761: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825763:; BB(0x00825763);
    /* 00825763: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 00825768: lea edx, [ebp + 0xc8] */ r_edx = (u32)(r_ebp+0xc8u);
    /* 0082576e: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825770: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825772:; BB(0x00825772);
    /* 00825772: mov ecx, 0x1a */ r_ecx = 0x1au;
    /* 00825777: lea edx, [ebp + 0xd0] */ r_edx = (u32)(r_ebp+0xd0u);
    /* 0082577d: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082577f: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825781:; BB(0x00825781);
    /* 00825781: mov ecx, 0x1b */ r_ecx = 0x1bu;
    /* 00825786: lea edx, [ebp + 0xd8] */ r_edx = (u32)(r_ebp+0xd8u);
    /* 0082578c: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082578e: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825790:; BB(0x00825790);
    /* 00825790: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 00825795: lea edx, [ebp + 0xe0] */ r_edx = (u32)(r_ebp+0xe0u);
    /* 0082579b: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082579d: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_0082579f:; BB(0x0082579f);
    /* 0082579f: mov ecx, 0x1d */ r_ecx = 0x1du;
    /* 008257a4: lea edx, [ebp + 0xe8] */ r_edx = (u32)(r_ebp+0xe8u);
    /* 008257aa: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008257ac: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008257ae:; BB(0x008257ae);
    /* 008257ae: mov ecx, 0x1e */ r_ecx = 0x1eu;
    /* 008257b3: lea edx, [ebp + 0xf0] */ r_edx = (u32)(r_ebp+0xf0u);
    /* 008257b9: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008257bb: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008257bd:; BB(0x008257bd);
    /* 008257bd: mov ecx, 0x1f */ r_ecx = 0x1fu;
    /* 008257c2: lea edx, [ebp + 0xf8] */ r_edx = (u32)(r_ebp+0xf8u);
L_008257c8:; BB(0x008257c8);
    /* 008257c8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008257cb: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008257ce: cmp ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008257d1: jge 0x82541c */ if ((fS==fO)) goto L_0082541c;
L_008257d7:; BB(0x008257d7);
    /* 008257d7: mov eax, ecx */ r_eax = r_ecx;
    /* 008257d9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008257db: add eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008257de: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008257e1: jl 0x82588c */ if ((fS!=fO)) goto L_0082588c;
L_008257e7:; BB(0x008257e7);
    /* 008257e7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008257e9: cmp eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008257ee: je 0x82541c */ if (fZ) goto L_0082541c;
L_008257f4:; BB(0x008257f4);
    /* 008257f4: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 008257fa: mov dword ptr [edx - 8], eax */ W32((u32)(r_edx+0xfffffff8u), r_eax);
    /* 008257fd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00825800: mov dword ptr [edx - 4], eax */ W32((u32)(r_edx+0xfffffffcu), r_eax);
    /* 00825803: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0082580a: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 0082580d: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00825810: cmp edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825816: je 0x82541c */ if (fZ) goto L_0082541c;
L_0082581c:; BB(0x0082581c);
    /* 0082581c: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
    /* 00825822: mov dword ptr [eax - 8], edx */ W32((u32)(r_eax+0xfffffff8u), r_edx);
    /* 00825825: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00825828: mov dword ptr [eax - 4], edx */ W32((u32)(r_eax+0xfffffffcu), r_edx);
    /* 0082582b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0082582e: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00825835: cmp edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082583b: je 0x82541c */ if (fZ) goto L_0082541c;
L_00825841:; BB(0x00825841);
    /* 00825841: mov dword ptr [eax + 8], 0xffffffff */ W32((u32)(r_eax+0x8u), 0xffffffffu);
    /* 00825848: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0082584a: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0082584d: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00825850: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00825853: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 0082585a: cmp edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825860: je 0x82541c */ if (fZ) goto L_0082541c;
L_00825866:; BB(0x00825866);
    /* 00825866: mov dword ptr [eax + 0x10], 0xffffffff */ W32((u32)(r_eax+0x10u), 0xffffffffu);
    /* 0082586d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00825870: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00825873: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00825876: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 0082587d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825880: lea edx, [eax + 0x18] */ r_edx = (u32)(r_eax+0x18u);
    /* 00825883: cmp ecx, 0x1a */ {  u32 a = r_ecx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00825886: jl 0x8257e7 */ if ((fS!=fO)) goto L_008257e7;
L_0082588c:; BB(0x0082588c);
    /* 0082588c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0082588e: cmp eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825893: je 0x82541c */ if (fZ) goto L_0082541c;
L_00825899:; BB(0x00825899);
    /* 00825899: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 0082589f: mov dword ptr [edx - 8], eax */ W32((u32)(r_edx+0xfffffff8u), r_eax);
    /* 008258a2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 008258a5: mov dword ptr [edx - 4], eax */ W32((u32)(r_edx+0xfffffffcu), r_eax);
    /* 008258a8: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 008258af: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008258b2: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008258b5: cmp ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008258b8: jl 0x82588c */ if ((fS!=fO)) goto L_0082588c;
L_008258ba:; BB(0x008258ba);
    /* 008258ba: jmp 0x82541c */ goto L_0082541c;
L_008258bf:; BB(0x008258bf);
    /* 008258bf: mov dword ptr [ebp + 0xf4], 0 */ W32((u32)(r_ebp+0xf4u), 0x0u);
    /* 008258c9: jmp 0x82541c */ goto L_0082541c;
L_008258ce:; BB(0x008258ce);
    /* 008258ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008258cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008258d0: ret 8 */ FN_RET(0x008252a4); r_esp += 12; return;
}

void f_0082566d(void)
{
    FN_ENTER(0x0082566d);
    goto L_0082566d;
L_0082541c:; BB(0x0082541c);
    /* 0082541c: lea edx, [ebp + 0xf8] */ r_edx = (u32)(r_ebp+0xf8u);
    /* 00825422: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825424: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082542a:; BB(0x0082542a);
    /* 0082542a: lea edx, [ebp + 0x100] */ r_edx = (u32)(r_ebp+0x100u);
    /* 00825430: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825432: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825438:; BB(0x00825438);
    /* 00825438: lea edx, [ebp + 0x108] */ r_edx = (u32)(r_ebp+0x108u);
    /* 0082543e: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825440: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825446:; BB(0x00825446);
    /* 00825446: lea edx, [ebp + 0x110] */ r_edx = (u32)(r_ebp+0x110u);
    /* 0082544c: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082544e: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825454:; BB(0x00825454);
    /* 00825454: lea edx, [ebp + 0x118] */ r_edx = (u32)(r_ebp+0x118u);
    /* 0082545a: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082545c: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825462:; BB(0x00825462);
    /* 00825462: lea edx, [ebp + 0x120] */ r_edx = (u32)(r_ebp+0x120u);
    /* 00825468: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082546a: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825470:; BB(0x00825470);
    /* 00825470: lea edx, [ebp + 0x128] */ r_edx = (u32)(r_ebp+0x128u);
    /* 00825476: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825478: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082547e:; BB(0x0082547e);
    /* 0082547e: lea edx, [ebp + 0x130] */ r_edx = (u32)(r_ebp+0x130u);
    /* 00825484: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825486: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082548c:; BB(0x0082548c);
    /* 0082548c: lea edx, [ebp + 0x138] */ r_edx = (u32)(r_ebp+0x138u);
    /* 00825492: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825494: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082549a:; BB(0x0082549a);
    /* 0082549a: lea edx, [ebp + 0x140] */ r_edx = (u32)(r_ebp+0x140u);
    /* 008254a0: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254a2: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254a8:; BB(0x008254a8);
    /* 008254a8: lea edx, [ebp + 0x148] */ r_edx = (u32)(r_ebp+0x148u);
    /* 008254ae: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254b0: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254b6:; BB(0x008254b6);
    /* 008254b6: lea edx, [ebp + 0x150] */ r_edx = (u32)(r_ebp+0x150u);
    /* 008254bc: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254be: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254c4:; BB(0x008254c4);
    /* 008254c4: lea edx, [ebp + 0x158] */ r_edx = (u32)(r_ebp+0x158u);
    /* 008254ca: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254cc: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254d2:; BB(0x008254d2);
    /* 008254d2: lea edx, [ebp + 0x160] */ r_edx = (u32)(r_ebp+0x160u);
    /* 008254d8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254da: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254e0:; BB(0x008254e0);
    /* 008254e0: lea edx, [ebp + 0x168] */ r_edx = (u32)(r_ebp+0x168u);
    /* 008254e6: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254e8: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254ee:; BB(0x008254ee);
    /* 008254ee: lea edx, [ebp + 0x170] */ r_edx = (u32)(r_ebp+0x170u);
    /* 008254f4: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008254f6: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_008254fc:; BB(0x008254fc);
    /* 008254fc: lea edx, [ebp + 0x178] */ r_edx = (u32)(r_ebp+0x178u);
    /* 00825502: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825504: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082550a:; BB(0x0082550a);
    /* 0082550a: lea edx, [ebp + 0x180] */ r_edx = (u32)(r_ebp+0x180u);
    /* 00825510: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825512: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825518:; BB(0x00825518);
    /* 00825518: lea edx, [ebp + 0x188] */ r_edx = (u32)(r_ebp+0x188u);
    /* 0082551e: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825520: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825526:; BB(0x00825526);
    /* 00825526: lea edx, [ebp + 0x190] */ r_edx = (u32)(r_ebp+0x190u);
    /* 0082552c: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082552e: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825530:; BB(0x00825530);
    /* 00825530: lea edx, [ebp + 0x198] */ r_edx = (u32)(r_ebp+0x198u);
    /* 00825536: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825538: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082553a:; BB(0x0082553a);
    /* 0082553a: lea edx, [ebp + 0x1a0] */ r_edx = (u32)(r_ebp+0x1a0u);
    /* 00825540: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825542: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825544:; BB(0x00825544);
    /* 00825544: lea edx, [ebp + 0x1a8] */ r_edx = (u32)(r_ebp+0x1a8u);
    /* 0082554a: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082554c: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082554e:; BB(0x0082554e);
    /* 0082554e: lea edx, [ebp + 0x1b0] */ r_edx = (u32)(r_ebp+0x1b0u);
    /* 00825554: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825556: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825558:; BB(0x00825558);
    /* 00825558: lea edx, [ebp + 0x1b8] */ r_edx = (u32)(r_ebp+0x1b8u);
    /* 0082555e: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825560: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825562:; BB(0x00825562);
    /* 00825562: lea edx, [ebp + 0x1c0] */ r_edx = (u32)(r_ebp+0x1c0u);
    /* 00825568: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082556a: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082556c:; BB(0x0082556c);
    /* 0082556c: lea edx, [ebp + 0x1c8] */ r_edx = (u32)(r_ebp+0x1c8u);
    /* 00825572: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825574: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825576:; BB(0x00825576);
    /* 00825576: lea edx, [ebp + 0x1d0] */ r_edx = (u32)(r_ebp+0x1d0u);
    /* 0082557c: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082557e: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825580:; BB(0x00825580);
    /* 00825580: lea edx, [ebp + 0x1d8] */ r_edx = (u32)(r_ebp+0x1d8u);
    /* 00825586: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825588: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082558a:; BB(0x0082558a);
    /* 0082558a: lea edx, [ebp + 0x1e0] */ r_edx = (u32)(r_ebp+0x1e0u);
    /* 00825590: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825592: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_00825594:; BB(0x00825594);
    /* 00825594: lea edx, [ebp + 0x1e8] */ r_edx = (u32)(r_ebp+0x1e8u);
    /* 0082559a: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082559c: je 0x8255a0 */ if (fZ) goto L_008255a0;
L_0082559e:; BB(0x0082559e);
    /* 0082559e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_008255a0:; BB(0x008255a0);
    /* 008255a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008255a2: je 0x8258ce */ if (fZ) goto L_008258ce;
L_008255a8:; BB(0x008255a8);
    /* 008255a8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008255ac: add dword ptr [edx + 4], eax */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008255af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008255b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008255b1: ret 8 */ FN_RET(0x0082566d); r_esp += 12; return;
L_0082566d:; BB(0x0082566d);
    /* 0082566d: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082566f: add byte ptr [ecx + 0xb], bh */ { u32 ad = (u32)(r_ecx+0xbu);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00825675: lea edx, [ebp + 0x58] */ r_edx = (u32)(r_ebp+0x58u);
    /* 00825678: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082567a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825680:; BB(0x00825680);
    /* 00825680: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00825685: lea edx, [ebp + 0x60] */ r_edx = (u32)(r_ebp+0x60u);
    /* 00825688: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082568a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825690:; BB(0x00825690);
    /* 00825690: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00825695: lea edx, [ebp + 0x68] */ r_edx = (u32)(r_ebp+0x68u);
    /* 00825698: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082569a: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256a0:; BB(0x008256a0);
    /* 008256a0: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 008256a5: lea edx, [ebp + 0x70] */ r_edx = (u32)(r_ebp+0x70u);
    /* 008256a8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008256aa: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256b0:; BB(0x008256b0);
    /* 008256b0: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 008256b5: lea edx, [ebp + 0x78] */ r_edx = (u32)(r_ebp+0x78u);
    /* 008256b8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008256ba: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256c0:; BB(0x008256c0);
    /* 008256c0: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 008256c5: lea edx, [ebp + 0x80] */ r_edx = (u32)(r_ebp+0x80u);
    /* 008256cb: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008256cd: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256d3:; BB(0x008256d3);
    /* 008256d3: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 008256d8: lea edx, [ebp + 0x88] */ r_edx = (u32)(r_ebp+0x88u);
    /* 008256de: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008256e0: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256e6:; BB(0x008256e6);
    /* 008256e6: mov ecx, 0x12 */ r_ecx = 0x12u;
    /* 008256eb: lea edx, [ebp + 0x90] */ r_edx = (u32)(r_ebp+0x90u);
    /* 008256f1: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008256f3: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008256f9:; BB(0x008256f9);
    /* 008256f9: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 008256fe: lea edx, [ebp + 0x98] */ r_edx = (u32)(r_ebp+0x98u);
    /* 00825704: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825706: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_0082570c:; BB(0x0082570c);
    /* 0082570c: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 00825711: lea edx, [ebp + 0xa0] */ r_edx = (u32)(r_ebp+0xa0u);
    /* 00825717: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825719: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_0082571f:; BB(0x0082571f);
    /* 0082571f: mov ecx, 0x15 */ r_ecx = 0x15u;
    /* 00825724: lea edx, [ebp + 0xa8] */ r_edx = (u32)(r_ebp+0xa8u);
    /* 0082572a: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082572c: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825732:; BB(0x00825732);
    /* 00825732: mov ecx, 0x16 */ r_ecx = 0x16u;
    /* 00825737: lea edx, [ebp + 0xb0] */ r_edx = (u32)(r_ebp+0xb0u);
    /* 0082573d: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082573f: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825745:; BB(0x00825745);
    /* 00825745: mov ecx, 0x17 */ r_ecx = 0x17u;
    /* 0082574a: lea edx, [ebp + 0xb8] */ r_edx = (u32)(r_ebp+0xb8u);
    /* 00825750: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825752: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825754:; BB(0x00825754);
    /* 00825754: mov ecx, 0x18 */ r_ecx = 0x18u;
    /* 00825759: lea edx, [ebp + 0xc0] */ r_edx = (u32)(r_ebp+0xc0u);
    /* 0082575f: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825761: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825763:; BB(0x00825763);
    /* 00825763: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 00825768: lea edx, [ebp + 0xc8] */ r_edx = (u32)(r_ebp+0xc8u);
    /* 0082576e: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825770: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825772:; BB(0x00825772);
    /* 00825772: mov ecx, 0x1a */ r_ecx = 0x1au;
    /* 00825777: lea edx, [ebp + 0xd0] */ r_edx = (u32)(r_ebp+0xd0u);
    /* 0082577d: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082577f: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825781:; BB(0x00825781);
    /* 00825781: mov ecx, 0x1b */ r_ecx = 0x1bu;
    /* 00825786: lea edx, [ebp + 0xd8] */ r_edx = (u32)(r_ebp+0xd8u);
    /* 0082578c: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082578e: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_00825790:; BB(0x00825790);
    /* 00825790: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 00825795: lea edx, [ebp + 0xe0] */ r_edx = (u32)(r_ebp+0xe0u);
    /* 0082579b: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082579d: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_0082579f:; BB(0x0082579f);
    /* 0082579f: mov ecx, 0x1d */ r_ecx = 0x1du;
    /* 008257a4: lea edx, [ebp + 0xe8] */ r_edx = (u32)(r_ebp+0xe8u);
    /* 008257aa: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008257ac: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008257ae:; BB(0x008257ae);
    /* 008257ae: mov ecx, 0x1e */ r_ecx = 0x1eu;
    /* 008257b3: lea edx, [ebp + 0xf0] */ r_edx = (u32)(r_ebp+0xf0u);
    /* 008257b9: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008257bb: je 0x8257c8 */ if (fZ) goto L_008257c8;
L_008257bd:; BB(0x008257bd);
    /* 008257bd: mov ecx, 0x1f */ r_ecx = 0x1fu;
    /* 008257c2: lea edx, [ebp + 0xf8] */ r_edx = (u32)(r_ebp+0xf8u);
L_008257c8:; BB(0x008257c8);
    /* 008257c8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008257cb: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008257ce: cmp ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008257d1: jge 0x82541c */ if ((fS==fO)) goto L_0082541c;
L_008257d7:; BB(0x008257d7);
    /* 008257d7: mov eax, ecx */ r_eax = r_ecx;
    /* 008257d9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008257db: add eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008257de: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008257e1: jl 0x82588c */ if ((fS!=fO)) goto L_0082588c;
L_008257e7:; BB(0x008257e7);
    /* 008257e7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008257e9: cmp eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008257ee: je 0x82541c */ if (fZ) goto L_0082541c;
L_008257f4:; BB(0x008257f4);
    /* 008257f4: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 008257fa: mov dword ptr [edx - 8], eax */ W32((u32)(r_edx+0xfffffff8u), r_eax);
    /* 008257fd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00825800: mov dword ptr [edx - 4], eax */ W32((u32)(r_edx+0xfffffffcu), r_eax);
    /* 00825803: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0082580a: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 0082580d: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00825810: cmp edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825816: je 0x82541c */ if (fZ) goto L_0082541c;
L_0082581c:; BB(0x0082581c);
    /* 0082581c: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
    /* 00825822: mov dword ptr [eax - 8], edx */ W32((u32)(r_eax+0xfffffff8u), r_edx);
    /* 00825825: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00825828: mov dword ptr [eax - 4], edx */ W32((u32)(r_eax+0xfffffffcu), r_edx);
    /* 0082582b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0082582e: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00825835: cmp edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082583b: je 0x82541c */ if (fZ) goto L_0082541c;
L_00825841:; BB(0x00825841);
    /* 00825841: mov dword ptr [eax + 8], 0xffffffff */ W32((u32)(r_eax+0x8u), 0xffffffffu);
    /* 00825848: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0082584a: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0082584d: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00825850: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00825853: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 0082585a: cmp edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825860: je 0x82541c */ if (fZ) goto L_0082541c;
L_00825866:; BB(0x00825866);
    /* 00825866: mov dword ptr [eax + 0x10], 0xffffffff */ W32((u32)(r_eax+0x10u), 0xffffffffu);
    /* 0082586d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00825870: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00825873: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00825876: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 0082587d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00825880: lea edx, [eax + 0x18] */ r_edx = (u32)(r_eax+0x18u);
    /* 00825883: cmp ecx, 0x1a */ {  u32 a = r_ecx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00825886: jl 0x8257e7 */ if ((fS!=fO)) goto L_008257e7;
L_0082588c:; BB(0x0082588c);
    /* 0082588c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0082588e: cmp eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825893: je 0x82541c */ if (fZ) goto L_0082541c;
L_00825899:; BB(0x00825899);
    /* 00825899: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 0082589f: mov dword ptr [edx - 8], eax */ W32((u32)(r_edx+0xfffffff8u), r_eax);
    /* 008258a2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 008258a5: mov dword ptr [edx - 4], eax */ W32((u32)(r_edx+0xfffffffcu), r_eax);
    /* 008258a8: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 008258af: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008258b2: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008258b5: cmp ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008258b8: jl 0x82588c */ if ((fS!=fO)) goto L_0082588c;
L_008258ba:; BB(0x008258ba);
    /* 008258ba: jmp 0x82541c */ goto L_0082541c;
L_008258ce:; BB(0x008258ce);
    /* 008258ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008258cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008258d0: ret 8 */ FN_RET(0x0082566d); r_esp += 12; return;
}

void f_008258d4(void)
{
    FN_ENTER(0x008258d4);
    /* 008258d4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008258d8: movzx eax, byte ptr [eax + 5] */ r_eax = (u32)R8((u32)(r_eax+0x5u));
    /* 008258dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008258de: je 0x825909 */ if (fZ) goto L_00825909;
L_008258e0:; BB(0x008258e0);
    /* 008258e0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008258e3: jne 0x82592c */ if (!fZ) goto L_0082592c;
L_008258e5:; BB(0x008258e5);
    /* 008258e5: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 008258ec: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 008258f2: and eax, 0xffbf */ {  u32 a = r_eax; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008258f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008258f9: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 008258ff: je 0x82592c */ if (fZ) goto L_0082592c;
L_00825901:; BB(0x00825901);
    /* 00825901: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00825903: call 0x760768 */ r_esp -= 4; W32(r_esp, 0x825908u); f_00760768();
    /* 00825908: ret  */ FN_RET(0x008258d4); r_esp += 4; return;
L_00825909:; BB(0x00825909);
    /* 00825909: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00825910: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00825916: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082591b: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 00825921: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825923: je 0x82592c */ if (fZ) goto L_0082592c;
L_00825925:; BB(0x00825925);
    /* 00825925: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00825927: call 0x760768 */ r_esp -= 4; W32(r_esp, 0x82592cu); f_00760768();
L_0082592c:; BB(0x0082592c);
    /* 0082592c: ret  */ FN_RET(0x008258d4); r_esp += 4; return;
}

void f_00825930(void)
{
    FN_ENTER(0x00825930);
    /* 00825930: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00825934: movzx eax, byte ptr [eax + 5] */ r_eax = (u32)R8((u32)(r_eax+0x5u));
    /* 00825938: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082593a: je 0x825965 */ if (fZ) goto L_00825965;
L_0082593c:; BB(0x0082593c);
    /* 0082593c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082593f: jne 0x825988 */ if (!fZ) goto L_00825988;
L_00825941:; BB(0x00825941);
    /* 00825941: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00825948: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 0082594e: and eax, 0xfdff */ {  u32 a = r_eax; u32 b = 0xfdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00825953: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825955: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 0082595b: je 0x825988 */ if (fZ) goto L_00825988;
L_0082595d:; BB(0x0082595d);
    /* 0082595d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082595f: call 0x760768 */ r_esp -= 4; W32(r_esp, 0x825964u); f_00760768();
    /* 00825964: ret  */ FN_RET(0x00825930); r_esp += 4; return;
L_00825965:; BB(0x00825965);
    /* 00825965: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 0082596c: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00825972: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00825977: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 0082597d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082597f: je 0x825988 */ if (fZ) goto L_00825988;
L_00825981:; BB(0x00825981);
    /* 00825981: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00825983: call 0x760768 */ r_esp -= 4; W32(r_esp, 0x825988u); f_00760768();
L_00825988:; BB(0x00825988);
    /* 00825988: ret  */ FN_RET(0x00825930); r_esp += 4; return;
}

void f_0082598c(void)
{
    FN_ENTER(0x0082598c);
    /* 0082598c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082598d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00825991: movzx edx, byte ptr [eax + 5] */ r_edx = (u32)R8((u32)(r_eax+0x5u));
    /* 00825995: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825998: jne 0x8259c9 */ if (!fZ) goto L_008259c9;
L_0082599a:; BB(0x0082599a);
    /* 0082599a: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x82599fu); f_00816d30();
    /* 0082599f: movsx eax, byte ptr [0xaca904] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 008259a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008259a7: call 0x816cf0 */ r_esp -= 4; W32(r_esp, 0x8259acu); f_00816cf0();
    /* 008259ac: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 008259b1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x8259b6u); f_0079317c();
    /* 008259b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008259b7: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x8259bcu); f_00816cb8();
    /* 008259bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008259bf: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 008259c4: call 0x826e50 */ r_esp -= 4; W32(r_esp, 0x8259c9u); f_00826e50();
L_008259c9:; BB(0x008259c9);
    /* 008259c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008259ca: ret  */ FN_RET(0x0082598c); r_esp += 4; return;
}

void f_008259cc(void)
{
    FN_ENTER(0x008259cc);
    /* 008259cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008259d0: movzx edx, byte ptr [eax + 5] */ r_edx = (u32)R8((u32)(r_eax+0x5u));
    /* 008259d4: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008259d7: jne 0x8259e4 */ if (!fZ) goto L_008259e4;
L_008259d9:; BB(0x008259d9);
    /* 008259d9: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 008259df: call 0x7f6984 */ r_esp -= 4; W32(r_esp, 0x8259e4u); f_007f6984();
L_008259e4:; BB(0x008259e4);
    /* 008259e4: ret  */ FN_RET(0x008259cc); r_esp += 4; return;
}

void f_008259e8(void)
{
    FN_ENTER(0x008259e8);
    /* 008259e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008259e9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008259ed: movzx eax, byte ptr [edx + 5] */ r_eax = (u32)R8((u32)(r_edx+0x5u));
    /* 008259f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008259f3: jne 0x825a03 */ if (!fZ) goto L_00825a03;
L_008259f5:; BB(0x008259f5);
    /* 008259f5: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 008259f9: call 0x825a0c */ r_esp -= 4; W32(r_esp, 0x8259feu); f_00825a0c();
    /* 008259fe: call 0x826e50 */ r_esp -= 4; W32(r_esp, 0x825a03u); f_00826e50();
L_00825a03:; BB(0x00825a03);
    /* 00825a03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00825a04: ret  */ FN_RET(0x008259e8); r_esp += 4; return;
}

void f_00825a0c(void) /* sub_825A0C */
{
    FN_ENTER(0x00825a0c);
    /* 00825a0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00825a0d: mov ebp, eax */ r_ebp = r_eax;
    /* 00825a0f: cmp ebp, dword ptr [0xa9c4f4] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825a15: jne 0x825a24 */ if (!fZ) goto L_00825a24;
L_00825a17:; BB(0x00825a17);
    /* 00825a17: push 0x10f */ { u32 v = 0x10fu; r_esp -= 4; W32(r_esp, v); }
    /* 00825a1c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x825a21u); f_0079317c();
    /* 00825a21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00825a22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00825a23: ret  */ FN_RET(0x00825a0c); r_esp += 4; return;
L_00825a24:; BB(0x00825a24);
    /* 00825a24: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x825a29u); f_00816d30();
    /* 00825a29: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00825a2a: call 0x816cf0 */ r_esp -= 4; W32(r_esp, 0x825a2fu); f_00816cf0();
    /* 00825a2f: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 00825a34: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x825a39u); f_0079317c();
    /* 00825a39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00825a3a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x825a3fu); f_00816cb8();
    /* 00825a3f: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 00825a44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825a47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00825a48: ret  */ FN_RET(0x00825a0c); r_esp += 4; return;
}

void f_00825a4c(void) /* sub_825A4C */
{
    FN_ENTER(0x00825a4c);
    /* 00825a4c: call 0x8271e0 */ r_esp -= 4; W32(r_esp, 0x825a51u); f_008271e0();
    /* 00825a51: ret  */ FN_RET(0x00825a4c); r_esp += 4; return;
}

void f_00825a54(void) /* sub_825A54 */
{
    FN_ENTER(0x00825a54);
    /* 00825a54: call 0x8271d0 */ r_esp -= 4; W32(r_esp, 0x825a59u); f_008271d0();
    /* 00825a59: ret  */ FN_RET(0x00825a54); r_esp += 4; return;
}

void f_00825a5c(void) /* sub_825A5C */
{
    FN_ENTER(0x00825a5c);
    /* 00825a5c: call 0x825a74 */ r_esp -= 4; W32(r_esp, 0x825a61u); f_00825a74();
    /* 00825a61: call 0x825bac */ r_esp -= 4; W32(r_esp, 0x825a66u); f_00825bac();
    /* 00825a66: call 0x825bf0 */ r_esp -= 4; W32(r_esp, 0x825a6bu); f_00825bf0();
    /* 00825a6b: call 0x825dfc */ r_esp -= 4; W32(r_esp, 0x825a70u); f_00825dfc();
    /* 00825a70: ret  */ FN_RET(0x00825a5c); r_esp += 4; return;
}

void f_00825a74(void) /* sub_825A74 */
{
    FN_ENTER(0x00825a74);
    /* 00825a74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00825a75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00825a76: movsx eax, byte ptr [0xaca900] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 00825a7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825a7f: je 0x825ab1 */ if (fZ) goto L_00825ab1;
L_00825a81:; BB(0x00825a81);
    /* 00825a81: movsx eax, byte ptr [0xaca904] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00825a88: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00825a8b: je 0x825ab1 */ if (fZ) goto L_00825ab1;
L_00825a8d:; BB(0x00825a8d);
    /* 00825a8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00825a8e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x825a93u); f_0068d5a8();
    /* 00825a93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00825a94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825a96: je 0x825ab4 */ if (fZ) goto L_00825ab4;
L_00825a98:; BB(0x00825a98);
    /* 00825a98: movsx ebp, byte ptr [0xaca904] */ r_ebp = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00825a9f: mov eax, ebp */ r_eax = r_ebp;
    /* 00825aa1: call 0x825ac0 */ r_esp -= 4; W32(r_esp, 0x825aa6u); f_00825ac0();
    /* 00825aa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825aa8: jne 0x825ab1 */ if (!fZ) goto L_00825ab1;
L_00825aaa:; BB(0x00825aaa);
    /* 00825aaa: mov eax, ebp */ r_eax = r_ebp;
    /* 00825aac: call 0x825ae4 */ r_esp -= 4; W32(r_esp, 0x825ab1u); f_00825ae4();
L_00825ab1:; BB(0x00825ab1);
    /* 00825ab1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00825ab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00825ab3: ret  */ FN_RET(0x00825a74); r_esp += 4; return;
L_00825ab4:; BB(0x00825ab4);
    /* 00825ab4: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x825ab9u); f_00825b4c();
    /* 00825ab9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00825aba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00825abb: ret  */ FN_RET(0x00825a74); r_esp += 4; return;
}

void f_00825abc(void) /* sub_825ABC */
{
    FN_ENTER(0x00825abc);
    /* 00825abc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00825ac0: movzx edx, word ptr [0xaca908] */ r_edx = (u32)R16((u32)(0xaca908u));
    /* 00825ac7: mov ecx, eax */ r_ecx = r_eax;
    /* 00825ac9: mov eax, 1 */ r_eax = 0x1u;
    /* 00825ace: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00825ad0: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825ad2: je 0x825ada */ if (fZ) goto L_00825ada;
L_00825ad4:; BB(0x00825ad4);
    /* 00825ad4: mov eax, 1 */ r_eax = 0x1u;
    /* 00825ad9: ret  */ FN_RET(0x00825abc); r_esp += 4; return;
L_00825ada:; BB(0x00825ada);
    /* 00825ada: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825adc: ret  */ FN_RET(0x00825abc); r_esp += 4; return;
}

void f_00825ac0(void)
{
    FN_ENTER(0x00825ac0);
    /* 00825ac0: movzx edx, word ptr [0xaca908] */ r_edx = (u32)R16((u32)(0xaca908u));
    /* 00825ac7: mov ecx, eax */ r_ecx = r_eax;
    /* 00825ac9: mov eax, 1 */ r_eax = 0x1u;
    /* 00825ace: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00825ad0: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825ad2: je 0x825ada */ if (fZ) goto L_00825ada;
L_00825ad4:; BB(0x00825ad4);
    /* 00825ad4: mov eax, 1 */ r_eax = 0x1u;
    /* 00825ad9: ret  */ FN_RET(0x00825ac0); r_esp += 4; return;
L_00825ada:; BB(0x00825ada);
    /* 00825ada: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825adc: ret  */ FN_RET(0x00825ac0); r_esp += 4; return;
}

void f_00825ae4(void) /* sub_825AE4 */
{
    FN_ENTER(0x00825ae4);
    /* 00825ae4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00825ae5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00825ae6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00825ae9: mov ebx, eax */ r_ebx = r_eax;
    /* 00825aeb: movsx esi, byte ptr [0xaca904] */ r_esi = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00825af2: mov byte ptr [esp + 4], 0xa6 */ W8((u32)(r_esp+0x4u), 0xa6u);
    /* 00825af7: mov word ptr [esp + 0xa], bx */ W16((u32)(r_esp+0xau), (u16)r_ebx);
    /* 00825afc: mov byte ptr [esp + 5], 4 */ W8((u32)(r_esp+0x5u), 0x4u);
    /* 00825b01: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00825b05: mov byte ptr [esp + 8], 7 */ W8((u32)(r_esp+0x8u), 0x7u);
    /* 00825b0a: mov byte ptr [esp + 9], 0 */ W8((u32)(r_esp+0x9u), 0x0u);
    /* 00825b0f: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x825b14u); f_00827364();
    /* 00825b14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00825b15: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00825b19: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x825b1eu); f_00800464();
    /* 00825b1e: movsx edx, byte ptr [0xaca900] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 00825b25: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825b28: je 0x825b3c */ if (fZ) goto L_00825b3c;
L_00825b2a:; BB(0x00825b2a);
    /* 00825b2a: mov eax, ebx */ r_eax = r_ebx;
    /* 00825b2c: call 0x825a0c */ r_esp -= 4; W32(r_esp, 0x825b31u); f_00825a0c();
    /* 00825b31: call 0x826e50 */ r_esp -= 4; W32(r_esp, 0x825b36u); f_00826e50();
    /* 00825b36: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825b39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00825b3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00825b3b: ret  */ FN_RET(0x00825ae4); r_esp += 4; return;
L_00825b3c:; BB(0x00825b3c);
    /* 00825b3c: call 0x717da4 */ r_esp -= 4; W32(r_esp, 0x825b41u); f_00717da4();
    /* 00825b41: call 0x824dc0 */ r_esp -= 4; W32(r_esp, 0x825b46u); f_00824dc0();
    /* 00825b46: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825b49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00825b4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00825b4b: ret  */ FN_RET(0x00825ae4); r_esp += 4; return;
}

void f_00825b4c(void) /* sub_825B4C */
{
    FN_ENTER(0x00825b4c);
    /* 00825b4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00825b4d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00825b50: movsx eax, byte ptr [0xaca900] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 00825b57: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00825b5a: ja 0x825ba6 */ if ((!fC&&!fZ)) goto L_00825ba6;
L_00825b5c:; BB(0x00825b5c);
    /* 00825b5c: mov eax, dword ptr [eax*4 + 0x989dec] */ r_eax = R32((u32)(r_eax*4+0x989decu));
    /* 00825b63: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00825ba6:; BB(0x00825ba6);
    /* 00825ba6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825ba9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00825baa: ret  */ FN_RET(0x00825b4c); r_esp += 4; return;
}

void f_00825b65(void)
{
    FN_ENTER(0x00825b65);
    /* 00825b65: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00825b6b: call 0x7f6984 */ r_esp -= 4; W32(r_esp, 0x825b70u); f_007f6984();
    /* 00825b70: jmp 0x825ba6 */ goto L_00825ba6;
L_00825ba6:; BB(0x00825ba6);
    /* 00825ba6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825ba9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00825baa: ret  */ FN_RET(0x00825b65); r_esp += 4; return;
}

void f_00825b72(void)
{
    FN_ENTER(0x00825b72);
    /* 00825b72: movsx esi, byte ptr [0xaca904] */ r_esi = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00825b79: mov byte ptr [esp], 0xa6 */ W8((u32)(r_esp), 0xa6u);
    /* 00825b7d: mov eax, 4 */ r_eax = 0x4u;
    /* 00825b82: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 00825b86: mov byte ptr [esp + 4], 5 */ W8((u32)(r_esp+0x4u), 0x5u);
    /* 00825b8b: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 00825b8f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00825b92: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x825b97u); f_00827364();
    /* 00825b97: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00825b98: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00825b9c: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x825ba1u); f_00800464();
    /* 00825ba1: call 0x824dc0 */ r_esp -= 4; W32(r_esp, 0x825ba6u); f_00824dc0();
    /* 00825ba6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825ba9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00825baa: ret  */ FN_RET(0x00825b72); r_esp += 4; return;
}

void f_00825ba6(void)
{
    FN_ENTER(0x00825ba6);
    /* 00825ba6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825ba9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00825baa: ret  */ FN_RET(0x00825ba6); r_esp += 4; return;
}

void f_00825bac(void) /* sub_825BAC */
{
    FN_ENTER(0x00825bac);
    /* 00825bac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00825bad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00825bae: movsx eax, byte ptr [0xaca900] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 00825bb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825bb7: jne 0x825bbc */ if (!fZ) goto L_00825bbc;
L_00825bb9:; BB(0x00825bb9);
    /* 00825bb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00825bba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00825bbb: ret  */ FN_RET(0x00825bac); r_esp += 4; return;
L_00825bbc:; BB(0x00825bbc);
    /* 00825bbc: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00825bc2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x825bc7u); f_0068d5a8();
    /* 00825bc7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00825bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825bca: je 0x825be7 */ if (fZ) goto L_00825be7;
L_00825bcc:; BB(0x00825bcc);
    /* 00825bcc: mov esi, dword ptr [0xa9c4f4] */ r_esi = R32((u32)(0xa9c4f4u));
    /* 00825bd2: mov eax, esi */ r_eax = r_esi;
    /* 00825bd4: call 0x825ac0 */ r_esp -= 4; W32(r_esp, 0x825bd9u); f_00825ac0();
    /* 00825bd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825bdb: jne 0x825be4 */ if (!fZ) goto L_00825be4;
L_00825bdd:; BB(0x00825bdd);
    /* 00825bdd: mov eax, esi */ r_eax = r_esi;
    /* 00825bdf: call 0x825ae4 */ r_esp -= 4; W32(r_esp, 0x825be4u); f_00825ae4();
L_00825be4:; BB(0x00825be4);
    /* 00825be4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00825be5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00825be6: ret  */ FN_RET(0x00825bac); r_esp += 4; return;
L_00825be7:; BB(0x00825be7);
    /* 00825be7: call 0x825b4c */ r_esp -= 4; W32(r_esp, 0x825becu); f_00825b4c();
    /* 00825bec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00825bed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00825bee: ret  */ FN_RET(0x00825bac); r_esp += 4; return;
}

void f_00825bf0(void) /* sub_825BF0 */
{
    FN_ENTER(0x00825bf0);
    /* 00825bf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00825bf1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00825bf4: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00825bfb: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00825bfd: jne 0x825c72 */ if (!fZ) goto L_00825c72;
L_00825bff:; BB(0x00825bff);
    /* 00825bff: mov dword ptr [0xaca8f8], 0 */ W32((u32)(0xaca8f8u), 0x0u);
    /* 00825c09: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00825c0b: jne 0x825c12 */ if (!fZ) goto L_00825c12;
L_00825c0d:; BB(0x00825c0d);
    /* 00825c0d: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825c10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00825c11: ret  */ FN_RET(0x00825bf0); r_esp += 4; return;
L_00825c12:; BB(0x00825c12);
    /* 00825c12: movsx edi, byte ptr [0xaca904] */ r_edi = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00825c19: mov byte ptr [esp + 0x30], 0xa6 */ W8((u32)(r_esp+0x30u), 0xa6u);
    /* 00825c1e: mov eax, 4 */ r_eax = 0x4u;
    /* 00825c23: mov byte ptr [esp + 0x31], al */ W8((u32)(r_esp+0x31u), (u8)r_eax);
    /* 00825c27: mov byte ptr [esp + 0x34], 3 */ W8((u32)(r_esp+0x34u), 0x3u);
    /* 00825c2c: mov byte ptr [esp + 0x35], al */ W8((u32)(r_esp+0x35u), (u8)r_eax);
    /* 00825c30: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 00825c34: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x825c39u); f_00827364();
    /* 00825c39: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00825c3a: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 00825c3e: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x825c43u); f_00800464();
    /* 00825c43: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00825c4a: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00825c50: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00825c55: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825c57: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 00825c5d: je 0x825c66 */ if (fZ) goto L_00825c66;
L_00825c5f:; BB(0x00825c5f);
    /* 00825c5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00825c61: call 0x760780 */ r_esp -= 4; W32(r_esp, 0x825c66u); f_00760780();
L_00825c66:; BB(0x00825c66);
    /* 00825c66: mov byte ptr [0xaca900], 3 */ W8((u32)(0xaca900u), 0x3u);
    /* 00825c6d: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825c70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00825c71: ret  */ FN_RET(0x00825bf0); r_esp += 4; return;
L_00825c72:; BB(0x00825c72);
    /* 00825c72: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00825c74: jne 0x825cf9 */ if (!fZ) goto L_00825cf9;
L_00825c7a:; BB(0x00825c7a);
    /* 00825c7a: mov edx, dword ptr [0xaca8f8] */ r_edx = R32((u32)(0xaca8f8u));
    /* 00825c80: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 00825c83: mov dword ptr [0xaca8f8], eax */ W32((u32)(0xaca8f8u), r_eax);
    /* 00825c88: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00825c8b: jge 0x825c92 */ if ((fS==fO)) goto L_00825c92;
L_00825c8d:; BB(0x00825c8d);
    /* 00825c8d: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825c90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00825c91: ret  */ FN_RET(0x00825bf0); r_esp += 4; return;
L_00825c92:; BB(0x00825c92);
    /* 00825c92: movsx edi, byte ptr [0xaca904] */ r_edi = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00825c99: mov byte ptr [esp + 0x20], 0xa6 */ W8((u32)(r_esp+0x20u), 0xa6u);
    /* 00825c9e: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00825ca2: mov byte ptr [esp + 0x21], 4 */ W8((u32)(r_esp+0x21u), 0x4u);
    /* 00825ca7: mov byte ptr [esp + 0x24], 3 */ W8((u32)(r_esp+0x24u), 0x3u);
    /* 00825cac: mov byte ptr [esp + 0x25], 0 */ W8((u32)(r_esp+0x25u), 0x0u);
    /* 00825cb1: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x825cb6u); f_00827364();
    /* 00825cb6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00825cb7: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00825cbb: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x825cc0u); f_00800464();
    /* 00825cc0: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00825cc7: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00825ccd: or eax, 0xffff0020 */ {  u32 a = r_eax; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00825cd2: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 00825cd8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825cda: je 0x825ce3 */ if (fZ) goto L_00825ce3;
L_00825cdc:; BB(0x00825cdc);
    /* 00825cdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00825cde: call 0x760780 */ r_esp -= 4; W32(r_esp, 0x825ce3u); f_00760780();
L_00825ce3:; BB(0x00825ce3);
    /* 00825ce3: mov dword ptr [0xaca8f8], 0 */ W32((u32)(0xaca8f8u), 0x0u);
    /* 00825ced: mov byte ptr [0xaca900], 4 */ W8((u32)(0xaca900u), 0x4u);
    /* 00825cf4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825cf7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00825cf8: ret  */ FN_RET(0x00825bf0); r_esp += 4; return;
L_00825cf9:; BB(0x00825cf9);
    /* 00825cf9: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825cfe: jne 0x825d75 */ if (!fZ) goto L_00825d75;
L_00825d00:; BB(0x00825d00);
    /* 00825d00: mov dword ptr [0xaca8f8], 0 */ W32((u32)(0xaca8f8u), 0x0u);
    /* 00825d0a: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825d0f: jne 0x825d16 */ if (!fZ) goto L_00825d16;
L_00825d11:; BB(0x00825d11);
    /* 00825d11: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825d14: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00825d15: ret  */ FN_RET(0x00825bf0); r_esp += 4; return;
L_00825d16:; BB(0x00825d16);
    /* 00825d16: movsx edi, byte ptr [0xaca904] */ r_edi = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00825d1d: mov byte ptr [esp + 0x10], 0xa6 */ W8((u32)(r_esp+0x10u), 0xa6u);
    /* 00825d22: mov eax, 4 */ r_eax = 0x4u;
    /* 00825d27: mov byte ptr [esp + 0x11], al */ W8((u32)(r_esp+0x11u), (u8)r_eax);
    /* 00825d2b: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 00825d2f: mov byte ptr [esp + 0x15], al */ W8((u32)(r_esp+0x15u), (u8)r_eax);
    /* 00825d33: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00825d37: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x825d3cu); f_00827364();
    /* 00825d3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00825d3d: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00825d41: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x825d46u); f_00800464();
    /* 00825d46: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00825d4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825d4e: je 0x825d57 */ if (fZ) goto L_00825d57;
L_00825d50:; BB(0x00825d50);
    /* 00825d50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00825d52: call 0x760780 */ r_esp -= 4; W32(r_esp, 0x825d57u); f_00760780();
L_00825d57:; BB(0x00825d57);
    /* 00825d57: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00825d5e: mov byte ptr [0xaca900], 4 */ W8((u32)(0xaca900u), 0x4u);
    /* 00825d65: and eax, 0xfeff */ {  u32 a = r_eax; u32 b = 0xfeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00825d6a: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 00825d70: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825d73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00825d74: ret  */ FN_RET(0x00825bf0); r_esp += 4; return;
L_00825d75:; BB(0x00825d75);
    /* 00825d75: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825d7a: jne 0x825d8f */ if (!fZ) goto L_00825d8f;
L_00825d7c:; BB(0x00825d7c);
    /* 00825d7c: mov edx, dword ptr [0xaca8f8] */ r_edx = R32((u32)(0xaca8f8u));
    /* 00825d82: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 00825d85: mov dword ptr [0xaca8f8], eax */ W32((u32)(0xaca8f8u), r_eax);
    /* 00825d8a: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00825d8d: jge 0x825d94 */ if ((fS==fO)) goto L_00825d94;
L_00825d8f:; BB(0x00825d8f);
    /* 00825d8f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825d92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00825d93: ret  */ FN_RET(0x00825bf0); r_esp += 4; return;
L_00825d94:; BB(0x00825d94);
    /* 00825d94: movsx edi, byte ptr [0xaca904] */ r_edi = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00825d9b: mov byte ptr [esp], 0xa6 */ W8((u32)(r_esp), 0xa6u);
    /* 00825d9f: mov eax, 4 */ r_eax = 0x4u;
    /* 00825da4: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 00825da8: mov byte ptr [esp + 5], 0 */ W8((u32)(r_esp+0x5u), 0x0u);
    /* 00825dad: mov byte ptr [esp + 4], al */ W8((u32)(r_esp+0x4u), (u8)r_eax);
    /* 00825db1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00825db4: call 0x827364 */ r_esp -= 4; W32(r_esp, 0x825db9u); f_00827364();
    /* 00825db9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00825dba: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00825dbe: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x825dc3u); f_00800464();
    /* 00825dc3: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00825dca: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00825dd0: or eax, 0xffff0100 */ {  u32 a = r_eax; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00825dd5: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 00825ddb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825ddd: je 0x825de6 */ if (fZ) goto L_00825de6;
L_00825ddf:; BB(0x00825ddf);
    /* 00825ddf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00825de1: call 0x760780 */ r_esp -= 4; W32(r_esp, 0x825de6u); f_00760780();
L_00825de6:; BB(0x00825de6);
    /* 00825de6: mov dword ptr [0xaca8f8], 0 */ W32((u32)(0xaca8f8u), 0x0u);
    /* 00825df0: mov byte ptr [0xaca900], 5 */ W8((u32)(0xaca900u), 0x5u);
    /* 00825df7: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825dfa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00825dfb: ret  */ FN_RET(0x00825bf0); r_esp += 4; return;
}

void f_00825dfc(void) /* sub_825DFC */
{
    FN_ENTER(0x00825dfc);
    /* 00825dfc: sub esp, 0x2ac */ {  u32 a = r_esp; u32 b = 0x2acu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00825e02: movsx eax, byte ptr [0xaca900] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 00825e09: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00825e0c: ja 0x825fd9 */ if ((!fC&&!fZ)) goto L_00825fd9;
L_00825e12:; BB(0x00825e12);
    /* 00825e12: mov eax, dword ptr [eax*4 + 0x989e14] */ r_eax = R32((u32)(r_eax*4+0x989e14u));
    /* 00825e19: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00825fd9:; BB(0x00825fd9);
    /* 00825fd9: add esp, 0x2ac */ {  u32 a = r_esp; u32 b = 0x2acu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825fdf: ret  */ FN_RET(0x00825dfc); r_esp += 4; return;
}

void f_00825e1b(void)
{
    FN_ENTER(0x00825e1b);
    /* 00825e1b: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00825e22: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825e27: je 0x825e34 */ if (fZ) goto L_00825e34;
L_00825e29:; BB(0x00825e29);
    /* 00825e29: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825e2e: jne 0x825fd9 */ if (!fZ) goto L_00825fd9;
L_00825e34:; BB(0x00825e34);
    /* 00825e34: call 0x827064 */ r_esp -= 4; W32(r_esp, 0x825e39u); f_00827064();
    /* 00825e39: jmp 0x825fd9 */ goto L_00825fd9;
L_00825fd9:; BB(0x00825fd9);
    /* 00825fd9: add esp, 0x2ac */ {  u32 a = r_esp; u32 b = 0x2acu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825fdf: ret  */ FN_RET(0x00825e1b); r_esp += 4; return;
}

void f_00825e3e(void)
{
    FN_ENTER(0x00825e3e);
    /* 00825e3e: movsx edx, byte ptr [0xaca904] */ r_edx = (u32)(i32)(i8)R8((u32)(0xaca904u));
    /* 00825e45: mov word ptr [esp + 0x14], dx */ W16((u32)(r_esp+0x14u), (u16)r_edx);
    /* 00825e4a: mov eax, 8 */ r_eax = 0x8u;
    /* 00825e4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00825e51: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00825e56: mov byte ptr [esp + 0xe], cl */ W8((u32)(r_esp+0xeu), (u8)r_ecx);
    /* 00825e5a: mov byte ptr [esp + 0xf], cl */ W8((u32)(r_esp+0xfu), (u8)r_ecx);
    /* 00825e5e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00825e62: mov word ptr [esp + 0x16], cx */ W16((u32)(r_esp+0x16u), (u16)r_ecx);
    /* 00825e67: mov eax, 0xaca500 */ r_eax = 0xaca500u;
    /* 00825e6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825e6e: je 0x825f85 */ if (fZ) goto L_00825f85;
L_00825e74:; BB(0x00825e74);
    /* 00825e74: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00825e78: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00825e7c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00825e7f: mov edx, 0xaca500 */ r_edx = 0xaca500u;
    /* 00825e84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00825e86: mov ebx, eax */ r_ebx = r_eax;
    /* 00825e88: mov esi, edx */ r_esi = r_edx;
L_00825e8a:; BB(0x00825e8a);
    /* 00825e8a: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00825e8c: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00825e8f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00825e91: jle 0x825f6b */ if ((fZ||fS!=fO)) goto L_00825f6b;
L_00825e97:; BB(0x00825e97);
    /* 00825e97: cmp ecx, 0xffffff01 */ {  u32 a = r_ecx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825e9d: jne 0x825ef5 */ if (!fZ) goto L_00825ef5;
L_00825e9f:; BB(0x00825e9f);
    /* 00825e9f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00825ea0: lea ecx, [esp + 0x29c] */ r_ecx = (u32)(r_esp+0x29cu);
    /* 00825ea7: call 0x5d2998 */ r_esp -= 4; W32(r_esp, 0x825eacu); f_005d2998();
    /* 00825eac: movzx edi, word ptr [esp + 0x16] */ r_edi = (u32)R16((u32)(r_esp+0x16u));
    /* 00825eb1: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 00825eb4: mov word ptr [esp + 0x16], cx */ W16((u32)(r_esp+0x16u), (u16)r_ecx);
    /* 00825eb9: mov ecx, dword ptr [esp + 0x298] */ r_ecx = R32((u32)(r_esp+0x298u));
    /* 00825ec0: lea eax, [edi + edi*4] */ r_eax = (u32)(r_edi+r_edi*4);
    /* 00825ec3: mov dword ptr [esp + eax*4 + 0x18], ecx */ W32((u32)(r_esp+r_eax*4+0x18u), r_ecx);
    /* 00825ec7: mov ecx, dword ptr [esp + 0x29c] */ r_ecx = R32((u32)(r_esp+0x29cu));
    /* 00825ece: mov dword ptr [esp + eax*4 + 0x1c], ecx */ W32((u32)(r_esp+r_eax*4+0x1cu), r_ecx);
    /* 00825ed2: mov ecx, dword ptr [esp + 0x2a0] */ r_ecx = R32((u32)(r_esp+0x2a0u));
    /* 00825ed9: mov dword ptr [esp + eax*4 + 0x20], ecx */ W32((u32)(r_esp+r_eax*4+0x20u), r_ecx);
    /* 00825edd: mov ecx, dword ptr [esp + 0x2a4] */ r_ecx = R32((u32)(r_esp+0x2a4u));
    /* 00825ee4: mov dword ptr [esp + eax*4 + 0x24], ecx */ W32((u32)(r_esp+r_eax*4+0x24u), r_ecx);
    /* 00825ee8: mov ecx, dword ptr [esp + 0x2a8] */ r_ecx = R32((u32)(r_esp+0x2a8u));
    /* 00825eef: mov dword ptr [esp + eax*4 + 0x28], ecx */ W32((u32)(r_esp+r_eax*4+0x28u), r_ecx);
    /* 00825ef3: jmp 0x825f6b */ goto L_00825f6b;
L_00825ef5:; BB(0x00825ef5);
    /* 00825ef5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00825ef6: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x825efbu); f_005c5528();
    /* 00825efb: mov ecx, eax */ r_ecx = r_eax;
    /* 00825efd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00825f00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825f02: je 0x825f6b */ if (fZ) goto L_00825f6b;
L_00825f04:; BB(0x00825f04);
    /* 00825f04: lea eax, [esp + 0x298] */ r_eax = (u32)(r_esp+0x298u);
    /* 00825f0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00825f0c: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x825f11u); f_005c425c();
    /* 00825f11: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00825f17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00825f18: lea ecx, [esp + 0x29c] */ r_ecx = (u32)(r_esp+0x29cu);
    /* 00825f1f: call 0x5d2484 */ r_esp -= 4; W32(r_esp, 0x825f24u); f_005d2484();
    /* 00825f24: movzx edi, word ptr [esp + 0x16] */ r_edi = (u32)R16((u32)(r_esp+0x16u));
    /* 00825f29: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 00825f2c: mov word ptr [esp + 0x16], cx */ W16((u32)(r_esp+0x16u), (u16)r_ecx);
    /* 00825f31: mov ecx, dword ptr [esp + 0x298] */ r_ecx = R32((u32)(r_esp+0x298u));
    /* 00825f38: lea eax, [edi + edi*4] */ r_eax = (u32)(r_edi+r_edi*4);
    /* 00825f3b: mov dword ptr [esp + eax*4 + 0x18], ecx */ W32((u32)(r_esp+r_eax*4+0x18u), r_ecx);
    /* 00825f3f: mov ecx, dword ptr [esp + 0x29c] */ r_ecx = R32((u32)(r_esp+0x29cu));
    /* 00825f46: mov dword ptr [esp + eax*4 + 0x1c], ecx */ W32((u32)(r_esp+r_eax*4+0x1cu), r_ecx);
    /* 00825f4a: mov ecx, dword ptr [esp + 0x2a0] */ r_ecx = R32((u32)(r_esp+0x2a0u));
    /* 00825f51: mov dword ptr [esp + eax*4 + 0x20], ecx */ W32((u32)(r_esp+r_eax*4+0x20u), r_ecx);
    /* 00825f55: mov ecx, dword ptr [esp + 0x2a4] */ r_ecx = R32((u32)(r_esp+0x2a4u));
    /* 00825f5c: mov dword ptr [esp + eax*4 + 0x24], ecx */ W32((u32)(r_esp+r_eax*4+0x24u), r_ecx);
    /* 00825f60: mov ecx, dword ptr [esp + 0x2a8] */ r_ecx = R32((u32)(r_esp+0x2a8u));
    /* 00825f67: mov dword ptr [esp + eax*4 + 0x28], ecx */ W32((u32)(r_esp+r_eax*4+0x28u), r_ecx);
L_00825f6b:; BB(0x00825f6b);
    /* 00825f6b: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00825f6e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00825f71: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00825f74: jb 0x825e8a */ if (fC) goto L_00825e8a;
L_00825f7a:; BB(0x00825f7a);
    /* 00825f7a: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00825f7e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00825f82: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00825f85:; BB(0x00825f85);
    /* 00825f85: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00825f8b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00825f8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00825f90: call 0x7e54bc */ r_esp -= 4; W32(r_esp, 0x825f95u); f_007e54bc();
    /* 00825f95: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00825f9c: mov ecx, dword ptr [0xaca8f0] */ r_ecx = R32((u32)(0xaca8f0u));
    /* 00825fa2: or eax, 0xffff0400 */ {  u32 a = r_eax; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00825fa7: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 00825fad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825faf: je 0x825fb6 */ if (fZ) goto L_00825fb6;
L_00825fb1:; BB(0x00825fb1);
    /* 00825fb1: call 0x760798 */ r_esp -= 4; W32(r_esp, 0x825fb6u); f_00760798();
L_00825fb6:; BB(0x00825fb6);
    /* 00825fb6: mov byte ptr [0xaca900], 7 */ W8((u32)(0xaca900u), 0x7u);
    /* 00825fbd: jmp 0x825fd9 */ goto L_00825fd9;
L_00825fd9:; BB(0x00825fd9);
    /* 00825fd9: add esp, 0x2ac */ {  u32 a = r_esp; u32 b = 0x2acu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825fdf: ret  */ FN_RET(0x00825e3e); r_esp += 4; return;
}

void f_00825fbf(void)
{
    FN_ENTER(0x00825fbf);
    /* 00825fbf: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00825fc6: and eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00825fcb: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00825fd0: jne 0x825fd9 */ if (!fZ) goto L_00825fd9;
L_00825fd2:; BB(0x00825fd2);
    /* 00825fd2: mov byte ptr [0xaca900], 6 */ W8((u32)(0xaca900u), 0x6u);
L_00825fd9:; BB(0x00825fd9);
    /* 00825fd9: add esp, 0x2ac */ {  u32 a = r_esp; u32 b = 0x2acu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825fdf: ret  */ FN_RET(0x00825fbf); r_esp += 4; return;
}

void f_00825fd9(void)
{
    FN_ENTER(0x00825fd9);
    /* 00825fd9: add esp, 0x2ac */ {  u32 a = r_esp; u32 b = 0x2acu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00825fdf: ret  */ FN_RET(0x00825fd9); r_esp += 4; return;
}

void f_00825fe0(void) /* sub_825FE0 */
{
    FN_ENTER(0x00825fe0);
    /* 00825fe0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00825fe4: mov eax, 1 */ r_eax = 0x1u;
    /* 00825fe9: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00825feb: or word ptr [0xaca908], ax */ { u32 ad = (u32)(0xaca908u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a | b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00825ff2: ret  */ FN_RET(0x00825fe0); r_esp += 4; return;
}

void f_00825ff4(void) /* sub_825FF4 */
{
    FN_ENTER(0x00825ff4);
    /* 00825ff4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00825ff8: mov eax, 1 */ r_eax = 0x1u;
    /* 00825ffd: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00825fff: not eax */ r_eax = ~r_eax;
    /* 00826001: and word ptr [0xaca908], ax */ { u32 ad = (u32)(0xaca908u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00826008: ret  */ FN_RET(0x00825ff4); r_esp += 4; return;
}

