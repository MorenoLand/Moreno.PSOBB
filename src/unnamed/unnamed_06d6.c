#include "protos.h"

void f_006d600c(void) /* sub_6D600C */
{
    FN_ENTER(0x006d600c);
    /* 006d600c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d600d: mov ebp, esp */ r_ebp = r_esp;
    /* 006d600f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6011: push 0x8edfc0 */ { u32 v = 0x8edfc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6016: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d601c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d601d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6024: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d602a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d602d: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d6030: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d6033: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d6036: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 006d6039: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d603c: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 006d6042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6043: mov ecx, dword ptr [edx + 0xdf4] */ r_ecx = R32((u32)(r_edx+0xdf4u));
    /* 006d6049: call 0x6a520c */ r_esp -= 4; W32(r_esp, 0x6d604eu); f_006a520c();
    /* 006d604e: mov edi, eax */ r_edi = r_eax;
    /* 006d6050: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6053: mov dword ptr [edx + 0x374], 0 */ W32((u32)(r_edx+0x374u), 0x0u);
    /* 006d605d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d605f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006d6061: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d6063: jle 0x6d612d */ if ((fZ||fS!=fO)) goto L_006d612d;
L_006d6069:; BB(0x006d6069);
    /* 006d6069: mov edx, dword ptr [ebp + esi*4 - 0xa8] */ r_edx = R32((u32)(r_ebp+r_esi*4+0xffffff58u));
    /* 006d6070: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6072: je 0x6d6119 */ if (fZ) goto L_006d6119;
L_006d6078:; BB(0x006d6078);
    /* 006d6078: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6079: call 0x5c9b94 */ r_esp -= 4; W32(r_esp, 0x6d607eu); f_005c9b94();
    /* 006d607e: mov ebx, eax */ r_ebx = r_eax;
    /* 006d6080: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d6083: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d6085: jle 0x6d6119 */ if ((fZ||fS!=fO)) goto L_006d6119;
L_006d608b:; BB(0x006d608b);
    /* 006d608b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d608e: mov edx, dword ptr [ecx + 0x374] */ r_edx = R32((u32)(r_ecx+0x374u));
    /* 006d6094: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d6096: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d6098: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d609b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d609d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d609f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006d60a1: lea edx, [ecx + eax + 0x2c] */ r_edx = (u32)(r_ecx+r_eax+0x2cu);
    /* 006d60a5: mov ecx, dword ptr [ebp + esi*4 - 0xa8] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0xffffff58u));
    /* 006d60ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d60ad: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6d60b2u); f_005c425c();
    /* 006d60b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d60b4: je 0x6d6119 */ if (fZ) goto L_006d6119;
L_006d60b6:; BB(0x006d60b6);
    /* 006d60b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d60b9: mov edx, dword ptr [eax + 0x374] */ r_edx = R32((u32)(r_eax+0x374u));
    /* 006d60bf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d60c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d60c3: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006d60c6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d60c8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d60ca: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006d60cc: mov edx, dword ptr [ebp + esi*4 - 0xa8] */ r_edx = R32((u32)(r_ebp+r_esi*4+0xffffff58u));
    /* 006d60d3: mov dword ptr [ecx + eax + 0x28], edx */ W32((u32)(r_ecx+r_eax+0x28u), r_edx);
    /* 006d60d7: mov edx, ebx */ r_edx = r_ebx;
    /* 006d60d9: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006d60dc: shr edx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006d60df: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d60e1: mov ebx, dword ptr [eax + 0x374] */ r_ebx = R32((u32)(r_eax+0x374u));
    /* 006d60e7: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006d60ea: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d60ec: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d60ee: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 006d60f1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d60f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d60f5: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006d60f7: mov dword ptr [ecx + eax + 0x3c], edx */ W32((u32)(r_ecx+r_eax+0x3cu), r_edx);
    /* 006d60fb: mov edx, dword ptr [eax + 0x374] */ r_edx = R32((u32)(r_eax+0x374u));
    /* 006d6101: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d6103: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d6105: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006d6108: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d610a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d610c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006d610e: mov dword ptr [ecx + eax + 0x40], esi */ W32((u32)(r_ecx+r_eax+0x40u), r_esi);
    /* 006d6112: add dword ptr [eax + 0x374], 1 */ { u32 ad = (u32)(r_eax+0x374u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006d6119:; BB(0x006d6119);
    /* 006d6119: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d611c: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d611e: jl 0x6d6069 */ if ((fS!=fO)) goto L_006d6069;
L_006d6124:; BB(0x006d6124);
    /* 006d6124: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6127: mov ecx, dword ptr [eax + 0x374] */ r_ecx = R32((u32)(r_eax+0x374u));
L_006d612d:; BB(0x006d612d);
    /* 006d612d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d612f: jne 0x6d6161 */ if (!fZ) goto L_006d6161;
L_006d6131:; BB(0x006d6131);
    /* 006d6131: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6134: mov ecx, dword ptr [eax + 0x38c] */ r_ecx = R32((u32)(r_eax+0x38cu));
    /* 006d613a: mov dword ptr [eax + 0x20], 7 */ W32((u32)(r_eax+0x20u), 0x7u);
    /* 006d6141: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6143: je 0x6d614a */ if (fZ) goto L_006d614a;
L_006d6145:; BB(0x006d6145);
    /* 006d6145: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d614au); f_00737d1c();
L_006d614a:; BB(0x006d614a);
    /* 006d614a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d614d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6150: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d6153: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6156: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d615d: mov esp, ebp */ r_esp = r_ebp;
    /* 006d615f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6160: ret  */ FN_RET(0x006d600c); r_esp += 4; return;
L_006d6161:; BB(0x006d6161);
    /* 006d6161: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6164: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6166: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6168: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d616a: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d616du); call_ind(t); }
    /* 006d616d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6170: mov ecx, dword ptr [eax + 0x38c] */ r_ecx = R32((u32)(r_eax+0x38cu));
    /* 006d6176: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 006d617d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d617f: je 0x6d6473 */ if (fZ) goto L_006d6473;
L_006d6185:; BB(0x006d6185);
    /* 006d6185: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d618au); f_00737d1c();
    /* 006d618a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d618d: mov edx, dword ptr [eax + 0x374] */ r_edx = R32((u32)(r_eax+0x374u));
    /* 006d6193: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d6195: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d6197: jle 0x6d61cd */ if ((fZ||fS!=fO)) goto L_006d61cd;
L_006d6199:; BB(0x006d6199);
    /* 006d6199: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d619c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d619d: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006d61a3: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006d61a6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d61a8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d61ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d61ad: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d61af: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d61b1: push dword ptr [edx + esi + 0x3c] */ { u32 v = R32((u32)(r_edx+r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d61b5: push dword ptr [edx + esi + 0x28] */ { u32 v = R32((u32)(r_edx+r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d61b9: call 0x73765c */ r_esp -= 4; W32(r_esp, 0x6d61beu); f_0073765c();
    /* 006d61be: mov eax, esi */ r_eax = r_esi;
    /* 006d61c0: mov edx, dword ptr [eax + 0x374] */ r_edx = R32((u32)(r_eax+0x374u));
    /* 006d61c6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d61c9: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d61cb: jl 0x6d6199 */ if ((fS!=fO)) goto L_006d6199;
L_006d61cd:; BB(0x006d61cd);
    /* 006d61cd: mov ebx, eax */ r_ebx = r_eax;
    /* 006d61cf: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 006d61d5: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 006d61db: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d61de: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d61e0: jl 0x6d61e4 */ if ((fS!=fO)) goto L_006d61e4;
L_006d61e2:; BB(0x006d61e2);
    /* 006d61e2: mov edx, eax */ r_edx = r_eax;
L_006d61e4:; BB(0x006d61e4);
    /* 006d61e4: mov dword ptr [ebx + 0x380], edx */ W32((u32)(r_ebx+0x380u), r_edx);
    /* 006d61ea: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d61efu); f_00737cdc();
    /* 006d61ef: mov edx, ebx */ r_edx = r_ebx;
    /* 006d61f1: movsx eax, word ptr [edx + 0x380] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x380u));
    /* 006d61f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d61f9: mov ecx, dword ptr [edx + 0x38c] */ r_ecx = R32((u32)(r_edx+0x38cu));
    /* 006d61ff: call 0x737c40 */ r_esp -= 4; W32(r_esp, 0x6d6204u); f_00737c40();
    /* 006d6204: mov eax, ebx */ r_eax = r_ebx;
    /* 006d6206: mov ecx, dword ptr [eax + 0x38c] */ r_ecx = R32((u32)(r_eax+0x38cu));
    /* 006d620c: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d6213: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006d6219: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 006d6220: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 006d6223: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6225: je 0x6d622e */ if (fZ) goto L_006d622e;
L_006d6227:; BB(0x006d6227);
    /* 006d6227: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6229: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d622eu); f_00760acc();
L_006d622e:; BB(0x006d622e);
    /* 006d622e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6231: mov edx, dword ptr [eax + 0x39c] */ r_edx = R32((u32)(r_eax+0x39cu));
    /* 006d6237: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6239: je 0x6d63b1 */ if (fZ) goto L_006d63b1;
L_006d623f:; BB(0x006d623f);
    /* 006d623f: mov ecx, dword ptr [eax + 0x38c] */ r_ecx = R32((u32)(r_eax+0x38cu));
    /* 006d6245: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6247: je 0x6d626d */ if (fZ) goto L_006d626d;
L_006d6249:; BB(0x006d6249);
    /* 006d6249: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d624eu); f_00737d90();
    /* 006d624e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d6250: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d6252: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d6255: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d6257: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d6259: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d625b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d625e: push dword ptr [edx + eax + 0x38] */ { u32 v = R32((u32)(r_edx+r_eax+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6262: mov ecx, dword ptr [eax + 0x39c] */ r_ecx = R32((u32)(r_eax+0x39cu));
    /* 006d6268: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x6d626du); f_0072606c();
L_006d626d:; BB(0x006d626d);
    /* 006d626d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6270: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 006d6276: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6278: je 0x6d6351 */ if (fZ) goto L_006d6351;
L_006d627e:; BB(0x006d627e);
    /* 006d627e: mov ecx, dword ptr [eax + 0x38c] */ r_ecx = R32((u32)(r_eax+0x38cu));
    /* 006d6284: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6286: je 0x6d62ca */ if (fZ) goto L_006d62ca;
L_006d6288:; BB(0x006d6288);
    /* 006d6288: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d628du); f_00737d90();
    /* 006d628d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6290: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 006d6293: mov ecx, dword ptr [esi + 0xdf4] */ r_ecx = R32((u32)(r_esi+0xdf4u));
    /* 006d6299: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d629b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d629d: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006d62a0: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d62a2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d62a4: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006d62a6: lea eax, [edx + ebx + 0x2c] */ r_eax = (u32)(r_edx+r_ebx+0x2cu);
    /* 006d62aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d62ab: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6d62b0u); f_006a4e50();
    /* 006d62b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d62b2: je 0x6d6313 */ if (fZ) goto L_006d6313;
L_006d62b4:; BB(0x006d62b4);
    /* 006d62b4: mov ecx, eax */ r_ecx = r_eax;
    /* 006d62b6: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6d62bbu); f_006a60dc();
    /* 006d62bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d62bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d62bf: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 006d62c5: call 0x73f004 */ r_esp -= 4; W32(r_esp, 0x6d62cau); f_0073f004();
L_006d62ca:; BB(0x006d62ca);
    /* 006d62ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d62cd: mov ebx, dword ptr [eax + 0x3a0] */ r_ebx = R32((u32)(r_eax+0x3a0u));
    /* 006d62d3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d62d5: je 0x6d6325 */ if (fZ) goto L_006d6325;
L_006d62d7:; BB(0x006d62d7);
    /* 006d62d7: mov ecx, eax */ r_ecx = r_eax;
    /* 006d62d9: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 006d62df: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d62e1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d62e3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d62e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d62e8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d62ea: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d62ec: mov eax, dword ptr [edx + ecx + 0x3c] */ r_eax = R32((u32)(r_edx+r_ecx+0x3cu));
    /* 006d62f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d62f2: jle 0x6d62fc */ if ((fZ||fS!=fO)) goto L_006d62fc;
L_006d62f4:; BB(0x006d62f4);
    /* 006d62f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d62f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d62f7: call 0x715c74 */ r_esp -= 4; W32(r_esp, 0x6d62fcu); f_00715c74();
L_006d62fc:; BB(0x006d62fc);
    /* 006d62fc: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d62ff: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6302: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d6305: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6308: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d630f: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6311: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6312: ret  */ FN_RET(0x006d600c); r_esp += 4; return;
L_006d6313:; BB(0x006d6313);
    /* 006d6313: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6316: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6318: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 006d631e: call 0x73f004 */ r_esp -= 4; W32(r_esp, 0x6d6323u); f_0073f004();
    /* 006d6323: jmp 0x6d62ca */ goto L_006d62ca;
L_006d6325:; BB(0x006d6325);
    /* 006d6325: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006d6328: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d632c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d632d: call 0x715b58 */ r_esp -= 4; W32(r_esp, 0x6d6332u); f_00715b58();
    /* 006d6332: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6333: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6336: mov dword ptr [edx + 0x3a0], eax */ W32((u32)(r_edx+0x3a0u), r_eax);
    /* 006d633c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d633e: je 0x6d62fc */ if (fZ) goto L_006d62fc;
L_006d6340:; BB(0x006d6340);
    /* 006d6340: mov edx, dword ptr [edx + 0x3c] */ r_edx = R32((u32)(r_edx+0x3cu));
    /* 006d6343: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6345: jle 0x6d62fc */ if ((fZ||fS!=fO)) goto L_006d62fc;
L_006d6347:; BB(0x006d6347);
    /* 006d6347: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6348: mov ecx, eax */ r_ecx = r_eax;
    /* 006d634a: call 0x715c74 */ r_esp -= 4; W32(r_esp, 0x6d634fu); f_00715c74();
    /* 006d634f: jmp 0x6d62fc */ goto L_006d62fc;
L_006d6351:; BB(0x006d6351);
    /* 006d6351: mov ecx, eax */ r_ecx = r_eax;
    /* 006d6353: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6d6358u); f_006dc9ec();
    /* 006d6358: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006d635b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d635c: call 0x73ee78 */ r_esp -= 4; W32(r_esp, 0x6d6361u); f_0073ee78();
    /* 006d6361: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6362: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6365: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006d6368: mov dword ptr [edx + 0x398], eax */ W32((u32)(r_edx+0x398u), r_eax);
    /* 006d636e: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006d6374: lea eax, [edx + 0x2c] */ r_eax = (u32)(r_edx+0x2cu);
    /* 006d6377: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6378: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6d637du); f_006a4e50();
    /* 006d637d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d637f: je 0x6d639c */ if (fZ) goto L_006d639c;
L_006d6381:; BB(0x006d6381);
    /* 006d6381: mov ecx, eax */ r_ecx = r_eax;
    /* 006d6383: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6d6388u); f_006a60dc();
    /* 006d6388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6389: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d638c: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 006d6392: call 0x73f004 */ r_esp -= 4; W32(r_esp, 0x6d6397u); f_0073f004();
    /* 006d6397: jmp 0x6d62ca */ goto L_006d62ca;
L_006d639c:; BB(0x006d639c);
    /* 006d639c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d639f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d63a1: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 006d63a7: call 0x73f004 */ r_esp -= 4; W32(r_esp, 0x6d63acu); f_0073f004();
    /* 006d63ac: jmp 0x6d62ca */ goto L_006d62ca;
L_006d63b1:; BB(0x006d63b1);
    /* 006d63b1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006d63b8: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d63bd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d63c2u); f_005caba4();
    /* 006d63c2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d63c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d63c8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006d63cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d63cd: je 0x6d646c */ if (fZ) goto L_006d646c;
L_006d63d3:; BB(0x006d63d3);
    /* 006d63d3: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006d63da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d63e1: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 006d63e3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d63e8u); f_0073ec50();
    /* 006d63e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d63e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d63ec: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d63ef: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006d63f2: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006d63f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d63f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d63f8: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x6d63fdu); f_00725d18();
    /* 006d63fd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006d6404:; BB(0x006d6404);
    /* 006d6404: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d6407: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d640a: mov dword ptr [edx + 0x39c], eax */ W32((u32)(r_edx+0x39cu), r_eax);
    /* 006d6410: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d6417: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6419: je 0x6d6459 */ if (fZ) goto L_006d6459;
L_006d641b:; BB(0x006d641b);
    /* 006d641b: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d6420u); f_0078b208();
    /* 006d6420: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d6423: jg 0x6d6433 */ if ((!fZ&&fS==fO)) goto L_006d6433;
L_006d6425:; BB(0x006d6425);
    /* 006d6425: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6428: mov edx, dword ptr [eax + 0x39c] */ r_edx = R32((u32)(r_eax+0x39cu));
    /* 006d642e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006d6431: jmp 0x6d6459 */ goto L_006d6459;
L_006d6433:; BB(0x006d6433);
    /* 006d6433: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6436: mov eax, dword ptr [edx + 0x39c] */ r_eax = R32((u32)(r_edx+0x39cu));
    /* 006d643c: mov dword ptr [eax + 0xa8], 0x3f400000 */ W32((u32)(r_eax+0xa8u), 0x3f400000u);
    /* 006d6446: mov dword ptr [eax + 0xac], 0x3f400000 */ W32((u32)(r_eax+0xacu), 0x3f400000u);
    /* 006d6450: mov ecx, dword ptr [edx + 0x39c] */ r_ecx = R32((u32)(r_edx+0x39cu));
    /* 006d6456: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_006d6459:; BB(0x006d6459);
    /* 006d6459: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d645c: push dword ptr [eax + 0x38] */ { u32 v = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d645f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d6462: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x6d6467u); f_0072606c();
    /* 006d6467: jmp 0x6d626d */ goto L_006d626d;
L_006d646c:; BB(0x006d646c);
    /* 006d646c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d646e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d6471: jmp 0x6d6404 */ goto L_006d6404;
L_006d6473:; BB(0x006d6473);
    /* 006d6473: push dword ptr [eax + 0x378] */ { u32 v = R32((u32)(r_eax+0x378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6479: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d647eu); f_006dbdb8();
    /* 006d647e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d6481: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006d6484: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d6488: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6489: push dword ptr [ebx + 0x374] */ { u32 v = R32((u32)(r_ebx+0x374u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d648f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6490: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d6495u); f_0073ff34();
    /* 006d6495: mov ecx, eax */ r_ecx = r_eax;
    /* 006d6497: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d649a: mov edx, ebx */ r_edx = r_ebx;
    /* 006d649c: mov esi, dword ptr [edx + 0x374] */ r_esi = R32((u32)(r_edx+0x374u));
    /* 006d64a2: mov dword ptr [edx + 0x38c], ecx */ W32((u32)(r_edx+0x38cu), r_ecx);
    /* 006d64a8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d64aa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d64ac: jle 0x6d64e8 */ if ((fZ||fS!=fO)) goto L_006d64e8;
L_006d64ae:; BB(0x006d64ae);
    /* 006d64ae: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d64b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d64b2: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006d64b5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d64b7: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006d64ba: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d64bc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d64be: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006d64c0: push dword ptr [esi + edi + 0x3c] */ { u32 v = R32((u32)(r_esi+r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d64c4: push dword ptr [esi + edi + 0x28] */ { u32 v = R32((u32)(r_esi+r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d64c8: call 0x73765c */ r_esp -= 4; W32(r_esp, 0x6d64cdu); f_0073765c();
    /* 006d64cd: mov eax, edi */ r_eax = r_edi;
    /* 006d64cf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d64d2: cmp ebx, dword ptr [eax + 0x374] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x374u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d64d8: jge 0x6d64e2 */ if ((fS==fO)) goto L_006d64e2;
L_006d64da:; BB(0x006d64da);
    /* 006d64da: mov ecx, dword ptr [eax + 0x38c] */ r_ecx = R32((u32)(r_eax+0x38cu));
    /* 006d64e0: jmp 0x6d64ae */ goto L_006d64ae;
L_006d64e2:; BB(0x006d64e2);
    /* 006d64e2: mov ecx, dword ptr [eax + 0x38c] */ r_ecx = R32((u32)(r_eax+0x38cu));
L_006d64e8:; BB(0x006d64e8);
    /* 006d64e8: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d64edu); f_00737cdc();
    /* 006d64ed: jmp 0x6d622e */ goto L_006d622e;
}

void f_006d64f4(void) /* sub_6D64F4 */
{
    FN_ENTER(0x006d64f4);
    /* 006d64f4: mov dword ptr [0xa96228], 0x3f800000 */ W32((u32)(0xa96228u), 0x3f800000u);
    /* 006d64fe: mov dword ptr [0xa9622c], 0x41000000 */ W32((u32)(0xa9622cu), 0x41000000u);
    /* 006d6508: mov dword ptr [0xa96230], 0x3fc00000 */ W32((u32)(0xa96230u), 0x3fc00000u);
    /* 006d6512: ret  */ FN_RET(0x006d64f4); r_esp += 4; return;
}

void f_006d6514(void) /* sub_6D6514 */
{
    FN_ENTER(0x006d6514);
    /* 006d6514: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6515: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d6517: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d6519: call 0x6d6538 */ r_esp -= 4; W32(r_esp, 0x6d651eu); f_006d6538();
    /* 006d651e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d6522: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6524: jne 0x6d652a */ if (!fZ) goto L_006d652a;
L_006d6526:; BB(0x006d6526);
    /* 006d6526: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6527: ret 4 */ FN_RET(0x006d6514); r_esp += 8; return;
L_006d652a:; BB(0x006d652a);
    /* 006d652a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d652b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d6530u); f_005c2f74();
    /* 006d6530: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6531: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6532: ret 4 */ FN_RET(0x006d6514); r_esp += 8; return;
}

void f_006d6538(void) /* sub_6D6538 */
{
    FN_ENTER(0x006d6538);
    /* 006d6538: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6539: mov ebp, esp */ r_ebp = r_esp;
    /* 006d653b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d653d: push 0x8edfdc */ { u32 v = 0x8edfdcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6542: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6549: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6550: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6553: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d6556: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d6559: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d655c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d655f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d6562: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d6569: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d656c: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 006d656f: mov dword ptr [ecx], 0xb3c5c0 */ W32((u32)(r_ecx), 0xb3c5c0u);
    /* 006d6575: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6577: je 0x6d6590 */ if (fZ) goto L_006d6590;
L_006d6579:; BB(0x006d6579);
    /* 006d6579: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d657c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d6580: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d6585: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d6589: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_006d6590:; BB(0x006d6590);
    /* 006d6590: call 0x6dc514 */ r_esp -= 4; W32(r_esp, 0x6d6595u); f_006dc514();
    /* 006d6595: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6598: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d659b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d659d: je 0x6d65ae */ if (fZ) goto L_006d65ae;
L_006d659f:; BB(0x006d659f);
    /* 006d659f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d65a4u); f_007127b0();
    /* 006d65a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d65a7: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006d65ae:; BB(0x006d65ae);
    /* 006d65ae: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d65b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d65b3: je 0x6d65c4 */ if (fZ) goto L_006d65c4;
L_006d65b5:; BB(0x006d65b5);
    /* 006d65b5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d65bau); f_007127b0();
    /* 006d65ba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d65bd: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006d65c4:; BB(0x006d65c4);
    /* 006d65c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006d65c6: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6d65cbu); f_006dc9fc();
    /* 006d65cb: mov dword ptr [eax*4 + 0xa9624c], 0 */ W32((u32)(r_eax*4+0xa9624cu), 0x0u);
    /* 006d65d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d65d8: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6d65ddu); f_00791748();
    /* 006d65dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d65de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d65e5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d65e8: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6d65edu); f_006dc3a0();
    /* 006d65ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d65f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d65f7: mov esp, ebp */ r_esp = r_ebp;
    /* 006d65f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d65fa: ret  */ FN_RET(0x006d6538); r_esp += 4; return;
}

void f_006d6562(void)
{
    FN_ENTER(0x006d6562);
    /* 006d6562: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d6569: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d656c: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 006d656f: mov dword ptr [ecx], 0xb3c5c0 */ W32((u32)(r_ecx), 0xb3c5c0u);
    /* 006d6575: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6577: je 0x6d6590 */ if (fZ) goto L_006d6590;
L_006d6579:; BB(0x006d6579);
    /* 006d6579: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d657c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d6580: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d6585: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d6589: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_006d6590:; BB(0x006d6590);
    /* 006d6590: call 0x6dc514 */ r_esp -= 4; W32(r_esp, 0x6d6595u); f_006dc514();
    /* 006d6595: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6598: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d659b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d659d: je 0x6d65ae */ if (fZ) goto L_006d65ae;
L_006d659f:; BB(0x006d659f);
    /* 006d659f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d65a4u); f_007127b0();
    /* 006d65a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d65a7: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006d65ae:; BB(0x006d65ae);
    /* 006d65ae: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d65b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d65b3: je 0x6d65c4 */ if (fZ) goto L_006d65c4;
L_006d65b5:; BB(0x006d65b5);
    /* 006d65b5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d65bau); f_007127b0();
    /* 006d65ba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d65bd: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006d65c4:; BB(0x006d65c4);
    /* 006d65c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006d65c6: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6d65cbu); f_006dc9fc();
    /* 006d65cb: mov dword ptr [eax*4 + 0xa9624c], 0 */ W32((u32)(r_eax*4+0xa9624cu), 0x0u);
    /* 006d65d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d65d8: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6d65ddu); f_00791748();
    /* 006d65dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d65de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d65e5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d65e8: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6d65edu); f_006dc3a0();
    /* 006d65ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d65f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d65f7: mov esp, ebp */ r_esp = r_ebp;
    /* 006d65f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d65fa: ret  */ FN_RET(0x006d6562); r_esp += 4; return;
}

void f_006d65fc(void) /* sub_6D65FC */
{
    FN_ENTER(0x006d65fc);
    /* 006d65fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d65fd: mov edi, ecx */ r_edi = r_ecx;
    /* 006d65ff: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 006d6602: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d6605: ja 0x6d6666 */ if ((!fC&&!fZ)) goto L_006d6666;
L_006d6607:; BB(0x006d6607);
    /* 006d6607: mov eax, dword ptr [eax*4 + 0x96c258] */ r_eax = R32((u32)(r_eax*4+0x96c258u));
    /* 006d660e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d6666:; BB(0x006d6666);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d65fc); r_esp += 4; return;
}

void f_006d6610(void)
{
    FN_ENTER(0x006d6610);
    /* 006d6610: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6612: call 0x6d6668 */ r_esp -= 4; W32(r_esp, 0x6d6617u); f_006d6668();
    /* 006d6617: jmp 0x6d6666 */ goto L_006d6666;
L_006d6666:; BB(0x006d6666);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d6610); r_esp += 4; return;
}

void f_006d6619(void)
{
    FN_ENTER(0x006d6619);
    /* 006d6619: mov ecx, edi */ r_ecx = r_edi;
    /* 006d661b: call 0x6d6a44 */ r_esp -= 4; W32(r_esp, 0x6d6620u); f_006d6a44();
    /* 006d6620: jmp 0x6d6666 */ goto L_006d6666;
L_006d6666:; BB(0x006d6666);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d6619); r_esp += 4; return;
}

void f_006d6622(void)
{
    FN_ENTER(0x006d6622);
    /* 006d6622: mov dword ptr [edi + 0x20], 9 */ W32((u32)(r_edi+0x20u), 0x9u);
    /* 006d6629: jmp 0x6d6666 */ goto L_006d6666;
L_006d6666:; BB(0x006d6666);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d6622); r_esp += 4; return;
}

void f_006d662b(void)
{
    FN_ENTER(0x006d662b);
    /* 006d662b: mov dword ptr [edi + 0x20], 9 */ W32((u32)(r_edi+0x20u), 0x9u);
    /* 006d6632: jmp 0x6d6666 */ goto L_006d6666;
L_006d6666:; BB(0x006d6666);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d662b); r_esp += 4; return;
}

void f_006d6634(void)
{
    FN_ENTER(0x006d6634);
    /* 006d6634: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6636: call 0x6d66a0 */ r_esp -= 4; W32(r_esp, 0x6d663bu); f_006d66a0();
    /* 006d663b: jmp 0x6d6666 */ goto L_006d6666;
L_006d6666:; BB(0x006d6666);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d6634); r_esp += 4; return;
}

void f_006d663d(void)
{
    FN_ENTER(0x006d663d);
    /* 006d663d: mov ecx, edi */ r_ecx = r_edi;
    /* 006d663f: call 0x6d6758 */ r_esp -= 4; W32(r_esp, 0x6d6644u); f_006d6758();
    /* 006d6644: jmp 0x6d6666 */ goto L_006d6666;
L_006d6666:; BB(0x006d6666);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d663d); r_esp += 4; return;
}

void f_006d6646(void)
{
    FN_ENTER(0x006d6646);
    /* 006d6646: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6648: call 0x6d6820 */ r_esp -= 4; W32(r_esp, 0x6d664du); f_006d6820();
    /* 006d664d: jmp 0x6d6666 */ goto L_006d6666;
L_006d6666:; BB(0x006d6666);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d6646); r_esp += 4; return;
}

void f_006d664f(void)
{
    FN_ENTER(0x006d664f);
    /* 006d664f: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6651: call 0x6d6a78 */ r_esp -= 4; W32(r_esp, 0x6d6656u); f_006d6a78();
    /* 006d6656: jmp 0x6d6666 */ goto L_006d6666;
L_006d6666:; BB(0x006d6666);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d664f); r_esp += 4; return;
}

void f_006d6658(void)
{
    FN_ENTER(0x006d6658);
    /* 006d6658: mov ecx, edi */ r_ecx = r_edi;
    /* 006d665a: call 0x6dc7d4 */ r_esp -= 4; W32(r_esp, 0x6d665fu); f_006dc7d4();
    /* 006d665f: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d6658); r_esp += 4; return;
}

void f_006d6666(void)
{
    FN_ENTER(0x006d6666);
    /* 006d6666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6667: ret  */ FN_RET(0x006d6666); r_esp += 4; return;
}

void f_006d6668(void) /* sub_6D6668 */
{
    FN_ENTER(0x006d6668);
    /* 006d6668: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d6669: mov edi, ecx */ r_edi = r_ecx;
    /* 006d666b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d666d: mov ecx, edi */ r_ecx = r_edi;
    /* 006d666f: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d6672u); call_ind(t); }
    /* 006d6672: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6674: jne 0x6d6678 */ if (!fZ) goto L_006d6678;
L_006d6676:; BB(0x006d6676);
    /* 006d6676: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6677: ret  */ FN_RET(0x006d6668); r_esp += 4; return;
L_006d6678:; BB(0x006d6678);
    /* 006d6678: mov ecx, edi */ r_ecx = r_edi;
    /* 006d667a: call 0x6dc8fc */ r_esp -= 4; W32(r_esp, 0x6d667fu); f_006dc8fc();
    /* 006d667f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6681: je 0x6d669e */ if (fZ) goto L_006d669e;
L_006d6683:; BB(0x006d6683);
    /* 006d6683: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6685: call 0x6dc500 */ r_esp -= 4; W32(r_esp, 0x6d668au); f_006dc500();
    /* 006d668a: mov ecx, edi */ r_ecx = r_edi;
    /* 006d668c: call 0x6dc4b0 */ r_esp -= 4; W32(r_esp, 0x6d6691u); f_006dc4b0();
    /* 006d6691: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006d6695: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d669a: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_006d669e:; BB(0x006d669e);
    /* 006d669e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d669f: ret  */ FN_RET(0x006d6668); r_esp += 4; return;
}

void f_006d66a0(void) /* sub_6D66A0 */
{
    FN_ENTER(0x006d66a0);
    /* 006d66a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d66a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006d66a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d66a5: push 0x8ee004 */ { u32 v = 0x8ee004u; r_esp -= 4; W32(r_esp, v); }
    /* 006d66aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d66b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d66b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d66b8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d66bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d66be: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d66c1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d66c4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d66c7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006d66ca: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006d66d1: push 0x3ac */ { u32 v = 0x3acu; r_esp -= 4; W32(r_esp, v); }
    /* 006d66d6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d66dbu); f_005caba4();
    /* 006d66db: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d66de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d66e1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006d66e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d66e6: je 0x6d674f */ if (fZ) goto L_006d674f;
L_006d66e8:; BB(0x006d66e8);
    /* 006d66e8: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006d66ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d66f6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d66f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d66fc: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 006d66fe: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6701: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6702: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6708: call 0x6d58b8 */ r_esp -= 4; W32(r_esp, 0x6d670du); f_006d58b8();
    /* 006d670d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006d6714:; BB(0x006d6714);
    /* 006d6714: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d671b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d671e: mov dword ptr [eax + 0x3a4], 0x6d4a00 */ W32((u32)(r_eax+0x3a4u), 0x6d4a00u);
    /* 006d6728: mov dword ptr [eax + 0x3a8], 0x6d6ad8 */ W32((u32)(r_eax+0x3a8u), 0x6d6ad8u);
    /* 006d6732: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6d6737u); f_007bebe8();
    /* 006d6737: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d673a: mov dword ptr [eax + 0x20], 7 */ W32((u32)(r_eax+0x20u), 0x7u);
    /* 006d6741: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6744: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d674b: mov esp, ebp */ r_esp = r_ebp;
    /* 006d674d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d674e: ret  */ FN_RET(0x006d66a0); r_esp += 4; return;
L_006d674f:; BB(0x006d674f);
    /* 006d674f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d6751: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d6754: jmp 0x6d6714 */ goto L_006d6714;
}

void f_006d6758(void) /* sub_6D6758 */
{
    FN_ENTER(0x006d6758);
    /* 006d6758: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6759: mov ebp, esp */ r_ebp = r_esp;
    /* 006d675b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d675d: push 0x8ee02c */ { u32 v = 0x8ee02cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6762: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6769: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6770: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6773: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d6776: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d6779: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d677c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d677f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006d6782: mov eax, dword ptr [0xa963ac] */ r_eax = R32((u32)(0xa963acu));
    /* 006d6787: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6789: jle 0x6d680f */ if ((fZ||fS!=fO)) goto L_006d680f;
L_006d678f:; BB(0x006d678f);
    /* 006d678f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006d6796: push 0x194 */ { u32 v = 0x194u; r_esp -= 4; W32(r_esp, v); }
    /* 006d679b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d67a0u); f_005caba4();
    /* 006d67a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d67a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d67a6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006d67a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d67ab: je 0x6d6808 */ if (fZ) goto L_006d6808;
L_006d67ad:; BB(0x006d67ad);
    /* 006d67ad: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006d67b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d67bb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d67be: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d67c1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d67c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d67c5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d67cb: call 0x6d4cac */ r_esp -= 4; W32(r_esp, 0x6d67d0u); f_006d4cac();
    /* 006d67d0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006d67d7:; BB(0x006d67d7);
    /* 006d67d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d67de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d67e1: mov dword ptr [eax + 0x190], 0x6d4a00 */ W32((u32)(r_eax+0x190u), 0x6d4a00u);
    /* 006d67eb: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6d67f0u); f_007bebe8();
    /* 006d67f0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d67f3: mov dword ptr [eax + 0x20], 7 */ W32((u32)(r_eax+0x20u), 0x7u);
    /* 006d67fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d67fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6804: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6806: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6807: ret  */ FN_RET(0x006d6758); r_esp += 4; return;
L_006d6808:; BB(0x006d6808);
    /* 006d6808: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d680a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d680d: jmp 0x6d67d7 */ goto L_006d67d7;
L_006d680f:; BB(0x006d680f);
    /* 006d680f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6812: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6819: mov esp, ebp */ r_esp = r_ebp;
    /* 006d681b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d681c: ret  */ FN_RET(0x006d6758); r_esp += 4; return;
}

void f_006d6820(void) /* sub_6D6820 */
{
    FN_ENTER(0x006d6820);
    /* 006d6820: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d6821: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d6822: mov edi, ecx */ r_edi = r_ecx;
    /* 006d6824: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d6827: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6829: je 0x6d68ca */ if (fZ) goto L_006d68ca;
L_006d682f:; BB(0x006d682f);
    /* 006d682f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6831: je 0x6d6873 */ if (fZ) goto L_006d6873;
L_006d6833:; BB(0x006d6833);
    /* 006d6833: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d683a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d683c: je 0x6d6873 */ if (fZ) goto L_006d6873;
L_006d683e:; BB(0x006d683e);
    /* 006d683e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d6843u); f_007365f4();
    /* 006d6843: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6845: je 0x6d6851 */ if (fZ) goto L_006d6851;
L_006d6847:; BB(0x006d6847);
    /* 006d6847: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d684a: je 0x6d68a6 */ if (fZ) goto L_006d68a6;
L_006d684c:; BB(0x006d684c);
    /* 006d684c: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d684f: jmp 0x6d6873 */ goto L_006d6873;
L_006d6851:; BB(0x006d6851);
    /* 006d6851: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d6854: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 006d685b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d6860u); f_007127b0();
    /* 006d6860: mov eax, dword ptr [0xa963ac] */ r_eax = R32((u32)(0xa963acu));
    /* 006d6865: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
    /* 006d686c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d686e: jle 0x6d68bf */ if ((fZ||fS!=fO)) goto L_006d68bf;
L_006d6870:; BB(0x006d6870);
    /* 006d6870: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6871: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6872: ret  */ FN_RET(0x006d6820); r_esp += 4; return;
L_006d6873:; BB(0x006d6873);
    /* 006d6873: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6875: je 0x6d68a3 */ if (fZ) goto L_006d68a3;
L_006d6877:; BB(0x006d6877);
    /* 006d6877: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d687e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6880: je 0x6d68a3 */ if (fZ) goto L_006d68a3;
L_006d6882:; BB(0x006d6882);
    /* 006d6882: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6884: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6886: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d6888: mov ecx, edi */ r_ecx = r_edi;
    /* 006d688a: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d688du); call_ind(t); }
    /* 006d688d: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d6890: mov dword ptr [edi + 0x20], 9 */ W32((u32)(r_edi+0x20u), 0x9u);
    /* 006d6897: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d689cu); f_007127b0();
    /* 006d689c: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
L_006d68a3:; BB(0x006d68a3);
    /* 006d68a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d68a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d68a5: ret  */ FN_RET(0x006d6820); r_esp += 4; return;
L_006d68a6:; BB(0x006d68a6);
    /* 006d68a6: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d68a9: mov dword ptr [edi + 0x20], 4 */ W32((u32)(r_edi+0x20u), 0x4u);
    /* 006d68b0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d68b5u); f_007127b0();
    /* 006d68b5: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
    /* 006d68bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d68bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d68be: ret  */ FN_RET(0x006d6820); r_esp += 4; return;
L_006d68bf:; BB(0x006d68bf);
    /* 006d68bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d68c1: call 0x6d7f5c */ r_esp -= 4; W32(r_esp, 0x6d68c6u); f_006d7f5c();
    /* 006d68c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d68c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d68c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d68c9: ret  */ FN_RET(0x006d6820); r_esp += 4; return;
L_006d68ca:; BB(0x006d68ca);
    /* 006d68ca: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d68cc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d68d1u); f_0073ec50();
    /* 006d68d1: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006d68d4: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d68d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d68d9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d68db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d68dc: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6d68e1u); f_007354fc();
    /* 006d68e1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d68e3: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006d68e6: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d68ebu); f_006dbdb8();
    /* 006d68eb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d68ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d68f0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d68f2: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d68f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d68f6: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d68fbu); f_00735c90();
    /* 006d68fb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d68fd: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d6902u); f_006dbdb8();
    /* 006d6902: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6903: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6905: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6907: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d690a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d690b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d6910u); f_00735c90();
    /* 006d6910: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d6913: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6d6918u); f_0073608c();
    /* 006d6918: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d691b: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6d6920u); f_00736458();
    /* 006d6920: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 006d6923: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d692a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d692f: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d6936: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6938: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d693du); f_006dc8d8();
    /* 006d693d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d6940: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6942: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d6947u); f_006dc8d8();
    /* 006d6947: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d694a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d694d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d6951: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d6954: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d6958: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d695du); f_0070f5a4();
    /* 006d695d: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d6960: jmp 0x6d682f */ goto L_006d682f;
}

void f_006d6968(void) /* sub_6D6968 */
{
    FN_ENTER(0x006d6968);
    /* 006d6968: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d696a: mov dword ptr [0xa9624c], eax */ W32((u32)(0xa9624cu), r_eax);
    /* 006d696f: mov dword ptr [0xa96250], eax */ W32((u32)(0xa96250u), r_eax);
    /* 006d6974: mov dword ptr [0xa96254], eax */ W32((u32)(0xa96254u), r_eax);
    /* 006d6979: mov dword ptr [0xa96258], eax */ W32((u32)(0xa96258u), r_eax);
    /* 006d697e: ret  */ FN_RET(0x006d6968); r_esp += 4; return;
}

void f_006d6980(void) /* sub_6D6980 */
{
    FN_ENTER(0x006d6980);
    /* 006d6980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6981: mov ebp, esp */ r_ebp = r_esp;
    /* 006d6983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6985: push 0x8ee048 */ { u32 v = 0x8ee048u; r_esp -= 4; W32(r_esp, v); }
    /* 006d698a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6991: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6998: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d699b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d699e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006d69a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006d69a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006d69a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006d69aa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d69ad: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006d69b0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d69b3: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6d69b8u); f_006dc410();
    /* 006d69b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d69bf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d69c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d69c5: mov dword ptr [ecx], 0xb3c5c0 */ W32((u32)(r_ecx), 0xb3c5c0u);
    /* 006d69cb: mov eax, dword ptr [0x9cf0e8] */ r_eax = R32((u32)(0x9cf0e8u));
    /* 006d69d0: mov dword ptr [0xa9625c], ecx */ W32((u32)(0xa9625cu), r_ecx);
    /* 006d69d6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006d69d9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d69db: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006d69de: mov dword ptr [0xa96248], ebx */ W32((u32)(0xa96248u), r_ebx);
    /* 006d69e4: mov dword ptr [0xa96244], ebx */ W32((u32)(0xa96244u), r_ebx);
    /* 006d69ea: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006d69ed: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006d69f0: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006d69f3: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006d69f6: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6d69fbu); f_006dc9fc();
    /* 006d69fb: mov dword ptr [eax*4 + 0xa9624c], 1 */ W32((u32)(r_eax*4+0xa9624cu), 0x1u);
    /* 006d6a06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6a08: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6d6a0du); f_00791748();
    /* 006d6a0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6a0e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d6a11: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d6a14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6a17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6a1e: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6a20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6a21: ret 8 */ FN_RET(0x006d6980); r_esp += 12; return;
}

void f_006d6a24(void) /* sub_6D6A24 */
{
    FN_ENTER(0x006d6a24);
    /* 006d6a24: mov dword ptr [0xa96238], 0x3f800000 */ W32((u32)(0xa96238u), 0x3f800000u);
    /* 006d6a2e: mov dword ptr [0xa9623c], 0x41000000 */ W32((u32)(0xa9623cu), 0x41000000u);
    /* 006d6a38: mov dword ptr [0xa96240], 0x3fc00000 */ W32((u32)(0xa96240u), 0x3fc00000u);
    /* 006d6a42: ret  */ FN_RET(0x006d6a24); r_esp += 4; return;
}

void f_006d6a44(void) /* sub_6D6A44 */
{
    FN_ENTER(0x006d6a44);
    /* 006d6a44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6a45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d6a47: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d6a49: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d6a4b: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d6a4eu); call_ind(t); }
    /* 006d6a4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6a50: jne 0x6d6a54 */ if (!fZ) goto L_006d6a54;
L_006d6a52:; BB(0x006d6a52);
    /* 006d6a52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6a53: ret  */ FN_RET(0x006d6a44); r_esp += 4; return;
L_006d6a54:; BB(0x006d6a54);
    /* 006d6a54: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d6a56: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6d6a5bu); f_006dc988();
    /* 006d6a5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6a5d: je 0x6d6a76 */ if (fZ) goto L_006d6a76;
L_006d6a5f:; BB(0x006d6a5f);
    /* 006d6a5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6a61: push dword ptr [0xa96248] */ { u32 v = R32((u32)(0xa96248u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6a67: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d6a69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d6a6b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d6a6eu); call_ind(t); }
    /* 006d6a6e: mov eax, dword ptr [0xa96244] */ r_eax = R32((u32)(0xa96244u));
    /* 006d6a73: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
L_006d6a76:; BB(0x006d6a76);
    /* 006d6a76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6a77: ret  */ FN_RET(0x006d6a44); r_esp += 4; return;
}

void f_006d6a6e(void)
{
    FN_ENTER(0x006d6a6e);
    /* 006d6a6e: mov eax, dword ptr [0xa96244] */ r_eax = R32((u32)(0xa96244u));
    /* 006d6a73: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 006d6a76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6a77: ret  */ FN_RET(0x006d6a6e); r_esp += 4; return;
}

void f_006d6a78(void) /* sub_6D6A78 */
{
    FN_ENTER(0x006d6a78);
    /* 006d6a78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d6a79: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6a7c: mov edi, ecx */ r_edi = r_ecx;
    /* 006d6a7e: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006d6a85: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006d6a8d: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6a8f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d6a94u); f_0073ec50();
    /* 006d6a94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6a95: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d6a98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6a99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6a9a: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6a9c: call 0x6dc794 */ r_esp -= 4; W32(r_esp, 0x6d6aa1u); f_006dc794();
    /* 006d6aa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6aa3: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6aa5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d6aa7: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6aa9: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d6aacu); call_ind(t); }
    /* 006d6aac: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6aae: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6d6ab3u); f_006dc9ec();
    /* 006d6ab3: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006d6ab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6ab7: call 0x73a33c */ r_esp -= 4; W32(r_esp, 0x6d6abcu); f_0073a33c();
    /* 006d6abc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6abd: mov dword ptr [edi + 0x20], 2 */ W32((u32)(r_edi+0x20u), 0x2u);
    /* 006d6ac4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6ac6: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006d6ac9: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6acb: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6d6ad0u); f_006dc62c();
    /* 006d6ad0: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 006d6ad3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d6ad6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6ad7: ret  */ FN_RET(0x006d6a78); r_esp += 4; return;
}

void f_006d6ad8(void) /* sub_6D6AD8 */
{
    FN_ENTER(0x006d6ad8);
    /* 006d6ad8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6ad9: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006d6add: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6adf: je 0x6d6b08 */ if (fZ) goto L_006d6b08;
L_006d6ae1:; BB(0x006d6ae1);
    /* 006d6ae1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6ae3: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6ae5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d6ae8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d6aea: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d6aedu); call_ind(t); }
    /* 006d6aed: mov dword ptr [ebp + 0x20], 8 */ W32((u32)(r_ebp+0x20u), 0x8u);
    /* 006d6af4: mov dword ptr [0xa96248], 0x1a */ W32((u32)(0xa96248u), 0x1au);
    /* 006d6afe: mov dword ptr [0xa96244], 2 */ W32((u32)(0xa96244u), 0x2u);
L_006d6b08:; BB(0x006d6b08);
    /* 006d6b08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6b09: ret  */ FN_RET(0x006d6ad8); r_esp += 4; return;
}

void f_006d6b0c(void) /* sub_6D6B0C */
{
    FN_ENTER(0x006d6b0c);
    /* 006d6b0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6b0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d6b0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d6b11: call 0x6d6b30 */ r_esp -= 4; W32(r_esp, 0x6d6b16u); f_006d6b30();
    /* 006d6b16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d6b1a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6b1c: jne 0x6d6b22 */ if (!fZ) goto L_006d6b22;
L_006d6b1e:; BB(0x006d6b1e);
    /* 006d6b1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6b1f: ret 4 */ FN_RET(0x006d6b0c); r_esp += 8; return;
L_006d6b22:; BB(0x006d6b22);
    /* 006d6b22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6b23: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d6b28u); f_005c2f74();
    /* 006d6b28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6b29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6b2a: ret 4 */ FN_RET(0x006d6b0c); r_esp += 8; return;
}

void f_006d6b30(void) /* sub_6D6B30 */
{
    FN_ENTER(0x006d6b30);
    /* 006d6b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6b31: mov ebp, esp */ r_ebp = r_esp;
    /* 006d6b33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6b35: push 0x8ee064 */ { u32 v = 0x8ee064u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6b3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6b40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6b41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6b48: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6b4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d6b4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d6b51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d6b54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d6b57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d6b5a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6b5d: mov dword ptr [ecx], 0xb3c780 */ W32((u32)(r_ecx), 0xb3c780u);
    /* 006d6b63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d6b6a: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6d6b6fu); f_007ba1f0();
    /* 006d6b6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6b72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6b79: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6b7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6b7c: ret  */ FN_RET(0x006d6b30); r_esp += 4; return;
}

void f_006d6b80(void) /* sub_6D6B80 */
{
    FN_ENTER(0x006d6b80);
    /* 006d6b80: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006d6b84: mov eax, dword ptr [edx*4 + 0xa9624c] */ r_eax = R32((u32)(r_edx*4+0xa9624cu));
    /* 006d6b8b: ret  */ FN_RET(0x006d6b80); r_esp += 4; return;
}

void f_006d6b8c(void) /* sub_6D6B8C */
{
    FN_ENTER(0x006d6b8c);
    /* 006d6b8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6b8d: mov ebp, esp */ r_ebp = r_esp;
    /* 006d6b8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6b91: push 0x8ee08c */ { u32 v = 0x8ee08cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6b96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6b9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6ba4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6ba7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d6baa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d6bad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d6bb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d6bb3: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6bb5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006d6bbc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d6bc1u); f_005caba4();
    /* 006d6bc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6bc2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006d6bc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6bc7: je 0x6d6c00 */ if (fZ) goto L_006d6c00;
L_006d6bc9:; BB(0x006d6bc9);
    /* 006d6bc9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006d6bd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d6bd7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6bda: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6be0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6be3: call 0x6d6980 */ r_esp -= 4; W32(r_esp, 0x6d6be8u); f_006d6980();
    /* 006d6be8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6beb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006d6bf2:; BB(0x006d6bf2);
    /* 006d6bf2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6bf5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6bfc: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6bfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6bff: ret  */ FN_RET(0x006d6b8c); r_esp += 4; return;
L_006d6c00:; BB(0x006d6c00);
    /* 006d6c00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6c02: jmp 0x6d6bf2 */ goto L_006d6bf2;
}

void f_006d6c04(void) /* sub_6D6C04 */
{
    FN_ENTER(0x006d6c04);
    /* 006d6c04: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006d6c08: mov eax, dword ptr [edx*4 + 0xa96110] */ r_eax = R32((u32)(r_edx*4+0xa96110u));
    /* 006d6c0f: ret  */ FN_RET(0x006d6c04); r_esp += 4; return;
}

void f_006d6c10(void) /* sub_6D6C10 */
{
    FN_ENTER(0x006d6c10);
    /* 006d6c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6c11: mov ebp, esp */ r_ebp = r_esp;
    /* 006d6c13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6c15: push 0x8ee0b4 */ { u32 v = 0x8ee0b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6c1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6c21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6c28: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6c2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d6c2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d6c31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d6c34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d6c37: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6c39: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006d6c40: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d6c45u); f_005caba4();
    /* 006d6c45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6c46: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006d6c49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6c4b: je 0x6d6c84 */ if (fZ) goto L_006d6c84;
L_006d6c4d:; BB(0x006d6c4d);
    /* 006d6c4d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006d6c54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d6c5b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6c5e: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6c64: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6c67: call 0x6cec20 */ r_esp -= 4; W32(r_esp, 0x6d6c6cu); f_006cec20();
    /* 006d6c6c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6c6f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006d6c76:; BB(0x006d6c76);
    /* 006d6c76: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6c79: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6c80: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6c82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6c83: ret  */ FN_RET(0x006d6c10); r_esp += 4; return;
L_006d6c84:; BB(0x006d6c84);
    /* 006d6c84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6c86: jmp 0x6d6c76 */ goto L_006d6c76;
}

void f_006d6c6f(void)
{
    FN_ENTER(0x006d6c6f);
    /* 006d6c6f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006d6c76: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6c79: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6c80: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6c82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6c83: ret  */ FN_RET(0x006d6c6f); r_esp += 4; return;
}

void f_006d6c88(void) /* sub_6D6C88 */
{
    FN_ENTER(0x006d6c88);
    /* 006d6c88: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006d6c8c: mov eax, dword ptr [edx*4 + 0xa96204] */ r_eax = R32((u32)(r_edx*4+0xa96204u));
    /* 006d6c93: ret  */ FN_RET(0x006d6c88); r_esp += 4; return;
}

void f_006d6c94(void) /* sub_6D6C94 */
{
    FN_ENTER(0x006d6c94);
    /* 006d6c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6c95: mov ebp, esp */ r_ebp = r_esp;
    /* 006d6c97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6c99: push 0x8ee0dc */ { u32 v = 0x8ee0dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6c9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6ca5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6cac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6caf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d6cb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d6cb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d6cb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d6cbb: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6cbd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006d6cc4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d6cc9u); f_005caba4();
    /* 006d6cc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6cca: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006d6ccd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6ccf: je 0x6d6d08 */ if (fZ) goto L_006d6d08;
L_006d6cd1:; BB(0x006d6cd1);
    /* 006d6cd1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006d6cd8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d6cdf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6ce2: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6ce8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6ceb: call 0x6d4a20 */ r_esp -= 4; W32(r_esp, 0x6d6cf0u); f_006d4a20();
    /* 006d6cf0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6cf3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006d6cfa:; BB(0x006d6cfa);
    /* 006d6cfa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6cfd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6d04: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6d06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6d07: ret  */ FN_RET(0x006d6c94); r_esp += 4; return;
L_006d6d08:; BB(0x006d6d08);
    /* 006d6d08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6d0a: jmp 0x6d6cfa */ goto L_006d6cfa;
}

void f_006d6d0c(void) /* sub_6D6D0C */
{
    FN_ENTER(0x006d6d0c);
    /* 006d6d0c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006d6d10: mov eax, dword ptr [edx*4 + 0xa962e8] */ r_eax = R32((u32)(r_edx*4+0xa962e8u));
    /* 006d6d17: ret  */ FN_RET(0x006d6d0c); r_esp += 4; return;
}

void f_006d6d18(void) /* sub_6D6D18 */
{
    FN_ENTER(0x006d6d18);
    /* 006d6d18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6d19: mov ebp, esp */ r_ebp = r_esp;
    /* 006d6d1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6d1d: push 0x8ee104 */ { u32 v = 0x8ee104u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6d22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6d28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6d29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6d30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6d33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d6d36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d6d39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d6d3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d6d3f: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6d41: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006d6d48: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d6d4du); f_005caba4();
    /* 006d6d4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6d4e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006d6d51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6d53: je 0x6d6d8c */ if (fZ) goto L_006d6d8c;
L_006d6d55:; BB(0x006d6d55);
    /* 006d6d55: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006d6d5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d6d63: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6d66: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6d6c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6d6f: call 0x6d9134 */ r_esp -= 4; W32(r_esp, 0x6d6d74u); f_006d9134();
    /* 006d6d74: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6d77: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006d6d7e:; BB(0x006d6d7e);
    /* 006d6d7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6d81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6d88: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6d8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6d8b: ret  */ FN_RET(0x006d6d18); r_esp += 4; return;
L_006d6d8c:; BB(0x006d6d8c);
    /* 006d6d8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6d8e: jmp 0x6d6d7e */ goto L_006d6d7e;
}

void f_006d6d90(void) /* sub_6D6D90 */
{
    FN_ENTER(0x006d6d90);
    /* 006d6d90: mov eax, dword ptr [0xa95edc] */ r_eax = R32((u32)(0xa95edcu));
    /* 006d6d95: ret  */ FN_RET(0x006d6d90); r_esp += 4; return;
}

void f_006d6d98(void) /* sub_6D6D98 */
{
    FN_ENTER(0x006d6d98);
    /* 006d6d98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6d99: mov ebp, esp */ r_ebp = r_esp;
    /* 006d6d9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6d9d: push 0x8ee12c */ { u32 v = 0x8ee12cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6da2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6da8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6da9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6db0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6db3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d6db6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d6db9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d6dbc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d6dbf: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6dc1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006d6dc8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d6dcdu); f_005caba4();
    /* 006d6dcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6dce: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006d6dd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6dd3: je 0x6d6e0c */ if (fZ) goto L_006d6e0c;
L_006d6dd5:; BB(0x006d6dd5);
    /* 006d6dd5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006d6ddc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d6de3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6de6: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6dec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6def: call 0x6c9390 */ r_esp -= 4; W32(r_esp, 0x6d6df4u); f_006c9390();
    /* 006d6df4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6df7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006d6dfe:; BB(0x006d6dfe);
    /* 006d6dfe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6e01: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6e08: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6e0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6e0b: ret  */ FN_RET(0x006d6d98); r_esp += 4; return;
L_006d6e0c:; BB(0x006d6e0c);
    /* 006d6e0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6e0e: jmp 0x6d6dfe */ goto L_006d6dfe;
}

void f_006d6e10(void) /* sub_6D6E10 */
{
    FN_ENTER(0x006d6e10);
    /* 006d6e10: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006d6e14: mov eax, dword ptr [edx*4 + 0xa960c8] */ r_eax = R32((u32)(r_edx*4+0xa960c8u));
    /* 006d6e1b: ret  */ FN_RET(0x006d6e10); r_esp += 4; return;
}

void f_006d6e1c(void) /* sub_6D6E1C */
{
    FN_ENTER(0x006d6e1c);
    /* 006d6e1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6e1d: mov ebp, esp */ r_ebp = r_esp;
    /* 006d6e1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6e21: push 0x8ee154 */ { u32 v = 0x8ee154u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6e26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6e2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6e2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6e34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6e37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d6e3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d6e3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d6e40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d6e43: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6e45: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006d6e4c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d6e51u); f_005caba4();
    /* 006d6e51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6e52: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006d6e55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6e57: je 0x6d6e90 */ if (fZ) goto L_006d6e90;
L_006d6e59:; BB(0x006d6e59);
    /* 006d6e59: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006d6e60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d6e67: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6e6a: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6e70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6e73: call 0x6ce490 */ r_esp -= 4; W32(r_esp, 0x6d6e78u); f_006ce490();
    /* 006d6e78: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6e7b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006d6e82:; BB(0x006d6e82);
    /* 006d6e82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6e85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6e8c: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6e8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6e8f: ret  */ FN_RET(0x006d6e1c); r_esp += 4; return;
L_006d6e90:; BB(0x006d6e90);
    /* 006d6e90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6e92: jmp 0x6d6e82 */ goto L_006d6e82;
}

void f_006d6e94(void) /* sub_6D6E94 */
{
    FN_ENTER(0x006d6e94);
    /* 006d6e94: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006d6e98: mov eax, dword ptr [edx*4 + 0xa95efc] */ r_eax = R32((u32)(r_edx*4+0xa95efcu));
    /* 006d6e9f: ret  */ FN_RET(0x006d6e94); r_esp += 4; return;
}

void f_006d6ea0(void)
{
    FN_ENTER(0x006d6ea0);
    /* 006d6ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 006d6ea3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6ea5: push 0x8ee17c */ { u32 v = 0x8ee17cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d6eaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d6eb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6eb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d6eb8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6ebb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d6ebe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d6ec1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d6ec4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d6ec7: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 006d6ec9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006d6ed0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d6ed5u); f_005caba4();
    /* 006d6ed5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6ed6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006d6ed9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6edb: je 0x6d6f14 */ if (fZ) goto L_006d6f14;
L_006d6edd:; BB(0x006d6edd);
    /* 006d6edd: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006d6ee4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d6eeb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6eee: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6ef4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6ef7: call 0x6ca84c */ r_esp -= 4; W32(r_esp, 0x6d6efcu); f_006ca84c();
    /* 006d6efc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d6eff: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006d6f06:; BB(0x006d6f06);
    /* 006d6f06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d6f09: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6f10: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6f12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6f13: ret  */ FN_RET(0x006d6ea0); r_esp += 4; return;
L_006d6f14:; BB(0x006d6f14);
    /* 006d6f14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d6f16: jmp 0x6d6f06 */ goto L_006d6f06;
}

void f_006d6f18(void) /* sub_6D6F18 */
{
    FN_ENTER(0x006d6f18);
    /* 006d6f18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d6f19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d6f1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d6f1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6f1c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d6f1f: mov edi, ecx */ r_edi = r_ecx;
    /* 006d6f21: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 006d6f27: lea ebp, [eax + eax*4] */ r_ebp = (u32)(r_eax+r_eax*4);
    /* 006d6f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d6f2b: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6f2d: call 0x6d7138 */ r_esp -= 4; W32(r_esp, 0x6d6f32u); f_006d7138();
    /* 006d6f32: mov ebx, eax */ r_ebx = r_eax;
    /* 006d6f34: mov edx, dword ptr [edi + 0x94] */ r_edx = R32((u32)(r_edi+0x94u));
    /* 006d6f3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d6f3c: jle 0x6d6f4f */ if ((fZ||fS!=fO)) goto L_006d6f4f;
L_006d6f3e:; BB(0x006d6f3e);
    /* 006d6f3e: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d6f41: mov dword ptr [edi + 0x94], edx */ W32((u32)(r_edi+0x94u), r_edx);
    /* 006d6f47: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d6f4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6f4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6f4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d6f4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6f4e: ret  */ FN_RET(0x006d6f18); r_esp += 4; return;
L_006d6f4f:; BB(0x006d6f4f);
    /* 006d6f4f: mov edx, dword ptr [0xaab1f4] */ r_edx = R32((u32)(0xaab1f4u));
    /* 006d6f55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6f57: je 0x6d6f61 */ if (fZ) goto L_006d6f61;
L_006d6f59:; BB(0x006d6f59);
    /* 006d6f59: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d6f5c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6f5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6f5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d6f5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6f60: ret  */ FN_RET(0x006d6f18); r_esp += 4; return;
L_006d6f61:; BB(0x006d6f61);
    /* 006d6f61: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6d6f66u); f_00415cec();
    /* 006d6f66: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006d6f69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6f6a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d6f6fu); f_006dc358();
    /* 006d6f6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6f72: je 0x6d6f7c */ if (fZ) goto L_006d6f7c;
L_006d6f74:; BB(0x006d6f74);
    /* 006d6f74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d6f77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6f78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6f79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d6f7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6f7b: ret  */ FN_RET(0x006d6f18); r_esp += 4; return;
L_006d6f7c:; BB(0x006d6f7c);
    /* 006d6f7c: mov edx, dword ptr [0xa95de0] */ r_edx = R32((u32)(0xa95de0u));
    /* 006d6f82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6f84: je 0x6d6f8e */ if (fZ) goto L_006d6f8e;
L_006d6f86:; BB(0x006d6f86);
    /* 006d6f86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d6f89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d6f8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6f8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d6f8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d6f8d: ret  */ FN_RET(0x006d6f18); r_esp += 4; return;
L_006d6f8e:; BB(0x006d6f8e);
    /* 006d6f8e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d6f93u); f_006dc358();
    /* 006d6f93: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6f96: je 0x6d7070 */ if (fZ) goto L_006d7070;
L_006d6f9c:; BB(0x006d6f9c);
    /* 006d6f9c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d6fa2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6d6fa7u); f_0068d5a8();
    /* 006d6fa7: mov edi, eax */ r_edi = r_eax;
    /* 006d6fa9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d6fac: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6fae: je 0x6d7127 */ if (fZ) goto L_006d7127;
L_006d6fb4:; BB(0x006d6fb4);
    /* 006d6fb4: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006d6fb8: call 0x6d7155 */ r_esp -= 4; W32(r_esp, 0x6d6fbdu); f_006d7155();
    /* 006d6fbd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6fc0: je 0x6d7127 */ if (fZ) goto L_006d7127;
L_006d6fc6:; BB(0x006d6fc6);
    /* 006d6fc6: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006d6fca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d6fcb: call 0x6ceec8 */ r_esp -= 4; W32(r_esp, 0x6d6fd0u); f_006ceec8();
    /* 006d6fd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d6fd1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6fd4: je 0x6d7127 */ if (fZ) goto L_006d7127;
L_006d6fda:; BB(0x006d6fda);
    /* 006d6fda: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6fdc: call 0x689428 */ r_esp -= 4; W32(r_esp, 0x6d6fe1u); f_00689428();
    /* 006d6fe1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6fe4: je 0x6d7127 */ if (fZ) goto L_006d7127;
L_006d6fea:; BB(0x006d6fea);
    /* 006d6fea: mov ecx, edi */ r_ecx = r_edi;
    /* 006d6fec: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6d6ff1u); f_00689410();
    /* 006d6ff1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d6ff4: je 0x6d7127 */ if (fZ) goto L_006d7127;
L_006d6ffa:; BB(0x006d6ffa);
    /* 006d6ffa: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 006d6ffe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006d7000:; BB(0x006d7000);
    /* 006d7000: mov ebp, dword ptr [esi + 0x9cf110] */ r_ebp = R32((u32)(r_esi+0x9cf110u));
    /* 006d7006: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006d700a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d700b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d7010u); f_006dc358();
    /* 006d7010: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006d7013: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7014: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6d7016u); call_ind(t); }
    /* 006d7016: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7019: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d701c: je 0x6d712f */ if (fZ) goto L_006d712f;
L_006d7022:; BB(0x006d7022);
    /* 006d7022: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d7025: cmp esi, 0xb4 */ {  u32 a = r_esi; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006d702b: jb 0x6d7000 */ if (fC) goto L_006d7000;
L_006d702d:; BB(0x006d702d);
    /* 006d702d: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 006d7031: mov esi, dword ptr [ebp*4 + 0x9cf110] */ r_esi = R32((u32)(r_ebp*4+0x9cf110u));
    /* 006d7038: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006d703c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d703d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d7042u); f_006dc358();
    /* 006d7042: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006d7045: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d7046: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x6d7048u); call_ind(t); }
    /* 006d7048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d704b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d704e: je 0x6d7127 */ if (fZ) goto L_006d7127;
L_006d7054:; BB(0x006d7054);
    /* 006d7054: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006d7057: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7059: je 0x6d7127 */ if (fZ) goto L_006d7127;
L_006d705f:; BB(0x006d705f);
    /* 006d705f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d7060: call dword ptr [ebp*4 + 0x9cf10c] */ { u32 t = R32((u32)(r_ebp*4+0x9cf10cu)); r_esp -= 4; W32(r_esp, 0x6d7067u); call_ind(t); }
    /* 006d7067: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d7068: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d706b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d706c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d706d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d706e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d706f: ret  */ FN_RET(0x006d6f18); r_esp += 4; return;
L_006d7070:; BB(0x006d7070);
    /* 006d7070: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 006d7074: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 006d7078: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006d707a:; BB(0x006d707a);
    /* 006d707a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d707b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6d7080u); f_0068d5a8();
    /* 006d7080: mov ebp, eax */ r_ebp = r_eax;
    /* 006d7082: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d7085: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7087: je 0x6d711b */ if (fZ) goto L_006d711b;
L_006d708d:; BB(0x006d708d);
    /* 006d708d: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 006d7092: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d7093: mov ecx, edi */ r_ecx = r_edi;
    /* 006d7095: call 0x6d739c */ r_esp -= 4; W32(r_esp, 0x6d709au); f_006d739c();
    /* 006d709a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d709c: je 0x6d711b */ if (fZ) goto L_006d711b;
L_006d709e:; BB(0x006d709e);
    /* 006d709e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006d70a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d70a3: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d70a8u); f_006dc358();
    /* 006d70a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d70a9: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006d70ac: mov ebx, dword ptr [edx*4 + 0xa9627c] */ r_ebx = R32((u32)(r_edx*4+0xa9627cu));
    /* 006d70b3: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d70b6: je 0x6d711b */ if (fZ) goto L_006d711b;
L_006d70b8:; BB(0x006d70b8);
    /* 006d70b8: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006d70bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d70bd: call 0x6ceec8 */ r_esp -= 4; W32(r_esp, 0x6d70c2u); f_006ceec8();
    /* 006d70c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d70c3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d70c6: je 0x6d711b */ if (fZ) goto L_006d711b;
L_006d70c8:; BB(0x006d70c8);
    /* 006d70c8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d70ca: call 0x689428 */ r_esp -= 4; W32(r_esp, 0x6d70cfu); f_00689428();
    /* 006d70cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d70d2: je 0x6d711b */ if (fZ) goto L_006d711b;
L_006d70d4:; BB(0x006d70d4);
    /* 006d70d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d70d6: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6d70dbu); f_00689410();
    /* 006d70db: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d70de: je 0x6d711b */ if (fZ) goto L_006d711b;
L_006d70e0:; BB(0x006d70e0);
    /* 006d70e0: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006d70e4: mov ebx, dword ptr [ebx*4 + 0x9cf110] */ r_ebx = R32((u32)(r_ebx*4+0x9cf110u));
    /* 006d70eb: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006d70ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d70f0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d70f5u); f_006dc358();
    /* 006d70f5: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006d70f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d70f9: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x6d70fbu); call_ind(t); }
    /* 006d70fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d70fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d7101: je 0x6d711b */ if (fZ) goto L_006d711b;
L_006d7103:; BB(0x006d7103);
    /* 006d7103: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006d7107: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006d710a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d710c: je 0x6d711b */ if (fZ) goto L_006d711b;
L_006d710e:; BB(0x006d710e);
    /* 006d710e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d710f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d7113: call dword ptr [eax*4 + 0x9cf10c] */ { u32 t = R32((u32)(r_eax*4+0x9cf10cu)); r_esp -= 4; W32(r_esp, 0x6d711au); call_ind(t); }
    /* 006d711a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d711b:; BB(0x006d711b);
    /* 006d711b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d711e: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d7121: jl 0x6d707a */ if ((fS!=fO)) goto L_006d707a;
L_006d7127:; BB(0x006d7127);
    /* 006d7127: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d712a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d712b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d712c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d712d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d712e: ret  */ FN_RET(0x006d6f18); r_esp += 4; return;
L_006d712f:; BB(0x006d712f);
    /* 006d712f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d7132: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d7133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d7134: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d7135: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d7136: ret  */ FN_RET(0x006d6f18); r_esp += 4; return;
}

