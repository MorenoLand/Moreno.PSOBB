#include "protos.h"

void f_00634060(void)
{
    FN_ENTER(0x00634060);
    /* 00634060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634061: mov ebp, esp */ r_ebp = r_esp;
    /* 00634063: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634065: push 0x8e3f70 */ { u32 v = 0x8e3f70u; r_esp -= 4; W32(r_esp, v); }
    /* 0063406a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634070: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634071: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634078: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063407b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063407e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00634081: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00634084: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00634087: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063408c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00634093: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x634098u); f_005caba4();
    /* 00634098: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634099: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063409c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063409e: je 0x6340d1 */ if (fZ) goto L_006340d1;
L_006340a0:; BB(0x006340a0);
    /* 006340a0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006340a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006340ae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006340b1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006340b4: call 0x6340d8 */ r_esp -= 4; W32(r_esp, 0x6340b9u); f_006340d8();
    /* 006340b9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006340bc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006340c3:; BB(0x006340c3);
    /* 006340c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006340c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006340cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006340cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006340d0: ret  */ FN_RET(0x00634060); r_esp += 4; return;
L_006340d1:; BB(0x006340d1);
    /* 006340d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006340d3: jmp 0x6340c3 */ goto L_006340c3;
}

void f_006340d8(void) /* sub_6340D8 */
{
    FN_ENTER(0x006340d8);
    /* 006340d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006340d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006340db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006340dd: push 0x8e3f8c */ { u32 v = 0x8e3f8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006340e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006340e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006340e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006340f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006340f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006340f6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006340f9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006340fc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006340ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00634102: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00634105: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00634108: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x63410du); f_006338e8();
    /* 0063410d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00634114: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634117: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063411a: mov dword ptr [ecx], 0xb2bef0 */ W32((u32)(r_ecx), 0xb2bef0u);
    /* 00634120: mov eax, dword ptr [0x9c637c] */ r_eax = R32((u32)(0x9c637cu));
    /* 00634125: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634126: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00634129: call dword ptr [0xb2bf04] */ { u32 t = R32((u32)(0xb2bf04u)); r_esp -= 4; W32(r_esp, 0x63412fu); call_ind(t); }
    /* 0063412f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634135: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634137: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63413cu); f_005b8610();
    /* 0063413c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063413f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634145: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634147: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063414a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63414fu); f_005b8624();
    /* 0063414f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634152: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 0063415c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063415f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634161: push 0x9c620c */ { u32 v = 0x9c620cu; r_esp -= 4; W32(r_esp, v); }
    /* 00634166: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63416bu); f_007b9a88();
    /* 0063416b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063416e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x634173u); f_007b999c();
    /* 00634173: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634174: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634177: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63417cu); f_007b4f54();
    /* 0063417c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063417f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634182: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634189: mov esp, ebp */ r_esp = r_ebp;
    /* 0063418b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063418c: ret 4 */ FN_RET(0x006340d8); r_esp += 8; return;
}

void f_00634190(void)
{
    FN_ENTER(0x00634190);
    /* 00634190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634191: mov ebp, esp */ r_ebp = r_esp;
    /* 00634193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634195: push 0x8e3fb4 */ { u32 v = 0x8e3fb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063419a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006341a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006341a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006341a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006341ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006341ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006341b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006341b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006341b7: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006341bc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006341c3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6341c8u); f_005caba4();
    /* 006341c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006341c9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006341cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006341ce: je 0x634201 */ if (fZ) goto L_00634201;
L_006341d0:; BB(0x006341d0);
    /* 006341d0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006341d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006341de: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006341e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006341e4: call 0x634208 */ r_esp -= 4; W32(r_esp, 0x6341e9u); f_00634208();
    /* 006341e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006341ec: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006341f3:; BB(0x006341f3);
    /* 006341f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006341f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006341fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006341ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634200: ret  */ FN_RET(0x00634190); r_esp += 4; return;
L_00634201:; BB(0x00634201);
    /* 00634201: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634203: jmp 0x6341f3 */ goto L_006341f3;
}

void f_00634208(void) /* sub_634208 */
{
    FN_ENTER(0x00634208);
    /* 00634208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634209: mov ebp, esp */ r_ebp = r_esp;
    /* 0063420b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063420d: push 0x8e3fd0 */ { u32 v = 0x8e3fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634212: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634219: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634220: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634223: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00634226: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00634229: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063422c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063422f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00634232: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00634235: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00634238: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x63423du); f_006338e8();
    /* 0063423d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00634244: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634247: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063424a: mov dword ptr [ecx], 0xb2bd30 */ W32((u32)(r_ecx), 0xb2bd30u);
    /* 00634250: mov eax, dword ptr [0x9c6380] */ r_eax = R32((u32)(0x9c6380u));
    /* 00634255: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634256: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00634259: call dword ptr [0xb2bd44] */ { u32 t = R32((u32)(0xb2bd44u)); r_esp -= 4; W32(r_esp, 0x63425fu); call_ind(t); }
    /* 0063425f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634265: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634267: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63426cu); f_005b8610();
    /* 0063426c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063426f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634275: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634277: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063427a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63427fu); f_005b8624();
    /* 0063427f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634282: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 0063428c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063428f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634291: push 0x9c6238 */ { u32 v = 0x9c6238u; r_esp -= 4; W32(r_esp, v); }
    /* 00634296: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63429bu); f_007b9a88();
    /* 0063429b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063429e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6342a3u); f_007b999c();
    /* 006342a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006342a4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006342a7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6342acu); f_007b4f54();
    /* 006342ac: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006342af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006342b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006342b9: mov esp, ebp */ r_esp = r_ebp;
    /* 006342bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006342bc: ret 4 */ FN_RET(0x00634208); r_esp += 8; return;
}

