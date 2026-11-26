#include "protos.h"

void f_006c7118(void)
{
    FN_ENTER(0x006c7118);
    goto L_006c7118;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7118:; BB(0x006c7118);
    /* 006c7118: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c711e: mov dword ptr [ebp - 0x214], edx */ W32((u32)(r_ebp+0xfffffdecu), r_edx);
    /* 006c7124: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7126: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7128: lea eax, [edx + 0x3e0] */ r_eax = (u32)(r_edx+0x3e0u);
    /* 006c712e: mov dword ptr [ebp - 0x20c], eax */ W32((u32)(r_ebp+0xfffffdf4u), r_eax);
    /* 006c7134: add edx, 0x3e4 */ {  u32 a = r_edx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c713a: mov dword ptr [ebp - 0x204], eax */ W32((u32)(r_ebp+0xfffffdfcu), r_eax);
    /* 006c7140: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7141: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c7146u); f_00858736();
    /* 006c7146: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006c714d: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7152: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7157: mov eax, dword ptr [ebp - 0x204] */ r_eax = R32((u32)(r_ebp+0xfffffdfcu));
    /* 006c715d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c715f: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c7162: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7165: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c716au); f_00858736();
    /* 006c716a: mov eax, dword ptr [ebp - 0x204] */ r_eax = R32((u32)(r_ebp+0xfffffdfcu));
    /* 006c7170: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c7176: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006c717d: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7182: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7187: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 006c718d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c718f: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 006c7192: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c7195: mov dword ptr [ebp - 0x1fc], eax */ W32((u32)(r_ebp+0xfffffe04u), r_eax);
    /* 006c719b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c719d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c719e: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c71a3u); f_00858736();
    /* 006c71a3: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006c71aa: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c71af: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c71b4: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 006c71ba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c71bc: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c71bf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c71c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c71c2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c71c7u); f_00858736();
    /* 006c71c7: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 006c71cd: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c71d3: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006c71da: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c71dc:; BB(0x006c71dc);
    /* 006c71dc: mov edi, dword ptr [ebp - 0x214] */ r_edi = R32((u32)(r_ebp+0xfffffdecu));
    /* 006c71e2: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006c71e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c71e7: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006c71ea: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c71ec: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c71ee: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c71f0: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 006c71f5: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 006c71f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c71fb: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 006c71ff: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 006c7203: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 006c7207: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 006c720b: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c7210u); f_005d6a3c();
    /* 006c7210: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7213: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c7216: jl 0x6c71dc */ if ((fS!=fO)) goto L_006c71dc;
L_006c7218:; BB(0x006c7218);
    /* 006c7218: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c721e: mov dword ptr [ebp - 0x1ac], 0 */ W32((u32)(r_ebp+0xfffffe54u), 0x0u);
    /* 006c7228: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c722d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c7234: mov dword ptr [ebp - 0x1a4], 0 */ W32((u32)(r_ebp+0xfffffe5cu), 0x0u);
    /* 006c723e: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7243: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c7248u); f_008581c5();
    /* 006c7248: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7249: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c724f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7251: je 0x6c733d */ if (fZ) goto L_006c733d;
L_006c7257:; BB(0x006c7257);
    /* 006c7257: mov dword ptr [ebp - 0x1a4], 1 */ W32((u32)(r_ebp+0xfffffe5cu), 0x1u);
    /* 006c7261: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 006c7268: mov ebx, dword ptr [ebp - 0x1a0] */ r_ebx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c726e: add ebx, 0x224 */ {  u32 a = r_ebx; u32 b = 0x224u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7274: mov esi, 0xc8 */ r_esi = 0xc8u;
L_006c7279:; BB(0x006c7279);
    /* 006c7279: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c727b: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x6c7280u); f_006c8960();
    /* 006c7280: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7283: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006c7286: jne 0x6c7279 */ if (!fZ) goto L_006c7279;
L_006c7288:; BB(0x006c7288);
    /* 006c7288: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c728e: mov dword ptr [ebp - 0x1a4], 0 */ W32((u32)(r_ebp+0xfffffe5cu), 0x0u);
L_006c7298:; BB(0x006c7298);
    /* 006c7298: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c729d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c72a4: mov dword ptr [ebp - 0x19c], 0 */ W32((u32)(r_ebp+0xfffffe64u), 0x0u);
    /* 006c72ae: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c72b3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c72b8u); f_008581c5();
    /* 006c72b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c72b9: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c72bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c72c1: je 0x6c7339 */ if (fZ) goto L_006c7339;
L_006c72c3:; BB(0x006c72c3);
    /* 006c72c3: mov dword ptr [ebp - 0x19c], 1 */ W32((u32)(r_ebp+0xfffffe64u), 0x1u);
    /* 006c72cd: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c72d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c72d5: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c72db: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c72e1: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c72e7: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c72ed: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c72f3: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c72f9: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c72ff: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c7305: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c730c: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 006c7312: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c7318:; BB(0x006c7318);
    /* 006c7318: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c731d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c7324: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7329: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c732eu); f_008581c5();
    /* 006c732e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c732f: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c7334: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c7339:; BB(0x006c7339);
    /* 006c7339: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c733b: jmp 0x6c7318 */ goto L_006c7318;
L_006c733d:; BB(0x006c733d);
    /* 006c733d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c733f: jmp 0x6c7298 */ goto L_006c7298;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c7118); r_esp += 4; return;
}

void f_006c754a(void)
{
    FN_ENTER(0x006c754a);
    goto L_006c754a;
L_006c66dc:; BB(0x006c66dc);
    /* 006c66dc: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c66e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c66e8: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 006c66f2: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c66f7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c66fcu); f_008581c5();
    /* 006c66fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c66fd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6705: je 0x6c7543 */ if (fZ) goto L_006c7543;
L_006c670b:; BB(0x006c670b);
    /* 006c670b: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
    /* 006c6715: mov dword ptr [ebp - 4], 0x22 */ W32((u32)(r_ebp+0xfffffffcu), 0x22u);
    /* 006c671c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6722: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c6727u); f_006c454c();
    /* 006c6727: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c672d: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_006c6737:; BB(0x006c6737);
    /* 006c6737: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c673c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6743: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
    /* 006c674d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6752: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6757u); f_008581c5();
    /* 006c6757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6758: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c675e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6760: je 0x6c753c */ if (fZ) goto L_006c753c;
L_006c6766:; BB(0x006c6766);
    /* 006c6766: mov dword ptr [ebp - 0x148], 1 */ W32((u32)(r_ebp+0xfffffeb8u), 0x1u);
    /* 006c6770: mov dword ptr [ebp - 4], 0x23 */ W32((u32)(r_ebp+0xfffffffcu), 0x23u);
    /* 006c6777: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c677d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c6782u); f_006c4674();
    /* 006c6782: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6788: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
L_006c6792:; BB(0x006c6792);
    /* 006c6792: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c6797: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c679e: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c753c:; BB(0x006c753c);
    /* 006c753c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c753e: jmp 0x6c6792 */ goto L_006c6792;
L_006c7543:; BB(0x006c7543);
    /* 006c7543: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7545: jmp 0x6c6737 */ goto L_006c6737;
L_006c754a:; BB(0x006c754a);
    /* 006c754a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c754c: jmp 0x6c66dc */ goto L_006c66dc;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c754a); r_esp += 4; return;
}

