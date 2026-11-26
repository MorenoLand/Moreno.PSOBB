#include "protos.h"

void f_00570000(void)
{
    FN_ENTER(0x00570000);
    /* 00570000: in al, 0 */ UNSUP(0x00570000, "in al, 0");
    /* 00570002: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00570004: mov dword ptr [eax + 0x40], edi */ W32((u32)(r_eax+0x40u), r_edi);
    /* 00570007: mov dword ptr [eax + 0xe0], esi */ W32((u32)(r_eax+0xe0u), r_esi);
    /* 0057000d: mov dword ptr [eax + 0xe8], edi */ W32((u32)(r_eax+0xe8u), r_edi);
    /* 00570013: mov dword ptr [eax + 0xdc], ecx */ W32((u32)(r_eax+0xdcu), r_ecx);
    /* 00570019: mov ecx, dword ptr [0xa73ed8] */ r_ecx = R32((u32)(0xa73ed8u));
    /* 0057001f: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00570025: mov edx, dword ptr [edx + 0x58] */ r_edx = R32((u32)(r_edx+0x58u));
    /* 00570028: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 0057002e: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00570034: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570037: mov edx, dword ptr [edx + 0x5c] */ r_edx = R32((u32)(r_edx+0x5cu));
    /* 0057003a: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 00570040: movzx edx, word ptr [ecx + 0x28] */ r_edx = (u32)R16((u32)(r_ecx+0x28u));
    /* 00570044: mov word ptr [eax + 0x28], dx */ W16((u32)(r_eax+0x28u), (u16)r_edx);
    /* 00570048: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0057004c: mov dword ptr [eax + 0xc0], 0xffffc000 */ W32((u32)(r_eax+0xc0u), 0xffffc000u);
    /* 00570056: mov word ptr [eax + 0xd8], dx */ W16((u32)(r_eax+0xd8u), (u16)r_edx);
    /* 0057005d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057005f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570062: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00570068: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 0057006e: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 00570074: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0057007a: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 00570080: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00570085: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x57008au); f_0082d990();
    /* 0057008a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057008d: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00570093: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 0057009d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057009f: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 005700a9: mov dword ptr [eax + 0xb4], 0x3f000000 */ W32((u32)(r_eax+0xb4u), 0x3f000000u);
    /* 005700b3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5700b8u); f_0082d8bc();
    /* 005700b8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700bb: add edx, 0xac */ {  u32 a = r_edx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005700c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005700c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005700c4: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5700c9u); f_0082eab8();
    /* 005700c9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5700ceu); f_0082da80();
    /* 005700ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700d1: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 005700db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005700dd: push 0x9be8e4 */ { u32 v = 0x9be8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005700e2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5700e7u); f_007b9a88();
    /* 005700e7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700ea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700ed: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005700f3: mov dword ptr [edx + 0xc], 0x40400000 */ W32((u32)(r_edx+0xcu), 0x40400000u);
    /* 005700fa: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5700ffu); f_007b4f54();
    /* 005700ff: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00570102: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570105: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570108: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057010b: mov dword ptr [eax + 0xec], 0xf */ W32((u32)(r_eax+0xecu), 0xfu);
    /* 00570115: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570118: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057011f: mov esp, ebp */ r_esp = r_ebp;
    /* 00570121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570122: ret 0x10 */ FN_RET(0x00570000); r_esp += 20; return;
}

