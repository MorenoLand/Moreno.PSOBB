#include "protos.h"

void f_005a817c(void) /* sub_5A817C */
{
    FN_ENTER(0x005a817c);
    /* 005a817c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a817d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8180: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a8182: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 005a8188: fcom dword ptr [0x92a36c] */ fx_compare(ST(0), R_F32((u32)(0x92a36cu))); 
    /* 005a818e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a8190: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a8191: jb 0x5a8286 */ if (fC) goto L_005a8286;
L_005a8197:; BB(0x005a8197);
    /* 005a8197: fcomp dword ptr [0x92a368] */ fx_compare(ST(0), R_F32((u32)(0x92a368u))); FPOP();
    /* 005a819d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a819f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a81a0: ja 0x5a8288 */ if ((!fC&&!fZ)) goto L_005a8288;
L_005a81a6:; BB(0x005a81a6);
    /* 005a81a6: mov eax, dword ptr [ebp + 0x49c] */ r_eax = R32((u32)(r_ebp+0x49cu));
    /* 005a81ac: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005a81af: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 005a81b2: mov eax, dword ptr [ebp + 0x49c] */ r_eax = R32((u32)(r_ebp+0x49cu));
    /* 005a81b8: mov edx, dword ptr [ebp + 0x474] */ r_edx = R32((u32)(r_ebp+0x474u));
    /* 005a81be: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005a81c1: mov edx, dword ptr [ebp + 0x478] */ r_edx = R32((u32)(r_ebp+0x478u));
    /* 005a81c7: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005a81ca: mov edx, dword ptr [ebp + 0x47c] */ r_edx = R32((u32)(r_ebp+0x47cu));
    /* 005a81d0: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 005a81d3: push dword ptr [ebp + 0x49c] */ { u32 v = R32((u32)(r_ebp+0x49cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a81d9: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5a81deu); f_007b999c();
    /* 005a81de: mov eax, dword ptr [ebp + 0x4a0] */ r_eax = R32((u32)(r_ebp+0x4a0u));
    /* 005a81e4: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005a81e7: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 005a81ea: mov eax, dword ptr [ebp + 0x4a0] */ r_eax = R32((u32)(r_ebp+0x4a0u));
    /* 005a81f0: mov edx, dword ptr [ebp + 0x474] */ r_edx = R32((u32)(r_ebp+0x474u));
    /* 005a81f6: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005a81f9: mov edx, dword ptr [ebp + 0x478] */ r_edx = R32((u32)(r_ebp+0x478u));
    /* 005a81ff: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005a8202: mov edx, dword ptr [ebp + 0x47c] */ r_edx = R32((u32)(r_ebp+0x47cu));
    /* 005a8208: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 005a820b: push dword ptr [ebp + 0x4a0] */ { u32 v = R32((u32)(r_ebp+0x4a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8211: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5a8216u); f_007b999c();
    /* 005a8216: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8219: mov eax, dword ptr [0x92a268] */ r_eax = R32((u32)(0x92a268u));
    /* 005a821e: mov edx, dword ptr [ebp + 0x4f8] */ r_edx = R32((u32)(r_ebp+0x4f8u));
    /* 005a8224: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005a822b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a822d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005a8231: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 005a8234: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a8238: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005a823c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a823f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a8242: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x5a8248u); call_ind(t); }
    /* 005a8248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a824a: je 0x5a8257 */ if (fZ) goto L_005a8257;
L_005a824c:; BB(0x005a824c);
    /* 005a824c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005a8250: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a8253: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
L_005a8257:; BB(0x005a8257);
    /* 005a8257: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a825a: push dword ptr [ebp + 0x4a8] */ { u32 v = R32((u32)(r_ebp+0x4a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8260: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8261: mov ecx, dword ptr [ebp + 0x49c] */ r_ecx = R32((u32)(r_ebp+0x49cu));
    /* 005a8267: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a8269: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x5a826cu); call_ind(t); }
    /* 005a826c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a826f: push dword ptr [ebp + 0x4a8] */ { u32 v = R32((u32)(r_ebp+0x4a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8275: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8276: mov ecx, dword ptr [ebp + 0x4a0] */ r_ecx = R32((u32)(r_ebp+0x4a0u));
    /* 005a827c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a827e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x5a8281u); call_ind(t); }
    /* 005a8281: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8284: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8285: ret  */ FN_RET(0x005a817c); r_esp += 4; return;
L_005a8286:; BB(0x005a8286);
    /* 005a8286: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005a8288:; BB(0x005a8288);
    /* 005a8288: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a828b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a828c: ret  */ FN_RET(0x005a817c); r_esp += 4; return;
}

void f_005a8290(void) /* sub_5A8290 */
{
    FN_ENTER(0x005a8290);
    /* 005a8290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8291: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8293: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8295: push 0x8d8b9a */ { u32 v = 0x8d8b9au; r_esp -= 4; W32(r_esp, v); }
    /* 005a829a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a82a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a82a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a82a8: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a82ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a82ae: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 005a82b1: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 005a82b4: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 005a82b7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a82ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a82bd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a82c0: je 0x5a8a5e */ if (fZ) goto L_005a8a5e;
L_005a82c6:; BB(0x005a82c6);
    /* 005a82c6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a82c9: je 0x5a8974 */ if (fZ) goto L_005a8974;
L_005a82cf:; BB(0x005a82cf);
    /* 005a82cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a82d1: jne 0x5a8947 */ if (!fZ) goto L_005a8947;
L_005a82d7:; BB(0x005a82d7);
    /* 005a82d7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a82dcu); f_007aa094();
    /* 005a82dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a82df: mov eax, dword ptr [eax + 0x4dc] */ r_eax = R32((u32)(r_eax+0x4dcu));
    /* 005a82e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a82e7: je 0x5a8825 */ if (fZ) goto L_005a8825;
L_005a82ed:; BB(0x005a82ed);
    /* 005a82ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a82f0: jne 0x5a8609 */ if (!fZ) goto L_005a8609;
L_005a82f6:; BB(0x005a82f6);
    /* 005a82f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a82f9: call 0x5a8ae0 */ r_esp -= 4; W32(r_esp, 0x5a82feu); f_005a8ae0();
    /* 005a82fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8301: call 0x53c3d0 */ r_esp -= 4; W32(r_esp, 0x5a8306u); f_0053c3d0();
    /* 005a8306: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8308: je 0x5a831a */ if (fZ) goto L_005a831a;
L_005a830a:; BB(0x005a830a);
    /* 005a830a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a830d: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a8312u); f_005213d8();
    /* 005a8312: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8315: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a831au); f_00521410();
L_005a831a:; BB(0x005a831a);
    /* 005a831a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a831d: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 005a8323: mov ebx, dword ptr [ecx + 0x3b0] */ r_ebx = R32((u32)(r_ecx+0x3b0u));
    /* 005a8329: mov esi, dword ptr [ecx + 0x500] */ r_esi = R32((u32)(r_ecx+0x500u));
    /* 005a832f: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 005a8331: fmul dword ptr [0x92a358] */ ST(0) = ST(0) * R_F32((u32)(0x92a358u));
    /* 005a8337: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a8339: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a833c: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a833f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005a8343: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005a8346: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005a834a: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x5a834fu); f_00520940();
    /* 005a834f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8351: je 0x5a835b */ if (fZ) goto L_005a835b;
L_005a8353:; BB(0x005a8353);
    /* 005a8353: mov eax, 1 */ r_eax = 0x1u;
    /* 005a8358: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005a835b:; BB(0x005a835b);
    /* 005a835b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a835e: mov eax, dword ptr [ecx + 0x500] */ r_eax = R32((u32)(r_ecx+0x500u));
    /* 005a8364: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8366: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a836c: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8372: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5a8377u); f_005209d4();
    /* 005a8377: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a837a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a837c: mov eax, dword ptr [ecx + 0x500] */ r_eax = R32((u32)(r_ecx+0x500u));
    /* 005a8382: fld dword ptr [ecx + 0x4f0] */ FPUSH(R_F32((u32)(r_ecx+0x4f0u)));
    /* 005a8388: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 005a838a: fstp dword ptr [ecx + 0x4f0] */ W_F32((u32)(r_ecx+0x4f0u), ST(0)); FPOP();
    /* 005a8390: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x5a8395u); f_00520bb8();
    /* 005a8395: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8397: je 0x5a83a1 */ if (fZ) goto L_005a83a1;
L_005a8399:; BB(0x005a8399);
    /* 005a8399: mov eax, 1 */ r_eax = 0x1u;
    /* 005a839e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005a83a1:; BB(0x005a83a1);
    /* 005a83a1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a83a4: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5a83a9u); f_007b7e9c();
    /* 005a83a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a83ac: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005a83b2: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005a83b5: test ecx, 0x200000 */ {  u32 a = r_ecx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a83bb: je 0x5a83c5 */ if (fZ) goto L_005a83c5;
L_005a83bd:; BB(0x005a83bd);
    /* 005a83bd: mov eax, 1 */ r_eax = 0x1u;
    /* 005a83c2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005a83c5:; BB(0x005a83c5);
    /* 005a83c5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a83c8: mov edi, dword ptr [ebx + 0x4a4] */ r_edi = R32((u32)(r_ebx+0x4a4u));
    /* 005a83ce: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 005a83d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a83d3: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 005a83d6: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 005a83d9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005a83dc: mov dword ptr [edi + 0x3c], ecx */ W32((u32)(r_edi+0x3cu), r_ecx);
    /* 005a83df: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 005a83e2: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 005a83e5: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x5a83eau); f_007b51c4();
    /* 005a83ea: mov eax, ebx */ r_eax = r_ebx;
    /* 005a83ec: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 005a83f2: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5a83f7u); f_007b6894();
    /* 005a83f7: mov eax, ebx */ r_eax = r_ebx;
    /* 005a83f9: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 005a83ff: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 005a8405: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 005a8408: test ebx, 0x180000 */ {  u32 a = r_ebx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a840e: je 0x5a850e */ if (fZ) goto L_005a850e;
L_005a8414:; BB(0x005a8414);
    /* 005a8414: mov eax, 1 */ r_eax = 0x1u;
    /* 005a8419: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005a841c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a841e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005a8421:; BB(0x005a8421);
    /* 005a8421: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8424: mov edx, dword ptr [eax*4 + 0xaad6e0] */ r_edx = R32((u32)(r_eax*4+0xaad6e0u));
    /* 005a842b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005a842e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8430: je 0x5a850e */ if (fZ) goto L_005a850e;
L_005a8436:; BB(0x005a8436);
    /* 005a8436: mov eax, edx */ r_eax = r_edx;
    /* 005a8438: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 005a843f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8442: jne 0x5a84fc */ if (!fZ) goto L_005a84fc;
L_005a8448:; BB(0x005a8448);
    /* 005a8448: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a844b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a844c: mov ecx, dword ptr [edx + 0x4a8] */ r_ecx = R32((u32)(r_edx+0x4a8u));
    /* 005a8452: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x5a8457u); f_00521b18();
    /* 005a8457: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8459: je 0x5a84fc */ if (fZ) goto L_005a84fc;
L_005a845f:; BB(0x005a845f);
    /* 005a845f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8462: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 005a8468: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a846b: jne 0x5a899e */ if (!fZ) goto L_005a899e;
L_005a8471:; BB(0x005a8471);
    /* 005a8471: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a8477: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 005a847a: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 005a847d: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_005a8484:; BB(0x005a8484);
    /* 005a8484: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a8487: mov ebx, eax */ r_ebx = r_eax;
    /* 005a8489: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005a848b: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005a8490: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8491: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8492: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8494: push dword ptr [ebp - 0x64] */ { u32 v = R32((u32)(r_ebp+0xffffff9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8497: push dword ptr [ebp - 0x68] */ { u32 v = R32((u32)(r_ebp+0xffffff98u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a849a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a849b: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x5a849eu); call_ind(t); }
    /* 005a849e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a84a0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a84a3: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a84a6: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a84ab: jne 0x5a84b8 */ if (!fZ) goto L_005a84b8;
L_005a84ad:; BB(0x005a84ad);
    /* 005a84ad: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a84b0: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a84b5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_005a84b8:; BB(0x005a84b8);
    /* 005a84b8: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005a84bf: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005a84c1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a84c6u); f_005caba4();
    /* 005a84c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a84c7: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005a84ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a84cc: je 0x5a84f5 */ if (fZ) goto L_005a84f5;
L_005a84ce:; BB(0x005a84ce);
    /* 005a84ce: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 005a84d5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a84dc: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a84e1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a84e4: mov ecx, eax */ r_ecx = r_eax;
    /* 005a84e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a84e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a84e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a84e9: call 0x54dda0 */ r_esp -= 4; W32(r_esp, 0x5a84eeu); f_0054dda0();
    /* 005a84ee: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005a84f5:; BB(0x005a84f5);
    /* 005a84f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005a84fc:; BB(0x005a84fc);
    /* 005a84fc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a84ff: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a8502: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a8505: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8508: jl 0x5a8421 */ if ((fS!=fO)) goto L_005a8421;
L_005a850e:; BB(0x005a850e);
    /* 005a850e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a8511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8513: je 0x5a851d */ if (fZ) goto L_005a851d;
L_005a8515:; BB(0x005a8515);
    /* 005a8515: mov eax, 1 */ r_eax = 0x1u;
    /* 005a851a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005a851d:; BB(0x005a851d);
    /* 005a851d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8520: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5a8525u); f_0052126c();
    /* 005a8525: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8527: je 0x5a8595 */ if (fZ) goto L_005a8595;
L_005a8529:; BB(0x005a8529);
    /* 005a8529: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a852c: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 005a852f: mov esi, dword ptr [edx + 0x398] */ r_esi = R32((u32)(r_edx+0x398u));
    /* 005a8535: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005a8538: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 005a853b: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 005a853e: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005a8541: mov dword ptr [ebp - 0x54], ebx */ W32((u32)(r_ebp+0xffffffacu), r_ebx);
    /* 005a8544: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 005a8547: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005a854a: mov edx, ebx */ r_edx = r_ebx;
    /* 005a854c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5a8551u); f_0082f9c4();
    /* 005a8551: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 005a8554: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8555: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5a855au); f_007828e4();
    /* 005a855a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a855b: fcomp dword ptr [0x92a348] */ fx_compare(ST(0), R_F32((u32)(0x92a348u))); FPOP();
    /* 005a8561: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a8563: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a8564: jb 0x5a8595 */ if (fC) goto L_005a8595;
L_005a8566:; BB(0x005a8566);
    /* 005a8566: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8569: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005a856c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5a8571u); f_0082dcbc();
    /* 005a8571: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 005a8574: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8577: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005a857a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a857fu); f_0082ddd8();
    /* 005a857f: fmul dword ptr [ebp - 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffb0u));
    /* 005a8582: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 005a8585: fmul dword ptr [ebp - 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffa8u));
    /* 005a8588: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a858a: fcomp dword ptr [0x92a354] */ fx_compare(ST(0), R_F32((u32)(0x92a354u))); FPOP();
    /* 005a8590: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a8592: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a8593: jb 0x5a85c4 */ if (fC) goto L_005a85c4;
L_005a8595:; BB(0x005a8595);
    /* 005a8595: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a8598: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 005a859a: jne 0x5a85be */ if (!fZ) goto L_005a85be;
L_005a859c:; BB(0x005a859c);
    /* 005a859c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a859f: mov ecx, dword ptr [edx + 0x500] */ r_ecx = R32((u32)(r_edx+0x500u));
    /* 005a85a5: fld dword ptr [edx + 0x4f0] */ FPUSH(R_F32((u32)(r_edx+0x4f0u)));
    /* 005a85ab: fcomp dword ptr [ecx + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x10u))); FPOP();
    /* 005a85ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a85b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a85b1: jb 0x5a8985 */ if (fC) goto L_005a8985;
L_005a85b7:; BB(0x005a85b7);
    /* 005a85b7: mov eax, edx */ r_eax = r_edx;
    /* 005a85b9: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 005a85bc: jmp 0x5a85c4 */ goto L_005a85c4;
L_005a85be:; BB(0x005a85be);
    /* 005a85be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a85c1: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
L_005a85c4:; BB(0x005a85c4);
    /* 005a85c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a85c7: mov dword ptr [ecx + 0x4dc], 2 */ W32((u32)(r_ecx+0x4dcu), 0x2u);
    /* 005a85d1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a85d3: mov dword ptr [ecx + 0x4e0], 0 */ W32((u32)(r_ecx+0x4e0u), 0x0u);
    /* 005a85dd: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a85e2u); f_0051f664();
    /* 005a85e2: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a85e7u); f_00807ac0();
    /* 005a85e7: push dword ptr [eax*4 + 0x9c0a98] */ { u32 v = R32((u32)(r_eax*4+0x9c0a98u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a85ee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a85f1: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a85f6u); f_007879b8();
    /* 005a85f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a85f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a85f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a85fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a85fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a85fc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a8601u); f_00814298();
    /* 005a8601: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8604: jmp 0x5a8985 */ goto L_005a8985;
L_005a8609:; BB(0x005a8609);
    /* 005a8609: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a860c: jne 0x5a8985 */ if (!fZ) goto L_005a8985;
L_005a8612:; BB(0x005a8612);
    /* 005a8612: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8615: mov edx, dword ptr [eax + 0x4e0] */ r_edx = R32((u32)(r_eax+0x4e0u));
    /* 005a861b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a861e: mov dword ptr [eax + 0x4e0], edx */ W32((u32)(r_eax+0x4e0u), r_edx);
    /* 005a8624: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8627: jge 0x5a863e */ if ((fS==fO)) goto L_005a863e;
L_005a8629:; BB(0x005a8629);
    /* 005a8629: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a862c: je 0x5a86c8 */ if (fZ) goto L_005a86c8;
L_005a8632:; BB(0x005a8632);
    /* 005a8632: mov ecx, eax */ r_ecx = r_eax;
    /* 005a8634: call 0x5a8d20 */ r_esp -= 4; W32(r_esp, 0x5a8639u); f_005a8d20();
    /* 005a8639: jmp 0x5a86c8 */ goto L_005a86c8;
L_005a863e:; BB(0x005a863e);
    /* 005a863e: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8643: mov ecx, eax */ r_ecx = r_eax;
    /* 005a8645: mov eax, 3 */ r_eax = 0x3u;
    /* 005a864a: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a8651: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a8656u); f_007aaa30();
    /* 005a8656: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8658: je 0x5a8682 */ if (fZ) goto L_005a8682;
L_005a865a:; BB(0x005a865a);
    /* 005a865a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a865fu); f_00807ac0();
    /* 005a865f: push dword ptr [eax*4 + 0x9c0abc] */ { u32 v = R32((u32)(r_eax*4+0x9c0abcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8666: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8669: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a866eu); f_007879b8();
    /* 005a866e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8671: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005a8674: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a8676: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8677: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8678: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8679: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a867a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a867fu); f_00814298();
    /* 005a867f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a8682:; BB(0x005a8682);
    /* 005a8682: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8685: call 0x5a9c3c */ r_esp -= 4; W32(r_esp, 0x5a868au); f_005a9c3c();
    /* 005a868a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a868d: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005a8693: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a8696: je 0x5a86b3 */ if (fZ) goto L_005a86b3;
L_005a8698:; BB(0x005a8698);
    /* 005a8698: mov edx, eax */ r_edx = r_eax;
    /* 005a869a: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 005a86a0: mov dword ptr [edx + 0x4dc], 3 */ W32((u32)(r_edx+0x4dcu), 0x3u);
    /* 005a86aa: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a86ad: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
L_005a86b3:; BB(0x005a86b3);
    /* 005a86b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a86b6: fld dword ptr [eax + 0x4ec] */ FPUSH(R_F32((u32)(r_eax+0x4ecu)));
    /* 005a86bc: fmul dword ptr [0x92a360] */ ST(0) = ST(0) * R_F32((u32)(0x92a360u));
    /* 005a86c2: fstp dword ptr [eax + 0x4ec] */ W_F32((u32)(r_eax+0x4ecu), ST(0)); FPOP();
L_005a86c8:; BB(0x005a86c8);
    /* 005a86c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a86cb: mov esi, dword ptr [ecx + 0x4a4] */ r_esi = R32((u32)(r_ecx+0x4a4u));
    /* 005a86d1: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005a86d4: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005a86d7: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005a86da: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 005a86dd: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 005a86e0: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 005a86e3: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x5a86e8u); f_007b51c4();
    /* 005a86e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a86eb: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 005a86f1: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5a86f6u); f_007b6894();
    /* 005a86f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a86f9: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 005a86ff: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 005a8705: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 005a8708: test ebx, 0x180000 */ {  u32 a = r_ebx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a870e: je 0x5a8806 */ if (fZ) goto L_005a8806;
L_005a8714:; BB(0x005a8714);
    /* 005a8714: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a8716: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005a8719:; BB(0x005a8719);
    /* 005a8719: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a871c: mov edx, dword ptr [eax*4 + 0xaad6e0] */ r_edx = R32((u32)(r_eax*4+0xaad6e0u));
    /* 005a8723: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005a8726: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8728: je 0x5a8806 */ if (fZ) goto L_005a8806;
L_005a872e:; BB(0x005a872e);
    /* 005a872e: mov eax, edx */ r_eax = r_edx;
    /* 005a8730: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 005a8737: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a873a: jne 0x5a87f4 */ if (!fZ) goto L_005a87f4;
L_005a8740:; BB(0x005a8740);
    /* 005a8740: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8743: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8744: mov ecx, dword ptr [edx + 0x4a8] */ r_ecx = R32((u32)(r_edx+0x4a8u));
    /* 005a874a: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x5a874fu); f_00521b18();
    /* 005a874f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8751: je 0x5a87f4 */ if (fZ) goto L_005a87f4;
L_005a8757:; BB(0x005a8757);
    /* 005a8757: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a875a: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 005a8760: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a8763: jne 0x5a89d8 */ if (!fZ) goto L_005a89d8;
L_005a8769:; BB(0x005a8769);
    /* 005a8769: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a876f: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 005a8772: fstp dword ptr [ebp - 0x74] */ W_F32((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 005a8775: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005a877c:; BB(0x005a877c);
    /* 005a877c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a877f: mov ebx, eax */ r_ebx = r_eax;
    /* 005a8781: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005a8783: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005a8788: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8789: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a878a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a878c: push dword ptr [ebp - 0x74] */ { u32 v = R32((u32)(r_ebp+0xffffff8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a878f: push dword ptr [ebp - 0x78] */ { u32 v = R32((u32)(r_ebp+0xffffff88u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8792: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8793: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x5a8796u); call_ind(t); }
    /* 005a8796: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a8798: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a879b: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a879e: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a87a3: jne 0x5a87b0 */ if (!fZ) goto L_005a87b0;
L_005a87a5:; BB(0x005a87a5);
    /* 005a87a5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a87a8: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a87ad: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_005a87b0:; BB(0x005a87b0);
    /* 005a87b0: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 005a87b7: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005a87b9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a87beu); f_005caba4();
    /* 005a87be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a87bf: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005a87c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a87c4: je 0x5a87ed */ if (fZ) goto L_005a87ed;
L_005a87c6:; BB(0x005a87c6);
    /* 005a87c6: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 005a87cd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a87d4: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a87d9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a87dc: mov ecx, eax */ r_ecx = r_eax;
    /* 005a87de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a87df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a87e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a87e1: call 0x54dda0 */ r_esp -= 4; W32(r_esp, 0x5a87e6u); f_0054dda0();
    /* 005a87e6: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005a87ed:; BB(0x005a87ed);
    /* 005a87ed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005a87f4:; BB(0x005a87f4);
    /* 005a87f4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a87f7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a87fa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a87fd: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8800: jl 0x5a8719 */ if ((fS!=fO)) goto L_005a8719;
L_005a8806:; BB(0x005a8806);
    /* 005a8806: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8809: push dword ptr [ecx + 0x4ec] */ { u32 v = R32((u32)(r_ecx+0x4ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a880f: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8815: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a881b: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5a8820u); f_005209d4();
    /* 005a8820: jmp 0x5a8985 */ goto L_005a8985;
L_005a8825:; BB(0x005a8825);
    /* 005a8825: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a882a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a882d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a8832u); f_007aaa30();
    /* 005a8832: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8834: jne 0x5a8847 */ if (!fZ) goto L_005a8847;
L_005a8836:; BB(0x005a8836);
    /* 005a8836: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a883b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a883e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a8843u); f_007aaa30();
    /* 005a8843: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8845: je 0x5a8877 */ if (fZ) goto L_005a8877;
L_005a8847:; BB(0x005a8847);
    /* 005a8847: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a884cu); f_00807ac0();
    /* 005a884c: push dword ptr [eax*4 + 0x9c0a74] */ { u32 v = R32((u32)(r_eax*4+0x9c0a74u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8853: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8856: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a885bu); f_007879b8();
    /* 005a885b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a885e: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005a8861: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a8863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8864: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8865: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8866: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8867: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a886cu); f_00814298();
    /* 005a886c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a886f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8872: call 0x5a8d20 */ r_esp -= 4; W32(r_esp, 0x5a8877u); f_005a8d20();
L_005a8877:; BB(0x005a8877);
    /* 005a8877: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a887a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005a8880: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a8883: je 0x5a88af */ if (fZ) goto L_005a88af;
L_005a8885:; BB(0x005a8885);
    /* 005a8885: mov edx, eax */ r_edx = r_eax;
    /* 005a8887: mov ebx, dword ptr [edx + 0xa4] */ r_ebx = R32((u32)(r_edx+0xa4u));
    /* 005a888d: mov dword ptr [edx + 0x4dc], 1 */ W32((u32)(r_edx+0x4dcu), 0x1u);
    /* 005a8897: mov eax, 2 */ r_eax = 0x2u;
    /* 005a889c: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 005a88a3: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 005a88a6: or ecx, 0x700 */ {  u32 a = r_ecx; u32 b = 0x700u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005a88ac: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
L_005a88af:; BB(0x005a88af);
    /* 005a88af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a88b2: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5a88b7u); f_0052126c();
    /* 005a88b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a88b9: je 0x5a88cb */ if (fZ) goto L_005a88cb;
L_005a88bb:; BB(0x005a88bb);
    /* 005a88bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a88be: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a88c3u); f_005213d8();
    /* 005a88c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a88c6: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a88cbu); f_00521410();
L_005a88cb:; BB(0x005a88cb);
    /* 005a88cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a88ce: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 005a88d4: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 005a88da: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a88dc: fmul qword ptr [0x92a2a8] */ ST(0) = ST(0) * R_F64((u32)(0x92a2a8u));
    /* 005a88e2: fdiv qword ptr [0x92a2a0] */ ST(0) = ST(0) / R_F64((u32)(0x92a2a0u));
    /* 005a88e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a88eb: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 005a88ee: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 005a88f2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a88f7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005a88fa: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 005a88fd: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a8900: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 005a8903: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a8906: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 005a890b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a890c: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a890f: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5a8914u); f_007a8c74();
    /* 005a8914: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8917: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a891c: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8921: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 005a8924: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8925: push dword ptr [edx + 0x48c] */ { u32 v = R32((u32)(r_edx+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a892b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a892c: call 0x782ac0 */ r_esp -= 4; W32(r_esp, 0x5a8931u); f_00782ac0();
    /* 005a8931: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8934: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8937: mov dword ptr [ecx + 0x48c], eax */ W32((u32)(r_ecx+0x48cu), r_eax);
    /* 005a893d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a893f: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a8945u); call_ind(t); }
    /* 005a8945: jmp 0x5a8985 */ goto L_005a8985;
L_005a8947:; BB(0x005a8947);
    /* 005a8947: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a894a: jne 0x5a8985 */ if (!fZ) goto L_005a8985;
L_005a894c:; BB(0x005a894c);
    /* 005a894c: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 005a8952: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 005a8958: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a895b: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 005a8961: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 005a8964: and edx, 0xfffff8ff */ {  u32 a = r_edx; u32 b = 0xfffff8ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a896a: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 005a896d: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5a8972u); f_00520be8();
    /* 005a8972: jmp 0x5a8985 */ goto L_005a8985;
L_005a8974:; BB(0x005a8974);
    /* 005a8974: mov eax, ecx */ r_eax = r_ecx;
    /* 005a8976: mov edx, dword ptr [eax + 0x4dc] */ r_edx = R32((u32)(r_eax+0x4dcu));
    /* 005a897c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a897f: je 0x5a8a12 */ if (fZ) goto L_005a8a12;
L_005a8985:; BB(0x005a8985);
    /* 005a8985: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 005a8988: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a898b: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a898e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8991: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a8998: mov esp, ebp */ r_esp = r_ebp;
    /* 005a899a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a899b: ret 4 */ FN_RET(0x005a8290); r_esp += 8; return;
L_005a899e:; BB(0x005a899e);
    /* 005a899e: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 005a89a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a89a6: je 0x5a89c0 */ if (fZ) goto L_005a89c0;
L_005a89a8:; BB(0x005a89a8);
    /* 005a89a8: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a89ae: fild dword ptr [edx + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x1cu)));
    /* 005a89b1: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 005a89b4: mov dword ptr [ebp - 0x68], 5 */ W32((u32)(r_ebp+0xffffff98u), 0x5u);
    /* 005a89bb: jmp 0x5a8484 */ goto L_005a8484;
L_005a89c0:; BB(0x005a89c0);
    /* 005a89c0: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a89c6: fild dword ptr [edx + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x1cu)));
    /* 005a89c9: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 005a89cc: mov dword ptr [ebp - 0x68], 3 */ W32((u32)(r_ebp+0xffffff98u), 0x3u);
    /* 005a89d3: jmp 0x5a8484 */ goto L_005a8484;
L_005a89d8:; BB(0x005a89d8);
    /* 005a89d8: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 005a89de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a89e0: je 0x5a89fa */ if (fZ) goto L_005a89fa;
L_005a89e2:; BB(0x005a89e2);
    /* 005a89e2: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a89e8: fild dword ptr [edx + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x1cu)));
    /* 005a89eb: fstp dword ptr [ebp - 0x74] */ W_F32((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 005a89ee: mov dword ptr [ebp - 0x78], 5 */ W32((u32)(r_ebp+0xffffff88u), 0x5u);
    /* 005a89f5: jmp 0x5a877c */ goto L_005a877c;
L_005a89fa:; BB(0x005a89fa);
    /* 005a89fa: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 005a8a00: fild dword ptr [edx + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x1cu)));
    /* 005a8a03: fstp dword ptr [ebp - 0x74] */ W_F32((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 005a8a06: mov dword ptr [ebp - 0x78], 3 */ W32((u32)(r_ebp+0xffffff88u), 0x3u);
    /* 005a8a0d: jmp 0x5a877c */ goto L_005a877c;
L_005a8a12:; BB(0x005a8a12);
    /* 005a8a12: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 005a8a18: mov dword ptr [ecx + 0x490], 0 */ W32((u32)(r_ecx+0x490u), 0x0u);
    /* 005a8a22: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a8a25: add dword ptr [ecx + 0x494], 1 */ { u32 ad = (u32)(r_ecx+0x494u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005a8a2c: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 005a8a32: call 0x54b420 */ r_esp -= 4; W32(r_esp, 0x5a8a37u); f_0054b420();
    /* 005a8a37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a8a39: jne 0x5a8985 */ if (!fZ) goto L_005a8985;
L_005a8a3f:; BB(0x005a8a3f);
    /* 005a8a3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8a42: call 0x54b44c */ r_esp -= 4; W32(r_esp, 0x5a8a47u); f_0054b44c();
    /* 005a8a47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a8a49: jne 0x5a8985 */ if (!fZ) goto L_005a8985;
L_005a8a4f:; BB(0x005a8a4f);
    /* 005a8a4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8a52: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8a54: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a8a59u); f_0051f62c();
    /* 005a8a59: jmp 0x5a8985 */ goto L_005a8985;
L_005a8a5e:; BB(0x005a8a5e);
    /* 005a8a5e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8a60: mov eax, 7 */ r_eax = 0x7u;
    /* 005a8a65: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a8a6c: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a8a71u); f_0051f664();
    /* 005a8a71: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8a74: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 005a8a7a: mov ecx, dword ptr [esi + 0x500] */ r_ecx = R32((u32)(r_esi+0x500u));
    /* 005a8a80: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a8a83: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a8a86: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 005a8a8c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a8a8e: mov dword ptr [esi + 0x4dc], edx */ W32((u32)(r_esi+0x4dcu), r_edx);
    /* 005a8a94: mov dword ptr [esi + 0x4e0], edx */ W32((u32)(r_esi+0x4e0u), r_edx);
    /* 005a8a9a: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005a8a9c: mov dword ptr [esi + 0x4ec], ebx */ W32((u32)(r_esi+0x4ecu), r_ebx);
    /* 005a8aa2: mov ebx, dword ptr [esi + 0x4a8] */ r_ebx = R32((u32)(r_esi+0x4a8u));
    /* 005a8aa8: mov dword ptr [esi + 0x4f0], 0 */ W32((u32)(r_esi+0x4f0u), 0x0u);
    /* 005a8ab2: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 005a8ab5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a8ab7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a8ab9: jle 0x5a8acb */ if ((fZ||fS!=fO)) goto L_005a8acb;
L_005a8abb:; BB(0x005a8abb);
    /* 005a8abb: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005a8abd: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005a8ac0: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 005a8ac3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a8ac6: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8ac9: jl 0x5a8abb */ if ((fS!=fO)) goto L_005a8abb;
L_005a8acb:; BB(0x005a8acb);
    /* 005a8acb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8ace: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 005a8ad5: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5a8adau); f_00520bdc();
    /* 005a8ada: jmp 0x5a8985 */ goto L_005a8985;
}

void f_005a8ae0(void) /* sub_5A8AE0 */
{
    FN_ENTER(0x005a8ae0);
    /* 005a8ae0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ae1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ae2: mov edi, ecx */ r_edi = r_ecx;
    /* 005a8ae4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ae6: mov ecx, edi */ r_ecx = r_edi;
    /* 005a8ae8: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a8aedu); f_007aaa30();
    /* 005a8aed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8aef: jne 0x5a8b01 */ if (!fZ) goto L_005a8b01;
L_005a8af1:; BB(0x005a8af1);
    /* 005a8af1: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8af6: mov ecx, edi */ r_ecx = r_edi;
    /* 005a8af8: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a8afdu); f_007aaa30();
    /* 005a8afd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a8aff: je 0x5a8b4a */ if (fZ) goto L_005a8b4a;
L_005a8b01:; BB(0x005a8b01);
    /* 005a8b01: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 005a8b04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b05: mov ecx, edi */ r_ecx = r_edi;
    /* 005a8b07: call 0x5a8b50 */ r_esp -= 4; W32(r_esp, 0x5a8b0cu); f_005a8b50();
    /* 005a8b0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8b0e: je 0x5a8b1d */ if (fZ) goto L_005a8b1d;
L_005a8b10:; BB(0x005a8b10);
    /* 005a8b10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b11: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b12: call 0x578c08 */ r_esp -= 4; W32(r_esp, 0x5a8b17u); f_00578c08();
    /* 005a8b17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8b1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8b1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a8b1c: ret  */ FN_RET(0x005a8ae0); r_esp += 4; return;
L_005a8b1d:; BB(0x005a8b1d);
    /* 005a8b1d: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a8b22u); f_00807ac0();
    /* 005a8b22: push dword ptr [eax*4 + 0x9c0a98] */ { u32 v = R32((u32)(r_eax*4+0x9c0a98u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8b29: mov ecx, edi */ r_ecx = r_edi;
    /* 005a8b2b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a8b30u); f_007879b8();
    /* 005a8b30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a8b32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b35: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b37: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5a8b3cu); f_008144b0();
    /* 005a8b3c: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b42: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a8b47u); f_0050b510();
    /* 005a8b47: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005a8b4a:; BB(0x005a8b4a);
    /* 005a8b4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8b4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a8b4c: ret  */ FN_RET(0x005a8ae0); r_esp += 4; return;
}

void f_005a8b50(void) /* sub_5A8B50 */
{
    FN_ENTER(0x005a8b50);
    /* 005a8b50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8b56: mov esi, ecx */ r_esi = r_ecx;
    /* 005a8b58: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005a8b5c: fld dword ptr [0x92a33c] */ FPUSH(R_F32((u32)(0x92a33cu)));
    /* 005a8b62: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a8b65: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 005a8b68: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a8b6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a8b6e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005a8b72: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005a8b76: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a8b7a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a8b7e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a8b81: push 0x4007 */ { u32 v = 0x4007u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b86: lea eax, [esi + 0x128] */ r_eax = (u32)(r_esi+0x128u);
    /* 005a8b8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8b8e: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x5a8b93u); f_007806dc();
    /* 005a8b93: mov ebp, eax */ r_ebp = r_eax;
    /* 005a8b95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8b98: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8b9a: je 0x5a8bfb */ if (fZ) goto L_005a8bfb;
L_005a8b9c:; BB(0x005a8b9c);
    /* 005a8b9c: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 005a8b9f: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 005a8ba2: mov dword ptr [esi + 0x3cc], edi */ W32((u32)(r_esi+0x3ccu), r_edi);
    /* 005a8ba8: test edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8bae: je 0x5a8bcf */ if (fZ) goto L_005a8bcf;
L_005a8bb0:; BB(0x005a8bb0);
    /* 005a8bb0: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005a8bb3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a8bb5: mov dword ptr [esi + 0x3d0], edx */ W32((u32)(r_esi+0x3d0u), r_edx);
    /* 005a8bbb: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005a8bbe: mov dword ptr [esi + 0x3d4], edi */ W32((u32)(r_esi+0x3d4u), r_edi);
    /* 005a8bc4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005a8bc7: mov dword ptr [esi + 0x3d8], edx */ W32((u32)(r_esi+0x3d8u), r_edx);
    /* 005a8bcd: jmp 0x5a8bea */ goto L_005a8bea;
L_005a8bcf:; BB(0x005a8bcf);
    /* 005a8bcf: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 005a8bd2: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 005a8bd5: mov dword ptr [esi + 0x3d0], edx */ W32((u32)(r_esi+0x3d0u), r_edx);
    /* 005a8bdb: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005a8bde: mov dword ptr [esi + 0x3d4], edi */ W32((u32)(r_esi+0x3d4u), r_edi);
    /* 005a8be4: mov dword ptr [esi + 0x3d8], edx */ W32((u32)(r_esi+0x3d8u), r_edx);
L_005a8bea:; BB(0x005a8bea);
    /* 005a8bea: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005a8bed: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a8bf0: jne 0x5a8c92 */ if (!fZ) goto L_005a8c92;
L_005a8bf6:; BB(0x005a8bf6);
    /* 005a8bf6: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a8bf9: jne 0x5a8c06 */ if (!fZ) goto L_005a8c06;
L_005a8bfb:; BB(0x005a8bfb);
    /* 005a8bfb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a8bfd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8c00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8c01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8c02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a8c03: ret 4 */ FN_RET(0x005a8b50); r_esp += 8; return;
L_005a8c06:; BB(0x005a8c06);
    /* 005a8c06: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8c08: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 005a8c0b: add edx, 0x54 */ {  u32 a = r_edx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a8c0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8c0f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a8c14u); f_0050b510();
    /* 005a8c14: mov edi, eax */ r_edi = r_eax;
    /* 005a8c16: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8c19: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8c1b: je 0x5a8c5e */ if (fZ) goto L_005a8c5e;
L_005a8c1d:; BB(0x005a8c1d);
    /* 005a8c1d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8c1f: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x5a8c24u); f_0050c094();
    /* 005a8c24: mov esi, eax */ r_esi = r_eax;
    /* 005a8c26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8c29: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x5a8c2eu); f_0050c08c();
    /* 005a8c2e: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 005a8c32: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 005a8c39: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 005a8c3c: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 005a8c3f: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 005a8c46: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a8c4c: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
    /* 005a8c50: mov dword ptr [edi + 0x44], 0x40400000 */ W32((u32)(r_edi+0x44u), 0x40400000u);
    /* 005a8c57: mov dword ptr [edi + 0x48], 0x40400000 */ W32((u32)(r_edi+0x48u), 0x40400000u);
L_005a8c5e:; BB(0x005a8c5e);
    /* 005a8c5e: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8c63: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005a8c66: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a8c69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8c6a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a8c6fu); f_0050b510();
    /* 005a8c6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8c74: je 0x5a8c84 */ if (fZ) goto L_005a8c84;
L_005a8c76:; BB(0x005a8c76);
    /* 005a8c76: mov dword ptr [eax + 0x44], 0x40400000 */ W32((u32)(r_eax+0x44u), 0x40400000u);
    /* 005a8c7d: mov dword ptr [eax + 0x48], 0x40400000 */ W32((u32)(r_eax+0x48u), 0x40400000u);
L_005a8c84:; BB(0x005a8c84);
    /* 005a8c84: mov eax, 1 */ r_eax = 0x1u;
    /* 005a8c89: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8c8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8c8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8c8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a8c8f: ret 4 */ FN_RET(0x005a8b50); r_esp += 8; return;
L_005a8c92:; BB(0x005a8c92);
    /* 005a8c92: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8c94: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 005a8c97: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a8c9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8c9b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a8ca0u); f_0050b510();
    /* 005a8ca0: mov edi, eax */ r_edi = r_eax;
    /* 005a8ca2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8ca5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8ca7: je 0x5a8cea */ if (fZ) goto L_005a8cea;
L_005a8ca9:; BB(0x005a8ca9);
    /* 005a8ca9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8cab: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x5a8cb0u); f_0050c094();
    /* 005a8cb0: mov esi, eax */ r_esi = r_eax;
    /* 005a8cb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8cb5: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x5a8cbau); f_0050c08c();
    /* 005a8cba: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 005a8cbe: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 005a8cc5: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 005a8cc8: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 005a8ccb: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 005a8cd2: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a8cd8: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
    /* 005a8cdc: mov dword ptr [edi + 0x44], 0x40400000 */ W32((u32)(r_edi+0x44u), 0x40400000u);
    /* 005a8ce3: mov dword ptr [edi + 0x48], 0x40400000 */ W32((u32)(r_edi+0x48u), 0x40400000u);
L_005a8cea:; BB(0x005a8cea);
    /* 005a8cea: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8cef: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005a8cf2: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a8cf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8cf6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a8cfbu); f_0050b510();
    /* 005a8cfb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8cfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8d00: je 0x5a8d10 */ if (fZ) goto L_005a8d10;
L_005a8d02:; BB(0x005a8d02);
    /* 005a8d02: mov dword ptr [eax + 0x44], 0x40400000 */ W32((u32)(r_eax+0x44u), 0x40400000u);
    /* 005a8d09: mov dword ptr [eax + 0x48], 0x40400000 */ W32((u32)(r_eax+0x48u), 0x40400000u);
L_005a8d10:; BB(0x005a8d10);
    /* 005a8d10: mov eax, 1 */ r_eax = 0x1u;
    /* 005a8d15: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8d18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8d19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8d1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a8d1b: ret 4 */ FN_RET(0x005a8b50); r_esp += 8; return;
}

void f_005a8d20(void) /* sub_5A8D20 */
{
    FN_ENTER(0x005a8d20);
    /* 005a8d20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d21: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8d24: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a8d26: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a8d29: mov dword ptr [esp], 0xc0a00000 */ W32((u32)(r_esp), 0xc0a00000u);
    /* 005a8d30: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005a8d34: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005a8d3c: mov dword ptr [esp + 8], 0x40e00000 */ W32((u32)(r_esp+0x8u), 0x40e00000u);
    /* 005a8d44: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8d47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d49: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5a8d4eu); f_00782b64();
    /* 005a8d4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8d51: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005a8d54: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 005a8d57: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5a8d5cu); f_0082ebac();
    /* 005a8d5c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a8d5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d60: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a8d62: call 0x5a8b50 */ r_esp -= 4; W32(r_esp, 0x5a8d67u); f_005a8b50();
    /* 005a8d67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8d69: jne 0x5a8d93 */ if (!fZ) goto L_005a8d93;
L_005a8d6b:; BB(0x005a8d6b);
    /* 005a8d6b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a8d6e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d70: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d76: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x5a8d7bu); f_0050b7a4();
    /* 005a8d7b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8d7e: movzx edx, word ptr [eax + 0x2e] */ r_edx = (u32)R16((u32)(r_eax+0x2eu));
    /* 005a8d82: mov dword ptr [eax + 0x68], 0x3f000000 */ W32((u32)(r_eax+0x68u), 0x3f000000u);
    /* 005a8d89: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a8d8f: mov word ptr [eax + 0x2e], dx */ W16((u32)(r_eax+0x2eu), (u16)r_edx);
L_005a8d93:; BB(0x005a8d93);
    /* 005a8d93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8d96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a8d97: ret  */ FN_RET(0x005a8d20); r_esp += 4; return;
}

void f_005a8d98(void) /* sub_5A8D98 */
{
    FN_ENTER(0x005a8d98);
    /* 005a8d98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d99: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8d9a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8d9d: mov esi, ecx */ r_esi = r_ecx;
    /* 005a8d9f: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005a8da3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8da6: je 0x5a8f7e */ if (fZ) goto L_005a8f7e;
L_005a8dac:; BB(0x005a8dac);
    /* 005a8dac: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8daf: je 0x5a8f17 */ if (fZ) goto L_005a8f17;
L_005a8db5:; BB(0x005a8db5);
    /* 005a8db5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8db7: jne 0x5a8f65 */ if (!fZ) goto L_005a8f65;
L_005a8dbd:; BB(0x005a8dbd);
    /* 005a8dbd: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8dbf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a8dc4u); f_007aa094();
    /* 005a8dc4: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8dc6: call 0x53c3d0 */ r_esp -= 4; W32(r_esp, 0x5a8dcbu); f_0053c3d0();
    /* 005a8dcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8dcd: je 0x5a8ddd */ if (fZ) goto L_005a8ddd;
L_005a8dcf:; BB(0x005a8dcf);
    /* 005a8dcf: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8dd1: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a8dd6u); f_005213d8();
    /* 005a8dd6: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8dd8: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a8dddu); f_00521410();
L_005a8ddd:; BB(0x005a8ddd);
    /* 005a8ddd: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 005a8de3: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 005a8de9: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a8deb: fmul qword ptr [0x92a298] */ ST(0) = ST(0) * R_F64((u32)(0x92a298u));
    /* 005a8df1: fdiv qword ptr [0x92a290] */ ST(0) = ST(0) / R_F64((u32)(0x92a290u));
    /* 005a8df7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005a8dfa: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005a8dfe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a8e03: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a8e07: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005a8e0b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a8e0f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005a8e12: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005a8e16: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e1c: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8e1f: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5a8e24u); f_007a8c74();
    /* 005a8e24: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e29: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e2e: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005a8e31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e32: push dword ptr [esi + 0x48c] */ { u32 v = R32((u32)(r_esi+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8e38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e39: call 0x782ac0 */ r_esp -= 4; W32(r_esp, 0x5a8e3eu); f_00782ac0();
    /* 005a8e3e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8e41: mov edx, dword ptr [esi + 0x500] */ r_edx = R32((u32)(r_esi+0x500u));
    /* 005a8e47: mov dword ptr [esi + 0x48c], eax */ W32((u32)(r_esi+0x48cu), r_eax);
    /* 005a8e4d: fild dword ptr [edx + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x28u)));
    /* 005a8e50: fcomp dword ptr [esi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3b4u))); FPOP();
    /* 005a8e56: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a8e58: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a8e59: jb 0x5a8ea8 */ if (fC) goto L_005a8ea8;
L_005a8e5b:; BB(0x005a8e5b);
    /* 005a8e5b: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005a8e5e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5a8e63u); f_0082dcbc();
    /* 005a8e63: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005a8e67: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005a8e6a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a8e6fu); f_0082ddd8();
    /* 005a8e6f: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 005a8e75: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 005a8e79: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 005a8e7f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005a8e81: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a8e83: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 005a8e87: mov ecx, 0x1800 */ r_ecx = 0x1800u;
    /* 005a8e8c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a8e91u); f_0082ddd8();
    /* 005a8e91: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005a8e95: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a8e97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a8e99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a8e9a: jb 0x5a8ede */ if (fC) goto L_005a8ede;
L_005a8e9c:; BB(0x005a8e9c);
    /* 005a8e9c: mov dword ptr [esi + 0x4dc], 1 */ W32((u32)(r_esi+0x4dcu), 0x1u);
    /* 005a8ea6: jmp 0x5a8ede */ goto L_005a8ede;
L_005a8ea8:; BB(0x005a8ea8);
    /* 005a8ea8: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005a8eab: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5a8eb0u); f_0082dcbc();
    /* 005a8eb0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005a8eb4: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005a8eb7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a8ebcu); f_0082ddd8();
    /* 005a8ebc: mov eax, dword ptr [esi + 0x500] */ r_eax = R32((u32)(r_esi+0x500u));
    /* 005a8ec2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a8ec5: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8ec8: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005a8ecc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a8ecf: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a8ed3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005a8ed7: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8ed9: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5a8edeu); f_005209d4();
L_005a8ede:; BB(0x005a8ede);
    /* 005a8ede: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a8ee0: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8ee2: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a8ee8u); call_ind(t); }
    /* 005a8ee8: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8eed: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8eef: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a8ef4u); f_007aaa30();
    /* 005a8ef4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8ef6: jne 0x5a8f08 */ if (!fZ) goto L_005a8f08;
L_005a8ef8:; BB(0x005a8ef8);
    /* 005a8ef8: push 0x41a80000 */ { u32 v = 0x41a80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8efd: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8eff: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a8f04u); f_007aaa30();
    /* 005a8f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8f06: je 0x5a8f65 */ if (fZ) goto L_005a8f65;
L_005a8f08:; BB(0x005a8f08);
    /* 005a8f08: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8f0a: call 0x5a8fc0 */ r_esp -= 4; W32(r_esp, 0x5a8f0fu); f_005a8fc0();
    /* 005a8f0f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8f12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a8f13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8f14: ret 4 */ FN_RET(0x005a8d98); r_esp += 8; return;
L_005a8f17:; BB(0x005a8f17);
    /* 005a8f17: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 005a8f1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8f1f: je 0x5a8f6d */ if (fZ) goto L_005a8f6d;
L_005a8f21:; BB(0x005a8f21);
    /* 005a8f21: mov edx, dword ptr [esi + 0x500] */ r_edx = R32((u32)(r_esi+0x500u));
    /* 005a8f27: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 005a8f2d: fcomp dword ptr [edx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x14u))); FPOP();
    /* 005a8f30: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a8f32: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a8f33: jb 0x5a8f51 */ if (fC) goto L_005a8f51;
L_005a8f35:; BB(0x005a8f35);
    /* 005a8f35: mov eax, dword ptr [esi + 0x494] */ r_eax = R32((u32)(r_esi+0x494u));
    /* 005a8f3b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8f3e: jge 0x5a8f51 */ if ((fS==fO)) goto L_005a8f51;
L_005a8f40:; BB(0x005a8f40);
    /* 005a8f40: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f42: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8f44: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a8f49u); f_0051f62c();
    /* 005a8f49: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8f4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a8f4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8f4e: ret 4 */ FN_RET(0x005a8d98); r_esp += 8; return;
L_005a8f51:; BB(0x005a8f51);
    /* 005a8f51: mov eax, dword ptr [esi + 0x4dc] */ r_eax = R32((u32)(r_esi+0x4dcu));
    /* 005a8f57: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8f5a: jne 0x5a8f65 */ if (!fZ) goto L_005a8f65;
L_005a8f5c:; BB(0x005a8f5c);
    /* 005a8f5c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f5e: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8f60: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a8f65u); f_0051f62c();
L_005a8f65:; BB(0x005a8f65);
    /* 005a8f65: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8f68: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a8f69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8f6a: ret 4 */ FN_RET(0x005a8d98); r_esp += 8; return;
L_005a8f6d:; BB(0x005a8f6d);
    /* 005a8f6d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f6f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8f71: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a8f76u); f_0051f62c();
    /* 005a8f76: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8f79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a8f7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8f7b: ret 4 */ FN_RET(0x005a8d98); r_esp += 8; return;
L_005a8f7e:; BB(0x005a8f7e);
    /* 005a8f7e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f80: mov eax, 1 */ r_eax = 0x1u;
    /* 005a8f85: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005a8f8c: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8f8e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a8f93u); f_0051f664();
    /* 005a8f93: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a8f95: mov ecx, esi */ r_ecx = r_esi;
    /* 005a8f97: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5a8f9du); call_ind(t); }
    /* 005a8f9d: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 005a8fa3: mov dword ptr [esi + 0x4dc], 0 */ W32((u32)(r_esi+0x4dcu), 0x0u);
    /* 005a8fad: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a8fb0: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 005a8fb6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a8fb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a8fba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8fbb: ret 4 */ FN_RET(0x005a8d98); r_esp += 8; return;
}

void f_005a8fc0(void) /* sub_5A8FC0 */
{
    FN_ENTER(0x005a8fc0);
    /* 005a8fc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8fc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8fc2: mov edi, ecx */ r_edi = r_ecx;
    /* 005a8fc4: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 005a8fc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8fc8: mov ecx, edi */ r_ecx = r_edi;
    /* 005a8fca: call 0x5a8b50 */ r_esp -= 4; W32(r_esp, 0x5a8fcfu); f_005a8b50();
    /* 005a8fcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8fd1: je 0x5a8fdd */ if (fZ) goto L_005a8fdd;
L_005a8fd3:; BB(0x005a8fd3);
    /* 005a8fd3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8fd4: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x5a8fd9u); f_00578bac();
    /* 005a8fd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a8fda: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a8fdb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a8fdc: ret  */ FN_RET(0x005a8fc0); r_esp += 4; return;
L_005a8fdd:; BB(0x005a8fdd);
    /* 005a8fdd: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a8fe2u); f_00807ac0();
    /* 005a8fe2: push dword ptr [eax*4 + 0x9c0a50] */ { u32 v = R32((u32)(r_eax*4+0x9c0a50u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a8fe9: mov ecx, edi */ r_ecx = r_edi;
    /* 005a8feb: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a8ff0u); f_007879b8();
    /* 005a8ff0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a8ff2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ff3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ff4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ff6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a8ffbu); f_00814298();
    /* 005a8ffb: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9000: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a9001: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a9006u); f_0050b510();
    /* 005a9006: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a9009: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a900a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a900b: ret  */ FN_RET(0x005a8fc0); r_esp += 4; return;
}

