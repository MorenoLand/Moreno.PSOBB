#include "protos.h"

void f_00890088(void)
{
    FN_ENTER(0x00890088);
    /* 00890088: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089008a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0089008d: jne 0x890096 */ if (!fZ) goto L_00890096;
L_0089008f:; BB(0x0089008f);
    /* 0089008f: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_00890096:; BB(0x00890096);
    /* 00890096: cmp dword ptr [ebp - 0x24], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00890099: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0089009c: jbe 0x890201 */ if ((fC||fZ)) goto L_00890201;
L_008900a2:; BB(0x008900a2);
    /* 008900a2: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
L_008900a5:; BB(0x008900a5);
    /* 008900a5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008900a8: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900ab: je 0x8900cd */ if (fZ) goto L_008900cd;
L_008900ad:; BB(0x008900ad);
    /* 008900ad: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900ae: je 0x8900c8 */ if (fZ) goto L_008900c8;
L_008900b0:; BB(0x008900b0);
    /* 008900b0: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900b1: jne 0x8900df */ if (!fZ) goto L_008900df;
L_008900b3:; BB(0x008900b3);
    /* 008900b3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008900b6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008900b8: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 008900bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008900bc: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008900bf: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008900c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008900c3: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x8900c6u); call_ind(t); }
    /* 008900c6: jmp 0x8900dd */ goto L_008900dd;
L_008900c8:; BB(0x008900c8);
    /* 008900c8: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 008900cb: jmp 0x8900d0 */ goto L_008900d0;
L_008900cd:; BB(0x008900cd);
    /* 008900cd: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
L_008900d0:; BB(0x008900d0);
    /* 008900d0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008900d3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008900d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008900d6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008900d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008900da: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x8900ddu); call_ind(t); }
L_008900dd:; BB(0x008900dd);
    /* 008900dd: mov esi, eax */ r_esi = r_eax;
L_008900df:; BB(0x008900df);
    /* 008900df: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008900e1: jl 0x890203 */ if ((fS!=fO)) goto L_00890203;
L_008900e7:; BB(0x008900e7);
    /* 008900e7: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008900ea: jmp 0x8901c8 */ goto L_008901c8;
L_008900ef:; BB(0x008900ef);
    /* 008900ef: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008900f2: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900f5: je 0x890115 */ if (fZ) goto L_00890115;
L_008900f7:; BB(0x008900f7);
    /* 008900f7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900f8: je 0x890110 */ if (fZ) goto L_00890110;
L_008900fa:; BB(0x008900fa);
    /* 008900fa: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900fb: jne 0x890125 */ if (!fZ) goto L_00890125;
L_008900fd:; BB(0x008900fd);
    /* 008900fd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00890100: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00890102: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 00890105: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00890106: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00890107: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089010a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089010b: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x89010eu); call_ind(t); }
    /* 0089010e: jmp 0x890123 */ goto L_00890123;
L_00890110:; BB(0x00890110);
    /* 00890110: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00890113: jmp 0x890118 */ goto L_00890118;
L_00890115:; BB(0x00890115);
    /* 00890115: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
L_00890118:; BB(0x00890118);
    /* 00890118: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089011b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089011d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089011e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890120: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x890123u); call_ind(t); }
L_00890123:; BB(0x00890123);
    /* 00890123: mov esi, eax */ r_esi = r_eax;
L_00890125:; BB(0x00890125);
    /* 00890125: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00890127: jl 0x890203 */ if ((fS!=fO)) goto L_00890203;
L_0089012d:; BB(0x0089012d);
    /* 0089012d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00890130: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890133: je 0x89013b */ if (fZ) goto L_0089013b;
L_00890135:; BB(0x00890135);
    /* 00890135: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890136: je 0x89018f */ if (fZ) goto L_0089018f;
L_00890138:; BB(0x00890138);
    /* 00890138: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890139: jne 0x890154 */ if (!fZ) goto L_00890154;
L_0089013b:; BB(0x0089013b);
    /* 0089013b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089013c: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089013f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890140: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890143: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890146: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890147: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089014a: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089014d: call 0x88fd39 */ r_esp -= 4; W32(r_esp, 0x890152u); f_0088fd39();
L_00890152:; BB(0x00890152);
    /* 00890152: mov esi, eax */ r_esi = r_eax;
L_00890154:; BB(0x00890154);
    /* 00890154: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00890156: jl 0x890203 */ if ((fS!=fO)) goto L_00890203;
L_0089015c:; BB(0x0089015c);
    /* 0089015c: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089015f: je 0x8901a8 */ if (fZ) goto L_008901a8;
L_00890161:; BB(0x00890161);
    /* 00890161: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890164: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890166: je 0x890171 */ if (fZ) goto L_00890171;
L_00890168:; BB(0x00890168);
    /* 00890168: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089016a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089016b: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x89016eu); call_ind(t); }
    /* 0089016e: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_00890171:; BB(0x00890171);
    /* 00890171: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00890174: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890176: je 0x89017e */ if (fZ) goto L_0089017e;
L_00890178:; BB(0x00890178);
    /* 00890178: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089017a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089017b: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x89017eu); call_ind(t); }
L_0089017e:; BB(0x0089017e);
    /* 0089017e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00890181: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00890184: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00890187: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0089018a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0089018d: jmp 0x8901c5 */ goto L_008901c5;
L_0089018f:; BB(0x0089018f);
    /* 0089018f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890190: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890193: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890194: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890197: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089019a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089019b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089019e: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008901a1: call 0x88fedf */ r_esp -= 4; W32(r_esp, 0x8901a6u); f_0088fedf();
    /* 008901a6: jmp 0x890152 */ goto L_00890152;
L_008901a8:; BB(0x008901a8);
    /* 008901a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008901ab: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008901ad: je 0x8901b8 */ if (fZ) goto L_008901b8;
L_008901af:; BB(0x008901af);
    /* 008901af: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008901b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008901b2: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8901b5u); call_ind(t); }
    /* 008901b5: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
L_008901b8:; BB(0x008901b8);
    /* 008901b8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008901bb: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008901bd: je 0x8901c8 */ if (fZ) goto L_008901c8;
L_008901bf:; BB(0x008901bf);
    /* 008901bf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008901c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008901c2: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8901c5u); call_ind(t); }
L_008901c5:; BB(0x008901c5);
    /* 008901c5: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
L_008901c8:; BB(0x008901c8);
    /* 008901c8: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008901c9: cmp edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008901cc: jb 0x8900ef */ if (fC) goto L_008900ef;
L_008901d2:; BB(0x008901d2);
    /* 008901d2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008901d5: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008901d7: je 0x8901e2 */ if (fZ) goto L_008901e2;
L_008901d9:; BB(0x008901d9);
    /* 008901d9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008901db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008901dc: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8901dfu); call_ind(t); }
    /* 008901df: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_008901e2:; BB(0x008901e2);
    /* 008901e2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008901e5: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008901e7: je 0x8901f2 */ if (fZ) goto L_008901f2;
L_008901e9:; BB(0x008901e9);
    /* 008901e9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008901eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008901ec: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8901efu); call_ind(t); }
    /* 008901ef: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
L_008901f2:; BB(0x008901f2);
    /* 008901f2: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008901f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008901f8: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008901fb: jb 0x8900a5 */ if (fC) goto L_008900a5;
L_00890201:; BB(0x00890201);
    /* 00890201: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00890203:; BB(0x00890203);
    /* 00890203: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890206: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890208: je 0x890213 */ if (fZ) goto L_00890213;
L_0089020a:; BB(0x0089020a);
    /* 0089020a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089020c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089020d: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x890210u); call_ind(t); }
    /* 00890210: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_00890213:; BB(0x00890213);
    /* 00890213: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00890216: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890218: je 0x890223 */ if (fZ) goto L_00890223;
L_0089021a:; BB(0x0089021a);
    /* 0089021a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089021c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089021d: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x890220u); call_ind(t); }
    /* 00890220: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
L_00890223:; BB(0x00890223);
    /* 00890223: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00890226: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890228: je 0x890233 */ if (fZ) goto L_00890233;
L_0089022a:; BB(0x0089022a);
    /* 0089022a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089022c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089022d: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x890230u); call_ind(t); }
    /* 00890230: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
L_00890233:; BB(0x00890233);
    /* 00890233: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00890236: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00890238: je 0x890240 */ if (fZ) goto L_00890240;
L_0089023a:; BB(0x0089023a);
    /* 0089023a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089023c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089023d: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x890240u); call_ind(t); }
L_00890240:; BB(0x00890240);
    /* 00890240: mov eax, esi */ r_eax = r_esi;
    /* 00890242: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00890243: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890244: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00890245: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00890246: ret 0x10 */ FN_RET(0x00890088); r_esp += 20; return;
}

