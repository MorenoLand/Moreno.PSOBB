#include "protos.h"

void f_008b5026(void) /* sub_8B5026 */
{
    FN_ENTER(0x008b5026);
    /* 008b5026: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b5027: mov ebp, esp */ r_ebp = r_esp;
    /* 008b5029: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b502c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b502d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b502e: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b5031: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5035: cmp dword ptr [esi + 0x120], 0 */ {  u32 a = R32((u32)(r_esi+0x120u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b503c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b503d: mov edi, dword ptr [esi + 0x184] */ r_edi = R32((u32)(r_esi+0x184u));
    /* 008b5043: jle 0x8b508b */ if ((fZ||fS!=fO)) goto L_008b508b;
L_008b5045:; BB(0x008b5045);
    /* 008b5045: lea eax, [esi + 0x124] */ r_eax = (u32)(r_esi+0x124u);
    /* 008b504b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008b504e:; BB(0x008b504e);
    /* 008b504e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5051: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b5053: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 008b5056: mov ebx, dword ptr [esi + 0x80] */ r_ebx = R32((u32)(r_esi+0x80u));
    /* 008b505c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008b505f: imul ebx, ecx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_ecx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b5062: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 008b5065: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5067: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5068: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5069: push dword ptr [edi + eax*4 + 0x48] */ { u32 v = R32((u32)(r_edi+r_eax*4+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b506d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b506e: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x8b5071u); call_ind(t); }
    /* 008b5071: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b5074: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5078: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b507b: mov dword ptr [ebp + ecx*4 - 0x34], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffccu), r_eax);
    /* 008b507f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5080: cmp ecx, dword ptr [esi + 0x120] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x120u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5086: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008b5089: jl 0x8b504e */ if ((fS!=fO)) goto L_008b504e;
L_008b508b:; BB(0x008b508b);
    /* 008b508b: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 008b508e: jmp 0x8b517c */ goto L_008b517c;
L_008b5093:; BB(0x008b5093);
    /* 008b5093: mov ebx, dword ptr [edi + 0x14] */ r_ebx = R32((u32)(r_edi+0x14u));
    /* 008b5096: cmp ebx, dword ptr [esi + 0x134] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x134u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b509c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 008b509f: jae 0x8b5177 */ if (!fC) goto L_008b5177;
L_008b50a5:; BB(0x008b50a5);
    /* 008b50a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b50a7: cmp dword ptr [esi + 0x120], eax */ {  u32 a = R32((u32)(r_esi+0x120u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b50ad: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b50b0: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b50b3: jle 0x8b5150 */ if ((fZ||fS!=fO)) goto L_008b5150;
L_008b50b9:; BB(0x008b50b9);
    /* 008b50b9: lea eax, [esi + 0x124] */ r_eax = (u32)(r_esi+0x124u);
    /* 008b50bf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_008b50c2:; BB(0x008b50c2);
    /* 008b50c2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b50c5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b50c7: mov ebx, dword ptr [ecx + 0x34] */ r_ebx = R32((u32)(r_ecx+0x34u));
    /* 008b50ca: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b50ce: mov eax, ebx */ r_eax = r_ebx;
    /* 008b50d0: imul eax, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b50d4: cmp dword ptr [ecx + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b50d8: jle 0x8b5137 */ if ((fZ||fS!=fO)) goto L_008b5137;
L_008b50da:; BB(0x008b50da);
    /* 008b50da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b50dd: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b50e0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008b50e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b50e6: mov eax, dword ptr [ebp + eax*4 - 0x34] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffccu));
    /* 008b50ea: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
    /* 008b50ed: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_008b50f0:; BB(0x008b50f0);
    /* 008b50f0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b50f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008b50f5: add edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b50f8: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b50fc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b50fe: jle 0x8b5128 */ if ((fZ||fS!=fO)) goto L_008b5128;
L_008b5100:; BB(0x008b5100);
    /* 008b5100: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b5103: lea ebx, [edi + eax*4 + 0x20] */ r_ebx = (u32)(r_edi+r_eax*4+0x20u);
    /* 008b5107: jmp 0x8b510c */ goto L_008b510c;
L_008b5109:; BB(0x008b5109);
    /* 008b5109: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
L_008b510c:; BB(0x008b510c);
    /* 008b510c: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b510f: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 008b5111: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b5114: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b511a: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b511d: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 008b5120: mov ebx, dword ptr [ecx + 0x34] */ r_ebx = R32((u32)(r_ecx+0x34u));
    /* 008b5123: cmp dword ptr [ebp - 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5126: jl 0x8b5109 */ if ((fS!=fO)) goto L_008b5109;
L_008b5128:; BB(0x008b5128);
    /* 008b5128: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b512b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008b512e: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5132: cmp eax, dword ptr [ecx + 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x38u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5135: jl 0x8b50f0 */ if ((fS!=fO)) goto L_008b50f0;
L_008b5137:; BB(0x008b5137);
    /* 008b5137: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b513a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b513d: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5141: cmp eax, dword ptr [esi + 0x120] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x120u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5147: jl 0x8b50c2 */ if ((fS!=fO)) goto L_008b50c2;
L_008b514d:; BB(0x008b514d);
    /* 008b514d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
L_008b5150:; BB(0x008b5150);
    /* 008b5150: mov ecx, dword ptr [esi + 0x194] */ r_ecx = R32((u32)(r_esi+0x194u));
    /* 008b5156: lea eax, [edi + 0x20] */ r_eax = (u32)(r_edi+0x20u);
    /* 008b5159: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b515a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b515b: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x8b515eu); call_ind(t); }
    /* 008b515e: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b5160: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b5161: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b5162: je 0x8b51a5 */ if (fZ) goto L_008b51a5;
L_008b5164:; BB(0x008b5164);
    /* 008b5164: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b5165: cmp ebx, dword ptr [esi + 0x134] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x134u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b516b: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 008b516e: jb 0x8b50a5 */ if (fC) goto L_008b50a5;
L_008b5174:; BB(0x008b5174);
    /* 008b5174: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_008b5177:; BB(0x008b5177);
    /* 008b5177: and dword ptr [edi + 0x14], 0 */ { u32 ad = (u32)(r_edi+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b517b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008b517c:; BB(0x008b517c);
    /* 008b517c: cmp eax, dword ptr [edi + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b517f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b5182: jl 0x8b5093 */ if ((fS!=fO)) goto L_008b5093;
L_008b5188:; BB(0x008b5188);
    /* 008b5188: lea eax, [esi + 0x80] */ r_eax = (u32)(r_esi+0x80u);
    /* 008b518e: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5190: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b5192: cmp eax, dword ptr [esi + 0x118] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x118u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b5198: jae 0x8b51b2 */ if (!fC) goto L_008b51b2;
L_008b519a:; BB(0x008b519a);
    /* 008b519a: mov ecx, esi */ r_ecx = r_esi;
    /* 008b519c: call 0x8b4dfd */ r_esp -= 4; W32(r_esp, 0x8b51a1u); f_008b4dfd();
    /* 008b51a1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008b51a3: jmp 0x8b51bf */ goto L_008b51bf;
L_008b51a5:; BB(0x008b51a5);
    /* 008b51a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b51a8: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 008b51ab: mov dword ptr [edi + 0x14], ebx */ W32((u32)(r_edi+0x14u), r_ebx);
    /* 008b51ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b51b0: jmp 0x8b51c0 */ goto L_008b51c0;
L_008b51b2:; BB(0x008b51b2);
    /* 008b51b2: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008b51b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b51b9: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x8b51bcu); call_ind(t); }
    /* 008b51bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b51bd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
L_008b51bf:; BB(0x008b51bf);
    /* 008b51bf: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008b51c0:; BB(0x008b51c0);
    /* 008b51c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b51c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b51c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b51c3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b51c4: ret  */ FN_RET(0x008b5026); r_esp += 4; return;
}

void f_008b51c5(void) /* sub_8B51C5 */
{
    FN_ENTER(0x008b51c5);
    /* 008b51c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b51c6: mov ebp, esp */ r_ebp = r_esp;
    /* 008b51c8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b51cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b51cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b51cd: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b51d0: mov ebx, dword ptr [esi + 0x118] */ r_ebx = R32((u32)(r_esi+0x118u));
    /* 008b51d6: mov eax, dword ptr [esi + 0x184] */ r_eax = R32((u32)(r_esi+0x184u));
    /* 008b51dc: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008b51dd: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b51e0: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
L_008b51e3:; BB(0x008b51e3);
    /* 008b51e3: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 008b51e6: mov ecx, dword ptr [esi + 0x84] */ r_ecx = R32((u32)(r_esi+0x84u));
    /* 008b51ec: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b51ee: jl 0x8b5200 */ if ((fS!=fO)) goto L_008b5200;
L_008b51f0:; BB(0x008b51f0);
    /* 008b51f0: jne 0x8b5212 */ if (!fZ) goto L_008b5212;
L_008b51f2:; BB(0x008b51f2);
    /* 008b51f2: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 008b51f8: cmp eax, dword ptr [esi + 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b51fe: ja 0x8b5212 */ if ((!fC&&!fZ)) goto L_008b5212;
L_008b5200:; BB(0x008b5200);
    /* 008b5200: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008b5206: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5207: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b5209u); call_ind(t); }
    /* 008b5209: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b520b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b520c: jne 0x8b51e3 */ if (!fZ) goto L_008b51e3;
L_008b520e:; BB(0x008b520e);
    /* 008b520e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b520f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b5210: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b5211: ret  */ FN_RET(0x008b51c5); r_esp += 4; return;
L_008b5212:; BB(0x008b5212);
    /* 008b5212: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5216: cmp dword ptr [esi + 0x20], 0 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b521a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b521b: mov edi, dword ptr [esi + 0xc4] */ r_edi = R32((u32)(r_esi+0xc4u));
    /* 008b5221: jle 0x8b5310 */ if ((fZ||fS!=fO)) goto L_008b5310;
L_008b5227:; BB(0x008b5227);
    /* 008b5227: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b522a: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b522d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_008b5230:; BB(0x008b5230);
    /* 008b5230: cmp byte ptr [edi + 0x30], 0 */ {  u32 a = R8((u32)(r_edi+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b5234: je 0x8b52fa */ if (fZ) goto L_008b52fa;
L_008b523a:; BB(0x008b523a);
    /* 008b523a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 008b523d: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
    /* 008b5243: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008b5246: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b5249: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b524b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b524c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008b524f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5250: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008b5252: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5253: call dword ptr [ecx + 0x20] */ { u32 t = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, 0x8b5256u); call_ind(t); }
    /* 008b5256: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5259: cmp dword ptr [esi + 0x88], ebx */ {  u32 a = R32((u32)(r_esi+0x88u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b525f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b5262: jae 0x8b526c */ if (!fC) goto L_008b526c;
L_008b5264:; BB(0x008b5264);
    /* 008b5264: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 008b5267: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b526a: jmp 0x8b5280 */ goto L_008b5280;
L_008b526c:; BB(0x008b526c);
    /* 008b526c: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 008b526f: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 008b5272: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b5274: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x008b5274, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008b5274, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b5276: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5278: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008b527b: jne 0x8b5280 */ if (!fZ) goto L_008b5280;
L_008b527d:; BB(0x008b527d);
    /* 008b527d: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_008b5280:; BB(0x008b5280);
    /* 008b5280: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5283: mov ecx, dword ptr [esi + 0x198] */ r_ecx = R32((u32)(r_esi+0x198u));
    /* 008b5289: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b528c: mov ecx, dword ptr [ecx + eax + 4] */ r_ecx = R32((u32)(r_ecx+r_eax+0x4u));
    /* 008b5290: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008b5293: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b5296: mov eax, dword ptr [eax + ecx] */ r_eax = R32((u32)(r_eax+r_ecx));
    /* 008b5299: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b529b: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b529e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008b52a1: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b52a4: jle 0x8b52fa */ if ((fZ||fS!=fO)) goto L_008b52fa;
L_008b52a6:; BB(0x008b52a6);
    /* 008b52a6: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
L_008b52a9:; BB(0x008b52a9);
    /* 008b52a9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b52ac: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 008b52af: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b52b1: and dword ptr [ebp - 0xc], ebx */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b52b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b52b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b52b9: jbe 0x8b52df */ if ((fC||fZ)) goto L_008b52df;
L_008b52bb:; BB(0x008b52bb);
    /* 008b52bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b52bc: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b52bf: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b52c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b52c3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b52c4: call dword ptr [ebp - 0x20] */ { u32 t = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, 0x8b52c7u); call_ind(t); }
    /* 008b52c7: add dword ptr [ebp - 8], 0x80 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b52ce: add ebx, dword ptr [edi + 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b52d1: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 008b52d4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b52d7: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b52da: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b52dd: jb 0x8b52bb */ if (fC) goto L_008b52bb;
L_008b52df:; BB(0x008b52df);
    /* 008b52df: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b52e2: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 008b52e5: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 008b52e8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008b52eb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b52ee: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b52ef: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b52f2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b52f5: jl 0x8b52a9 */ if ((fS!=fO)) goto L_008b52a9;
L_008b52f7:; BB(0x008b52f7);
    /* 008b52f7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
L_008b52fa:; BB(0x008b52fa);
    /* 008b52fa: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b52fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5300: add dword ptr [ebp - 0x14], 4 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5304: add edi, 0x54 */ {  u32 a = r_edi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b5307: cmp eax, dword ptr [esi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b530a: jl 0x8b5230 */ if ((fS!=fO)) goto L_008b5230;
L_008b5310:; BB(0x008b5310);
    /* 008b5310: lea eax, [esi + 0x88] */ r_eax = (u32)(r_esi+0x88u);
    /* 008b5316: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5318: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b531a: cmp eax, dword ptr [esi + 0x118] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x118u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b5320: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b5321: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008b5323: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b5326: jmp 0x8b520e */ goto L_008b520e;
}

void f_008b532b(void) /* sub_8B532B */
{
    FN_ENTER(0x008b532b);
    /* 008b532b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b532c: mov ebp, esp */ r_ebp = r_esp;
    /* 008b532e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b5331: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5332: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b5334: cmp byte ptr [esi + 0xc8], bl */ {  u32 a = R8((u32)(r_esi+0xc8u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b533a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b533b: mov edi, dword ptr [esi + 0x184] */ r_edi = R32((u32)(r_esi+0x184u));
    /* 008b5341: mov byte ptr [ebp - 1], bl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ebx);
    /* 008b5344: je 0x8b5408 */ if (fZ) goto L_008b5408;
L_008b534a:; BB(0x008b534a);
    /* 008b534a: cmp dword ptr [esi + 0x8c], ebx */ {  u32 a = R32((u32)(r_esi+0x8cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5350: je 0x8b5408 */ if (fZ) goto L_008b5408;
L_008b5356:; BB(0x008b5356);
    /* 008b5356: cmp dword ptr [edi + 0x70], ebx */ {  u32 a = R32((u32)(r_edi+0x70u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5359: jne 0x8b5373 */ if (!fZ) goto L_008b5373;
L_008b535b:; BB(0x008b535b);
    /* 008b535b: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008b535e: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008b5361: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008b5364: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b5367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5368: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b536a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b536b: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8b536du); call_ind(t); }
    /* 008b536d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5370: mov dword ptr [edi + 0x70], eax */ W32((u32)(r_edi+0x70u), r_eax);
L_008b5373:; BB(0x008b5373);
    /* 008b5373: cmp dword ptr [esi + 0x20], ebx */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5376: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 008b5379: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b537c: mov eax, dword ptr [esi + 0xc4] */ r_eax = R32((u32)(r_esi+0xc4u));
    /* 008b5382: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 008b5385: jle 0x8b5403 */ if ((fZ||fS!=fO)) goto L_008b5403;
L_008b5387:; BB(0x008b5387);
    /* 008b5387: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b538a: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 008b538d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_008b5390:; BB(0x008b5390);
    /* 008b5390: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b5392: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5394: je 0x8b5408 */ if (fZ) goto L_008b5408;
L_008b5396:; BB(0x008b5396);
    /* 008b5396: cmp word ptr [eax], bx */ {  u32 a = R16((u32)(r_eax)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b5399: je 0x8b5408 */ if (fZ) goto L_008b5408;
L_008b539b:; BB(0x008b539b);
    /* 008b539b: cmp word ptr [eax + 2], bx */ {  u32 a = R16((u32)(r_eax+0x2u)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b539f: je 0x8b5408 */ if (fZ) goto L_008b5408;
L_008b53a1:; BB(0x008b53a1);
    /* 008b53a1: cmp word ptr [eax + 0x10], bx */ {  u32 a = R16((u32)(r_eax+0x10u)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b53a5: je 0x8b5408 */ if (fZ) goto L_008b5408;
L_008b53a7:; BB(0x008b53a7);
    /* 008b53a7: cmp word ptr [eax + 0x20], bx */ {  u32 a = R16((u32)(r_eax+0x20u)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b53ab: je 0x8b5408 */ if (fZ) goto L_008b5408;
L_008b53ad:; BB(0x008b53ad);
    /* 008b53ad: cmp word ptr [eax + 0x12], bx */ {  u32 a = R16((u32)(r_eax+0x12u)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b53b1: je 0x8b5408 */ if (fZ) goto L_008b5408;
L_008b53b3:; BB(0x008b53b3);
    /* 008b53b3: cmp word ptr [eax + 4], bx */ {  u32 a = R16((u32)(r_eax+0x4u)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b53b7: je 0x8b5408 */ if (fZ) goto L_008b5408;
L_008b53b9:; BB(0x008b53b9);
    /* 008b53b9: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 008b53bf: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b53c2: cmp dword ptr [eax], ebx */ {  u32 a = R32((u32)(r_eax)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b53c4: jl 0x8b5408 */ if ((fS!=fO)) goto L_008b5408;
L_008b53c6:; BB(0x008b53c6);
    /* 008b53c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b53c9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008b53cb: lea ecx, [eax + 4] */ r_ecx = (u32)(r_eax+0x4u);
    /* 008b53ce: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b53d0: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008b53d1:; BB(0x008b53d1);
    /* 008b53d1: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 008b53d3: mov dword ptr [edx + ecx], edi */ W32((u32)(r_edx+r_ecx), r_edi);
    /* 008b53d6: cmp dword ptr [ecx], ebx */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b53d8: je 0x8b53de */ if (fZ) goto L_008b53de;
L_008b53da:; BB(0x008b53da);
    /* 008b53da: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_008b53de:; BB(0x008b53de);
    /* 008b53de: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b53e1: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b53e2: jne 0x8b53d1 */ if (!fZ) goto L_008b53d1;
L_008b53e4:; BB(0x008b53e4);
    /* 008b53e4: add dword ptr [ebp - 8], 0x18 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b53e8: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b53eb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008b53ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b53f1: add dword ptr [ebp - 0xc], 0x100 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b53f8: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b53fb: cmp ecx, dword ptr [esi + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b53fe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b5401: jl 0x8b5390 */ if ((fS!=fO)) goto L_008b5390;
L_008b5403:; BB(0x008b5403);
    /* 008b5403: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 008b5406: jmp 0x8b540a */ goto L_008b540a;
L_008b5408:; BB(0x008b5408);
    /* 008b5408: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008b540a:; BB(0x008b540a);
    /* 008b540a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b540b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b540c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b540d: ret  */ FN_RET(0x008b532b); r_esp += 4; return;
}

void f_008b540e(void) /* sub_8B540E */
{
    FN_ENTER(0x008b540e);
    /* 008b540e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b540f: lea ebp, [esp - 0x70] */ r_ebp = (u32)(r_esp+0xffffff90u);
    /* 008b5413: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b5419: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b541a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b541b: mov edi, dword ptr [ebp + 0x78] */ r_edi = R32((u32)(r_ebp+0x78u));
    /* 008b541e: mov eax, dword ptr [edi + 0x184] */ r_eax = R32((u32)(r_edi+0x184u));
    /* 008b5424: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 008b5427: mov eax, dword ptr [edi + 0x118] */ r_eax = R32((u32)(r_edi+0x118u));
    /* 008b542d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b542e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b5431: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b5433: jmp 0x8b546d */ goto L_008b546d;
L_008b5435:; BB(0x008b5435);
    /* 008b5435: mov eax, dword ptr [edi + 0x18c] */ r_eax = R32((u32)(r_edi+0x18cu));
    /* 008b543b: cmp byte ptr [eax + 0x11], 0 */ {  u32 a = R8((u32)(r_eax+0x11u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b543f: jne 0x8b5478 */ if (!fZ) goto L_008b5478;
L_008b5441:; BB(0x008b5441);
    /* 008b5441: mov ecx, dword ptr [edi + 0x7c] */ r_ecx = R32((u32)(r_edi+0x7cu));
    /* 008b5444: cmp ecx, dword ptr [edi + 0x84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b544a: jne 0x8b5465 */ if (!fZ) goto L_008b5465;
L_008b544c:; BB(0x008b544c);
    /* 008b544c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b544e: cmp dword ptr [edi + 0x168], ebx */ {  u32 a = R32((u32)(r_edi+0x168u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5454: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008b5457: add ecx, dword ptr [edi + 0x88] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x88u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b545d: cmp dword ptr [edi + 0x80], ecx */ {  u32 a = R32((u32)(r_edi+0x80u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b5463: ja 0x8b5478 */ if ((!fC&&!fZ)) goto L_008b5478;
L_008b5465:; BB(0x008b5465);
    /* 008b5465: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5466: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b5468u); call_ind(t); }
    /* 008b5468: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b546a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b546b: je 0x8b54c7 */ if (fZ) goto L_008b54c7;
L_008b546d:; BB(0x008b546d);
    /* 008b546d: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 008b5470: cmp eax, dword ptr [edi + 0x84] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5476: jle 0x8b5435 */ if ((fZ||fS!=fO)) goto L_008b5435;
L_008b5478:; BB(0x008b5478);
    /* 008b5478: cmp dword ptr [edi + 0x20], ebx */ {  u32 a = R32((u32)(r_edi+0x20u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b547b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b547c: mov esi, dword ptr [edi + 0xc4] */ r_esi = R32((u32)(r_edi+0xc4u));
    /* 008b5482: mov dword ptr [ebp + 0x20], ebx */ W32((u32)(r_ebp+0x20u), r_ebx);
    /* 008b5485: jle 0x8b590e */ if ((fZ||fS!=fO)) goto L_008b590e;
L_008b548b:; BB(0x008b548b);
    /* 008b548b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 008b548e: and dword ptr [ebp + 4], 0 */ { u32 ad = (u32)(r_ebp+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5492: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 008b5495: mov dword ptr [ebp + 8], 0xffffffb8 */ W32((u32)(r_ebp+0x8u), 0xffffffb8u);
    /* 008b549c: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008b549f: mov dword ptr [ebp + 0x50], ecx */ W32((u32)(r_ebp+0x50u), r_ecx);
L_008b54a2:; BB(0x008b54a2);
    /* 008b54a2: cmp byte ptr [esi + 0x30], 0 */ {  u32 a = R8((u32)(r_esi+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b54a6: je 0x8b58f4 */ if (fZ) goto L_008b58f4;
L_008b54ac:; BB(0x008b54ac);
    /* 008b54ac: mov ebx, dword ptr [edi + 0x88] */ r_ebx = R32((u32)(r_edi+0x88u));
    /* 008b54b2: cmp ebx, dword ptr [ebp - 0x14] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b54b5: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008b54b8: jae 0x8b54ce */ if (!fC) goto L_008b54ce;
L_008b54ba:; BB(0x008b54ba);
    /* 008b54ba: mov eax, ecx */ r_eax = r_ecx;
    /* 008b54bc: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 008b54bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b54c1: and byte ptr [ebp + 0x6b], 0 */ { u32 ad = (u32)(r_ebp+0x6bu);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b54c5: jmp 0x8b54e6 */ goto L_008b54e6;
L_008b54c7:; BB(0x008b54c7);
    /* 008b54c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b54c9: jmp 0x8b5924 */ goto L_008b5924;
L_008b54ce:; BB(0x008b54ce);
    /* 008b54ce: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008b54d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b54d3: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x008b54d3, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008b54d3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b54d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b54d7: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 008b54da: jne 0x8b54df */ if (!fZ) goto L_008b54df;
L_008b54dc:; BB(0x008b54dc);
    /* 008b54dc: mov dword ptr [ebp + 0x60], ecx */ W32((u32)(r_ebp+0x60u), r_ecx);
L_008b54df:; BB(0x008b54df);
    /* 008b54df: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 008b54e2: mov byte ptr [ebp + 0x6b], 1 */ W8((u32)(r_ebp+0x6bu), 0x1u);
L_008b54e6:; BB(0x008b54e6);
    /* 008b54e6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b54e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b54ea: jbe 0x8b550f */ if ((fC||fZ)) goto L_008b550f;
L_008b54ec:; BB(0x008b54ec);
    /* 008b54ec: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 008b54ef: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b54f1: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008b54f2: imul ebx, ecx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_ecx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b54f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b54f6: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 008b54f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b54fa: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008b54fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b54fd: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x8b5500u); call_ind(t); }
    /* 008b5500: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008b5503: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5506: and byte ptr [ebp + 0x7b], 0 */ { u32 ad = (u32)(r_ebp+0x7bu);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b550a: lea eax, [eax + ecx*4] */ r_eax = (u32)(r_eax+r_ecx*4);
    /* 008b550d: jmp 0x8b5525 */ goto L_008b5525;
L_008b550f:; BB(0x008b550f);
    /* 008b550f: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 008b5512: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5513: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 008b5516: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5518: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008b551a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b551b: call dword ptr [ecx + 0x20] */ { u32 t = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, 0x8b551eu); call_ind(t); }
    /* 008b551e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5521: mov byte ptr [ebp + 0x7b], 1 */ W8((u32)(r_ebp+0x7bu), 0x1u);
L_008b5525:; BB(0x008b5525);
    /* 008b5525: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b5528: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 008b552b: mov eax, dword ptr [eax + 0x70] */ r_eax = R32((u32)(r_eax+0x70u));
    /* 008b552e: add eax, dword ptr [ebp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b5531: and dword ptr [ebp + 0x58], 0 */ { u32 ad = (u32)(r_ebp+0x58u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5535: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 008b5538: mov eax, dword ptr [esi + 0x4c] */ r_eax = R32((u32)(r_esi+0x4cu));
    /* 008b553b: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 008b553e: mov dword ptr [ebp + 0x54], ecx */ W32((u32)(r_ebp+0x54u), r_ecx);
    /* 008b5541: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 008b5545: mov dword ptr [ebp + 0x30], ecx */ W32((u32)(r_ebp+0x30u), r_ecx);
    /* 008b5548: movzx ecx, word ptr [eax + 0x10] */ r_ecx = (u32)R16((u32)(r_eax+0x10u));
    /* 008b554c: mov dword ptr [ebp + 0x44], ecx */ W32((u32)(r_ebp+0x44u), r_ecx);
    /* 008b554f: movzx ecx, word ptr [eax + 0x20] */ r_ecx = (u32)R16((u32)(r_eax+0x20u));
    /* 008b5553: mov dword ptr [ebp + 0x24], ecx */ W32((u32)(r_ebp+0x24u), r_ecx);
    /* 008b5556: movzx ecx, word ptr [eax + 0x12] */ r_ecx = (u32)R16((u32)(r_eax+0x12u));
    /* 008b555a: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 008b555e: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 008b5561: mov eax, dword ptr [edi + 0x198] */ r_eax = R32((u32)(r_edi+0x198u));
    /* 008b5567: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b556a: cmp dword ptr [ebp + 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b556e: mov dword ptr [ebp + 0x3c], ecx */ W32((u32)(r_ebp+0x3cu), r_ecx);
    /* 008b5571: mov ecx, dword ptr [ebp + 0x50] */ r_ecx = R32((u32)(r_ebp+0x50u));
    /* 008b5574: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 008b5578: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 008b557b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008b557e: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 008b5581: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 008b5584: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008b5587: jle 0x8b58f4 */ if ((fZ||fS!=fO)) goto L_008b58f4;
L_008b558d:; BB(0x008b558d);
    /* 008b558d: mov ebx, 0x80 */ r_ebx = 0x80u;
L_008b5592:; BB(0x008b5592);
    /* 008b5592: cmp byte ptr [ebp + 0x7b], 0 */ {  u32 a = R8((u32)(r_ebp+0x7bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b5596: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b5599: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 008b559c: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 008b559f: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008b55a1: mov dword ptr [ebp + 0x64], ecx */ W32((u32)(r_ebp+0x64u), r_ecx);
    /* 008b55a4: je 0x8b55aa */ if (fZ) goto L_008b55aa;
L_008b55a6:; BB(0x008b55a6);
    /* 008b55a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b55a8: je 0x8b55ad */ if (fZ) goto L_008b55ad;
L_008b55aa:; BB(0x008b55aa);
    /* 008b55aa: mov ecx, dword ptr [edx - 4] */ r_ecx = R32((u32)(r_edx+0xfffffffcu));
L_008b55ad:; BB(0x008b55ad);
    /* 008b55ad: cmp byte ptr [ebp + 0x6b], 0 */ {  u32 a = R8((u32)(r_ebp+0x6bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b55b1: je 0x8b55bf */ if (fZ) goto L_008b55bf;
L_008b55b3:; BB(0x008b55b3);
    /* 008b55b3: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 008b55b6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b55b7: cmp dword ptr [ebp + 0x58], eax */ {  u32 a = R32((u32)(r_ebp+0x58u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b55ba: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 008b55bd: je 0x8b55c2 */ if (fZ) goto L_008b55c2;
L_008b55bf:; BB(0x008b55bf);
    /* 008b55bf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
L_008b55c2:; BB(0x008b55c2);
    /* 008b55c2: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 008b55c5: and dword ptr [ebp + 0x14], 0 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b55c9: and dword ptr [ebp + 0x28], 0 */ { u32 ad = (u32)(r_ebp+0x28u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b55cd: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 008b55d0: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 008b55d3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 008b55d6: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 008b55d9: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 008b55dc: mov dword ptr [ebp + 0x5c], edx */ W32((u32)(r_ebp+0x5cu), r_edx);
    /* 008b55df: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 008b55e2: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 008b55e5: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008b55e8: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 008b55eb: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 008b55ee: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008b55f1: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 008b55f4: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b55f5: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b55fa: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5600: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b5603: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 008b5606: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
L_008b5609:; BB(0x008b5609);
    /* 008b5609: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b560b: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 008b5611: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5612: push dword ptr [ebp + 0x64] */ { u32 v = R32((u32)(r_ebp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b5615: call 0x8a8d50 */ r_esp -= 4; W32(r_esp, 0x8b561au); f_008a8d50();
    /* 008b561a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b561d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5620: cmp dword ptr [ebp + 0x28], eax */ {  u32 a = R32((u32)(r_ebp+0x28u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b5623: jae 0x8b5644 */ if (!fC) goto L_008b5644;
L_008b5625:; BB(0x008b5625);
    /* 008b5625: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b5628: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008b562b: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 008b562e: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 008b5631: movsx eax, word ptr [eax + 0x80] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x80u));
    /* 008b5638: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 008b563b: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008b563e: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008b5641: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
L_008b5644:; BB(0x008b5644);
    /* 008b5644: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 008b5647: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b564b: je 0x8b56b5 */ if (fZ) goto L_008b56b5;
L_008b564d:; BB(0x008b564d);
    /* 008b564d: cmp word ptr [ebp - 0x96], 0 */ {  u32 a = R16((u32)(r_ebp+0xffffff6au)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b5655: jne 0x8b56b5 */ if (!fZ) goto L_008b56b5;
L_008b5657:; BB(0x008b5657);
    /* 008b5657: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008b565a: sub eax, dword ptr [ebp + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b565d: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 008b5660: imul eax, dword ptr [ebp + 0x54] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b5664: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 008b5667: mov eax, ecx */ r_eax = r_ecx;
    /* 008b5669: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b566c: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b566f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r; fS = (r >> 31) & 1; } }
    /* 008b5672: js 0x8b5691 */ if (fS) goto L_008b5691;
L_008b5674:; BB(0x008b5674);
    /* 008b5674: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b5676: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b5677: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008b5677, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b5677, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b5679: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 008b567c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 008b567f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b5681: jle 0x8b56ae */ if ((fZ||fS!=fO)) goto L_008b56ae;
L_008b5683:; BB(0x008b5683);
    /* 008b5683: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b5685: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b5686: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b5688: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b568a: jl 0x8b56ae */ if ((fS!=fO)) goto L_008b56ae;
L_008b568c:; BB(0x008b568c);
    /* 008b568c: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 008b568f: jmp 0x8b56ae */ goto L_008b56ae;
L_008b5691:; BB(0x008b5691);
    /* 008b5691: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b5693: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b5694: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008b5694, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b5694, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b5696: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 008b5699: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 008b569c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b569e: jle 0x8b56ac */ if ((fZ||fS!=fO)) goto L_008b56ac;
L_008b56a0:; BB(0x008b56a0);
    /* 008b56a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b56a2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b56a3: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b56a5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b56a7: jl 0x8b56ac */ if ((fS!=fO)) goto L_008b56ac;
L_008b56a9:; BB(0x008b56a9);
    /* 008b56a9: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
L_008b56ac:; BB(0x008b56ac);
    /* 008b56ac: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008b56ae:; BB(0x008b56ae);
    /* 008b56ae: mov word ptr [ebp - 0x96], ax */ W16((u32)(r_ebp+0xffffff6au), (u16)r_eax);
L_008b56b5:; BB(0x008b56b5);
    /* 008b56b5: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 008b56b8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008b56bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b56bd: je 0x8b5720 */ if (fZ) goto L_008b5720;
L_008b56bf:; BB(0x008b56bf);
    /* 008b56bf: cmp word ptr [ebp - 0x88], 0 */ {  u32 a = R16((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b56c7: jne 0x8b5720 */ if (!fZ) goto L_008b5720;
L_008b56c9:; BB(0x008b56c9);
    /* 008b56c9: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 008b56cc: sub eax, dword ptr [ebp + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b56cf: mov ebx, dword ptr [ebp + 0x44] */ r_ebx = R32((u32)(r_ebp+0x44u));
    /* 008b56d2: imul eax, dword ptr [ebp + 0x54] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b56d6: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 008b56d9: mov eax, ebx */ r_eax = r_ebx;
    /* 008b56db: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008b56de: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b56e1: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r; fS = (r >> 31) & 1; } }
    /* 008b56e4: js 0x8b56fd */ if (fS) goto L_008b56fd;
L_008b56e6:; BB(0x008b56e6);
    /* 008b56e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b56e8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b56e9: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008b56e9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b56e9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b56eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b56ed: jle 0x8b5714 */ if ((fZ||fS!=fO)) goto L_008b5714;
L_008b56ef:; BB(0x008b56ef);
    /* 008b56ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b56f1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b56f2: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b56f4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b56f6: jl 0x8b5714 */ if ((fS!=fO)) goto L_008b5714;
L_008b56f8:; BB(0x008b56f8);
    /* 008b56f8: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 008b56fb: jmp 0x8b5714 */ goto L_008b5714;
L_008b56fd:; BB(0x008b56fd);
    /* 008b56fd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b56ff: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b5700: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008b5700, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b5700, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b5702: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b5704: jle 0x8b5712 */ if ((fZ||fS!=fO)) goto L_008b5712;
L_008b5706:; BB(0x008b5706);
    /* 008b5706: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b5708: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b5709: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b570b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b570d: jl 0x8b5712 */ if ((fS!=fO)) goto L_008b5712;
L_008b570f:; BB(0x008b570f);
    /* 008b570f: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
L_008b5712:; BB(0x008b5712);
    /* 008b5712: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008b5714:; BB(0x008b5714);
    /* 008b5714: mov word ptr [ebp - 0x88], ax */ W16((u32)(r_ebp+0xffffff78u), (u16)r_eax);
    /* 008b571b: mov ebx, 0x80 */ r_ebx = 0x80u;
L_008b5720:; BB(0x008b5720);
    /* 008b5720: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 008b5723: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5727: je 0x8b5793 */ if (fZ) goto L_008b5793;
L_008b5729:; BB(0x008b5729);
    /* 008b5729: cmp word ptr [ebp - 0x78], 0 */ {  u32 a = R16((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b572e: jne 0x8b5793 */ if (!fZ) goto L_008b5793;
L_008b5730:; BB(0x008b5730);
    /* 008b5730: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 008b5733: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b5735: mov ecx, eax */ r_ecx = r_eax;
    /* 008b5737: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 008b573a: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b573c: add eax, dword ptr [ebp + 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b573f: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 008b5742: imul eax, dword ptr [ebp + 0x54] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b5746: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 008b5749: mov eax, ecx */ r_eax = r_ecx;
    /* 008b574b: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b574e: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b5751: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b5753: jl 0x8b5772 */ if ((fS!=fO)) goto L_008b5772;
L_008b5755:; BB(0x008b5755);
    /* 008b5755: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b5757: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b5758: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008b5758, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b5758, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b575a: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 008b575d: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 008b5760: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b5762: jle 0x8b578f */ if ((fZ||fS!=fO)) goto L_008b578f;
L_008b5764:; BB(0x008b5764);
    /* 008b5764: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b5766: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b5767: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b5769: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b576b: jl 0x8b578f */ if ((fS!=fO)) goto L_008b578f;
L_008b576d:; BB(0x008b576d);
    /* 008b576d: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 008b5770: jmp 0x8b578f */ goto L_008b578f;
L_008b5772:; BB(0x008b5772);
    /* 008b5772: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b5774: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b5775: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008b5775, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b5775, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b5777: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 008b577a: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 008b577d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b577f: jle 0x8b578d */ if ((fZ||fS!=fO)) goto L_008b578d;
L_008b5781:; BB(0x008b5781);
    /* 008b5781: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b5783: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b5784: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b5786: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5788: jl 0x8b578d */ if ((fS!=fO)) goto L_008b578d;
L_008b578a:; BB(0x008b578a);
    /* 008b578a: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
L_008b578d:; BB(0x008b578d);
    /* 008b578d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008b578f:; BB(0x008b578f);
    /* 008b578f: mov word ptr [ebp - 0x78], ax */ W16((u32)(r_ebp+0xffffff88u), (u16)r_eax);
L_008b5793:; BB(0x008b5793);
    /* 008b5793: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 008b5796: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b579a: je 0x8b5809 */ if (fZ) goto L_008b5809;
L_008b579c:; BB(0x008b579c);
    /* 008b579c: cmp word ptr [ebp - 0x86], 0 */ {  u32 a = R16((u32)(r_ebp+0xffffff7au)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b57a4: jne 0x8b5809 */ if (!fZ) goto L_008b5809;
L_008b57a6:; BB(0x008b57a6);
    /* 008b57a6: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 008b57a9: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b57ac: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 008b57af: sub eax, dword ptr [ebp + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b57b2: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b57b5: imul eax, dword ptr [ebp + 0x54] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b57b9: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 008b57bc: mov eax, ecx */ r_eax = r_ecx;
    /* 008b57be: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b57c1: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b57c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b57c6: jl 0x8b57e5 */ if ((fS!=fO)) goto L_008b57e5;
L_008b57c8:; BB(0x008b57c8);
    /* 008b57c8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b57ca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b57cb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008b57cb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b57cb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b57cd: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 008b57d0: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 008b57d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b57d5: jle 0x8b5802 */ if ((fZ||fS!=fO)) goto L_008b5802;
L_008b57d7:; BB(0x008b57d7);
    /* 008b57d7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b57d9: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b57da: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b57dc: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b57de: jl 0x8b5802 */ if ((fS!=fO)) goto L_008b5802;
L_008b57e0:; BB(0x008b57e0);
    /* 008b57e0: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 008b57e3: jmp 0x8b5802 */ goto L_008b5802;
L_008b57e5:; BB(0x008b57e5);
    /* 008b57e5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b57e7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b57e8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008b57e8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b57e8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b57ea: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 008b57ed: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 008b57f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b57f2: jle 0x8b5800 */ if ((fZ||fS!=fO)) goto L_008b5800;
L_008b57f4:; BB(0x008b57f4);
    /* 008b57f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b57f6: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b57f7: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b57f9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b57fb: jl 0x8b5800 */ if ((fS!=fO)) goto L_008b5800;
L_008b57fd:; BB(0x008b57fd);
    /* 008b57fd: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
L_008b5800:; BB(0x008b5800);
    /* 008b5800: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008b5802:; BB(0x008b5802);
    /* 008b5802: mov word ptr [ebp - 0x86], ax */ W16((u32)(r_ebp+0xffffff7au), (u16)r_eax);
L_008b5809:; BB(0x008b5809);
    /* 008b5809: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 008b580c: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5810: je 0x8b5882 */ if (fZ) goto L_008b5882;
L_008b5812:; BB(0x008b5812);
    /* 008b5812: cmp word ptr [ebp - 0x94], 0 */ {  u32 a = R16((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b581a: jne 0x8b5882 */ if (!fZ) goto L_008b5882;
L_008b581c:; BB(0x008b581c);
    /* 008b581c: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 008b581f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b5821: mov ecx, eax */ r_ecx = r_eax;
    /* 008b5823: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 008b5826: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b5828: add eax, dword ptr [ebp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b582b: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 008b582e: imul eax, dword ptr [ebp + 0x54] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b5832: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 008b5835: mov eax, ecx */ r_eax = r_ecx;
    /* 008b5837: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b583a: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b583d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b583f: jl 0x8b585e */ if ((fS!=fO)) goto L_008b585e;
L_008b5841:; BB(0x008b5841);
    /* 008b5841: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b5843: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b5844: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008b5844, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b5844, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b5846: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 008b5849: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 008b584c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b584e: jle 0x8b587b */ if ((fZ||fS!=fO)) goto L_008b587b;
L_008b5850:; BB(0x008b5850);
    /* 008b5850: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b5852: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b5853: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b5855: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5857: jl 0x8b587b */ if ((fS!=fO)) goto L_008b587b;
L_008b5859:; BB(0x008b5859);
    /* 008b5859: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 008b585c: jmp 0x8b587b */ goto L_008b587b;
L_008b585e:; BB(0x008b585e);
    /* 008b585e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b5860: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b5861: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008b5861, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b5861, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b5863: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 008b5866: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 008b5869: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b586b: jle 0x8b5879 */ if ((fZ||fS!=fO)) goto L_008b5879;
L_008b586d:; BB(0x008b586d);
    /* 008b586d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b586f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b5870: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b5872: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5874: jl 0x8b5879 */ if ((fS!=fO)) goto L_008b5879;
L_008b5876:; BB(0x008b5876);
    /* 008b5876: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
L_008b5879:; BB(0x008b5879);
    /* 008b5879: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008b587b:; BB(0x008b587b);
    /* 008b587b: mov word ptr [ebp - 0x94], ax */ W16((u32)(r_ebp+0xffffff6cu), (u16)r_eax);
L_008b5882:; BB(0x008b5882);
    /* 008b5882: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b5885: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 008b588b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b588e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b588f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5890: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5891: call dword ptr [ebp - 0x18] */ { u32 t = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, 0x8b5894u); call_ind(t); }
    /* 008b5894: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 008b5897: add dword ptr [ebp + 0x64], ebx */ { u32 ad = (u32)(r_ebp+0x64u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b589a: add dword ptr [ebp + 0x10], ebx */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b589d: add dword ptr [ebp + 0x18], ebx */ { u32 ad = (u32)(r_ebp+0x18u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b58a0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008b58a3: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 008b58a6: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 008b58a9: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 008b58ac: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 008b58af: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 008b58b2: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 008b58b5: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 008b58b8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b58bb: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 008b58be: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 008b58c1: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 008b58c4: add dword ptr [ebp + 0x14], eax */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b58c7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b58ca: inc dword ptr [ebp + 0x28] */ { u32 ad = (u32)(r_ebp+0x28u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b58cd: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 008b58d0: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b58d3: jbe 0x8b5609 */ if ((fC||fZ)) goto L_008b5609;
L_008b58d9:; BB(0x008b58d9);
    /* 008b58d9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b58dc: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 008b58df: inc dword ptr [ebp + 0x58] */ { u32 ad = (u32)(r_ebp+0x58u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b58e2: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 008b58e5: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008b58e8: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 008b58eb: cmp eax, dword ptr [ebp + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x60u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b58ee: jl 0x8b5592 */ if ((fS!=fO)) goto L_008b5592;
L_008b58f4:; BB(0x008b58f4);
    /* 008b58f4: inc dword ptr [ebp + 0x20] */ { u32 ad = (u32)(r_ebp+0x20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b58f7: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 008b58fa: add dword ptr [ebp + 4], 0x18 */ { u32 ad = (u32)(r_ebp+0x4u);  u32 a = R32(ad); u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b58fe: add dword ptr [ebp + 0x50], 4 */ { u32 ad = (u32)(r_ebp+0x50u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5902: add esi, 0x54 */ {  u32 a = r_esi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b5905: cmp eax, dword ptr [edi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5908: jl 0x8b54a2 */ if ((fS!=fO)) goto L_008b54a2;
L_008b590e:; BB(0x008b590e);
    /* 008b590e: lea eax, [edi + 0x88] */ r_eax = (u32)(r_edi+0x88u);
    /* 008b5914: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5916: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b5918: cmp eax, dword ptr [edi + 0x118] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x118u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b591e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b591f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008b5921: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008b5924:; BB(0x008b5924);
    /* 008b5924: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b5925: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b5926: add ebp, 0x70 */ {  u32 a = r_ebp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b5929: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b592a: ret  */ FN_RET(0x008b540e); r_esp += 4; return;
}

void f_008b592b(void) /* sub_8B592B */
{
    FN_ENTER(0x008b592b);
    /* 008b592b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b592c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008b5930: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5931: mov edi, dword ptr [esi + 0x184] */ r_edi = R32((u32)(r_esi+0x184u));
    /* 008b5937: cmp dword ptr [edi + 0x10], 0 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b593b: je 0x8b595c */ if (fZ) goto L_008b595c;
L_008b593d:; BB(0x008b593d);
    /* 008b593d: cmp byte ptr [esi + 0x49], 0 */ {  u32 a = R8((u32)(r_esi+0x49u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b5941: je 0x8b5955 */ if (fZ) goto L_008b5955;
L_008b5943:; BB(0x008b5943);
    /* 008b5943: call 0x8b532b */ r_esp -= 4; W32(r_esp, 0x8b5948u); f_008b532b();
    /* 008b5948: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b594a: je 0x8b5955 */ if (fZ) goto L_008b5955;
L_008b594c:; BB(0x008b594c);
    /* 008b594c: mov dword ptr [edi + 0xc], 0x8b540e */ W32((u32)(r_edi+0xcu), 0x8b540eu);
    /* 008b5953: jmp 0x8b595c */ goto L_008b595c;
L_008b5955:; BB(0x008b5955);
    /* 008b5955: mov dword ptr [edi + 0xc], 0x8b51c5 */ W32((u32)(r_edi+0xcu), 0x8b51c5u);
L_008b595c:; BB(0x008b595c);
    /* 008b595c: and dword ptr [esi + 0x88], 0 */ { u32 ad = (u32)(r_esi+0x88u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b5963: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b5964: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b5965: ret  */ FN_RET(0x008b592b); r_esp += 4; return;
}

void f_008b5966(void) /* sub_8B5966 */
{
    FN_ENTER(0x008b5966);
    /* 008b5966: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b5967: mov ebp, esp */ r_ebp = r_esp;
    /* 008b5969: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b596a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b596b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b596c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b596f: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b5972: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5973: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5975: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5977: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5978: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b597au); call_ind(t); }
    /* 008b597a: mov ebx, eax */ r_ebx = r_eax;
    /* 008b597c: mov dword ptr [esi + 0x184], ebx */ W32((u32)(r_esi+0x184u), r_ebx);
    /* 008b5982: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b5984: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5987: cmp byte ptr [ebp + 0xc], 0 */ {  u32 a = R8((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b598b: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008b598e: mov dword ptr [ebx], 0x8b4e3c */ W32((u32)(r_ebx), 0x8b4e3cu);
    /* 008b5994: mov dword ptr [ebx + 8], 0x8b592b */ W32((u32)(r_ebx+0x8u), 0x8b592bu);
    /* 008b599b: mov dword ptr [ebx + 0x70], edi */ W32((u32)(r_ebx+0x70u), r_edi);
    /* 008b599e: je 0x8b5a24 */ if (fZ) goto L_008b5a24;
L_008b59a4:; BB(0x008b59a4);
    /* 008b59a4: cmp dword ptr [esi + 0x20], edi */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b59a7: mov eax, dword ptr [esi + 0xc4] */ r_eax = R32((u32)(r_esi+0xc4u));
    /* 008b59ad: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008b59b0: jle 0x8b5a0e */ if ((fZ||fS!=fO)) goto L_008b5a0e;
L_008b59b2:; BB(0x008b59b2);
    /* 008b59b2: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b59b5: lea edi, [eax + 0xc] */ r_edi = (u32)(r_eax+0xcu);
    /* 008b59b8: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
L_008b59bb:; BB(0x008b59bb);
    /* 008b59bb: cmp byte ptr [esi + 0xc8], 0 */ {  u32 a = R8((u32)(r_esi+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b59c2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b59c4: mov ecx, eax */ r_ecx = r_eax;
    /* 008b59c6: je 0x8b59cb */ if (fZ) goto L_008b59cb;
L_008b59c8:; BB(0x008b59c8);
    /* 008b59c8: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
L_008b59cb:; BB(0x008b59cb);
    /* 008b59cb: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008b59ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b59cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b59d0: push dword ptr [edi + 0x14] */ { u32 v = R32((u32)(r_edi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b59d3: call 0x8a8cf1 */ r_esp -= 4; W32(r_esp, 0x8b59d8u); f_008a8cf1();
    /* 008b59d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b59d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b59da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b59db: push dword ptr [edi - 4] */ { u32 v = R32((u32)(r_edi+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b59de: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b59e1: call 0x8a8cf1 */ r_esp -= 4; W32(r_esp, 0x8b59e6u); f_008a8cf1();
    /* 008b59e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b59e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b59e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b59e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b59eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b59ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b59ee: call dword ptr [ebx + 0x14] */ { u32 t = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, 0x8b59f1u); call_ind(t); }
    /* 008b59f1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b59f4: add dword ptr [ebp + 0xc], 4 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b59f8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b59fb: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b59fe: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008b5a00: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b5a03: add edi, 0x54 */ {  u32 a = r_edi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b5a06: cmp eax, dword ptr [esi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5a09: jl 0x8b59bb */ if ((fS!=fO)) goto L_008b59bb;
L_008b5a0b:; BB(0x008b5a0b);
    /* 008b5a0b: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
L_008b5a0e:; BB(0x008b5a0e);
    /* 008b5a0e: lea eax, [ebx + 0x48] */ r_eax = (u32)(r_ebx+0x48u);
    /* 008b5a11: mov dword ptr [ebx + 4], 0x8b5026 */ W32((u32)(r_ebx+0x4u), 0x8b5026u);
    /* 008b5a18: mov dword ptr [ebx + 0xc], 0x8b51c5 */ W32((u32)(r_ebx+0xcu), 0x8b51c5u);
    /* 008b5a1f: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 008b5a22: jmp 0x8b5a59 */ goto L_008b5a59;
L_008b5a24:; BB(0x008b5a24);
    /* 008b5a24: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b5a27: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a2f: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b5a32u); call_ind(t); }
    /* 008b5a32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5a35: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a37: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 008b5a3a: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_008b5a3b:; BB(0x008b5a3b);
    /* 008b5a3b: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008b5a3d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5a40: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008b5a45: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5a46: jne 0x8b5a3b */ if (!fZ) goto L_008b5a3b;
L_008b5a48:; BB(0x008b5a48);
    /* 008b5a48: mov dword ptr [ebx + 4], 0x8b47e9 */ W32((u32)(r_ebx+0x4u), 0x8b47e9u);
    /* 008b5a4f: mov dword ptr [ebx + 0xc], 0x8b4e4c */ W32((u32)(r_ebx+0xcu), 0x8b4e4cu);
    /* 008b5a56: mov dword ptr [ebx + 0x10], edi */ W32((u32)(r_ebx+0x10u), r_edi);
L_008b5a59:; BB(0x008b5a59);
    /* 008b5a59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b5a5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b5a5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b5a5c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b5a5d: ret  */ FN_RET(0x008b5966); r_esp += 4; return;
}

void f_008b5a5e(void) /* sub_8B5A5E */
{
    FN_ENTER(0x008b5a5e);
    /* 008b5a5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a5f: mov ebp, esp */ r_ebp = r_esp;
    /* 008b5a61: sub esp, 0x51c */ {  u32 a = r_esp; u32 b = 0x51cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b5a67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a69: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008b5a6c: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5a6f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a70: jne 0x8b5a87 */ if (!fZ) goto L_008b5a87;
L_008b5a72:; BB(0x008b5a72);
    /* 008b5a72: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b5a75: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008b5a78: push 0x5d4 */ { u32 v = 0x5d4u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5a80: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8b5a82u); call_ind(t); }
    /* 008b5a82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5a85: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_008b5a87:; BB(0x008b5a87);
    /* 008b5a87: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 008b5a89: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b5a8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b5a8e: mov dword ptr [esi + 0xd0], ebx */ W32((u32)(r_esi+0xd0u), r_ebx);
    /* 008b5a94: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b5a97: mov dword ptr [ebp + 0x10], 1 */ W32((u32)(r_ebp+0x10u), 0x1u);
L_008b5a9e:; BB(0x008b5a9e);
    /* 008b5a9e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008b5aa1: movzx ecx, byte ptr [ecx + ebx] */ r_ecx = (u32)R8((u32)(r_ecx+r_ebx));
    /* 008b5aa5: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5aa8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b5aab: jl 0x8b5adc */ if ((fS!=fO)) goto L_008b5adc;
L_008b5aad:; BB(0x008b5aad);
    /* 008b5aad: lea edi, [ebp + eax - 0x118] */ r_edi = (u32)(r_ebp+r_eax+0xfffffee8u);
    /* 008b5ab4: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 008b5ab7: mov bl, al */ r_ebx = (r_ebx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 008b5ab9: mov bh, bl */ r_ebx = (r_ebx & 0xffff00ffu) | ((((u8)r_ebx) & 0xffu) << 8);
    /* 008b5abb: mov edx, ecx */ r_edx = r_ecx;
    /* 008b5abd: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008b5ac0: mov eax, ebx */ r_eax = r_ebx;
    /* 008b5ac2: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b5ac5: mov ax, bx */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_ebx) & 0xffffu);
    /* 008b5ac8: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b5acb: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008b5acd: mov ecx, edx */ r_ecx = r_edx;
    /* 008b5acf: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5ad2: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008b5ad4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5ad7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b5ad9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008b5adc:; BB(0x008b5adc);
    /* 008b5adc: inc dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5adf: cmp dword ptr [ebp + 0x10], 0x10 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5ae3: jle 0x8b5a9e */ if ((fZ||fS!=fO)) goto L_008b5a9e;
L_008b5ae5:; BB(0x008b5ae5);
    /* 008b5ae5: and byte ptr [ebp + eax - 0x118], 0 */ { u32 ad = (u32)(r_ebp+r_eax+0xfffffee8u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b5aed: movsx edi, byte ptr [ebp - 0x118] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffee8u));
    /* 008b5af4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5af6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b5af8: cmp byte ptr [ebp - 0x118], cl */ {  u32 a = R8((u32)(r_ebp+0xfffffee8u)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b5afe: je 0x8b5b2f */ if (fZ) goto L_008b5b2f;
L_008b5b00:; BB(0x008b5b00);
    /* 008b5b00: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
L_008b5b06:; BB(0x008b5b06);
    /* 008b5b06: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 008b5b09: jmp 0x8b5b1c */ goto L_008b5b1c;
L_008b5b0b:; BB(0x008b5b0b);
    /* 008b5b0b: movsx eax, byte ptr [ebp + ecx - 0x117] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_ecx+0xfffffee9u));
    /* 008b5b13: mov dword ptr [ebp + ecx*4 - 0x51c], edx */ W32((u32)(r_ebp+r_ecx*4+0xfffffae4u), r_edx);
    /* 008b5b1a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5b1b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008b5b1c:; BB(0x008b5b1c);
    /* 008b5b1c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5b1e: je 0x8b5b0b */ if (fZ) goto L_008b5b0b;
L_008b5b20:; BB(0x008b5b20);
    /* 008b5b20: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b5b22: lea eax, [ebp + ecx - 0x118] */ r_eax = (u32)(r_ebp+r_ecx+0xfffffee8u);
    /* 008b5b29: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b5b2a: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b5b2d: jne 0x8b5b06 */ if (!fZ) goto L_008b5b06;
L_008b5b2f:; BB(0x008b5b2f);
    /* 008b5b2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b5b31: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5b33: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b5b34: lea eax, [esi + 0x48] */ r_eax = (u32)(r_esi+0x48u);
L_008b5b37:; BB(0x008b5b37);
    /* 008b5b37: cmp byte ptr [edx + ebx], 0 */ {  u32 a = R8((u32)(r_edx+r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b5b3b: je 0x8b5b5b */ if (fZ) goto L_008b5b5b;
L_008b5b3d:; BB(0x008b5b3d);
    /* 008b5b3d: mov edi, dword ptr [ebp + ecx*4 - 0x51c] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0xfffffae4u));
    /* 008b5b44: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 008b5b47: mov dword ptr [eax - 0x44], edi */ W32((u32)(r_eax+0xffffffbcu), r_edi);
    /* 008b5b4a: movzx edi, byte ptr [edx + ebx] */ r_edi = (u32)R8((u32)(r_edx+r_ebx));
    /* 008b5b4e: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5b50: mov edi, dword ptr [ebp + ecx*4 - 0x520] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0xfffffae0u));
    /* 008b5b57: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 008b5b59: jmp 0x8b5b5e */ goto L_008b5b5e;
L_008b5b5b:; BB(0x008b5b5b);
    /* 008b5b5b: or dword ptr [eax], 0xffffffff */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_008b5b5e:; BB(0x008b5b5e);
    /* 008b5b5e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b5b5f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b5b62: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5b65: jle 0x8b5b37 */ if ((fZ||fS!=fO)) goto L_008b5b37;
L_008b5b67:; BB(0x008b5b67);
    /* 008b5b67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b5b69: and dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5b6c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b5b6e: mov ecx, 0x100 */ r_ecx = 0x100u;
    /* 008b5b73: lea edi, [esi + 0xd4] */ r_edi = (u32)(r_esi+0xd4u);
    /* 008b5b79: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b5b7a: mov dword ptr [esi + 0x88], 0xfffff */ W32((u32)(r_esi+0x88u), 0xfffffu);
    /* 008b5b84: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008b5b86: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 008b5b89: mov dword ptr [ebp - 0xc], 7 */ W32((u32)(r_ebp+0xfffffff4u), 0x7u);
L_008b5b90:; BB(0x008b5b90);
    /* 008b5b90: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b5b93: lea edi, [eax + ebx] */ r_edi = (u32)(r_eax+r_ebx);
    /* 008b5b96: cmp byte ptr [edi], 1 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008b5b99: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 008b5b9c: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008b5b9f: jb 0x8b5bfb */ if (fC) goto L_008b5bfb;
L_008b5ba1:; BB(0x008b5ba1);
    /* 008b5ba1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b5ba4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5ba7: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008b5ba9: lea ebx, [eax + ebx + 0x11] */ r_ebx = (u32)(r_eax+r_ebx+0x11u);
L_008b5bad:; BB(0x008b5bad);
    /* 008b5bad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5bb0: mov eax, dword ptr [ebp + eax*4 - 0x51c] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffae4u));
    /* 008b5bb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b5bba: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b5bbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b5bbe: jle 0x8b5be6 */ if ((fZ||fS!=fO)) goto L_008b5be6;
L_008b5bc0:; BB(0x008b5bc0);
    /* 008b5bc0: lea edi, [eax + esi + 0x4d4] */ r_edi = (u32)(r_eax+r_esi+0x4d4u);
    /* 008b5bc7: lea eax, [esi + eax*4 + 0xd4] */ r_eax = (u32)(r_esi+r_eax*4+0xd4u);
    /* 008b5bce: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_008b5bd1:; BB(0x008b5bd1);
    /* 008b5bd1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008b5bd4: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008b5bd6: mov cl, byte ptr [ebx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 008b5bd8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b5bdb: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
    /* 008b5bdd: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b5bde: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b5be1: jne 0x8b5bd1 */ if (!fZ) goto L_008b5bd1;
L_008b5be3:; BB(0x008b5be3);
    /* 008b5be3: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
L_008b5be6:; BB(0x008b5be6);
    /* 008b5be6: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5be9: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008b5bec: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5bef: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b5bf0: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5bf3: jle 0x8b5bad */ if ((fZ||fS!=fO)) goto L_008b5bad;
L_008b5bf5:; BB(0x008b5bf5);
    /* 008b5bf5: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b5bf8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b5bfa: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008b5bfb:; BB(0x008b5bfb);
    /* 008b5bfb: inc dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5bfe: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5c01: jns 0x8b5b90 */ if (!fS) goto L_008b5b90;
L_008b5c03:; BB(0x008b5c03);
    /* 008b5c03: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b5c04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b5c05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b5c06: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b5c07: ret  */ FN_RET(0x008b5a5e); r_esp += 4; return;
}

void f_008b5c08(void) /* sub_8B5C08 */
{
    FN_ENTER(0x008b5c08);
    /* 008b5c08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b5c09: mov ebp, esp */ r_ebp = r_esp;
    /* 008b5c0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5c0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5c0d: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b5c10: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008b5c13: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5c14: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008b5c16: jmp 0x8b5ccc */ goto L_008b5ccc;
L_008b5c1b:; BB(0x008b5c1b);
    /* 008b5c1b: cmp dword ptr [esi + 8], 0 */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5c1f: jne 0x8b5c8c */ if (!fZ) goto L_008b5c8c;
L_008b5c21:; BB(0x008b5c21);
    /* 008b5c21: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5c23: jne 0x8b5c43 */ if (!fZ) goto L_008b5c43;
L_008b5c25:; BB(0x008b5c25);
    /* 008b5c25: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008b5c28: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 008b5c2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5c2c: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x8b5c2fu); call_ind(t); }
    /* 008b5c2f: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b5c31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b5c32: je 0x8b5cee */ if (fZ) goto L_008b5cee;
L_008b5c38:; BB(0x008b5c38);
    /* 008b5c38: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008b5c3b: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 008b5c3e: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 008b5c40: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
L_008b5c43:; BB(0x008b5c43);
    /* 008b5c43: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008b5c46: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008b5c47: mov eax, 0xff */ r_eax = 0xffu;
    /* 008b5c4c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b5c4d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5c4f: jne 0x8b5cbd */ if (!fZ) goto L_008b5cbd;
L_008b5c51:; BB(0x008b5c51);
    /* 008b5c51: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5c53: jne 0x8b5c78 */ if (!fZ) goto L_008b5c78;
L_008b5c55:; BB(0x008b5c55);
    /* 008b5c55: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008b5c58: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 008b5c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5c5c: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x8b5c5fu); call_ind(t); }
    /* 008b5c5f: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b5c61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b5c62: je 0x8b5cee */ if (fZ) goto L_008b5cee;
L_008b5c68:; BB(0x008b5c68);
    /* 008b5c68: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008b5c6b: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 008b5c6e: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 008b5c70: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 008b5c73: mov eax, 0xff */ r_eax = 0xffu;
L_008b5c78:; BB(0x008b5c78);
    /* 008b5c78: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008b5c7b: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008b5c7c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b5c7d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5c7f: je 0x8b5c51 */ if (fZ) goto L_008b5c51;
L_008b5c81:; BB(0x008b5c81);
    /* 008b5c81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5c83: jne 0x8b5c89 */ if (!fZ) goto L_008b5c89;
L_008b5c85:; BB(0x008b5c85);
    /* 008b5c85: mov ecx, eax */ r_ecx = r_eax;
    /* 008b5c87: jmp 0x8b5cbd */ goto L_008b5cbd;
L_008b5c89:; BB(0x008b5c89);
    /* 008b5c89: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
L_008b5c8c:; BB(0x008b5c8c);
    /* 008b5c8c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b5c8f: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5c92: jge 0x8b5cd6 */ if ((fS==fO)) goto L_008b5cd6;
L_008b5c94:; BB(0x008b5c94);
    /* 008b5c94: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008b5c97: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b5c9a: jne 0x8b5cbb */ if (!fZ) goto L_008b5cbb;
L_008b5c9c:; BB(0x008b5c9c);
    /* 008b5c9c: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008b5c9f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b5ca1: mov dword ptr [eax + 0x14], 0x71 */ W32((u32)(r_eax+0x14u), 0x71u);
    /* 008b5ca8: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008b5cab: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b5cad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008b5caf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5cb0: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x8b5cb3u); call_ind(t); }
    /* 008b5cb3: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008b5cb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b5cb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b5cb8: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
L_008b5cbb:; BB(0x008b5cbb);
    /* 008b5cbb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_008b5cbd:; BB(0x008b5cbd);
    /* 008b5cbd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b5cc0: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b5cc3: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008b5cc5: add dword ptr [ebp + 0x10], 8 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5cc9: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_008b5ccc:; BB(0x008b5ccc);
    /* 008b5ccc: cmp dword ptr [ebp + 0x10], 0x19 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5cd0: jl 0x8b5c1b */ if ((fS!=fO)) goto L_008b5c1b;
L_008b5cd6:; BB(0x008b5cd6);
    /* 008b5cd6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b5cd9: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 008b5cdc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b5cdf: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 008b5ce2: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008b5ce4: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 008b5ce7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b5ce9:; BB(0x008b5ce9);
    /* 008b5ce9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b5cea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b5ceb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b5cec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b5ced: ret  */ FN_RET(0x008b5c08); r_esp += 4; return;
L_008b5cee:; BB(0x008b5cee);
    /* 008b5cee: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b5cf0: jmp 0x8b5ce9 */ goto L_008b5ce9;
}

void f_008b5cf2(void) /* sub_8B5CF2 */
{
    FN_ENTER(0x008b5cf2);
    /* 008b5cf2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b5cf3: mov ebp, esp */ r_ebp = r_esp;
    /* 008b5cf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5cf6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b5cf9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5cfa: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 008b5cfd: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5cff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5d00: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b5d03: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008b5d06: jge 0x8b5d2a */ if ((fS==fO)) goto L_008b5d2a;
L_008b5d08:; BB(0x008b5d08);
    /* 008b5d08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5d09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5d0a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b5d0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5d0e: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b5d13u); f_008b5c08();
    /* 008b5d13: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5d16: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b5d18: jne 0x8b5d22 */ if (!fZ) goto L_008b5d22;
L_008b5d1a:; BB(0x008b5d1a);
    /* 008b5d1a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b5d1d: jmp 0x8b5dd8 */ goto L_008b5dd8;
L_008b5d22:; BB(0x008b5d22);
    /* 008b5d22: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 008b5d25: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 008b5d28: jmp 0x8b5d2d */ goto L_008b5d2d;
L_008b5d2a:; BB(0x008b5d2a);
    /* 008b5d2a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
L_008b5d2d:; BB(0x008b5d2d);
    /* 008b5d2d: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5d2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5d30: mov ecx, eax */ r_ecx = r_eax;
    /* 008b5d32: mov esi, edx */ r_esi = r_edx;
    /* 008b5d34: sar esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b5d36: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 008b5d38: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b5d39: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 008b5d3c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008b5d3e: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008b5d41: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008b5d43: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008b5d46: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008b5d47: and esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008b5d49: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008b5d4c: lea ecx, [ebx + ecx*4 + 0x44] */ r_ecx = (u32)(r_ebx+r_ecx*4+0x44u);
    /* 008b5d50: cmp esi, dword ptr [ecx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5d52: jle 0x8b5d92 */ if ((fZ||fS!=fO)) goto L_008b5d92;
L_008b5d54:; BB(0x008b5d54);
    /* 008b5d54: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
L_008b5d57:; BB(0x008b5d57);
    /* 008b5d57: shl esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b5d59: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5d5c: jge 0x8b5d75 */ if ((fS==fO)) goto L_008b5d75;
L_008b5d5e:; BB(0x008b5d5e);
    /* 008b5d5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5d61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5d62: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5d63: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b5d68u); f_008b5c08();
    /* 008b5d68: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5d6b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b5d6d: je 0x8b5dbd */ if (fZ) goto L_008b5dbd;
L_008b5d6f:; BB(0x008b5d6f);
    /* 008b5d6f: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 008b5d72: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
L_008b5d75:; BB(0x008b5d75);
    /* 008b5d75: add dword ptr [ebp + 0x18], 4 */ { u32 ad = (u32)(r_ebp+0x18u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 008b5d79: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5d7a: mov ecx, eax */ r_ecx = r_eax;
    /* 008b5d7c: mov ebx, edx */ r_ebx = r_edx;
    /* 008b5d7e: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008b5d80: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008b5d83: and ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008b5d86: or esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 008b5d88: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5d8b: cmp esi, dword ptr [ecx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5d8d: jg 0x8b5d57 */ if ((!fZ&&fS==fO)) goto L_008b5d57;
L_008b5d8f:; BB(0x008b5d8f);
    /* 008b5d8f: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
L_008b5d92:; BB(0x008b5d92);
    /* 008b5d92: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 008b5d95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5d98: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5d9b: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 008b5d9e: jle 0x8b5dc2 */ if ((fZ||fS!=fO)) goto L_008b5dc2;
L_008b5da0:; BB(0x008b5da0);
    /* 008b5da0: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 008b5da3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b5da5: mov dword ptr [eax + 0x14], 0x72 */ W32((u32)(r_eax+0x14u), 0x72u);
    /* 008b5dac: mov edi, dword ptr [edi + 0x1c] */ r_edi = R32((u32)(r_edi+0x1cu));
    /* 008b5daf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b5db1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008b5db3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5db4: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b5db7u); call_ind(t); }
    /* 008b5db7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b5db8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b5db9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b5dbb: jmp 0x8b5dd7 */ goto L_008b5dd7;
L_008b5dbd:; BB(0x008b5dbd);
    /* 008b5dbd: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b5dc0: jmp 0x8b5dd7 */ goto L_008b5dd7;
L_008b5dc2:; BB(0x008b5dc2);
    /* 008b5dc2: mov ecx, dword ptr [ebx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ebx+r_eax*4+0x8cu));
    /* 008b5dc9: sub ecx, dword ptr [ebx + eax*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+r_eax*4)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5dcc: add ecx, dword ptr [ebx + 0xd0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b5dd2: movzx eax, byte ptr [ecx + esi + 0x11] */ r_eax = (u32)R8((u32)(r_ecx+r_esi+0x11u));
L_008b5dd7:; BB(0x008b5dd7);
    /* 008b5dd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b5dd8:; BB(0x008b5dd8);
    /* 008b5dd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b5dd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b5dda: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b5ddb: ret  */ FN_RET(0x008b5cf2); r_esp += 4; return;
}

void f_008b5ddc(void) /* sub_8B5DDC */
{
    FN_ENTER(0x008b5ddc);
    /* 008b5ddc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ddd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b5dde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ddf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5de0: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 008b5de4: mov esi, dword ptr [edi + 0x194] */ r_esi = R32((u32)(r_edi+0x194u));
    /* 008b5dea: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008b5ded: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b5dee: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5df0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b5df1: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x008b5df1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b5df1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b5df3: lea ecx, [edi + 0x190] */ r_ecx = (u32)(r_edi+0x190u);
    /* 008b5df9: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008b5dfb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5dfc: add dword ptr [ebx + 0x58], eax */ { u32 ad = (u32)(r_ebx+0x58u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5dff: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b5e01: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 008b5e04: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008b5e06: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8b5e09u); call_ind(t); }
    /* 008b5e09: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b5e0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b5e0c: je 0x8b5e35 */ if (fZ) goto L_008b5e35;
L_008b5e0e:; BB(0x008b5e0e);
    /* 008b5e0e: lea eax, [edi + 0x120] */ r_eax = (u32)(r_edi+0x120u);
    /* 008b5e14: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b5e16: cmp dword ptr [eax], ebx */ {  u32 a = R32((u32)(r_eax)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5e18: jle 0x8b5e27 */ if ((fZ||fS!=fO)) goto L_008b5e27;
L_008b5e1a:; BB(0x008b5e1a);
    /* 008b5e1a: lea ecx, [esi + 0x20] */ r_ecx = (u32)(r_esi+0x20u);
L_008b5e1d:; BB(0x008b5e1d);
    /* 008b5e1d: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 008b5e1f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b5e20: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5e23: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5e25: jl 0x8b5e1d */ if ((fS!=fO)) goto L_008b5e1d;
L_008b5e27:; BB(0x008b5e27);
    /* 008b5e27: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
    /* 008b5e2d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 008b5e30: mov byte ptr [esi + 0x18], bl */ W8((u32)(r_esi+0x18u), (u8)r_ebx);
    /* 008b5e33: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b5e35:; BB(0x008b5e35);
    /* 008b5e35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b5e36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b5e37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b5e38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b5e39: ret  */ FN_RET(0x008b5ddc); r_esp += 4; return;
}

void f_008b5e3a(void) /* sub_8B5E3A */
{
    FN_ENTER(0x008b5e3a);
    /* 008b5e3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b5e3b: mov ebp, esp */ r_ebp = r_esp;
    /* 008b5e3d: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b5e40: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b5e43: cmp dword ptr [ecx + 0xfc], 0 */ {  u32 a = R32((u32)(r_ecx+0xfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5e4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5e4b: mov ebx, dword ptr [ecx + 0x194] */ r_ebx = R32((u32)(r_ecx+0x194u));
    /* 008b5e51: je 0x8b5e6b */ if (fZ) goto L_008b5e6b;
L_008b5e53:; BB(0x008b5e53);
    /* 008b5e53: cmp dword ptr [ebx + 0x30], 0 */ {  u32 a = R32((u32)(r_ebx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5e57: jne 0x8b5e6b */ if (!fZ) goto L_008b5e6b;
L_008b5e59:; BB(0x008b5e59);
    /* 008b5e59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5e5a: call 0x8b5ddc */ r_esp -= 4; W32(r_esp, 0x8b5e5fu); f_008b5ddc();
    /* 008b5e5f: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b5e61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b5e62: je 0x8b6200 */ if (fZ) goto L_008b6200;
L_008b5e68:; BB(0x008b5e68);
    /* 008b5e68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
L_008b5e6b:; BB(0x008b5e6b);
    /* 008b5e6b: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 008b5e6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008b5e70: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008b5e73: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5e77: cmp dword ptr [ecx + 0x13c], 0 */ {  u32 a = R32((u32)(r_ecx+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5e7e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5e7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5e80: lea esi, [ebx + 0x18] */ r_esi = (u32)(r_ebx+0x18u);
    /* 008b5e83: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 008b5e86: lea esi, [ebx + 0x20] */ r_esi = (u32)(r_ebx+0x20u);
    /* 008b5e89: lea edi, [ebp - 0x2c] */ r_edi = (u32)(r_ebp+0xffffffd4u);
    /* 008b5e8c: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b5e8d: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b5e8e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 008b5e91: mov eax, dword ptr [ecx + 0x178] */ r_eax = R32((u32)(r_ecx+0x178u));
    /* 008b5e97: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b5e98: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 008b5e9b: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008b5e9e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 008b5ea1: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 008b5ea4: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 008b5ea7: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b5ea8: jle 0x8b61cf */ if ((fZ||fS!=fO)) goto L_008b61cf;
L_008b5eae:; BB(0x008b5eae);
    /* 008b5eae: lea esi, [ecx + 0x140] */ r_esi = (u32)(r_ecx+0x140u);
    /* 008b5eb4: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
L_008b5eb7:; BB(0x008b5eb7);
    /* 008b5eb7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5eba: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b5ebd: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008b5ec0: mov esi, dword ptr [esi + edi*4] */ r_esi = R32((u32)(r_esi+r_edi*4));
    /* 008b5ec3: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008b5ec6: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b5ec9: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 008b5ecb: mov edi, dword ptr [ecx + esi*4 + 0x124] */ r_edi = R32((u32)(r_ecx+r_esi*4+0x124u));
    /* 008b5ed2: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 008b5ed5: mov ecx, dword ptr [ebx + ecx*4 + 0x34] */ r_ecx = R32((u32)(r_ebx+r_ecx*4+0x34u));
    /* 008b5ed9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008b5edc: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 008b5edf: mov ecx, dword ptr [ebx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_ebx+r_ecx*4+0x44u));
    /* 008b5ee3: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 008b5ee6: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008b5ee9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b5eec: jge 0x8b5f16 */ if ((fS==fO)) goto L_008b5f16;
L_008b5eee:; BB(0x008b5eee);
    /* 008b5eee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ef1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ef2: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b5ef5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ef6: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b5efbu); f_008b5c08();
    /* 008b5efb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5efe: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b5f00: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b5f06:; BB(0x008b5f06);
    /* 008b5f06: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b5f09: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5f0c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b5f0f: jge 0x8b5f16 */ if ((fS==fO)) goto L_008b5f16;
L_008b5f11:; BB(0x008b5f11);
    /* 008b5f11: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5f13: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5f14: jmp 0x8b5f43 */ goto L_008b5f43;
L_008b5f16:; BB(0x008b5f16);
    /* 008b5f16: lea ecx, [eax - 8] */ r_ecx = (u32)(r_eax+0xfffffff8u);
    /* 008b5f19: mov esi, edx */ r_esi = r_edx;
    /* 008b5f1b: sar esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b5f1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5f20: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008b5f26: mov ecx, dword ptr [ecx + esi*4 + 0xd4] */ r_ecx = R32((u32)(r_ecx+r_esi*4+0xd4u));
    /* 008b5f2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5f2f: je 0x8b5f40 */ if (fZ) goto L_008b5f40;
L_008b5f31:; BB(0x008b5f31);
    /* 008b5f31: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b5f33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5f36: movzx esi, byte ptr [esi + ecx + 0x4d4] */ r_esi = (u32)R8((u32)(r_esi+r_ecx+0x4d4u));
    /* 008b5f3e: jmp 0x8b5f65 */ goto L_008b5f65;
L_008b5f40:; BB(0x008b5f40);
    /* 008b5f40: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b5f43:; BB(0x008b5f43);
    /* 008b5f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f44: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b5f47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f49: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b5f4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f4d: call 0x8b5cf2 */ r_esp -= 4; W32(r_esp, 0x8b5f52u); f_008b5cf2();
    /* 008b5f52: mov esi, eax */ r_esi = r_eax;
    /* 008b5f54: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5f57: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b5f59: jl 0x8b6203 */ if ((fS!=fO)) goto L_008b6203;
L_008b5f5f:; BB(0x008b5f5f);
    /* 008b5f5f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b5f62: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b5f65:; BB(0x008b5f65);
    /* 008b5f65: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5f67: je 0x8b5fc0 */ if (fZ) goto L_008b5fc0;
L_008b5f69:; BB(0x008b5f69);
    /* 008b5f69: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5f6b: jge 0x8b5f8a */ if ((fS==fO)) goto L_008b5f8a;
L_008b5f6d:; BB(0x008b5f6d);
    /* 008b5f6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f70: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b5f73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f74: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b5f79u); f_008b5c08();
    /* 008b5f79: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5f7c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b5f7e: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b5f84:; BB(0x008b5f84);
    /* 008b5f84: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b5f87: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b5f8a:; BB(0x008b5f8a);
    /* 008b5f8a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5f8c: mov ecx, esi */ r_ecx = r_esi;
    /* 008b5f8e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 008b5f95: shl dword ptr [ebp - 4], cl */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r); fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; } }
    /* 008b5f98: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5f9b: mov ecx, eax */ r_ecx = r_eax;
    /* 008b5f9d: mov edi, edx */ r_edi = r_edx;
    /* 008b5f9f: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b5fa1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5fa4: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b5fa7: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5fa9: cmp ecx, dword ptr [esi + 0x99e948] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x99e948u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5faf: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008b5fb2: jge 0x8b5fbe */ if ((fS==fO)) goto L_008b5fbe;
L_008b5fb4:; BB(0x008b5fb4);
    /* 008b5fb4: mov esi, dword ptr [esi + 0x99e988] */ r_esi = R32((u32)(r_esi+0x99e988u));
    /* 008b5fba: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b5fbc: jmp 0x8b5fc0 */ goto L_008b5fc0;
L_008b5fbe:; BB(0x008b5fbe);
    /* 008b5fbe: mov esi, ecx */ r_esi = r_ecx;
L_008b5fc0:; BB(0x008b5fc0);
    /* 008b5fc0: cmp byte ptr [edi + 0x30], 0 */ {  u32 a = R8((u32)(r_edi+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b5fc4: je 0x8b60f2 */ if (fZ) goto L_008b60f2;
L_008b5fca:; BB(0x008b5fca);
    /* 008b5fca: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b5fcd: lea ecx, [ebp + ecx*4 - 0x2c] */ r_ecx = (u32)(r_ebp+r_ecx*4+0xffffffd4u);
    /* 008b5fd1: add dword ptr [ecx], esi */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5fd3: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 008b5fd5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b5fd8: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 008b5fdb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5fdd: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5fde: cmp dword ptr [edi + 0x24], ecx */ {  u32 a = R32((u32)(r_edi+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5fe1: jle 0x8b60f2 */ if ((fZ||fS!=fO)) goto L_008b60f2;
L_008b5fe7:; BB(0x008b5fe7);
    /* 008b5fe7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_008b5fea:; BB(0x008b5fea);
    /* 008b5fea: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5fed: jge 0x8b601a */ if ((fS==fO)) goto L_008b601a;
L_008b5fef:; BB(0x008b5fef);
    /* 008b5fef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ff2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ff3: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b5ff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ff7: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b5ffcu); f_008b5c08();
    /* 008b5ffc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5fff: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6001: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b6007:; BB(0x008b6007);
    /* 008b6007: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b600a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b600d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6010: jge 0x8b601a */ if ((fS==fO)) goto L_008b601a;
L_008b6012:; BB(0x008b6012);
    /* 008b6012: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6015: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b6017: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b6018: jmp 0x8b6044 */ goto L_008b6044;
L_008b601a:; BB(0x008b601a);
    /* 008b601a: lea ecx, [eax - 8] */ r_ecx = (u32)(r_eax+0xfffffff8u);
    /* 008b601d: mov esi, edx */ r_esi = r_edx;
    /* 008b601f: sar esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b6021: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6024: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008b602a: mov edi, dword ptr [ecx + esi*4 + 0xd4] */ r_edi = R32((u32)(r_ecx+r_esi*4+0xd4u));
    /* 008b6031: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6033: je 0x8b6041 */ if (fZ) goto L_008b6041;
L_008b6035:; BB(0x008b6035);
    /* 008b6035: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b6037: movzx edi, byte ptr [esi + ecx + 0x4d4] */ r_edi = (u32)R8((u32)(r_esi+r_ecx+0x4d4u));
    /* 008b603f: jmp 0x8b6064 */ goto L_008b6064;
L_008b6041:; BB(0x008b6041);
    /* 008b6041: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6043: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b6044:; BB(0x008b6044);
    /* 008b6044: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6045: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6048: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b604b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b604c: call 0x8b5cf2 */ r_esp -= 4; W32(r_esp, 0x8b6051u); f_008b5cf2();
    /* 008b6051: mov edi, eax */ r_edi = r_eax;
    /* 008b6053: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6056: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b6058: jl 0x8b6203 */ if ((fS!=fO)) goto L_008b6203;
L_008b605e:; BB(0x008b605e);
    /* 008b605e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6061: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b6064:; BB(0x008b6064);
    /* 008b6064: mov ecx, edi */ r_ecx = r_edi;
    /* 008b6066: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b6069: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008b606c: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008b606f: je 0x8b60d4 */ if (fZ) goto L_008b60d4;
L_008b6071:; BB(0x008b6071);
    /* 008b6071: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6074: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6076: jge 0x8b6095 */ if ((fS==fO)) goto L_008b6095;
L_008b6078:; BB(0x008b6078);
    /* 008b6078: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b607a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b607b: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b607e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b607f: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6084u); f_008b5c08();
    /* 008b6084: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6087: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6089: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b608f:; BB(0x008b608f);
    /* 008b608f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6092: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b6095:; BB(0x008b6095);
    /* 008b6095: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b6097: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 008b6099: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b609a: mov ecx, edi */ r_ecx = r_edi;
    /* 008b609c: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008b609e: mov ecx, eax */ r_ecx = r_eax;
    /* 008b60a0: mov edi, edx */ r_edi = r_edx;
    /* 008b60a2: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b60a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b60a7: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b60a8: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b60ab: and esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008b60ad: cmp esi, dword ptr [ecx + 0x99e948] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x99e948u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b60b3: jge 0x8b60bf */ if ((fS==fO)) goto L_008b60bf;
L_008b60b5:; BB(0x008b60b5);
    /* 008b60b5: mov ecx, dword ptr [ecx + 0x99e988] */ r_ecx = R32((u32)(r_ecx+0x99e988u));
    /* 008b60bb: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b60bd: jmp 0x8b60c1 */ goto L_008b60c1;
L_008b60bf:; BB(0x008b60bf);
    /* 008b60bf: mov ecx, esi */ r_ecx = r_esi;
L_008b60c1:; BB(0x008b60c1);
    /* 008b60c1: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b60c4: mov esi, dword ptr [esi*4 + 0x99de60] */ r_esi = R32((u32)(r_esi*4+0x99de60u));
    /* 008b60cb: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b60ce: mov word ptr [edi + esi*2], cx */ W16((u32)(r_edi+r_esi*2), (u16)r_ecx);
    /* 008b60d2: jmp 0x8b60e0 */ goto L_008b60e0;
L_008b60d4:; BB(0x008b60d4);
    /* 008b60d4: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b60d7: jne 0x8b61b6 */ if (!fZ) goto L_008b61b6;
L_008b60dd:; BB(0x008b60dd);
    /* 008b60dd: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008b60e0:; BB(0x008b60e0);
    /* 008b60e0: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b60e3: cmp dword ptr [ebp - 4], 0x40 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b60e7: jl 0x8b5fea */ if ((fS!=fO)) goto L_008b5fea;
L_008b60ed:; BB(0x008b60ed);
    /* 008b60ed: jmp 0x8b61b6 */ goto L_008b61b6;
L_008b60f2:; BB(0x008b60f2);
    /* 008b60f2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_008b60f9:; BB(0x008b60f9);
    /* 008b60f9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b60fc: jge 0x8b6129 */ if ((fS==fO)) goto L_008b6129;
L_008b60fe:; BB(0x008b60fe);
    /* 008b60fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6101: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6102: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b6105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6106: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b610bu); f_008b5c08();
    /* 008b610b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b610e: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6110: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b6116:; BB(0x008b6116);
    /* 008b6116: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b6119: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b611c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b611f: jge 0x8b6129 */ if ((fS==fO)) goto L_008b6129;
L_008b6121:; BB(0x008b6121);
    /* 008b6121: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6124: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b6126: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b6127: jmp 0x8b6153 */ goto L_008b6153;
L_008b6129:; BB(0x008b6129);
    /* 008b6129: lea ecx, [eax - 8] */ r_ecx = (u32)(r_eax+0xfffffff8u);
    /* 008b612c: mov esi, edx */ r_esi = r_edx;
    /* 008b612e: sar esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b6130: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6133: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008b6139: mov edi, dword ptr [ecx + esi*4 + 0xd4] */ r_edi = R32((u32)(r_ecx+r_esi*4+0xd4u));
    /* 008b6140: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6142: je 0x8b6150 */ if (fZ) goto L_008b6150;
L_008b6144:; BB(0x008b6144);
    /* 008b6144: movzx esi, byte ptr [esi + ecx + 0x4d4] */ r_esi = (u32)R8((u32)(r_esi+r_ecx+0x4d4u));
    /* 008b614c: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b614e: jmp 0x8b6173 */ goto L_008b6173;
L_008b6150:; BB(0x008b6150);
    /* 008b6150: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b6153:; BB(0x008b6153);
    /* 008b6153: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6154: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6155: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6156: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6157: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b615a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b615b: call 0x8b5cf2 */ r_esp -= 4; W32(r_esp, 0x8b6160u); f_008b5cf2();
    /* 008b6160: mov esi, eax */ r_esi = r_eax;
    /* 008b6162: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6165: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b6167: jl 0x8b6203 */ if ((fS!=fO)) goto L_008b6203;
L_008b616d:; BB(0x008b616d);
    /* 008b616d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6170: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b6173:; BB(0x008b6173);
    /* 008b6173: mov ecx, esi */ r_ecx = r_esi;
    /* 008b6175: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b6178: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008b617b: je 0x8b61a1 */ if (fZ) goto L_008b61a1;
L_008b617d:; BB(0x008b617d);
    /* 008b617d: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6180: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6182: jge 0x8b619d */ if ((fS==fO)) goto L_008b619d;
L_008b6184:; BB(0x008b6184);
    /* 008b6184: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6186: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6187: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b618a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b618b: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6190u); f_008b5c08();
    /* 008b6190: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6193: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6195: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b6197:; BB(0x008b6197);
    /* 008b6197: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b619a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b619d:; BB(0x008b619d);
    /* 008b619d: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b619f: jmp 0x8b61a9 */ goto L_008b61a9;
L_008b61a1:; BB(0x008b61a1);
    /* 008b61a1: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b61a4: jne 0x8b61b6 */ if (!fZ) goto L_008b61b6;
L_008b61a6:; BB(0x008b61a6);
    /* 008b61a6: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008b61a9:; BB(0x008b61a9);
    /* 008b61a9: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b61ac: cmp dword ptr [ebp - 4], 0x40 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b61b0: jl 0x8b60f9 */ if ((fS!=fO)) goto L_008b60f9;
L_008b61b6:; BB(0x008b61b6);
    /* 008b61b6: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b61b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b61bc: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b61bf: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b61c3: cmp esi, dword ptr [ecx + 0x13c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x13cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b61c9: jl 0x8b5eb7 */ if ((fS!=fO)) goto L_008b5eb7;
L_008b61cf:; BB(0x008b61cf);
    /* 008b61cf: mov esi, dword ptr [ecx + 0x14] */ r_esi = R32((u32)(r_ecx+0x14u));
    /* 008b61d2: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 008b61d5: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008b61d7: mov esi, dword ptr [ecx + 0x14] */ r_esi = R32((u32)(r_ecx+0x14u));
    /* 008b61da: mov edi, dword ptr [ebp - 0x50] */ r_edi = R32((u32)(r_ebp+0xffffffb0u));
    /* 008b61dd: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 008b61e0: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 008b61e3: mov dword ptr [ecx + 0x178], esi */ W32((u32)(r_ecx+0x178u), r_esi);
    /* 008b61e9: dec dword ptr [ebx + 0x30] */ { u32 ad = (u32)(r_ebx+0x30u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b61ec: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 008b61ef: lea edi, [ebx + 0x20] */ r_edi = (u32)(r_ebx+0x20u);
    /* 008b61f2: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b61f3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b61f4: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b61f5: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 008b61f8: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 008b61fb: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b61fc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b61fe:; BB(0x008b61fe);
    /* 008b61fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b61ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b6200:; BB(0x008b6200);
    /* 008b6200: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b6201: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b6202: ret  */ FN_RET(0x008b5e3a); r_esp += 4; return;
L_008b6203:; BB(0x008b6203);
    /* 008b6203: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b6205: jmp 0x8b61fe */ goto L_008b61fe;
}

