#include "protos.h"

void f_007a81e4(void) /* sub_7A81E4 */
{
    FN_ENTER(0x007a81e4);
    /* 007a81e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a81e5: mov edi, ecx */ r_edi = r_ecx;
    /* 007a81e7: mov ecx, edi */ r_ecx = r_edi;
    /* 007a81e9: call 0x7a820c */ r_esp -= 4; W32(r_esp, 0x7a81eeu); f_007a820c();
    /* 007a81ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a81f0: je 0x7a8209 */ if (fZ) goto L_007a8209;
L_007a81f2:; BB(0x007a81f2);
    /* 007a81f2: mov edx, dword ptr [edi + 0x20b0] */ r_edx = R32((u32)(r_edi+0x20b0u));
    /* 007a81f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a81fa: je 0x7a8209 */ if (fZ) goto L_007a8209;
L_007a81fc:; BB(0x007a81fc);
    /* 007a81fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a81fd: push dword ptr [0xaab3fc] */ { u32 v = R32((u32)(0xaab3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8203: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8204: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7a8206u); call_ind(t); }
    /* 007a8206: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007a8209:; BB(0x007a8209);
    /* 007a8209: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a820a: ret  */ FN_RET(0x007a81e4); r_esp += 4; return;
}

void f_007a820c(void) /* sub_7A820C */
{
    FN_ENTER(0x007a820c);
    /* 007a820c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a820d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a820e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a820f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8210: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a8213: mov edi, ecx */ r_edi = r_ecx;
    /* 007a8215: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a821b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007a821d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a821f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8221: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a8224: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8226: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a822c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a822e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8230: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a8237: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7a823cu); f_007c09fc();
    /* 007a823c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a823e: je 0x7a8247 */ if (fZ) goto L_007a8247;
L_007a8240:; BB(0x007a8240);
    /* 007a8240: add dword ptr [0xaab3fc], -1 */ { u32 ad = (u32)(0xaab3fcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_007a8247:; BB(0x007a8247);
    /* 007a8247: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8249: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a824b: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a8251: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a8254: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a825a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a825c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a825e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8260: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a8267: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7a826cu); f_007c09fc();
    /* 007a826c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a826e: je 0x7a8277 */ if (fZ) goto L_007a8277;
L_007a8270:; BB(0x007a8270);
    /* 007a8270: add dword ptr [0xaab3fc], 1 */ { u32 ad = (u32)(0xaab3fcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_007a8277:; BB(0x007a8277);
    /* 007a8277: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a827d: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a8283: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a8286: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8288: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a828a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a828c: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a8293: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x7a8298u); f_007c1100();
    /* 007a8298: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a829a: je 0x7a8324 */ if (fZ) goto L_007a8324;
L_007a82a0:; BB(0x007a82a0);
    /* 007a82a0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a82a2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a82a4: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a82aa: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a82ad: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a82b3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a82b5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a82b7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a82b9: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a82c0: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7a82c5u); f_007c09fc();
    /* 007a82c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a82c7: je 0x7a82e2 */ if (fZ) goto L_007a82e2;
L_007a82c9:; BB(0x007a82c9);
    /* 007a82c9: mov ebx, dword ptr [0xaab3f8] */ r_ebx = R32((u32)(0xaab3f8u));
    /* 007a82cf: mov eax, dword ptr [0xaab3fc] */ r_eax = R32((u32)(0xaab3fcu));
    /* 007a82d4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a82d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a82d8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007a82db: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a82dd: add dword ptr [edx + ebx + 4], 1 */ { u32 ad = (u32)(r_edx+r_ebx+0x4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_007a82e2:; BB(0x007a82e2);
    /* 007a82e2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a82e4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a82e6: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a82ec: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a82ef: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a82f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a82f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a82f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a82fb: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a8302: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7a8307u); f_007c09fc();
    /* 007a8307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8309: je 0x7a8324 */ if (fZ) goto L_007a8324;
L_007a830b:; BB(0x007a830b);
    /* 007a830b: mov ebx, dword ptr [0xaab3f8] */ r_ebx = R32((u32)(0xaab3f8u));
    /* 007a8311: mov eax, dword ptr [0xaab3fc] */ r_eax = R32((u32)(0xaab3fcu));
    /* 007a8316: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a8318: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a831a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007a831d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a831f: add dword ptr [edx + ebx + 4], -1 */ { u32 ad = (u32)(r_edx+r_ebx+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_007a8324:; BB(0x007a8324);
    /* 007a8324: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a832a: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a8330: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a8333: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8335: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8337: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8339: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a8340: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x7a8345u); f_007c1100();
    /* 007a8345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8347: jne 0x7a835a */ if (!fZ) goto L_007a835a;
L_007a8349:; BB(0x007a8349);
    /* 007a8349: mov ebx, dword ptr [0xaab3f8] */ r_ebx = R32((u32)(0xaab3f8u));
    /* 007a834f: mov edx, dword ptr [0xaab3fc] */ r_edx = R32((u32)(0xaab3fcu));
    /* 007a8355: jmp 0x7a83e0 */ goto L_007a83e0;
L_007a835a:; BB(0x007a835a);
    /* 007a835a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a835c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a835e: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a8364: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a8367: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a836d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a836f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8371: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8373: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a837a: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7a837fu); f_007c09fc();
    /* 007a837f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8381: je 0x7a839c */ if (fZ) goto L_007a839c;
L_007a8383:; BB(0x007a8383);
    /* 007a8383: mov ebx, dword ptr [0xaab3f8] */ r_ebx = R32((u32)(0xaab3f8u));
    /* 007a8389: mov eax, dword ptr [0xaab3fc] */ r_eax = R32((u32)(0xaab3fcu));
    /* 007a838e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a8390: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a8392: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007a8395: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8397: add dword ptr [edx + ebx + 8], 1 */ { u32 ad = (u32)(r_edx+r_ebx+0x8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_007a839c:; BB(0x007a839c);
    /* 007a839c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a839e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a83a0: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a83a6: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a83a9: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a83af: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a83b1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a83b3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a83b5: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a83bc: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7a83c1u); f_007c09fc();
    /* 007a83c1: mov ebx, dword ptr [0xaab3f8] */ r_ebx = R32((u32)(0xaab3f8u));
    /* 007a83c7: mov edx, dword ptr [0xaab3fc] */ r_edx = R32((u32)(0xaab3fcu));
    /* 007a83cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a83cf: je 0x7a83e0 */ if (fZ) goto L_007a83e0;
L_007a83d1:; BB(0x007a83d1);
    /* 007a83d1: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007a83d4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a83d6: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 007a83d9: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a83db: add dword ptr [ebp + ebx + 8], -1 */ { u32 ad = (u32)(r_ebp+r_ebx+0x8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_007a83e0:; BB(0x007a83e0);
    /* 007a83e0: mov dword ptr [edi + 0x20b4], 0 */ W32((u32)(r_edi+0x20b4u), 0x0u);
    /* 007a83ea: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 007a83ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a83ee: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a83f0: jl 0x7a8401 */ if ((fS!=fO)) goto L_007a8401;
L_007a83f2:; BB(0x007a83f2);
    /* 007a83f2: mov dword ptr [edi + 0x20b4], 1 */ W32((u32)(r_edi+0x20b4u), 0x1u);
    /* 007a83fc: mov eax, 1 */ r_eax = 0x1u;
L_007a8401:; BB(0x007a8401);
    /* 007a8401: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 007a8404: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8406: jl 0x7a8411 */ if ((fS!=fO)) goto L_007a8411;
L_007a8408:; BB(0x007a8408);
    /* 007a8408: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a840b: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8411:; BB(0x007a8411);
    /* 007a8411: mov ebp, dword ptr [ebx + 0x18] */ r_ebp = R32((u32)(r_ebx+0x18u));
    /* 007a8414: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8416: jl 0x7a8421 */ if ((fS!=fO)) goto L_007a8421;
L_007a8418:; BB(0x007a8418);
    /* 007a8418: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a841b: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8421:; BB(0x007a8421);
    /* 007a8421: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 007a8424: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8426: jl 0x7a8431 */ if ((fS!=fO)) goto L_007a8431;
L_007a8428:; BB(0x007a8428);
    /* 007a8428: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a842b: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8431:; BB(0x007a8431);
    /* 007a8431: mov ebp, dword ptr [ebx + 0x30] */ r_ebp = R32((u32)(r_ebx+0x30u));
    /* 007a8434: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8436: jl 0x7a8441 */ if ((fS!=fO)) goto L_007a8441;
L_007a8438:; BB(0x007a8438);
    /* 007a8438: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a843b: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8441:; BB(0x007a8441);
    /* 007a8441: mov ebp, dword ptr [ebx + 0x3c] */ r_ebp = R32((u32)(r_ebx+0x3cu));
    /* 007a8444: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8446: jl 0x7a8451 */ if ((fS!=fO)) goto L_007a8451;
L_007a8448:; BB(0x007a8448);
    /* 007a8448: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a844b: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8451:; BB(0x007a8451);
    /* 007a8451: mov ebp, dword ptr [ebx + 0x48] */ r_ebp = R32((u32)(r_ebx+0x48u));
    /* 007a8454: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8456: jl 0x7a8461 */ if ((fS!=fO)) goto L_007a8461;
L_007a8458:; BB(0x007a8458);
    /* 007a8458: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a845b: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8461:; BB(0x007a8461);
    /* 007a8461: mov ebp, dword ptr [ebx + 0x54] */ r_ebp = R32((u32)(r_ebx+0x54u));
    /* 007a8464: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8466: jl 0x7a8471 */ if ((fS!=fO)) goto L_007a8471;
L_007a8468:; BB(0x007a8468);
    /* 007a8468: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a846b: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8471:; BB(0x007a8471);
    /* 007a8471: mov ebp, dword ptr [ebx + 0x60] */ r_ebp = R32((u32)(r_ebx+0x60u));
    /* 007a8474: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8476: jl 0x7a8481 */ if ((fS!=fO)) goto L_007a8481;
L_007a8478:; BB(0x007a8478);
    /* 007a8478: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a847b: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8481:; BB(0x007a8481);
    /* 007a8481: mov ebp, dword ptr [ebx + 0x6c] */ r_ebp = R32((u32)(r_ebx+0x6cu));
    /* 007a8484: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8486: jl 0x7a8491 */ if ((fS!=fO)) goto L_007a8491;
L_007a8488:; BB(0x007a8488);
    /* 007a8488: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a848b: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8491:; BB(0x007a8491);
    /* 007a8491: mov ebp, dword ptr [ebx + 0x78] */ r_ebp = R32((u32)(r_ebx+0x78u));
    /* 007a8494: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8496: jl 0x7a84a1 */ if ((fS!=fO)) goto L_007a84a1;
L_007a8498:; BB(0x007a8498);
    /* 007a8498: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a849b: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a84a1:; BB(0x007a84a1);
    /* 007a84a1: mov ebp, dword ptr [ebx + 0x84] */ r_ebp = R32((u32)(r_ebx+0x84u));
    /* 007a84a7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a84a9: jl 0x7a84b4 */ if ((fS!=fO)) goto L_007a84b4;
L_007a84ab:; BB(0x007a84ab);
    /* 007a84ab: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a84ae: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a84b4:; BB(0x007a84b4);
    /* 007a84b4: mov ebp, dword ptr [ebx + 0x90] */ r_ebp = R32((u32)(r_ebx+0x90u));
    /* 007a84ba: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a84bc: jl 0x7a84c7 */ if ((fS!=fO)) goto L_007a84c7;
L_007a84be:; BB(0x007a84be);
    /* 007a84be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a84c1: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a84c7:; BB(0x007a84c7);
    /* 007a84c7: mov ebp, dword ptr [ebx + 0x9c] */ r_ebp = R32((u32)(r_ebx+0x9cu));
    /* 007a84cd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a84cf: jl 0x7a84da */ if ((fS!=fO)) goto L_007a84da;
L_007a84d1:; BB(0x007a84d1);
    /* 007a84d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a84d4: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a84da:; BB(0x007a84da);
    /* 007a84da: mov ebp, dword ptr [ebx + 0xa8] */ r_ebp = R32((u32)(r_ebx+0xa8u));
    /* 007a84e0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a84e2: jl 0x7a84ed */ if ((fS!=fO)) goto L_007a84ed;
L_007a84e4:; BB(0x007a84e4);
    /* 007a84e4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a84e7: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a84ed:; BB(0x007a84ed);
    /* 007a84ed: mov ebp, dword ptr [ebx + 0xb4] */ r_ebp = R32((u32)(r_ebx+0xb4u));
    /* 007a84f3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a84f5: jl 0x7a8500 */ if ((fS!=fO)) goto L_007a8500;
L_007a84f7:; BB(0x007a84f7);
    /* 007a84f7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a84fa: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8500:; BB(0x007a8500);
    /* 007a8500: mov ebp, dword ptr [ebx + 0xc0] */ r_ebp = R32((u32)(r_ebx+0xc0u));
    /* 007a8506: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a8508: jl 0x7a8513 */ if ((fS!=fO)) goto L_007a8513;
L_007a850a:; BB(0x007a850a);
    /* 007a850a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a850d: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8513:; BB(0x007a8513);
    /* 007a8513: mov ebp, dword ptr [ebx + 0xcc] */ r_ebp = R32((u32)(r_ebx+0xccu));
    /* 007a8519: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a851b: jl 0x7a8526 */ if ((fS!=fO)) goto L_007a8526;
L_007a851d:; BB(0x007a851d);
    /* 007a851d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a8520: mov dword ptr [edi + 0x20b4], eax */ W32((u32)(r_edi+0x20b4u), r_eax);
L_007a8526:; BB(0x007a8526);
    /* 007a8526: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a8529: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a852b: jge 0x7a8534 */ if ((fS==fO)) goto L_007a8534;
L_007a852d:; BB(0x007a852d);
    /* 007a852d: mov dword ptr [0xaab3fc], eax */ W32((u32)(0xaab3fcu), r_eax);
    /* 007a8532: mov edx, eax */ r_edx = r_eax;
L_007a8534:; BB(0x007a8534);
    /* 007a8534: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a8536: jle 0x7a8544 */ if ((fZ||fS!=fO)) goto L_007a8544;
L_007a8538:; BB(0x007a8538);
    /* 007a8538: mov dword ptr [0xaab3fc], 0 */ W32((u32)(0xaab3fcu), 0x0u);
    /* 007a8542: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007a8544:; BB(0x007a8544);
    /* 007a8544: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8546: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8548: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007a854b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a854d: push dword ptr [eax + ebx] */ { u32 v = R32((u32)(r_eax+r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8550: call 0x80c280 */ r_esp -= 4; W32(r_esp, 0x7a8555u); f_0080c280();
    /* 007a8555: mov ebx, eax */ r_ebx = r_eax;
    /* 007a8557: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a855a: mov eax, dword ptr [0xaab3f8] */ r_eax = R32((u32)(0xaab3f8u));
    /* 007a855f: mov edx, dword ptr [0xaab3fc] */ r_edx = R32((u32)(0xaab3fcu));
    /* 007a8565: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8567: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8569: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 007a856c: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a856e: mov edx, dword ptr [ebp + eax + 4] */ r_edx = R32((u32)(r_ebp+r_eax+0x4u));
    /* 007a8572: lea ecx, [ebx - 1] */ r_ecx = (u32)(r_ebx+0xffffffffu);
    /* 007a8575: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a8577: jl 0x7a857b */ if ((fS!=fO)) goto L_007a857b;
L_007a8579:; BB(0x007a8579);
    /* 007a8579: mov edx, ecx */ r_edx = r_ecx;
L_007a857b:; BB(0x007a857b);
    /* 007a857b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a857d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a857f: jg 0x7a8583 */ if ((!fZ&&fS==fO)) goto L_007a8583;
L_007a8581:; BB(0x007a8581);
    /* 007a8581: mov edx, ecx */ r_edx = r_ecx;
L_007a8583:; BB(0x007a8583);
    /* 007a8583: mov ecx, dword ptr [ebp + eax + 8] */ r_ecx = R32((u32)(r_ebp+r_eax+0x8u));
    /* 007a8587: mov dword ptr [ebp + eax + 4], edx */ W32((u32)(r_ebp+r_eax+0x4u), r_edx);
    /* 007a858b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a858d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a858f: jg 0x7a8593 */ if ((!fZ&&fS==fO)) goto L_007a8593;
L_007a8591:; BB(0x007a8591);
    /* 007a8591: mov ecx, edx */ r_ecx = r_edx;
L_007a8593:; BB(0x007a8593);
    /* 007a8593: mov dword ptr [ebp + eax + 8], ecx */ W32((u32)(r_ebp+r_eax+0x8u), r_ecx);
    /* 007a8597: mov ecx, edi */ r_ecx = r_edi;
    /* 007a8599: call 0x815a84 */ r_esp -= 4; W32(r_esp, 0x7a859eu); f_00815a84();
    /* 007a859e: mov ecx, dword ptr [0xaab3f8] */ r_ecx = R32((u32)(0xaab3f8u));
    /* 007a85a4: mov edx, dword ptr [0xaab3fc] */ r_edx = R32((u32)(0xaab3fcu));
    /* 007a85aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a85ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a85ae: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007a85b1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a85b3: mov ebp, dword ptr [eax + ecx + 4] */ r_ebp = R32((u32)(r_eax+r_ecx+0x4u));
    /* 007a85b7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a85b9: jle 0x7a866f */ if ((fZ||fS!=fO)) goto L_007a866f;
L_007a85bf:; BB(0x007a85bf);
    /* 007a85bf: push dword ptr [eax + ecx] */ { u32 v = R32((u32)(r_eax+r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 007a85c2: call 0x80bee8 */ r_esp -= 4; W32(r_esp, 0x7a85c7u); f_0080bee8();
    /* 007a85c7: mov ebx, eax */ r_ebx = r_eax;
    /* 007a85c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a85cc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a85ce: je 0x7a866f */ if (fZ) goto L_007a866f;
L_007a85d4:; BB(0x007a85d4);
    /* 007a85d4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007a85d7: push 0x97d360 */ { u32 v = 0x97d360u; r_esp -= 4; W32(r_esp, v); }
    /* 007a85dc: push dword ptr [ebx + ebp*8] */ { u32 v = R32((u32)(r_ebx+r_ebp*8)); r_esp -= 4; W32(r_esp, v); }
    /* 007a85df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a85e0: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x7a85e5u); f_0078e574();
    /* 007a85e5: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007a85e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a85ea: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x7a85efu); f_007087dc();
    /* 007a85ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a85f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a85f3: mov ecx, edi */ r_ecx = r_edi;
    /* 007a85f5: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x7a85fau); f_00815aa8();
    /* 007a85fa: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007a85fd: push 0x97d368 */ { u32 v = 0x97d368u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8602: push dword ptr [ebx + ebp*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_ebp*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8606: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8607: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x7a860cu); f_0078e574();
    /* 007a860c: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007a8610: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8611: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x7a8616u); f_007087dc();
    /* 007a8616: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a8619: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a861a: mov ecx, edi */ r_ecx = r_edi;
    /* 007a861c: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x7a8621u); f_00815aa8();
    /* 007a8621: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007a8624: push 0x97d370 */ { u32 v = 0x97d370u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8629: push dword ptr [ebx + ebp*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_ebp*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a862d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a862e: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x7a8633u); f_0078e574();
    /* 007a8633: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007a8637: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8638: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x7a863du); f_007087dc();
    /* 007a863d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a8640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a8641: mov ecx, edi */ r_ecx = r_edi;
    /* 007a8643: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x7a8648u); f_00815aa8();
    /* 007a8648: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007a864b: push 0x96f148 */ { u32 v = 0x96f148u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8650: push dword ptr [ebx + ebp*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_ebp*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8654: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8655: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x7a865au); f_0078e574();
    /* 007a865a: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007a865e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a865f: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x7a8664u); f_007087dc();
    /* 007a8664: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a8667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a8668: mov ecx, edi */ r_ecx = r_edi;
    /* 007a866a: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x7a866fu); f_00815aa8();
L_007a866f:; BB(0x007a866f);
    /* 007a866f: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8675: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a867b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a867e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8680: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8682: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8684: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a868b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a8690u); f_007c1160();
    /* 007a8690: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8692: je 0x7a8699 */ if (fZ) goto L_007a8699;
L_007a8694:; BB(0x007a8694);
    /* 007a8694: mov esi, 1 */ r_esi = 0x1u;
L_007a8699:; BB(0x007a8699);
    /* 007a8699: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a869f: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a86a5: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a86a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a86aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a86ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a86ae: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a86b5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a86bau); f_007c1160();
    /* 007a86ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a86bc: je 0x7a86c1 */ if (fZ) goto L_007a86c1;
L_007a86be:; BB(0x007a86be);
    /* 007a86be: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007a86c1:; BB(0x007a86c1);
    /* 007a86c1: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a86c7: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a86cd: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a86d0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a86d2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a86d4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a86d6: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a86dd: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a86e2u); f_007c1160();
    /* 007a86e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a86e4: je 0x7a86e9 */ if (fZ) goto L_007a86e9;
L_007a86e6:; BB(0x007a86e6);
    /* 007a86e6: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007a86e9:; BB(0x007a86e9);
    /* 007a86e9: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a86ef: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a86f5: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a86f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a86fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a86fc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a86fe: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a8705: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a870au); f_007c1160();
    /* 007a870a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a870c: je 0x7a8711 */ if (fZ) goto L_007a8711;
L_007a870e:; BB(0x007a870e);
    /* 007a870e: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007a8711:; BB(0x007a8711);
    /* 007a8711: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8717: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a871d: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a8720: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8722: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8724: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8726: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a872d: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x7a8732u); f_007c1100();
    /* 007a8732: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8734: jne 0x7a87ab */ if (!fZ) goto L_007a87ab;
L_007a8736:; BB(0x007a8736);
    /* 007a8736: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a873c: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a8742: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a8745: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8747: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8749: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a874b: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a8752: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x7a8757u); f_007c1100();
    /* 007a8757: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8759: jne 0x7a87ab */ if (!fZ) goto L_007a87ab;
L_007a875b:; BB(0x007a875b);
    /* 007a875b: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8761: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a8767: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a876a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a876c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a876e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8770: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a8777: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a877cu); f_007c1160();
    /* 007a877c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a877e: je 0x7a8783 */ if (fZ) goto L_007a8783;
L_007a8780:; BB(0x007a8780);
    /* 007a8780: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007a8783:; BB(0x007a8783);
    /* 007a8783: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8789: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a878f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a8792: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8794: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8796: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8798: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a879f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a87a4u); f_007c1160();
    /* 007a87a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a87a6: je 0x7a87ab */ if (fZ) goto L_007a87ab;
L_007a87a8:; BB(0x007a87a8);
    /* 007a87a8: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007a87ab:; BB(0x007a87ab);
    /* 007a87ab: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a87b1: mov eax, dword ptr [edi + 0x20ac] */ r_eax = R32((u32)(r_edi+0x20acu));
    /* 007a87b7: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007a87ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a87bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a87be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a87c0: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a87c7: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a87ccu); f_007c1160();
    /* 007a87cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a87ce: je 0x7a87d3 */ if (fZ) goto L_007a87d3;
L_007a87d0:; BB(0x007a87d0);
    /* 007a87d0: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_007a87d3:; BB(0x007a87d3);
    /* 007a87d3: mov eax, esi */ r_eax = r_esi;
    /* 007a87d5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a87d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a87d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a87da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a87db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a87dc: ret  */ FN_RET(0x007a820c); r_esp += 4; return;
}

void f_007a87e0(void) /* sub_7A87E0 */
{
    FN_ENTER(0x007a87e0);
    /* 007a87e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a87e1: mov ebp, esp */ r_ebp = r_esp;
    /* 007a87e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a87e5: push 0x8f5d06 */ { u32 v = 0x8f5d06u; r_esp -= 4; W32(r_esp, v); }
    /* 007a87ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a87f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a87f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a87f8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a87fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a87fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a8801: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a8804: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a8807: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 007a880a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a880d: je 0x7a890a */ if (fZ) goto L_007a890a;
L_007a8813:; BB(0x007a8813);
    /* 007a8813: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8816: je 0x7a88b8 */ if (fZ) goto L_007a88b8;
L_007a881c:; BB(0x007a881c);
    /* 007a881c: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a881f: je 0x7a889b */ if (fZ) goto L_007a889b;
L_007a8821:; BB(0x007a8821);
    /* 007a8821: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8824: je 0x7a8881 */ if (fZ) goto L_007a8881;
L_007a8826:; BB(0x007a8826);
    /* 007a8826: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a8829: je 0x7a8842 */ if (fZ) goto L_007a8842;
L_007a882b:; BB(0x007a882b);
    /* 007a882b: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a882e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a8831: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a8834: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a8837: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a883e: mov esp, ebp */ r_esp = r_ebp;
    /* 007a8840: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a8841: ret  */ FN_RET(0x007a87e0); r_esp += 4; return;
L_007a8842:; BB(0x007a8842);
    /* 007a8842: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 007a8847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8849: jne 0x7a8855 */ if (!fZ) goto L_007a8855;
L_007a884b:; BB(0x007a884b);
    /* 007a884b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a884d: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x7a8852u); f_0080c79c();
    /* 007a8852: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a8853: jmp 0x7a886c */ goto L_007a886c;
L_007a8855:; BB(0x007a8855);
    /* 007a8855: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8858: jne 0x7a8864 */ if (!fZ) goto L_007a8864;
L_007a885a:; BB(0x007a885a);
    /* 007a885a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007a885c: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x7a8861u); f_0080c79c();
    /* 007a8861: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a8862: jmp 0x7a886c */ goto L_007a886c;
L_007a8864:; BB(0x007a8864);
    /* 007a8864: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8866: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x7a886bu); f_0080c79c();
    /* 007a886b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a886c:; BB(0x007a886c);
    /* 007a886c: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8871: push dword ptr [0xaab3f8] */ { u32 v = R32((u32)(0xaab3f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8877: call 0x80c22c */ r_esp -= 4; W32(r_esp, 0x7a887cu); f_0080c22c();
    /* 007a887c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a887f: jmp 0x7a882b */ goto L_007a882b;
L_007a8881:; BB(0x007a8881);
    /* 007a8881: call 0x80bee0 */ r_esp -= 4; W32(r_esp, 0x7a8886u); f_0080bee0();
    /* 007a8886: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a888b: push dword ptr [0xaab3f8] */ { u32 v = R32((u32)(0xaab3f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8891: call 0x80c22c */ r_esp -= 4; W32(r_esp, 0x7a8896u); f_0080c22c();
    /* 007a8896: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8899: jmp 0x7a882b */ goto L_007a882b;
L_007a889b:; BB(0x007a889b);
    /* 007a889b: call 0x80bf68 */ r_esp -= 4; W32(r_esp, 0x7a88a0u); f_0080bf68();
    /* 007a88a0: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a88a5: push dword ptr [0xaab3f8] */ { u32 v = R32((u32)(0xaab3f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a88ab: call 0x80c22c */ r_esp -= 4; W32(r_esp, 0x7a88b0u); f_0080c22c();
    /* 007a88b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a88b3: jmp 0x7a882b */ goto L_007a882b;
L_007a88b8:; BB(0x007a88b8);
    /* 007a88b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007a88bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 007a88be: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 007a88c2: push 0x20b8 */ { u32 v = 0x20b8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a88c7: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a88cd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007a88d4: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 007a88d8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a88ddu); f_005caba4();
    /* 007a88dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a88de: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007a88e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a88e3: je 0x7a882b */ if (fZ) goto L_007a882b;
L_007a88e9:; BB(0x007a88e9);
    /* 007a88e9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007a88f0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007a88f7: mov ecx, eax */ r_ecx = r_eax;
    /* 007a88f9: call 0x77c610 */ r_esp -= 4; W32(r_esp, 0x7a88feu); f_0077c610();
    /* 007a88fe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007a8905: jmp 0x7a882b */ goto L_007a882b;
L_007a890a:; BB(0x007a890a);
    /* 007a890a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007a890d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 007a8910: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007a8913: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8915: mov ebx, dword ptr [edx + ecx*8 + 0xa160c4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0xa160c4u));
    /* 007a891c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a891e: je 0x7a882b */ if (fZ) goto L_007a882b;
L_007a8924:; BB(0x007a8924);
    /* 007a8924: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007a8927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a8928: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x7a892du); f_0080c2a4();
    /* 007a892d: mov ebx, eax */ r_ebx = r_eax;
    /* 007a892f: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8934: push dword ptr [0xaab3f8] */ { u32 v = R32((u32)(0xaab3f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a893a: call 0x80c20c */ r_esp -= 4; W32(r_esp, 0x7a893fu); f_0080c20c();
    /* 007a893f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007a8942: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007a8945: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 007a8948: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007a894b: movzx ecx, word ptr [edx + 8] */ r_ecx = (u32)R16((u32)(r_edx+0x8u));
    /* 007a894f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 007a8952: mov dword ptr [0x9ff9ac], eax */ W32((u32)(0x9ff9acu), r_eax);
    /* 007a8957: push 0x20b4 */ { u32 v = 0x20b4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a895c: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007a8962: mov word ptr [esi + 8], cx */ W16((u32)(r_esi+0x8u), (u16)r_ecx);
    /* 007a8966: mov dword ptr [0xac9d4c], 0xffffffff */ W32((u32)(0xac9d4cu), 0xffffffffu);
    /* 007a8970: lea edx, [edx + 1] */ r_edx = (u32)(r_edx+0x1u);
    /* 007a8973: mov dword ptr [0xac9d50], edi */ W32((u32)(0xac9d50u), r_edi);
    /* 007a8979: mov dword ptr [0xac9d54], edx */ W32((u32)(0xac9d54u), r_edx);
    /* 007a897f: mov dword ptr [0xac9d58], edx */ W32((u32)(0xac9d58u), r_edx);
    /* 007a8985: mov dword ptr [0xac9d5c], ebx */ W32((u32)(0xac9d5cu), r_ebx);
    /* 007a898b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007a898d: mov dword ptr [0xac9d60], ebx */ W32((u32)(0xac9d60u), r_ebx);
    /* 007a8993: mov dword ptr [0xac9d64], ebx */ W32((u32)(0xac9d64u), r_ebx);
    /* 007a8999: mov dword ptr [0xac9d68], ebx */ W32((u32)(0xac9d68u), r_ebx);
    /* 007a899f: mov dword ptr [0xac9d6c], ebx */ W32((u32)(0xac9d6cu), r_ebx);
    /* 007a89a5: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 007a89a8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a89adu); f_005caba4();
    /* 007a89ad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a89b0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007a89b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a89b5: je 0x7a882b */ if (fZ) goto L_007a882b;
L_007a89bb:; BB(0x007a89bb);
    /* 007a89bb: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007a89c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a89c9: mov ecx, eax */ r_ecx = r_eax;
    /* 007a89cb: call 0x77c87c */ r_esp -= 4; W32(r_esp, 0x7a89d0u); f_0077c87c();
    /* 007a89d0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007a89d7: jmp 0x7a882b */ goto L_007a882b;
}

void f_007a89dc(void) /* sub_7A89DC */
{
    FN_ENTER(0x007a89dc);
    /* 007a89dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a89dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a89de: mov edi, ecx */ r_edi = r_ecx;
    /* 007a89e0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007a89e4: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007a89e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a89e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a89eb: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 007a89ee: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 007a89f1: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 007a89f4: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x7a89f9u); f_00859c55();
    /* 007a89f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a89fa: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 007a89fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a89fe: je 0x7a8a23 */ if (fZ) goto L_007a8a23;
L_007a8a00:; BB(0x007a8a00);
    /* 007a8a00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8a01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8a03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a8a04: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7a8a09u); f_0086b688();
    /* 007a8a09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a8a0c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 007a8a0e: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 007a8a11: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007a8a13: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 007a8a15: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a8a17: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007a8a1a: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 007a8a1d: lea esi, [esi - 8] */ r_esi = (u32)(r_esi+0xfffffff8u);
    /* 007a8a20: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
L_007a8a23:; BB(0x007a8a23);
    /* 007a8a23: mov eax, edi */ r_eax = r_edi;
    /* 007a8a25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a8a26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a8a27: ret 8 */ FN_RET(0x007a89dc); r_esp += 12; return;
}

void f_007a8a38(void) /* sub_7A8A38 */
{
    FN_ENTER(0x007a8a38);
    /* 007a8a38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8a39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8a3a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007a8a3e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 007a8a41: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 007a8a43: lea ebx, [eax + edx + 7] */ r_ebx = (u32)(r_eax+r_edx+0x7u);
    /* 007a8a47: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a8a4a: not edx */ r_edx = ~r_edx;
    /* 007a8a4c: and ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007a8a4e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007a8a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8a52: je 0x7a8a63 */ if (fZ) goto L_007a8a63;
L_007a8a54:; BB(0x007a8a54);
    /* 007a8a54: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 007a8a57: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007a8a59: jae 0x7a8a6a */ if (!fC) goto L_007a8a6a;
L_007a8a5b:; BB(0x007a8a5b);
    /* 007a8a5b: mov ecx, edx */ r_ecx = r_edx;
    /* 007a8a5d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 007a8a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8a61: jne 0x7a8a54 */ if (!fZ) goto L_007a8a54;
L_007a8a63:; BB(0x007a8a63);
    /* 007a8a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a8a65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a8a66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a8a67: ret 4 */ FN_RET(0x007a8a38); r_esp += 8; return;
L_007a8a6a:; BB(0x007a8a6a);
    /* 007a8a6a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8a6c: jne 0x7a8a74 */ if (!fZ) goto L_007a8a74;
L_007a8a6e:; BB(0x007a8a6e);
    /* 007a8a6e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007a8a70: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007a8a72: jmp 0x7a8a88 */ goto L_007a8a88;
L_007a8a74:; BB(0x007a8a74);
    /* 007a8a74: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007a8a76: lea eax, [ebx + edx] */ r_eax = (u32)(r_ebx+r_edx);
    /* 007a8a79: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 007a8a7b: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 007a8a7e: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007a8a80: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 007a8a83: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 007a8a86: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_007a8a88:; BB(0x007a8a88);
    /* 007a8a88: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8a8b: mov eax, edx */ r_eax = r_edx;
    /* 007a8a8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a8a8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a8a8f: ret 4 */ FN_RET(0x007a8a38); r_esp += 8; return;
}

void f_007a8a94(void) /* sub_7A8A94 */
{
    FN_ENTER(0x007a8a94);
    /* 007a8a94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8a95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8a96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a8a97: mov edx, ecx */ r_edx = r_ecx;
    /* 007a8a99: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007a8a9d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 007a8aa0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 007a8aa2: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 007a8aa4: lea ecx, [eax + esi + 7] */ r_ecx = (u32)(r_eax+r_esi+0x7u);
    /* 007a8aa8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a8aab: not eax */ r_eax = ~r_eax;
    /* 007a8aad: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007a8aaf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8ab1: je 0x7a8ac3 */ if (fZ) goto L_007a8ac3;
L_007a8ab3:; BB(0x007a8ab3);
    /* 007a8ab3: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 007a8ab6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007a8ab8: jae 0x7a8add */ if (!fC) goto L_007a8add;
L_007a8aba:; BB(0x007a8aba);
    /* 007a8aba: mov edx, ebp */ r_edx = r_ebp;
    /* 007a8abc: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 007a8abf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8ac1: jne 0x7a8ab3 */ if (!fZ) goto L_007a8ab3;
L_007a8ac3:; BB(0x007a8ac3);
    /* 007a8ac3: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007a8ac5:; BB(0x007a8ac5);
    /* 007a8ac5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a8ac7: je 0x7a8ad5 */ if (fZ) goto L_007a8ad5;
L_007a8ac9:; BB(0x007a8ac9);
    /* 007a8ac9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8aca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a8acc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a8acd: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7a8ad2u); f_0086b688();
    /* 007a8ad2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007a8ad5:; BB(0x007a8ad5);
    /* 007a8ad5: mov eax, ebp */ r_eax = r_ebp;
    /* 007a8ad7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a8ad8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a8ad9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a8ada: ret 4 */ FN_RET(0x007a8a94); r_esp += 8; return;
L_007a8add:; BB(0x007a8add);
    /* 007a8add: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8adf: jne 0x7a8ae8 */ if (!fZ) goto L_007a8ae8;
L_007a8ae1:; BB(0x007a8ae1);
    /* 007a8ae1: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 007a8ae4: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007a8ae6: jmp 0x7a8afd */ goto L_007a8afd;
L_007a8ae8:; BB(0x007a8ae8);
    /* 007a8ae8: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 007a8aeb: lea eax, [ecx + ebp] */ r_eax = (u32)(r_ecx+r_ebp);
    /* 007a8aee: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 007a8af0: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 007a8af3: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007a8af5: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 007a8af8: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 007a8afb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_007a8afd:; BB(0x007a8afd);
    /* 007a8afd: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a8b00: jmp 0x7a8ac5 */ goto L_007a8ac5;
}

void f_007a8b04(void) /* sub_7A8B04 */
{
    FN_ENTER(0x007a8b04);
    /* 007a8b04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8b05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a8b06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8b07: mov eax, ecx */ r_eax = r_ecx;
    /* 007a8b09: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007a8b0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a8b0f: je 0x7a8b41 */ if (fZ) goto L_007a8b41;
L_007a8b11:; BB(0x007a8b11);
    /* 007a8b11: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007a8b13: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 007a8b15: lea edx, [ecx - 8] */ r_edx = (u32)(r_ecx+0xfffffff8u);
    /* 007a8b18: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007a8b1a: jae 0x7a8b25 */ if (!fC) goto L_007a8b25;
L_007a8b1c:; BB(0x007a8b1c);
    /* 007a8b1c: mov eax, ebp */ r_eax = r_ebp;
    /* 007a8b1e: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 007a8b21: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007a8b23: jb 0x7a8b1c */ if (fC) goto L_007a8b1c;
L_007a8b25:; BB(0x007a8b25);
    /* 007a8b25: mov esi, dword ptr [ecx - 4] */ r_esi = R32((u32)(r_ecx+0xfffffffcu));
    /* 007a8b28: lea ebx, [esi + ecx - 8] */ r_ebx = (u32)(r_esi+r_ecx+0xfffffff8u);
    /* 007a8b2c: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8b2e: je 0x7a8b57 */ if (fZ) goto L_007a8b57;
L_007a8b30:; BB(0x007a8b30);
    /* 007a8b30: mov ebx, ebp */ r_ebx = r_ebp;
    /* 007a8b32: mov dword ptr [ecx - 8], ebp */ W32((u32)(r_ecx+0xfffffff8u), r_ebp);
L_007a8b35:; BB(0x007a8b35);
    /* 007a8b35: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 007a8b38: lea esi, [eax + ebp] */ r_esi = (u32)(r_eax+r_ebp);
    /* 007a8b3b: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a8b3d: je 0x7a8b47 */ if (fZ) goto L_007a8b47;
L_007a8b3f:; BB(0x007a8b3f);
    /* 007a8b3f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_007a8b41:; BB(0x007a8b41);
    /* 007a8b41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a8b42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a8b43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a8b44: ret 4 */ FN_RET(0x007a8b04); r_esp += 8; return;
L_007a8b47:; BB(0x007a8b47);
    /* 007a8b47: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 007a8b49: mov edx, dword ptr [ecx - 4] */ r_edx = R32((u32)(r_ecx+0xfffffffcu));
    /* 007a8b4c: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8b4e: mov dword ptr [eax + 4], ebp */ W32((u32)(r_eax+0x4u), r_ebp);
    /* 007a8b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a8b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a8b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a8b54: ret 4 */ FN_RET(0x007a8b04); r_esp += 8; return;
L_007a8b57:; BB(0x007a8b57);
    /* 007a8b57: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 007a8b5a: mov dword ptr [ecx - 8], ebx */ W32((u32)(r_ecx+0xfffffff8u), r_ebx);
    /* 007a8b5d: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 007a8b60: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a8b62: mov dword ptr [ecx - 4], ebp */ W32((u32)(r_ecx+0xfffffffcu), r_ebp);
    /* 007a8b65: jmp 0x7a8b35 */ goto L_007a8b35;
}

void f_007a8b68(void) /* sub_7A8B68 */
{
    FN_ENTER(0x007a8b68);
    /* 007a8b68: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8b6c: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x7a8b71u); f_00859c55();
    /* 007a8b71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a8b72: ret  */ FN_RET(0x007a8b68); r_esp += 4; return;
}

void f_007a8b80(void) /* sub_7A8B80 */
{
    FN_ENTER(0x007a8b80);
    /* 007a8b80: mov dword ptr [0xaab408], 0x3f800000 */ W32((u32)(0xaab408u), 0x3f800000u);
    /* 007a8b8a: mov dword ptr [0xaab40c], 0x41000000 */ W32((u32)(0xaab40cu), 0x41000000u);
    /* 007a8b94: mov dword ptr [0xaab410], 0x3fc00000 */ W32((u32)(0xaab410u), 0x3fc00000u);
    /* 007a8b9e: ret  */ FN_RET(0x007a8b80); r_esp += 4; return;
}

void f_007a8ba0(void) /* sub_7A8BA0 */
{
    FN_ENTER(0x007a8ba0);
    /* 007a8ba0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a8ba3: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007a8ba7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007a8ba9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007a8bac: and eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a8bb1: cmp eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8bb6: je 0x7a8bcb */ if (fZ) goto L_007a8bcb;
L_007a8bb8:; BB(0x007a8bb8);
    /* 007a8bb8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 007a8bbb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a8bbf: and eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a8bc4: cmp eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8bc9: jne 0x7a8bd4 */ if (!fZ) goto L_007a8bd4;
L_007a8bcb:; BB(0x007a8bcb);
    /* 007a8bcb: mov eax, 1 */ r_eax = 0x1u;
    /* 007a8bd0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8bd3: ret  */ FN_RET(0x007a8ba0); r_esp += 4; return;
L_007a8bd4:; BB(0x007a8bd4);
    /* 007a8bd4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 007a8bd7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007a8bdb: and eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a8be0: cmp eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8be5: jne 0x7a8bee */ if (!fZ) goto L_007a8bee;
L_007a8be7:; BB(0x007a8be7);
    /* 007a8be7: mov eax, 1 */ r_eax = 0x1u;
    /* 007a8bec: jmp 0x7a8bf0 */ goto L_007a8bf0;
L_007a8bee:; BB(0x007a8bee);
    /* 007a8bee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a8bf0:; BB(0x007a8bf0);
    /* 007a8bf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a8bf2: je 0x7a8bfd */ if (fZ) goto L_007a8bfd;
L_007a8bf4:; BB(0x007a8bf4);
    /* 007a8bf4: mov eax, 1 */ r_eax = 0x1u;
    /* 007a8bf9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8bfc: ret  */ FN_RET(0x007a8ba0); r_esp += 4; return;
L_007a8bfd:; BB(0x007a8bfd);
    /* 007a8bfd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a8bff: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8c02: ret  */ FN_RET(0x007a8ba0); r_esp += 4; return;
}

void f_007a8c04(void) /* sub_7A8C04 */
{
    FN_ENTER(0x007a8c04);
    /* 007a8c04: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007a8c08: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a8c0c: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 007a8c0e: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 007a8c10: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 007a8c13: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a8c15: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 007a8c17: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 007a8c1a: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 007a8c1d: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 007a8c20: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 007a8c23: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 007a8c26: ret  */ FN_RET(0x007a8c04); r_esp += 4; return;
}

void f_007a8c28(void) /* sub_7A8C28 */
{
    FN_ENTER(0x007a8c28);
    /* 007a8c28: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a8c2c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a8c30: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 007a8c32: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 007a8c34: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a8c36: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007a8c39: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 007a8c3c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a8c3e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a8c40: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 007a8c43: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 007a8c46: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a8c48: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a8c4a: ret  */ FN_RET(0x007a8c28); r_esp += 4; return;
}

void f_007a8c4c(void) /* sub_7A8C4C */
{
    FN_ENTER(0x007a8c4c);
    /* 007a8c4c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007a8c50: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a8c54: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a8c58: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 007a8c5a: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 007a8c5c: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 007a8c5e: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 007a8c61: fsub dword ptr [edx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x4u));
    /* 007a8c64: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 007a8c67: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 007a8c6a: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 007a8c6d: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 007a8c70: ret  */ FN_RET(0x007a8c4c); r_esp += 4; return;
}

void f_007a8c74(void) /* sub_7A8C74 */
{
    FN_ENTER(0x007a8c74);
    /* 007a8c74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a8c75: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007a8c79: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007a8c7e: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 007a8c83: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007a8c85: movsx ebp, cx */ r_ebp = (u32)(i32)(i16)(u16)r_ecx;
    /* 007a8c88: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a8c8a: jl 0x7a8c9b */ if ((fS!=fO)) goto L_007a8c9b;
L_007a8c8c:; BB(0x007a8c8c);
    /* 007a8c8c: mov ecx, edx */ r_ecx = r_edx;
    /* 007a8c8e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007a8c90: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a8c92: jl 0x7a8c9b */ if ((fS!=fO)) goto L_007a8c9b;
L_007a8c94:; BB(0x007a8c94);
    /* 007a8c94: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007a8c99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a8c9a: ret  */ FN_RET(0x007a8c74); r_esp += 4; return;
L_007a8c9b:; BB(0x007a8c9b);
    /* 007a8c9b: test ebp, 0x8000 */ {  u32 a = r_ebp; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a8ca1: je 0x7a8caa */ if (fZ) goto L_007a8caa;
L_007a8ca3:; BB(0x007a8ca3);
    /* 007a8ca3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a8ca5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007a8ca8: jmp 0x7a8cb0 */ goto L_007a8cb0;
L_007a8caa:; BB(0x007a8caa);
    /* 007a8caa: lea eax, [eax + edx] */ r_eax = (u32)(r_eax+r_edx);
    /* 007a8cad: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_007a8cb0:; BB(0x007a8cb0);
    /* 007a8cb0: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007a8cb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a8cb4: ret  */ FN_RET(0x007a8c74); r_esp += 4; return;
}

void f_007a8cb8(void) /* sub_7A8CB8 */
{
    FN_ENTER(0x007a8cb8);
    /* 007a8cb8: movzx ecx, word ptr [esp + 4] */ r_ecx = (u32)R16((u32)(r_esp+0x4u));
    /* 007a8cbd: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a8cc1: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a8cc3: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007a8cc6: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 007a8cc8: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8cca: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007a8ccd: ret  */ FN_RET(0x007a8cb8); r_esp += 4; return;
}

void f_007a8cd0(void) /* sub_7A8CD0 */
{
    FN_ENTER(0x007a8cd0);
    /* 007a8cd0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007a8cd5: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a8cd9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a8cdb: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007a8cde: cmp edx, 0xffffd000 */ {  u32 a = r_edx; u32 b = 0xffffd000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a8ce4: jle 0x7a8cf9 */ if ((fZ||fS!=fO)) goto L_007a8cf9;
L_007a8ce6:; BB(0x007a8ce6);
    /* 007a8ce6: cmp edx, 0x3000 */ {  u32 a = r_edx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a8cec: jge 0x7a8cf9 */ if ((fS==fO)) goto L_007a8cf9;
L_007a8cee:; BB(0x007a8cee);
    /* 007a8cee: mov ecx, edx */ r_ecx = r_edx;
    /* 007a8cf0: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007a8cf2: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007a8cf5: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007a8cf7: jmp 0x7a8cfd */ goto L_007a8cfd;
L_007a8cf9:; BB(0x007a8cf9);
    /* 007a8cf9: mov ecx, edx */ r_ecx = r_edx;
    /* 007a8cfb: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
L_007a8cfd:; BB(0x007a8cfd);
    /* 007a8cfd: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8cff: movzx eax, cx */ r_eax = (u32)(u16)r_ecx;
    /* 007a8d02: ret  */ FN_RET(0x007a8cd0); r_esp += 4; return;
}

void f_007a8d04(void) /* sub_7A8D04 */
{
    FN_ENTER(0x007a8d04);
    /* 007a8d04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8d05: mov ebx, esp */ r_ebx = r_esp;
    /* 007a8d07: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 007a8d0a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8d0b: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a8d0e: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 007a8d11: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007a8d14: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007a8d17: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 007a8d1a: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007a8d1c: fmul qword ptr [0x97d8e8] */ ST(0) = ST(0) * R_F64((u32)(0x97d8e8u));
    /* 007a8d22: fdiv qword ptr [0x97d8e0] */ ST(0) = ST(0) / R_F64((u32)(0x97d8e0u));
    /* 007a8d28: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007a8d2b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007a8d2f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a8d34: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a8d38: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007a8d3c: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 007a8d40: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007a8d43: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a8d47: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007a8d49: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007a8d4b: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007a8d4e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a8d50: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007a8d53: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a8d55: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a8d57: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8d58: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007a8d5b: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x7a8d60u); f_0082dc9c();
    /* 007a8d60: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007a8d62: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a8d64: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007a8d66: fmul qword ptr [0x97d8e8] */ ST(0) = ST(0) * R_F64((u32)(0x97d8e8u));
    /* 007a8d6c: fdiv qword ptr [0x97d8e0] */ ST(0) = ST(0) / R_F64((u32)(0x97d8e0u));
    /* 007a8d72: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 007a8d75: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007a8d78: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007a8d7c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a8d81: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a8d85: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007a8d89: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 007a8d8b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007a8d8e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8d91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a8d92: mov esp, ebx */ r_esp = r_ebx;
    /* 007a8d94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a8d95: ret  */ FN_RET(0x007a8d04); r_esp += 4; return;
}

void f_007a8d98(void) /* sub_7A8D98 */
{
    FN_ENTER(0x007a8d98);
    /* 007a8d98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8d99: mov ebx, esp */ r_ebx = r_esp;
    /* 007a8d9b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 007a8d9e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8d9f: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a8da2: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 007a8da5: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007a8da7: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007a8daa: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 007a8dad: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007a8daf: fmul qword ptr [0x97d8d8] */ ST(0) = ST(0) * R_F64((u32)(0x97d8d8u));
    /* 007a8db5: fdiv qword ptr [0x97d8d0] */ ST(0) = ST(0) / R_F64((u32)(0x97d8d0u));
    /* 007a8dbb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007a8dbe: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007a8dc2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a8dc7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a8dcb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007a8dcf: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 007a8dd3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007a8dd6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a8dda: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007a8ddc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007a8dde: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007a8de0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a8de2: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007a8de5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a8de7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a8de9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8dea: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007a8ded: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x7a8df2u); f_0082dc9c();
    /* 007a8df2: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007a8df5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a8df7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007a8df9: fmul qword ptr [0x97d8d8] */ ST(0) = ST(0) * R_F64((u32)(0x97d8d8u));
    /* 007a8dff: fdiv qword ptr [0x97d8d0] */ ST(0) = ST(0) / R_F64((u32)(0x97d8d0u));
    /* 007a8e05: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 007a8e08: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007a8e0b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007a8e0f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a8e14: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a8e18: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007a8e1c: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 007a8e1e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007a8e21: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8e24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a8e25: mov esp, ebx */ r_esp = r_ebx;
    /* 007a8e27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a8e28: ret  */ FN_RET(0x007a8d98); r_esp += 4; return;
}

void f_007a8e2c(void) /* sub_7A8E2C */
{
    FN_ENTER(0x007a8e2c);
    /* 007a8e2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8e2d: mov ebx, esp */ r_ebx = r_esp;
    /* 007a8e2f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 007a8e32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8e33: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a8e36: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 007a8e39: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007a8e3c: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007a8e3e: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 007a8e41: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007a8e43: fmul qword ptr [0x97d8c8] */ ST(0) = ST(0) * R_F64((u32)(0x97d8c8u));
    /* 007a8e49: fdiv qword ptr [0x97d8c0] */ ST(0) = ST(0) / R_F64((u32)(0x97d8c0u));
    /* 007a8e4f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007a8e52: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007a8e56: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a8e5b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a8e5f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007a8e63: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 007a8e67: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007a8e6a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a8e6e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007a8e70: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007a8e72: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007a8e75: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a8e77: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007a8e79: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a8e7b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007a8e7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8e7e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007a8e81: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x7a8e86u); f_0082dc9c();
    /* 007a8e86: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007a8e89: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a8e8b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007a8e8d: fmul qword ptr [0x97d8c8] */ ST(0) = ST(0) * R_F64((u32)(0x97d8c8u));
    /* 007a8e93: fdiv qword ptr [0x97d8c0] */ ST(0) = ST(0) / R_F64((u32)(0x97d8c0u));
    /* 007a8e99: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 007a8e9c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007a8e9f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007a8ea3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a8ea8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a8eac: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007a8eb0: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 007a8eb2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007a8eb5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8eb8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a8eb9: mov esp, ebx */ r_esp = r_ebx;
    /* 007a8ebb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a8ebc: ret  */ FN_RET(0x007a8e2c); r_esp += 4; return;
}

void f_007a8ec0(void) /* sub_7A8EC0 */
{
    FN_ENTER(0x007a8ec0);
    /* 007a8ec0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a8ec3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007a8ec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a8ec7: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x7a8eccu); f_0083ace8();
    /* 007a8ecc: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 007a8ed1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007a8ed5: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007a8ed8: movzx ecx, byte ptr [esp + 6] */ r_ecx = (u32)R8((u32)(r_esp+0x6u));
    /* 007a8edd: mov byte ptr [eax + 2], cl */ W8((u32)(r_eax+0x2u), (u8)r_ecx);
    /* 007a8ee0: movzx edx, byte ptr [esp + 7] */ r_edx = (u32)R8((u32)(r_esp+0x7u));
    /* 007a8ee5: mov byte ptr [eax + 3], dl */ W8((u32)(r_eax+0x3u), (u8)r_edx);
    /* 007a8ee8: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 007a8eed: mov byte ptr [eax + 4], dl */ W8((u32)(r_eax+0x4u), (u8)r_edx);
    /* 007a8ef0: movzx edx, byte ptr [esp + 9] */ r_edx = (u32)R8((u32)(r_esp+0x9u));
    /* 007a8ef5: mov byte ptr [eax + 5], dl */ W8((u32)(r_eax+0x5u), (u8)r_edx);
    /* 007a8ef8: movzx edx, byte ptr [esp + 0xa] */ r_edx = (u32)R8((u32)(r_esp+0xau));
    /* 007a8efd: mov byte ptr [eax + 6], dl */ W8((u32)(r_eax+0x6u), (u8)r_edx);
    /* 007a8f00: movzx edx, byte ptr [esp + 0xb] */ r_edx = (u32)R8((u32)(r_esp+0xbu));
    /* 007a8f05: mov byte ptr [eax + 7], dl */ W8((u32)(r_eax+0x7u), (u8)r_edx);
    /* 007a8f08: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8f0b: ret  */ FN_RET(0x007a8ec0); r_esp += 4; return;
}

void f_007a8f0c(void) /* sub_7A8F0C */
{
    FN_ENTER(0x007a8f0c);
    /* 007a8f0c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007a8f10: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a8f14: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a8f18: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a8f1a: jg 0x7a8f1e */ if ((!fZ&&fS==fO)) goto L_007a8f1e;
L_007a8f1c:; BB(0x007a8f1c);
    /* 007a8f1c: mov eax, edx */ r_eax = r_edx;
L_007a8f1e:; BB(0x007a8f1e);
    /* 007a8f1e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a8f20: jge 0x7a8f24 */ if ((fS==fO)) goto L_007a8f24;
L_007a8f22:; BB(0x007a8f22);
    /* 007a8f22: mov eax, ecx */ r_eax = r_ecx;
L_007a8f24:; BB(0x007a8f24);
    /* 007a8f24: ret  */ FN_RET(0x007a8f0c); r_esp += 4; return;
}

void f_007a8f28(void) /* sub_7A8F28 */
{
    FN_ENTER(0x007a8f28);
    /* 007a8f28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a8f29: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a8f2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a8f2b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a8f2e: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 007a8f32: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 007a8f36: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 007a8f3a: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 007a8f3c: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007a8f3e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007a8f41: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007a8f44: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 007a8f47: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 007a8f4a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007a8f4e: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 007a8f51: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007a8f54: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007a8f58: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7a8f5du); f_0083173c();
    /* 007a8f5d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007a8f61: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007a8f65: fcomp dword ptr [esp + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x28u))); FPOP();
    /* 007a8f69: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a8f6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a8f6c: ja 0x7a8f8c */ if ((!fC&&!fZ)) goto L_007a8f8c;
L_007a8f6e:; BB(0x007a8f6e);
    /* 007a8f6e: fld dword ptr [0x97d944] */ FPUSH(R_F32((u32)(0x97d944u)));
L_007a8f74:; BB(0x007a8f74);
    /* 007a8f74: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007a8f76: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 007a8f79: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 007a8f7c: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 007a8f7f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 007a8f82: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 007a8f85: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a8f88: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a8f89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a8f8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a8f8b: ret  */ FN_RET(0x007a8f28); r_esp += 4; return;
L_007a8f8c:; BB(0x007a8f8c);
    /* 007a8f8c: fld dword ptr [0x97d944] */ FPUSH(R_F32((u32)(0x97d944u)));
    /* 007a8f92: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007a8f96: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007a8f98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a8f9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a8f9b: je 0x7a8f74 */ if (fZ) goto L_007a8f74;
L_007a8f9d:; BB(0x007a8f9d);
    /* 007a8f9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a8f9f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007a8fa2: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7a8fa7u); f_0082df08();
    /* 007a8fa7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a8fa9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007a8fac: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007a8fb0: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007a8fb2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007a8fb6: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007a8fba: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007a8fbe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007a8fc0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 007a8fc2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007a8fc4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007a8fc6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007a8fc8: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 007a8fcb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007a8fcd: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 007a8fd1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007a8fd3: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 007a8fd7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007a8fd9: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 007a8fdb: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 007a8fde: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007a8fe0: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 007a8fe3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007a8fe7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a8fe9: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 007a8fec: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007a8ff0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a8ff2: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 007a8ff5: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007a8ff9: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 007a8ffc: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007a9000: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 007a9003: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a9006: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a9007: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a9008: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a9009: ret  */ FN_RET(0x007a8f28); r_esp += 4; return;
}