void f_008908bc(void) /* sub_8908BC */
{
    FN_ENTER(0x008908bc);
    /* 008908bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008908bd: mov ebp, esp */ r_ebp = r_esp;
    /* 008908bf: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908c2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008908c4: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008908c7: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908ca: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908cd: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908d0: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008908d3: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908d6: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908d9: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908dc: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008908df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008908e1: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908e4: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908e7: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908ea: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008908ed: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908f0: call 0x890249 */ r_esp -= 4; W32(r_esp, 0x8908f5u); f_00890249();
    /* 008908f5: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008908f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008908f9: ret 0x3c */ FN_RET(0x008908bc); r_esp += 64; return;
}

void f_008908fc(void) /* sub_8908FC */
{
    FN_ENTER(0x008908fc);
    /* 008908fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008908fd: mov ebp, esp */ r_ebp = r_esp;
    /* 008908ff: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00890902: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890903: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00890906: call 0x89f21a */ r_esp -= 4; W32(r_esp, 0x89090bu); f_0089f21a();
    /* 0089090b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0089090d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890910: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00890913: call 0x89f22c */ r_esp -= 4; W32(r_esp, 0x890918u); f_0089f22c();
    /* 00890918: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089091a: jl 0x89094e */ if ((fS!=fO)) goto L_0089094e;
L_0089091c:; BB(0x0089091c);
    /* 0089091c: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089091f: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890922: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890925: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890928: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089092b: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089092e: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890931: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890934: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890937: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089093a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089093d: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890940: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890943: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890946: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890949: call 0x8908bc */ r_esp -= 4; W32(r_esp, 0x89094eu); f_008908bc();
L_0089094e:; BB(0x0089094e);
    /* 0089094e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00890951: mov esi, eax */ r_esi = r_eax;
    /* 00890953: call 0x89f37d */ r_esp -= 4; W32(r_esp, 0x890958u); f_0089f37d();
    /* 00890958: mov eax, esi */ r_eax = r_esi;
    /* 0089095a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089095b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089095c: ret 0x38 */ FN_RET(0x008908fc); r_esp += 60; return;
}