void f_0057004f(void)
{
    FN_ENTER(0x0057004f);
    /* 0057004f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00570051: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00570053: sar bh, 0xff */ { u32 c = (31u) & 31; u32 a = (u8)(r_ebx>>8); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 00570056: mov word ptr [eax + 0xd8], dx */ W16((u32)(r_eax+0xd8u), (u16)r_edx);
    /* 0057005d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057005f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570062: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00570068: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 0057006e: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 00570074: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0057007a: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 00570080: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00570085: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x57008au); f_0082d990();
    /* 0057008a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057008d: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00570093: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 0057009d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057009f: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 005700a9: mov dword ptr [eax + 0xb4], 0x3f000000 */ W32((u32)(r_eax+0xb4u), 0x3f000000u);
    /* 005700b3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5700b8u); f_0082d8bc();
    /* 005700b8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700bb: add edx, 0xac */ {  u32 a = r_edx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005700c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005700c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005700c4: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5700c9u); f_0082eab8();
    /* 005700c9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5700ceu); f_0082da80();
    /* 005700ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700d1: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 005700db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005700dd: push 0x9be8e4 */ { u32 v = 0x9be8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005700e2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5700e7u); f_007b9a88();
    /* 005700e7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700ea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700ed: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005700f3: mov dword ptr [edx + 0xc], 0x40400000 */ W32((u32)(r_edx+0xcu), 0x40400000u);
    /* 005700fa: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5700ffu); f_007b4f54();
    /* 005700ff: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00570102: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570105: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570108: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057010b: mov dword ptr [eax + 0xec], 0xf */ W32((u32)(r_eax+0xecu), 0xfu);
    /* 00570115: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570118: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057011f: mov esp, ebp */ r_esp = r_ebp;
    /* 00570121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570122: ret 0x10 */ FN_RET(0x0057004f); r_esp += 20; return;
}

void f_00570056(void)
{
    FN_ENTER(0x00570056);
    /* 00570056: mov word ptr [eax + 0xd8], dx */ W16((u32)(r_eax+0xd8u), (u16)r_edx);
    /* 0057005d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057005f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570062: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00570068: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 0057006e: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 00570074: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0057007a: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 00570080: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00570085: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x57008au); f_0082d990();
    /* 0057008a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057008d: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00570093: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 0057009d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057009f: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 005700a9: mov dword ptr [eax + 0xb4], 0x3f000000 */ W32((u32)(r_eax+0xb4u), 0x3f000000u);
    /* 005700b3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5700b8u); f_0082d8bc();
    /* 005700b8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700bb: add edx, 0xac */ {  u32 a = r_edx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005700c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005700c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005700c4: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5700c9u); f_0082eab8();
    /* 005700c9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5700ceu); f_0082da80();
    /* 005700ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700d1: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 005700db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005700dd: push 0x9be8e4 */ { u32 v = 0x9be8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005700e2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5700e7u); f_007b9a88();
    /* 005700e7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700ea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700ed: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005700f3: mov dword ptr [edx + 0xc], 0x40400000 */ W32((u32)(r_edx+0xcu), 0x40400000u);
    /* 005700fa: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5700ffu); f_007b4f54();
    /* 005700ff: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00570102: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570105: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570108: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057010b: mov dword ptr [eax + 0xec], 0xf */ W32((u32)(r_eax+0xecu), 0xfu);
    /* 00570115: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570118: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057011f: mov esp, ebp */ r_esp = r_ebp;
    /* 00570121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570122: ret 0x10 */ FN_RET(0x00570056); r_esp += 20; return;
}

void f_0057005f(void)
{
    FN_ENTER(0x0057005f);
    /* 0057005f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570062: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00570068: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 0057006e: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 00570074: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0057007a: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 00570080: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00570085: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x57008au); f_0082d990();
    /* 0057008a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057008d: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00570093: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 0057009d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057009f: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 005700a9: mov dword ptr [eax + 0xb4], 0x3f000000 */ W32((u32)(r_eax+0xb4u), 0x3f000000u);
    /* 005700b3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5700b8u); f_0082d8bc();
    /* 005700b8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700bb: add edx, 0xac */ {  u32 a = r_edx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005700c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005700c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005700c4: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5700c9u); f_0082eab8();
    /* 005700c9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5700ceu); f_0082da80();
    /* 005700ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700d1: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 005700db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005700dd: push 0x9be8e4 */ { u32 v = 0x9be8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005700e2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5700e7u); f_007b9a88();
    /* 005700e7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700ea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700ed: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005700f3: mov dword ptr [edx + 0xc], 0x40400000 */ W32((u32)(r_edx+0xcu), 0x40400000u);
    /* 005700fa: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5700ffu); f_007b4f54();
    /* 005700ff: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00570102: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570105: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570108: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057010b: mov dword ptr [eax + 0xec], 0xf */ W32((u32)(r_eax+0xecu), 0xfu);
    /* 00570115: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570118: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057011f: mov esp, ebp */ r_esp = r_ebp;
    /* 00570121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570122: ret 0x10 */ FN_RET(0x0057005f); r_esp += 20; return;
}

void f_00570128(void) /* sub_570128 */
{
    FN_ENTER(0x00570128);
    /* 00570128: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570129: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057012a: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057012d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057012f: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 00570135: mov eax, dword ptr [ebp + 0xcc] */ r_eax = R32((u32)(r_ebp+0xccu));
    /* 0057013b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057013e: mov dword ptr [ebp + 0xd0], edi */ W32((u32)(r_ebp+0xd0u), r_edi);
    /* 00570144: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570146: je 0x57028e */ if (fZ) goto L_0057028e;
L_0057014c:; BB(0x0057014c);
    /* 0057014c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057014f: jne 0x57023c */ if (!fZ) goto L_0057023c;
L_00570155:; BB(0x00570155);
    /* 00570155: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00570159: fld dword ptr [ebp + 0xe0] */ FPUSH(R_F32((u32)(r_ebp+0xe0u)));
    /* 0057015f: fadd dword ptr [ebp + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xacu));
    /* 00570165: mov eax, dword ptr [ebp + 0xe4] */ r_eax = R32((u32)(r_ebp+0xe4u));
    /* 0057016b: fld dword ptr [ebp + 0xe8] */ FPUSH(R_F32((u32)(r_ebp+0xe8u)));
    /* 00570171: fadd dword ptr [ebp + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb4u));
    /* 00570177: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00570179: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0057017d: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00570181: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00570185: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00570187: lea edi, [ebp + 0xe0] */ r_edi = (u32)(r_ebp+0xe0u);
    /* 0057018d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057018e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057018f: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x570194u); f_0077fffc();
    /* 00570194: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570197: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570199: je 0x570617 */ if (fZ) goto L_00570617;
L_0057019f:; BB(0x0057019f);
    /* 0057019f: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 005701a2: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 005701a5: mov dword ptr [ebp + 0xcc], 2 */ W32((u32)(r_ebp+0xccu), 0x2u);
L_005701af:; BB(0x005701af);
    /* 005701af: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 005701b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005701b4: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005701b8: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005701bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005701be: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005701c2: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005701c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005701c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005701c9: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5701ceu); f_007b4c58();
    /* 005701ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005701d1: je 0x5705b2 */ if (fZ) goto L_005705b2;
L_005701d7:; BB(0x005701d7);
    /* 005701d7: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005701da: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005701df: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_005701e2:; BB(0x005701e2);
    /* 005701e2: mov eax, dword ptr [ebp + 0xec] */ r_eax = R32((u32)(r_ebp+0xecu));
    /* 005701e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005701ea: jle 0x5704a0 */ if ((fZ||fS!=fO)) goto L_005704a0;
L_005701f0:; BB(0x005701f0);
    /* 005701f0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005701f3: mov dword ptr [ebp + 0xec], eax */ W32((u32)(r_ebp+0xecu), r_eax);
L_005701f9:; BB(0x005701f9);
    /* 005701f9: fld dword ptr [0x9269ec] */ FPUSH(R_F32((u32)(0x9269ecu)));
    /* 005701ff: fadd dword ptr [ebp + 0xd4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xd4u));
    /* 00570205: fcom dword ptr [0x9269e8] */ fx_compare(ST(0), R_F32((u32)(0x9269e8u))); 
    /* 0057020b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057020d: fstp dword ptr [ebp + 0xd4] */ W_F32((u32)(r_ebp+0xd4u), ST(0)); FPOP();
    /* 00570213: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00570214: jb 0x57022e */ if (fC) goto L_0057022e;
L_00570216:; BB(0x00570216);
    /* 00570216: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 0057021c: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0057021f: mov dword ptr [ebp + 0xcc], 2 */ W32((u32)(r_ebp+0xccu), 0x2u);
    /* 00570229: jmp 0x57038e */ goto L_0057038e;
L_0057022e:; BB(0x0057022e);
    /* 0057022e: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 00570234: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00570237: jmp 0x57038e */ goto L_0057038e;
L_0057023c:; BB(0x0057023c);
    /* 0057023c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057023f: jne 0x570286 */ if (!fZ) goto L_00570286;
L_00570241:; BB(0x00570241);
    /* 00570241: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00570244: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00570247: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
    /* 0057024a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057024e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00570250: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00570254: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00570258: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0057025c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057025e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057025f: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x570264u); f_007b4c58();
    /* 00570264: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570267: je 0x570632 */ if (fZ) goto L_00570632;
L_0057026d:; BB(0x0057026d);
    /* 0057026d: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00570270: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 00570276: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00570279: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057027e: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00570281: jmp 0x57038e */ goto L_0057038e;
L_00570286:; BB(0x00570286);
    /* 00570286: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00570289: jmp 0x57038e */ goto L_0057038e;
L_0057028e:; BB(0x0057028e);
    /* 0057028e: mov edx, dword ptr [ebp + 0xc0] */ r_edx = R32((u32)(r_ebp+0xc0u));
    /* 00570294: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00570297: fadd dword ptr [ebp + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xacu));
    /* 0057029d: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 005702a0: fadd dword ptr [ebp + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb4u));
    /* 005702a6: mov edi, dword ptr [ebp + 0x3c] */ r_edi = R32((u32)(r_ebp+0x3cu));
    /* 005702a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005702ab: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 005702af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005702b1: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 005702b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005702b7: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 005702ba: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 005702bd: add edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005702c3: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 005702c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005702c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005702cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005702cd: jl 0x5702d1 */ if ((fS!=fO)) goto L_005702d1;
L_005702cf:; BB(0x005702cf);
    /* 005702cf: mov edx, eax */ r_edx = r_eax;
L_005702d1:; BB(0x005702d1);
    /* 005702d1: mov dword ptr [ebp + 0xc0], edx */ W32((u32)(r_ebp+0xc0u), r_edx);
    /* 005702d7: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 005702db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005702dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005702de: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5702e3u); f_007b4c58();
    /* 005702e3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005702e6: je 0x5706b1 */ if (fZ) goto L_005706b1;
L_005702ec:; BB(0x005702ec);
    /* 005702ec: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005702ef: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005702f4: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_005702f7:; BB(0x005702f7);
    /* 005702f7: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005702fc: jne 0x57030c */ if (!fZ) goto L_0057030c;
L_005702fe:; BB(0x005702fe);
    /* 005702fe: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 00570304: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00570307: jmp 0x57038e */ goto L_0057038e;
L_0057030c:; BB(0x0057030c);
    /* 0057030c: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00570311: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x570316u); f_0082d990();
    /* 00570316: mov edx, dword ptr [ebp + 0xbc] */ r_edx = R32((u32)(r_ebp+0xbcu));
    /* 0057031c: add edx, dword ptr [ebp + 0xdc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00570322: mov dword ptr [ebp + 0xbc], edx */ W32((u32)(r_ebp+0xbcu), r_edx);
    /* 00570328: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057032a: mov dword ptr [ebp + 0xac], 0 */ W32((u32)(r_ebp+0xacu), 0x0u);
    /* 00570334: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 0057033e: mov dword ptr [ebp + 0xb4], 0x3f4ccccd */ W32((u32)(r_ebp+0xb4u), 0x3f4ccccdu);
    /* 00570348: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57034du); f_0082d8bc();
    /* 0057034d: lea edx, [ebp + 0xac] */ r_edx = (u32)(r_ebp+0xacu);
    /* 00570353: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00570354: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00570356: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x57035bu); f_0082eab8();
    /* 0057035b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x570360u); f_0082da80();
    /* 00570360: mov dword ptr [ebp + 0xc0], 0 */ W32((u32)(r_ebp+0xc0u), 0x0u);
    /* 0057036a: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057036f: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00570372: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570373: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x570378u); f_0050b510();
    /* 00570378: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057037b: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 00570381: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00570384: mov dword ptr [ebp + 0xcc], 1 */ W32((u32)(r_ebp+0xccu), 0x1u);
L_0057038e:; BB(0x0057038e);
    /* 0057038e: fadd dword ptr [0x926a00] */ ST(0) = ST(0) + R_F32((u32)(0x926a00u));
    /* 00570394: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00570397: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 0057039a: fstp dword ptr [ebp + 0xe4] */ W_F32((u32)(r_ebp+0xe4u), ST(0)); FPOP();
    /* 005703a0: mov dword ptr [ebp + 0xe0], eax */ W32((u32)(r_ebp+0xe0u), r_eax);
    /* 005703a6: mov dword ptr [ebp + 0xe8], edx */ W32((u32)(r_ebp+0xe8u), r_edx);
    /* 005703ac: cmp edi, 0x96 */ {  u32 a = r_edi; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005703b2: jl 0x57049a */ if ((fS!=fO)) goto L_0057049a;
L_005703b8:; BB(0x005703b8);
    /* 005703b8: movzx eax, word ptr [ebp + 0xd8] */ r_eax = (u32)R16((u32)(r_ebp+0xd8u));
    /* 005703bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005703c0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5703c5u); f_007b4d18();
    /* 005703c5: mov edi, eax */ r_edi = r_eax;
    /* 005703c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005703ca: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 005703d0: mov dword ptr [edx + 0xc], 0x40a00000 */ W32((u32)(r_edx+0xcu), 0x40a00000u);
    /* 005703d7: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x5703dcu); f_007b51c4();
    /* 005703dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005703de: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5703e3u); f_007b6894();
    /* 005703e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005703e5: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5703eau); f_007b798c();
    /* 005703ea: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 005703f0: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 005703f3: test edx, 0x180000 */ {  u32 a = r_edx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005703f9: je 0x570462 */ if (fZ) goto L_00570462;
L_005703fb:; BB(0x005703fb);
    /* 005703fb: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005703fe: mov ebx, edi */ r_ebx = r_edi;
    /* 00570400: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00570404: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00570406: mov edi, eax */ r_edi = r_eax;
L_00570408:; BB(0x00570408);
    /* 00570408: mov ecx, dword ptr [edi + 0xaad6e0] */ r_ecx = R32((u32)(r_edi+0xaad6e0u));
    /* 0057040e: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00570411: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570413: je 0x5706a5 */ if (fZ) goto L_005706a5;
L_00570419:; BB(0x00570419);
    /* 00570419: movzx edx, word ptr [ecx + 0x96] */ r_edx = (u32)R16((u32)(r_ecx+0x96u));
    /* 00570420: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570423: jne 0x570456 */ if (!fZ) goto L_00570456;
L_00570425:; BB(0x00570425);
    /* 00570425: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570427: je 0x570456 */ if (fZ) goto L_00570456;
L_00570429:; BB(0x00570429);
    /* 00570429: mov edx, dword ptr [0x9269cc] */ r_edx = R32((u32)(0x9269ccu));
    /* 0057042f: mov esi, dword ptr [0xa73edc] */ r_esi = R32((u32)(0xa73edcu));
    /* 00570435: fild dword ptr [esi + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x24u)));
    /* 00570438: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0057043a: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0057043e: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00570442: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00570447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570449: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057044b: push dword ptr [esp + 0x50] */ { u32 v = R32((u32)(r_esp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057044f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00570450: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00570451: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x570454u); call_ind(t); }
    /* 00570454: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00570456:; BB(0x00570456);
    /* 00570456: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570459: jl 0x570408 */ if ((fS!=fO)) goto L_00570408;
L_0057045b:; BB(0x0057045b);
    /* 0057045b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0057045e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_00570462:; BB(0x00570462);
    /* 00570462: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 00570467: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0057046a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057046b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x570470u); f_0050b510();
    /* 00570470: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00570472: push 0x131 */ { u32 v = 0x131u; r_esp -= 4; W32(r_esp, v); }
    /* 00570477: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x57047cu); f_0052d204();
    /* 0057047c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057047e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057047f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00570480: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570481: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570482: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x570487u); f_00814298();
    /* 00570487: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0057048b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00570490: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00570494: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00570497: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570498: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00570499: ret  */ FN_RET(0x00570128); r_esp += 4; return;
L_0057049a:; BB(0x0057049a);
    /* 0057049a: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057049d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057049e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057049f: ret  */ FN_RET(0x00570128); r_esp += 4; return;
L_005704a0:; BB(0x005704a0);
    /* 005704a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005704a2: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5704a7u); f_007b6880();
    /* 005704a7: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 005704ad: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005704b0: test edx, 0x380000 */ {  u32 a = r_edx; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005704b6: je 0x5701f9 */ if (fZ) goto L_005701f9;
L_005704bc:; BB(0x005704bc);
    /* 005704bc: movzx eax, word ptr [ebp + 0xd8] */ r_eax = (u32)R16((u32)(r_ebp+0xd8u));
    /* 005704c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005704c4: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5704c9u); f_007b4d18();
    /* 005704c9: mov edi, eax */ r_edi = r_eax;
    /* 005704cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005704ce: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 005704d4: mov dword ptr [edx + 0xc], 0x40a00000 */ W32((u32)(r_edx+0xcu), 0x40a00000u);
    /* 005704db: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x5704e0u); f_007b51c4();
    /* 005704e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005704e2: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5704e7u); f_007b6894();
    /* 005704e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005704e9: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5704eeu); f_007b798c();
    /* 005704ee: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 005704f4: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 005704f7: test edx, 0x180000 */ {  u32 a = r_edx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005704fd: je 0x570566 */ if (fZ) goto L_00570566;
L_005704ff:; BB(0x005704ff);
    /* 005704ff: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00570502: mov ebx, edi */ r_ebx = r_edi;
    /* 00570504: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00570508: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057050a: mov edi, eax */ r_edi = r_eax;
L_0057050c:; BB(0x0057050c);
    /* 0057050c: mov ecx, dword ptr [edi + 0xaad6e0] */ r_ecx = R32((u32)(r_edi+0xaad6e0u));
    /* 00570512: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00570515: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570517: je 0x5705a9 */ if (fZ) goto L_005705a9;
L_0057051d:; BB(0x0057051d);
    /* 0057051d: movzx edx, word ptr [ecx + 0x96] */ r_edx = (u32)R16((u32)(r_ecx+0x96u));
    /* 00570524: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570527: jne 0x57055a */ if (!fZ) goto L_0057055a;
L_00570529:; BB(0x00570529);
    /* 00570529: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057052b: je 0x57055a */ if (fZ) goto L_0057055a;
L_0057052d:; BB(0x0057052d);
    /* 0057052d: mov edx, dword ptr [0x9269d4] */ r_edx = R32((u32)(0x9269d4u));
    /* 00570533: mov esi, dword ptr [0xa73edc] */ r_esi = R32((u32)(0xa73edcu));
    /* 00570539: fild dword ptr [esi + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x24u)));
    /* 0057053c: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0057053e: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00570542: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00570546: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0057054b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057054c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057054d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057054f: push dword ptr [esp + 0x3c] */ { u32 v = R32((u32)(r_esp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00570553: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00570554: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00570555: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x570558u); call_ind(t); }
    /* 00570558: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0057055a:; BB(0x0057055a);
    /* 0057055a: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057055d: jl 0x57050c */ if ((fS!=fO)) goto L_0057050c;
L_0057055f:; BB(0x0057055f);
    /* 0057055f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00570562: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_00570566:; BB(0x00570566);
    /* 00570566: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 0057056b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0057056e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057056f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x570574u); f_0050b510();
    /* 00570574: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00570576: push 0x131 */ { u32 v = 0x131u; r_esp -= 4; W32(r_esp, v); }
    /* 0057057b: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x570580u); f_0052d204();
    /* 00570580: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00570582: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00570583: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00570584: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570586: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57058bu); f_00814298();
    /* 0057058b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057058e: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00570592: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 00570598: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0057059b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005705a0: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005705a4: jmp 0x57038e */ goto L_0057038e;
L_005705a9:; BB(0x005705a9);
    /* 005705a9: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005705ac: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005705b0: jmp 0x570566 */ goto L_00570566;
L_005705b2:; BB(0x005705b2);
    /* 005705b2: fld dword ptr [0x9269f4] */ FPUSH(R_F32((u32)(0x9269f4u)));
    /* 005705b8: fadd dword ptr [ebp + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb0u));
    /* 005705be: fld dword ptr [0x9269f0] */ FPUSH(R_F32((u32)(0x9269f0u)));
    /* 005705c4: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 005705c8: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 005705cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005705cd: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 005705d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005705d3: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005705d5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005705d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005705d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005705da: ja 0x5705fc */ if ((!fC&&!fZ)) goto L_005705fc;
L_005705dc:; BB(0x005705dc);
    /* 005705dc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005705de: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005705e0: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005705e3: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 005705e6: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005705ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005705ee: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 005705f4: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 005705f7: jmp 0x5701e2 */ goto L_005701e2;
L_005705fc:; BB(0x005705fc);
    /* 005705fc: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005705fe: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00570601: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00570604: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 0057060a: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057060f: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00570612: jmp 0x5701e2 */ goto L_005701e2;
L_00570617:; BB(0x00570617);
    /* 00570617: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0057061b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0057061f: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00570623: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00570627: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0057062a: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 0057062d: jmp 0x5701af */ goto L_005701af;
L_00570632:; BB(0x00570632);
    /* 00570632: fld dword ptr [0x9269f4] */ FPUSH(R_F32((u32)(0x9269f4u)));
    /* 00570638: fadd dword ptr [ebp + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb0u));
    /* 0057063e: fld dword ptr [0x9269f0] */ FPUSH(R_F32((u32)(0x9269f0u)));
    /* 00570644: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00570648: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0057064b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057064d: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00570651: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00570653: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00570655: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00570657: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00570659: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057065a: ja 0x570682 */ if ((!fC&&!fZ)) goto L_00570682;
L_0057065c:; BB(0x0057065c);
    /* 0057065c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057065e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00570660: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00570663: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 00570669: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 0057066c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057066e: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00570674: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0057067a: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0057067d: jmp 0x57038e */ goto L_0057038e;
L_00570682:; BB(0x00570682);
    /* 00570682: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00570684: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00570687: mov edi, dword ptr [ebp + 0xd0] */ r_edi = R32((u32)(r_ebp+0xd0u));
    /* 0057068d: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 00570690: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00570692: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 00570698: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057069d: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005706a0: jmp 0x57038e */ goto L_0057038e;
L_005706a5:; BB(0x005706a5);
    /* 005706a5: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005706a8: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005706ac: jmp 0x570462 */ goto L_00570462;
L_005706b1:; BB(0x005706b1);
    /* 005706b1: fld dword ptr [0x9269f4] */ FPUSH(R_F32((u32)(0x9269f4u)));
    /* 005706b7: fadd dword ptr [ebp + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb0u));
    /* 005706bd: fld dword ptr [0x9269f0] */ FPUSH(R_F32((u32)(0x9269f0u)));
    /* 005706c3: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 005706c7: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 005706ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005706cc: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 005706d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005706d2: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005706d4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005706d6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005706d8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005706d9: ja 0x5706fa */ if ((!fC&&!fZ)) goto L_005706fa;
L_005706db:; BB(0x005706db);
    /* 005706db: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005706dd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005706df: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 005706e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005706e4: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 005706ea: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005706ed: or eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005706f2: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005706f5: jmp 0x5702f7 */ goto L_005702f7;
L_005706fa:; BB(0x005706fa);
    /* 005706fa: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005706fc: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005706ff: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00570702: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 00570708: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057070d: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00570710: jmp 0x5702f7 */ goto L_005702f7;
}

void f_00570718(void) /* sub_570718 */
{
    FN_ENTER(0x00570718);
    /* 00570718: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00570719: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057071b: mov ecx, dword ptr [ebx + 0xc8] */ r_ecx = R32((u32)(r_ebx+0xc8u));
    /* 00570721: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x570726u); f_00829cc8();
    /* 00570726: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x57072bu); f_0082d7b0();
    /* 0057072b: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0057072e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x570733u); f_0082d838();
    /* 00570733: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 00570739: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057073b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x570740u); f_0082d8bc();
    /* 00570740: mov edx, dword ptr [ebx + 0xc0] */ r_edx = R32((u32)(r_ebx+0xc0u));
    /* 00570746: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00570748: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x57074du); f_0082e9e4();
    /* 0057074d: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00570752: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00570758: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057075d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00570762: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x570767u); f_0082e1e8();
    /* 00570767: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00570768: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57076du); f_0082da80();
    /* 0057076d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057076e: ret  */ FN_RET(0x00570718); r_esp += 4; return;
}

void f_00570770(void) /* sub_570770 */
{
    FN_ENTER(0x00570770);
    /* 00570770: mov dword ptr [0xa73f00], 0x3f800000 */ W32((u32)(0xa73f00u), 0x3f800000u);
    /* 0057077a: mov dword ptr [0xa73f04], 0x41000000 */ W32((u32)(0xa73f04u), 0x41000000u);
    /* 00570784: mov dword ptr [0xa73f08], 0x3fc00000 */ W32((u32)(0xa73f08u), 0x3fc00000u);
    /* 0057078e: ret  */ FN_RET(0x00570770); r_esp += 4; return;
}

void f_00570790(void) /* sub_570790 */
{
    FN_ENTER(0x00570790);
    /* 00570790: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00570791: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00570793: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00570795: call 0x5707b4 */ r_esp -= 4; W32(r_esp, 0x57079au); f_005707b4();
    /* 0057079a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057079e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005707a0: jne 0x5707a6 */ if (!fZ) goto L_005707a6;
L_005707a2:; BB(0x005707a2);
    /* 005707a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005707a3: ret 4 */ FN_RET(0x00570790); r_esp += 8; return;
L_005707a6:; BB(0x005707a6);
    /* 005707a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005707a7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5707acu); f_005c2f74();
    /* 005707ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005707ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005707ae: ret 4 */ FN_RET(0x00570790); r_esp += 8; return;
}

void f_005707b4(void) /* sub_5707B4 */
{
    FN_ENTER(0x005707b4);
    /* 005707b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005707b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005707b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005707b9: push 0x8d6fc4 */ { u32 v = 0x8d6fc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005707be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005707c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005707c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005707cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005707cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005707d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005707d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005707d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005707db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005707de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005707e5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005707e8: mov dword ptr [ecx], 0xb061b0 */ W32((u32)(r_ecx), 0xb061b0u);
    /* 005707ee: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5707f3u); f_007b9c8c();
    /* 005707f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005707fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005707fd: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x570802u); f_007b4aec();
    /* 00570802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057080c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057080e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057080f: ret  */ FN_RET(0x005707b4); r_esp += 4; return;
}

void f_00570810(void) /* sub_570810 */
{
    FN_ENTER(0x00570810);
    /* 00570810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570811: mov ebp, esp */ r_ebp = r_esp;
    /* 00570813: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00570815: push 0x8d6fe0 */ { u32 v = 0x8d6fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057081a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00570820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570821: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00570828: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057082b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057082e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00570831: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00570834: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00570837: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057083a: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00570840: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00570843: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00570846: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00570849: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0057084d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00570850: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00570853: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x570858u); f_007b4b48();
    /* 00570858: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057085f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00570862: mov dword ptr [ecx], 0xb061b0 */ W32((u32)(r_ecx), 0xb061b0u);
    /* 00570868: mov eax, dword ptr [0x9be910] */ r_eax = R32((u32)(0x9be910u));
    /* 0057086d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057086f: push 0x9be914 */ { u32 v = 0x9be914u; r_esp -= 4; W32(r_esp, v); }
    /* 00570874: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00570877: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x57087cu); f_007b9a88();
    /* 0057087c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0057087f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00570882: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00570885: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 0057088b: mov dword ptr [ebx + 0xc], 0x40800000 */ W32((u32)(r_ebx+0xcu), 0x40800000u);
    /* 00570892: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00570894: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00570896: mov dword ptr [edx + 0x38], esi */ W32((u32)(r_edx+0x38u), r_esi);
    /* 00570899: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 0057089c: mov dword ptr [edx + 0x3c], edi */ W32((u32)(r_edx+0x3cu), r_edi);
    /* 0057089f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005708a2: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 005708a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005708a8: mov word ptr [edx + 0xc4], cx */ W16((u32)(r_edx+0xc4u), (u16)r_ecx);
    /* 005708af: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005708b2: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 005708b5: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005708b8: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 005708bb: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5708c0u); f_008587a5();
    /* 005708c0: fld dword ptr [0x926a60] */ FPUSH(R_F32((u32)(0x926a60u)));
    /* 005708c6: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005708c9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005708cc: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 005708cf: fdiv dword ptr [0x926a64] */ ST(0) = ST(0) / R_F32((u32)(0x926a64u));
    /* 005708d5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005708d7: fmul dword ptr [0x926a5c] */ ST(0) = ST(0) * R_F32((u32)(0x926a5cu));
    /* 005708dd: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 005708df: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005708e2: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005708e6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005708eb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005708ee: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005708f1: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005708f4: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005708f7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005708fa: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 00570900: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x570905u); f_008587a5();
    /* 00570905: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00570908: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057090b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057090e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00570911: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00570914: fdiv dword ptr [0x926a64] */ ST(0) = ST(0) / R_F32((u32)(0x926a64u));
    /* 0057091a: fadd dword ptr [0x926a58] */ ST(0) = ST(0) + R_F32((u32)(0x926a58u));
    /* 00570920: fmul dword ptr [0x926a54] */ ST(0) = ST(0) * R_F32((u32)(0x926a54u));
    /* 00570926: fmul dword ptr [ebx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0xcu));
    /* 00570929: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0057092c: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00570930: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00570935: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00570938: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0057093b: fistp dword ptr [edx + 0xd0] */ W32((u32)(r_edx+0xd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00570941: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00570944: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00570947: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 0057094d: movzx esi, word ptr [edi + 0x28] */ r_esi = (u32)R16((u32)(r_edi+0x28u));
    /* 00570951: mov eax, dword ptr [0xa73e9c] */ r_eax = R32((u32)(0xa73e9cu));
    /* 00570956: mov word ptr [edx + 0x28], si */ W16((u32)(r_edx+0x28u), (u16)r_esi);
    /* 0057095a: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0057095e: mov word ptr [edx + 0xd8], cx */ W16((u32)(r_edx+0xd8u), (u16)r_ecx);
    /* 00570965: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 0057096b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00570970: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 0057097a: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 00570984: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x570989u); f_0082d990();
    /* 00570989: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0057098c: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0057098f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00570991: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x570996u); f_0082d8bc();
    /* 00570996: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00570999: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0057099c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057099e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5709a3u); f_0082e9e4();
    /* 005709a3: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005709a6: add edx, 0xac */ {  u32 a = r_edx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005709ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005709ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005709af: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5709b4u); f_00830aa0();
    /* 005709b4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5709b9u); f_0082da80();
    /* 005709b9: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005709bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005709bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005709c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005709c5: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 005709cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005709d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005709d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005709db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005709dc: ret 0xc */ FN_RET(0x00570810); r_esp += 16; return;
}

void f_005709e0(void) /* sub_5709E0 */
{
    FN_ENTER(0x005709e0);
    /* 005709e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005709e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005709e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005709e3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005709e6: mov esi, ecx */ r_esi = r_ecx;
    /* 005709e8: movzx eax, word ptr [esi + 0xc4] */ r_eax = (u32)R16((u32)(r_esi+0xc4u));
    /* 005709ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005709f0: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x5709f5u); f_00578c74();
    /* 005709f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005709f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005709f8: je 0x570a95 */ if (fZ) goto L_00570a95;
L_005709fe:; BB(0x005709fe);
    /* 005709fe: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00570a02: mov ebp, dword ptr [eax + 0x300] */ r_ebp = R32((u32)(r_eax+0x300u));
    /* 00570a08: mov edi, dword ptr [eax + 0x304] */ r_edi = R32((u32)(r_eax+0x304u));
    /* 00570a0e: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 00570a14: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00570a18: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00570a1c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00570a20: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00570a23: mov edx, ebp */ r_edx = r_ebp;
    /* 00570a25: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x570a2au); f_0082f9c4();
    /* 00570a2a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00570a2e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x570a33u); f_0083173c();
    /* 00570a33: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00570a39: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570a3c: jl 0x570a8b */ if ((fS!=fO)) goto L_00570a8b;
L_00570a3e:; BB(0x00570a3e);
    /* 00570a3e: fcomp dword ptr [0xa73e98] */ fx_compare(ST(0), R_F32((u32)(0xa73e98u))); FPOP();
    /* 00570a44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00570a46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00570a47: mov edi, dword ptr [0xa73e98] */ r_edi = R32((u32)(0xa73e98u));
    /* 00570a4d: ja 0x570a57 */ if ((!fC&&!fZ)) goto L_00570a57;
L_00570a4f:; BB(0x00570a4f);
    /* 00570a4f: lea edi, [esi + 0xac] */ r_edi = (u32)(r_esi+0xacu);
    /* 00570a55: jmp 0x570a9e */ goto L_00570a9e;
L_00570a57:; BB(0x00570a57);
    /* 00570a57: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00570a5b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570a5d: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x570a62u); f_0078ea90();
    /* 00570a62: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00570a64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570a67: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00570a6b: lea edi, [esi + 0xac] */ r_edi = (u32)(r_esi+0xacu);
    /* 00570a71: mov ecx, edi */ r_ecx = r_edi;
    /* 00570a73: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x570a78u); f_0082ebac();
    /* 00570a78: push dword ptr [0xa73e9c] */ { u32 v = R32((u32)(0xa73e9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00570a7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570a7f: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x570a84u); f_0078ea90();
    /* 00570a84: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00570a86: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570a89: jmp 0x570a9e */ goto L_00570a9e;
L_00570a8b:; BB(0x00570a8b);
    /* 00570a8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00570a8d: lea edi, [esi + 0xac] */ r_edi = (u32)(r_esi+0xacu);
    /* 00570a93: jmp 0x570a9e */ goto L_00570a9e;
L_00570a95:; BB(0x00570a95);
    /* 00570a95: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00570a98: lea edi, [esi + 0xac] */ r_edi = (u32)(r_esi+0xacu);
L_00570a9e:; BB(0x00570a9e);
    /* 00570a9e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00570aa1: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00570aa4: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00570aa7: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 00570aaa: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00570aad: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00570ab0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00570ab2: mov edx, edi */ r_edx = r_edi;
    /* 00570ab4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x570ab9u); f_0082ebac();
    /* 00570ab9: lea edx, [esi + 0x5c] */ r_edx = (u32)(r_esi+0x5cu);
    /* 00570abc: lea eax, [esi + 0x60] */ r_eax = (u32)(r_esi+0x60u);
    /* 00570abf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570ac0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00570ac1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570ac2: call 0x7a8d04 */ r_esp -= 4; W32(r_esp, 0x570ac7u); f_007a8d04();
    /* 00570ac7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570aca: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 00570ad0: add dword ptr [esi + 0xcc], eax */ { u32 ad = (u32)(r_esi+0xccu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00570ad6: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00570adc: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570adf: jge 0x570bdc */ if ((fS==fO)) goto L_00570bdc;
L_00570ae5:; BB(0x00570ae5);
    /* 00570ae5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00570ae8: cmp eax, dword ptr [0xa73e94] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa73e94u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570aee: mov dword ptr [esi + 0xc8], eax */ W32((u32)(r_esi+0xc8u), r_eax);
    /* 00570af4: jle 0x570bd5 */ if ((fZ||fS!=fO)) goto L_00570bd5;
L_00570afa:; BB(0x00570afa);
    /* 00570afa: movzx eax, word ptr [esi + 0xd8] */ r_eax = (u32)R16((u32)(r_esi+0xd8u));
    /* 00570b01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570b02: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x570b07u); f_007b4d18();
    /* 00570b07: mov edi, eax */ r_edi = r_eax;
    /* 00570b09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570b0c: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00570b12: mov dword ptr [eax + 0xc], 0x40c00000 */ W32((u32)(r_eax+0xcu), 0x40c00000u);
    /* 00570b19: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x570b1eu); f_007b51c4();
    /* 00570b1e: mov ecx, esi */ r_ecx = r_esi;
    /* 00570b20: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x570b25u); f_007b6894();
    /* 00570b25: mov ecx, esi */ r_ecx = r_esi;
    /* 00570b27: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x570b2cu); f_007b798c();
    /* 00570b2c: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00570b32: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00570b35: test eax, 0x180000 */ {  u32 a = r_eax; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570b3a: je 0x570b9f */ if (fZ) goto L_00570b9f;
L_00570b3c:; BB(0x00570b3c);
    /* 00570b3c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00570b3f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00570b43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00570b45: mov ebx, edi */ r_ebx = r_edi;
    /* 00570b47: mov edi, eax */ r_edi = r_eax;
L_00570b49:; BB(0x00570b49);
    /* 00570b49: mov esi, dword ptr [edi + 0xaad6e0] */ r_esi = R32((u32)(r_edi+0xaad6e0u));
    /* 00570b4f: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00570b52: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570b54: je 0x570cce */ if (fZ) goto L_00570cce;
L_00570b5a:; BB(0x00570b5a);
    /* 00570b5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00570b5b: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x570b60u); f_006ea71c();
    /* 00570b60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00570b61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570b63: je 0x570b93 */ if (fZ) goto L_00570b93;
L_00570b65:; BB(0x00570b65);
    /* 00570b65: mov eax, dword ptr [0x926a14] */ r_eax = R32((u32)(0x926a14u));
    /* 00570b6a: mov edx, dword ptr [0xa73edc] */ r_edx = R32((u32)(0xa73edcu));
    /* 00570b70: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 00570b73: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00570b75: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00570b79: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00570b7d: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00570b82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570b84: mov ecx, esi */ r_ecx = r_esi;
    /* 00570b86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570b88: push dword ptr [esp + 0x40] */ { u32 v = R32((u32)(r_esp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00570b8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570b8d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00570b8e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x570b91u); call_ind(t); }
    /* 00570b91: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00570b93:; BB(0x00570b93);
    /* 00570b93: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570b96: jl 0x570b49 */ if ((fS!=fO)) goto L_00570b49;
L_00570b98:; BB(0x00570b98);
    /* 00570b98: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00570b9b: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_00570b9f:; BB(0x00570b9f);
    /* 00570b9f: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 00570ba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570ba5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x570baau); f_0050b510();
    /* 00570baa: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00570bac: push 0x131 */ { u32 v = 0x131u; r_esp -= 4; W32(r_esp, v); }
    /* 00570bb1: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x570bb6u); f_0052d204();
    /* 00570bb6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00570bb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570bb9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570bba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570bbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570bbc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x570bc1u); f_00814298();
    /* 00570bc1: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00570bc5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00570bca: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00570bce: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00570bd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570bd2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00570bd3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00570bd4: ret  */ FN_RET(0x005709e0); r_esp += 4; return;
L_00570bd5:; BB(0x00570bd5);
    /* 00570bd5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00570bd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570bd9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00570bda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00570bdb: ret  */ FN_RET(0x005709e0); r_esp += 4; return;
L_00570bdc:; BB(0x00570bdc);
    /* 00570bdc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00570bde: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570bdf: lea eax, [esi + 0x44] */ r_eax = (u32)(r_esi+0x44u);
    /* 00570be2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570be3: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x570be8u); f_0077fffc();
    /* 00570be8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570beb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570bed: je 0x570ce3 */ if (fZ) goto L_00570ce3;
L_00570bf3:; BB(0x00570bf3);
    /* 00570bf3: movzx eax, word ptr [esi + 0xd8] */ r_eax = (u32)R16((u32)(r_esi+0xd8u));
    /* 00570bfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570bfb: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x570c00u); f_007b4d18();
    /* 00570c00: mov edi, eax */ r_edi = r_eax;
    /* 00570c02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570c05: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00570c0b: mov dword ptr [eax + 0xc], 0x40c00000 */ W32((u32)(r_eax+0xcu), 0x40c00000u);
    /* 00570c12: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x570c17u); f_007b51c4();
    /* 00570c17: mov ecx, esi */ r_ecx = r_esi;
    /* 00570c19: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x570c1eu); f_007b6894();
    /* 00570c1e: mov ecx, esi */ r_ecx = r_esi;
    /* 00570c20: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x570c25u); f_007b798c();
    /* 00570c25: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00570c2b: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00570c2e: test eax, 0x180000 */ {  u32 a = r_eax; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570c33: je 0x570c98 */ if (fZ) goto L_00570c98;
L_00570c35:; BB(0x00570c35);
    /* 00570c35: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00570c38: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00570c3c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00570c3e: mov ebx, edi */ r_ebx = r_edi;
    /* 00570c40: mov edi, eax */ r_edi = r_eax;
L_00570c42:; BB(0x00570c42);
    /* 00570c42: mov esi, dword ptr [edi + 0xaad6e0] */ r_esi = R32((u32)(r_edi+0xaad6e0u));
    /* 00570c48: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00570c4b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570c4d: je 0x570cda */ if (fZ) goto L_00570cda;
L_00570c53:; BB(0x00570c53);
    /* 00570c53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00570c54: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x570c59u); f_006ea71c();
    /* 00570c59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00570c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570c5c: je 0x570c8c */ if (fZ) goto L_00570c8c;
L_00570c5e:; BB(0x00570c5e);
    /* 00570c5e: mov eax, dword ptr [0x926a1c] */ r_eax = R32((u32)(0x926a1cu));
    /* 00570c63: mov edx, dword ptr [0xa73edc] */ r_edx = R32((u32)(0xa73edcu));
    /* 00570c69: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 00570c6c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00570c6e: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00570c72: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00570c76: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00570c7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570c7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570c7d: mov ecx, esi */ r_ecx = r_esi;
    /* 00570c7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570c81: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00570c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570c86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00570c87: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x570c8au); call_ind(t); }
    /* 00570c8a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00570c8c:; BB(0x00570c8c);
    /* 00570c8c: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570c8f: jl 0x570c42 */ if ((fS!=fO)) goto L_00570c42;
L_00570c91:; BB(0x00570c91);
    /* 00570c91: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00570c94: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_00570c98:; BB(0x00570c98);
    /* 00570c98: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 00570c9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570c9e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x570ca3u); f_0050b510();
    /* 00570ca3: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00570ca5: push 0x131 */ { u32 v = 0x131u; r_esp -= 4; W32(r_esp, v); }
    /* 00570caa: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x570cafu); f_0052d204();
    /* 00570caf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00570cb1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570cb2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570cb3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570cb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570cb5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x570cbau); f_00814298();
    /* 00570cba: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00570cbe: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00570cc3: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00570cc7: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00570cca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570ccb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00570ccc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00570ccd: ret  */ FN_RET(0x005709e0); r_esp += 4; return;
L_00570cce:; BB(0x00570cce);
    /* 00570cce: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00570cd1: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00570cd5: jmp 0x570b9f */ goto L_00570b9f;
L_00570cda:; BB(0x00570cda);
    /* 00570cda: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00570cdd: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00570ce1: jmp 0x570c98 */ goto L_00570c98;
L_00570ce3:; BB(0x00570ce3);
    /* 00570ce3: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00570ce6: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 00570ce9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00570ced: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00570cf0: mov ecx, esi */ r_ecx = r_esi;
    /* 00570cf2: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00570cf6: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00570cfa: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00570cfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570d00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570d01: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x570d06u); f_007b4c58();
    /* 00570d06: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570d09: je 0x570d16 */ if (fZ) goto L_00570d16;
L_00570d0b:; BB(0x00570d0b);
    /* 00570d0b: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00570d11: jmp 0x570ae5 */ goto L_00570ae5;
L_00570d16:; BB(0x00570d16);
    /* 00570d16: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00570d19: fsub dword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x18u));
    /* 00570d1d: fcomp dword ptr [0x926a48] */ fx_compare(ST(0), R_F32((u32)(0x926a48u))); FPOP();
    /* 00570d23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00570d25: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00570d26: jb 0x570d51 */ if (fC) goto L_00570d51;
L_00570d28:; BB(0x00570d28);
    /* 00570d28: mov edi, dword ptr [esi + 0xa4] */ r_edi = R32((u32)(r_esi+0xa4u));
    /* 00570d2e: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00570d31: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00570d34: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00570d37: mov edi, dword ptr [esi + 0xa4] */ r_edi = R32((u32)(r_esi+0xa4u));
    /* 00570d3d: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00570d40: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00570d43: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00570d46: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00570d4c: jmp 0x570ae5 */ goto L_00570ae5;
L_00570d51:; BB(0x00570d51);
    /* 00570d51: mov edi, dword ptr [esi + 0xa4] */ r_edi = R32((u32)(r_esi+0xa4u));
    /* 00570d57: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00570d5a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00570d5d: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00570d60: mov edi, dword ptr [esi + 0xa4] */ r_edi = R32((u32)(r_esi+0xa4u));
    /* 00570d66: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00570d69: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00570d6c: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00570d6f: mov ecx, esi */ r_ecx = r_esi;
    /* 00570d71: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x570d76u); f_007b6894();
    /* 00570d76: mov ecx, esi */ r_ecx = r_esi;
    /* 00570d78: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x570d7du); f_007b798c();
    /* 00570d7d: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00570d83: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 00570d86: test edi, 0x180000 */ {  u32 a = r_edi; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570d8c: jne 0x570d99 */ if (!fZ) goto L_00570d99;
L_00570d8e:; BB(0x00570d8e);
    /* 00570d8e: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00570d94: jmp 0x570ae5 */ goto L_00570ae5;
L_00570d99:; BB(0x00570d99);
    /* 00570d99: movzx eax, word ptr [esi + 0xd8] */ r_eax = (u32)R16((u32)(r_esi+0xd8u));
    /* 00570da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570da1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x570da6u); f_007b4d18();
    /* 00570da6: mov edi, eax */ r_edi = r_eax;
    /* 00570da8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570dab: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00570db1: mov dword ptr [eax + 0xc], 0x40c00000 */ W32((u32)(r_eax+0xcu), 0x40c00000u);
    /* 00570db8: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x570dbdu); f_007b51c4();
    /* 00570dbd: mov ecx, esi */ r_ecx = r_esi;
    /* 00570dbf: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x570dc4u); f_007b6894();
    /* 00570dc4: mov ecx, esi */ r_ecx = r_esi;
    /* 00570dc6: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x570dcbu); f_007b798c();
    /* 00570dcb: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00570dd1: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00570dd4: test eax, 0x180000 */ {  u32 a = r_eax; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570dd9: je 0x570e3a */ if (fZ) goto L_00570e3a;
L_00570ddb:; BB(0x00570ddb);
    /* 00570ddb: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00570dde: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00570de2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00570de4: mov ebx, edi */ r_ebx = r_edi;
    /* 00570de6: mov edi, eax */ r_edi = r_eax;
L_00570de8:; BB(0x00570de8);
    /* 00570de8: mov esi, dword ptr [edi + 0xaad6e0] */ r_esi = R32((u32)(r_edi+0xaad6e0u));
    /* 00570dee: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00570df1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570df3: je 0x570e70 */ if (fZ) goto L_00570e70;
L_00570df5:; BB(0x00570df5);
    /* 00570df5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00570df6: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x570dfbu); f_006ea71c();
    /* 00570dfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00570dfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570dfe: je 0x570e2e */ if (fZ) goto L_00570e2e;
L_00570e00:; BB(0x00570e00);
    /* 00570e00: mov eax, dword ptr [0x926a24] */ r_eax = R32((u32)(0x926a24u));
    /* 00570e05: mov edx, dword ptr [0xa73edc] */ r_edx = R32((u32)(0xa73edcu));
    /* 00570e0b: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 00570e0e: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00570e10: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00570e14: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00570e18: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00570e1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570e1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570e1f: mov ecx, esi */ r_ecx = r_esi;
    /* 00570e21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570e23: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00570e27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570e28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00570e29: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x570e2cu); call_ind(t); }
    /* 00570e2c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00570e2e:; BB(0x00570e2e);
    /* 00570e2e: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00570e31: jl 0x570de8 */ if ((fS!=fO)) goto L_00570de8;
L_00570e33:; BB(0x00570e33);
    /* 00570e33: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00570e36: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_00570e3a:; BB(0x00570e3a);
    /* 00570e3a: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 00570e3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570e40: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x570e45u); f_0050b510();
    /* 00570e45: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00570e47: push 0x131 */ { u32 v = 0x131u; r_esp -= 4; W32(r_esp, v); }
    /* 00570e4c: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x570e51u); f_0052d204();
    /* 00570e51: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00570e53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570e54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00570e55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570e57: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x570e5cu); f_00814298();
    /* 00570e5c: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00570e60: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00570e65: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00570e69: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00570e6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570e6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00570e6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00570e6f: ret  */ FN_RET(0x005709e0); r_esp += 4; return;
L_00570e70:; BB(0x00570e70);
    /* 00570e70: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00570e73: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00570e77: jmp 0x570e3a */ goto L_00570e3a;
}

void f_00570e7c(void) /* sub_570E7C */
{
    FN_ENTER(0x00570e7c);
    /* 00570e7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00570e7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00570e7f: mov ecx, dword ptr [0xa73ed8] */ r_ecx = R32((u32)(0xa73ed8u));
    /* 00570e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00570e87: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x570e8cu); f_005b8624();
    /* 00570e8c: mov ecx, eax */ r_ecx = r_eax;
    /* 00570e8e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x570e93u); f_00829cc8();
    /* 00570e93: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x570e98u); f_0082d7b0();
    /* 00570e98: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00570e9b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x570ea0u); f_0082d838();
    /* 00570ea0: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 00570ea3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00570ea5: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x570eaau); f_0082e9e4();
    /* 00570eaa: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00570ead: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00570eaf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x570eb4u); f_0082d8bc();
    /* 00570eb4: mov ecx, dword ptr [ebx + 0xcc] */ r_ecx = R32((u32)(r_ebx+0xccu));
    /* 00570eba: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x570ebfu); f_0082dcbc();
    /* 00570ebf: fld dword ptr [ebx + 0xd4] */ FPUSH(R_F32((u32)(r_ebx+0xd4u)));
    /* 00570ec5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00570ec7: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570eca: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00570ece: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00570ed0: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00570ed7: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00570edf: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x570ee4u); f_00830b74();
    /* 00570ee4: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00570ee9: mov ecx, dword ptr [0xa73ed8] */ r_ecx = R32((u32)(0xa73ed8u));
    /* 00570eef: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00570ef1: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00570ef6: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00570efb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x570f00u); f_005b8610();
    /* 00570f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570f01: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x570f06u); f_0082e1e8();
    /* 00570f06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00570f07: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x570f0cu); f_0082da80();
    /* 00570f0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00570f0d: ret  */ FN_RET(0x00570e7c); r_esp += 4; return;
}

void f_00570f10(void) /* sub_570F10 */
{
    FN_ENTER(0x00570f10);
    /* 00570f10: mov dword ptr [0xa73f10], 0x3f800000 */ W32((u32)(0xa73f10u), 0x3f800000u);
    /* 00570f1a: mov dword ptr [0xa73f14], 0x41000000 */ W32((u32)(0xa73f14u), 0x41000000u);
    /* 00570f24: mov dword ptr [0xa73f18], 0x3fc00000 */ W32((u32)(0xa73f18u), 0x3fc00000u);
    /* 00570f2e: ret  */ FN_RET(0x00570f10); r_esp += 4; return;
}

void f_00570f30(void) /* sub_570F30 */
{
    FN_ENTER(0x00570f30);
    /* 00570f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00570f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00570f33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00570f35: push 0x8d7044 */ { u32 v = 0x8d7044u; r_esp -= 4; W32(r_esp, v); }
    /* 00570f3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00570f40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00570f41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00570f48: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00570f4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00570f4e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00570f51: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00570f54: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00570f57: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00570f5a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00570f5d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00570f64: mov eax, ecx */ r_eax = r_ecx;
    /* 00570f66: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 00570f6c: mov dword ptr [eax], 0xb06320 */ W32((u32)(r_eax), 0xb06320u);
    /* 00570f72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570f74: je 0x570f8f */ if (fZ) goto L_00570f8f;
L_00570f76:; BB(0x00570f76);
    /* 00570f76: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00570f7a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00570f7f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00570f83: mov edx, ecx */ r_edx = r_ecx;
    /* 00570f85: mov dword ptr [edx + 0x3c8], 0 */ W32((u32)(r_edx+0x3c8u), 0x0u);
L_00570f8f:; BB(0x00570f8f);
    /* 00570f8f: mov eax, ecx */ r_eax = r_ecx;
    /* 00570f91: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 00570f97: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570f99: je 0x570fb4 */ if (fZ) goto L_00570fb4;
L_00570f9b:; BB(0x00570f9b);
    /* 00570f9b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00570f9f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00570fa4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00570fa8: mov edx, ecx */ r_edx = r_ecx;
    /* 00570faa: mov dword ptr [edx + 0x3cc], 0 */ W32((u32)(r_edx+0x3ccu), 0x0u);
L_00570fb4:; BB(0x00570fb4);
    /* 00570fb4: mov eax, ecx */ r_eax = r_ecx;
    /* 00570fb6: mov ecx, dword ptr [eax + 0x490] */ r_ecx = R32((u32)(r_eax+0x490u));
    /* 00570fbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570fbe: je 0x570fd6 */ if (fZ) goto L_00570fd6;
L_00570fc0:; BB(0x00570fc0);
    /* 00570fc0: je 0x570fc9 */ if (fZ) goto L_00570fc9;
L_00570fc2:; BB(0x00570fc2);
    /* 00570fc2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00570fc4: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x570fc9u); f_00418aa8();
L_00570fc9:; BB(0x00570fc9);
    /* 00570fc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00570fcc: mov dword ptr [eax + 0x490], 0 */ W32((u32)(r_eax+0x490u), 0x0u);
L_00570fd6:; BB(0x00570fd6);
    /* 00570fd6: mov ecx, dword ptr [eax + 0x494] */ r_ecx = R32((u32)(r_eax+0x494u));
    /* 00570fdc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570fde: je 0x571005 */ if (fZ) goto L_00571005;
L_00570fe0:; BB(0x00570fe0);
    /* 00570fe0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x570fe5u); f_007b9c8c();
    /* 00570fe5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00570fe8: mov ecx, dword ptr [eax + 0x494] */ r_ecx = R32((u32)(r_eax+0x494u));
    /* 00570fee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570ff0: je 0x570ff8 */ if (fZ) goto L_00570ff8;
L_00570ff2:; BB(0x00570ff2);
    /* 00570ff2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00570ff4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00570ff6: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x570ff8u); call_ind(t); }
L_00570ff8:; BB(0x00570ff8);
    /* 00570ff8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00570ffb: mov dword ptr [eax + 0x494], 0 */ W32((u32)(r_eax+0x494u), 0x0u);
L_00571005:; BB(0x00571005);
    /* 00571005: mov edx, dword ptr [eax + 0x4b4] */ r_edx = R32((u32)(r_eax+0x4b4u));
    /* 0057100b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057100d: je 0x571029 */ if (fZ) goto L_00571029;
L_0057100f:; BB(0x0057100f);
    /* 0057100f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00571013: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00571018: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0057101c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057101f: mov dword ptr [edx + 0x4b4], 0 */ W32((u32)(r_edx+0x4b4u), 0x0u);
L_00571029:; BB(0x00571029);
    /* 00571029: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057102c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x571031u); f_007b9c8c();
    /* 00571031: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00571038: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057103b: lea ecx, [eax + 0x474] */ r_ecx = (u32)(r_eax+0x474u);
    /* 00571041: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x571046u); f_005769f8();
    /* 00571046: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057104d: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00571052: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00571055: lea edx, [eax + 0x3d0] */ r_edx = (u32)(r_eax+0x3d0u);
    /* 0057105b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057105d: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057105f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571060: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x571065u); f_008586d6();
    /* 00571065: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00571068: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x57106du); f_0051f4fc();
    /* 0057106d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571070: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00571072: jne 0x571084 */ if (!fZ) goto L_00571084;
L_00571074:; BB(0x00571074);
    /* 00571074: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571077: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057107e: mov esp, ebp */ r_esp = r_ebp;
    /* 00571080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571081: ret 4 */ FN_RET(0x00570f30); r_esp += 8; return;
L_00571084:; BB(0x00571084);
    /* 00571084: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00571087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571088: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x57108du); f_005c2f74();
    /* 0057108d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057108e: jmp 0x571074 */ goto L_00571074;
}

