#include "protos.h"

void f_007d2da0(void) /* sub_7D2DA0 */
{
    FN_ENTER(0x007d2da0);
    /* 007d2da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d2da1: mov ebp, esp */ r_ebp = r_esp;
    /* 007d2da3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d2da5: push 0x8f6a3e */ { u32 v = 0x8f6a3eu; r_esp -= 4; W32(r_esp, v); }
    /* 007d2daa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007d2db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d2db1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007d2db8: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d2dbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007d2dbe: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 007d2dc1: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 007d2dc4: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 007d2dc7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007d2dca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007d2dcd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 007d2dd0: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 007d2dd3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007d2dd6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 007d2dd9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 007d2ddc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007d2ddf: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 007d2de2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007d2de5: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 007d2de8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007d2deb: call 0x77f55c */ r_esp -= 4; W32(r_esp, 0x7d2df0u); f_0077f55c();
    /* 007d2df0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d2df3: mov dword ptr [edx], 0xaf8320 */ W32((u32)(r_edx), 0xaf8320u);
    /* 007d2df9: mov eax, dword ptr [0x9f84f0] */ r_eax = R32((u32)(0x9f84f0u));
    /* 007d2dfe: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007d2e01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007d2e08: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e0d: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e12: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d2e15: mov dword ptr [ecx], 0xb471a8 */ W32((u32)(r_ecx), 0xb471a8u);
    /* 007d2e1b: lea eax, [ecx + 0x121d8] */ r_eax = (u32)(r_ecx+0x121d8u);
    /* 007d2e21: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 007d2e24: lea edx, [ecx + 0x125b8] */ r_edx = (u32)(r_ecx+0x125b8u);
    /* 007d2e2a: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 007d2e2d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 007d2e30: add ecx, 0x125bc */ {  u32 a = r_ecx; u32 b = 0x125bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007d2e36: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e38: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e3b: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7d2e40u); f_00858736();
    /* 007d2e40: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007d2e47: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e4c: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e51: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007d2e54: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e56: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007d2e59: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e5c: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7d2e61u); f_00858736();
    /* 007d2e61: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007d2e64: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 007d2e6a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007d2e71: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e76: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e7b: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 007d2e7e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e80: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 007d2e83: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d2e86: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007d2e89: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e8c: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7d2e91u); f_00858736();
    /* 007d2e91: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007d2e98: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2e9d: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2ea2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 007d2ea5: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007d2ea7: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007d2eaa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d2eac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d2ead: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7d2eb2u); f_00858736();
    /* 007d2eb2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 007d2eb5: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 007d2ebb: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007d2ec2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007d2ec4:; BB(0x007d2ec4);
    /* 007d2ec4: mov edi, dword ptr [ebp - 0x58] */ r_edi = R32((u32)(r_ebp+0xffffffa8u));
    /* 007d2ec7: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 007d2eca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d2ecc: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007d2ecf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007d2ed1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007d2ed3: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007d2ed5: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 007d2eda: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 007d2ede: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d2ee0: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 007d2ee4: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 007d2ee8: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 007d2eec: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 007d2ef0: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x7d2ef5u); f_005d6a3c();
    /* 007d2ef5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007d2ef8: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007d2efb: jl 0x7d2ec4 */ if ((fS!=fO)) goto L_007d2ec4;
L_007d2efd:; BB(0x007d2efd);
    /* 007d2efd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007d2f04: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d2f07: mov eax, dword ptr [0xa0fb7c] */ r_eax = R32((u32)(0xa0fb7cu));
    /* 007d2f0c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007d2f0f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007d2f11: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 007d2f14: mov word ptr [ebp - 0x38], cx */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_ecx);
    /* 007d2f18: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 007d2f1b: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d2f1e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007d2f21: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007d2f24: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d2f26: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007d2f28: mov dword ptr [esi + 0x12120], 0xffff0000 */ W32((u32)(r_esi+0x12120u), 0xffff0000u);
    /* 007d2f32: mov dword ptr [esi + 0x12124], 0xffffffff */ W32((u32)(r_esi+0x12124u), 0xffffffffu);
    /* 007d2f3c: mov dword ptr [ebx + 0x1212c], edx */ W32((u32)(r_ebx+0x1212cu), r_edx);
    /* 007d2f42: mov dword ptr [ebx + 0x12130], edx */ W32((u32)(r_ebx+0x12130u), r_edx);
    /* 007d2f48: mov dword ptr [ebx + 0x12134], edx */ W32((u32)(r_ebx+0x12134u), r_edx);
    /* 007d2f4e: mov dword ptr [ebx + 0x12138], edx */ W32((u32)(r_ebx+0x12138u), r_edx);
    /* 007d2f54: mov dword ptr [ebx + 0x1213c], edx */ W32((u32)(r_ebx+0x1213cu), r_edx);
    /* 007d2f5a: mov dword ptr [ebx + 0x12140], edx */ W32((u32)(r_ebx+0x12140u), r_edx);
    /* 007d2f60: mov dword ptr [ebx + 0x12144], edx */ W32((u32)(r_ebx+0x12144u), r_edx);
    /* 007d2f66: mov dword ptr [ebx + 0x12148], edx */ W32((u32)(r_ebx+0x12148u), r_edx);
    /* 007d2f6c: mov byte ptr [ebx + 0x16280], dl */ W8((u32)(r_ebx+0x16280u), (u8)r_edx);
    /* 007d2f72: mov dword ptr [ebx + 0x1214c], edx */ W32((u32)(r_ebx+0x1214cu), r_edx);
    /* 007d2f78: mov dword ptr [ebx + 0x12150], edx */ W32((u32)(r_ebx+0x12150u), r_edx);
    /* 007d2f7e: mov dword ptr [ebx + 0x1641c], edx */ W32((u32)(r_ebx+0x1641cu), r_edx);
    /* 007d2f84: mov dword ptr [ebx + 0x16420], edx */ W32((u32)(r_ebx+0x16420u), r_edx);
    /* 007d2f8a: mov word ptr [ebx + 0x12128], di */ W16((u32)(r_ebx+0x12128u), (u16)r_edi);
    /* 007d2f91: mov dword ptr [ebx + 0x12154], eax */ W32((u32)(r_ebx+0x12154u), r_eax);
    /* 007d2f97: mov dword ptr [ebx + 0x12158], edx */ W32((u32)(r_ebx+0x12158u), r_edx);
    /* 007d2f9d: mov dword ptr [ebx + 0x1215c], edx */ W32((u32)(r_ebx+0x1215cu), r_edx);
    /* 007d2fa3: mov dword ptr [ebx + 0x12160], edx */ W32((u32)(r_ebx+0x12160u), r_edx);
    /* 007d2fa9: mov dword ptr [ebx + 0x12164], edx */ W32((u32)(r_ebx+0x12164u), r_edx);
    /* 007d2faf: add ebx, 0x16322 */ {  u32 a = r_ebx; u32 b = 0x16322u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007d2fb5: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 007d2fb7: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 007d2fba: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 007d2fbd: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 007d2fc0: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 007d2fc3: mov dword ptr [ebx + 0x14], ecx */ W32((u32)(r_ebx+0x14u), r_ecx);
    /* 007d2fc6: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 007d2fc9: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 007d2fcc: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 007d2fcf: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 007d2fd2: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 007d2fd5: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 007d2fd8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d2fdb: add edx, 0x16352 */ {  u32 a = r_edx; u32 b = 0x16352u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d2fe1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d2fe3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007d2fe5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007d2fe8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007d2feb: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007d2fee: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007d2ff1: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007d2ff4: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007d2ff7: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007d2ffa: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007d2ffd: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 007d3000: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 007d3003: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 007d3006: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d3009: add edx, 0x16382 */ {  u32 a = r_edx; u32 b = 0x16382u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d300f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d3011: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007d3013: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007d3016: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007d3019: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007d301c: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007d301f: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007d3022: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007d3025: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007d3028: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007d302b: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 007d302e: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 007d3031: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 007d3034: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 007d3037: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 007d303a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 007d303d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 007d3040: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d3043: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007d3046: add edx, 0x16322 */ {  u32 a = r_edx; u32 b = 0x16322u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d304c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007d304e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d304f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3050: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7d3055u); f_00858900();
    /* 007d3055: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d3058: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007d305b: add edx, 0x16352 */ {  u32 a = r_edx; u32 b = 0x16352u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d3061: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3064: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3065: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7d306au); f_00858900();
    /* 007d306a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d306d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007d3070: add edx, 0x16382 */ {  u32 a = r_edx; u32 b = 0x16382u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d3076: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3079: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d307a: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7d307fu); f_00858900();
    /* 007d307f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3082: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d3085: add edx, 0x163f4 */ {  u32 a = r_edx; u32 b = 0x163f4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d308b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d308d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007d308f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007d3092: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007d3095: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007d3098: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007d309b: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007d309e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007d30a1: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007d30a4: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007d30a7: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 007d30aa: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d30ad: add edx, 0x1e024 */ {  u32 a = r_edx; u32 b = 0x1e024u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d30b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d30b5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007d30b7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007d30ba: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007d30bd: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007d30c0: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007d30c3: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007d30c6: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007d30c9: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007d30cc: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007d30cf: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d30d2: add edx, 0x1e048 */ {  u32 a = r_edx; u32 b = 0x1e048u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d30d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d30da: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007d30dc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007d30df: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d30e2: add edx, 0x1e050 */ {  u32 a = r_edx; u32 b = 0x1e050u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d30e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d30ea: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007d30ec: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007d30ef: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007d30f2: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007d30f5: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007d30f8: add edx, 0x1e060 */ {  u32 a = r_edx; u32 b = 0x1e060u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d30fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d3100: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007d3102: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007d3105: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007d3108: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 007d310b: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 007d310e: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 007d3111: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007d3114: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007d3116: mov dword ptr [eax + 0x1e074], edx */ W32((u32)(r_eax+0x1e074u), r_edx);
    /* 007d311c: mov dword ptr [eax + 0x1e06c], 1 */ W32((u32)(r_eax+0x1e06cu), 0x1u);
    /* 007d3126: mov dword ptr [eax + 0x1e078], edx */ W32((u32)(r_eax+0x1e078u), r_edx);
    /* 007d312c: mov dword ptr [eax + 0x1e07c], edx */ W32((u32)(r_eax+0x1e07cu), r_edx);
    /* 007d3132: mov dword ptr [eax + 0x1e080], edx */ W32((u32)(r_eax+0x1e080u), r_edx);
    /* 007d3138: mov dword ptr [eax + 0x1e084], edx */ W32((u32)(r_eax+0x1e084u), r_edx);
    /* 007d313e: mov dword ptr [eax + 0x1e08c], edx */ W32((u32)(r_eax+0x1e08cu), r_edx);
    /* 007d3144: mov dword ptr [eax + 0x1e090], edx */ W32((u32)(r_eax+0x1e090u), r_edx);
    /* 007d314a: mov dword ptr [eax + 0x1e094], edx */ W32((u32)(r_eax+0x1e094u), r_edx);
    /* 007d3150: mov dword ptr [eax + 0x1e098], edx */ W32((u32)(r_eax+0x1e098u), r_edx);
    /* 007d3156: mov dword ptr [eax + 0x1e0a0], edx */ W32((u32)(r_eax+0x1e0a0u), r_edx);
    /* 007d315c: mov dword ptr [eax + 0x1e0a4], edx */ W32((u32)(r_eax+0x1e0a4u), r_edx);
    /* 007d3162: mov dword ptr [eax + 0x1e0a8], edx */ W32((u32)(r_eax+0x1e0a8u), r_edx);
    /* 007d3168: mov dword ptr [eax + 0x1e0ac], edx */ W32((u32)(r_eax+0x1e0acu), r_edx);
    /* 007d316e: mov dword ptr [eax + 0x1e0b0], edx */ W32((u32)(r_eax+0x1e0b0u), r_edx);
    /* 007d3174: mov dword ptr [eax + 0x1e0b4], edx */ W32((u32)(r_eax+0x1e0b4u), r_edx);
    /* 007d317a: mov dword ptr [eax + 0x1e0b8], edx */ W32((u32)(r_eax+0x1e0b8u), r_edx);
    /* 007d3180: mov dword ptr [eax + 0x1e0bc], edx */ W32((u32)(r_eax+0x1e0bcu), r_edx);
    /* 007d3186: mov dword ptr [eax + 0x1e0c4], edx */ W32((u32)(r_eax+0x1e0c4u), r_edx);
    /* 007d318c: mov dword ptr [eax + 0x1e0c8], edx */ W32((u32)(r_eax+0x1e0c8u), r_edx);
    /* 007d3192: mov dword ptr [eax + 0x1e0d0], edx */ W32((u32)(r_eax+0x1e0d0u), r_edx);
    /* 007d3198: mov dword ptr [eax + 0x1e0d4], edx */ W32((u32)(r_eax+0x1e0d4u), r_edx);
    /* 007d319e: mov dword ptr [eax + 0x1e0f0], edx */ W32((u32)(r_eax+0x1e0f0u), r_edx);
    /* 007d31a4: mov dword ptr [eax + 0x1e0f4], edx */ W32((u32)(r_eax+0x1e0f4u), r_edx);
    /* 007d31aa: mov dword ptr [eax + 0x1e0f8], edx */ W32((u32)(r_eax+0x1e0f8u), r_edx);
    /* 007d31b0: mov dword ptr [eax + 0x1e0fc], edx */ W32((u32)(r_eax+0x1e0fcu), r_edx);
    /* 007d31b6: mov dword ptr [eax + 0x1e100], edx */ W32((u32)(r_eax+0x1e100u), r_edx);
    /* 007d31bc: mov dword ptr [eax + 0x1e104], edx */ W32((u32)(r_eax+0x1e104u), r_edx);
    /* 007d31c2: mov dword ptr [eax + 0x1e110], edx */ W32((u32)(r_eax+0x1e110u), r_edx);
    /* 007d31c8: mov dword ptr [eax + 0x1e0dc], edx */ W32((u32)(r_eax+0x1e0dcu), r_edx);
    /* 007d31ce: mov dword ptr [eax + 0x1e118], edx */ W32((u32)(r_eax+0x1e118u), r_edx);
    /* 007d31d4: mov dword ptr [eax + 0x1e11c], edx */ W32((u32)(r_eax+0x1e11cu), r_edx);
    /* 007d31da: mov dword ptr [eax + 0x1e114], edx */ W32((u32)(r_eax+0x1e114u), r_edx);
    /* 007d31e0: mov dword ptr [eax + 0x1e120], edx */ W32((u32)(r_eax+0x1e120u), r_edx);
    /* 007d31e6: mov dword ptr [eax + 0x1e124], edx */ W32((u32)(r_eax+0x1e124u), r_edx);
    /* 007d31ec: mov dword ptr [eax + 0x1e128], edx */ W32((u32)(r_eax+0x1e128u), r_edx);
    /* 007d31f2: mov dword ptr [eax + 0x1e13c], edx */ W32((u32)(r_eax+0x1e13cu), r_edx);
    /* 007d31f8: mov dword ptr [eax + 0x1e140], edx */ W32((u32)(r_eax+0x1e140u), r_edx);
    /* 007d31fe: mov dword ptr [eax + 0x1e144], edx */ W32((u32)(r_eax+0x1e144u), r_edx);
    /* 007d3204: mov dword ptr [eax + 0x1e0ec], edx */ W32((u32)(r_eax+0x1e0ecu), r_edx);
    /* 007d320a: mov dword ptr [eax + 0x1e12c], edx */ W32((u32)(r_eax+0x1e12cu), r_edx);
    /* 007d3210: mov dword ptr [eax + 0x1e130], edx */ W32((u32)(r_eax+0x1e130u), r_edx);
    /* 007d3216: mov dword ptr [eax + 0x1e134], edx */ W32((u32)(r_eax+0x1e134u), r_edx);
    /* 007d321c: mov dword ptr [eax + 0x1e138], edx */ W32((u32)(r_eax+0x1e138u), r_edx);
    /* 007d3222: mov dword ptr [eax + 0x1e148], edx */ W32((u32)(r_eax+0x1e148u), r_edx);
    /* 007d3228: mov dword ptr [eax + 0x1e070], edx */ W32((u32)(r_eax+0x1e070u), r_edx);
    /* 007d322e: mov dword ptr [0xaaecb4], edx */ W32((u32)(0xaaecb4u), r_edx);
    /* 007d3234: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007d3237: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007d323e: mov esp, ebp */ r_esp = r_ebp;
    /* 007d3240: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d3241: ret 0x18 */ FN_RET(0x007d2da0); r_esp += 28; return;
}