void f_0089095f(void) /* sub_89095F */
{
    FN_ENTER(0x0089095f);
    /* 0089095f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890960: mov ebp, esp */ r_ebp = r_esp;
    /* 00890962: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00890965: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890966: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00890969: call 0x89f21a */ r_esp -= 4; W32(r_esp, 0x89096eu); f_0089f21a();
    /* 0089096e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890970: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890973: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00890976: call 0x89f22c */ r_esp -= 4; W32(r_esp, 0x89097bu); f_0089f22c();
    /* 0089097b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089097d: jl 0x8909b1 */ if ((fS!=fO)) goto L_008909b1;
L_0089097f:; BB(0x0089097f);
    /* 0089097f: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890982: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890985: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890988: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089098b: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089098e: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890991: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890994: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890997: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089099a: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089099d: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008909a0: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008909a3: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008909a6: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008909a9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008909ac: call 0x8908bc */ r_esp -= 4; W32(r_esp, 0x8909b1u); f_008908bc();
L_008909b1:; BB(0x008909b1);
    /* 008909b1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 008909b4: mov esi, eax */ r_esi = r_eax;
    /* 008909b6: call 0x89f37d */ r_esp -= 4; W32(r_esp, 0x8909bbu); f_0089f37d();
    /* 008909bb: mov eax, esi */ r_eax = r_esi;
    /* 008909bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008909be: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008909bf: ret 0x38 */ FN_RET(0x0089095f); r_esp += 60; return;
}

