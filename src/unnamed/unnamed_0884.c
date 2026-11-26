#include "protos.h"

void f_0088413c(void) /* sub_88413C */
{
    FN_ENTER(0x0088413c);
    /* 0088413c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088413d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088413e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00884141: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00884145: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00884149: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0088414b: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0088414e: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00884150: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00884152: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884153: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x884158u); f_008587c7();
    /* 00884158: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0088415b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088415d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0088415f: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x884164u); f_008587c7();
    /* 00884164: mov ecx, eax */ r_ecx = r_eax;
    /* 00884166: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00884169: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 0088416c: mov eax, ebx */ r_eax = r_ebx;
    /* 0088416e: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00884171: call 0x883f14 */ r_esp -= 4; W32(r_esp, 0x884176u); f_00883f14();
    /* 00884176: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00884179: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088417a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088417b: ret  */ FN_RET(0x0088413c); r_esp += 4; return;
}

void f_0088417c(void) /* sub_88417C */
{
    FN_ENTER(0x0088417c);
    /* 0088417c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00884180: mov eax, dword ptr [edx*4 + 0xa335a0] */ r_eax = R32((u32)(r_edx*4+0xa335a0u));
    /* 00884187: ret  */ FN_RET(0x0088417c); r_esp += 4; return;
}

