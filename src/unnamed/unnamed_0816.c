#include "protos.h"

void f_008162d8(void) /* sub_8162D8 */
{
    FN_ENTER(0x008162d8);
    /* 008162d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008162d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008162da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008162db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008162dc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008162df: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 008162e3: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 008162e7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008162eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008162ed: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008162f0: je 0x816669 */ if (fZ) goto L_00816669;
L_008162f6:; BB(0x008162f6);
    /* 008162f6: mov eax, edx */ r_eax = r_edx;
    /* 008162f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008162fa: jge 0x816315 */ if ((fS==fO)) goto L_00816315;
L_008162fc:; BB(0x008162fc);
    /* 008162fc: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 008162ff: mov edi, ebp */ r_edi = r_ebp;
    /* 00816301: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00816304: mov esi, 0x2d */ r_esi = 0x2du;
    /* 00816309: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0081630c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0081630f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00816311: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_00816315:; BB(0x00816315);
    /* 00816315: mov ecx, eax */ r_ecx = r_eax;
    /* 00816317: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0081631c: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0081631e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00816320: mov esi, ecx */ r_esi = r_ecx;
    /* 00816322: mov ebx, edx */ r_ebx = r_edx;
    /* 00816324: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816327: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0081632a: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0081632c: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0081632f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00816331: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00816333: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00816335: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816337: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816339: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0081633d: jle 0x816629 */ if ((fZ||fS!=fO)) goto L_00816629;
L_00816343:; BB(0x00816343);
    /* 00816343: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816348: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0081634a: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0081634f: mov esi, ebx */ r_esi = r_ebx;
    /* 00816351: mov ecx, edx */ r_ecx = r_edx;
    /* 00816353: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00816356: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00816359: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081635b: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0081635e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00816360: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00816362: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00816364: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00816366: mov byte ptr [esp + 0xd], bl */ W8((u32)(r_esp+0xdu), (u8)r_ebx);
    /* 0081636a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081636c: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_00816372:; BB(0x00816372);
    /* 00816372: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816377: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816379: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0081637e: mov esi, ecx */ r_esi = r_ecx;
    /* 00816380: mov ebx, edx */ r_ebx = r_edx;
    /* 00816382: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816385: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00816388: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0081638a: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0081638d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081638f: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00816391: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00816393: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816395: mov byte ptr [esp + 0xe], cl */ W8((u32)(r_esp+0xeu), (u8)r_ecx);
    /* 00816399: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081639b: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_008163a1:; BB(0x008163a1);
    /* 008163a1: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008163a6: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008163a8: mov ebp, 3 */ r_ebp = 0x3u;
    /* 008163ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008163af: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008163b2: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008163b5: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008163b7: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 008163ba: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008163be: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008163c0: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008163c2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008163c4: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008163c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008163c8: mov byte ptr [esp + 0xf], bl */ W8((u32)(r_esp+0xfu), (u8)r_ebx);
    /* 008163cc: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_008163d2:; BB(0x008163d2);
    /* 008163d2: mov ecx, edx */ r_ecx = r_edx;
    /* 008163d4: mov ebx, edx */ r_ebx = r_edx;
    /* 008163d6: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008163db: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008163dd: mov ebp, 4 */ r_ebp = 0x4u;
    /* 008163e2: mov eax, ecx */ r_eax = r_ecx;
    /* 008163e4: mov ecx, edx */ r_ecx = r_edx;
    /* 008163e6: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008163e9: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008163ec: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008163ee: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 008163f1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008163f3: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008163f5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008163f7: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008163f9: mov byte ptr [esp + 0x10], al */ W8((u32)(r_esp+0x10u), (u8)r_eax);
    /* 008163fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008163ff: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_00816405:; BB(0x00816405);
    /* 00816405: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0081640a: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0081640c: mov ebp, 5 */ r_ebp = 0x5u;
    /* 00816411: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00816413: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00816416: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816419: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0081641b: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0081641e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00816422: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816424: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816426: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816428: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081642a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081642c: mov byte ptr [esp + 0x11], cl */ W8((u32)(r_esp+0x11u), (u8)r_ecx);
    /* 00816430: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_00816436:; BB(0x00816436);
    /* 00816436: mov ecx, edx */ r_ecx = r_edx;
    /* 00816438: mov ebx, edx */ r_ebx = r_edx;
    /* 0081643a: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0081643f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816441: mov ebp, 6 */ r_ebp = 0x6u;
    /* 00816446: mov eax, ecx */ r_eax = r_ecx;
    /* 00816448: mov ecx, edx */ r_ecx = r_edx;
    /* 0081644a: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0081644d: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816450: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816452: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00816455: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816457: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816459: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081645b: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0081645d: mov byte ptr [esp + 0x12], al */ W8((u32)(r_esp+0x12u), (u8)r_eax);
    /* 00816461: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816463: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_00816469:; BB(0x00816469);
    /* 00816469: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0081646e: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816470: mov ebp, 7 */ r_ebp = 0x7u;
    /* 00816475: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00816477: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0081647a: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0081647d: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0081647f: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00816482: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00816486: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816488: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081648a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081648c: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081648e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816490: mov byte ptr [esp + 0x13], cl */ W8((u32)(r_esp+0x13u), (u8)r_ecx);
    /* 00816494: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_0081649a:; BB(0x0081649a);
    /* 0081649a: mov ecx, edx */ r_ecx = r_edx;
    /* 0081649c: mov ebx, edx */ r_ebx = r_edx;
    /* 0081649e: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008164a3: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008164a5: mov ebp, 8 */ r_ebp = 0x8u;
    /* 008164aa: mov eax, ecx */ r_eax = r_ecx;
    /* 008164ac: mov ecx, edx */ r_ecx = r_edx;
    /* 008164ae: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008164b1: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008164b4: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008164b6: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 008164b9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008164bb: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008164bd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008164bf: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008164c1: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 008164c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008164c7: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_008164cd:; BB(0x008164cd);
    /* 008164cd: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008164d2: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008164d4: mov ebp, 9 */ r_ebp = 0x9u;
    /* 008164d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008164db: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008164de: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008164e1: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008164e3: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 008164e6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008164ea: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008164ec: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008164ee: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008164f0: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008164f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008164f4: mov byte ptr [esp + 0x15], cl */ W8((u32)(r_esp+0x15u), (u8)r_ecx);
    /* 008164f8: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_008164fe:; BB(0x008164fe);
    /* 008164fe: mov ecx, edx */ r_ecx = r_edx;
    /* 00816500: mov ebx, edx */ r_ebx = r_edx;
    /* 00816502: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816507: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816509: mov ebp, 0xa */ r_ebp = 0xau;
    /* 0081650e: mov eax, ecx */ r_eax = r_ecx;
    /* 00816510: mov ecx, edx */ r_ecx = r_edx;
    /* 00816512: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00816515: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816518: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081651a: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0081651d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081651f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816521: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816523: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00816525: mov byte ptr [esp + 0x16], al */ W8((u32)(r_esp+0x16u), (u8)r_eax);
    /* 00816529: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081652b: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_00816531:; BB(0x00816531);
    /* 00816531: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816536: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816538: mov ebp, 0xb */ r_ebp = 0xbu;
    /* 0081653d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0081653f: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00816542: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816545: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00816547: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0081654a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0081654e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816550: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816552: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816554: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816556: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816558: mov byte ptr [esp + 0x17], cl */ W8((u32)(r_esp+0x17u), (u8)r_ecx);
    /* 0081655c: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_00816562:; BB(0x00816562);
    /* 00816562: mov ecx, edx */ r_ecx = r_edx;
    /* 00816564: mov ebx, edx */ r_ebx = r_edx;
    /* 00816566: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0081656b: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0081656d: mov ebp, 0xc */ r_ebp = 0xcu;
    /* 00816572: mov eax, ecx */ r_eax = r_ecx;
    /* 00816574: mov ecx, edx */ r_ecx = r_edx;
    /* 00816576: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00816579: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0081657c: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081657e: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00816581: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816583: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816585: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816587: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00816589: mov byte ptr [esp + 0x18], al */ W8((u32)(r_esp+0x18u), (u8)r_eax);
    /* 0081658d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081658f: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_00816595:; BB(0x00816595);
    /* 00816595: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0081659a: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0081659c: mov ebp, 0xd */ r_ebp = 0xdu;
    /* 008165a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008165a3: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008165a6: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008165a9: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008165ab: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 008165ae: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008165b2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008165b4: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008165b6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008165b8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008165ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008165bc: mov byte ptr [esp + 0x19], cl */ W8((u32)(r_esp+0x19u), (u8)r_ecx);
    /* 008165c0: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_008165c2:; BB(0x008165c2);
    /* 008165c2: mov ecx, edx */ r_ecx = r_edx;
    /* 008165c4: mov ebx, edx */ r_ebx = r_edx;
    /* 008165c6: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008165cb: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008165cd: mov ebp, 0xe */ r_ebp = 0xeu;
    /* 008165d2: mov eax, ecx */ r_eax = r_ecx;
    /* 008165d4: mov ecx, edx */ r_ecx = r_edx;
    /* 008165d6: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008165d9: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008165dc: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008165de: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 008165e1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008165e3: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008165e5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008165e7: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008165e9: mov byte ptr [esp + 0x1a], al */ W8((u32)(r_esp+0x1au), (u8)r_eax);
    /* 008165ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008165ef: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_008165f1:; BB(0x008165f1);
    /* 008165f1: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008165f6: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008165f8: mov ebp, 0xf */ r_ebp = 0xfu;
    /* 008165fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008165ff: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00816602: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816605: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00816607: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0081660a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081660c: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081660e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816610: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816612: mov byte ptr [esp + 0x1b], cl */ W8((u32)(r_esp+0x1bu), (u8)r_ecx);
    /* 00816616: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816618: jle 0x81661f */ if ((fZ||fS!=fO)) goto L_0081661f;
L_0081661a:; BB(0x0081661a);
    /* 0081661a: mov ebp, 0x10 */ r_ebp = 0x10u;
L_0081661f:; BB(0x0081661f);
    /* 0081661f: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816622: jb 0x816629 */ if (fC) goto L_00816629;
L_00816624:; BB(0x00816624);
    /* 00816624: mov ebp, 0xf */ r_ebp = 0xfu;
L_00816629:; BB(0x00816629);
    /* 00816629: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0081662b: mov eax, ebp */ r_eax = r_ebp;
    /* 0081662d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00816630: je 0x816659 */ if (fZ) goto L_00816659;
L_00816632:; BB(0x00816632);
    /* 00816632: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00816636: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00816639: mov byte ptr [esp + 0xc], cl */ W8((u32)(r_esp+0xcu), (u8)r_ecx);
L_0081663d:; BB(0x0081663d);
    /* 0081663d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0081663f: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816641: movzx ebx, byte ptr [esp + ecx + 0xc] */ r_ebx = (u32)R8((u32)(r_esp+r_ecx+0xcu));
    /* 00816646: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00816649: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0081664c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081664f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816652: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816654: jb 0x81663d */ if (fC) goto L_0081663d;
L_00816656:; BB(0x00816656);
    /* 00816656: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_00816659:; BB(0x00816659);
    /* 00816659: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0081665c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0081665e: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00816661: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816664: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816665: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00816666: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00816667: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00816668: ret  */ FN_RET(0x008162d8); r_esp += 4; return;
L_00816669:; BB(0x00816669);
    /* 00816669: mov edx, 0x30 */ r_edx = 0x30u;
    /* 0081666e: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00816671: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 00816674: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00816676: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 0081667a: mov eax, edx */ r_eax = r_edx;
    /* 0081667c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081667f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816680: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00816681: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00816682: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00816683: ret  */ FN_RET(0x008162d8); r_esp += 4; return;
}

