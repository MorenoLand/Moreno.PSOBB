#include "protos.h"

void f_007e50f4(void) /* sub_7E50F4 */
{
    FN_ENTER(0x007e50f4);
    /* 007e50f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007e50f5: mov ebp, esp */ r_ebp = r_esp;
    /* 007e50f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007e50f9: push 0x8f6d88 */ { u32 v = 0x8f6d88u; r_esp -= 4; W32(r_esp, v); }
    /* 007e50fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007e5104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5105: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007e510c: sub esp, 0xc88 */ {  u32 a = r_esp; u32 b = 0xc88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007e5112: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007e5115: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007e5118: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007e511b: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007e511e: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007e5124: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007e5127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007e5129: jne 0x7e5144 */ if (!fZ) goto L_007e5144;
L_007e512b:; BB(0x007e512b);
    /* 007e512b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007e512e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007e5131: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007e5134: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007e5137: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007e513e: mov esp, ebp */ r_esp = r_ebp;
    /* 007e5140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007e5141: ret 0x18 */ FN_RET(0x007e50f4); r_esp += 28; return;
L_007e5144:; BB(0x007e5144);
    /* 007e5144: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007e5147: lea edx, [eax + 0x370] */ r_edx = (u32)(r_eax+0x370u);
    /* 007e514d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e514e: call 0x4e6658 */ r_esp -= 4; W32(r_esp, 0x7e5153u); f_004e6658();
    /* 007e5153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e5154: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007e5157: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007e515a: lea edi, [eax + 0x121d8] */ r_edi = (u32)(r_eax+0x121d8u);
    /* 007e5160: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 007e5163: mov ecx, 0x4dc */ r_ecx = 0x4dcu;
    /* 007e5168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e5169: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e516c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e516e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e516f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e5172: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e5174: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5179: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e517e: lea edx, [ebp - 0xc48] */ r_edx = (u32)(r_ebp+0xfffff3b8u);
    /* 007e5184: mov dword ptr [ebp - 0xc94], edx */ W32((u32)(r_ebp+0xfffff36cu), r_edx);
    /* 007e518a: lea ecx, [ebp - 0x868] */ r_ecx = (u32)(r_ebp+0xfffff798u);
    /* 007e5190: mov dword ptr [ebp - 0xc8c], ecx */ W32((u32)(r_ebp+0xfffff374u), r_ecx);
    /* 007e5196: lea ebx, [ebp - 0x868] */ r_ebx = (u32)(r_ebp+0xfffff798u);
    /* 007e519c: mov dword ptr [ebp - 0xc84], ebx */ W32((u32)(r_ebp+0xfffff37cu), r_ebx);
    /* 007e51a2: mov esi, 8 */ r_esi = 0x8u;
    /* 007e51a7: mov word ptr [ebp - 0xc50], si */ W16((u32)(r_ebp+0xfffff3b0u), (u16)r_esi);
    /* 007e51ae: lea edi, [ebp - 0x864] */ r_edi = (u32)(r_ebp+0xfffff79cu);
    /* 007e51b4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e51b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007e51b8: mov byte ptr [ebp - 0xc4e], al */ W8((u32)(r_ebp+0xfffff3b2u), (u8)r_eax);
    /* 007e51be: mov byte ptr [ebp - 0xc4d], al */ W8((u32)(r_ebp+0xfffff3b3u), (u8)r_eax);
    /* 007e51c4: mov dword ptr [ebp - 0xc4c], eax */ W32((u32)(r_ebp+0xfffff3b4u), r_eax);
    /* 007e51ca: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e51cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007e51cd: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e51d2u); f_00858736();
    /* 007e51d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007e51d9: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e51de: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e51e3: lea eax, [ebp - 0x82c] */ r_eax = (u32)(r_ebp+0xfffff7d4u);
    /* 007e51e9: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e51eb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e51ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e51ee: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e51f3u); f_00858736();
    /* 007e51f3: mov dword ptr [ebp - 0x868], 0 */ W32((u32)(r_ebp+0xfffff798u), 0x0u);
    /* 007e51fd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007e5204: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5209: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e520e: lea eax, [ebp - 0x7f4] */ r_eax = (u32)(r_ebp+0xfffff80cu);
    /* 007e5214: mov dword ptr [ebp - 0xc7c], eax */ W32((u32)(r_ebp+0xfffff384u), r_eax);
    /* 007e521a: lea edx, [ebp - 0x7f0] */ r_edx = (u32)(r_ebp+0xfffff810u);
    /* 007e5220: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e5222: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5224: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e5225: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e522au); f_00858736();
    /* 007e522a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007e5231: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5236: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e523b: lea eax, [ebp - 0x7b8] */ r_eax = (u32)(r_ebp+0xfffff848u);
    /* 007e5241: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e5243: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5246: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e524bu); f_00858736();
    /* 007e524b: mov dword ptr [ebp - 0x7f4], 0 */ W32((u32)(r_ebp+0xfffff80cu), 0x0u);
    /* 007e5255: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007e525c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007e525e:; BB(0x007e525e);
    /* 007e525e: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 007e5261: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007e5263: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 007e5266: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007e5268: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007e526a: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007e526c: mov byte ptr [ebp + edx - 0xc43], 0xff */ W8((u32)(r_ebp+r_edx+0xfffff3bdu), 0xffu);
    /* 007e5274: lea ecx, [ebp + edx - 0xc3c] */ r_ecx = (u32)(r_ebp+r_edx+0xfffff3c4u);
    /* 007e527b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007e527d: mov byte ptr [ebp + edx - 0xc44], al */ W8((u32)(r_ebp+r_edx+0xfffff3bcu), (u8)r_eax);
    /* 007e5284: mov dword ptr [ebp + edx - 0xc40], eax */ W32((u32)(r_ebp+r_edx+0xfffff3c0u), r_eax);
    /* 007e528b: mov byte ptr [ebp + edx - 0xc41], al */ W8((u32)(r_ebp+r_edx+0xfffff3bfu), (u8)r_eax);
    /* 007e5292: mov byte ptr [ebp + edx - 0xc42], al */ W8((u32)(r_ebp+r_edx+0xfffff3beu), (u8)r_eax);
    /* 007e5299: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x7e529eu); f_005d6a3c();
    /* 007e529e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007e52a1: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007e52a4: jl 0x7e525e */ if ((fS!=fO)) goto L_007e525e;
L_007e52a6:; BB(0x007e52a6);
    /* 007e52a6: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007e52ad: lea eax, [ebp - 0xc50] */ r_eax = (u32)(r_ebp+0xfffff3b0u);
    /* 007e52b3: push 0xc2c */ { u32 v = 0xc2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007e52b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e52ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e52bb: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7e52c0u); f_0086b688();
    /* 007e52c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007e52c3: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007e52c6: mov byte ptr [ebp - 0xc4e], 0x98 */ W8((u32)(r_ebp+0xfffff3b2u), 0x98u);
    /* 007e52cd: mov eax, 0xc2c */ r_eax = 0xc2cu;
    /* 007e52d2: mov dword ptr [ebp - 0xc4c], 3 */ W32((u32)(r_ebp+0xfffff3b4u), 0x3u);
    /* 007e52dc: mov word ptr [ebp - 0xc50], ax */ W16((u32)(r_ebp+0xfffff3b0u), (u16)r_eax);
    /* 007e52e3: mov ecx, 0x4dc */ r_ecx = 0x4dcu;
    /* 007e52e8: lea edi, [ebp - 0xc48] */ r_edi = (u32)(r_ebp+0xfffff3b8u);
    /* 007e52ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e52ef: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e52f2: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e52f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e52f5: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e52f8: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e52fa: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 007e52fd: lea edi, [ebp - 0x76c] */ r_edi = (u32)(r_ebp+0xfffff894u);
    /* 007e5303: mov ecx, 0x15c */ r_ecx = 0x15cu;
    /* 007e5308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e5309: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e530c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e530e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e530f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e5312: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e5314: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 007e5317: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 007e5319: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 007e531c: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 007e531f: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 007e5322: mov esi, dword ptr [edi + 0x10] */ r_esi = R32((u32)(r_edi+0x10u));
    /* 007e5325: mov dword ptr [ebp - 0x610], eax */ W32((u32)(r_ebp+0xfffff9f0u), r_eax);
    /* 007e532b: mov dword ptr [ebp - 0x60c], edx */ W32((u32)(r_ebp+0xfffff9f4u), r_edx);
    /* 007e5331: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 007e5334: mov dword ptr [ebp - 0x608], ecx */ W32((u32)(r_ebp+0xfffff9f8u), r_ecx);
    /* 007e533a: mov dword ptr [ebp - 0x604], ebx */ W32((u32)(r_ebp+0xfffff9fcu), r_ebx);
    /* 007e5340: mov dword ptr [ebp - 0x600], esi */ W32((u32)(r_ebp+0xfffffa00u), r_esi);
    /* 007e5346: mov dword ptr [ebp - 0x5fc], edx */ W32((u32)(r_ebp+0xfffffa04u), r_edx);
    /* 007e534c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007e534f: mov dword ptr [edx + 0x1e070], eax */ W32((u32)(r_edx+0x1e070u), r_eax);
    /* 007e5355: mov eax, dword ptr [edx + 0x1e06c] */ r_eax = R32((u32)(r_edx+0x1e06cu));
    /* 007e535b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007e535d: jne 0x7e5369 */ if (!fZ) goto L_007e5369;
L_007e535f:; BB(0x007e535f);
    /* 007e535f: mov dword ptr [ebp - 0x610], 2 */ W32((u32)(r_ebp+0xfffff9f0u), 0x2u);
L_007e5369:; BB(0x007e5369);
    /* 007e5369: lea eax, [ebp - 0x5f8] */ r_eax = (u32)(r_ebp+0xfffffa08u);
    /* 007e536f: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 007e5374: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007e5377: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5378: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7e537du); f_00857dec();
    /* 007e537d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007e5380: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 007e5383: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007e5386: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007e5388: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007e538a: jbe 0x7e53a2 */ if ((fC||fZ)) goto L_007e53a2;
L_007e538c:; BB(0x007e538c);
    /* 007e538c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 007e538f: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 007e5393: mov dword ptr [ebp + ecx*4 - 0x4a0], eax */ W32((u32)(r_ebp+r_ecx*4+0xfffffb60u), r_eax);
    /* 007e539a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007e539d: cmp ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007e53a0: jb 0x7e538c */ if (fC) goto L_007e538c;
L_007e53a2:; BB(0x007e53a2);
    /* 007e53a2: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 007e53a5: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 007e53a8: lea esi, [ebp - 0x424] */ r_esi = (u32)(r_ebp+0xfffffbdcu);
    /* 007e53ae: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 007e53b3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007e53b6: mov dword ptr [ebp - 0x428], edx */ W32((u32)(r_ebp+0xfffffbd8u), r_edx);
    /* 007e53bc: lea ebx, [ecx + 8] */ r_ebx = (u32)(r_ecx+0x8u);
    /* 007e53bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007e53c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007e53c1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7e53c6u); f_00857dec();
    /* 007e53c6: lea eax, [ebp - 0x424] */ r_eax = (u32)(r_ebp+0xfffffbdcu);
    /* 007e53cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e53cd: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7e53d2u); f_00858009();
    /* 007e53d2: lea edx, [ebp - 0xc48] */ r_edx = (u32)(r_ebp+0xfffff3b8u);
    /* 007e53d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e53d9: lea eax, [eax + eax + 0x831] */ r_eax = (u32)(r_eax+r_eax+0x831u);
    /* 007e53e0: and eax, 0xfffc */ {  u32 a = r_eax; u32 b = 0xfffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007e53e5: mov word ptr [ebp - 0xc50], ax */ W16((u32)(r_ebp+0xfffff3b0u), (u16)r_eax);
    /* 007e53ec: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7e53f1u); f_0061cdb0();
    /* 007e53f1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007e53f4: movzx eax, word ptr [ebp - 0xc50] */ r_eax = (u32)R16((u32)(r_ebp+0xfffff3b0u));
    /* 007e53fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007e53fe: lea edx, [ebp - 0xc50] */ r_edx = (u32)(r_ebp+0xfffff3b0u);
    /* 007e5404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5405: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e5406: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7e540bu); f_0077fd10();
    /* 007e540b: lea eax, [ebp - 0xc50] */ r_eax = (u32)(r_ebp+0xfffff3b0u);
    /* 007e5411: mov dword ptr [ebp - 0xc74], eax */ W32((u32)(r_ebp+0xfffff38cu), r_eax);
    /* 007e5417: lea eax, [ebp - 0xc48] */ r_eax = (u32)(r_ebp+0xfffff3b8u);
    /* 007e541d: mov dword ptr [ebp - 0xc6c], eax */ W32((u32)(r_ebp+0xfffff394u), r_eax);
    /* 007e5423: lea eax, [ebp - 0x868] */ r_eax = (u32)(r_ebp+0xfffff798u);
    /* 007e5429: mov dword ptr [ebp - 0xc64], eax */ W32((u32)(r_ebp+0xfffff39cu), r_eax);
    /* 007e542f: lea eax, [ebp - 0x7f4] */ r_eax = (u32)(r_ebp+0xfffff80cu);
    /* 007e5435: mov dword ptr [ebp - 0xc5c], eax */ W32((u32)(r_ebp+0xfffff3a4u), r_eax);
    /* 007e543b: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 007e5442: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5447: lea eax, [ebp - 0x7b8] */ r_eax = (u32)(r_ebp+0xfffff848u);
    /* 007e544d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e544f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5451: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5452: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e5457u); f_008586d6();
    /* 007e5457: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 007e545e: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5463: lea eax, [ebp - 0x7f0] */ r_eax = (u32)(r_ebp+0xfffff810u);
    /* 007e5469: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e546b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e546d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e546e: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e5473u); f_008586d6();
    /* 007e5473: lea eax, [ebp - 0x868] */ r_eax = (u32)(r_ebp+0xfffff798u);
    /* 007e5479: mov dword ptr [ebp - 0xc54], eax */ W32((u32)(r_ebp+0xfffff3acu), r_eax);
    /* 007e547f: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 007e5486: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e548b: lea eax, [ebp - 0x82c] */ r_eax = (u32)(r_ebp+0xfffff7d4u);
    /* 007e5491: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e5493: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5496: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e549bu); f_008586d6();
    /* 007e549b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007e54a2: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e54a7: lea eax, [ebp - 0x864] */ r_eax = (u32)(r_ebp+0xfffff79cu);
    /* 007e54ad: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e54af: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e54b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e54b2: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e54b7u); f_008586d6();
    /* 007e54b7: jmp 0x7e512b */ goto L_007e512b;
}

void f_007e511c(void)
{
    FN_ENTER(0x007e511c);
    /* 007e511c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007e511d: in al, 0x8b */ UNSUP(0x007e511d, "in al, 0x8b");
    /* 007e511f: xor dword ptr [eax], 0x89000121 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x89000121u; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 007e5125: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007e5126: in al, dx */ UNSUP(0x007e5126, "in al, dx");
    /* 007e5127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007e5129: jne 0x7e5144 */ if (!fZ) goto L_007e5144;
L_007e512b:; BB(0x007e512b);
    /* 007e512b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007e512e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007e5131: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007e5134: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007e5137: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007e513e: mov esp, ebp */ r_esp = r_ebp;
    /* 007e5140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007e5141: ret 0x18 */ FN_RET(0x007e511c); r_esp += 28; return;
L_007e5144:; BB(0x007e5144);
    /* 007e5144: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007e5147: lea edx, [eax + 0x370] */ r_edx = (u32)(r_eax+0x370u);
    /* 007e514d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e514e: call 0x4e6658 */ r_esp -= 4; W32(r_esp, 0x7e5153u); f_004e6658();
    /* 007e5153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e5154: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007e5157: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007e515a: lea edi, [eax + 0x121d8] */ r_edi = (u32)(r_eax+0x121d8u);
    /* 007e5160: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 007e5163: mov ecx, 0x4dc */ r_ecx = 0x4dcu;
    /* 007e5168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e5169: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e516c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e516e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e516f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e5172: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e5174: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5179: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e517e: lea edx, [ebp - 0xc48] */ r_edx = (u32)(r_ebp+0xfffff3b8u);
    /* 007e5184: mov dword ptr [ebp - 0xc94], edx */ W32((u32)(r_ebp+0xfffff36cu), r_edx);
    /* 007e518a: lea ecx, [ebp - 0x868] */ r_ecx = (u32)(r_ebp+0xfffff798u);
    /* 007e5190: mov dword ptr [ebp - 0xc8c], ecx */ W32((u32)(r_ebp+0xfffff374u), r_ecx);
    /* 007e5196: lea ebx, [ebp - 0x868] */ r_ebx = (u32)(r_ebp+0xfffff798u);
    /* 007e519c: mov dword ptr [ebp - 0xc84], ebx */ W32((u32)(r_ebp+0xfffff37cu), r_ebx);
    /* 007e51a2: mov esi, 8 */ r_esi = 0x8u;
    /* 007e51a7: mov word ptr [ebp - 0xc50], si */ W16((u32)(r_ebp+0xfffff3b0u), (u16)r_esi);
    /* 007e51ae: lea edi, [ebp - 0x864] */ r_edi = (u32)(r_ebp+0xfffff79cu);
    /* 007e51b4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e51b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007e51b8: mov byte ptr [ebp - 0xc4e], al */ W8((u32)(r_ebp+0xfffff3b2u), (u8)r_eax);
    /* 007e51be: mov byte ptr [ebp - 0xc4d], al */ W8((u32)(r_ebp+0xfffff3b3u), (u8)r_eax);
    /* 007e51c4: mov dword ptr [ebp - 0xc4c], eax */ W32((u32)(r_ebp+0xfffff3b4u), r_eax);
    /* 007e51ca: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e51cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007e51cd: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e51d2u); f_00858736();
    /* 007e51d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007e51d9: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e51de: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e51e3: lea eax, [ebp - 0x82c] */ r_eax = (u32)(r_ebp+0xfffff7d4u);
    /* 007e51e9: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e51eb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e51ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e51ee: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e51f3u); f_00858736();
    /* 007e51f3: mov dword ptr [ebp - 0x868], 0 */ W32((u32)(r_ebp+0xfffff798u), 0x0u);
    /* 007e51fd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007e5204: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5209: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e520e: lea eax, [ebp - 0x7f4] */ r_eax = (u32)(r_ebp+0xfffff80cu);
    /* 007e5214: mov dword ptr [ebp - 0xc7c], eax */ W32((u32)(r_ebp+0xfffff384u), r_eax);
    /* 007e521a: lea edx, [ebp - 0x7f0] */ r_edx = (u32)(r_ebp+0xfffff810u);
    /* 007e5220: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e5222: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5224: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e5225: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e522au); f_00858736();
    /* 007e522a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007e5231: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5236: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e523b: lea eax, [ebp - 0x7b8] */ r_eax = (u32)(r_ebp+0xfffff848u);
    /* 007e5241: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e5243: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5246: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e524bu); f_00858736();
    /* 007e524b: mov dword ptr [ebp - 0x7f4], 0 */ W32((u32)(r_ebp+0xfffff80cu), 0x0u);
    /* 007e5255: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007e525c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007e525e:; BB(0x007e525e);
    /* 007e525e: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 007e5261: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007e5263: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 007e5266: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007e5268: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007e526a: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007e526c: mov byte ptr [ebp + edx - 0xc43], 0xff */ W8((u32)(r_ebp+r_edx+0xfffff3bdu), 0xffu);
    /* 007e5274: lea ecx, [ebp + edx - 0xc3c] */ r_ecx = (u32)(r_ebp+r_edx+0xfffff3c4u);
    /* 007e527b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007e527d: mov byte ptr [ebp + edx - 0xc44], al */ W8((u32)(r_ebp+r_edx+0xfffff3bcu), (u8)r_eax);
    /* 007e5284: mov dword ptr [ebp + edx - 0xc40], eax */ W32((u32)(r_ebp+r_edx+0xfffff3c0u), r_eax);
    /* 007e528b: mov byte ptr [ebp + edx - 0xc41], al */ W8((u32)(r_ebp+r_edx+0xfffff3bfu), (u8)r_eax);
    /* 007e5292: mov byte ptr [ebp + edx - 0xc42], al */ W8((u32)(r_ebp+r_edx+0xfffff3beu), (u8)r_eax);
    /* 007e5299: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x7e529eu); f_005d6a3c();
    /* 007e529e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007e52a1: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007e52a4: jl 0x7e525e */ if ((fS!=fO)) goto L_007e525e;
L_007e52a6:; BB(0x007e52a6);
    /* 007e52a6: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007e52ad: lea eax, [ebp - 0xc50] */ r_eax = (u32)(r_ebp+0xfffff3b0u);
    /* 007e52b3: push 0xc2c */ { u32 v = 0xc2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007e52b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e52ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e52bb: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7e52c0u); f_0086b688();
    /* 007e52c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007e52c3: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007e52c6: mov byte ptr [ebp - 0xc4e], 0x98 */ W8((u32)(r_ebp+0xfffff3b2u), 0x98u);
    /* 007e52cd: mov eax, 0xc2c */ r_eax = 0xc2cu;
    /* 007e52d2: mov dword ptr [ebp - 0xc4c], 3 */ W32((u32)(r_ebp+0xfffff3b4u), 0x3u);
    /* 007e52dc: mov word ptr [ebp - 0xc50], ax */ W16((u32)(r_ebp+0xfffff3b0u), (u16)r_eax);
    /* 007e52e3: mov ecx, 0x4dc */ r_ecx = 0x4dcu;
    /* 007e52e8: lea edi, [ebp - 0xc48] */ r_edi = (u32)(r_ebp+0xfffff3b8u);
    /* 007e52ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e52ef: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e52f2: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e52f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e52f5: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e52f8: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e52fa: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 007e52fd: lea edi, [ebp - 0x76c] */ r_edi = (u32)(r_ebp+0xfffff894u);
    /* 007e5303: mov ecx, 0x15c */ r_ecx = 0x15cu;
    /* 007e5308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e5309: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e530c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e530e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e530f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e5312: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e5314: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 007e5317: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 007e5319: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 007e531c: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 007e531f: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 007e5322: mov esi, dword ptr [edi + 0x10] */ r_esi = R32((u32)(r_edi+0x10u));
    /* 007e5325: mov dword ptr [ebp - 0x610], eax */ W32((u32)(r_ebp+0xfffff9f0u), r_eax);
    /* 007e532b: mov dword ptr [ebp - 0x60c], edx */ W32((u32)(r_ebp+0xfffff9f4u), r_edx);
    /* 007e5331: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 007e5334: mov dword ptr [ebp - 0x608], ecx */ W32((u32)(r_ebp+0xfffff9f8u), r_ecx);
    /* 007e533a: mov dword ptr [ebp - 0x604], ebx */ W32((u32)(r_ebp+0xfffff9fcu), r_ebx);
    /* 007e5340: mov dword ptr [ebp - 0x600], esi */ W32((u32)(r_ebp+0xfffffa00u), r_esi);
    /* 007e5346: mov dword ptr [ebp - 0x5fc], edx */ W32((u32)(r_ebp+0xfffffa04u), r_edx);
    /* 007e534c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007e534f: mov dword ptr [edx + 0x1e070], eax */ W32((u32)(r_edx+0x1e070u), r_eax);
    /* 007e5355: mov eax, dword ptr [edx + 0x1e06c] */ r_eax = R32((u32)(r_edx+0x1e06cu));
    /* 007e535b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007e535d: jne 0x7e5369 */ if (!fZ) goto L_007e5369;
L_007e535f:; BB(0x007e535f);
    /* 007e535f: mov dword ptr [ebp - 0x610], 2 */ W32((u32)(r_ebp+0xfffff9f0u), 0x2u);
L_007e5369:; BB(0x007e5369);
    /* 007e5369: lea eax, [ebp - 0x5f8] */ r_eax = (u32)(r_ebp+0xfffffa08u);
    /* 007e536f: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 007e5374: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007e5377: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5378: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7e537du); f_00857dec();
    /* 007e537d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007e5380: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 007e5383: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007e5386: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007e5388: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007e538a: jbe 0x7e53a2 */ if ((fC||fZ)) goto L_007e53a2;
L_007e538c:; BB(0x007e538c);
    /* 007e538c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 007e538f: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 007e5393: mov dword ptr [ebp + ecx*4 - 0x4a0], eax */ W32((u32)(r_ebp+r_ecx*4+0xfffffb60u), r_eax);
    /* 007e539a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007e539d: cmp ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007e53a0: jb 0x7e538c */ if (fC) goto L_007e538c;
L_007e53a2:; BB(0x007e53a2);
    /* 007e53a2: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 007e53a5: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 007e53a8: lea esi, [ebp - 0x424] */ r_esi = (u32)(r_ebp+0xfffffbdcu);
    /* 007e53ae: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 007e53b3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007e53b6: mov dword ptr [ebp - 0x428], edx */ W32((u32)(r_ebp+0xfffffbd8u), r_edx);
    /* 007e53bc: lea ebx, [ecx + 8] */ r_ebx = (u32)(r_ecx+0x8u);
    /* 007e53bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007e53c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007e53c1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7e53c6u); f_00857dec();
    /* 007e53c6: lea eax, [ebp - 0x424] */ r_eax = (u32)(r_ebp+0xfffffbdcu);
    /* 007e53cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e53cd: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7e53d2u); f_00858009();
    /* 007e53d2: lea edx, [ebp - 0xc48] */ r_edx = (u32)(r_ebp+0xfffff3b8u);
    /* 007e53d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e53d9: lea eax, [eax + eax + 0x831] */ r_eax = (u32)(r_eax+r_eax+0x831u);
    /* 007e53e0: and eax, 0xfffc */ {  u32 a = r_eax; u32 b = 0xfffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007e53e5: mov word ptr [ebp - 0xc50], ax */ W16((u32)(r_ebp+0xfffff3b0u), (u16)r_eax);
    /* 007e53ec: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7e53f1u); f_0061cdb0();
    /* 007e53f1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007e53f4: movzx eax, word ptr [ebp - 0xc50] */ r_eax = (u32)R16((u32)(r_ebp+0xfffff3b0u));
    /* 007e53fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007e53fe: lea edx, [ebp - 0xc50] */ r_edx = (u32)(r_ebp+0xfffff3b0u);
    /* 007e5404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5405: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e5406: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7e540bu); f_0077fd10();
    /* 007e540b: lea eax, [ebp - 0xc50] */ r_eax = (u32)(r_ebp+0xfffff3b0u);
    /* 007e5411: mov dword ptr [ebp - 0xc74], eax */ W32((u32)(r_ebp+0xfffff38cu), r_eax);
    /* 007e5417: lea eax, [ebp - 0xc48] */ r_eax = (u32)(r_ebp+0xfffff3b8u);
    /* 007e541d: mov dword ptr [ebp - 0xc6c], eax */ W32((u32)(r_ebp+0xfffff394u), r_eax);
    /* 007e5423: lea eax, [ebp - 0x868] */ r_eax = (u32)(r_ebp+0xfffff798u);
    /* 007e5429: mov dword ptr [ebp - 0xc64], eax */ W32((u32)(r_ebp+0xfffff39cu), r_eax);
    /* 007e542f: lea eax, [ebp - 0x7f4] */ r_eax = (u32)(r_ebp+0xfffff80cu);
    /* 007e5435: mov dword ptr [ebp - 0xc5c], eax */ W32((u32)(r_ebp+0xfffff3a4u), r_eax);
    /* 007e543b: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 007e5442: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5447: lea eax, [ebp - 0x7b8] */ r_eax = (u32)(r_ebp+0xfffff848u);
    /* 007e544d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e544f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5451: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5452: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e5457u); f_008586d6();
    /* 007e5457: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 007e545e: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5463: lea eax, [ebp - 0x7f0] */ r_eax = (u32)(r_ebp+0xfffff810u);
    /* 007e5469: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e546b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e546d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e546e: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e5473u); f_008586d6();
    /* 007e5473: lea eax, [ebp - 0x868] */ r_eax = (u32)(r_ebp+0xfffff798u);
    /* 007e5479: mov dword ptr [ebp - 0xc54], eax */ W32((u32)(r_ebp+0xfffff3acu), r_eax);
    /* 007e547f: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 007e5486: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e548b: lea eax, [ebp - 0x82c] */ r_eax = (u32)(r_ebp+0xfffff7d4u);
    /* 007e5491: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e5493: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5496: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e549bu); f_008586d6();
    /* 007e549b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007e54a2: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e54a7: lea eax, [ebp - 0x864] */ r_eax = (u32)(r_ebp+0xfffff79cu);
    /* 007e54ad: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e54af: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e54b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e54b2: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e54b7u); f_008586d6();
    /* 007e54b7: jmp 0x7e512b */ goto L_007e512b;
}

void f_007e54bc(void) /* sub_7E54BC */
{
    FN_ENTER(0x007e54bc);
    /* 007e54bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007e54bd: mov ebp, esp */ r_ebp = r_esp;
    /* 007e54bf: sub esp, 0x31c */ {  u32 a = r_esp; u32 b = 0x31cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007e54c5: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 007e54c8: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 007e54cb: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 007e54ce: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 007e54d1: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007e54d2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007e54d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e54d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e54d8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007e54da: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7e54e0u); call_ind(t); }
    /* 007e54e0: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007e54e1: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007e54e2: jmp 0x7e8703 */ goto L_007e8703;
L_007e8703:; BB(0x007e8703);
    /* 007e8703: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007e8704: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007e8707: lea ebx, [ebp - 0x31c] */ r_ebx = (u32)(r_ebp+0xfffffce4u);
    /* 007e870d: movzx ecx, word ptr [eax + 0xa] */ r_ecx = (u32)R16((u32)(r_eax+0xau));
    /* 007e8711: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 007e8715: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e8716: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e8717: push 0x97e8a8 */ { u32 v = 0x97e8a8u; r_esp -= 4; W32(r_esp, v); }
    /* 007e871c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007e871d: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x7e8722u); f_00858bf5();
    /* 007e8722: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007e8725: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007e8728: lea edi, [ebp - 0x29c] */ r_edi = (u32)(r_ebp+0xfffffd64u);
    /* 007e872e: mov ecx, 0x28c */ r_ecx = 0x28cu;
    /* 007e8733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e8734: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e8737: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e8739: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e873a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e873d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e873f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007e8742: mov byte ptr [ebp - 0x29a], 0xd0 */ W8((u32)(r_ebp+0xfffffd66u), 0xd0u);
    /* 007e8749: mov eax, 0x28c */ r_eax = 0x28cu;
    /* 007e874e: mov dword ptr [ebp - 0x298], 0 */ W32((u32)(r_ebp+0xfffffd68u), 0x0u);
    /* 007e8758: mov word ptr [ebp - 0x29c], ax */ W16((u32)(r_ebp+0xfffffd64u), (u16)r_eax);
    /* 007e875f: lea edx, [ebp - 0x29c] */ r_edx = (u32)(r_ebp+0xfffffd64u);
    /* 007e8765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e8766: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7e876bu); f_007c4fb4();
    /* 007e876b: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007e876c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e876e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e8770: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e8772: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007e8774: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7e877au); call_ind(t); }
    /* 007e877a: jmp 0x7e879a */ goto L_007e879a;
L_007e879a:; BB(0x007e879a);
    /* 007e879a: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007e879b: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007e879e: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007e87a1: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 007e87a4: mov esp, ebp */ r_esp = r_ebp;
    /* 007e87a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007e87a7: ret 4 */ FN_RET(0x007e54bc); r_esp += 8; return;
}