void f_008909c2(void) /* sub_8909C2 */
{
    FN_ENTER(0x008909c2);
    /* 008909c2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008909c6: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 008909ca: fld dword ptr [0x99b9dc] */ FPUSH(R_F32((u32)(0x99b9dcu)));
    /* 008909d0: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 008909d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008909d4: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008909d7: jp 0x8909ea */ if (fP) goto L_008909ea;
L_008909d9:; BB(0x008909d9);
    /* 008909d9: fcomp dword ptr [0x99b9d8] */ fx_compare(ST(0), R_F32((u32)(0x99b9d8u))); FPOP();
    /* 008909df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008909e1: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008909e4: jp 0x8909ec */ if (fP) goto L_008909ec;
L_008909e6:; BB(0x008909e6);
    /* 008909e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008909e8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008909e9: ret  */ FN_RET(0x008909c2); r_esp += 4; return;
L_008909ea:; BB(0x008909ea);
    /* 008909ea: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008909ec:; BB(0x008909ec);
    /* 008909ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008909ee: ret  */ FN_RET(0x008909c2); r_esp += 4; return;
}

void f_008909ef(void)
{
    FN_ENTER(0x008909ef);
    /* 008909ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008909f1: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x8909f6u); f_0089f633();
    /* 008909f6: jmp dword ptr [0xa34040] */ { u32 t = R32((u32)(0xa34040u)); jmp_ind(t); return; }
}

void f_008909fc(void) /* sub_8909FC */
{
    FN_ENTER(0x008909fc);
    /* 008909fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008909fd: mov ebp, esp */ r_ebp = r_esp;
    /* 008909ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890a01: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890a06u); f_0089f633();
    /* 00890a06: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890a09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890a0a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00890a0d: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890a10: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890a13: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890a16: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890a19: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890a1c: call dword ptr [0xa33fcc] */ { u32 t = R32((u32)(0xa33fccu)); r_esp -= 4; W32(r_esp, 0x890a22u); call_ind(t); }
    /* 00890a22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00890a23: ret 0x18 */ FN_RET(0x008909fc); r_esp += 28; return;
}

void f_00890a26(void) /* sub_890A26 */
{
    FN_ENTER(0x00890a26);
    /* 00890a26: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890a27: mov ebp, esp */ r_ebp = r_esp;
    /* 00890a29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890a2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890a2b: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890a2e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00890a31: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00890a34: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00890a37: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890a3a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890a3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890a3e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890a40: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00890a43: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00890a44: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00890a47: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00890a49: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00890a4b: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00890a4d: fmul dword ptr [0x99b9e0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e0u));
    /* 00890a53: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00890a55: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00890a57: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 00890a5d: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00890a60: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00890a62: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00890a64: fsubr st(3) */ ST(0) = ST(3) - ST(0);
    /* 00890a66: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 00890a69: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00890a6c: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00890a6e: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 00890a71: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00890a73: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00890a75: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00890a78: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00890a7a: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00890a7d: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00890a7f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890a81: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890a84: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00890a86: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890a88: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00890a8a: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 00890a8c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890a8e: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00890a90: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00890a93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00890a94: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890a97: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00890a9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890a9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890a9d: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00890aa0: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00890aa3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890aa5: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00890aa8: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00890aab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890aad: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00890ab0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00890ab1: ret 0x18 */ FN_RET(0x00890a26); r_esp += 28; return;
}

void f_00890ab4(void) /* sub_890AB4 */
{
    FN_ENTER(0x00890ab4);
    /* 00890ab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890ab5: mov ebp, esp */ r_ebp = r_esp;
    /* 00890ab7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890ab9: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890abeu); f_0089f633();
    /* 00890abe: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890ac1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890ac2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00890ac5: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890ac8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890acb: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890ace: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890ad1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890ad4: call dword ptr [0xa34044] */ { u32 t = R32((u32)(0xa34044u)); r_esp -= 4; W32(r_esp, 0x890adau); call_ind(t); }
    /* 00890ada: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00890adb: ret 0x18 */ FN_RET(0x00890ab4); r_esp += 28; return;
}