void f_006342c0(void)
{
    FN_ENTER(0x006342c0);
    /* 006342c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006342c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006342c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006342c5: push 0x8e3ff8 */ { u32 v = 0x8e3ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 006342ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006342d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006342d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006342d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006342db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006342de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006342e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006342e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006342e7: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006342ec: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006342f3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6342f8u); f_005caba4();
    /* 006342f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006342f9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006342fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006342fe: je 0x634331 */ if (fZ) goto L_00634331;
L_00634300:; BB(0x00634300);
    /* 00634300: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00634307: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063430e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00634311: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634314: call 0x634338 */ r_esp -= 4; W32(r_esp, 0x634319u); f_00634338();
    /* 00634319: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063431c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00634323:; BB(0x00634323);
    /* 00634323: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634326: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063432d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063432f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634330: ret  */ FN_RET(0x006342c0); r_esp += 4; return;
L_00634331:; BB(0x00634331);
    /* 00634331: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634333: jmp 0x634323 */ goto L_00634323;
}

void f_00634338(void) /* sub_634338 */
{
    FN_ENTER(0x00634338);
    /* 00634338: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634339: mov ebp, esp */ r_ebp = r_esp;
    /* 0063433b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063433d: push 0x8e4014 */ { u32 v = 0x8e4014u; r_esp -= 4; W32(r_esp, v); }
    /* 00634342: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634349: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634350: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634353: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00634356: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00634359: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063435c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063435f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00634362: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00634365: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00634368: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x63436du); f_006338e8();
    /* 0063436d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00634374: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634377: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063437a: mov dword ptr [ecx], 0xb2bdd8 */ W32((u32)(r_ecx), 0xb2bdd8u);
    /* 00634380: mov eax, dword ptr [0x9c6384] */ r_eax = R32((u32)(0x9c6384u));
    /* 00634385: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634386: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00634389: call dword ptr [0xb2bdec] */ { u32 t = R32((u32)(0xb2bdecu)); r_esp -= 4; W32(r_esp, 0x63438fu); call_ind(t); }
    /* 0063438f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634395: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634397: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63439cu); f_005b8610();
    /* 0063439c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063439f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 006343a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006343a7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006343aa: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6343afu); f_005b8624();
    /* 006343af: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006343b2: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 006343bc: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006343bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006343c1: push 0x9c6238 */ { u32 v = 0x9c6238u; r_esp -= 4; W32(r_esp, v); }
    /* 006343c6: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6343cbu); f_007b9a88();
    /* 006343cb: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006343ce: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6343d3u); f_007b999c();
    /* 006343d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006343d4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006343d7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6343dcu); f_007b4f54();
    /* 006343dc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006343df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006343e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006343e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006343eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006343ec: ret 4 */ FN_RET(0x00634338); r_esp += 8; return;
}

void f_006343f0(void)
{
    FN_ENTER(0x006343f0);
    /* 006343f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006343f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006343f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006343f5: push 0x8e403c */ { u32 v = 0x8e403cu; r_esp -= 4; W32(r_esp, v); }
    /* 006343fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634401: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634408: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063440b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063440e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00634411: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00634414: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00634417: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063441c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00634423: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x634428u); f_005caba4();
    /* 00634428: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634429: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063442c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063442e: je 0x634461 */ if (fZ) goto L_00634461;
L_00634430:; BB(0x00634430);
    /* 00634430: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00634437: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063443e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00634441: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634444: call 0x634468 */ r_esp -= 4; W32(r_esp, 0x634449u); f_00634468();
    /* 00634449: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063444c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00634453:; BB(0x00634453);
    /* 00634453: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634456: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063445d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063445f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634460: ret  */ FN_RET(0x006343f0); r_esp += 4; return;
L_00634461:; BB(0x00634461);
    /* 00634461: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634463: jmp 0x634453 */ goto L_00634453;
}

void f_00634468(void) /* sub_634468 */
{
    FN_ENTER(0x00634468);
    /* 00634468: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634469: mov ebp, esp */ r_ebp = r_esp;
    /* 0063446b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063446d: push 0x8e4058 */ { u32 v = 0x8e4058u; r_esp -= 4; W32(r_esp, v); }
    /* 00634472: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634479: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634480: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634483: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00634486: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00634489: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063448c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063448f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00634492: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00634495: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00634498: call 0x633b80 */ r_esp -= 4; W32(r_esp, 0x63449du); f_00633b80();
    /* 0063449d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006344a4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006344a7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006344aa: mov dword ptr [ecx], 0xb2be80 */ W32((u32)(r_ecx), 0xb2be80u);
    /* 006344b0: mov eax, dword ptr [0x9c6388] */ r_eax = R32((u32)(0x9c6388u));
    /* 006344b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006344b6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006344b9: call dword ptr [0xb2be94] */ { u32 t = R32((u32)(0xb2be94u)); r_esp -= 4; W32(r_esp, 0x6344bfu); call_ind(t); }
    /* 006344bf: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 006344c5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006344c7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6344ccu); f_005b8610();
    /* 006344cc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006344cf: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 006344d5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006344d7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006344da: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6344dfu); f_005b8624();
    /* 006344df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006344e2: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 006344ec: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006344ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006344f1: push 0x9c6238 */ { u32 v = 0x9c6238u; r_esp -= 4; W32(r_esp, v); }
    /* 006344f6: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6344fbu); f_007b9a88();
    /* 006344fb: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006344fe: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x634503u); f_007b999c();
    /* 00634503: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634504: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634507: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63450cu); f_007b4f54();
    /* 0063450c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063450f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634512: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634519: mov esp, ebp */ r_esp = r_ebp;
    /* 0063451b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063451c: ret 4 */ FN_RET(0x00634468); r_esp += 8; return;
}