void f_00884188(void) /* sub_884188 */
{
    FN_ENTER(0x00884188);
L_00884188:; BB(0x00884188);
    /* 00884188: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884192: jne 0x8841b0 */ if (!fZ) goto L_008841b0;
L_00884198:; BB(0x00884198);
    /* 00884198: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008841a2: jne 0x884620 */ if (!fZ) goto L_00884620;
L_008841a8:; BB(0x008841a8);
    /* 008841a8: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x8841adu); f_0086b8a0();
    /* 008841ad: jmp 0x884188 */ goto L_00884188;
L_008841b0:; BB(0x008841b0);
    /* 008841b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008841b1: mov ebx, esp */ r_ebx = r_esp;
    /* 008841b3: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008841b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008841b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008841b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008841b9: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008841bc: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008841bf: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008841c2: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 008841c5: mov ebp, 0 */ r_ebp = 0x0u;
    /* 008841ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008841cc: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 008841cf: mov edi, 0 */ r_edi = 0x0u;
    /* 008841d4: jne 0x8841d8 */ if (!fZ) goto L_008841d8;
L_008841d6:; BB(0x008841d6);
    /* 008841d6: mov esi, ebp */ r_esi = r_ebp;
L_008841d8:; BB(0x008841d8);
    /* 008841d8: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
    /* 008841db: jne 0x8841df */ if (!fZ) goto L_008841df;
L_008841dd:; BB(0x008841dd);
    /* 008841dd: mov ebp, edi */ r_ebp = r_edi;
L_008841df:; BB(0x008841df);
    /* 008841df: mov edi, dword ptr [eax + esi*4] */ r_edi = R32((u32)(r_eax+r_esi*4));
    /* 008841e2: mov edi, dword ptr [edi*4 + 0xa335a0] */ r_edi = R32((u32)(r_edi*4+0xa335a0u));
    /* 008841e9: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 008841ed: mov eax, dword ptr [eax + ebp*4] */ r_eax = R32((u32)(r_eax+r_ebp*4));
    /* 008841f0: mov eax, dword ptr [eax*4 + 0xa335a0] */ r_eax = R32((u32)(r_eax*4+0xa335a0u));
    /* 008841f7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008841fa: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 008841fd: mov eax, dword ptr [ecx + esi*4] */ r_eax = R32((u32)(r_ecx+r_esi*4));
    /* 00884200: mov edi, dword ptr [ecx + ebp*4] */ r_edi = R32((u32)(r_ecx+r_ebp*4));
    /* 00884203: mov ebp, edx */ r_ebp = r_edx;
    /* 00884205: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00884207: shr ebp, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0088420a: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088420c: sar ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0088420f: mov ecx, eax */ r_ecx = r_eax;
    /* 00884211: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00884213: shr ecx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00884216: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00884218: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0088421b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088421d: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088421f: mov esi, eax */ r_esi = r_eax;
    /* 00884221: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00884224: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884226: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00884228: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088422a: mov esi, edx */ r_esi = r_edx;
    /* 0088422c: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0088422f: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00884231: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00884233: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00884235: mov ebp, edi */ r_ebp = r_edi;
    /* 00884237: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00884239: shr ebp, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0088423c: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088423e: sar ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00884241: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00884243: mov ebp, edi */ r_ebp = r_edi;
    /* 00884245: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00884248: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088424a: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0088424c: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00884250: lea ebp, [esi + edi] */ r_ebp = (u32)(r_esi+r_edi);
    /* 00884253: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884255: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00884259: mov ebp, 0 */ r_ebp = 0x0u;
    /* 0088425e: jle 0x88430a */ if ((fZ||fS!=fO)) goto L_0088430a;
L_00884264:; BB(0x00884264);
    /* 00884264: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00884266: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00884269: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0088426d: jb 0x8842ef */ if (fC) goto L_008842ef;
L_00884273:; BB(0x00884273);
    /* 00884273: mov edi, ecx */ r_edi = r_ecx;
    /* 00884275: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 00884278: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0088427b: je 0x8842be */ if (fZ) goto L_008842be;
L_0088427d:; BB(0x0088427d);
    /* 0088427d: test ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884283: jne 0x8842ef */ if (!fZ) goto L_008842ef;
L_00884285:; BB(0x00884285);
    /* 00884285: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00884287: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088428a: shr ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0088428d: mov edi, ecx */ r_edi = r_ecx;
    /* 0088428f: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00884291: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00884295: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00884297: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0088429b: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0088429f: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008842a3: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
L_008842a6:; BB(0x008842a6);
    /* 008842a6: mov dword ptr [ecx + edi*4], eax */ W32((u32)(r_ecx+r_edi*4), r_eax);
    /* 008842a9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008842aa: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008842ac: jb 0x8842a6 */ if (fC) goto L_008842a6;
L_008842ae:; BB(0x008842ae);
    /* 008842ae: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 008842b2: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008842b6: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008842ba: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_008842be:; BB(0x008842be);
    /* 008842be: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008842c1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008842c3: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008842c5: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008842c8: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 008842cc: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008842d0: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
L_008842d3:; BB(0x008842d3);
    /* 008842d3: movaps xmmword ptr [ecx + ebp*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_ebp*4), &xmm[0], 16);
    /* 008842d7: movaps xmmword ptr [ecx + ebp*4 + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_ebp*4+0x10u), &xmm[0], 16);
    /* 008842dc: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008842df: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008842e1: jb 0x8842d3 */ if (fC) goto L_008842d3;
L_008842e3:; BB(0x008842e3);
    /* 008842e3: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 008842e7: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008842eb: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008842ed: jae 0x884308 */ if (!fC) goto L_00884308;
L_008842ef:; BB(0x008842ef);
    /* 008842ef: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008842f1: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 008842f5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008842f9: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
L_008842fc:; BB(0x008842fc);
    /* 008842fc: mov dword ptr [eax + edi*4], ebp */ W32((u32)(r_eax+r_edi*4), r_ebp);
    /* 008842ff: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00884300: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00884302: jb 0x8842fc */ if (fC) goto L_008842fc;
L_00884304:; BB(0x00884304);
    /* 00884304: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_00884308:; BB(0x00884308);
    /* 00884308: mov ebp, ecx */ r_ebp = r_ecx;
L_0088430a:; BB(0x0088430a);
    /* 0088430a: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088430c: jge 0x8844da */ if ((fS==fO)) goto L_008844da;
L_00884312:; BB(0x00884312);
    /* 00884312: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00884314: mov edi, eax */ r_edi = r_eax;
    /* 00884316: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00884318: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0088431c: cmp edi, 0xb */ {  u32 a = r_edi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088431f: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00884323: jb 0x884614 */ if (fC) goto L_00884614;
L_00884329:; BB(0x00884329);
    /* 00884329: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 0088432d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088432f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884331: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00884335: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884337: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0088433a: lea edi, [edi + eax] */ r_edi = (u32)(r_edi+r_eax);
    /* 0088433d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00884341: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00884343: jb 0x8845f0 */ if (fC) goto L_008845f0;
L_00884349:; BB(0x00884349);
    /* 00884349: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0088434d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088434f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884351: add ebp, dword ptr [ebx + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884354: mov eax, ebp */ r_eax = r_ebp;
    /* 00884356: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00884359: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0088435d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00884361: je 0x8843b9 */ if (fZ) goto L_008843b9;
L_00884363:; BB(0x00884363);
    /* 00884363: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00884367: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00884369: jne 0x88444a */ if (!fZ) goto L_0088444a;
L_0088436f:; BB(0x0088436f);
    /* 0088436f: mov edi, eax */ r_edi = r_eax;
    /* 00884371: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00884373: lea ecx, [edi + 0x10] */ r_ecx = (u32)(r_edi+0x10u);
    /* 00884376: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088437a: lea eax, [eax + edi + 0x10] */ r_eax = (u32)(r_eax+r_edi+0x10u);
    /* 0088437e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00884381: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00884385: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00884387: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0088438b: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0088438f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00884393: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00884397:; BB(0x00884397);
    /* 00884397: movss xmm0, dword ptr [ebp + edi*4] */ { u32 v = R32((u32)(r_ebp+r_edi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088439d: mulss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008843a2: movss dword ptr [ebp + edi*4], xmm0 */ W32((u32)(r_ebp+r_edi*4), xmm[0].d[0]);
    /* 008843a8: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008843a9: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008843ab: jb 0x884397 */ if (fC) goto L_00884397;
L_008843ad:; BB(0x008843ad);
    /* 008843ad: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 008843b1: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008843b5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_008843b9:; BB(0x008843b9);
    /* 008843b9: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008843bc: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008843be: add edi, dword ptr [esp + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008843c2: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008843c4: jne 0x884402 */ if (!fZ) goto L_00884402;
L_008843c6:; BB(0x008843c6);
    /* 008843c6: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008843ca: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_008843ce:; BB(0x008843ce);
    /* 008843ce: prefetchnta byte ptr [eax + ecx*4 + 0x40] */ ;
    /* 008843d3: movaps xmm0, xmmword ptr [ebp + ecx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+r_ecx*4), 16); xmm[0] = s; }
    /* 008843d8: movaps xmm1, xmmword ptr [ebp + ecx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+r_ecx*4+0x10u), 16); xmm[1] = s; }
    /* 008843dd: mulps xmm0, xmmword ptr [eax + ecx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ecx*4), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008843e1: movaps xmmword ptr [ebp + ecx*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+r_ecx*4), &xmm[0], 16);
    /* 008843e6: prefetchnta byte ptr [ebp + ecx*4 + 0x40] */ ;
    /* 008843eb: mulps xmm1, xmmword ptr [eax + ecx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ecx*4+0x10u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008843f0: movaps xmmword ptr [ebp + ecx*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+r_ecx*4+0x10u), &xmm[1], 16);
    /* 008843f5: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008843f8: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008843fa: jb 0x8843ce */ if (fC) goto L_008843ce;
L_008843fc:; BB(0x008843fc);
    /* 008843fc: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00884400: jmp 0x88443c */ goto L_0088443c;
L_00884402:; BB(0x00884402);
    /* 00884402: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00884406: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_0088440a:; BB(0x0088440a);
    /* 0088440a: movups xmm0, xmmword ptr [eax + ecx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ecx*4), 16); xmm[0] = s; }
    /* 0088440e: prefetchnta byte ptr [eax + ecx*4 + 0x40] */ ;
    /* 00884413: prefetchnta byte ptr [ebp + ecx*4 + 0x40] */ ;
    /* 00884418: mulps xmm0, xmmword ptr [ebp + ecx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+r_ecx*4), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 0088441d: movaps xmmword ptr [ebp + ecx*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+r_ecx*4), &xmm[0], 16);
    /* 00884422: movups xmm1, xmmword ptr [eax + ecx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ecx*4+0x10u), 16); xmm[1] = s; }
    /* 00884427: mulps xmm1, xmmword ptr [ebp + ecx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+r_ecx*4+0x10u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 0088442c: movaps xmmword ptr [ebp + ecx*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+r_ecx*4+0x10u), &xmm[1], 16);
    /* 00884431: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00884434: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00884436: jb 0x88440a */ if (fC) goto L_0088440a;
L_00884438:; BB(0x00884438);
    /* 00884438: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
L_0088443c:; BB(0x0088443c);
    /* 0088443c: mov eax, ecx */ r_eax = r_ecx;
    /* 0088443e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00884442: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00884444: jae 0x8844da */ if (!fC) goto L_008844da;
L_0088444a:; BB(0x0088444a);
    /* 0088444a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0088444e: sub eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00884452: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00884455: jb 0x8844b8 */ if (fC) goto L_008844b8;
L_00884457:; BB(0x00884457);
    /* 00884457: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0088445b: lea eax, [eax - 5] */ r_eax = (u32)(r_eax+0xfffffffbu);
    /* 0088445e: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00884462: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
L_00884466:; BB(0x00884466);
    /* 00884466: movss xmm0, dword ptr [ebp + edi*4] */ { u32 v = R32((u32)(r_ebp+r_edi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088446c: mulss xmm0, dword ptr [ecx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00884471: movss xmm1, dword ptr [ebp + edi*4 + 4] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00884477: movss dword ptr [ebp + edi*4], xmm0 */ W32((u32)(r_ebp+r_edi*4), xmm[0].d[0]);
    /* 0088447d: mulss xmm1, dword ptr [ecx + edi*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00884483: movss xmm2, dword ptr [ebp + edi*4 + 8] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00884489: movss dword ptr [ebp + edi*4 + 4], xmm1 */ W32((u32)(r_ebp+r_edi*4+0x4u), xmm[1].d[0]);
    /* 0088448f: mulss xmm2, dword ptr [ecx + edi*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 00884495: movss xmm3, dword ptr [ebp + edi*4 + 0xc] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0088449b: movss dword ptr [ebp + edi*4 + 8], xmm2 */ W32((u32)(r_ebp+r_edi*4+0x8u), xmm[2].d[0]);
    /* 008844a1: mulss xmm3, dword ptr [ecx + edi*4 + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008844a7: movss dword ptr [ebp + edi*4 + 0xc], xmm3 */ W32((u32)(r_ebp+r_edi*4+0xcu), xmm[3].d[0]);
    /* 008844ad: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008844b0: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008844b2: jbe 0x884466 */ if ((fC||fZ)) goto L_00884466;
L_008844b4:; BB(0x008844b4);
    /* 008844b4: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
L_008844b8:; BB(0x008844b8);
    /* 008844b8: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008844bc: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008844c0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_008844c4:; BB(0x008844c4);
    /* 008844c4: movss xmm0, dword ptr [ebp + ecx*4] */ { u32 v = R32((u32)(r_ebp+r_ecx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008844ca: mulss xmm0, dword ptr [eax + ecx*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ecx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008844cf: movss dword ptr [ebp + ecx*4], xmm0 */ W32((u32)(r_ebp+r_ecx*4), xmm[0].d[0]);
    /* 008844d5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008844d6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008844d8: jb 0x8844c4 */ if (fC) goto L_008844c4;
L_008844da:; BB(0x008844da);
    /* 008844da: dec dword ptr [esp + 0xc] */ { u32 ad = (u32)(r_esp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008844de: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008844e2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008844e4: jge 0x88457a */ if ((fS==fO)) goto L_0088457a;
L_008844ea:; BB(0x008844ea);
    /* 008844ea: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008844ec: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008844ef: jl 0x884557 */ if ((fS!=fO)) goto L_00884557;
L_008844f1:; BB(0x008844f1);
    /* 008844f1: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008844f5: lea eax, [eax - 5] */ r_eax = (u32)(r_eax+0xfffffffbu);
    /* 008844f8: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008844fc: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 008844ff: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
L_00884502:; BB(0x00884502);
    /* 00884502: movss xmm0, dword ptr [ebp + esi*4] */ { u32 v = R32((u32)(r_ebp+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00884508: mulss xmm0, dword ptr [ecx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088450d: movss xmm1, dword ptr [ebp + esi*4 + 4] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00884513: movss dword ptr [ebp + esi*4], xmm0 */ W32((u32)(r_ebp+r_esi*4), xmm[0].d[0]);
    /* 00884519: mulss xmm1, dword ptr [ecx + edi*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 0088451f: movss xmm2, dword ptr [ebp + esi*4 + 8] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00884525: movss dword ptr [ebp + esi*4 + 4], xmm1 */ W32((u32)(r_ebp+r_esi*4+0x4u), xmm[1].d[0]);
    /* 0088452b: mulss xmm2, dword ptr [ecx + edi*4 - 8] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0xfffffff8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 00884531: movss xmm3, dword ptr [ebp + esi*4 + 0xc] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00884537: movss dword ptr [ebp + esi*4 + 8], xmm2 */ W32((u32)(r_ebp+r_esi*4+0x8u), xmm[2].d[0]);
    /* 0088453d: mulss xmm3, dword ptr [ecx + edi*4 - 0xc] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0xfffffff4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 00884543: add edi, -4 */ {  u32 a = r_edi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00884546: movss dword ptr [ebp + esi*4 + 0xc], xmm3 */ W32((u32)(r_ebp+r_esi*4+0xcu), xmm[3].d[0]);
    /* 0088454c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088454f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884551: jle 0x884502 */ if ((fZ||fS!=fO)) goto L_00884502;
L_00884553:; BB(0x00884553);
    /* 00884553: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
L_00884557:; BB(0x00884557);
    /* 00884557: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0088455b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0088455f: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00884562: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
L_00884565:; BB(0x00884565);
    /* 00884565: movss xmm0, dword ptr [ecx + esi*4] */ { u32 v = R32((u32)(r_ecx+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088456a: mulss xmm0, dword ptr [eax + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088456f: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00884570: movss dword ptr [ecx + esi*4], xmm0 */ W32((u32)(r_ecx+r_esi*4), xmm[0].d[0]);
    /* 00884575: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00884576: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884578: jl 0x884565 */ if ((fS!=fO)) goto L_00884565;
L_0088457a:; BB(0x0088457a);
    /* 0088457a: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088457c: jge 0x8845dd */ if ((fS==fO)) goto L_008845dd;
L_0088457e:; BB(0x0088457e);
    /* 0088457e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00884580: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00884582: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00884585: jb 0x8845e7 */ if (fC) goto L_008845e7;
L_00884587:; BB(0x00884587);
    /* 00884587: mov ecx, edx */ r_ecx = r_edx;
    /* 00884589: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088458b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088458d: add esi, dword ptr [ebx + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00884590: mov edi, esi */ r_edi = r_esi;
    /* 00884592: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00884595: je 0x8845b5 */ if (fZ) goto L_008845b5;
L_00884597:; BB(0x00884597);
    /* 00884597: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088459d: jne 0x8845d3 */ if (!fZ) goto L_008845d3;
L_0088459f:; BB(0x0088459f);
    /* 0088459f: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008845a1: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008845a4: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008845a7: mov ecx, edx */ r_ecx = r_edx;
    /* 008845a9: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008845ab: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_008845ad:; BB(0x008845ad);
    /* 008845ad: mov dword ptr [esi + eax*4], ebp */ W32((u32)(r_esi+r_eax*4), r_ebp);
    /* 008845b0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008845b1: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008845b3: jb 0x8845ad */ if (fC) goto L_008845ad;
L_008845b5:; BB(0x008845b5);
    /* 008845b5: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008845b8: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008845ba: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008845bc: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
L_008845bf:; BB(0x008845bf);
    /* 008845bf: movaps xmmword ptr [esi + eax*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esi+r_eax*4), &xmm[0], 16);
    /* 008845c3: movaps xmmword ptr [esi + eax*4 + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esi+r_eax*4+0x10u), &xmm[0], 16);
    /* 008845c8: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008845cb: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008845cd: jb 0x8845bf */ if (fC) goto L_008845bf;
L_008845cf:; BB(0x008845cf);
    /* 008845cf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008845d1: jae 0x8845dd */ if (!fC) goto L_008845dd;
L_008845d3:; BB(0x008845d3);
    /* 008845d3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_008845d5:; BB(0x008845d5);
    /* 008845d5: mov dword ptr [esi + eax*4], ecx */ W32((u32)(r_esi+r_eax*4), r_ecx);
    /* 008845d8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008845d9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008845db: jb 0x8845d5 */ if (fC) goto L_008845d5;
L_008845dd:; BB(0x008845dd);
    /* 008845dd: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008845e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008845e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008845e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008845e3: mov esp, ebx */ r_esp = r_ebx;
    /* 008845e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008845e6: ret  */ FN_RET(0x00884188); r_esp += 4; return;
L_008845e7:; BB(0x008845e7);
    /* 008845e7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008845e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008845eb: add esi, dword ptr [ebx + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008845ee: jmp 0x8845d3 */ goto L_008845d3;
L_008845f0:; BB(0x008845f0);
    /* 008845f0: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 008845f3: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 008845f7: lea edi, [edi + ecx] */ r_edi = (u32)(r_edi+r_ecx);
    /* 008845fa: add eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008845fe: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00884600: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00884602: jae 0x884349 */ if (!fC) goto L_00884349;
L_00884608:; BB(0x00884608);
    /* 00884608: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088460a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088460c: add ebp, dword ptr [ebx + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088460f: jmp 0x88444a */ goto L_0088444a;
L_00884614:; BB(0x00884614);
    /* 00884614: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884616: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884618: add ebp, dword ptr [ebx + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088461b: jmp 0x88444a */ goto L_0088444a;
L_00884620:; BB(0x00884620);
    /* 00884620: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00884621: mov ebx, esp */ r_ebx = r_esp;
    /* 00884623: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00884626: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00884627: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00884628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00884629: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088462c: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0088462f: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 00884632: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 00884635: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
    /* 00884638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088463a: jne 0x884641 */ if (!fZ) goto L_00884641;
L_0088463c:; BB(0x0088463c);
    /* 0088463c: mov ecx, 0 */ r_ecx = 0x0u;
L_00884641:; BB(0x00884641);
    /* 00884641: jne 0x884645 */ if (!fZ) goto L_00884645;
L_00884643:; BB(0x00884643);
    /* 00884643: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00884645:; BB(0x00884645);
    /* 00884645: mov edx, dword ptr [edi + ecx*4] */ r_edx = R32((u32)(r_edi+r_ecx*4));
    /* 00884648: mov esi, dword ptr [edx*4 + 0xa335a0] */ r_esi = R32((u32)(r_edx*4+0xa335a0u));
    /* 0088464f: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00884652: mov edx, dword ptr [edi + ebp*4] */ r_edx = R32((u32)(r_edi+r_ebp*4));
    /* 00884655: mov edx, dword ptr [edx*4 + 0xa335a0] */ r_edx = R32((u32)(r_edx*4+0xa335a0u));
    /* 0088465c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00884660: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 00884663: mov edx, dword ptr [edi + eax*4] */ r_edx = R32((u32)(r_edi+r_eax*4));
    /* 00884666: mov esi, dword ptr [edi + ecx*4] */ r_esi = R32((u32)(r_edi+r_ecx*4));
    /* 00884669: mov ebp, dword ptr [edi + ebp*4] */ r_ebp = R32((u32)(r_edi+r_ebp*4));
    /* 0088466c: mov edi, edx */ r_edi = r_edx;
    /* 0088466e: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00884670: shr edi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00884673: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00884675: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00884678: mov ecx, esi */ r_ecx = r_esi;
    /* 0088467a: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0088467c: shr ecx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088467f: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00884681: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00884684: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00884686: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00884688: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0088468c: mov eax, esi */ r_eax = r_esi;
    /* 0088468e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00884691: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00884693: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00884695: lea eax, [ecx + esi] */ r_eax = (u32)(r_ecx+r_esi);
    /* 00884698: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0088469c: mov eax, edx */ r_eax = r_edx;
    /* 0088469e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008846a1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008846a3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008846a5: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008846a7: mov edi, ebp */ r_edi = r_ebp;
    /* 008846a9: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008846ab: shr edi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008846ae: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008846b0: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008846b3: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008846b5: mov edi, ebp */ r_edi = r_ebp;
    /* 008846b7: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008846ba: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008846bc: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 008846be: lea edi, [eax + ebp] */ r_edi = (u32)(r_eax+r_ebp);
    /* 008846c1: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 008846c5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008846c7: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 008846cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008846cd: jle 0x884763 */ if ((fZ||fS!=fO)) goto L_00884763;
L_008846d3:; BB(0x008846d3);
    /* 008846d3: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008846d6: jl 0x8848fd */ if ((fS!=fO)) goto L_008848fd;
L_008846dc:; BB(0x008846dc);
    /* 008846dc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008846de: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 008846e2: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008846e6: lea ecx, [edi - 6] */ r_ecx = (u32)(r_edi+0xfffffffau);
    /* 008846e9: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 008846ed: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008846f1: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008846f5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008846f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008846fb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008846fd: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00884701: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_00884704:; BB(0x00884704);
    /* 00884704: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00884706: mov dword ptr [esi + eax*4], edi */ W32((u32)(r_esi+r_eax*4), r_edi);
    /* 00884709: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088470b: mov dword ptr [esi + eax*4 + 4], edi */ W32((u32)(r_esi+r_eax*4+0x4u), r_edi);
    /* 0088470f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00884711: mov dword ptr [esi + eax*4 + 8], edi */ W32((u32)(r_esi+r_eax*4+0x8u), r_edi);
    /* 00884715: mov dword ptr [esi + eax*4 + 0xc], edx */ W32((u32)(r_esi+r_eax*4+0xcu), r_edx);
    /* 00884719: mov dword ptr [esi + eax*4 + 0x10], ebp */ W32((u32)(r_esi+r_eax*4+0x10u), r_ebp);
    /* 0088471d: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884720: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884722: jle 0x884704 */ if ((fZ||fS!=fO)) goto L_00884704;
L_00884724:; BB(0x00884724);
    /* 00884724: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00884728: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0088472c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00884730: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00884734: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
L_00884738:; BB(0x00884738);
    /* 00884738: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0088473c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00884740: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00884744: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00884748: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0088474c: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
L_0088474f:; BB(0x0088474f);
    /* 0088474f: mov dword ptr [ecx + esi*4], edx */ W32((u32)(r_ecx+r_esi*4), r_edx);
    /* 00884752: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00884753: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884755: jl 0x88474f */ if ((fS!=fO)) goto L_0088474f;
L_00884757:; BB(0x00884757);
    /* 00884757: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0088475b: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0088475f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
L_00884763:; BB(0x00884763);
    /* 00884763: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00884765: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00884769: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0088476d: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00884771: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884773: jge 0x88481f */ if ((fS==fO)) goto L_0088481f;
L_00884779:; BB(0x00884779);
    /* 00884779: sub ecx, dword ptr [esp + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088477d: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884780: jl 0x8847e9 */ if ((fS!=fO)) goto L_008847e9;
L_00884782:; BB(0x00884782);
    /* 00884782: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00884786: lea ecx, [esi + ecx - 5] */ r_ecx = (u32)(r_esi+r_ecx+0xfffffffbu);
    /* 0088478a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0088478e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00884792: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00884796: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00884799: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0088479c: jmp 0x8847a2 */ goto L_008847a2;
L_0088479e:; BB(0x0088479e);
    /* 0088479e: fstp dword ptr [edx + edi*4 - 4] */ W_F32((u32)(r_edx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_008847a2:; BB(0x008847a2);
    /* 008847a2: fld dword ptr [edx + edi*4] */ FPUSH(R_F32((u32)(r_edx+r_edi*4)));
    /* 008847a5: fmul dword ptr [eax + esi*4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_esi*4));
    /* 008847a8: fstp dword ptr [edx + edi*4] */ W_F32((u32)(r_edx+r_edi*4), ST(0)); FPOP();
    /* 008847ab: fld dword ptr [edx + edi*4 + 4] */ FPUSH(R_F32((u32)(r_edx+r_edi*4+0x4u)));
    /* 008847af: fmul dword ptr [eax + esi*4 + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_esi*4+0x4u));
    /* 008847b3: fstp dword ptr [edx + edi*4 + 4] */ W_F32((u32)(r_edx+r_edi*4+0x4u), ST(0)); FPOP();
    /* 008847b7: fld dword ptr [edx + edi*4 + 8] */ FPUSH(R_F32((u32)(r_edx+r_edi*4+0x8u)));
    /* 008847bb: fmul dword ptr [eax + esi*4 + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_esi*4+0x8u));
    /* 008847bf: fstp dword ptr [edx + edi*4 + 8] */ W_F32((u32)(r_edx+r_edi*4+0x8u), ST(0)); FPOP();
    /* 008847c3: fld dword ptr [edx + edi*4 + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_edi*4+0xcu)));
    /* 008847c7: fmul dword ptr [eax + esi*4 + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_esi*4+0xcu));
    /* 008847cb: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008847ce: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008847d1: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008847d3: jle 0x88479e */ if ((fZ||fS!=fO)) goto L_0088479e;
L_008847d5:; BB(0x008847d5);
    /* 008847d5: fstp dword ptr [edx + edi*4 - 4] */ W_F32((u32)(r_edx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 008847d9: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 008847dd: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 008847e1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008847e5: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
L_008847e9:; BB(0x008847e9);
    /* 008847e9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008847ed: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008847f1: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 008847f5: mov esi, edi */ r_esi = r_edi;
    /* 008847f7: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 008847fb: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008847fe: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00884801: jmp 0x884807 */ goto L_00884807;
L_00884803:; BB(0x00884803);
    /* 00884803: fstp dword ptr [edx + esi*4 - 4] */ W_F32((u32)(r_edx+r_esi*4+0xfffffffcu), ST(0)); FPOP();
L_00884807:; BB(0x00884807);
    /* 00884807: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 0088480a: fmul dword ptr [eax + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_ecx*4));
    /* 0088480d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088480e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088480f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884811: jl 0x884803 */ if ((fS!=fO)) goto L_00884803;
L_00884813:; BB(0x00884813);
    /* 00884813: fstp dword ptr [edx + esi*4 - 4] */ W_F32((u32)(r_edx+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00884817: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0088481b: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
L_0088481f:; BB(0x0088481f);
    /* 0088481f: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00884820: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00884824: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884826: jge 0x88489b */ if ((fS==fO)) goto L_0088489b;
L_00884828:; BB(0x00884828);
    /* 00884828: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088482a: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088482d: jl 0x88487a */ if ((fS!=fO)) goto L_0088487a;
L_0088482f:; BB(0x0088482f);
    /* 0088482f: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00884833: lea ecx, [ecx - 5] */ r_ecx = (u32)(r_ecx+0xfffffffbu);
    /* 00884836: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0088483a: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0088483d: jmp 0x884843 */ goto L_00884843;
L_0088483f:; BB(0x0088483f);
    /* 0088483f: fstp dword ptr [edi + eax*4 - 4] */ W_F32((u32)(r_edi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_00884843:; BB(0x00884843);
    /* 00884843: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 00884846: fmul dword ptr [esi + ebp*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ebp*4));
    /* 00884849: fstp dword ptr [edi + eax*4] */ W_F32((u32)(r_edi+r_eax*4), ST(0)); FPOP();
    /* 0088484c: fld dword ptr [edi + eax*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0x4u)));
    /* 00884850: fmul dword ptr [esi + ebp*4 - 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ebp*4+0xfffffffcu));
    /* 00884854: fstp dword ptr [edi + eax*4 + 4] */ W_F32((u32)(r_edi+r_eax*4+0x4u), ST(0)); FPOP();
    /* 00884858: fld dword ptr [edi + eax*4 + 8] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0x8u)));
    /* 0088485c: fmul dword ptr [esi + ebp*4 - 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ebp*4+0xfffffff8u));
    /* 00884860: fstp dword ptr [edi + eax*4 + 8] */ W_F32((u32)(r_edi+r_eax*4+0x8u), ST(0)); FPOP();
    /* 00884864: fld dword ptr [edi + eax*4 + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0xcu)));
    /* 00884868: fmul dword ptr [esi + ebp*4 - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ebp*4+0xfffffff4u));
    /* 0088486c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088486f: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884872: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884874: jle 0x88483f */ if ((fZ||fS!=fO)) goto L_0088483f;
L_00884876:; BB(0x00884876);
    /* 00884876: fstp dword ptr [edi + eax*4 - 4] */ W_F32((u32)(r_edi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_0088487a:; BB(0x0088487a);
    /* 0088487a: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0088487e: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00884882: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00884885: jmp 0x88488b */ goto L_0088488b;
L_00884887:; BB(0x00884887);
    /* 00884887: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_0088488b:; BB(0x0088488b);
    /* 0088488b: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 0088488e: fmul dword ptr [ecx + ebp*4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_ebp*4));
    /* 00884891: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884892: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00884893: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884895: jl 0x884887 */ if ((fS!=fO)) goto L_00884887;
L_00884897:; BB(0x00884897);
    /* 00884897: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_0088489b:; BB(0x0088489b);
    /* 0088489b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088489d: jge 0x8848ef */ if ((fS==fO)) goto L_008848ef;
L_0088489f:; BB(0x0088489f);
    /* 0088489f: mov ecx, edx */ r_ecx = r_edx;
    /* 008848a1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008848a3: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008848a6: jl 0x8848f9 */ if ((fS!=fO)) goto L_008848f9;
L_008848a8:; BB(0x008848a8);
    /* 008848a8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008848aa: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008848ac: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008848ae: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 008848b1: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 008848b5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008848b9: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
L_008848bc:; BB(0x008848bc);
    /* 008848bc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008848be: mov dword ptr [edx + eax*4], edi */ W32((u32)(r_edx+r_eax*4), r_edi);
    /* 008848c1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008848c3: mov dword ptr [edx + eax*4 + 4], edi */ W32((u32)(r_edx+r_eax*4+0x4u), r_edi);
    /* 008848c7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008848c9: mov dword ptr [edx + eax*4 + 8], edi */ W32((u32)(r_edx+r_eax*4+0x8u), r_edi);
    /* 008848cd: mov dword ptr [edx + eax*4 + 0xc], ebp */ W32((u32)(r_edx+r_eax*4+0xcu), r_ebp);
    /* 008848d1: mov dword ptr [edx + eax*4 + 0x10], esi */ W32((u32)(r_edx+r_eax*4+0x10u), r_esi);
    /* 008848d5: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008848d8: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008848da: jle 0x8848bc */ if ((fZ||fS!=fO)) goto L_008848bc;
L_008848dc:; BB(0x008848dc);
    /* 008848dc: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 008848e0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
L_008848e4:; BB(0x008848e4);
    /* 008848e4: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
L_008848e7:; BB(0x008848e7);
    /* 008848e7: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 008848ea: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008848eb: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008848ed: jl 0x8848e7 */ if ((fS!=fO)) goto L_008848e7;
L_008848ef:; BB(0x008848ef);
    /* 008848ef: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008848f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008848f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008848f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008848f5: mov esp, ebx */ r_esp = r_ebx;
    /* 008848f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008848f8: ret  */ FN_RET(0x00884188); r_esp += 4; return;
L_008848f9:; BB(0x008848f9);
    /* 008848f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008848fb: jmp 0x8848e4 */ goto L_008848e4;
L_008848fd:; BB(0x008848fd);
    /* 008848fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008848ff: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00884903: jmp 0x884738 */ goto L_00884738;
}

void f_00884908(void) /* sub_884908 */
{
    FN_ENTER(0x00884908);
    /* 00884908: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088490c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088490e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00884910: je 0x884919 */ if (fZ) goto L_00884919;
L_00884912:; BB(0x00884912);
    /* 00884912: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00884913: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00884915: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00884917: jne 0x884912 */ if (!fZ) goto L_00884912;
L_00884919:; BB(0x00884919);
    /* 00884919: mov eax, edx */ r_eax = r_edx;
    /* 0088491b: ret  */ FN_RET(0x00884908); r_esp += 4; return;
}

void f_0088491c(void) /* sub_88491C */
{
    FN_ENTER(0x0088491c);
    /* 0088491c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088491d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088491e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088491f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00884920: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00884923: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00884927: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0088492a: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 0088492c: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0088492f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00884932: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 00884934: fdivr dword ptr [0x99aeac] */ ST(0) = R_F32((u32)(0x99aeacu)) / ST(0);
    /* 0088493a: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0088493e: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x884943u); f_0084d1d4();
    /* 00884943: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00884946: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0088494a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0088494f: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00884954: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00884959: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0088495d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00884961: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00884965: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00884969: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0088496d: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
L_00884971:; BB(0x00884971);
    /* 00884971: mov esi, 1 */ r_esi = 0x1u;
    /* 00884976: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0088497b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088497d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088497f: jle 0x8849e2 */ if ((fZ||fS!=fO)) goto L_008849e2;
L_00884981:; BB(0x00884981);
    /* 00884981: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884984: jl 0x8849d3 */ if ((fS!=fO)) goto L_008849d3;
L_00884986:; BB(0x00884986);
    /* 00884986: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0088498a: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0088498e: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
L_00884992:; BB(0x00884992);
    /* 00884992: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884995: mov ebp, eax */ r_ebp = r_eax;
    /* 00884997: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088499a: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088499c: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088499f: mov ebx, eax */ r_ebx = r_eax;
    /* 008849a1: imul ebx, ebp */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_ebp; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008849a4: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008849a6: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008849a9: mov edi, eax */ r_edi = r_eax;
    /* 008849ab: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008849ae: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008849b0: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008849b3: mov ebp, eax */ r_ebp = r_eax;
    /* 008849b5: imul ebp, edi */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_edi; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008849b8: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008849ba: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008849bd: mov ebx, eax */ r_ebx = r_eax;
    /* 008849bf: imul ebx, ebp */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_ebp; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008849c2: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008849c4: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008849c7: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008849c9: jle 0x884992 */ if ((fZ||fS!=fO)) goto L_00884992;
L_008849cb:; BB(0x008849cb);
    /* 008849cb: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 008849cf: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
L_008849d3:; BB(0x008849d3);
    /* 008849d3: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008849d6: mov edx, eax */ r_edx = r_eax;
    /* 008849d8: imul edx, ebx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008849db: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008849dd: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008849de: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008849e0: jl 0x8849d3 */ if ((fS!=fO)) goto L_008849d3;
L_008849e2:; BB(0x008849e2);
    /* 008849e2: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008849e4: jg 0x8849ea */ if ((!fZ&&fS==fO)) goto L_008849ea;
L_008849e6:; BB(0x008849e6);
    /* 008849e6: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008849e8: jg 0x8849f7 */ if ((!fZ&&fS==fO)) goto L_008849f7;
L_008849ea:; BB(0x008849ea);
    /* 008849ea: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008849ec: jle 0x8849f1 */ if ((fZ||fS!=fO)) goto L_008849f1;
L_008849ee:; BB(0x008849ee);
    /* 008849ee: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008849ef: jmp 0x884971 */ goto L_00884971;
L_008849f1:; BB(0x008849f1);
    /* 008849f1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008849f2: jmp 0x884971 */ goto L_00884971;
L_008849f7:; BB(0x008849f7);
    /* 008849f7: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008849fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008849fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008849fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008849fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008849fe: ret  */ FN_RET(0x0088491c); r_esp += 4; return;
}

void f_00884a00(void) /* sub_884A00 */
{
    FN_ENTER(0x00884a00);
    /* 00884a00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00884a01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00884a02: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00884a06: cmp dword ptr [esi + 0x30], 0 */ {  u32 a = R32((u32)(r_esi+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00884a0a: je 0x884a1a */ if (fZ) goto L_00884a1a;
L_00884a0c:; BB(0x00884a0c);
    /* 00884a0c: mov eax, esi */ r_eax = r_esi;
    /* 00884a0e: call 0x884a24 */ r_esp -= 4; W32(r_esp, 0x884a13u); f_00884a24();
    /* 00884a13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00884a14: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a19u); f_00858882();
    /* 00884a19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884a1a:; BB(0x00884a1a);
    /* 00884a1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00884a1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00884a1c: ret  */ FN_RET(0x00884a00); r_esp += 4; return;
}

void f_00884a20(void) /* sub_884A20 */
{
    FN_ENTER(0x00884a20);
    /* 00884a20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00884a24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00884a25: mov edi, eax */ r_edi = r_eax;
    /* 00884a27: cmp dword ptr [edi + 0x30], 0 */ {  u32 a = R32((u32)(r_edi+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00884a2b: je 0x884af9 */ if (fZ) goto L_00884af9;
L_00884a31:; BB(0x00884a31);
    /* 00884a31: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00884a34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884a36: je 0x884a3f */ if (fZ) goto L_00884a3f;
L_00884a38:; BB(0x00884a38);
    /* 00884a38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884a39: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a3eu); f_00858882();
    /* 00884a3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884a3f:; BB(0x00884a3f);
    /* 00884a3f: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00884a42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884a44: je 0x884a4d */ if (fZ) goto L_00884a4d;
L_00884a46:; BB(0x00884a46);
    /* 00884a46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884a47: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a4cu); f_00858882();
    /* 00884a4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884a4d:; BB(0x00884a4d);
    /* 00884a4d: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00884a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884a52: je 0x884a9d */ if (fZ) goto L_00884a9d;
L_00884a54:; BB(0x00884a54);
    /* 00884a54: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00884a56: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a5bu); f_00858882();
    /* 00884a5b: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00884a5e: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00884a61: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a66u); f_00858882();
    /* 00884a66: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00884a69: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00884a6c: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a71u); f_00858882();
    /* 00884a71: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00884a74: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00884a77: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a7cu); f_00858882();
    /* 00884a7c: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00884a7f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00884a81: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00884a83: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00884a86: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00884a89: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00884a8c: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00884a8f: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00884a92: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00884a95: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a9au); f_00858882();
    /* 00884a9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00884a9d:; BB(0x00884a9d);
    /* 00884a9d: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00884aa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884aa2: je 0x884ad1 */ if (fZ) goto L_00884ad1;
L_00884aa4:; BB(0x00884aa4);
    /* 00884aa4: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00884aa6: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884aabu); f_00858882();
    /* 00884aab: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00884aae: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00884ab1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884ab6u); f_00858882();
    /* 00884ab6: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00884ab9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00884abb: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00884abd: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00884ac0: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00884ac3: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00884ac6: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00884ac9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884aceu); f_00858882();
    /* 00884ace: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00884ad1:; BB(0x00884ad1);
    /* 00884ad1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00884ad3: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 00884ad5: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00884ad8: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 00884adb: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00884ade: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 00884ae1: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 00884ae4: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 00884ae7: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 00884aea: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00884aed: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 00884af0: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 00884af3: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 00884af6: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
L_00884af9:; BB(0x00884af9);
    /* 00884af9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00884afa: ret  */ FN_RET(0x00884a20); r_esp += 4; return;
}

void f_00884a24(void) /* sub_884A24 */
{
    FN_ENTER(0x00884a24);
    /* 00884a24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00884a25: mov edi, eax */ r_edi = r_eax;
    /* 00884a27: cmp dword ptr [edi + 0x30], 0 */ {  u32 a = R32((u32)(r_edi+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00884a2b: je 0x884af9 */ if (fZ) goto L_00884af9;
L_00884a31:; BB(0x00884a31);
    /* 00884a31: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00884a34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884a36: je 0x884a3f */ if (fZ) goto L_00884a3f;
L_00884a38:; BB(0x00884a38);
    /* 00884a38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884a39: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a3eu); f_00858882();
    /* 00884a3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884a3f:; BB(0x00884a3f);
    /* 00884a3f: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00884a42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884a44: je 0x884a4d */ if (fZ) goto L_00884a4d;
L_00884a46:; BB(0x00884a46);
    /* 00884a46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884a47: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a4cu); f_00858882();
    /* 00884a4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884a4d:; BB(0x00884a4d);
    /* 00884a4d: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00884a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884a52: je 0x884a9d */ if (fZ) goto L_00884a9d;
L_00884a54:; BB(0x00884a54);
    /* 00884a54: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00884a56: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a5bu); f_00858882();
    /* 00884a5b: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00884a5e: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00884a61: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a66u); f_00858882();
    /* 00884a66: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00884a69: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00884a6c: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a71u); f_00858882();
    /* 00884a71: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00884a74: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00884a77: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a7cu); f_00858882();
    /* 00884a7c: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00884a7f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00884a81: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00884a83: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00884a86: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00884a89: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00884a8c: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00884a8f: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00884a92: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00884a95: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884a9au); f_00858882();
    /* 00884a9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00884a9d:; BB(0x00884a9d);
    /* 00884a9d: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00884aa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884aa2: je 0x884ad1 */ if (fZ) goto L_00884ad1;
L_00884aa4:; BB(0x00884aa4);
    /* 00884aa4: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00884aa6: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884aabu); f_00858882();
    /* 00884aab: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00884aae: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00884ab1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884ab6u); f_00858882();
    /* 00884ab6: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00884ab9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00884abb: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00884abd: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00884ac0: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00884ac3: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00884ac6: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00884ac9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884aceu); f_00858882();
    /* 00884ace: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00884ad1:; BB(0x00884ad1);
    /* 00884ad1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00884ad3: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 00884ad5: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00884ad8: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 00884adb: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00884ade: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 00884ae1: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 00884ae4: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 00884ae7: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 00884aea: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00884aed: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 00884af0: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 00884af3: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 00884af6: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
L_00884af9:; BB(0x00884af9);
    /* 00884af9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00884afa: ret  */ FN_RET(0x00884a24); r_esp += 4; return;
}

void f_00884afc(void) /* sub_884AFC */
{
    FN_ENTER(0x00884afc);
    /* 00884afc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00884b00: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00884b04: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00884b06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00884b08: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00884b0a: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00884b0c: mov eax, 0 */ r_eax = 0x0u;
    /* 00884b11: seta al */ r_eax = (r_eax & 0xffffff00u) | ((((!fC&&!fZ)) ? 1 : 0) & 0xffu);
    /* 00884b14: mov edx, 0 */ r_edx = 0x0u;
    /* 00884b19: setb dl */ r_edx = (r_edx & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 00884b1c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00884b1e: ret  */ FN_RET(0x00884afc); r_esp += 4; return;
}

void f_00884b24(void) /* sub_884B24 */
{
    FN_ENTER(0x00884b24);
    /* 00884b24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00884b27: mov edx, eax */ r_edx = r_eax;
    /* 00884b29: and edx, 0x1fffff */ {  u32 a = r_edx; u32 b = 0x1fffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00884b2f: mov ecx, eax */ r_ecx = r_eax;
    /* 00884b31: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00884b35: and ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00884b3b: and eax, 0x7fe00000 */ {  u32 a = r_eax; u32 b = 0x7fe00000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00884b40: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00884b44: sar eax, 0x15 */ { u32 c = (21u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00884b47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884b49: je 0x884b4d */ if (fZ) goto L_00884b4d;
L_00884b4b:; BB(0x00884b4b);
    /* 00884b4b: fchs  */ ST(0) = -ST(0);
L_00884b4d:; BB(0x00884b4d);
    /* 00884b4d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00884b50: add eax, 0xfffffcec */ {  u32 a = r_eax; u32 b = 0xfffffcecu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884b55: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00884b59: call 0x8c9ba0 */ r_esp -= 4; W32(r_esp, 0x884b5eu); f_008c9ba0();
    /* 00884b5e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00884b61: ret  */ FN_RET(0x00884b24); r_esp += 4; return;
}

void f_00884b64(void) /* sub_884B64 */
{
    FN_ENTER(0x00884b64);
    /* 00884b64: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00884b68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00884b69: mov ebp, eax */ r_ebp = r_eax;
    /* 00884b6b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00884b6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884b70: je 0x884b79 */ if (fZ) goto L_00884b79;
L_00884b72:; BB(0x00884b72);
    /* 00884b72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884b73: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884b78u); f_00858882();
    /* 00884b78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884b79:; BB(0x00884b79);
    /* 00884b79: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00884b7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884b7e: je 0x884b87 */ if (fZ) goto L_00884b87;
L_00884b80:; BB(0x00884b80);
    /* 00884b80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884b81: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884b86u); f_00858882();
    /* 00884b86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884b87:; BB(0x00884b87);
    /* 00884b87: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00884b8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884b8c: je 0x884b95 */ if (fZ) goto L_00884b95;
L_00884b8e:; BB(0x00884b8e);
    /* 00884b8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884b8f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884b94u); f_00858882();
    /* 00884b94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884b95:; BB(0x00884b95);
    /* 00884b95: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00884b98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884b9a: je 0x884ba3 */ if (fZ) goto L_00884ba3;
L_00884b9c:; BB(0x00884b9c);
    /* 00884b9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884b9d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884ba2u); f_00858882();
    /* 00884ba2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884ba3:; BB(0x00884ba3);
    /* 00884ba3: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00884ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884ba8: je 0x884bb1 */ if (fZ) goto L_00884bb1;
L_00884baa:; BB(0x00884baa);
    /* 00884baa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884bab: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884bb0u); f_00858882();
    /* 00884bb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884bb1:; BB(0x00884bb1);
    /* 00884bb1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00884bb3: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00884bb6: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00884bb9: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00884bbc: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00884bbf: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00884bc2: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00884bc5: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 00884bc8: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 00884bcb: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00884bce: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 00884bd1: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 00884bd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00884bd5: ret  */ FN_RET(0x00884b64); r_esp += 4; return;
}

void f_00884b68(void) /* sub_884B68 */
{
    FN_ENTER(0x00884b68);
    /* 00884b68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00884b69: mov ebp, eax */ r_ebp = r_eax;
    /* 00884b6b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00884b6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884b70: je 0x884b79 */ if (fZ) goto L_00884b79;
L_00884b72:; BB(0x00884b72);
    /* 00884b72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884b73: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884b78u); f_00858882();
    /* 00884b78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884b79:; BB(0x00884b79);
    /* 00884b79: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00884b7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884b7e: je 0x884b87 */ if (fZ) goto L_00884b87;
L_00884b80:; BB(0x00884b80);
    /* 00884b80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884b81: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884b86u); f_00858882();
    /* 00884b86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884b87:; BB(0x00884b87);
    /* 00884b87: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00884b8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884b8c: je 0x884b95 */ if (fZ) goto L_00884b95;
L_00884b8e:; BB(0x00884b8e);
    /* 00884b8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884b8f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884b94u); f_00858882();
    /* 00884b94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884b95:; BB(0x00884b95);
    /* 00884b95: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00884b98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884b9a: je 0x884ba3 */ if (fZ) goto L_00884ba3;
L_00884b9c:; BB(0x00884b9c);
    /* 00884b9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884b9d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884ba2u); f_00858882();
    /* 00884ba2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884ba3:; BB(0x00884ba3);
    /* 00884ba3: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00884ba6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884ba8: je 0x884bb1 */ if (fZ) goto L_00884bb1;
L_00884baa:; BB(0x00884baa);
    /* 00884baa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00884bab: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x884bb0u); f_00858882();
    /* 00884bb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00884bb1:; BB(0x00884bb1);
    /* 00884bb1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00884bb3: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00884bb6: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00884bb9: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00884bbc: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00884bbf: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00884bc2: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00884bc5: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 00884bc8: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 00884bcb: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00884bce: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 00884bd1: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 00884bd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00884bd5: ret  */ FN_RET(0x00884b68); r_esp += 4; return;
}

void f_00884be4(void) /* sub_884BE4 */
{
    FN_ENTER(0x00884be4);
    /* 00884be4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00884be5: mov ebx, esp */ r_ebx = r_esp;
    /* 00884be7: and esp, 0xffffffe0 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00884bea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00884beb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00884bec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00884bed: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00884bf0: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00884bf4: mov ebp, edx */ r_ebp = r_edx;
    /* 00884bf6: mov edi, eax */ r_edi = r_eax;
    /* 00884bf8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00884bfa: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 00884bfd: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884c00: je 0x884c13 */ if (fZ) goto L_00884c13;
L_00884c02:; BB(0x00884c02);
    /* 00884c02: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884c05: je 0x884c13 */ if (fZ) goto L_00884c13;
L_00884c07:; BB(0x00884c07);
    /* 00884c07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00884c09: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00884c0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00884c0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00884c0e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00884c0f: mov esp, ebx */ r_esp = r_ebx;
    /* 00884c11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00884c12: ret  */ FN_RET(0x00884be4); r_esp += 4; return;
L_00884c13:; BB(0x00884c13);
    /* 00884c13: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00884c16: call 0x884b24 */ r_esp -= 4; W32(r_esp, 0x884c1bu); f_00884b24();
    /* 00884c1b: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00884c1f: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00884c22: call 0x884b24 */ r_esp -= 4; W32(r_esp, 0x884c27u); f_00884b24();
    /* 00884c27: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00884c2b: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00884c2d: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884c30: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00884c32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00884c33: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x884c38u); f_008587c7();
    /* 00884c38: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00884c3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00884c3f: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00884c42: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884c45: je 0x884d02 */ if (fZ) goto L_00884d02;
L_00884c4b:; BB(0x00884c4b);
    /* 00884c4b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884c4e: jne 0x884cf4 */ if (!fZ) goto L_00884cf4;
L_00884c54:; BB(0x00884c54);
    /* 00884c54: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00884c56: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00884c59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884c5b: jle 0x884cf4 */ if ((fZ||fS!=fO)) goto L_00884cf4;
L_00884c61:; BB(0x00884c61);
    /* 00884c61: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00884c65: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00884c69: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
L_00884c6d:; BB(0x00884c6d);
    /* 00884c6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884c6f: je 0x884c7a */ if (fZ) goto L_00884c7a;
L_00884c71:; BB(0x00884c71);
    /* 00884c71: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
L_00884c74:; BB(0x00884c74);
    /* 00884c74: cmp dword ptr [eax + ebp*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ebp*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884c78: je 0x884ceb */ if (fZ) goto L_00884ceb;
L_00884c7a:; BB(0x00884c7a);
    /* 00884c7a: fld dword ptr [0x99aea4] */ FPUSH(R_F32((u32)(0x99aea4u)));
    /* 00884c80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00884c82: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00884c86: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00884c88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884c8a: jle 0x884efa */ if ((fZ||fS!=fO)) goto L_00884efa;
L_00884c90:; BB(0x00884c90);
    /* 00884c90: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00884c94: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
L_00884c98:; BB(0x00884c98);
    /* 00884c98: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884c9a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884c9c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00884c9e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00884ca0: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00884ca4: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884ca7: add ebp, dword ptr [edi + 0x20] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884caa: fild dword ptr [ebp + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_ecx*4)));
    /* 00884cae: fabs  */ ST(0) = fabsl(ST(0));
    /* 00884cb0: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00884cb2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00884cb4: cmp dword ptr [edi + 0x1c], 0 */ {  u32 a = R32((u32)(r_edi+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884cb8: je 0x884cbc */ if (fZ) goto L_00884cbc;
L_00884cba:; BB(0x00884cba);
    /* 00884cba: fst st(1) */ ST(1) = ST(0);
L_00884cbc:; BB(0x00884cbc);
    /* 00884cbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884cbe: je 0x884de2 */ if (fZ) goto L_00884de2;
L_00884cc4:; BB(0x00884cc4);
    /* 00884cc4: imul eax, dword ptr [edx + esi*4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+r_esi*4)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884cc8: add eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884ccc: fstp dword ptr [eax + ecx*4] */ W_F32((u32)(r_eax+r_ecx*4), ST(0)); FPOP();
L_00884ccf:; BB(0x00884ccf);
    /* 00884ccf: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00884cd0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00884cd2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884cd4: jl 0x884c98 */ if ((fS!=fO)) goto L_00884c98;
L_00884cd6:; BB(0x00884cd6);
    /* 00884cd6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884cd8: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00884cdc: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
L_00884cdf:; BB(0x00884cdf);
    /* 00884cdf: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00884ce0: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884ce1: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884ce3: jl 0x884c6d */ if ((fS!=fO)) goto L_00884c6d;
L_00884ce5:; BB(0x00884ce5);
    /* 00884ce5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00884ce7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884ce9: jmp 0x884cf4 */ goto L_00884cf4;
L_00884ceb:; BB(0x00884ceb);
    /* 00884ceb: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884cec: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884cee: jl 0x884c74 */ if ((fS!=fO)) goto L_00884c74;
L_00884cf0:; BB(0x00884cf0);
    /* 00884cf0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00884cf2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00884cf4:; BB(0x00884cf4);
    /* 00884cf4: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00884cf8: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00884cfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00884cfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00884cfd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00884cfe: mov esp, ebx */ r_esp = r_ebx;
    /* 00884d00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00884d01: ret  */ FN_RET(0x00884be4); r_esp += 4; return;
L_00884d02:; BB(0x00884d02);
    /* 00884d02: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 00884d04: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00884d07: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00884d0b: fild dword ptr [edi + 4] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x4u)));
    /* 00884d0e: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00884d11: fild dword ptr [edi] */ FPUSH((long double)(i32)R32((u32)(r_edi)));
    /* 00884d13: fdivr dword ptr [0x99aea0] */ ST(0) = R_F32((u32)(0x99aea0u)) / ST(0);
    /* 00884d19: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00884d1d: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x884d22u); f_0084d1d4();
    /* 00884d22: lea ecx, [ebp - 6] */ r_ecx = (u32)(r_ebp+0xfffffffau);
    /* 00884d25: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00884d29: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00884d2e: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00884d33: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00884d38: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00884d3c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00884d40: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00884d44: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00884d48: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00884d4c: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00884d50: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00884d54: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 00884d58: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
L_00884d5c:; BB(0x00884d5c);
    /* 00884d5c: mov esi, 1 */ r_esi = 0x1u;
    /* 00884d61: mov eax, 1 */ r_eax = 0x1u;
    /* 00884d66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00884d68: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884d6a: jle 0x884dcd */ if ((fZ||fS!=fO)) goto L_00884dcd;
L_00884d6c:; BB(0x00884d6c);
    /* 00884d6c: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884d6f: jl 0x884dba */ if ((fS!=fO)) goto L_00884dba;
L_00884d71:; BB(0x00884d71);
    /* 00884d71: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
L_00884d75:; BB(0x00884d75);
    /* 00884d75: imul esi, edx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884d78: mov ebp, edx */ r_ebp = r_edx;
    /* 00884d7a: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884d7d: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884d7f: imul esi, edx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884d82: mov eax, edx */ r_eax = r_edx;
    /* 00884d84: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884d87: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884d89: imul esi, edx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884d8c: mov edi, edx */ r_edi = r_edx;
    /* 00884d8e: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884d91: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00884d93: imul esi, edx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884d96: mov ebp, edx */ r_ebp = r_edx;
    /* 00884d98: imul ebp, edi */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_edi; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884d9b: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884d9d: imul esi, edx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884da0: mov eax, edx */ r_eax = r_edx;
    /* 00884da2: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884da5: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884da7: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00884daa: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 00884dae: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884db0: jle 0x884d75 */ if ((fZ||fS!=fO)) goto L_00884d75;
L_00884db2:; BB(0x00884db2);
    /* 00884db2: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00884db6: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
L_00884dba:; BB(0x00884dba);
    /* 00884dba: imul esi, edx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884dbd: mov edi, edx */ r_edi = r_edx;
    /* 00884dbf: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884dc2: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884dc4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00884dc5: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884dc7: jl 0x884dba */ if ((fS!=fO)) goto L_00884dba;
L_00884dc9:; BB(0x00884dc9);
    /* 00884dc9: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
L_00884dcd:; BB(0x00884dcd);
    /* 00884dcd: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884dcf: jg 0x884dd5 */ if ((!fZ&&fS==fO)) goto L_00884dd5;
L_00884dd1:; BB(0x00884dd1);
    /* 00884dd1: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884dd3: jg 0x884df1 */ if ((!fZ&&fS==fO)) goto L_00884df1;
L_00884dd5:; BB(0x00884dd5);
    /* 00884dd5: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884dd7: jle 0x884ddc */ if ((fZ||fS!=fO)) goto L_00884ddc;
L_00884dd9:; BB(0x00884dd9);
    /* 00884dd9: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00884dda: jmp 0x884d5c */ goto L_00884d5c;
L_00884ddc:; BB(0x00884ddc);
    /* 00884ddc: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00884ddd: jmp 0x884d5c */ goto L_00884d5c;
L_00884de2:; BB(0x00884de2);
    /* 00884de2: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884de5: add eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884de9: fstp dword ptr [eax + ecx*4] */ W_F32((u32)(r_eax+r_ecx*4), ST(0)); FPOP();
    /* 00884dec: jmp 0x884ccf */ goto L_00884ccf;
L_00884df1:; BB(0x00884df1);
    /* 00884df1: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00884df5: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00884df9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00884dfb: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00884dff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884e01: jle 0x884cf4 */ if ((fZ||fS!=fO)) goto L_00884cf4;
L_00884e07:; BB(0x00884e07);
    /* 00884e07: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00884e0b: mov edx, ecx */ r_edx = r_ecx;
    /* 00884e0d: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 00884e11: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00884e15: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00884e19: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
L_00884e1d:; BB(0x00884e1d);
    /* 00884e1d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884e1f: je 0x884e32 */ if (fZ) goto L_00884e32;
L_00884e21:; BB(0x00884e21);
    /* 00884e21: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00884e25: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
L_00884e28:; BB(0x00884e28);
    /* 00884e28: cmp dword ptr [ecx + eax*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884e2c: je 0x884ed9 */ if (fZ) goto L_00884ed9;
L_00884e32:; BB(0x00884e32);
    /* 00884e32: fld dword ptr [0x99aea4] */ FPUSH(R_F32((u32)(0x99aea4u)));
    /* 00884e38: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00884e3d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884e3f: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00884e43: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00884e48: jle 0x884f01 */ if ((fZ||fS!=fO)) goto L_00884f01;
L_00884e4e:; BB(0x00884e4e);
    /* 00884e4e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00884e52: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00884e56: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
L_00884e5a:; BB(0x00884e5a);
    /* 00884e5a: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00884e5c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00884e5e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00884e62: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00884e66: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00884e67: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00884e67, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00884e67, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00884e69: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00884e6a: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00884e6a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00884e6a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00884e6c: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00884e70: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00884e73: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 00884e76: fabs  */ ST(0) = fabsl(ST(0));
    /* 00884e78: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00884e7a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00884e7c: cmp dword ptr [edi + 0x1c], 0 */ {  u32 a = R32((u32)(r_edi+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884e80: je 0x884e84 */ if (fZ) goto L_00884e84;
L_00884e82:; BB(0x00884e82);
    /* 00884e82: fst st(1) */ ST(1) = ST(0);
L_00884e84:; BB(0x00884e84);
    /* 00884e84: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884e86: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884e88: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00884e8b: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00884e8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884e91: je 0x884eeb */ if (fZ) goto L_00884eeb;
L_00884e93:; BB(0x00884e93);
    /* 00884e93: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00884e97: imul ebp, dword ptr [edx + edi*4] */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)R32((u32)(r_edx+r_edi*4)); r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884e9b: add ebp, dword ptr [esp + 0x2c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884e9f: fstp dword ptr [ebp + eax*2] */ W_F32((u32)(r_ebp+r_eax*2), ST(0)); FPOP();
L_00884ea3:; BB(0x00884ea3);
    /* 00884ea3: imul esi, dword ptr [esp + 0x28] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_esp+0x28u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884ea8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00884ea9: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00884ead: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00884eaf: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884eb1: jl 0x884e5a */ if ((fS!=fO)) goto L_00884e5a;
L_00884eb3:; BB(0x00884eb3);
    /* 00884eb3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884eb5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00884eb9: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00884ebd: mov edi, edx */ r_edi = r_edx;
    /* 00884ebf: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00884ec3: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
L_00884ec6:; BB(0x00884ec6);
    /* 00884ec6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00884ec7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884ec8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884eca: jl 0x884e1d */ if ((fS!=fO)) goto L_00884e1d;
L_00884ed0:; BB(0x00884ed0);
    /* 00884ed0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00884ed2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884ed4: jmp 0x884cf4 */ goto L_00884cf4;
L_00884ed9:; BB(0x00884ed9);
    /* 00884ed9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884eda: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884edc: jl 0x884e28 */ if ((fS!=fO)) goto L_00884e28;
L_00884ee2:; BB(0x00884ee2);
    /* 00884ee2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00884ee4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884ee6: jmp 0x884cf4 */ goto L_00884cf4;
L_00884eeb:; BB(0x00884eeb);
    /* 00884eeb: imul ebp, dword ptr [esp + 0x34] */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)R32((u32)(r_esp+0x34u)); r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00884ef0: add ebp, dword ptr [esp + 0x2c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00884ef4: fstp dword ptr [ebp + eax*2] */ W_F32((u32)(r_ebp+r_eax*2), ST(0)); FPOP();
    /* 00884ef8: jmp 0x884ea3 */ goto L_00884ea3;
L_00884efa:; BB(0x00884efa);
    /* 00884efa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884efc: jmp 0x884cdf */ goto L_00884cdf;
L_00884f01:; BB(0x00884f01);
    /* 00884f01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00884f03: jmp 0x884ec6 */ goto L_00884ec6;
}

void f_00884f08(void) /* sub_884F08 */
{
    FN_ENTER(0x00884f08);
    /* 00884f08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00884f09: mov ebp, esp */ r_ebp = r_esp;
    /* 00884f0b: sub esp, 0xd0 */ {  u32 a = r_esp; u32 b = 0xd0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00884f11: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00884f14: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00884f17: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00884f1a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00884f1d: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00884f20: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00884f22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00884f24: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00884f26: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 00884f29: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00884f2c: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 00884f2f: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 00884f32: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 00884f35: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 00884f38: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 00884f3b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 00884f3e: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 00884f41: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 00884f44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00884f46: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00884f49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884f4b: jle 0x884f63 */ if ((fZ||fS!=fO)) goto L_00884f63;
L_00884f4d:; BB(0x00884f4d);
    /* 00884f4d: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00884f50: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
L_00884f53:; BB(0x00884f53);
    /* 00884f53: mov esi, dword ptr [ecx + eax*4] */ r_esi = R32((u32)(r_ecx+r_eax*4));
    /* 00884f56: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884f57: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884f59: jle 0x884f5c */ if ((fZ||fS!=fO)) goto L_00884f5c;
L_00884f5b:; BB(0x00884f5b);
    /* 00884f5b: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00884f5c:; BB(0x00884f5c);
    /* 00884f5c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00884f5e: jl 0x884f53 */ if ((fS!=fO)) goto L_00884f53;
L_00884f60:; BB(0x00884f60);
    /* 00884f60: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_00884f63:; BB(0x00884f63);
    /* 00884f63: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00884f66: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884f68: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 00884f6b: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00884f6d: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00884f6f: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00884f72: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00884f75: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00884f78: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00884f7b: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00884f80: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00884f83: je 0x884f89 */ if (fZ) goto L_00884f89;
L_00884f85:; BB(0x00884f85);
    /* 00884f85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00884f87: jmp 0x884f8c */ goto L_00884f8c;
L_00884f89:; BB(0x00884f89);
    /* 00884f89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
L_00884f8c:; BB(0x00884f8c);
    /* 00884f8c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00884f8e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00884f90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00884f91: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x884f96u); f_00859c55();
    /* 00884f96: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00884f99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00884f9c: lea ecx, [ebp - 0xd0] */ r_ecx = (u32)(r_ebp+0xffffff30u);
    /* 00884fa2: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00884fa7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00884fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00884faa: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x884fafu); f_0086b688();
    /* 00884faf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00884fb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00884fb4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00884fb7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884fb9: jle 0x88510d */ if ((fZ||fS!=fO)) goto L_0088510d;
L_00884fbf:; BB(0x00884fbf);
    /* 00884fbf: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 00884fc2: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00884fc5: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00884fc8: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
L_00884fcb:; BB(0x00884fcb);
    /* 00884fcb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00884fce: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00884fd1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00884fd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884fd4: jle 0x88597f */ if ((fZ||fS!=fO)) goto L_0088597f;
L_00884fda:; BB(0x00884fda);
    /* 00884fda: mov edx, dword ptr [ebp + ecx*4 - 0xd0] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff30u));
    /* 00884fe1: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00884fe4: jge 0x884ff2 */ if ((fS==fO)) goto L_00884ff2;
L_00884fe6:; BB(0x00884fe6);
    /* 00884fe6: mov esi, edx */ r_esi = r_edx;
    /* 00884fe8: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00884fea: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00884fec: jne 0x8856aa */ if (!fZ) goto L_008856aa;
L_00884ff2:; BB(0x00884ff2);
    /* 00884ff2: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00884ff5: mov edi, ecx */ r_edi = r_ecx;
    /* 00884ff7: mov dword ptr [esi + ebx*4], edx */ W32((u32)(r_esi+r_ebx*4), r_edx);
    /* 00884ffa: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00884ffb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00884ffd: jle 0x885028 */ if ((fZ||fS!=fO)) goto L_00885028;
L_00884fff:; BB(0x00884fff);
    /* 00884fff: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
L_00885002:; BB(0x00885002);
    /* 00885002: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 00885005: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00885008: mov ebx, dword ptr [ebp + ebx - 0xd0] */ r_ebx = R32((u32)(r_ebp+r_ebx+0xffffff30u));
    /* 0088500f: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00885012: jne 0x885957 */ if (!fZ) goto L_00885957;
L_00885018:; BB(0x00885018);
    /* 00885018: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00885019: mov dword ptr [ebp + edi*4 - 0xd0], ebx */ W32((u32)(r_ebp+r_edi*4+0xffffff30u), r_ebx);
    /* 00885020: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00885021: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885023: jg 0x885002 */ if ((!fZ&&fS==fO)) goto L_00885002;
L_00885025:; BB(0x00885025);
    /* 00885025: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
L_00885028:; BB(0x00885028);
    /* 00885028: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885029: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088502c: jge 0x8850f9 */ if ((fS==fO)) goto L_008850f9;
L_00885032:; BB(0x00885032);
    /* 00885032: mov esi, ecx */ r_esi = r_ecx;
    /* 00885034: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00885036: add esi, 0x21 */ {  u32 a = r_esi; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00885039: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088503c: jl 0x8850d2 */ if ((fS!=fO)) goto L_008850d2;
L_00885042:; BB(0x00885042);
    /* 00885042: mov esi, dword ptr [ebp + ecx*4 - 0xd0] */ r_esi = R32((u32)(r_ebp+r_ecx*4+0xffffff30u));
    /* 00885049: mov edi, esi */ r_edi = r_esi;
    /* 0088504b: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0088504d: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088504f: jne 0x8850f9 */ if (!fZ) goto L_008850f9;
L_00885055:; BB(0x00885055);
    /* 00885055: mov edx, dword ptr [ebp + ecx*4 - 0xd4] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff2cu));
    /* 0088505c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088505e: mov dword ptr [ebp + ecx*4 - 0xd0], edx */ W32((u32)(r_ebp+r_ecx*4+0xffffff30u), r_edx);
    /* 00885065: mov edx, dword ptr [ebp + ecx*4 - 0xcc] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff34u));
    /* 0088506c: mov edi, edx */ r_edi = r_edx;
    /* 0088506e: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00885070: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885072: jne 0x8850f9 */ if (!fZ) goto L_008850f9;
L_00885078:; BB(0x00885078);
    /* 00885078: mov esi, dword ptr [ebp + ecx*4 - 0xd0] */ r_esi = R32((u32)(r_ebp+r_ecx*4+0xffffff30u));
    /* 0088507f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00885081: mov dword ptr [ebp + ecx*4 - 0xcc], esi */ W32((u32)(r_ebp+r_ecx*4+0xffffff34u), r_esi);
    /* 00885088: mov esi, dword ptr [ebp + ecx*4 - 0xc8] */ r_esi = R32((u32)(r_ebp+r_ecx*4+0xffffff38u));
    /* 0088508f: mov edi, esi */ r_edi = r_esi;
    /* 00885091: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00885093: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885095: jne 0x8850f9 */ if (!fZ) goto L_008850f9;
L_00885097:; BB(0x00885097);
    /* 00885097: mov edx, dword ptr [ebp + ecx*4 - 0xcc] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff34u));
    /* 0088509e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008850a0: mov dword ptr [ebp + ecx*4 - 0xc8], edx */ W32((u32)(r_ebp+r_ecx*4+0xffffff38u), r_edx);
    /* 008850a7: mov edx, dword ptr [ebp + ecx*4 - 0xc4] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff3cu));
    /* 008850ae: mov edi, edx */ r_edi = r_edx;
    /* 008850b0: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008850b2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008850b4: jne 0x8850f9 */ if (!fZ) goto L_008850f9;
L_008850b6:; BB(0x008850b6);
    /* 008850b6: mov esi, dword ptr [ebp + ecx*4 - 0xc8] */ r_esi = R32((u32)(r_ebp+r_ecx*4+0xffffff38u));
    /* 008850bd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008850bf: mov dword ptr [ebp + ecx*4 - 0xc4], esi */ W32((u32)(r_ebp+r_ecx*4+0xffffff3cu), r_esi);
    /* 008850c6: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008850c9: cmp ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008850cc: jl 0x885042 */ if ((fS!=fO)) goto L_00885042;
L_008850d2:; BB(0x008850d2);
    /* 008850d2: mov edi, dword ptr [ebp + ecx*4 - 0xd0] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0xffffff30u));
    /* 008850d9: mov esi, edi */ r_esi = r_edi;
    /* 008850db: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008850dd: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008850df: jne 0x8850f9 */ if (!fZ) goto L_008850f9;
L_008850e1:; BB(0x008850e1);
    /* 008850e1: mov edx, edi */ r_edx = r_edi;
    /* 008850e3: mov esi, dword ptr [ebp + ecx*4 - 0xd4] */ r_esi = R32((u32)(r_ebp+r_ecx*4+0xffffff2cu));
    /* 008850ea: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008850ec: mov dword ptr [ebp + ecx*4 - 0xd0], esi */ W32((u32)(r_ebp+r_ecx*4+0xffffff30u), r_esi);
    /* 008850f3: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008850f4: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008850f7: jl 0x8850d2 */ if ((fS!=fO)) goto L_008850d2;
L_008850f9:; BB(0x008850f9);
    /* 008850f9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008850fc: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008850fe: jl 0x884fcb */ if ((fS!=fO)) goto L_00884fcb;
L_00885104:; BB(0x00885104);
    /* 00885104: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00885107: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0088510a: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_0088510d:; BB(0x0088510d);
    /* 0088510d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088510f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00885111: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00885114: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885116: jle 0x885231 */ if ((fZ||fS!=fO)) goto L_00885231;
L_0088511c:; BB(0x0088511c);
    /* 0088511c: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 0088511f: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00885122: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
L_00885125:; BB(0x00885125);
    /* 00885125: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00885127: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00885129: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0088512c: mov esi, dword ptr [ebx + edx*4] */ r_esi = R32((u32)(r_ebx+r_edx*4));
    /* 0088512f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885130: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885132: jle 0x8851fe */ if ((fZ||fS!=fO)) goto L_008851fe;
L_00885138:; BB(0x00885138);
    /* 00885138: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088513b: jl 0x885949 */ if ((fS!=fO)) goto L_00885949;
L_00885141:; BB(0x00885141);
    /* 00885141: lea ebx, [esi - 6] */ r_ebx = (u32)(r_esi+0xfffffffau);
    /* 00885144: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00885147: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088514a: mov ebx, dword ptr [ebx + eax*4] */ r_ebx = R32((u32)(r_ebx+r_eax*4));
    /* 0088514d: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 00885150: lea ebx, [ecx + 1] */ r_ebx = (u32)(r_ecx+0x1u);
    /* 00885153: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00885156: lea ebx, [ecx + 2] */ r_ebx = (u32)(r_ecx+0x2u);
    /* 00885159: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0088515c: lea ebx, [ecx + 3] */ r_ebx = (u32)(r_ecx+0x3u);
    /* 0088515f: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00885162: lea ebx, [ecx + 4] */ r_ebx = (u32)(r_ecx+0x4u);
    /* 00885165: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 00885168: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088516b: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0088516e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00885171: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_00885174:; BB(0x00885174);
    /* 00885174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00885177: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885179: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0088517c: mov esi, edx */ r_esi = r_edx;
    /* 0088517e: mov eax, edx */ r_eax = r_edx;
    /* 00885180: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00885182: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00885185: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00885187: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885189: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0088518b: mov esi, edx */ r_esi = r_edx;
    /* 0088518d: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088518f: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00885192: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00885194: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885196: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00885199: mov ecx, eax */ r_ecx = r_eax;
    /* 0088519b: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0088519d: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008851a0: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008851a2: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008851a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008851a7: mov esi, edx */ r_esi = r_edx;
    /* 008851a9: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008851ac: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008851ae: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008851b1: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008851b3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008851b5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008851b8: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008851ba: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008851bd: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008851bf: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008851c2: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008851c5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008851c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008851cb: add dword ptr [ebp - 0x20], 5 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008851cf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008851d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008851d5: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008851d8: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008851da: jle 0x885174 */ if ((fZ||fS!=fO)) goto L_00885174;
L_008851dc:; BB(0x008851dc);
    /* 008851dc: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 008851df: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008851e2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_008851e5:; BB(0x008851e5);
    /* 008851e5: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 008851e8: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
L_008851eb:; BB(0x008851eb);
    /* 008851eb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008851ed: mov edx, ebx */ r_edx = r_ebx;
    /* 008851ef: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008851f1: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008851f4: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008851f6: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008851f7: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008851f9: jl 0x8851eb */ if ((fS!=fO)) goto L_008851eb;
L_008851fb:; BB(0x008851fb);
    /* 008851fb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_008851fe:; BB(0x008851fe);
    /* 008851fe: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00885201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885203: je 0x885214 */ if (fZ) goto L_00885214;
L_00885205:; BB(0x00885205);
    /* 00885205: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885207: je 0x88521d */ if (fZ) goto L_0088521d;
L_00885209:; BB(0x00885209);
    /* 00885209: mov ebx, eax */ r_ebx = r_eax;
    /* 0088520b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088520c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088520f: mov dword ptr [ecx + ebx*4], edi */ W32((u32)(r_ecx+r_ebx*4), r_edi);
    /* 00885212: jmp 0x88521d */ goto L_0088521d;
L_00885214:; BB(0x00885214);
    /* 00885214: mov ebx, eax */ r_ebx = r_eax;
    /* 00885216: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00885217: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088521a: mov dword ptr [ecx + ebx*4], edi */ W32((u32)(r_ecx+r_ebx*4), r_edi);
L_0088521d:; BB(0x0088521d);
    /* 0088521d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00885220: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885222: jl 0x885125 */ if ((fS!=fO)) goto L_00885125;
L_00885228:; BB(0x00885228);
    /* 00885228: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0088522b: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0088522e: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_00885231:; BB(0x00885231);
    /* 00885231: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00885234: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00885236: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00885239: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88523eu); f_00858020();
    /* 0088523e: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00885241: mov eax, esp */ r_eax = r_esp;
    /* 00885243: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00885246: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00885249: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088524b: je 0x88592e */ if (fZ) goto L_0088592e;
L_00885251:; BB(0x00885251);
    /* 00885251: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00885253: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885255: jle 0x8852e7 */ if ((fZ||fS!=fO)) goto L_008852e7;
L_0088525b:; BB(0x0088525b);
    /* 0088525b: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0088525e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885260: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00885263: add ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885266: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00885269: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
L_0088526c:; BB(0x0088526c);
    /* 0088526c: mov esi, dword ptr [edx + eax*4] */ r_esi = R32((u32)(r_edx+r_eax*4));
    /* 0088526f: mov edi, esi */ r_edi = r_esi;
    /* 00885271: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00885274: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00885277: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00885279: mov esi, edi */ r_esi = r_edi;
    /* 0088527b: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0088527e: and esi, 0xff00ff */ {  u32 a = r_esi; u32 b = 0xff00ffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00885284: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00885287: and edi, 0xff00ff00 */ {  u32 a = r_edi; u32 b = 0xff00ff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0088528d: or esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0088528f: mov edi, esi */ r_edi = r_esi;
    /* 00885291: shr edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00885294: and edi, 0xf0f0f0f */ {  u32 a = r_edi; u32 b = 0xf0f0f0fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0088529a: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0088529d: and esi, 0xf0f0f0f0 */ {  u32 a = r_esi; u32 b = 0xf0f0f0f0u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008852a3: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008852a5: mov esi, edi */ r_esi = r_edi;
    /* 008852a7: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008852aa: and esi, 0x33333333 */ {  u32 a = r_esi; u32 b = 0x33333333u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008852b0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008852b2: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008852b4: and edi, 0xcccccccc */ {  u32 a = r_edi; u32 b = 0xccccccccu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008852ba: or esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 008852bc: mov edi, esi */ r_edi = r_esi;
    /* 008852be: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008852c0: and edi, 0x55555555 */ {  u32 a = r_edi; u32 b = 0x55555555u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008852c6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008852c8: and esi, 0xaaaaaaaa */ {  u32 a = r_esi; u32 b = 0xaaaaaaaau; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008852ce: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008852d0: mov dword ptr [edx + eax*4], edi */ W32((u32)(r_edx+r_eax*4), r_edi);
    /* 008852d3: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008852d6: mov dword ptr [esi + eax*4], ecx */ W32((u32)(r_esi+r_eax*4), r_ecx);
    /* 008852d9: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008852dc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008852dd: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008852df: jl 0x88526c */ if ((fS!=fO)) goto L_0088526c;
L_008852e1:; BB(0x008852e1);
    /* 008852e1: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 008852e4: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_008852e7:; BB(0x008852e7);
    /* 008852e7: push 0x884afc */ { u32 v = 0x884afcu; r_esp -= 4; W32(r_esp, v); }
    /* 008852ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008852ef: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008852f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008852f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008852f3: call 0x8cade0 */ r_esp -= 4; W32(r_esp, 0x8852f8u); f_008cade0();
    /* 008852f8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008852fb: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 008852fe: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x885303u); f_00858020();
    /* 00885303: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00885306: mov eax, esp */ r_eax = r_esp;
    /* 00885308: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0088530b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0088530e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088530f: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x885314u); f_00859c55();
    /* 00885314: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00885315: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00885318: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088531a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088531c: jle 0x8853fe */ if ((fZ||fS!=fO)) goto L_008853fe;
L_00885322:; BB(0x00885322);
    /* 00885322: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885325: jl 0x8853d9 */ if ((fS!=fO)) goto L_008853d9;
L_0088532b:; BB(0x0088532b);
    /* 0088532b: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
    /* 0088532e: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 00885331: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00885334: lea edx, [ecx + 2] */ r_edx = (u32)(r_ecx+0x2u);
    /* 00885337: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0088533a: lea edx, [ecx + 3] */ r_edx = (u32)(r_ecx+0x3u);
    /* 0088533d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00885340: lea edx, [ecx + 4] */ r_edx = (u32)(r_ecx+0x4u);
    /* 00885343: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00885346: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00885349: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 0088534c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0088534f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00885352: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00885355: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 00885358: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
L_0088535b:; BB(0x0088535b);
    /* 0088535b: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0088535e: mov edi, dword ptr [esi + ecx*4] */ r_edi = R32((u32)(r_esi+r_ecx*4));
    /* 00885361: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00885364: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00885367: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088536a: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088536c: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0088536f: mov dword ptr [edx + edi*4], ecx */ W32((u32)(r_edx+r_edi*4), r_ecx);
    /* 00885372: mov edi, dword ptr [esi + ecx*4 + 4] */ r_edi = R32((u32)(r_esi+r_ecx*4+0x4u));
    /* 00885376: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00885378: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0088537b: mov dword ptr [edx + edi*4], ebx */ W32((u32)(r_edx+r_edi*4), r_ebx);
    /* 0088537e: mov edi, dword ptr [esi + ecx*4 + 8] */ r_edi = R32((u32)(r_esi+r_ecx*4+0x8u));
    /* 00885382: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00885384: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00885387: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0088538a: mov dword ptr [edx + edi*4], ebx */ W32((u32)(r_edx+r_edi*4), r_ebx);
    /* 0088538d: mov ebx, dword ptr [esi + ecx*4 + 0xc] */ r_ebx = R32((u32)(r_esi+r_ecx*4+0xcu));
    /* 00885391: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00885393: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00885396: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00885399: mov dword ptr [edx + ebx*4], edi */ W32((u32)(r_edx+r_ebx*4), r_edi);
    /* 0088539c: mov ebx, dword ptr [esi + ecx*4 + 0x10] */ r_ebx = R32((u32)(r_esi+r_ecx*4+0x10u));
    /* 008853a0: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008853a2: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008853a5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008853a8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008853ab: mov dword ptr [eax + ebx*4], edx */ W32((u32)(r_eax+r_ebx*4), r_edx);
    /* 008853ae: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 008853b1: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008853b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008853b7: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008853ba: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008853bd: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 008853c0: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008853c3: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008853c6: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 008853c9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008853cc: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008853ce: jle 0x88535b */ if ((fZ||fS!=fO)) goto L_0088535b;
L_008853d0:; BB(0x008853d0);
    /* 008853d0: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 008853d3: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 008853d6: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_008853d9:; BB(0x008853d9);
    /* 008853d9: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 008853dc: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008853df: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008853e2: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 008853e5: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
L_008853e8:; BB(0x008853e8);
    /* 008853e8: mov eax, dword ptr [edi + ecx*4] */ r_eax = R32((u32)(r_edi+r_ecx*4));
    /* 008853eb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008853ed: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008853f0: mov dword ptr [esi + eax*4], ecx */ W32((u32)(r_esi+r_eax*4), r_ecx);
    /* 008853f3: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008853f4: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008853f6: jl 0x8853e8 */ if ((fS!=fO)) goto L_008853e8;
L_008853f8:; BB(0x008853f8);
    /* 008853f8: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 008853fb: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_008853fe:; BB(0x008853fe);
    /* 008853fe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00885400: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885402: jle 0x8854a5 */ if ((fZ||fS!=fO)) goto L_008854a5;
L_00885408:; BB(0x00885408);
    /* 00885408: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088540b: jl 0x885488 */ if ((fS!=fO)) goto L_00885488;
L_0088540d:; BB(0x0088540d);
    /* 0088540d: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
    /* 00885410: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00885413: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 00885416: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00885419: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
L_0088541c:; BB(0x0088541c);
    /* 0088541c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088541f: mov esi, dword ptr [eax + ecx*4] */ r_esi = R32((u32)(r_eax+r_ecx*4));
    /* 00885422: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00885425: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00885428: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088542b: mov edi, dword ptr [edi + ecx*4] */ r_edi = R32((u32)(r_edi+r_ecx*4));
    /* 0088542e: mov dword ptr [ebx + esi*4], edi */ W32((u32)(r_ebx+r_esi*4), r_edi);
    /* 00885431: mov esi, dword ptr [eax + ecx*4 + 4] */ r_esi = R32((u32)(r_eax+r_ecx*4+0x4u));
    /* 00885435: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00885438: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088543b: mov edi, dword ptr [edi + ecx*4 + 4] */ r_edi = R32((u32)(r_edi+r_ecx*4+0x4u));
    /* 0088543f: mov dword ptr [ebx + esi*4], edi */ W32((u32)(r_ebx+r_esi*4), r_edi);
    /* 00885442: mov ebx, dword ptr [eax + ecx*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0x8u));
    /* 00885446: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 00885449: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088544c: mov esi, dword ptr [esi + ecx*4 + 8] */ r_esi = R32((u32)(r_esi+r_ecx*4+0x8u));
    /* 00885450: mov dword ptr [edi + ebx*4], esi */ W32((u32)(r_edi+r_ebx*4), r_esi);
    /* 00885453: mov esi, dword ptr [eax + ecx*4 + 0xc] */ r_esi = R32((u32)(r_eax+r_ecx*4+0xcu));
    /* 00885457: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 0088545a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088545d: mov edi, dword ptr [edi + ecx*4 + 0xc] */ r_edi = R32((u32)(r_edi+r_ecx*4+0xcu));
    /* 00885461: mov dword ptr [ebx + esi*4], edi */ W32((u32)(r_ebx+r_esi*4), r_edi);
    /* 00885464: mov ebx, dword ptr [eax + ecx*4 + 0x10] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0x10u));
    /* 00885468: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0088546b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088546e: mov eax, dword ptr [eax + ecx*4 + 0x10] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x10u));
    /* 00885472: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885475: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 00885478: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088547b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088547d: jle 0x88541c */ if ((fZ||fS!=fO)) goto L_0088541c;
L_0088547f:; BB(0x0088547f);
    /* 0088547f: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00885482: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00885485: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_00885488:; BB(0x00885488);
    /* 00885488: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
L_0088548b:; BB(0x0088548b);
    /* 0088548b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088548e: mov edi, dword ptr [eax + ecx*4] */ r_edi = R32((u32)(r_eax+r_ecx*4));
    /* 00885491: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00885494: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00885497: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 0088549a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088549b: mov dword ptr [eax + edi*4], edx */ W32((u32)(r_eax+r_edi*4), r_edx);
    /* 0088549e: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008854a0: jl 0x88548b */ if ((fS!=fO)) goto L_0088548b;
L_008854a2:; BB(0x008854a2);
    /* 008854a2: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
L_008854a5:; BB(0x008854a5);
    /* 008854a5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008854a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008854a9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8854aeu); f_00858882();
    /* 008854ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008854af: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008854b2: mov eax, edi */ r_eax = r_edi;
    /* 008854b4: mov edx, ebx */ r_edx = r_ebx;
    /* 008854b6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008854b9: call 0x884be4 */ r_esp -= 4; W32(r_esp, 0x8854beu); f_00884be4();
    /* 008854be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008854c1: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008854c4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 008854c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008854c8: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8854cdu); f_00859c55();
    /* 008854cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008854ce: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 008854d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008854d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008854d5: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 008854d8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008854da: jle 0x8854fc */ if ((fZ||fS!=fO)) goto L_008854fc;
L_008854dc:; BB(0x008854dc);
    /* 008854dc: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 008854df: cmp dword ptr [eax + edx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008854e3: jle 0x8854f7 */ if ((fZ||fS!=fO)) goto L_008854f7;
L_008854e5:; BB(0x008854e5);
    /* 008854e5: mov eax, ecx */ r_eax = r_ecx;
    /* 008854e7: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008854e8: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008854eb: mov eax, dword ptr [ebx + eax*4] */ r_eax = R32((u32)(r_ebx+r_eax*4));
    /* 008854ee: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 008854f1: mov dword ptr [ebx + eax*4], edx */ W32((u32)(r_ebx+r_eax*4), r_edx);
    /* 008854f4: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
L_008854f7:; BB(0x008854f7);
    /* 008854f7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008854f8: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008854fa: jl 0x8854dc */ if ((fS!=fO)) goto L_008854dc;
L_008854fc:; BB(0x008854fc);
    /* 008854fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008854fd: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x885502u); f_00859c55();
    /* 00885502: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00885503: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00885506: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00885508: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088550a: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0088550d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088550f: jle 0x885544 */ if ((fZ||fS!=fO)) goto L_00885544;
L_00885511:; BB(0x00885511);
    /* 00885511: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00885514: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
L_00885517:; BB(0x00885517);
    /* 00885517: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0088551a: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0088551d: mov eax, dword ptr [esi + edx*4] */ r_eax = R32((u32)(r_esi+r_edx*4));
    /* 00885520: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885522: jle 0x88553c */ if ((fZ||fS!=fO)) goto L_0088553c;
L_00885524:; BB(0x00885524);
    /* 00885524: mov esi, ebx */ r_esi = r_ebx;
    /* 00885526: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00885527: mov edi, dword ptr [ebp - 0x4c] */ r_edi = R32((u32)(r_ebp+0xffffffb4u));
    /* 0088552a: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0088552d: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00885530: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 00885533: mov byte ptr [esi + ecx], al */ W8((u32)(r_esi+r_ecx), (u8)r_eax);
    /* 00885536: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00885539: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
L_0088553c:; BB(0x0088553c);
    /* 0088553c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088553d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088553f: jl 0x885517 */ if ((fS!=fO)) goto L_00885517;
L_00885541:; BB(0x00885541);
    /* 00885541: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_00885544:; BB(0x00885544);
    /* 00885544: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00885547: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00885549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088554b: je 0x885554 */ if (fZ) goto L_00885554;
L_0088554d:; BB(0x0088554d);
    /* 0088554d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088554e: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00885550: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885552: jne 0x88554d */ if (!fZ) goto L_0088554d;
L_00885554:; BB(0x00885554);
    /* 00885554: add ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885557: mov eax, 5 */ r_eax = 0x5u;
    /* 0088555c: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088555f: jg 0x885563 */ if ((!fZ&&fS==fO)) goto L_00885563;
L_00885561:; BB(0x00885561);
    /* 00885561: mov ecx, eax */ r_ecx = r_eax;
L_00885563:; BB(0x00885563);
    /* 00885563: mov edx, 8 */ r_edx = 0x8u;
    /* 00885568: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088556b: jl 0x88556f */ if ((fS!=fO)) goto L_0088556f;
L_0088556d:; BB(0x0088556d);
    /* 0088556d: mov ecx, edx */ r_ecx = r_edx;
L_0088556f:; BB(0x0088556f);
    /* 0088556f: mov edi, 1 */ r_edi = 0x1u;
    /* 00885574: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 00885577: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00885579: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 0088557c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088557e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088557f: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x885584u); f_008587c7();
    /* 00885584: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885587: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0088558a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088558c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088558e: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 00885595: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885597: jle 0x885923 */ if ((fZ||fS!=fO)) goto L_00885923;
L_0088559d:; BB(0x0088559d);
    /* 0088559d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 008855a0: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 008855a3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008855a6: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 008855a9: jmp 0x8855ae */ goto L_008855ae;
L_008855ab:; BB(0x008855ab);
    /* 008855ab: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
L_008855ae:; BB(0x008855ae);
    /* 008855ae: movsx ecx, byte ptr [edx + edi] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_edi));
    /* 008855b2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008855b4: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008855b7: jg 0x8855bb */ if ((!fZ&&fS==fO)) goto L_008855bb;
L_008855b9:; BB(0x008855b9);
    /* 008855b9: mov ecx, eax */ r_ecx = r_eax;
L_008855bb:; BB(0x008855bb);
    /* 008855bb: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 008855be: movsx eax, byte ptr [edx + edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_edi));
    /* 008855c2: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008855c4: jle 0x8855ce */ if ((fZ||fS!=fO)) goto L_008855ce;
L_008855c6:; BB(0x008855c6);
    /* 008855c6: lea ebx, [edi + 1] */ r_ebx = (u32)(r_edi+0x1u);
    /* 008855c9: jmp 0x88569b */ goto L_0088569b;
L_008855ce:; BB(0x008855ce);
    /* 008855ce: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 008855d1: mov ebx, dword ptr [ebx + edi*4] */ r_ebx = R32((u32)(r_ebx+r_edi*4));
    /* 008855d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008855d6: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008855d9: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008855dc: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008855de: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008855e0: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008855e3: and ebx, 0xff00ff */ {  u32 a = r_ebx; u32 b = 0xff00ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008855e9: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008855ec: and ecx, 0xff00ff00 */ {  u32 a = r_ecx; u32 b = 0xff00ff00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008855f2: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008855f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008855f6: shr ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008855f9: and ecx, 0xf0f0f0f */ {  u32 a = r_ecx; u32 b = 0xf0f0f0fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008855ff: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00885602: and ebx, 0xf0f0f0f0 */ {  u32 a = r_ebx; u32 b = 0xf0f0f0f0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00885608: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0088560a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0088560c: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0088560f: and ebx, 0x33333333 */ {  u32 a = r_ebx; u32 b = 0x33333333u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00885615: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885617: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885619: and ecx, 0xcccccccc */ {  u32 a = r_ecx; u32 b = 0xccccccccu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0088561f: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00885621: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00885623: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00885625: and ecx, 0x55555555 */ {  u32 a = r_ecx; u32 b = 0x55555555u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0088562b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088562d: and ebx, 0xaaaaaaaa */ {  u32 a = r_ebx; u32 b = 0xaaaaaaaau; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00885633: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00885635: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00885637: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0088563a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0088563d: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00885640: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00885642: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00885647: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00885649: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088564b: jle 0x88591b */ if ((fZ||fS!=fO)) goto L_0088591b;
L_00885651:; BB(0x00885651);
    /* 00885651: lea ebx, [edi + 1] */ r_ebx = (u32)(r_edi+0x1u);
    /* 00885654: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 00885657: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 0088565a: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0088565d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_00885660:; BB(0x00885660);
    /* 00885660: mov ecx, eax */ r_ecx = r_eax;
    /* 00885662: mov edi, esi */ r_edi = r_esi;
    /* 00885664: mov ebx, dword ptr [ebp - 0x4c] */ r_ebx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00885667: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00885669: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0088566c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0088566f: or edi, dword ptr [ebp - 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00885672: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00885673: mov dword ptr [eax + edi*4], edx */ W32((u32)(r_eax+r_edi*4), r_edx);
    /* 00885676: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00885679: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0088567c: movsx eax, byte ptr [edx + eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_eax));
    /* 00885680: mov ebx, dword ptr [ebx + 0x24] */ r_ebx = R32((u32)(r_ebx+0x24u));
    /* 00885683: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00885685: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00885687: mov edi, 1 */ r_edi = 0x1u;
    /* 0088568c: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0088568e: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00885690: jl 0x885660 */ if ((fS!=fO)) goto L_00885660;
L_00885692:; BB(0x00885692);
    /* 00885692: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 00885695: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00885698: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_0088569b:; BB(0x0088569b);
    /* 0088569b: mov edi, ebx */ r_edi = r_ebx;
    /* 0088569d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008856a0: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008856a2: jl 0x8855ab */ if ((fS!=fO)) goto L_008855ab;
L_008856a8:; BB(0x008856a8);
    /* 008856a8: jmp 0x8856c7 */ goto L_008856c7;
L_008856aa:; BB(0x008856aa);
    /* 008856aa: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 008856ad: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 008856b0: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 008856b3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008856b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008856b7: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8856bcu); f_00858882();
    /* 008856bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008856bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008856bf: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 008856c2: jmp 0x885231 */ goto L_00885231;
L_008856c7:; BB(0x008856c7);
    /* 008856c7: mov ebx, ecx */ r_ebx = r_ecx;
L_008856c9:; BB(0x008856c9);
    /* 008856c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008856cc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008856ce: add ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008856d1: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 008856d6: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008856d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008856da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008856dc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008856df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008856e1: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008856e4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008856e6: jle 0x88590c */ if ((fZ||fS!=fO)) goto L_0088590c;
L_008856ec:; BB(0x008856ec);
    /* 008856ec: lea edi, [ebx - 6] */ r_edi = (u32)(r_ebx+0xfffffffau);
    /* 008856ef: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 008856f2: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 008856f5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008856f8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 008856fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008856fe: jmp 0x885703 */ goto L_00885703;
L_00885700:; BB(0x00885700);
    /* 00885700: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
L_00885703:; BB(0x00885703);
    /* 00885703: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00885705: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885708: mov ebx, eax */ r_ebx = r_eax;
    /* 0088570a: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0088570c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0088570e: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00885711: mov edx, ebx */ r_edx = r_ebx;
    /* 00885713: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00885716: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00885718: mov edx, ecx */ r_edx = r_ecx;
    /* 0088571a: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088571d: and edx, 0xff00ff */ {  u32 a = r_edx; u32 b = 0xff00ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00885723: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00885726: and ecx, 0xff00ff00 */ {  u32 a = r_ecx; u32 b = 0xff00ff00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0088572c: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0088572e: mov ecx, edx */ r_ecx = r_edx;
    /* 00885730: shr ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00885733: and ecx, 0xf0f0f0f */ {  u32 a = r_ecx; u32 b = 0xf0f0f0fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00885739: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0088573c: and edx, 0xf0f0f0f0 */ {  u32 a = r_edx; u32 b = 0xf0f0f0f0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00885742: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00885744: mov edi, ecx */ r_edi = r_ecx;
    /* 00885746: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00885749: and edi, 0x33333333 */ {  u32 a = r_edi; u32 b = 0x33333333u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0088574f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885751: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885753: and ecx, 0xcccccccc */ {  u32 a = r_ecx; u32 b = 0xccccccccu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00885759: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0088575b: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0088575e: mov ecx, edi */ r_ecx = r_edi;
    /* 00885760: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00885762: and ecx, 0x55555555 */ {  u32 a = r_ecx; u32 b = 0x55555555u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00885768: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088576a: and edi, 0xaaaaaaaa */ {  u32 a = r_edi; u32 b = 0xaaaaaaaau; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00885770: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00885772: cmp dword ptr [edx + ecx*4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885776: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00885779: jne 0x8858b2 */ if (!fZ) goto L_008858b2;
L_0088577f:; BB(0x0088577f);
    /* 0088577f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00885782: lea ecx, [ecx + 1] */ r_ecx = (u32)(r_ecx+0x1u);
    /* 00885785: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00885788: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0088578b: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088578d: jle 0x8857bb */ if ((fZ||fS!=fO)) goto L_008857bb;
L_0088578f:; BB(0x0088578f);
    /* 0088578f: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00885792: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00885795: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00885798: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088579b: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0088579e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
L_008857a1:; BB(0x008857a1);
    /* 008857a1: cmp ebx, dword ptr [ecx + eax*4 + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+r_eax*4+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008857a5: jb 0x8858fe */ if (fC) goto L_008858fe;
L_008857ab:; BB(0x008857ab);
    /* 008857ab: mov eax, edi */ r_eax = r_edi;
    /* 008857ad: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008857ae: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008857b0: jg 0x8857a1 */ if ((!fZ&&fS==fO)) goto L_008857a1;
L_008857b2:; BB(0x008857b2);
    /* 008857b2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008857b5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008857b8: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_008857bb:; BB(0x008857bb);
    /* 008857bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008857be: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008857c1: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008857c3: jge 0x885875 */ if ((fS==fO)) goto L_00885875;
L_008857c9:; BB(0x008857c9);
    /* 008857c9: mov ecx, edi */ r_ecx = r_edi;
    /* 008857cb: sub ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008857ce: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008857d1: jl 0x8858e2 */ if ((fS!=fO)) goto L_008858e2;
L_008857d7:; BB(0x008857d7);
    /* 008857d7: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008857da: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 008857dd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008857e0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008857e3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008857e6: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 008857e9: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
L_008857ec:; BB(0x008857ec);
    /* 008857ec: mov edi, dword ptr [ecx + edx*4] */ r_edi = R32((u32)(r_ecx+r_edx*4));
    /* 008857ef: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008857f1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008857f3: jb 0x8858d1 */ if (fC) goto L_008858d1;
L_008857f9:; BB(0x008857f9);
    /* 008857f9: mov edi, dword ptr [ecx + edx*4 + 4] */ r_edi = R32((u32)(r_ecx+r_edx*4+0x4u));
    /* 008857fd: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008857fe: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00885800: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00885802: jb 0x8859b8 */ if (fC) goto L_008859b8;
L_00885808:; BB(0x00885808);
    /* 00885808: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885809: mov edi, dword ptr [ecx + edx*4] */ r_edi = R32((u32)(r_ecx+r_edx*4));
    /* 0088580c: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0088580e: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00885810: jb 0x8859a4 */ if (fC) goto L_008859a4;
L_00885816:; BB(0x00885816);
    /* 00885816: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885817: mov edi, dword ptr [ecx + edx*4] */ r_edi = R32((u32)(r_ecx+r_edx*4));
    /* 0088581a: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0088581c: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088581e: jb 0x885990 */ if (fC) goto L_00885990;
L_00885824:; BB(0x00885824);
    /* 00885824: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885825: mov edi, dword ptr [ecx + edx*4] */ r_edi = R32((u32)(r_ecx+r_edx*4));
    /* 00885828: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0088582a: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088582c: jb 0x8858ea */ if (fC) goto L_008858ea;
L_00885832:; BB(0x00885832);
    /* 00885832: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885833: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885835: jle 0x8857ec */ if ((fZ||fS!=fO)) goto L_008857ec;
L_00885837:; BB(0x00885837);
    /* 00885837: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0088583a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0088583d: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00885840: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00885843: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
L_00885846:; BB(0x00885846);
    /* 00885846: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00885849: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0088584c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088584f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00885852: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 00885855: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_00885858:; BB(0x00885858);
    /* 00885858: mov eax, dword ptr [ecx + esi*4] */ r_eax = R32((u32)(r_ecx+r_esi*4));
    /* 0088585b: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088585d: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088585f: jb 0x8858c0 */ if (fC) goto L_008858c0;
L_00885861:; BB(0x00885861);
    /* 00885861: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00885862: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885864: jl 0x885858 */ if ((fS!=fO)) goto L_00885858;
L_00885866:; BB(0x00885866);
    /* 00885866: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00885869: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088586c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0088586f: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00885872: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
L_00885875:; BB(0x00885875);
    /* 00885875: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00885878: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088587b: cmp ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00885881: mov eax, 0x7fff */ r_eax = 0x7fffu;
    /* 00885886: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00885889: jae 0x88588d */ if (!fC) goto L_0088588d;
L_0088588b:; BB(0x0088588b);
    /* 0088588b: mov eax, ecx */ r_eax = r_ecx;
L_0088588d:; BB(0x0088588d);
    /* 0088588d: shl eax, 0xf */ { u32 c = (15u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00885890: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00885895: sub ebx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00885898: mov edi, 0x7fff */ r_edi = 0x7fffu;
    /* 0088589d: cmp ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008858a3: jb 0x8858a7 */ if (fC) goto L_008858a7;
L_008858a5:; BB(0x008858a5);
    /* 008858a5: mov ebx, edi */ r_ebx = r_edi;
L_008858a7:; BB(0x008858a7);
    /* 008858a7: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008858a9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008858ac: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 008858af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_008858b2:; BB(0x008858b2);
    /* 008858b2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008858b3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008858b6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008858b8: jl 0x885700 */ if ((fS!=fO)) goto L_00885700;
L_008858be:; BB(0x008858be);
    /* 008858be: jmp 0x88590c */ goto L_0088590c;
L_008858c0:; BB(0x008858c0);
    /* 008858c0: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 008858c3: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008858c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008858c9: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 008858cc: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 008858cf: jmp 0x885875 */ goto L_00885875;
L_008858d1:; BB(0x008858d1);
    /* 008858d1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008858d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008858d7: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 008858da: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 008858dd: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008858e0: jmp 0x885875 */ goto L_00885875;
L_008858e2:; BB(0x008858e2);
    /* 008858e2: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008858e5: jmp 0x885846 */ goto L_00885846;
L_008858ea:; BB(0x008858ea);
    /* 008858ea: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008858ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008858f0: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 008858f3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 008858f6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008858f9: jmp 0x885875 */ goto L_00885875;
L_008858fe:; BB(0x008858fe);
    /* 008858fe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00885901: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00885904: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00885907: jmp 0x8857bb */ goto L_008857bb;
L_0088590c:; BB(0x0088590c);
    /* 0088590c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088590e: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00885911: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00885914: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00885917: mov esp, ebp */ r_esp = r_ebp;
    /* 00885919: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088591a: ret  */ FN_RET(0x00884f08); r_esp += 4; return;
L_0088591b:; BB(0x0088591b);
    /* 0088591b: lea ebx, [edi + 1] */ r_ebx = (u32)(r_edi+0x1u);
    /* 0088591e: jmp 0x88569b */ goto L_0088569b;
L_00885923:; BB(0x00885923);
    /* 00885923: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00885926: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00885929: jmp 0x8856c9 */ goto L_008856c9;
L_0088592e:; BB(0x0088592e);
    /* 0088592e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088592f: mov eax, esi */ r_eax = r_esi;
    /* 00885931: call 0x884b68 */ r_esp -= 4; W32(r_esp, 0x885936u); f_00884b68();
    /* 00885936: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00885937: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0088593c: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088593f: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00885942: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00885945: mov esp, ebp */ r_esp = r_ebp;
    /* 00885947: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00885948: ret  */ FN_RET(0x00884f08); r_esp += 4; return;
L_00885949:; BB(0x00885949);
    /* 00885949: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088594c: mov ebx, dword ptr [ebx + eax*4] */ r_ebx = R32((u32)(r_ebx+r_eax*4));
    /* 0088594f: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 00885952: jmp 0x8851e5 */ goto L_008851e5;
L_00885957:; BB(0x00885957);
    /* 00885957: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0088595a: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088595d: je 0x885974 */ if (fZ) goto L_00885974;
L_0088595f:; BB(0x0088595f);
    /* 0088595f: mov esi, dword ptr [ebp + esi*2 - 0xd4] */ r_esi = R32((u32)(r_ebp+r_esi*2+0xffffff2cu));
    /* 00885966: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00885968: mov dword ptr [ebp + edi*4 - 0xd0], esi */ W32((u32)(r_ebp+r_edi*4+0xffffff30u), r_esi);
    /* 0088596f: jmp 0x885028 */ goto L_00885028;
L_00885974:; BB(0x00885974);
    /* 00885974: inc dword ptr [ebp - 0xcc] */ { u32 ad = (u32)(r_ebp+0xffffff34u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088597a: jmp 0x885028 */ goto L_00885028;
L_0088597f:; BB(0x0088597f);
    /* 0088597f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00885982: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885984: jne 0x8850f9 */ if (!fZ) goto L_008850f9;
L_0088598a:; BB(0x0088598a);
    /* 0088598a: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088598b: jmp 0x8850f9 */ goto L_008850f9;
L_00885990:; BB(0x00885990);
    /* 00885990: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00885993: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00885996: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00885999: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0088599c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088599f: jmp 0x885875 */ goto L_00885875;
L_008859a4:; BB(0x008859a4);
    /* 008859a4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008859a7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008859aa: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 008859ad: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 008859b0: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008859b3: jmp 0x885875 */ goto L_00885875;
L_008859b8:; BB(0x008859b8);
    /* 008859b8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008859bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008859be: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 008859c1: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 008859c4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008859c7: jmp 0x885875 */ goto L_00885875;
}