void f_00816684(void) /* sub_816684 */
{
    FN_ENTER(0x00816684);
    /* 00816684: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00816685: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00816688: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0081668c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081668e: movzx ebx, byte ptr [esp + 0x30] */ r_ebx = (u32)R8((u32)(r_esp+0x30u));
    /* 00816693: jne 0x81674f */ if (!fZ) goto L_0081674f;
L_00816699:; BB(0x00816699);
    /* 00816699: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081669b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0081669d: jbe 0x81673f */ if ((fC||fZ)) goto L_0081673f;
L_008166a3:; BB(0x008166a3);
    /* 008166a3: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008166a6: jb 0x816721 */ if (fC) goto L_00816721;
L_008166a8:; BB(0x008166a8);
    /* 008166a8: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 008166ac: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008166b0: lea ecx, [ebx - 6] */ r_ecx = (u32)(r_ebx+0xfffffffau);
L_008166b3:; BB(0x008166b3);
    /* 008166b3: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 008166b9: lea edi, [esi + 2] */ r_edi = (u32)(r_esi+0x2u);
    /* 008166bc: mov dword ptr [0xac9f8c], edi */ W32((u32)(0xac9f8cu), r_edi);
    /* 008166c2: mov edx, 0x30 */ r_edx = 0x30u;
    /* 008166c7: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 008166ca: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 008166d0: lea edi, [esi + 2] */ r_edi = (u32)(r_esi+0x2u);
    /* 008166d3: mov dword ptr [0xac9f8c], edi */ W32((u32)(0xac9f8cu), r_edi);
    /* 008166d9: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 008166dc: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008166df: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008166e1: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 008166e7: lea edi, [esi + 2] */ r_edi = (u32)(r_esi+0x2u);
    /* 008166ea: mov dword ptr [0xac9f8c], edi */ W32((u32)(0xac9f8cu), r_edi);
    /* 008166f0: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 008166f3: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 008166f9: lea edi, [esi + 2] */ r_edi = (u32)(r_esi+0x2u);
    /* 008166fc: mov dword ptr [0xac9f8c], edi */ W32((u32)(0xac9f8cu), r_edi);
    /* 00816702: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 00816705: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 0081670b: lea edi, [esi + 2] */ r_edi = (u32)(r_esi+0x2u);
    /* 0081670e: mov dword ptr [0xac9f8c], edi */ W32((u32)(0xac9f8cu), r_edi);
    /* 00816714: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 00816717: jbe 0x8166b3 */ if ((fC||fZ)) goto L_008166b3;
L_00816719:; BB(0x00816719);
    /* 00816719: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0081671d: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00816721:; BB(0x00816721);
    /* 00816721: mov edx, dword ptr [0xac9f8c] */ r_edx = R32((u32)(0xac9f8cu));
    /* 00816727: lea ecx, [edx + 2] */ r_ecx = (u32)(r_edx+0x2u);
    /* 0081672a: mov dword ptr [0xac9f8c], ecx */ W32((u32)(0xac9f8cu), r_ecx);
    /* 00816730: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 00816735: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00816738: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081673b: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0081673d: jb 0x816721 */ if (fC) goto L_00816721;
L_0081673f:; BB(0x0081673f);
    /* 0081673f: mov edx, dword ptr [0xac9f8c] */ r_edx = R32((u32)(0xac9f8cu));
    /* 00816745: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816747: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0081674a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081674d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081674e: ret  */ FN_RET(0x00816684); r_esp += 4; return;
L_0081674f:; BB(0x0081674f);
    /* 0081674f: jge 0x816769 */ if ((fS==fO)) goto L_00816769;
L_00816751:; BB(0x00816751);
    /* 00816751: mov eax, dword ptr [0xac9f8c] */ r_eax = R32((u32)(0xac9f8cu));
    /* 00816756: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 00816759: mov dword ptr [0xac9f8c], ecx */ W32((u32)(0xac9f8cu), r_ecx);
    /* 0081675f: mov ecx, 0x2d */ r_ecx = 0x2du;
    /* 00816764: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00816767: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_00816769:; BB(0x00816769);
    /* 00816769: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0081676b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0081676d: jbe 0x81689a */ if ((fC||fZ)) goto L_0081689a;
L_00816773:; BB(0x00816773);
    /* 00816773: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816776: jb 0x816865 */ if (fC) goto L_00816865;
L_0081677c:; BB(0x0081677c);
    /* 0081677c: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00816780: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00816784: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00816787: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
    /* 0081678a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0081678e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00816790: mov ecx, edx */ r_ecx = r_edx;
L_00816792:; BB(0x00816792);
    /* 00816792: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816797: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816799: mov esi, ecx */ r_esi = r_ecx;
    /* 0081679b: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008167a0: mov ebx, edx */ r_ebx = r_edx;
    /* 008167a2: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008167a5: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008167a8: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008167aa: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008167ac: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 008167af: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008167b1: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008167b3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008167b5: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008167b7: mov byte ptr [esp + ebp + 0x14], cl */ W8((u32)(r_esp+r_ebp+0x14u), (u8)r_ecx);
    /* 008167bb: mov ecx, edx */ r_ecx = r_edx;
    /* 008167bd: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008167c0: mov eax, ebx */ r_eax = r_ebx;
    /* 008167c2: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008167c5: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008167c7: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 008167ca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008167cc: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008167ce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008167d0: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008167d2: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008167d7: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008167d9: mov eax, ecx */ r_eax = r_ecx;
    /* 008167db: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008167de: mov byte ptr [esp + ebp + 0x15], bl */ W8((u32)(r_esp+r_ebp+0x15u), (u8)r_ebx);
    /* 008167e2: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008167e5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008167e7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008167ea: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008167ee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008167f0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008167f2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008167f4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008167f6: mov byte ptr [esp + ebp + 0x16], cl */ W8((u32)(r_esp+r_ebp+0x16u), (u8)r_ecx);
    /* 008167fa: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008167ff: imul edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816801: mov ebx, edx */ r_ebx = r_edx;
    /* 00816803: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816806: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0081680a: mov edx, eax */ r_edx = r_eax;
    /* 0081680c: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0081680f: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00816811: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00816814: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816816: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816818: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081681a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0081681c: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816821: mov byte ptr [esp + ebp + 0x17], dl */ W8((u32)(r_esp+r_ebp+0x17u), (u8)r_edx);
    /* 00816825: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816827: mov eax, ebx */ r_eax = r_ebx;
    /* 00816829: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0081682c: mov ecx, edx */ r_ecx = r_edx;
    /* 0081682e: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00816831: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816833: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00816836: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816838: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081683a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081683c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0081683e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00816842: mov byte ptr [esp + ebp + 0x18], bl */ W8((u32)(r_esp+r_ebp+0x18u), (u8)r_ebx);
    /* 00816846: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00816849: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0081684b: jbe 0x816792 */ if ((fC||fZ)) goto L_00816792;
L_00816851:; BB(0x00816851);
    /* 00816851: movzx ebx, byte ptr [esp + 0x30] */ r_ebx = (u32)R8((u32)(r_esp+0x30u));
    /* 00816856: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0081685a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0081685e: mov edx, ecx */ r_edx = r_ecx;
    /* 00816860: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00816862: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00816865:; BB(0x00816865);
    /* 00816865: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00816869: mov esi, ebx */ r_esi = r_ebx;
L_0081686b:; BB(0x0081686b);
    /* 0081686b: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816870: mov ebx, edx */ r_ebx = r_edx;
    /* 00816872: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816874: mov eax, ebx */ r_eax = r_ebx;
    /* 00816876: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816879: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0081687c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0081687e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00816881: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816883: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816885: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816887: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00816889: mov byte ptr [esp + ecx + 0x14], bl */ W8((u32)(r_esp+r_ecx+0x14u), (u8)r_ebx);
    /* 0081688d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816890: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816892: jb 0x81686b */ if (fC) goto L_0081686b;
L_00816894:; BB(0x00816894);
    /* 00816894: mov ebx, esi */ r_ebx = r_esi;
    /* 00816896: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_0081689a:; BB(0x0081689a);
    /* 0081689a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0081689c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0081689e: jbe 0x816983 */ if ((fC||fZ)) goto L_00816983;
L_008168a4:; BB(0x008168a4);
    /* 008168a4: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008168a7: jb 0x816956 */ if (fC) goto L_00816956;
L_008168ad:; BB(0x008168ad);
    /* 008168ad: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 008168b1: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008168b5: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 008168b8: lea edx, [ebx - 6] */ r_edx = (u32)(r_ebx+0xfffffffau);
L_008168bb:; BB(0x008168bb);
    /* 008168bb: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 008168c1: mov eax, ebx */ r_eax = r_ebx;
    /* 008168c3: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008168c5: movzx edi, byte ptr [esp + eax + 0x13] */ r_edi = (u32)R8((u32)(r_esp+r_eax+0x13u));
    /* 008168ca: add edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008168cd: lea ebp, [esi + 2] */ r_ebp = (u32)(r_esi+0x2u);
    /* 008168d0: mov dword ptr [0xac9f8c], ebp */ W32((u32)(0xac9f8cu), r_ebp);
    /* 008168d6: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 008168d9: movzx edi, byte ptr [esp + eax + 0x12] */ r_edi = (u32)R8((u32)(r_esp+r_eax+0x12u));
    /* 008168de: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 008168e4: add edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008168e7: lea ebp, [esi + 2] */ r_ebp = (u32)(r_esi+0x2u);
    /* 008168ea: mov dword ptr [0xac9f8c], ebp */ W32((u32)(0xac9f8cu), r_ebp);
    /* 008168f0: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 008168f3: movzx edi, byte ptr [esp + eax + 0x11] */ r_edi = (u32)R8((u32)(r_esp+r_eax+0x11u));
    /* 008168f8: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 008168fe: add edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00816901: lea ebp, [esi + 2] */ r_ebp = (u32)(r_esi+0x2u);
    /* 00816904: mov dword ptr [0xac9f8c], ebp */ W32((u32)(0xac9f8cu), r_ebp);
    /* 0081690a: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 0081690d: movzx edi, byte ptr [esp + eax + 0x10] */ r_edi = (u32)R8((u32)(r_esp+r_eax+0x10u));
    /* 00816912: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 00816918: add edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081691b: lea ebp, [esi + 2] */ r_ebp = (u32)(r_esi+0x2u);
    /* 0081691e: mov dword ptr [0xac9f8c], ebp */ W32((u32)(0xac9f8cu), r_ebp);
    /* 00816924: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 00816927: movzx ebp, byte ptr [esp + eax + 0xf] */ r_ebp = (u32)R8((u32)(r_esp+r_eax+0xfu));
    /* 0081692c: mov edi, dword ptr [0xac9f8c] */ r_edi = R32((u32)(0xac9f8cu));
    /* 00816932: add ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00816935: lea eax, [edi + 2] */ r_eax = (u32)(r_edi+0x2u);
    /* 00816938: mov dword ptr [0xac9f8c], eax */ W32((u32)(0xac9f8cu), r_eax);
    /* 0081693d: mov word ptr [edi], bp */ W16((u32)(r_edi), (u16)r_ebp);
    /* 00816940: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816943: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00816945: jbe 0x8168bb */ if ((fC||fZ)) goto L_008168bb;
L_0081694b:; BB(0x0081694b);
    /* 0081694b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0081694f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00816953: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00816956:; BB(0x00816956);
    /* 00816956: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
L_0081695a:; BB(0x0081695a);
    /* 0081695a: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 00816960: mov eax, ebx */ r_eax = r_ebx;
    /* 00816962: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00816964: movzx eax, byte ptr [esp + eax + 0x13] */ r_eax = (u32)R8((u32)(r_esp+r_eax+0x13u));
    /* 00816969: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081696c: lea edx, [esi + 2] */ r_edx = (u32)(r_esi+0x2u);
    /* 0081696f: mov dword ptr [0xac9f8c], edx */ W32((u32)(0xac9f8cu), r_edx);
    /* 00816975: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00816978: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081697b: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0081697d: jb 0x81695a */ if (fC) goto L_0081695a;
L_0081697f:; BB(0x0081697f);
    /* 0081697f: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_00816983:; BB(0x00816983);
    /* 00816983: mov edx, dword ptr [0xac9f8c] */ r_edx = R32((u32)(0xac9f8cu));
    /* 00816989: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081698b: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0081698e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816991: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816992: ret  */ FN_RET(0x00816684); r_esp += 4; return;
}