void f_00634520(void)
{
    FN_ENTER(0x00634520);
    /* 00634520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634521: mov ebp, esp */ r_ebp = r_esp;
    /* 00634523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634525: push 0x8e4080 */ { u32 v = 0x8e4080u; r_esp -= 4; W32(r_esp, v); }
    /* 0063452a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634531: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634538: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063453b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063453e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00634541: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00634544: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00634547: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063454c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00634553: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x634558u); f_005caba4();
    /* 00634558: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634559: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063455c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063455e: je 0x634591 */ if (fZ) goto L_00634591;
L_00634560:; BB(0x00634560);
    /* 00634560: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00634567: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063456e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00634571: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634574: call 0x634598 */ r_esp -= 4; W32(r_esp, 0x634579u); f_00634598();
    /* 00634579: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063457c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00634583:; BB(0x00634583);
    /* 00634583: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634586: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063458d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063458f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634590: ret  */ FN_RET(0x00634520); r_esp += 4; return;
L_00634591:; BB(0x00634591);
    /* 00634591: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634593: jmp 0x634583 */ goto L_00634583;
}

void f_00634598(void) /* sub_634598 */
{
    FN_ENTER(0x00634598);
    /* 00634598: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634599: mov ebp, esp */ r_ebp = r_esp;
    /* 0063459b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063459d: push 0x8e409c */ { u32 v = 0x8e409cu; r_esp -= 4; W32(r_esp, v); }
    /* 006345a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006345a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006345a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006345b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006345b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006345b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006345b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006345bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006345bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006345c2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006345c5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006345c8: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x6345cdu); f_006338e8();
    /* 006345cd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006345d4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006345d7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006345da: mov dword ptr [ecx], 0xb2bf28 */ W32((u32)(r_ecx), 0xb2bf28u);
    /* 006345e0: mov eax, dword ptr [0x9c638c] */ r_eax = R32((u32)(0x9c638cu));
    /* 006345e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006345e6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006345e9: call dword ptr [0xb2bf3c] */ { u32 t = R32((u32)(0xb2bf3cu)); r_esp -= 4; W32(r_esp, 0x6345efu); call_ind(t); }
    /* 006345ef: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 006345f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006345f7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6345fcu); f_005b8610();
    /* 006345fc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006345ff: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634605: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634607: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063460a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63460fu); f_005b8624();
    /* 0063460f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634612: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 0063461c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063461f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634621: push 0x9c6238 */ { u32 v = 0x9c6238u; r_esp -= 4; W32(r_esp, v); }
    /* 00634626: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63462bu); f_007b9a88();
    /* 0063462b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063462e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x634633u); f_007b999c();
    /* 00634633: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634634: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634637: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63463cu); f_007b4f54();
    /* 0063463c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063463f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634642: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634649: mov esp, ebp */ r_esp = r_ebp;
    /* 0063464b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063464c: ret 4 */ FN_RET(0x00634598); r_esp += 8; return;
}

void f_00634650(void)
{
    FN_ENTER(0x00634650);
    /* 00634650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634651: mov ebp, esp */ r_ebp = r_esp;
    /* 00634653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634655: push 0x8e40c4 */ { u32 v = 0x8e40c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063465a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634661: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634668: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063466b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063466e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00634671: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00634674: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00634677: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0063467c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00634683: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x634688u); f_005caba4();
    /* 00634688: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634689: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063468c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063468e: je 0x6346c1 */ if (fZ) goto L_006346c1;
L_00634690:; BB(0x00634690);
    /* 00634690: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00634697: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063469e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006346a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006346a4: call 0x6346c8 */ r_esp -= 4; W32(r_esp, 0x6346a9u); f_006346c8();
    /* 006346a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006346ac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006346b3:; BB(0x006346b3);
    /* 006346b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006346b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006346bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006346bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006346c0: ret  */ FN_RET(0x00634650); r_esp += 4; return;
L_006346c1:; BB(0x006346c1);
    /* 006346c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006346c3: jmp 0x6346b3 */ goto L_006346b3;
}