void f_00890ade(void) /* sub_890ADE */
{
    FN_ENTER(0x00890ade);
    /* 00890ade: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890adf: mov ebp, esp */ r_ebp = r_esp;
    /* 00890ae1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890ae2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890ae3: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890ae6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00890ae9: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00890aec: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00890aef: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890af2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890af5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890af6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890af8: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00890afb: fld dword ptr [0x99b9ec] */ FPUSH(R_F32((u32)(0x99b9ecu)));
    /* 00890b01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00890b02: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00890b04: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00890b07: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890b09: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00890b0b: fsub dword ptr [ebp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x1cu));
    /* 00890b0e: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00890b11: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00890b13: fmul dword ptr [0x99b9e0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e0u));
    /* 00890b19: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00890b1b: fmul dword ptr [0x99b9e8] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e8u));
    /* 00890b21: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00890b23: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00890b25: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00890b28: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00890b2a: fmul dword ptr [0x99b9e4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e4u));
    /* 00890b30: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00890b32: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 00890b35: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 00890b38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00890b3a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00890b3c: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00890b3e: fld dword ptr [0x99b9b4] */ FPUSH(R_F32((u32)(0x99b9b4u)));
    /* 00890b44: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00890b47: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00890b49: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00890b4c: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00890b4e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890b50: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890b53: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00890b55: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890b57: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00890b59: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 00890b5b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890b5d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890b5f: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00890b61: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00890b63: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00890b66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00890b67: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890b6a: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00890b6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890b6e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890b70: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00890b73: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00890b76: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890b78: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00890b7b: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00890b7e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890b80: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890b82: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00890b85: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00890b87: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00890b89: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00890b8a: ret 0x18 */ FN_RET(0x00890ade); r_esp += 28; return;
}

void f_00890b8d(void) /* sub_890B8D */
{
    FN_ENTER(0x00890b8d);
    /* 00890b8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890b8e: mov ebp, esp */ r_ebp = r_esp;
    /* 00890b90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890b92: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890b97u); f_0089f633();
    /* 00890b97: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890b9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890b9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890b9c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00890ba0: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00890ba3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00890ba6: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890ba9: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890bac: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890baf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890bb2: call dword ptr [0xa34048] */ { u32 t = R32((u32)(0xa34048u)); r_esp -= 4; W32(r_esp, 0x890bb8u); call_ind(t); }
    /* 00890bb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00890bb9: ret 0x18 */ FN_RET(0x00890b8d); r_esp += 28; return;
}

void f_00890bbc(void) /* sub_890BBC */
{
    FN_ENTER(0x00890bbc);
    /* 00890bbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890bbd: mov ebp, esp */ r_ebp = r_esp;
    /* 00890bbf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00890bc2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00890bc5: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00890bc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890bca: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 00890bcc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890bcd: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00890bd0: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 00890bd3: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00890bd5: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 00890bd7: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00890bda: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890bdc: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00890bde: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00890be0: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00890be3: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 00890be6: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 00890be9: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00890bec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890bed: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 00890bf0: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00890bf3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890bf5: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 00890bf8: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00890bfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00890bfc: ret 0x18 */ FN_RET(0x00890bbc); r_esp += 28; return;
}

void f_00890bff(void) /* sub_890BFF */
{
    FN_ENTER(0x00890bff);
    /* 00890bff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890c01: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890c06u); f_0089f633();
    /* 00890c06: jmp dword ptr [0xa33f88] */ { u32 t = R32((u32)(0xa33f88u)); jmp_ind(t); return; }
}

void f_00890c0c(void)
{
    FN_ENTER(0x00890c0c);
    /* 00890c0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890c0e: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890c13u); f_0089f633();
    /* 00890c13: jmp dword ptr [0xa33fac] */ { u32 t = R32((u32)(0xa33facu)); jmp_ind(t); return; }
}

void f_00890c19(void)
{
    FN_ENTER(0x00890c19);
    /* 00890c19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890c1b: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890c20u); f_0089f633();
    /* 00890c20: jmp dword ptr [0xa33f9c] */ { u32 t = R32((u32)(0xa33f9cu)); jmp_ind(t); return; }
}

void f_00890c26(void) /* sub_890C26 */
{
    FN_ENTER(0x00890c26);
    /* 00890c26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890c28: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890c2du); f_0089f633();
    /* 00890c2d: jmp dword ptr [0xa33fa4] */ { u32 t = R32((u32)(0xa33fa4u)); jmp_ind(t); return; }
}

void f_00890c33(void) /* sub_890C33 */
{
    FN_ENTER(0x00890c33);
    /* 00890c33: jmp dword ptr [0xa33fa4] */ { u32 t = R32((u32)(0xa33fa4u)); jmp_ind(t); return; }
}

void f_00890c39(void) /* sub_890C39 */
{
    FN_ENTER(0x00890c39);
    /* 00890c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890c3a: mov ebp, esp */ r_ebp = r_esp;
    /* 00890c3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890c3e: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890c43u); f_0089f633();
    /* 00890c43: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890c46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890c47: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00890c4a: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890c4d: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890c50: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890c53: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890c56: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890c59: call dword ptr [0xa3404c] */ { u32 t = R32((u32)(0xa3404cu)); r_esp -= 4; W32(r_esp, 0x890c5fu); call_ind(t); }
    /* 00890c5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00890c60: ret 0x18 */ FN_RET(0x00890c39); r_esp += 28; return;
}