void f_00816994(void) /* sub_816994 */
{
    FN_ENTER(0x00816994);
    /* 00816994: mov eax, dword ptr [0xac9f8c] */ r_eax = R32((u32)(0xac9f8cu));
    /* 00816999: mov edx, 0xac9d80 */ r_edx = 0xac9d80u;
    /* 0081699e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008169a0: je 0x8169bf */ if (fZ) goto L_008169bf;
L_008169a2:; BB(0x008169a2);
    /* 008169a2: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 008169a5: mov dword ptr [0xac9f8c], edx */ W32((u32)(0xac9f8cu), r_edx);
    /* 008169ab: mov ecx, 0x20 */ r_ecx = 0x20u;
    /* 008169b0: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 008169b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008169b5: mov edx, dword ptr [0xac9f8c] */ r_edx = R32((u32)(0xac9f8cu));
    /* 008169bb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 008169be: ret  */ FN_RET(0x00816994); r_esp += 4; return;
L_008169bf:; BB(0x008169bf);
    /* 008169bf: ret  */ FN_RET(0x00816994); r_esp += 4; return;
}

void f_008169c0(void) /* sub_8169C0 */
{
    FN_ENTER(0x008169c0);
    /* 008169c0: mov eax, dword ptr [0xac9f8c] */ r_eax = R32((u32)(0xac9f8cu));
    /* 008169c5: mov edx, 0xac9d80 */ r_edx = 0xac9d80u;
    /* 008169ca: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008169cc: je 0x8169eb */ if (fZ) goto L_008169eb;
L_008169ce:; BB(0x008169ce);
    /* 008169ce: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 008169d1: mov dword ptr [0xac9f8c], edx */ W32((u32)(0xac9f8cu), r_edx);
    /* 008169d7: mov ecx, 0x2c */ r_ecx = 0x2cu;
    /* 008169dc: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 008169df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008169e1: mov edx, dword ptr [0xac9f8c] */ r_edx = R32((u32)(0xac9f8cu));
    /* 008169e7: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 008169ea: ret  */ FN_RET(0x008169c0); r_esp += 4; return;
L_008169eb:; BB(0x008169eb);
    /* 008169eb: ret  */ FN_RET(0x008169c0); r_esp += 4; return;
}