void f_006c756d(void)
{
    FN_ENTER(0x006c756d);
    goto L_006c756d;
L_006c6807:; BB(0x006c6807);
    /* 006c6807: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c680c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6813: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
    /* 006c681d: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6822: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6827u); f_008581c5();
    /* 006c6827: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6828: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c682e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6830: je 0x6c7566 */ if (fZ) goto L_006c7566;
L_006c6836:; BB(0x006c6836);
    /* 006c6836: mov dword ptr [ebp - 0x160], 1 */ W32((u32)(r_ebp+0xfffffea0u), 0x1u);
    /* 006c6840: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6846: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6848: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c684e: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c6854: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c685a: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c6860: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6866: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c686c: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6872: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6878: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c687f: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 006c6885: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c688b:; BB(0x006c688b);
    /* 006c688b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c6890: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6897: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c689c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c68a1u); f_008581c5();
    /* 006c68a1: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
    /* 006c68ab: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c68b0: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c68b5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c68bau); f_008581c5();
    /* 006c68ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c68bd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c68c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c68c5: je 0x6c755f */ if (fZ) goto L_006c755f;
L_006c68cb:; BB(0x006c68cb);
    /* 006c68cb: mov dword ptr [ebp - 0x15c], 1 */ W32((u32)(r_ebp+0xfffffea4u), 0x1u);
    /* 006c68d5: mov dword ptr [ebp - 4], 0x1e */ W32((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 006c68dc: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c68e2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c68e7u); f_006c454c();
    /* 006c68e7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c68ed: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_006c68f7:; BB(0x006c68f7);
    /* 006c68f7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c68fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6903: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
    /* 006c690d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6912: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6917u); f_008581c5();
    /* 006c6917: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6918: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c691e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6920: je 0x6c7558 */ if (fZ) goto L_006c7558;
L_006c6926:; BB(0x006c6926);
    /* 006c6926: mov dword ptr [ebp - 0x158], 1 */ W32((u32)(r_ebp+0xfffffea8u), 0x1u);
    /* 006c6930: mov dword ptr [ebp - 4], 0x1f */ W32((u32)(r_ebp+0xfffffffcu), 0x1fu);
    /* 006c6937: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c693d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c6942u); f_006c4674();
    /* 006c6942: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6948: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_006c6952:; BB(0x006c6952);
    /* 006c6952: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c6957: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c695e: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7558:; BB(0x006c7558);
    /* 006c7558: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c755a: jmp 0x6c6952 */ goto L_006c6952;
L_006c755f:; BB(0x006c755f);
    /* 006c755f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7561: jmp 0x6c68f7 */ goto L_006c68f7;
L_006c7566:; BB(0x006c7566);
    /* 006c7566: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7568: jmp 0x6c688b */ goto L_006c688b;
L_006c756d:; BB(0x006c756d);
    /* 006c756d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c756f: jmp 0x6c6807 */ goto L_006c6807;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c756d); r_esp += 4; return;
}