void f_00890c63(void) /* sub_890C63 */
{
    FN_ENTER(0x00890c63);
    /* 00890c63: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890c64: mov ebp, esp */ r_ebp = r_esp;
    /* 00890c66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890c67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890c68: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890c6b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00890c6e: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00890c71: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00890c74: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890c77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890c7a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890c7b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890c7d: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00890c80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00890c81: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00890c84: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00890c86: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00890c88: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00890c8a: fmul dword ptr [0x99b9e0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e0u));
    /* 00890c90: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00890c92: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00890c94: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 00890c9a: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00890c9d: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00890c9f: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00890ca1: fsubr st(3) */ ST(0) = ST(3) - ST(0);
    /* 00890ca3: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 00890ca6: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00890ca9: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00890cab: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 00890cae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00890cb0: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00890cb2: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00890cb5: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00890cb7: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00890cba: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00890cbc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890cbe: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890cc1: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00890cc3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890cc5: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00890cc7: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 00890cc9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890ccb: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00890ccd: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00890ccf: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00890cd2: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890cd5: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00890cd8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890cda: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00890cdd: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00890ce0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890ce2: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00890ce5: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00890ce8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890cea: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00890ced: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 00890cf0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00890cf1: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890cf4: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00890cf7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890cf8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890cfa: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00890cfd: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00890d00: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890d02: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00890d05: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00890d08: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890d0a: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00890d0d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00890d0e: ret 0x18 */ FN_RET(0x00890c63); r_esp += 28; return;
}

void f_00890d11(void) /* sub_890D11 */
{
    FN_ENTER(0x00890d11);
    /* 00890d11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890d12: mov ebp, esp */ r_ebp = r_esp;
    /* 00890d14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890d16: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890d1bu); f_0089f633();
    /* 00890d1b: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890d1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890d1f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00890d22: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890d25: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890d28: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890d2b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890d2e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890d31: call dword ptr [0xa34050] */ { u32 t = R32((u32)(0xa34050u)); r_esp -= 4; W32(r_esp, 0x890d37u); call_ind(t); }
    /* 00890d37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00890d38: ret 0x18 */ FN_RET(0x00890d11); r_esp += 28; return;
}

void f_00890d3b(void) /* sub_890D3B */
{
    FN_ENTER(0x00890d3b);
    /* 00890d3b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890d3c: mov ebp, esp */ r_ebp = r_esp;
    /* 00890d3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890d3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890d40: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890d43: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00890d46: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00890d49: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00890d4c: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890d4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890d52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890d53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890d55: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00890d58: fld dword ptr [0x99b9ec] */ FPUSH(R_F32((u32)(0x99b9ecu)));
    /* 00890d5e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00890d5f: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00890d61: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00890d64: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890d66: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00890d68: fsub dword ptr [ebp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x1cu));
    /* 00890d6b: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00890d6e: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00890d70: fmul dword ptr [0x99b9e0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e0u));
    /* 00890d76: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00890d78: fmul dword ptr [0x99b9e8] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e8u));
    /* 00890d7e: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00890d80: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00890d82: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00890d85: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00890d87: fmul dword ptr [0x99b9e4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e4u));
    /* 00890d8d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00890d8f: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 00890d92: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 00890d95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00890d97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00890d99: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00890d9b: fld dword ptr [0x99b9b4] */ FPUSH(R_F32((u32)(0x99b9b4u)));
    /* 00890da1: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00890da4: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00890da6: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00890da9: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00890dab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890dad: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890db0: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00890db2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890db4: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00890db6: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 00890db8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890dba: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890dbc: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00890dbe: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00890dc0: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 00890dc3: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890dc6: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00890dc9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890dcb: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00890dce: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00890dd1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890dd3: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00890dd6: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00890dd9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890ddb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890ddd: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00890de0: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00890de2: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 00890de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00890de6: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890de9: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00890dec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890ded: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890def: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00890df2: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00890df5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890df7: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00890dfa: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00890dfd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890dff: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00890e01: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00890e04: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00890e06: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00890e08: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00890e09: ret 0x18 */ FN_RET(0x00890d3b); r_esp += 28; return;
}