void f_006346c8(void) /* sub_6346C8 */
{
    FN_ENTER(0x006346c8);
    /* 006346c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006346c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006346cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006346cd: push 0x8e40e0 */ { u32 v = 0x8e40e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006346d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006346d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006346d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006346e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006346e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006346e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006346e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006346ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006346ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006346f2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006346f5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006346f8: call 0x6347a4 */ r_esp -= 4; W32(r_esp, 0x6346fdu); f_006347a4();
    /* 006346fd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00634704: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634707: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063470a: mov dword ptr [ecx], 0xb2bf60 */ W32((u32)(r_ecx), 0xb2bf60u);
    /* 00634710: mov eax, dword ptr [0x9c6390] */ r_eax = R32((u32)(0x9c6390u));
    /* 00634715: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634716: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00634719: call dword ptr [0xb2bf74] */ { u32 t = R32((u32)(0xb2bf74u)); r_esp -= 4; W32(r_esp, 0x63471fu); call_ind(t); }
    /* 0063471f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634725: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634727: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63472cu); f_005b8610();
    /* 0063472c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063472f: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634735: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634737: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0063473a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63473fu); f_005b8624();
    /* 0063473f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634742: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 0063474c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0063474f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634751: push 0x9c6238 */ { u32 v = 0x9c6238u; r_esp -= 4; W32(r_esp, v); }
    /* 00634756: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63475bu); f_007b9a88();
    /* 0063475b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063475e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x634763u); f_007b999c();
    /* 00634763: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634764: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634767: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63476cu); f_007b4f54();
    /* 0063476c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063476f: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00634775: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634777: jl 0x634780 */ if ((fS!=fO)) goto L_00634780;
L_00634779:; BB(0x00634779);
    /* 00634779: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063477e: jl 0x63478c */ if ((fS!=fO)) goto L_0063478c;
L_00634780:; BB(0x00634780);
    /* 00634780: mov dword ptr [edx + 0xb8], 0xffffffff */ W32((u32)(r_edx+0xb8u), 0xffffffffu);
    /* 0063478a: jmp 0x634792 */ goto L_00634792;
L_0063478c:; BB(0x0063478c);
    /* 0063478c: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
L_00634792:; BB(0x00634792);
    /* 00634792: mov eax, edx */ r_eax = r_edx;
    /* 00634794: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634797: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063479e: mov esp, ebp */ r_esp = r_ebp;
    /* 006347a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006347a1: ret 4 */ FN_RET(0x006346c8); r_esp += 8; return;
}

void f_006347a4(void) /* sub_6347A4 */
{
    FN_ENTER(0x006347a4);
    /* 006347a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006347a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006347a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006347a9: call 0x6338e8 */ r_esp -= 4; W32(r_esp, 0x6347aeu); f_006338e8();
    /* 006347ae: mov dword ptr [ebx], 0xb2bc60 */ W32((u32)(r_ebx), 0xb2bc60u);
    /* 006347b4: mov edx, dword ptr [0x9c635c] */ r_edx = R32((u32)(0x9c635cu));
    /* 006347ba: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006347bd: mov eax, ebx */ r_eax = r_ebx;
    /* 006347bf: mov dword ptr [ebx + 0xb4], 0 */ W32((u32)(r_ebx+0xb4u), 0x0u);
    /* 006347c9: mov dword ptr [ebx + 0xb8], 0xffffffff */ W32((u32)(r_ebx+0xb8u), 0xffffffffu);
    /* 006347d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006347d4: ret  */ FN_RET(0x006347a4); r_esp += 4; return;
}

void f_006347d8(void)
{
    FN_ENTER(0x006347d8);
    /* 006347d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006347d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006347db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006347dd: push 0x8e4108 */ { u32 v = 0x8e4108u; r_esp -= 4; W32(r_esp, v); }
    /* 006347e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006347e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006347e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006347f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006347f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006347f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006347f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006347fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006347ff: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00634804: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063480b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x634810u); f_005caba4();
    /* 00634810: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634811: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00634814: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634816: je 0x634849 */ if (fZ) goto L_00634849;
L_00634818:; BB(0x00634818);
    /* 00634818: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063481f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00634826: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00634829: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063482c: call 0x634850 */ r_esp -= 4; W32(r_esp, 0x634831u); f_00634850();
    /* 00634831: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634834: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063483b:; BB(0x0063483b);
    /* 0063483b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063483e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634845: mov esp, ebp */ r_esp = r_ebp;
    /* 00634847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634848: ret  */ FN_RET(0x006347d8); r_esp += 4; return;
L_00634849:; BB(0x00634849);
    /* 00634849: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063484b: jmp 0x63483b */ goto L_0063483b;
}

void f_00634850(void) /* sub_634850 */
{
    FN_ENTER(0x00634850);
    /* 00634850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634851: mov ebp, esp */ r_ebp = r_esp;
    /* 00634853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634855: push 0x8e4124 */ { u32 v = 0x8e4124u; r_esp -= 4; W32(r_esp, v); }
    /* 0063485a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634861: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634868: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063486b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063486e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00634871: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00634874: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00634877: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063487a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063487d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00634880: call 0x6347a4 */ r_esp -= 4; W32(r_esp, 0x634885u); f_006347a4();
    /* 00634885: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063488c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063488f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00634892: mov dword ptr [ecx], 0xb2bfc0 */ W32((u32)(r_ecx), 0xb2bfc0u);
    /* 00634898: mov eax, dword ptr [0x9c6394] */ r_eax = R32((u32)(0x9c6394u));
    /* 0063489d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063489e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006348a1: call dword ptr [0xb2bfd4] */ { u32 t = R32((u32)(0xb2bfd4u)); r_esp -= 4; W32(r_esp, 0x6348a7u); call_ind(t); }
    /* 006348a7: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 006348ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006348af: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6348b4u); f_005b8610();
    /* 006348b4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006348b7: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 006348bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006348bf: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006348c2: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6348c7u); f_005b8624();
    /* 006348c7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006348ca: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 006348d4: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006348d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006348d9: push 0x9c6238 */ { u32 v = 0x9c6238u; r_esp -= 4; W32(r_esp, v); }
    /* 006348de: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6348e3u); f_007b9a88();
    /* 006348e3: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006348e6: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6348ebu); f_007b999c();
    /* 006348eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006348ec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006348ef: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6348f4u); f_007b4f54();
    /* 006348f4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006348f7: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 006348fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006348ff: jl 0x634908 */ if ((fS!=fO)) goto L_00634908;
L_00634901:; BB(0x00634901);
    /* 00634901: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00634906: jl 0x634914 */ if ((fS!=fO)) goto L_00634914;
L_00634908:; BB(0x00634908);
    /* 00634908: mov dword ptr [edx + 0xb8], 0xffffffff */ W32((u32)(r_edx+0xb8u), 0xffffffffu);
    /* 00634912: jmp 0x63491a */ goto L_0063491a;
L_00634914:; BB(0x00634914);
    /* 00634914: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
L_0063491a:; BB(0x0063491a);
    /* 0063491a: mov eax, edx */ r_eax = r_edx;
    /* 0063491c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063491f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634926: mov esp, ebp */ r_esp = r_ebp;
    /* 00634928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634929: ret 4 */ FN_RET(0x00634850); r_esp += 8; return;
}

void f_0063492c(void)
{
    FN_ENTER(0x0063492c);
    /* 0063492c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063492d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063492f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634931: push 0x8e414c */ { u32 v = 0x8e414cu; r_esp -= 4; W32(r_esp, v); }
    /* 00634936: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063493c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063493d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634944: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634947: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063494a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063494d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00634950: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00634953: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00634958: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063495f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x634964u); f_005caba4();
    /* 00634964: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634965: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00634968: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063496a: je 0x63499d */ if (fZ) goto L_0063499d;
L_0063496c:; BB(0x0063496c);
    /* 0063496c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00634973: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063497a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063497d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634980: call 0x6349a4 */ r_esp -= 4; W32(r_esp, 0x634985u); f_006349a4();
    /* 00634985: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634988: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063498f:; BB(0x0063498f);
    /* 0063498f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634992: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634999: mov esp, ebp */ r_esp = r_ebp;
    /* 0063499b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063499c: ret  */ FN_RET(0x0063492c); r_esp += 4; return;
L_0063499d:; BB(0x0063499d);
    /* 0063499d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063499f: jmp 0x63498f */ goto L_0063498f;
}

void f_006349a4(void) /* sub_6349A4 */
{
    FN_ENTER(0x006349a4);
    /* 006349a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006349a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006349a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006349a9: push 0x8e4168 */ { u32 v = 0x8e4168u; r_esp -= 4; W32(r_esp, v); }
    /* 006349ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006349b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006349b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006349bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006349bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006349c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006349c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006349c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006349cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006349ce: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006349d1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006349d4: call 0x6347a4 */ r_esp -= 4; W32(r_esp, 0x6349d9u); f_006347a4();
    /* 006349d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006349e0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006349e3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006349e6: mov dword ptr [ecx], 0xb2c020 */ W32((u32)(r_ecx), 0xb2c020u);
    /* 006349ec: mov eax, dword ptr [0x9c6398] */ r_eax = R32((u32)(0x9c6398u));
    /* 006349f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006349f2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006349f5: call dword ptr [0xb2c034] */ { u32 t = R32((u32)(0xb2c034u)); r_esp -= 4; W32(r_esp, 0x6349fbu); call_ind(t); }
    /* 006349fb: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634a01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a03: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x634a08u); f_005b8610();
    /* 00634a08: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634a0b: mov ecx, dword ptr [0xa8f048] */ r_ecx = R32((u32)(0xa8f048u));
    /* 00634a11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a13: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00634a16: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x634a1bu); f_005b8624();
    /* 00634a1b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634a1e: mov dword ptr [ecx + 0xb0], 0x42200000 */ W32((u32)(r_ecx+0xb0u), 0x42200000u);
    /* 00634a28: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00634a2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a2d: push 0x9c6238 */ { u32 v = 0x9c6238u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a32: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x634a37u); f_007b9a88();
    /* 00634a37: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00634a3a: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x634a3fu); f_007b999c();
    /* 00634a3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634a40: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634a43: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x634a48u); f_007b4f54();
    /* 00634a48: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00634a4b: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00634a51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634a53: jl 0x634a5c */ if ((fS!=fO)) goto L_00634a5c;
L_00634a55:; BB(0x00634a55);
    /* 00634a55: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00634a5a: jl 0x634a68 */ if ((fS!=fO)) goto L_00634a68;
L_00634a5c:; BB(0x00634a5c);
    /* 00634a5c: mov dword ptr [edx + 0xb8], 0xffffffff */ W32((u32)(r_edx+0xb8u), 0xffffffffu);
    /* 00634a66: jmp 0x634a6e */ goto L_00634a6e;
L_00634a68:; BB(0x00634a68);
    /* 00634a68: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
L_00634a6e:; BB(0x00634a6e);
    /* 00634a6e: mov eax, edx */ r_eax = r_edx;
    /* 00634a70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634a73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634a7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00634a7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634a7d: ret 4 */ FN_RET(0x006349a4); r_esp += 8; return;
}

void f_00634a80(void) /* sub_634A80 */
{
    FN_ENTER(0x00634a80);
    /* 00634a80: mov dword ptr [0xa8f038], 0x3f800000 */ W32((u32)(0xa8f038u), 0x3f800000u);
    /* 00634a8a: mov dword ptr [0xa8f03c], 0x41000000 */ W32((u32)(0xa8f03cu), 0x41000000u);
    /* 00634a94: mov dword ptr [0xa8f040], 0x3fc00000 */ W32((u32)(0xa8f040u), 0x3fc00000u);
    /* 00634a9e: ret  */ FN_RET(0x00634a80); r_esp += 4; return;
}

void f_00634aa0(void) /* sub_634AA0 */
{
    FN_ENTER(0x00634aa0);
    /* 00634aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00634aa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634aa5: push 0x8e424c */ { u32 v = 0x8e424cu; r_esp -= 4; W32(r_esp, v); }
    /* 00634aaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634ab1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634ab8: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634abb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00634abe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00634ac1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00634ac4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00634ac7: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x634accu); f_00807ac0();
    /* 00634acc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634acf: je 0x634cdf */ if (fZ) goto L_00634cdf;
L_00634ad5:; BB(0x00634ad5);
    /* 00634ad5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634ad8: jne 0x634b86 */ if (!fZ) goto L_00634b86;
L_00634ade:; BB(0x00634ade);
    /* 00634ade: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00634ae5: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00634aea: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x634aefu); f_008581c5();
    /* 00634aef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634af0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00634af3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634af5: je 0x634d93 */ if (fZ) goto L_00634d93;
L_00634afb:; BB(0x00634afb);
    /* 00634afb: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00634b02: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00634b09: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634b0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634b0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634b11: push 0x9c62a0 */ { u32 v = 0x9c62a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b18: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x634b1du); f_005b7a84();
    /* 00634b1d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634b20: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00634b27:; BB(0x00634b27);
    /* 00634b27: mov dword ptr [0xa8f048], eax */ W32((u32)(0xa8f048u), r_eax);
    /* 00634b2c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00634b33: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00634b3a: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b3f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x634b44u); f_008581c5();
    /* 00634b44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634b45: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00634b48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634b4a: je 0x634d8c */ if (fZ) goto L_00634d8c;
L_00634b50:; BB(0x00634b50);
    /* 00634b50: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00634b57: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00634b5e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634b61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634b64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634b65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634b66: push 0x9c6318 */ { u32 v = 0x9c6318u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b6d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x634b72u); f_005b7a84();
    /* 00634b72: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634b75: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00634b7c:; BB(0x00634b7c);
    /* 00634b7c: mov dword ptr [0xa8f044], eax */ W32((u32)(0xa8f044u), r_eax);
    /* 00634b81: jmp 0x634d7e */ goto L_00634d7e;
L_00634b86:; BB(0x00634b86);
    /* 00634b86: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634b89: jne 0x634c37 */ if (!fZ) goto L_00634c37;
L_00634b8f:; BB(0x00634b8f);
    /* 00634b8f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00634b96: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b9b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x634ba0u); f_008581c5();
    /* 00634ba0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634ba1: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00634ba4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634ba6: je 0x634da1 */ if (fZ) goto L_00634da1;
L_00634bac:; BB(0x00634bac);
    /* 00634bac: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00634bb3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00634bba: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634bbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634bbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634bc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634bc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634bc2: push 0x9c62c0 */ { u32 v = 0x9c62c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634bc7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634bc9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x634bceu); f_005b7a84();
    /* 00634bce: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634bd1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00634bd8:; BB(0x00634bd8);
    /* 00634bd8: mov dword ptr [0xa8f048], eax */ W32((u32)(0xa8f048u), r_eax);
    /* 00634bdd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00634be4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00634beb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00634bf0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x634bf5u); f_008581c5();
    /* 00634bf5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634bf6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00634bf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634bfb: je 0x634d9a */ if (fZ) goto L_00634d9a;
L_00634c01:; BB(0x00634c01);
    /* 00634c01: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00634c08: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00634c0f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634c12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634c15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634c17: push 0x9c6344 */ { u32 v = 0x9c6344u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c1e: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x634c23u); f_005b7a84();
    /* 00634c23: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634c26: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00634c2d:; BB(0x00634c2d);
    /* 00634c2d: mov dword ptr [0xa8f044], eax */ W32((u32)(0xa8f044u), r_eax);
    /* 00634c32: jmp 0x634d7e */ goto L_00634d7e;
L_00634c37:; BB(0x00634c37);
    /* 00634c37: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00634c3e: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c43: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x634c48u); f_008581c5();
    /* 00634c48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634c49: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00634c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634c4e: je 0x634daf */ if (fZ) goto L_00634daf;
L_00634c54:; BB(0x00634c54);
    /* 00634c54: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00634c5b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00634c62: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634c65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634c67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634c68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634c69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634c6a: push 0x9c6274 */ { u32 v = 0x9c6274u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c71: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x634c76u); f_005b7a84();
    /* 00634c76: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634c79: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00634c80:; BB(0x00634c80);
    /* 00634c80: mov dword ptr [0xa8f048], eax */ W32((u32)(0xa8f048u), r_eax);
    /* 00634c85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00634c8c: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00634c93: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c98: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x634c9du); f_008581c5();
    /* 00634c9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634c9e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00634ca1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634ca3: je 0x634da8 */ if (fZ) goto L_00634da8;
L_00634ca9:; BB(0x00634ca9);
    /* 00634ca9: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00634cb0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00634cb7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634cba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634cbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634cbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634cbf: push 0x9c62ec */ { u32 v = 0x9c62ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00634cc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634cc6: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x634ccbu); f_005b7a84();
    /* 00634ccb: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634cce: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00634cd5:; BB(0x00634cd5);
    /* 00634cd5: mov dword ptr [0xa8f044], eax */ W32((u32)(0xa8f044u), r_eax);
    /* 00634cda: jmp 0x634d7e */ goto L_00634d7e;
L_00634cdf:; BB(0x00634cdf);
    /* 00634cdf: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00634ce6: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00634ceb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x634cf0u); f_008581c5();
    /* 00634cf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634cf1: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00634cf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634cf6: je 0x634dba */ if (fZ) goto L_00634dba;
L_00634cfc:; BB(0x00634cfc);
    /* 00634cfc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00634d03: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00634d0a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634d0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634d11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634d12: push 0x9c6274 */ { u32 v = 0x9c6274u; r_esp -= 4; W32(r_esp, v); }
    /* 00634d17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634d19: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x634d1eu); f_005b7a84();
    /* 00634d1e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634d21: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00634d28:; BB(0x00634d28);
    /* 00634d28: mov dword ptr [0xa8f048], eax */ W32((u32)(0xa8f048u), r_eax);
    /* 00634d2d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00634d34: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00634d3b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00634d40: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x634d45u); f_008581c5();
    /* 00634d45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634d46: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00634d49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634d4b: je 0x634db6 */ if (fZ) goto L_00634db6;
L_00634d4d:; BB(0x00634d4d);
    /* 00634d4d: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00634d54: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00634d5b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634d5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634d61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634d62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634d63: push 0x9c62ec */ { u32 v = 0x9c62ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00634d68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634d6a: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x634d6fu); f_005b7a84();
    /* 00634d6f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00634d72: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00634d79:; BB(0x00634d79);
    /* 00634d79: mov dword ptr [0xa8f044], eax */ W32((u32)(0xa8f044u), r_eax);
L_00634d7e:; BB(0x00634d7e);
    /* 00634d7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634d81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634d88: mov esp, ebp */ r_esp = r_ebp;
    /* 00634d8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634d8b: ret  */ FN_RET(0x00634aa0); r_esp += 4; return;
L_00634d8c:; BB(0x00634d8c);
    /* 00634d8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634d8e: jmp 0x634b7c */ goto L_00634b7c;
L_00634d93:; BB(0x00634d93);
    /* 00634d93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634d95: jmp 0x634b27 */ goto L_00634b27;
L_00634d9a:; BB(0x00634d9a);
    /* 00634d9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634d9c: jmp 0x634c2d */ goto L_00634c2d;
L_00634da1:; BB(0x00634da1);
    /* 00634da1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634da3: jmp 0x634bd8 */ goto L_00634bd8;
L_00634da8:; BB(0x00634da8);
    /* 00634da8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634daa: jmp 0x634cd5 */ goto L_00634cd5;
L_00634daf:; BB(0x00634daf);
    /* 00634daf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634db1: jmp 0x634c80 */ goto L_00634c80;
L_00634db6:; BB(0x00634db6);
    /* 00634db6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634db8: jmp 0x634d79 */ goto L_00634d79;
L_00634dba:; BB(0x00634dba);
    /* 00634dba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634dbc: jmp 0x634d28 */ goto L_00634d28;
}

void f_00634dc4(void) /* sub_634DC4 */
{
    FN_ENTER(0x00634dc4);
    /* 00634dc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00634dc5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00634dc7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00634dc9: call 0x634de8 */ r_esp -= 4; W32(r_esp, 0x634dceu); f_00634de8();
    /* 00634dce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00634dd2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634dd4: jne 0x634dda */ if (!fZ) goto L_00634dda;
L_00634dd6:; BB(0x00634dd6);
    /* 00634dd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00634dd7: ret 4 */ FN_RET(0x00634dc4); r_esp += 8; return;
L_00634dda:; BB(0x00634dda);
    /* 00634dda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00634ddb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x634de0u); f_005c2f74();
    /* 00634de0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634de1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00634de2: ret 4 */ FN_RET(0x00634dc4); r_esp += 8; return;
}

void f_00634de8(void) /* sub_634DE8 */
{
    FN_ENTER(0x00634de8);
    /* 00634de8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634de9: mov ebp, esp */ r_ebp = r_esp;
    /* 00634deb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634ded: push 0x8e4268 */ { u32 v = 0x8e4268u; r_esp -= 4; W32(r_esp, v); }
    /* 00634df2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634df8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634df9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634e00: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634e03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00634e06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00634e09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00634e0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00634e0f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00634e12: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00634e19: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634e1c: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00634e22: mov dword ptr [eax], 0xb2c2a0 */ W32((u32)(r_eax), 0xb2c2a0u);
    /* 00634e28: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634e2a: je 0x634e46 */ if (fZ) goto L_00634e46;
L_00634e2c:; BB(0x00634e2c);
    /* 00634e2c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00634e30: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00634e35: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00634e39: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634e3c: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
L_00634e46:; BB(0x00634e46);
    /* 00634e46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634e47: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x634e4cu); f_007b4e84();
    /* 00634e4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634e4d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634e50: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x634e55u); f_007b9c8c();
    /* 00634e55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00634e5c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634e5f: call 0x63323c */ r_esp -= 4; W32(r_esp, 0x634e64u); f_0063323c();
    /* 00634e64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634e67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634e6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00634e70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634e71: ret  */ FN_RET(0x00634de8); r_esp += 4; return;
}

void f_00634e74(void) /* sub_634E74 */
{
    FN_ENTER(0x00634e74);
    /* 00634e74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00634e75: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00634e77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00634e79: call 0x634e98 */ r_esp -= 4; W32(r_esp, 0x634e7eu); f_00634e98();
    /* 00634e7e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00634e82: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634e84: jne 0x634e8a */ if (!fZ) goto L_00634e8a;
L_00634e86:; BB(0x00634e86);
    /* 00634e86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00634e87: ret 4 */ FN_RET(0x00634e74); r_esp += 8; return;
L_00634e8a:; BB(0x00634e8a);
    /* 00634e8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00634e8b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x634e90u); f_005c2f74();
    /* 00634e90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634e91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00634e92: ret 4 */ FN_RET(0x00634e74); r_esp += 8; return;
}

void f_00634e98(void) /* sub_634E98 */
{
    FN_ENTER(0x00634e98);
    /* 00634e98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634e99: mov ebp, esp */ r_ebp = r_esp;
    /* 00634e9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634e9d: push 0x8e42a8 */ { u32 v = 0x8e42a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00634ea2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634ea8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634ea9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634eb0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634eb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00634eb6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00634eb9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00634ebc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00634ebf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00634ec2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00634ec9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634ecc: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 00634ed2: mov dword ptr [eax], 0xb2c300 */ W32((u32)(r_eax), 0xb2c300u);
    /* 00634ed8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634eda: je 0x634ef6 */ if (fZ) goto L_00634ef6;
L_00634edc:; BB(0x00634edc);
    /* 00634edc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00634ee0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00634ee5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00634ee9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634eec: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
L_00634ef6:; BB(0x00634ef6);
    /* 00634ef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634ef7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x634efcu); f_007b4e84();
    /* 00634efc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634efd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634f00: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x634f05u); f_007b9c8c();
    /* 00634f05: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00634f0c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634f0f: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00634f15: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x634f1au); f_005770ec();
    /* 00634f1a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00634f21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634f24: call 0x63323c */ r_esp -= 4; W32(r_esp, 0x634f29u); f_0063323c();
    /* 00634f29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634f2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634f33: mov esp, ebp */ r_esp = r_ebp;
    /* 00634f35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634f36: ret  */ FN_RET(0x00634e98); r_esp += 4; return;
}

void f_00634f38(void) /* sub_634F38 */
{
    FN_ENTER(0x00634f38);
    /* 00634f38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00634f39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00634f3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00634f3d: call 0x634f5c */ r_esp -= 4; W32(r_esp, 0x634f42u); f_00634f5c();
    /* 00634f42: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00634f46: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00634f48: jne 0x634f4e */ if (!fZ) goto L_00634f4e;
L_00634f4a:; BB(0x00634f4a);
    /* 00634f4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00634f4b: ret 4 */ FN_RET(0x00634f38); r_esp += 8; return;
L_00634f4e:; BB(0x00634f4e);
    /* 00634f4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00634f4f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x634f54u); f_005c2f74();
    /* 00634f54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634f55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00634f56: ret 4 */ FN_RET(0x00634f38); r_esp += 8; return;
}

void f_00634f5c(void) /* sub_634F5C */
{
    FN_ENTER(0x00634f5c);
    /* 00634f5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634f5d: mov ebp, esp */ r_ebp = r_esp;
    /* 00634f5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634f61: push 0x8e42e8 */ { u32 v = 0x8e42e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00634f66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634f6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00634f74: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634f77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00634f7a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00634f7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00634f80: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00634f83: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00634f86: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00634f8d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634f90: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 00634f96: mov dword ptr [eax], 0xb2c360 */ W32((u32)(r_eax), 0xb2c360u);
    /* 00634f9c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634f9e: je 0x634fba */ if (fZ) goto L_00634fba;
L_00634fa0:; BB(0x00634fa0);
    /* 00634fa0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00634fa4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00634fa9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00634fad: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634fb0: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
L_00634fba:; BB(0x00634fba);
    /* 00634fba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634fbb: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x634fc0u); f_007b4e84();
    /* 00634fc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00634fc1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634fc4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x634fc9u); f_007b9c8c();
    /* 00634fc9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00634fd0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634fd3: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00634fd9: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x634fdeu); f_005770ec();
    /* 00634fde: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00634fe5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00634fe8: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x634fedu); f_00632b0c();
    /* 00634fed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634ff0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00634ff7: mov esp, ebp */ r_esp = r_ebp;
    /* 00634ff9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634ffa: ret  */ FN_RET(0x00634f5c); r_esp += 4; return;
}

void f_00634ffc(void) /* sub_634FFC */
{
    FN_ENTER(0x00634ffc);
    /* 00634ffc: mov ecx, dword ptr [0xa8f0ac] */ r_ecx = R32((u32)(0xa8f0acu));
    /* 00635002: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635004: je 0x635021 */ if (fZ) goto L_00635021;
L_00635006:; BB(0x00635006);
    /* 00635006: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x63500bu); f_00829de0();
    /* 0063500b: push dword ptr [0xa8f0ac] */ { u32 v = R32((u32)(0xa8f0acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00635011: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x635016u); f_0082e960();
    /* 00635016: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00635017: mov dword ptr [0xa8f0ac], 0 */ W32((u32)(0xa8f0acu), 0x0u);
L_00635021:; BB(0x00635021);
    /* 00635021: mov ecx, dword ptr [0xa8f0b0] */ r_ecx = R32((u32)(0xa8f0b0u));
    /* 00635027: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00635029: je 0x63503e */ if (fZ) goto L_0063503e;
L_0063502b:; BB(0x0063502b);
    /* 0063502b: je 0x635034 */ if (fZ) goto L_00635034;
L_0063502d:; BB(0x0063502d);
    /* 0063502d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063502f: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x635034u); f_004066a8();
L_00635034:; BB(0x00635034);
    /* 00635034: mov dword ptr [0xa8f0b0], 0 */ W32((u32)(0xa8f0b0u), 0x0u);
L_0063503e:; BB(0x0063503e);
    /* 0063503e: ret  */ FN_RET(0x00634ffc); r_esp += 4; return;
}