void f_006c7754(void) /* sub_6C7754 */
{
    FN_ENTER(0x006c7754);
    /* 006c7754: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c7757: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c775c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c775e: je 0x6c77f6 */ if (fZ) goto L_006c77f6;
L_006c7764:; BB(0x006c7764);
    /* 006c7764: imul eax, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c776e: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c7774: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006c7778: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006c777b: lea edx, [eax + edx + 4] */ r_edx = (u32)(r_eax+r_edx+0x4u);
    /* 006c777f: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c7782: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7784: mov ebx, eax */ r_ebx = r_eax;
    /* 006c7786: mov esi, edx */ r_esi = r_edx;
L_006c7788:; BB(0x006c7788);
    /* 006c7788: mov byte ptr [esi + 1], 0xff */ W8((u32)(r_esi+0x1u), 0xffu);
    /* 006c778c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006c778e: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 006c7790: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 006c7793: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 006c7796: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c779bu); f_005d6a3c();
    /* 006c779b: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c779e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c77a1: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c77a4: jl 0x6c7788 */ if ((fS!=fO)) goto L_006c7788;
L_006c77a6:; BB(0x006c77a6);
    /* 006c77a6: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006c77aa: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006c77ad: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c77b2: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 006c77b5: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c77bb: call 0x6ab1b4 */ r_esp -= 4; W32(r_esp, 0x6c77c0u); f_006ab1b4();
    /* 006c77c0: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c77c5: push dword ptr [eax + 0x364] */ { u32 v = R32((u32)(r_eax+0x364u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c77cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c77cc: movsx edx, byte ptr [eax + 0x3a1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x3a1u));
    /* 006c77d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c77d4: call 0x6aae88 */ r_esp -= 4; W32(r_esp, 0x6c77d9u); f_006aae88();
    /* 006c77d9: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c77df: call 0x6aafe0 */ r_esp -= 4; W32(r_esp, 0x6c77e4u); f_006aafe0();
    /* 006c77e4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c77e7: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c77ec: mov dword ptr [eax + 0x36c], 0 */ W32((u32)(r_eax+0x36cu), 0x0u);
L_006c77f6:; BB(0x006c77f6);
    /* 006c77f6: mov ecx, dword ptr [0xa95df8] */ r_ecx = R32((u32)(0xa95df8u));
    /* 006c77fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c77fe: je 0x6c7825 */ if (fZ) goto L_006c7825;
L_006c7800:; BB(0x006c7800);
    /* 006c7800: add ecx, 0x21c */ {  u32 a = r_ecx; u32 b = 0x21cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c7806: call 0x6ca370 */ r_esp -= 4; W32(r_esp, 0x6c780bu); f_006ca370();
    /* 006c780b: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c7810: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7815: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7817: add eax, 0x27dc */ {  u32 a = r_eax; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c781c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c781d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c7822u); f_0086b688();
    /* 006c7822: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006c7825:; BB(0x006c7825);
    /* 006c7825: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c7828: ret  */ FN_RET(0x006c7754); r_esp += 4; return;
}

void f_006c782c(void) /* sub_6C782C */
{
    FN_ENTER(0x006c782c);
    /* 006c782c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c782f: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7834: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7836: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c783c: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c7841u); f_0086b688();
    /* 006c7841: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7844: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c784a: mov byte ptr [edx + 6], 0 */ W8((u32)(r_edx+0x6u), 0x0u);
    /* 006c784e: mov eax, 0xffffffce */ r_eax = 0xffffffceu;
    /* 006c7853: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 006c7857: call 0x793228 */ r_esp -= 4; W32(r_esp, 0x6c785cu); f_00793228();
    /* 006c785c: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c7862: mov byte ptr [edx + 7], al */ W8((u32)(r_edx+0x7u), (u8)r_eax);
    /* 006c7865: call 0x77bc78 */ r_esp -= 4; W32(r_esp, 0x6c786au); f_0077bc78();
    /* 006c786a: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c7870: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006c7873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7874: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006c7877: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7879: mov word ptr [edx + 0xc], ax */ W16((u32)(r_edx+0xcu), (u16)r_eax);
    /* 006c787d: mov word ptr [edx + 0xe], ax */ W16((u32)(r_edx+0xeu), (u16)r_eax);
    /* 006c7881: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x6c7886u); f_0083ace8();
    /* 006c7886: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c788b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006c788f: add eax, 0x110 */ {  u32 a = r_eax; u32 b = 0x110u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c7894: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7895: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7896: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x6c789bu); f_0083ad44();
    /* 006c789b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c789e: ret  */ FN_RET(0x006c782c); r_esp += 4; return;
}

void f_006c78a0(void) /* sub_6C78A0 */
{
    FN_ENTER(0x006c78a0);
    /* 006c78a0: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c78a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c78a7: push dword ptr [0xa95df4] */ { u32 v = R32((u32)(0xa95df4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c78ad: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c78b2u); f_0086b5cc();
    /* 006c78b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c78b5: ret  */ FN_RET(0x006c78a0); r_esp += 4; return;
}

void f_006c78b8(void) /* sub_6C78B8 */
{
    FN_ENTER(0x006c78b8);
    /* 006c78b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c78b9: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c78beu); f_006ffa24();
    /* 006c78be: mov ebx, dword ptr [0xa95df8] */ r_ebx = R32((u32)(0xa95df8u));
    /* 006c78c4: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c78c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c78cb: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c78d1: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c78d6u); f_0086b688();
    /* 006c78d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c78d9: call 0x4e762c */ r_esp -= 4; W32(r_esp, 0x6c78deu); f_004e762c();
    /* 006c78de: call 0x6ab24c */ r_esp -= 4; W32(r_esp, 0x6c78e3u); f_006ab24c();
    /* 006c78e3: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c78e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c78ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c78eb: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c78f0u); f_0086b688();
    /* 006c78f0: push 0xa95de4 */ { u32 v = 0xa95de4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c78f5: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x6c78fau); f_0083ace8();
    /* 006c78fa: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 006c78fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c78fe: push 0xa95de4 */ { u32 v = 0xa95de4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7903: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x6c7908u); f_0083ad44();
    /* 006c7908: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c790b: mov dword ptr [ebx + 8], 0xc87ed5b1 */ W32((u32)(r_ebx+0x8u), 0xc87ed5b1u);
    /* 006c7912: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7914: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 006c7917: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 006c7919: mov dword ptr [ebx + 0x14], 1 */ W32((u32)(r_ebx+0x14u), 0x1u);
    /* 006c7920: call 0x6bb7e4 */ r_esp -= 4; W32(r_esp, 0x6c7925u); f_006bb7e4();
    /* 006c7925: lea ecx, [ebx + 0x21c] */ r_ecx = (u32)(r_ebx+0x21cu);
    /* 006c792b: call 0x6ca370 */ r_esp -= 4; W32(r_esp, 0x6c7930u); f_006ca370();
    /* 006c7930: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7931: call 0x77dfb4 */ r_esp -= 4; W32(r_esp, 0x6c7936u); f_0077dfb4();
    /* 006c7936: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7937: call 0x7be290 */ r_esp -= 4; W32(r_esp, 0x6c793cu); f_007be290();
    /* 006c793c: add ebx, 0x291c */ {  u32 a = r_ebx; u32 b = 0x291cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7942: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7943: call 0x741f34 */ r_esp -= 4; W32(r_esp, 0x6c7948u); f_00741f34();
    /* 006c7948: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c794b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c794c: ret  */ FN_RET(0x006c78b8); r_esp += 4; return;
}

void f_006c7950(void) /* sub_6C7950 */
{
    FN_ENTER(0x006c7950);
    /* 006c7950: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7951: mov eax, dword ptr [0xa95e24] */ r_eax = R32((u32)(0xa95e24u));
    /* 006c7956: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7958: je 0x6c795e */ if (fZ) goto L_006c795e;
L_006c795a:; BB(0x006c795a);
    /* 006c795a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c795c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c795d: ret  */ FN_RET(0x006c7950); r_esp += 4; return;
L_006c795e:; BB(0x006c795e);
    /* 006c795e: mov ebx, dword ptr [0xa95dc8] */ r_ebx = R32((u32)(0xa95dc8u));
    /* 006c7964: shl ebx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7967: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7968: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6c796du); f_0082e940();
    /* 006c796d: mov dword ptr [0xa95e24], eax */ W32((u32)(0xa95e24u), r_eax);
    /* 006c7972: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7973: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7976: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c797bu); f_0086b688();
    /* 006c797b: mov eax, 1 */ r_eax = 0x1u;
    /* 006c7980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c7983: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7984: ret  */ FN_RET(0x006c7950); r_esp += 4; return;
}

void f_006c7988(void) /* sub_6C7988 */
{
    FN_ENTER(0x006c7988);
    /* 006c7988: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7989: mov eax, dword ptr [0xa95e28] */ r_eax = R32((u32)(0xa95e28u));
    /* 006c798e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7990: je 0x6c7996 */ if (fZ) goto L_006c7996;
L_006c7992:; BB(0x006c7992);
    /* 006c7992: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7994: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7995: ret  */ FN_RET(0x006c7988); r_esp += 4; return;
L_006c7996:; BB(0x006c7996);
    /* 006c7996: mov ebx, dword ptr [0xa95dd0] */ r_ebx = R32((u32)(0xa95dd0u));
    /* 006c799c: shl ebx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c799f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c79a0: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6c79a5u); f_0082e940();
    /* 006c79a5: mov dword ptr [0xa95e28], eax */ W32((u32)(0xa95e28u), r_eax);
    /* 006c79aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c79ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c79ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c79ae: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c79b3u); f_0086b688();
    /* 006c79b3: mov eax, 1 */ r_eax = 0x1u;
    /* 006c79b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c79bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c79bc: ret  */ FN_RET(0x006c7988); r_esp += 4; return;
}

void f_006c79c0(void) /* sub_6C79C0 */
{
    FN_ENTER(0x006c79c0);
    /* 006c79c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c79c1: mov eax, dword ptr [0xa95e2c] */ r_eax = R32((u32)(0xa95e2cu));
    /* 006c79c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c79c8: je 0x6c79ce */ if (fZ) goto L_006c79ce;
L_006c79ca:; BB(0x006c79ca);
    /* 006c79ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c79cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c79cd: ret  */ FN_RET(0x006c79c0); r_esp += 4; return;
L_006c79ce:; BB(0x006c79ce);
    /* 006c79ce: mov ebx, dword ptr [0xa95dd4] */ r_ebx = R32((u32)(0xa95dd4u));
    /* 006c79d4: shl ebx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c79d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c79d8: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6c79ddu); f_0082e940();
    /* 006c79dd: mov dword ptr [0xa95e2c], eax */ W32((u32)(0xa95e2cu), r_eax);
    /* 006c79e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c79e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c79e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c79e6: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c79ebu); f_0086b688();
    /* 006c79eb: mov eax, 1 */ r_eax = 0x1u;
    /* 006c79f0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c79f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c79f4: ret  */ FN_RET(0x006c79c0); r_esp += 4; return;
}

void f_006c79f8(void) /* sub_6C79F8 */
{
    FN_ENTER(0x006c79f8);
    /* 006c79f8: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c79fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c79ff: je 0x6c7a35 */ if (fZ) goto L_006c7a35;
L_006c7a01:; BB(0x006c7a01);
    /* 006c7a01: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a09: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c7a0eu); f_0086b5cc();
    /* 006c7a0e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a15: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7a1b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c7a20u); f_0086b688();
    /* 006c7a20: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a27: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7a2d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c7a32u); f_0086b688();
    /* 006c7a32: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006c7a35:; BB(0x006c7a35);
    /* 006c7a35: ret  */ FN_RET(0x006c79f8); r_esp += 4; return;
}

void f_006c7a38(void) /* sub_6C7A38 */
{
    FN_ENTER(0x006c7a38);
    /* 006c7a38: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 006c7a3f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006c7a44: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006c7a46: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 006c7a49: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006c7a4c: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 006c7a4f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006c7a52: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 006c7a55: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006c7a58: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 006c7a5b: ret  */ FN_RET(0x006c7a38); r_esp += 4; return;
}

void f_006c7a5c(void) /* sub_6C7A5C */
{
    FN_ENTER(0x006c7a5c);
    /* 006c7a5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c7a5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c7a61: call 0x6c7a80 */ r_esp -= 4; W32(r_esp, 0x6c7a66u); f_006c7a80();
    /* 006c7a66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006c7a6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7a6c: jne 0x6c7a72 */ if (!fZ) goto L_006c7a72;
L_006c7a6e:; BB(0x006c7a6e);
    /* 006c7a6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7a6f: ret 4 */ FN_RET(0x006c7a5c); r_esp += 8; return;
L_006c7a72:; BB(0x006c7a72);
    /* 006c7a72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a73: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6c7a78u); f_005c2f74();
    /* 006c7a78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7a79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7a7a: ret 4 */ FN_RET(0x006c7a5c); r_esp += 8; return;
}

void f_006c7a80(void) /* sub_6C7A80 */
{
    FN_ENTER(0x006c7a80);
    /* 006c7a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a81: mov ebp, esp */ r_ebp = r_esp;
    /* 006c7a83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a85: push 0x8ed4fc */ { u32 v = 0x8ed4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c7a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7a91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c7a98: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c7a9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c7a9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006c7aa1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c7aa4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006c7aa7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006c7aaa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c7ab1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c7ab4: mov dword ptr [ecx], 0xb3b708 */ W32((u32)(r_ecx), 0xb3b708u);
    /* 006c7aba: call 0x6c7adc */ r_esp -= 4; W32(r_esp, 0x6c7abfu); f_006c7adc();
    /* 006c7abf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c7ac6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c7ac9: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6c7aceu); f_008171e8();
    /* 006c7ace: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7ad1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c7ad8: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7ada: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7adb: ret  */ FN_RET(0x006c7a80); r_esp += 4; return;
}

void f_006c7adc(void) /* sub_6C7ADC */
{
    FN_ENTER(0x006c7adc);
    /* 006c7adc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7add: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c7adf: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 006c7ae2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7ae4: je 0x6c7af5 */ if (fZ) goto L_006c7af5;
L_006c7ae6:; BB(0x006c7ae6);
    /* 006c7ae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7ae7: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c7aecu); f_0082e960();
    /* 006c7aec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7aed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7aef: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 006c7af2: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_006c7af5:; BB(0x006c7af5);
    /* 006c7af5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7af6: ret  */ FN_RET(0x006c7adc); r_esp += 4; return;
}

void f_006c7af8(void) /* sub_6C7AF8 */
{
    FN_ENTER(0x006c7af8);
    /* 006c7af8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c7af9: mov edi, ecx */ r_edi = r_ecx;
    /* 006c7afb: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006c7afe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7b00: je 0x6c7b0e */ if (fZ) goto L_006c7b0e;
L_006c7b02:; BB(0x006c7b02);
    /* 006c7b02: call 0x77ebe8 */ r_esp -= 4; W32(r_esp, 0x6c7b07u); f_0077ebe8();
    /* 006c7b07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c7b0a: jne 0x6c7b15 */ if (!fZ) goto L_006c7b15;
L_006c7b0c:; BB(0x006c7b0c);
    /* 006c7b0c: jmp 0x6c7b17 */ goto L_006c7b17;
L_006c7b0e:; BB(0x006c7b0e);
    /* 006c7b0e: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
L_006c7b15:; BB(0x006c7b15);
    /* 006c7b15: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c7b16: ret  */ FN_RET(0x006c7af8); r_esp += 4; return;
L_006c7b17:; BB(0x006c7b17);
    /* 006c7b17: push 0x96b8f4 */ { u32 v = 0x96b8f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7b1c: push 0x96b8ec */ { u32 v = 0x96b8ecu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7b21: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 006c7b24: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006c7b28: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7b2d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006c7b31: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 006c7b38: mov dword ptr [edi + 0x2c], 2 */ W32((u32)(r_edi+0x2cu), 0x2u);
    /* 006c7b3f: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x6c7b44u); f_0073a888();
    /* 006c7b44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7b47: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006c7b4a: mov eax, dword ptr [0xa95e88] */ r_eax = R32((u32)(0xa95e88u));
    /* 006c7b4f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7b52: mov dword ptr [0xa95e88], eax */ W32((u32)(0xa95e88u), r_eax);
    /* 006c7b57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c7b58: ret  */ FN_RET(0x006c7af8); r_esp += 4; return;
}

void f_006c7b5c(void) /* sub_6C7B5C */
{
    FN_ENTER(0x006c7b5c);
    /* 006c7b5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7b5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c7b5f: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x6c7b64u); f_006c44ac();
    /* 006c7b64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7b66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7b67: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7b6a: call 0x82c2d8 */ r_esp -= 4; W32(r_esp, 0x6c7b6fu); f_0082c2d8();
    /* 006c7b6f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7b72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7b74: je 0x6c7ba2 */ if (fZ) goto L_006c7ba2;
L_006c7b76:; BB(0x006c7b76);
    /* 006c7b76: cmp eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7b7b: je 0x6c7b99 */ if (fZ) goto L_006c7b99;
L_006c7b7d:; BB(0x006c7b7d);
    /* 006c7b7d: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7b82: je 0x6c7b99 */ if (fZ) goto L_006c7b99;
L_006c7b84:; BB(0x006c7b84);
    /* 006c7b84: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c7b87: je 0x6c7ba0 */ if (fZ) goto L_006c7ba0;
L_006c7b89:; BB(0x006c7b89);
    /* 006c7b89: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 006c7b90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c7b92: call 0x6c7cac */ r_esp -= 4; W32(r_esp, 0x6c7b97u); f_006c7cac();
    /* 006c7b97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7b98: ret  */ FN_RET(0x006c7b5c); r_esp += 4; return;
L_006c7b99:; BB(0x006c7b99);
    /* 006c7b99: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c7b9b: call 0x6c7be0 */ r_esp -= 4; W32(r_esp, 0x6c7ba0u); f_006c7be0();
L_006c7ba0:; BB(0x006c7ba0);
    /* 006c7ba0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7ba1: ret  */ FN_RET(0x006c7b5c); r_esp += 4; return;
L_006c7ba2:; BB(0x006c7ba2);
    /* 006c7ba2: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 006c7ba5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7ba7: je 0x6c7ba0 */ if (fZ) goto L_006c7ba0;
L_006c7ba9:; BB(0x006c7ba9);
    /* 006c7ba9: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x6c7baeu); f_006c44ac();
    /* 006c7bae: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7bb1: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7bb5: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7bb8: call 0x82c260 */ r_esp -= 4; W32(r_esp, 0x6c7bbdu); f_0082c260();
    /* 006c7bbd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7bc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7bc2: jne 0x6c7bcd */ if (!fZ) goto L_006c7bcd;
L_006c7bc4:; BB(0x006c7bc4);
    /* 006c7bc4: mov dword ptr [ebx + 0x2c], 3 */ W32((u32)(r_ebx+0x2cu), 0x3u);
    /* 006c7bcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7bcc: ret  */ FN_RET(0x006c7b5c); r_esp += 4; return;
L_006c7bcd:; BB(0x006c7bcd);
    /* 006c7bcd: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 006c7bd4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c7bd6: call 0x6c7cac */ r_esp -= 4; W32(r_esp, 0x6c7bdbu); f_006c7cac();
    /* 006c7bdb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7bdc: ret  */ FN_RET(0x006c7b5c); r_esp += 4; return;
}

void f_006c7be0(void) /* sub_6C7BE0 */
{
    FN_ENTER(0x006c7be0);
    /* 006c7be0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c7be1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c7be2: mov esi, ecx */ r_esi = r_ecx;
    /* 006c7be4: mov eax, dword ptr [0xa95e88] */ r_eax = R32((u32)(0xa95e88u));
    /* 006c7be9: mov ebp, dword ptr [esi + 0x24] */ r_ebp = R32((u32)(r_esi+0x24u));
    /* 006c7bec: mov dword ptr [esi + 0x2c], 0xe */ W32((u32)(r_esi+0x2cu), 0xeu);
    /* 006c7bf3: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006c7bf6: mov dword ptr [0xa95e88], eax */ W32((u32)(0xa95e88u), r_eax);
    /* 006c7bfb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006c7bfd: add ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006c7c00: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c7c05u); f_007930dc();
    /* 006c7c05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7c06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c09: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006c7c0c: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c7c11u); f_0073ae38();
    /* 006c7c11: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7c14: je 0x6c7c28 */ if (fZ) goto L_006c7c28;
L_006c7c16:; BB(0x006c7c16);
    /* 006c7c16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c17: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c7c1cu); f_007930dc();
    /* 006c7c1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7c1d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c20: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006c7c23: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c7c28u); f_0073ae38();
L_006c7c28:; BB(0x006c7c28);
    /* 006c7c28: mov ecx, esi */ r_ecx = r_esi;
    /* 006c7c2a: call 0x6c7c34 */ r_esp -= 4; W32(r_esp, 0x6c7c2fu); f_006c7c34();
    /* 006c7c2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7c30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7c31: ret  */ FN_RET(0x006c7be0); r_esp += 4; return;
}

void f_006c7c34(void) /* sub_6C7C34 */
{
    FN_ENTER(0x006c7c34);
    /* 006c7c34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c35: mov esi, ecx */ r_esi = r_ecx;
    /* 006c7c37: mov ecx, esi */ r_ecx = r_esi;
    /* 006c7c39: call 0x6c7c88 */ r_esp -= 4; W32(r_esp, 0x6c7c3eu); f_006c7c88();
    /* 006c7c3e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c40: push 0x96b8e0 */ { u32 v = 0x96b8e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c45: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x6c7c4au); f_00735708();
    /* 006c7c4a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c4c: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006c7c4f: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c7c54u); f_007930dc();
    /* 006c7c54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7c57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c59: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c5b: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006c7c5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c5f: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6c7c64u); f_00735c90();
    /* 006c7c64: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c66: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c7c6bu); f_007930dc();
    /* 006c7c6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7c6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c6e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c70: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006c7c73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c74: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6c7c79u); f_00735c90();
    /* 006c7c79: push 0x43908000 */ { u32 v = 0x43908000u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c7e: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006c7c81: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x6c7c86u); f_00736138();
    /* 006c7c86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7c87: ret  */ FN_RET(0x006c7c34); r_esp += 4; return;
}

void f_006c7c88(void) /* sub_6C7C88 */
{
    FN_ENTER(0x006c7c88);
    /* 006c7c88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7c89: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c7c8b: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006c7c8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7c90: je 0x6c7caa */ if (fZ) goto L_006c7caa;
L_006c7c92:; BB(0x006c7c92);
    /* 006c7c92: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6c7c97u); f_008173b4();
    /* 006c7c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7c99: je 0x6c7caa */ if (fZ) goto L_006c7caa;
L_006c7c9b:; BB(0x006c7c9b);
    /* 006c7c9b: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006c7c9e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c7ca3u); f_007127b0();
    /* 006c7ca3: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
L_006c7caa:; BB(0x006c7caa);
    /* 006c7caa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7cab: ret  */ FN_RET(0x006c7c88); r_esp += 4; return;
}

void f_006c7cac(void) /* sub_6C7CAC */
{
    FN_ENTER(0x006c7cac);
    /* 006c7cac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7cad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c7caf: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006c7cb2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7cb4: je 0x6c7cce */ if (fZ) goto L_006c7cce;
L_006c7cb6:; BB(0x006c7cb6);
    /* 006c7cb6: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6c7cbbu); f_008173b4();
    /* 006c7cbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7cbd: je 0x6c7cce */ if (fZ) goto L_006c7cce;
L_006c7cbf:; BB(0x006c7cbf);
    /* 006c7cbf: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006c7cc2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c7cc7u); f_007127b0();
    /* 006c7cc7: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
L_006c7cce:; BB(0x006c7cce);
    /* 006c7cce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c7ccf: ret  */ FN_RET(0x006c7cac); r_esp += 4; return;
}

void f_006c7cd0(void) /* sub_6C7CD0 */
{
    FN_ENTER(0x006c7cd0);
    /* 006c7cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c7cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 006c7cd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7cd5: push 0x8ed524 */ { u32 v = 0x8ed524u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7cda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c7ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7ce1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c7ce8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c7ceb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c7cee: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006c7cf1: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006c7cf4: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006c7cf7: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7cfa: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006c7cfd: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c7d02u); f_006dc358();
    /* 006c7d02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7d03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7d05: jne 0x6c7e0d */ if (!fZ) goto L_006c7e0d;
L_006c7d0b:; BB(0x006c7d0b);
    /* 006c7d0b: call 0x6c1a70 */ r_esp -= 4; W32(r_esp, 0x6c7d10u); f_006c1a70();
    /* 006c7d10: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006c7d17: mov dword ptr [0xa95dc4], eax */ W32((u32)(0xa95dc4u), r_eax);
    /* 006c7d1c: mov dword ptr [0xa95dc0], eax */ W32((u32)(0xa95dc0u), r_eax);
    /* 006c7d21: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d26: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c7d29: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006c7d2c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006c7d2f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c7d34u); f_008581c5();
    /* 006c7d34: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c7d37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7d3a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006c7d3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7d3f: je 0x6c7e4e */ if (fZ) goto L_006c7e4e;
L_006c7d45:; BB(0x006c7d45);
    /* 006c7d45: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006c7d4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c7d53: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d58: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d5d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d5f: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 006c7d62: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d68: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c7d6du); f_00858736();
    /* 006c7d6d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006c7d74:; BB(0x006c7d74);
    /* 006c7d74: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c7d7b: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d80: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7d83: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7d86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d88: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x6c7d8du); f_0086b324();
    /* 006c7d8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d91: call 0x83ddc4 */ r_esp -= 4; W32(r_esp, 0x6c7d96u); f_0083ddc4();
    /* 006c7d96: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7d99: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7d9c: call 0x6c1a5c */ r_esp -= 4; W32(r_esp, 0x6c7da1u); f_006c1a5c();
    /* 006c7da1: mov ebx, eax */ r_ebx = r_eax;
    /* 006c7da3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7da8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6c7dadu); f_006c1bd4();
    /* 006c7dad: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7db3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7db6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7db8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7db9: call 0x6c2608 */ r_esp -= 4; W32(r_esp, 0x6c7dbeu); f_006c2608();
    /* 006c7dbe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7dc1: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7dc4: je 0x6c7e1e */ if (fZ) goto L_006c7e1e;
L_006c7dc6:; BB(0x006c7dc6);
    /* 006c7dc6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c7dc9: mov edx, dword ptr [0xa95e88] */ r_edx = R32((u32)(0xa95e88u));
    /* 006c7dcf: mov dword ptr [eax + 0x2c], 0xf */ W32((u32)(r_eax+0x2cu), 0xfu);
    /* 006c7dd6: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006c7dd9: mov dword ptr [0xa95e88], edx */ W32((u32)(0xa95e88u), r_edx);
    /* 006c7ddf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006c7de1: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c7de6u); f_007930dc();
    /* 006c7de6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7de7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7de9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7dea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c7ded: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006c7df0: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c7df5u); f_0073ae38();
    /* 006c7df5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c7df8: call 0x6c7e58 */ r_esp -= 4; W32(r_esp, 0x6c7dfdu); f_006c7e58();
L_006c7dfd:; BB(0x006c7dfd);
    /* 006c7dfd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7e00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7e02: je 0x6c7e0d */ if (fZ) goto L_006c7e0d;
L_006c7e04:; BB(0x006c7e04);
    /* 006c7e04: mov ecx, eax */ r_ecx = r_eax;
    /* 006c7e06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e08: call 0x6c1780 */ r_esp -= 4; W32(r_esp, 0x6c7e0du); f_006c1780();
L_006c7e0d:; BB(0x006c7e0d);
    /* 006c7e0d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c7e10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7e13: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c7e1a: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7e1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7e1d: ret  */ FN_RET(0x006c7cd0); r_esp += 4; return;
L_006c7e1e:; BB(0x006c7e1e);
    /* 006c7e1e: call 0x6c1a70 */ r_esp -= 4; W32(r_esp, 0x6c7e23u); f_006c1a70();
    /* 006c7e23: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7e29: mov dword ptr [0xa95dc4], eax */ W32((u32)(0xa95dc4u), r_eax);
    /* 006c7e2e: mov dword ptr [0xa95dc0], eax */ W32((u32)(0xa95dc0u), r_eax);
    /* 006c7e33: call 0x6c26f8 */ r_esp -= 4; W32(r_esp, 0x6c7e38u); f_006c26f8();
    /* 006c7e38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e3a: call 0x6c27a4 */ r_esp -= 4; W32(r_esp, 0x6c7e3fu); f_006c27a4();
    /* 006c7e3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7e42: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c7e45: mov dword ptr [eax + 0x2c], 4 */ W32((u32)(r_eax+0x2cu), 0x4u);
    /* 006c7e4c: jmp 0x6c7dfd */ goto L_006c7dfd;
L_006c7e4e:; BB(0x006c7e4e);
    /* 006c7e4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7e50: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c7e53: jmp 0x6c7d74 */ goto L_006c7d74;
}

void f_006c7d8d(void)
{
    FN_ENTER(0x006c7d8d);
    /* 006c7d8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7d91: call 0x83ddc4 */ r_esp -= 4; W32(r_esp, 0x6c7d96u); f_0083ddc4();
    /* 006c7d96: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7d99: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7d9c: call 0x6c1a5c */ r_esp -= 4; W32(r_esp, 0x6c7da1u); f_006c1a5c();
    /* 006c7da1: mov ebx, eax */ r_ebx = r_eax;
    /* 006c7da3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7da8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6c7dadu); f_006c1bd4();
    /* 006c7dad: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7db3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7db6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7db8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7db9: call 0x6c2608 */ r_esp -= 4; W32(r_esp, 0x6c7dbeu); f_006c2608();
    /* 006c7dbe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7dc1: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7dc4: je 0x6c7e1e */ if (fZ) goto L_006c7e1e;
L_006c7dc6:; BB(0x006c7dc6);
    /* 006c7dc6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c7dc9: mov edx, dword ptr [0xa95e88] */ r_edx = R32((u32)(0xa95e88u));
    /* 006c7dcf: mov dword ptr [eax + 0x2c], 0xf */ W32((u32)(r_eax+0x2cu), 0xfu);
    /* 006c7dd6: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006c7dd9: mov dword ptr [0xa95e88], edx */ W32((u32)(0xa95e88u), r_edx);
    /* 006c7ddf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006c7de1: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c7de6u); f_007930dc();
    /* 006c7de6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7de7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7de9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7dea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c7ded: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006c7df0: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c7df5u); f_0073ae38();
    /* 006c7df5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c7df8: call 0x6c7e58 */ r_esp -= 4; W32(r_esp, 0x6c7dfdu); f_006c7e58();
L_006c7dfd:; BB(0x006c7dfd);
    /* 006c7dfd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7e00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7e02: je 0x6c7e0d */ if (fZ) goto L_006c7e0d;
L_006c7e04:; BB(0x006c7e04);
    /* 006c7e04: mov ecx, eax */ r_ecx = r_eax;
    /* 006c7e06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e08: call 0x6c1780 */ r_esp -= 4; W32(r_esp, 0x6c7e0du); f_006c1780();
L_006c7e0d:; BB(0x006c7e0d);
    /* 006c7e0d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c7e10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7e13: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c7e1a: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7e1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7e1d: ret  */ FN_RET(0x006c7d8d); r_esp += 4; return;
L_006c7e1e:; BB(0x006c7e1e);
    /* 006c7e1e: call 0x6c1a70 */ r_esp -= 4; W32(r_esp, 0x6c7e23u); f_006c1a70();
    /* 006c7e23: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7e29: mov dword ptr [0xa95dc4], eax */ W32((u32)(0xa95dc4u), r_eax);
    /* 006c7e2e: mov dword ptr [0xa95dc0], eax */ W32((u32)(0xa95dc0u), r_eax);
    /* 006c7e33: call 0x6c26f8 */ r_esp -= 4; W32(r_esp, 0x6c7e38u); f_006c26f8();
    /* 006c7e38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e3a: call 0x6c27a4 */ r_esp -= 4; W32(r_esp, 0x6c7e3fu); f_006c27a4();
    /* 006c7e3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7e42: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c7e45: mov dword ptr [eax + 0x2c], 4 */ W32((u32)(r_eax+0x2cu), 0x4u);
    /* 006c7e4c: jmp 0x6c7dfd */ goto L_006c7dfd;
}

void f_006c7e58(void) /* sub_6C7E58 */
{
    FN_ENTER(0x006c7e58);
    /* 006c7e58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e59: mov esi, ecx */ r_esi = r_ecx;
    /* 006c7e5b: mov ecx, esi */ r_ecx = r_esi;
    /* 006c7e5d: call 0x6c7c88 */ r_esp -= 4; W32(r_esp, 0x6c7e62u); f_006c7c88();
    /* 006c7e62: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e64: push 0x96b8e0 */ { u32 v = 0x96b8e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e69: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x6c7e6eu); f_00735708();
    /* 006c7e6e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e70: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006c7e73: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c7e78u); f_007930dc();
    /* 006c7e78: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7e7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e7d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e7f: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006c7e82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e83: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6c7e88u); f_00735c90();
    /* 006c7e88: push 0x43908000 */ { u32 v = 0x43908000u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e8d: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006c7e90: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x6c7e95u); f_00736138();
    /* 006c7e95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7e96: ret  */ FN_RET(0x006c7e58); r_esp += 4; return;
}

void f_006c7e98(void) /* sub_6C7E98 */
{
    FN_ENTER(0x006c7e98);
    /* 006c7e98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c7e99: mov esi, ecx */ r_esi = r_ecx;
    /* 006c7e9b: call 0x6c3de4 */ r_esp -= 4; W32(r_esp, 0x6c7ea0u); f_006c3de4();
    /* 006c7ea0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7ea2: jne 0x6c7ed1 */ if (!fZ) goto L_006c7ed1;
L_006c7ea4:; BB(0x006c7ea4);
    /* 006c7ea4: mov dword ptr [esi + 0x2c], 5 */ W32((u32)(r_esi+0x2cu), 0x5u);
    /* 006c7eab: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7ead: mov dword ptr [esi + 0x3c], 0x5a */ W32((u32)(r_esi+0x3cu), 0x5au);
    /* 006c7eb4: mov dword ptr [0xa95de0], 6 */ W32((u32)(0xa95de0u), 0x6u);
    /* 006c7ebe: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c7ec3u); f_007930dc();
    /* 006c7ec3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7ec4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7ec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7ec7: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006c7eca: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c7ecfu); f_0073ae38();
    /* 006c7ecf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7ed0: ret  */ FN_RET(0x006c7e98); r_esp += 4; return;
L_006c7ed1:; BB(0x006c7ed1);
    /* 006c7ed1: mov dword ptr [esi + 0x2c], 0 */ W32((u32)(r_esi+0x2cu), 0x0u);
    /* 006c7ed8: mov ecx, esi */ r_ecx = r_esi;
    /* 006c7eda: call 0x6c7cac */ r_esp -= 4; W32(r_esp, 0x6c7edfu); f_006c7cac();
    /* 006c7edf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7ee0: ret  */ FN_RET(0x006c7e98); r_esp += 4; return;
}

void f_006c7ee4(void) /* sub_6C7EE4 */
{
    FN_ENTER(0x006c7ee4);
    /* 006c7ee4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c7ee5: mov esi, ecx */ r_esi = r_ecx;
    /* 006c7ee7: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7eea: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6c7eefu); f_0082c204();
    /* 006c7eef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7ef0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7ef2: jne 0x6c7f04 */ if (!fZ) goto L_006c7f04;
L_006c7ef4:; BB(0x006c7ef4);
    /* 006c7ef4: mov dword ptr [esi + 0x2c], 0 */ W32((u32)(r_esi+0x2cu), 0x0u);
    /* 006c7efb: mov ecx, esi */ r_ecx = r_esi;
    /* 006c7efd: call 0x6c7cac */ r_esp -= 4; W32(r_esp, 0x6c7f02u); f_006c7cac();
    /* 006c7f02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7f03: ret  */ FN_RET(0x006c7ee4); r_esp += 4; return;
L_006c7f04:; BB(0x006c7f04);
    /* 006c7f04: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c7f09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7f0b: jne 0x6c7f77 */ if (!fZ) goto L_006c7f77;
L_006c7f0d:; BB(0x006c7f0d);
    /* 006c7f0d: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7f10: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c7f15u); f_006dc358();
    /* 006c7f15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7f16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7f18: jne 0x6c7f77 */ if (!fZ) goto L_006c7f77;
L_006c7f1a:; BB(0x006c7f1a);
    /* 006c7f1a: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7f1d: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x6c7f22u); f_0082c3a8();
    /* 006c7f22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7f23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7f25: jne 0x6c7f49 */ if (!fZ) goto L_006c7f49;
L_006c7f27:; BB(0x006c7f27);
    /* 006c7f27: mov dword ptr [esi + 0x2c], 6 */ W32((u32)(r_esi+0x2cu), 0x6u);
    /* 006c7f2e: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c7f33u); f_00415cec();
    /* 006c7f33: mov edx, dword ptr [0xa95dd0] */ r_edx = R32((u32)(0xa95dd0u));
    /* 006c7f39: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c7f3c: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 006c7f3f: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 006c7f42: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x6c7f47u); f_007083d4();
    /* 006c7f47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7f48: ret  */ FN_RET(0x006c7ee4); r_esp += 4; return;
L_006c7f49:; BB(0x006c7f49);
    /* 006c7f49: mov eax, dword ptr [0xa95e88] */ r_eax = R32((u32)(0xa95e88u));
    /* 006c7f4e: mov dword ptr [esi + 0x2c], 0x10 */ W32((u32)(r_esi+0x2cu), 0x10u);
    /* 006c7f55: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006c7f58: mov dword ptr [0xa95e88], eax */ W32((u32)(0xa95e88u), r_eax);
    /* 006c7f5d: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7f5f: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c7f64u); f_007930dc();
    /* 006c7f64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7f65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7f68: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006c7f6b: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c7f70u); f_0073ae38();
    /* 006c7f70: mov ecx, esi */ r_ecx = r_esi;
    /* 006c7f72: call 0x6c7c34 */ r_esp -= 4; W32(r_esp, 0x6c7f77u); f_006c7c34();
L_006c7f77:; BB(0x006c7f77);
    /* 006c7f77: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7f78: ret  */ FN_RET(0x006c7ee4); r_esp += 4; return;
}

void f_006c7f7c(void) /* sub_6C7F7C */
{
    FN_ENTER(0x006c7f7c);
    /* 006c7f7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c7f7d: mov esi, ecx */ r_esi = r_ecx;
    /* 006c7f7f: call 0x6c44b4 */ r_esp -= 4; W32(r_esp, 0x6c7f84u); f_006c44b4();
    /* 006c7f84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7f86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7f87: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7f8a: call 0x82c2d8 */ r_esp -= 4; W32(r_esp, 0x6c7f8fu); f_0082c2d8();
    /* 006c7f8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7f92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7f94: jne 0x6c7f9f */ if (!fZ) goto L_006c7f9f;
L_006c7f96:; BB(0x006c7f96);
    /* 006c7f96: mov dword ptr [esi + 0x2c], 7 */ W32((u32)(r_esi+0x2cu), 0x7u);
    /* 006c7f9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7f9e: ret  */ FN_RET(0x006c7f7c); r_esp += 4; return;
L_006c7f9f:; BB(0x006c7f9f);
    /* 006c7f9f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c7fa2: je 0x6c7fed */ if (fZ) goto L_006c7fed;
L_006c7fa4:; BB(0x006c7fa4);
    /* 006c7fa4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7fa6: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7fa9: call 0x82c22c */ r_esp -= 4; W32(r_esp, 0x6c7faeu); f_0082c22c();
    /* 006c7fae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c7fb1: cmp eax, dword ptr [esi + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c7fb4: jl 0x6c7fbf */ if ((fS!=fO)) goto L_006c7fbf;
L_006c7fb6:; BB(0x006c7fb6);
    /* 006c7fb6: mov dword ptr [esi + 0x2c], 7 */ W32((u32)(r_esi+0x2cu), 0x7u);
    /* 006c7fbd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7fbe: ret  */ FN_RET(0x006c7f7c); r_esp += 4; return;
L_006c7fbf:; BB(0x006c7fbf);
    /* 006c7fbf: mov eax, dword ptr [0xa95e88] */ r_eax = R32((u32)(0xa95e88u));
    /* 006c7fc4: mov dword ptr [esi + 0x2c], 0xd */ W32((u32)(r_esi+0x2cu), 0xdu);
    /* 006c7fcb: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006c7fce: mov dword ptr [0xa95e88], eax */ W32((u32)(0xa95e88u), r_eax);
    /* 006c7fd3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7fd5: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6c7fdau); f_007930dc();
    /* 006c7fda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7fdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7fde: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006c7fe1: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c7fe6u); f_0073ae38();
    /* 006c7fe6: mov ecx, esi */ r_ecx = r_esi;
    /* 006c7fe8: call 0x6c7c34 */ r_esp -= 4; W32(r_esp, 0x6c7fedu); f_006c7c34();
L_006c7fed:; BB(0x006c7fed);
    /* 006c7fed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c7fee: ret  */ FN_RET(0x006c7f7c); r_esp += 4; return;
}

void f_006c7ff0(void) /* sub_6C7FF0 */
{
    FN_ENTER(0x006c7ff0);
    /* 006c7ff0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7ff1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c7ff3: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c7ff6: call 0x6c2914 */ r_esp -= 4; W32(r_esp, 0x6c7ffbu); f_006c2914();
    /* 006c7ffb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7ffc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c7ffe: jne 0x6c8013 */ if (!fZ) goto L_006c8013;
L_006c8000:; BB(0x006c8000);
    /* 006c8000: mov dword ptr [ebx + 0x2c], 8 */ W32((u32)(r_ebx+0x2cu), 0x8u);
    /* 006c8007: mov dword ptr [0xa95de0], 0xc */ W32((u32)(0xa95de0u), 0xcu);
    /* 006c8011: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c8012: ret  */ FN_RET(0x006c7ff0); r_esp += 4; return;
L_006c8013:; BB(0x006c8013);
    /* 006c8013: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 006c801a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c801c: call 0x6c7cac */ r_esp -= 4; W32(r_esp, 0x6c8021u); f_006c7cac();
    /* 006c8021: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c8022: ret  */ FN_RET(0x006c7ff0); r_esp += 4; return;
}