void f_00890e0c(void) /* sub_890E0C */
{
    FN_ENTER(0x00890e0c);
    /* 00890e0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890e0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00890e0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890e11: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890e16u); f_0089f633();
    /* 00890e16: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00890e19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890e1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890e1b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00890e1f: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00890e22: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00890e25: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890e28: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890e2b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890e2e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890e31: call dword ptr [0xa34054] */ { u32 t = R32((u32)(0xa34054u)); r_esp -= 4; W32(r_esp, 0x890e37u); call_ind(t); }
    /* 00890e37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00890e38: ret 0x18 */ FN_RET(0x00890e0c); r_esp += 28; return;
}

void f_00890e3b(void) /* sub_890E3B */
{
    FN_ENTER(0x00890e3b);
    /* 00890e3b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890e3c: mov ebp, esp */ r_ebp = r_esp;
    /* 00890e3e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00890e41: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00890e44: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00890e46: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890e49: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 00890e4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890e4c: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00890e4f: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 00890e52: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00890e54: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 00890e56: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00890e59: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890e5b: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00890e5d: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00890e5f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00890e62: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 00890e65: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 00890e68: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00890e6b: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 00890e6e: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00890e71: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890e73: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 00890e76: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00890e79: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00890e7c: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 00890e7f: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 00890e82: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00890e85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890e86: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 00890e89: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00890e8c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890e8e: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00890e91: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00890e94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00890e95: ret 0x18 */ FN_RET(0x00890e3b); r_esp += 28; return;
}

void f_00890e98(void)
{
    FN_ENTER(0x00890e98);
    /* 00890e98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890e9a: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890e9fu); f_0089f633();
    /* 00890e9f: jmp dword ptr [0xa33f8c] */ { u32 t = R32((u32)(0xa33f8cu)); jmp_ind(t); return; }
}

void f_00890ea5(void) /* sub_890EA5 */
{
    FN_ENTER(0x00890ea5);
    /* 00890ea5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890ea6: mov ebp, esp */ r_ebp = r_esp;
    /* 00890ea8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00890eab: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00890eae: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00890eb1: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 00890eb4: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00890eb7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890eb8: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00890ebb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00890ebc: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00890ebf: lea esi, [ebp - 0x10] */ r_esi = (u32)(r_ebp+0xfffffff0u);
    /* 00890ec2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890ec4: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00890ec6: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00890ec8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890eca: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 00890ecd: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00890ed0: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 00890ed3: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00890ed6: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00890ed9: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00890edc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890ede: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00890ee1: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00890ee3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890ee5: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 00890ee8: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00890eeb: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 00890eee: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00890ef1: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 00890ef4: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00890ef7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890ef9: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00890efc: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00890efe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890f00: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 00890f03: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00890f06: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 00890f09: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00890f0c: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 00890f0f: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00890f12: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890f14: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00890f17: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00890f19: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890f1b: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 00890f1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890f21: mov edi, eax */ r_edi = r_eax;
    /* 00890f23: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00890f26: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00890f27: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00890f28: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00890f29: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00890f2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00890f2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890f2c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00890f2d: ret 0xc */ FN_RET(0x00890ea5); r_esp += 16; return;
}

void f_00890f30(void) /* sub_890F30 */
{
    FN_ENTER(0x00890f30);
    /* 00890f30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890f32: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890f37u); f_0089f633();
    /* 00890f37: jmp dword ptr [0xa33fb0] */ { u32 t = R32((u32)(0xa33fb0u)); jmp_ind(t); return; }
}

void f_00890f3d(void) /* sub_890F3D */
{
    FN_ENTER(0x00890f3d);
    /* 00890f3d: jmp dword ptr [0xa33fb0] */ { u32 t = R32((u32)(0xa33fb0u)); jmp_ind(t); return; }
}

void f_00890f43(void)
{
    FN_ENTER(0x00890f43);
    /* 00890f43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890f45: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890f4au); f_0089f633();
    /* 00890f4a: jmp dword ptr [0xa33fa0] */ { u32 t = R32((u32)(0xa33fa0u)); jmp_ind(t); return; }
}