void f_008169ec(void) /* sub_8169EC */
{
    FN_ENTER(0x008169ec);
    /* 008169ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008169ed: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008169f0: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 008169f4: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 008169f9: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 008169fb: shr edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008169fe: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00816a01: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a03: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a05: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a07: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a09: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a0b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a0d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a0f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a11: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a13: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a15: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a17: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a19: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a1b: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00816a1d: cmp edx, 0x63 */ {  u32 a = r_edx; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00816a20: jbe 0x816a31 */ if ((fC||fZ)) goto L_00816a31;
L_00816a22:; BB(0x00816a22);
    /* 00816a22: mov eax, 0x989670 */ r_eax = 0x989670u;
    /* 00816a27: call 0x816cbc */ r_esp -= 4; W32(r_esp, 0x816a2cu); f_00816cbc();
    /* 00816a2c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816a2f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816a30: ret  */ FN_RET(0x008169ec); r_esp += 4; return;
L_00816a31:; BB(0x00816a31);
    /* 00816a31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816a33: je 0x816acf */ if (fZ) goto L_00816acf;
L_00816a39:; BB(0x00816a39);
    /* 00816a39: jge 0x816a53 */ if ((fS==fO)) goto L_00816a53;
L_00816a3b:; BB(0x00816a3b);
    /* 00816a3b: mov eax, dword ptr [0xac9f8c] */ r_eax = R32((u32)(0xac9f8cu));
    /* 00816a40: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 00816a43: mov dword ptr [0xac9f8c], ecx */ W32((u32)(0xac9f8cu), r_ecx);
    /* 00816a49: mov ecx, 0x2d */ r_ecx = 0x2du;
    /* 00816a4e: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00816a51: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_00816a53:; BB(0x00816a53);
    /* 00816a53: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00816a57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816a59: mov esi, eax */ r_esi = r_eax;
L_00816a5b:; BB(0x00816a5b);
    /* 00816a5b: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816a60: mov ecx, edx */ r_ecx = r_edx;
    /* 00816a62: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816a64: mov eax, ecx */ r_eax = r_ecx;
    /* 00816a66: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816a69: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00816a6c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00816a6e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00816a71: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816a73: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816a75: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816a77: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a79: mov byte ptr [esp + esi + 4], cl */ W8((u32)(r_esp+r_esi+0x4u), (u8)r_ecx);
    /* 00816a7d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816a80: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816a83: jb 0x816a5b */ if (fC) goto L_00816a5b;
L_00816a85:; BB(0x00816a85);
    /* 00816a85: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00816a89: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00816a8d: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00816a91: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00816a93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00816a95:; BB(0x00816a95);
    /* 00816a95: movzx esi, byte ptr [esp + eax + 5] */ r_esi = (u32)R8((u32)(r_esp+r_eax+0x5u));
    /* 00816a9a: mov edx, dword ptr [0xac9f8c] */ r_edx = R32((u32)(0xac9f8cu));
    /* 00816aa0: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816aa3: lea ebp, [edx + 2] */ r_ebp = (u32)(r_edx+0x2u);
    /* 00816aa6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816aa9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816aac: mov dword ptr [0xac9f8c], ebp */ W32((u32)(0xac9f8cu), r_ebp);
    /* 00816ab2: mov word ptr [edx], si */ W16((u32)(r_edx), (u16)r_esi);
    /* 00816ab5: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816ab8: jb 0x816a95 */ if (fC) goto L_00816a95;
L_00816aba:; BB(0x00816aba);
    /* 00816aba: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00816abe: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00816ac2: mov ecx, dword ptr [0xac9f8c] */ r_ecx = R32((u32)(0xac9f8cu));
    /* 00816ac8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816aca: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00816acd: jmp 0x816afb */ goto L_00816afb;
L_00816acf:; BB(0x00816acf);
    /* 00816acf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00816ad1:; BB(0x00816ad1);
    /* 00816ad1: mov ecx, dword ptr [0xac9f8c] */ r_ecx = R32((u32)(0xac9f8cu));
    /* 00816ad7: lea edx, [ecx + 2] */ r_edx = (u32)(r_ecx+0x2u);
    /* 00816ada: mov dword ptr [0xac9f8c], edx */ W32((u32)(0xac9f8cu), r_edx);
    /* 00816ae0: mov edx, 0x30 */ r_edx = 0x30u;
    /* 00816ae5: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00816ae8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816aeb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816aee: jb 0x816ad1 */ if (fC) goto L_00816ad1;
L_00816af0:; BB(0x00816af0);
    /* 00816af0: mov ecx, dword ptr [0xac9f8c] */ r_ecx = R32((u32)(0xac9f8cu));
    /* 00816af6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816af8: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
L_00816afb:; BB(0x00816afb);
    /* 00816afb: mov eax, 0x974cc8 */ r_eax = 0x974cc8u;
    /* 00816b00: call 0x816cbc */ r_esp -= 4; W32(r_esp, 0x816b05u); f_00816cbc();
    /* 00816b05: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 00816b0a: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00816b0c: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00816b0f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00816b12: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816b14: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00816b17: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816b19: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816b1b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816b1d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00816b1f: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00816b21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816b23: je 0x816bbf */ if (fZ) goto L_00816bbf;
L_00816b29:; BB(0x00816b29);
    /* 00816b29: jge 0x816b43 */ if ((fS==fO)) goto L_00816b43;
L_00816b2b:; BB(0x00816b2b);
    /* 00816b2b: mov eax, dword ptr [0xac9f8c] */ r_eax = R32((u32)(0xac9f8cu));
    /* 00816b30: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 00816b33: mov dword ptr [0xac9f8c], ecx */ W32((u32)(0xac9f8cu), r_ecx);
    /* 00816b39: mov ecx, 0x2d */ r_ecx = 0x2du;
    /* 00816b3e: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00816b41: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_00816b43:; BB(0x00816b43);
    /* 00816b43: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00816b47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816b49: mov esi, eax */ r_esi = r_eax;
L_00816b4b:; BB(0x00816b4b);
    /* 00816b4b: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816b50: mov ecx, edx */ r_ecx = r_edx;
    /* 00816b52: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816b54: mov eax, ecx */ r_eax = r_ecx;
    /* 00816b56: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816b59: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00816b5c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00816b5e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00816b61: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816b63: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816b65: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816b67: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816b69: mov byte ptr [esp + esi + 4], cl */ W8((u32)(r_esp+r_esi+0x4u), (u8)r_ecx);
    /* 00816b6d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816b70: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816b73: jb 0x816b4b */ if (fC) goto L_00816b4b;
L_00816b75:; BB(0x00816b75);
    /* 00816b75: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00816b79: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00816b7d: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00816b81: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00816b83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00816b85:; BB(0x00816b85);
    /* 00816b85: movzx esi, byte ptr [esp + eax + 5] */ r_esi = (u32)R8((u32)(r_esp+r_eax+0x5u));
    /* 00816b8a: mov edx, dword ptr [0xac9f8c] */ r_edx = R32((u32)(0xac9f8cu));
    /* 00816b90: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816b93: lea ebp, [edx + 2] */ r_ebp = (u32)(r_edx+0x2u);
    /* 00816b96: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816b99: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00816b9c: mov dword ptr [0xac9f8c], ebp */ W32((u32)(0xac9f8cu), r_ebp);
    /* 00816ba2: mov word ptr [edx], si */ W16((u32)(r_edx), (u16)r_esi);
    /* 00816ba5: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816ba8: jb 0x816b85 */ if (fC) goto L_00816b85;
L_00816baa:; BB(0x00816baa);
    /* 00816baa: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00816bae: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00816bb2: mov ecx, dword ptr [0xac9f8c] */ r_ecx = R32((u32)(0xac9f8cu));
    /* 00816bb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816bba: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00816bbd: jmp 0x816beb */ goto L_00816beb;
L_00816bbf:; BB(0x00816bbf);
    /* 00816bbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00816bc1:; BB(0x00816bc1);
    /* 00816bc1: mov ecx, dword ptr [0xac9f8c] */ r_ecx = R32((u32)(0xac9f8cu));
    /* 00816bc7: lea edx, [ecx + 2] */ r_edx = (u32)(r_ecx+0x2u);
    /* 00816bca: mov dword ptr [0xac9f8c], edx */ W32((u32)(0xac9f8cu), r_edx);
    /* 00816bd0: mov edx, 0x30 */ r_edx = 0x30u;
    /* 00816bd5: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00816bd8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816bdb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816bde: jb 0x816bc1 */ if (fC) goto L_00816bc1;
L_00816be0:; BB(0x00816be0);
    /* 00816be0: mov ecx, dword ptr [0xac9f8c] */ r_ecx = R32((u32)(0xac9f8cu));
    /* 00816be6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816be8: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
L_00816beb:; BB(0x00816beb);
    /* 00816beb: mov eax, 0x974ccc */ r_eax = 0x974cccu;
    /* 00816bf0: call 0x816cbc */ r_esp -= 4; W32(r_esp, 0x816bf5u); f_00816cbc();
    /* 00816bf5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816bf7: je 0x816c85 */ if (fZ) goto L_00816c85;
L_00816bfd:; BB(0x00816bfd);
    /* 00816bfd: jge 0x816c17 */ if ((fS==fO)) goto L_00816c17;
L_00816bff:; BB(0x00816bff);
    /* 00816bff: mov edx, dword ptr [0xac9f8c] */ r_edx = R32((u32)(0xac9f8cu));
    /* 00816c05: lea eax, [edx + 2] */ r_eax = (u32)(r_edx+0x2u);
    /* 00816c08: mov dword ptr [0xac9f8c], eax */ W32((u32)(0xac9f8cu), r_eax);
    /* 00816c0d: mov ecx, 0x2d */ r_ecx = 0x2du;
    /* 00816c12: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00816c15: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_00816c17:; BB(0x00816c17);
    /* 00816c17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816c19: mov edx, ebx */ r_edx = r_ebx;
    /* 00816c1b: mov ebx, eax */ r_ebx = r_eax;
L_00816c1d:; BB(0x00816c1d);
    /* 00816c1d: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816c22: mov ecx, edx */ r_ecx = r_edx;
    /* 00816c24: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816c26: mov eax, ecx */ r_eax = r_ecx;
    /* 00816c28: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816c2b: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00816c2e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00816c30: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00816c33: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816c35: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816c37: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816c39: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816c3b: mov byte ptr [esp + ebx + 4], cl */ W8((u32)(r_esp+r_ebx+0x4u), (u8)r_ecx);
    /* 00816c3f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00816c42: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816c45: jb 0x816c1d */ if (fC) goto L_00816c1d;
L_00816c47:; BB(0x00816c47);
    /* 00816c47: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00816c4b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00816c4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00816c4f:; BB(0x00816c4f);
    /* 00816c4f: movzx ebx, byte ptr [esp + eax + 5] */ r_ebx = (u32)R8((u32)(r_esp+r_eax+0x5u));
    /* 00816c54: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 00816c5a: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00816c5d: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
    /* 00816c60: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816c63: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816c66: mov dword ptr [0xac9f8c], ecx */ W32((u32)(0xac9f8cu), r_ecx);
    /* 00816c6c: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 00816c6f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816c72: jb 0x816c4f */ if (fC) goto L_00816c4f;
L_00816c74:; BB(0x00816c74);
    /* 00816c74: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00816c78: mov edx, dword ptr [0xac9f8c] */ r_edx = R32((u32)(0xac9f8cu));
    /* 00816c7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816c80: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00816c83: jmp 0x816cb1 */ goto L_00816cb1;
L_00816c85:; BB(0x00816c85);
    /* 00816c85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00816c87:; BB(0x00816c87);
    /* 00816c87: mov ebx, dword ptr [0xac9f8c] */ r_ebx = R32((u32)(0xac9f8cu));
    /* 00816c8d: lea edx, [ebx + 2] */ r_edx = (u32)(r_ebx+0x2u);
    /* 00816c90: mov dword ptr [0xac9f8c], edx */ W32((u32)(0xac9f8cu), r_edx);
    /* 00816c96: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 00816c9b: mov word ptr [ebx], cx */ W16((u32)(r_ebx), (u16)r_ecx);
    /* 00816c9e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816ca1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00816ca4: jb 0x816c87 */ if (fC) goto L_00816c87;
L_00816ca6:; BB(0x00816ca6);
    /* 00816ca6: mov edx, dword ptr [0xac9f8c] */ r_edx = R32((u32)(0xac9f8cu));
    /* 00816cac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816cae: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
L_00816cb1:; BB(0x00816cb1);
    /* 00816cb1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816cb4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816cb5: ret  */ FN_RET(0x008169ec); r_esp += 4; return;
}

void f_00816cb8(void) /* sub_816CB8 */
{
    FN_ENTER(0x00816cb8);
    /* 00816cb8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00816cbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00816cbd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00816cbe: mov esi, eax */ r_esi = r_eax;
    /* 00816cc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00816cc1: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x816cc6u); f_00858009();
    /* 00816cc6: mov ebx, eax */ r_ebx = r_eax;
    /* 00816cc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00816cc9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00816cca: push dword ptr [0xac9f8c] */ { u32 v = R32((u32)(0xac9f8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00816cd0: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x816cd5u); f_00857dec();
    /* 00816cd5: mov ecx, dword ptr [0xac9f8c] */ r_ecx = R32((u32)(0xac9f8cu));
    /* 00816cdb: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00816cde: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00816ce0: mov word ptr [ecx + ebx*2], dx */ W16((u32)(r_ecx+r_ebx*2), (u16)r_edx);
    /* 00816ce4: add dword ptr [0xac9f8c], esi */ { u32 ad = (u32)(0xac9f8cu);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00816cea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816ced: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816cee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00816cef: ret  */ FN_RET(0x00816cb8); r_esp += 4; return;
}

void f_00816cbc(void) /* sub_816CBC */
{
    FN_ENTER(0x00816cbc);
    /* 00816cbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00816cbd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00816cbe: mov esi, eax */ r_esi = r_eax;
    /* 00816cc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00816cc1: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x816cc6u); f_00858009();
    /* 00816cc6: mov ebx, eax */ r_ebx = r_eax;
    /* 00816cc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00816cc9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00816cca: push dword ptr [0xac9f8c] */ { u32 v = R32((u32)(0xac9f8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00816cd0: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x816cd5u); f_00857dec();
    /* 00816cd5: mov ecx, dword ptr [0xac9f8c] */ r_ecx = R32((u32)(0xac9f8cu));
    /* 00816cdb: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00816cde: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00816ce0: mov word ptr [ecx + ebx*2], dx */ W16((u32)(r_ecx+r_ebx*2), (u16)r_edx);
    /* 00816ce4: add dword ptr [0xac9f8c], esi */ { u32 ad = (u32)(0xac9f8cu);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00816cea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816ced: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816cee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00816cef: ret  */ FN_RET(0x00816cbc); r_esp += 4; return;
}

void f_00816cf0(void) /* sub_816CF0 */
{
    FN_ENTER(0x00816cf0);
    /* 00816cf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00816cf1: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00816cf5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x816cfau); f_0068d5a8();
    /* 00816cfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00816cfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816cfd: je 0x816d0b */ if (fZ) goto L_00816d0b;
L_00816cff:; BB(0x00816cff);
    /* 00816cff: mov ecx, eax */ r_ecx = r_eax;
    /* 00816d01: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x816d06u); f_006936b4();
    /* 00816d06: call 0x816cbc */ r_esp -= 4; W32(r_esp, 0x816d0bu); f_00816cbc();
L_00816d0b:; BB(0x00816d0b);
    /* 00816d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00816d0c: ret  */ FN_RET(0x00816cf0); r_esp += 4; return;
}

void f_00816d10(void) /* sub_816D10 */
{
    FN_ENTER(0x00816d10);
    /* 00816d10: mov dword ptr [0xac9f80], 0x3f800000 */ W32((u32)(0xac9f80u), 0x3f800000u);
    /* 00816d1a: mov dword ptr [0xac9f84], 0x41000000 */ W32((u32)(0xac9f84u), 0x41000000u);
    /* 00816d24: mov dword ptr [0xac9f88], 0x3fc00000 */ W32((u32)(0xac9f88u), 0x3fc00000u);
    /* 00816d2e: ret  */ FN_RET(0x00816d10); r_esp += 4; return;
}

void f_00816d30(void) /* sub_816D30 */
{
    FN_ENTER(0x00816d30);
    /* 00816d30: mov edx, 0xac9d80 */ r_edx = 0xac9d80u;
    /* 00816d35: mov dword ptr [0xac9f8c], edx */ W32((u32)(0xac9f8cu), r_edx);
    /* 00816d3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816d3d: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00816d40: ret  */ FN_RET(0x00816d30); r_esp += 4; return;
}

void f_00816d44(void) /* sub_816D44 */
{
    FN_ENTER(0x00816d44);
    /* 00816d44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00816d45: mov ebp, esp */ r_ebp = r_esp;
    /* 00816d47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00816d49: push 0x8f74b0 */ { u32 v = 0x8f74b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00816d4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00816d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00816d55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00816d5c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00816d5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00816d62: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00816d65: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00816d68: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00816d6b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00816d6e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00816d71: mov eax, ecx */ r_eax = r_ecx;
    /* 00816d73: mov dword ptr [eax], 0xb47940 */ W32((u32)(r_eax), 0xb47940u);
    /* 00816d79: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00816d80: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x816d85u); f_008171e8();
    /* 00816d85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00816d88: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816d8a: jne 0x816d9c */ if (!fZ) goto L_00816d9c;
L_00816d8c:; BB(0x00816d8c);
    /* 00816d8c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00816d8f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00816d96: mov esp, ebp */ r_esp = r_ebp;
    /* 00816d98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00816d99: ret 4 */ FN_RET(0x00816d44); r_esp += 8; return;
L_00816d9c:; BB(0x00816d9c);
    /* 00816d9c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00816d9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00816da0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x816da5u); f_005c2f74();
    /* 00816da5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00816da6: jmp 0x816d8c */ goto L_00816d8c;
}

void f_00816da8(void) /* sub_816DA8 */
{
    FN_ENTER(0x00816da8);
    /* 00816da8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00816da9: mov edi, ecx */ r_edi = r_ecx;
    /* 00816dab: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00816daf: mov ecx, edi */ r_ecx = r_edi;
    /* 00816db1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x816db6u); f_008193cc();
    /* 00816db6: mov dword ptr [edi], 0xb47940 */ W32((u32)(r_edi), 0xb47940u);
    /* 00816dbc: mov edx, dword ptr [0xa16300] */ r_edx = R32((u32)(0xa16300u));
    /* 00816dc2: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00816dc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816dc7: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 00816dca: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00816dcd: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00816dd0: mov eax, edi */ r_eax = r_edi;
    /* 00816dd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00816dd3: ret 4 */ FN_RET(0x00816da8); r_esp += 8; return;
}

void f_00816dd8(void) /* sub_816DD8 */
{
    FN_ENTER(0x00816dd8);
    /* 00816dd8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00816ddb: movsx edx, word ptr [0xaafca0] */ r_edx = (u32)(i32)(i16)R16((u32)(0xaafca0u));
    /* 00816de2: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00816de7: call 0x816dfa */ r_esp -= 4; W32(r_esp, 0x816decu); f_00816dfa();
    /* 00816dec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816def: ret  */ FN_RET(0x00816dd8); r_esp += 4; return;
}

void f_00816df0(void) /* sub_816DF0 */
{
    FN_ENTER(0x00816df0);
    /* 00816df0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00816df5: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 00816dfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00816dfb: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00816dfe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816e00: jl 0x816e47 */ if ((fS!=fO)) goto L_00816e47;
L_00816e02:; BB(0x00816e02);
    /* 00816e02: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00816e05: jg 0x816e47 */ if ((!fZ&&fS==fO)) goto L_00816e47;
L_00816e07:; BB(0x00816e07);
    /* 00816e07: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00816e0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816e0c: jl 0x816e47 */ if ((fS!=fO)) goto L_00816e47;
L_00816e0e:; BB(0x00816e0e);
    /* 00816e0e: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00816e14: jg 0x816e47 */ if ((!fZ&&fS==fO)) goto L_00816e47;
L_00816e16:; BB(0x00816e16);
    /* 00816e16: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816e18: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816e1a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816e1d: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00816e20: mov eax, ecx */ r_eax = r_ecx;
    /* 00816e22: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816e25: shr eax, 0x1d */ { u32 c = (29u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00816e28: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816e2a: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816e2d: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00816e30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816e32: jle 0x816e49 */ if ((fZ||fS!=fO)) goto L_00816e49;
L_00816e34:; BB(0x00816e34);
    /* 00816e34: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816e36: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816e39: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00816e3e: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00816e40: or byte ptr [eax + edx*8 + 0xac9fa0], bl */ { u32 ad = (u32)(r_eax+r_edx*8+0xac9fa0u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00816e47:; BB(0x00816e47);
    /* 00816e47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816e48: ret  */ FN_RET(0x00816df0); r_esp += 4; return;
L_00816e49:; BB(0x00816e49);
    /* 00816e49: movzx ecx, byte ptr [eax + edx*8 + 0xac9f9f] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*8+0xac9f9fu));
    /* 00816e51: or ecx, 0xffffff01 */ {  u32 a = r_ecx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816e57: mov byte ptr [eax + edx*8 + 0xac9f9f], cl */ W8((u32)(r_eax+r_edx*8+0xac9f9fu), (u8)r_ecx);
    /* 00816e5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816e5f: ret  */ FN_RET(0x00816df0); r_esp += 4; return;
}

void f_00816dfa(void)
{
    FN_ENTER(0x00816dfa);
    /* 00816dfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00816dfb: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00816dfe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816e00: jl 0x816e47 */ if ((fS!=fO)) goto L_00816e47;
L_00816e02:; BB(0x00816e02);
    /* 00816e02: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00816e05: jg 0x816e47 */ if ((!fZ&&fS==fO)) goto L_00816e47;
L_00816e07:; BB(0x00816e07);
    /* 00816e07: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00816e0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816e0c: jl 0x816e47 */ if ((fS!=fO)) goto L_00816e47;
L_00816e0e:; BB(0x00816e0e);
    /* 00816e0e: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00816e14: jg 0x816e47 */ if ((!fZ&&fS==fO)) goto L_00816e47;
L_00816e16:; BB(0x00816e16);
    /* 00816e16: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816e18: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816e1a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816e1d: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00816e20: mov eax, ecx */ r_eax = r_ecx;
    /* 00816e22: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816e25: shr eax, 0x1d */ { u32 c = (29u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00816e28: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816e2a: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816e2d: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00816e30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816e32: jle 0x816e49 */ if ((fZ||fS!=fO)) goto L_00816e49;
L_00816e34:; BB(0x00816e34);
    /* 00816e34: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816e36: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816e39: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00816e3e: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00816e40: or byte ptr [eax + edx*8 + 0xac9fa0], bl */ { u32 ad = (u32)(r_eax+r_edx*8+0xac9fa0u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00816e47:; BB(0x00816e47);
    /* 00816e47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816e48: ret  */ FN_RET(0x00816dfa); r_esp += 4; return;
L_00816e49:; BB(0x00816e49);
    /* 00816e49: movzx ecx, byte ptr [eax + edx*8 + 0xac9f9f] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*8+0xac9f9fu));
    /* 00816e51: or ecx, 0xffffff01 */ {  u32 a = r_ecx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816e57: mov byte ptr [eax + edx*8 + 0xac9f9f], cl */ W8((u32)(r_eax+r_edx*8+0xac9f9fu), (u8)r_ecx);
    /* 00816e5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816e5f: ret  */ FN_RET(0x00816dfa); r_esp += 4; return;
}

void f_00816e60(void) /* sub_816E60 */
{
    FN_ENTER(0x00816e60);
    /* 00816e60: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00816e63: movsx edx, word ptr [0xaafca0] */ r_edx = (u32)(i32)(i16)R16((u32)(0xaafca0u));
    /* 00816e6a: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00816e6f: call 0x816e82 */ r_esp -= 4; W32(r_esp, 0x816e74u); f_00816e82();
    /* 00816e74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816e77: ret  */ FN_RET(0x00816e60); r_esp += 4; return;
}

void f_00816e78(void) /* sub_816E78 */
{
    FN_ENTER(0x00816e78);
    /* 00816e78: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00816e7d: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 00816e82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00816e83: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00816e86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816e88: jl 0x816ee8 */ if ((fS!=fO)) goto L_00816ee8;
L_00816e8a:; BB(0x00816e8a);
    /* 00816e8a: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00816e8d: jg 0x816ee8 */ if ((!fZ&&fS==fO)) goto L_00816ee8;
L_00816e8f:; BB(0x00816e8f);
    /* 00816e8f: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00816e92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816e94: jl 0x816ee8 */ if ((fS!=fO)) goto L_00816ee8;
L_00816e96:; BB(0x00816e96);
    /* 00816e96: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00816e9c: jg 0x816ee8 */ if ((!fZ&&fS==fO)) goto L_00816ee8;
L_00816e9e:; BB(0x00816e9e);
    /* 00816e9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816ea0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816ea2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816ea5: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00816ea8: mov eax, ecx */ r_eax = r_ecx;
    /* 00816eaa: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816ead: shr eax, 0x1d */ { u32 c = (29u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00816eb0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816eb2: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816eb5: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00816eb8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00816eba: je 0x816ed3 */ if (fZ) goto L_00816ed3;
L_00816ebc:; BB(0x00816ebc);
    /* 00816ebc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816ebe: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816ec1: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00816ec6: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00816ec8: not ebx */ r_ebx = ~r_ebx;
    /* 00816eca: and byte ptr [eax + edx*8 + 0xac9fa0], bl */ { u32 ad = (u32)(r_eax+r_edx*8+0xac9fa0u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816ed1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816ed2: ret  */ FN_RET(0x00816e78); r_esp += 4; return;
L_00816ed3:; BB(0x00816ed3);
    /* 00816ed3: movzx ecx, byte ptr [eax + edx*8 + 0xac9f9f] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*8+0xac9f9fu));
    /* 00816edb: and ecx, 0xfe */ {  u32 a = r_ecx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816ee1: mov byte ptr [eax + edx*8 + 0xac9f9f], cl */ W8((u32)(r_eax+r_edx*8+0xac9f9fu), (u8)r_ecx);
L_00816ee8:; BB(0x00816ee8);
    /* 00816ee8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816ee9: ret  */ FN_RET(0x00816e78); r_esp += 4; return;
}

void f_00816e82(void)
{
    FN_ENTER(0x00816e82);
    /* 00816e82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00816e83: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00816e86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816e88: jl 0x816ee8 */ if ((fS!=fO)) goto L_00816ee8;
L_00816e8a:; BB(0x00816e8a);
    /* 00816e8a: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00816e8d: jg 0x816ee8 */ if ((!fZ&&fS==fO)) goto L_00816ee8;
L_00816e8f:; BB(0x00816e8f);
    /* 00816e8f: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00816e92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816e94: jl 0x816ee8 */ if ((fS!=fO)) goto L_00816ee8;
L_00816e96:; BB(0x00816e96);
    /* 00816e96: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00816e9c: jg 0x816ee8 */ if ((!fZ&&fS==fO)) goto L_00816ee8;
L_00816e9e:; BB(0x00816e9e);
    /* 00816e9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816ea0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816ea2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816ea5: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00816ea8: mov eax, ecx */ r_eax = r_ecx;
    /* 00816eaa: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816ead: shr eax, 0x1d */ { u32 c = (29u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00816eb0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816eb2: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00816eb5: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00816eb8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00816eba: je 0x816ed3 */ if (fZ) goto L_00816ed3;
L_00816ebc:; BB(0x00816ebc);
    /* 00816ebc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816ebe: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816ec1: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00816ec6: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00816ec8: not ebx */ r_ebx = ~r_ebx;
    /* 00816eca: and byte ptr [eax + edx*8 + 0xac9fa0], bl */ { u32 ad = (u32)(r_eax+r_edx*8+0xac9fa0u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816ed1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816ed2: ret  */ FN_RET(0x00816e82); r_esp += 4; return;
L_00816ed3:; BB(0x00816ed3);
    /* 00816ed3: movzx ecx, byte ptr [eax + edx*8 + 0xac9f9f] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*8+0xac9f9fu));
    /* 00816edb: and ecx, 0xfe */ {  u32 a = r_ecx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816ee1: mov byte ptr [eax + edx*8 + 0xac9f9f], cl */ W8((u32)(r_eax+r_edx*8+0xac9f9fu), (u8)r_ecx);
L_00816ee8:; BB(0x00816ee8);
    /* 00816ee8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00816ee9: ret  */ FN_RET(0x00816e82); r_esp += 4; return;
}

void f_00816eec(void) /* sub_816EEC */
{
    FN_ENTER(0x00816eec);
    /* 00816eec: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00816eef: movsx edx, word ptr [0xaafca0] */ r_edx = (u32)(i32)(i16)R16((u32)(0xaafca0u));
    /* 00816ef6: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00816efb: call 0x816f0e */ r_esp -= 4; W32(r_esp, 0x816f00u); f_00816f0e();
    /* 00816f00: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816f03: ret  */ FN_RET(0x00816eec); r_esp += 4; return;
}

void f_00816f04(void) /* sub_816F04 */
{
    FN_ENTER(0x00816f04);
    /* 00816f04: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00816f09: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 00816f0e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00816f11: call 0x816f36 */ r_esp -= 4; W32(r_esp, 0x816f16u); f_00816f36();
    /* 00816f16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00816f18: je 0x816f23 */ if (fZ) goto L_00816f23;
L_00816f1a:; BB(0x00816f1a);
    /* 00816f1a: mov eax, 1 */ r_eax = 0x1u;
    /* 00816f1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816f22: ret  */ FN_RET(0x00816f04); r_esp += 4; return;
L_00816f23:; BB(0x00816f23);
    /* 00816f23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816f25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816f28: ret  */ FN_RET(0x00816f04); r_esp += 4; return;
}

void f_00816f0e(void) /* sub_816F0E */
{
    FN_ENTER(0x00816f0e);
    /* 00816f0e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00816f11: call 0x816f36 */ r_esp -= 4; W32(r_esp, 0x816f16u); f_00816f36();
    /* 00816f16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00816f18: je 0x816f23 */ if (fZ) goto L_00816f23;
L_00816f1a:; BB(0x00816f1a);
    /* 00816f1a: mov eax, 1 */ r_eax = 0x1u;
    /* 00816f1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816f22: ret  */ FN_RET(0x00816f0e); r_esp += 4; return;
L_00816f23:; BB(0x00816f23);
    /* 00816f23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00816f25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816f28: ret  */ FN_RET(0x00816f0e); r_esp += 4; return;
}

void f_00816f36(void) /* sub_816F36 */
{
    FN_ENTER(0x00816f36);
    /* 00816f36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00816f37: mov esi, eax */ r_esi = r_eax;
    /* 00816f39: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00816f3c: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00816f42: je 0x816f9b */ if (fZ) goto L_00816f9b;
L_00816f44:; BB(0x00816f44);
    /* 00816f44: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00816f47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816f49: jl 0x816f94 */ if ((fS!=fO)) goto L_00816f94;
L_00816f4b:; BB(0x00816f4b);
    /* 00816f4b: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00816f4e: jg 0x816f94 */ if ((!fZ&&fS==fO)) goto L_00816f94;
L_00816f50:; BB(0x00816f50);
    /* 00816f50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816f52: jl 0x816f94 */ if ((fS!=fO)) goto L_00816f94;
L_00816f54:; BB(0x00816f54);
    /* 00816f54: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00816f5a: jg 0x816f94 */ if ((!fZ&&fS==fO)) goto L_00816f94;
L_00816f5c:; BB(0x00816f5c);
    /* 00816f5c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816f5e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00816f60: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816f63: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00816f66: mov edx, ecx */ r_edx = r_ecx;
    /* 00816f68: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00816f6b: shr edx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00816f6e: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00816f70: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00816f73: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00816f76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816f78: jle 0x816f9f */ if ((fZ||fS!=fO)) goto L_00816f9f;
L_00816f7a:; BB(0x00816f7a);
    /* 00816f7a: movzx eax, byte ptr [edx + eax*8 + 0xac9fa0] */ r_eax = (u32)R8((u32)(r_edx+r_eax*8+0xac9fa0u));
    /* 00816f82: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816f84: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816f87: mov edx, 1 */ r_edx = 0x1u;
    /* 00816f8c: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00816f8e: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816f90: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00816f92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00816f93: ret  */ FN_RET(0x00816f36); r_esp += 4; return;
L_00816f94:; BB(0x00816f94);
    /* 00816f94: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00816f99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00816f9a: ret  */ FN_RET(0x00816f36); r_esp += 4; return;
L_00816f9b:; BB(0x00816f9b);
    /* 00816f9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816f9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00816f9e: ret  */ FN_RET(0x00816f36); r_esp += 4; return;
L_00816f9f:; BB(0x00816f9f);
    /* 00816f9f: movzx eax, byte ptr [edx + eax*8 + 0xac9f9f] */ r_eax = (u32)R8((u32)(r_edx+r_eax*8+0xac9f9fu));
    /* 00816fa7: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00816faa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00816fab: ret  */ FN_RET(0x00816f36); r_esp += 4; return;
}

void f_00816fac(void) /* sub_816FAC */
{
    FN_ENTER(0x00816fac);
    /* 00816fac: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 00816fb1: push 0xac9fa0 */ { u32 v = 0xac9fa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00816fb6: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00816fba: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x816fbfu); f_0086b6b8();
    /* 00816fbf: mov eax, 0x240 */ r_eax = 0x240u;
    /* 00816fc4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816fc7: ret  */ FN_RET(0x00816fac); r_esp += 4; return;
}

void f_00816fc8(void) /* sub_816FC8 */
{
    FN_ENTER(0x00816fc8);
    /* 00816fc8: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00816fcc: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00816fd0: push 0xac9fa0 */ { u32 v = 0xac9fa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00816fd5: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x816fdau); f_0086b6b8();
    /* 00816fda: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816fdd: ret  */ FN_RET(0x00816fc8); r_esp += 4; return;
}

void f_00816fe0(void) /* sub_816FE0 */
{
    FN_ENTER(0x00816fe0);
    /* 00816fe0: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 00816fe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00816fe7: push 0xac9fa0 */ { u32 v = 0xac9fa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00816fec: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x816ff1u); f_0086b688();
    /* 00816ff1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00816ff4: ret  */ FN_RET(0x00816fe0); r_esp += 4; return;
}

void f_00816ff8(void) /* sub_816FF8 */
{
    FN_ENTER(0x00816ff8);
    /* 00816ff8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00816ffb: mov eax, ecx */ r_eax = r_ecx;
    /* 00816ffd: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00817001: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00817004: mov dword ptr [eax], 0xb47a80 */ W32((u32)(r_eax), 0xb47a80u);
    /* 0081700a: jne 0x817068 */ if (!fZ) goto L_00817068;
L_0081700c:; BB(0x0081700c);
    /* 0081700c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0081700f: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00817015: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00817019: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081701b: je 0x817042 */ if (fZ) goto L_00817042;
L_0081701d:; BB(0x0081701d);
    /* 0081701d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00817021: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00817025: mov ebp, eax */ r_ebp = r_eax;
L_00817027:; BB(0x00817027);
    /* 00817027: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817029: je 0x817034 */ if (fZ) goto L_00817034;
L_0081702b:; BB(0x0081702b);
    /* 0081702b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0081702d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0081702f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x817031u); call_ind(t); }
    /* 00817031: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
L_00817034:; BB(0x00817034);
    /* 00817034: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817036: jne 0x817027 */ if (!fZ) goto L_00817027;
L_00817038:; BB(0x00817038);
    /* 00817038: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0081703c: mov eax, ebp */ r_eax = r_ebp;
    /* 0081703e: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00817042:; BB(0x00817042);
    /* 00817042: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00817045: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817047: je 0x817068 */ if (fZ) goto L_00817068;
L_00817049:; BB(0x00817049);
    /* 00817049: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0081704c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081704e: je 0x817085 */ if (fZ) goto L_00817085;
L_00817050:; BB(0x00817050);
    /* 00817050: cmp eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817053: je 0x81708e */ if (fZ) goto L_0081708e;
L_00817055:; BB(0x00817055);
    /* 00817055: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00817058: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0081705b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0081705e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00817060: je 0x817077 */ if (fZ) goto L_00817077;
L_00817062:; BB(0x00817062);
    /* 00817062: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00817065: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
L_00817068:; BB(0x00817068);
    /* 00817068: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0081706c: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0081706f: jne 0x8170ad */ if (!fZ) goto L_008170ad;
L_00817071:; BB(0x00817071);
    /* 00817071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00817074: ret 4 */ FN_RET(0x00816ff8); r_esp += 8; return;
L_00817077:; BB(0x00817077);
    /* 00817077: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0081707a: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0081707d: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00817080: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00817083: jmp 0x817068 */ goto L_00817068;
L_00817085:; BB(0x00817085);
    /* 00817085: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 0081708c: jmp 0x817068 */ goto L_00817068;
L_0081708e:; BB(0x0081708e);
    /* 0081708e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00817091: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00817094: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00817097: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 0081709e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 008170a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008170a3: je 0x817068 */ if (fZ) goto L_00817068;
L_008170a5:; BB(0x008170a5);
    /* 008170a5: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008170a8: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 008170ab: jmp 0x817068 */ goto L_00817068;
L_008170ad:; BB(0x008170ad);
    /* 008170ad: call 0x5c2f78 */ r_esp -= 4; W32(r_esp, 0x8170b2u); f_005c2f78();
    /* 008170b2: jmp 0x817071 */ goto L_00817071;
}