void f_00890f50(void) /* sub_890F50 */
{
    FN_ENTER(0x00890f50);
    /* 00890f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00890f53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00890f56: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00890f59: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00890f5c: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00890f5f: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00890f62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890f63: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00890f66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00890f67: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00890f6a: lea esi, [ebp - 0xc] */ r_esi = (u32)(r_ebp+0xfffffff4u);
    /* 00890f6d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890f6f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00890f71: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00890f73: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890f75: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00890f78: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 00890f7b: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00890f7e: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00890f81: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00890f84: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890f86: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00890f89: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00890f8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890f8d: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00890f90: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 00890f93: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00890f96: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00890f99: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00890f9c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890f9e: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00890fa1: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00890fa3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890fa6: mov edi, eax */ r_edi = r_eax;
    /* 00890fa8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00890faa: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00890fad: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00890fae: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00890faf: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00890fb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00890fb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890fb2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00890fb3: ret 0xc */ FN_RET(0x00890f50); r_esp += 16; return;
}

void f_00890fb6(void) /* sub_890FB6 */
{
    FN_ENTER(0x00890fb6);
    /* 00890fb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890fb7: mov ebp, esp */ r_ebp = r_esp;
    /* 00890fb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890fbb: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890fc0u); f_0089f633();
    /* 00890fc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00890fc1: jmp dword ptr [0xa33fc0] */ { u32 t = R32((u32)(0xa33fc0u)); jmp_ind(t); return; }
}

void f_00890fc7(void) /* sub_890FC7 */
{
    FN_ENTER(0x00890fc7);
    /* 00890fc7: jmp dword ptr [0xa33fc0] */ { u32 t = R32((u32)(0xa33fc0u)); jmp_ind(t); return; }
}

void f_00890fcd(void) /* sub_890FCD */
{
    FN_ENTER(0x00890fcd);
    /* 00890fcd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890fce: mov ebp, esp */ r_ebp = r_esp;
    /* 00890fd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890fd2: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890fd7u); f_0089f633();
    /* 00890fd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00890fd8: jmp dword ptr [0xa33fc4] */ { u32 t = R32((u32)(0xa33fc4u)); jmp_ind(t); return; }
}

void f_00890fde(void)
{
    FN_ENTER(0x00890fde);
    /* 00890fde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00890fe0: call 0x89f633 */ r_esp -= 4; W32(r_esp, 0x890fe5u); f_0089f633();
    /* 00890fe5: jmp dword ptr [0xa33fc8] */ { u32 t = R32((u32)(0xa33fc8u)); jmp_ind(t); return; }
}

void f_00890feb(void) /* sub_890FEB */
{
    FN_ENTER(0x00890feb);
    /* 00890feb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00890fec: mov ebp, esp */ r_ebp = r_esp;
    /* 00890fee: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00890ff1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00890ff4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00890ff7: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00890ffa: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00890ffd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00891000: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00891003: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00891004: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00891007: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00891008: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0089100b: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0089100e: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00891011: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00891014: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891016: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00891019: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089101c: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 0089101f: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00891022: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00891025: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00891028: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0089102b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089102d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089102f: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00891032: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00891035: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00891038: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0089103a: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089103d: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00891040: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 00891043: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00891045: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00891048: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0089104b: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 0089104d: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00891050: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00891053: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00891055: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 00891058: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0089105a: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 0089105d: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089105f: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00891062: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891064: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00891067: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00891069: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 0089106b: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089106e: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 00891071: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00891074: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00891076: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00891079: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 0089107c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089107e: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00891081: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00891083: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00891085: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00891088: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0089108a: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0089108d: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00891090: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00891092: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00891095: fsub dword ptr [ebp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xcu));
    /* 00891098: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 0089109b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0089109d: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0089109f: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 008910a1: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 008910a4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008910a6: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008910a9: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008910ac: fsub dword ptr [ebp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff8u));
    /* 008910af: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 008910b1: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 008910b4: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 008910b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008910ba: lea esi, [ebp - 0x1c] */ r_esi = (u32)(r_ebp+0xffffffe4u);
    /* 008910bd: mov edi, eax */ r_edi = r_eax;
    /* 008910bf: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008910c1: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008910c3: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 008910c5: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 008910c8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008910ca: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008910cd: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008910ce: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008910cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008910d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008910d3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008910d4: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008910d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008910d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008910d7: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008910d8: ret 0x10 */ FN_RET(0x00890feb); r_esp += 20; return;
}

