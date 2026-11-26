#include "protos.h"

void f_0060f074(void)
{
    FN_ENTER(0x0060f074);
    /* 0060f074: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f075: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f077: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f079: push 0x8e05f2 */ { u32 v = 0x8e05f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f07e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f085: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f08c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f08f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f092: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f095: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f098: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f09b: mov eax, dword ptr [0xa8e93c] */ r_eax = R32((u32)(0xa8e93cu));
    /* 0060f0a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f0a2: je 0x60f151 */ if (fZ) goto L_0060f151;
L_0060f0a8:; BB(0x0060f0a8);
    /* 0060f0a8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f0af: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0b1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f0b6u); f_005caba4();
    /* 0060f0b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f0b7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f0ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f0bc: je 0x60f14a */ if (fZ) goto L_0060f14a;
L_0060f0c2:; BB(0x0060f0c2);
    /* 0060f0c2: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060f0c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f0d0: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f0d6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f0d9: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60f0deu); f_00787a4c();
    /* 0060f0de: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f0e1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f0e8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060f0eb:; BB(0x0060f0eb);
    /* 0060f0eb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f0f2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060f0f9: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f0fe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f103u); f_005caba4();
    /* 0060f103: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f104: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f107: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f109: je 0x60f146 */ if (fZ) goto L_0060f146;
L_0060f10b:; BB(0x0060f10b);
    /* 0060f10b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060f112: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060f119: push dword ptr [0xa8e93c] */ { u32 v = R32((u32)(0xa8e93cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f11f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f122: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f125: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f129: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60f12eu); f_0060ef70();
    /* 0060f12e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f131: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060f138:; BB(0x0060f138);
    /* 0060f138: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f13b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f142: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f144: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f145: ret  */ FN_RET(0x0060f074); r_esp += 4; return;
L_0060f146:; BB(0x0060f146);
    /* 0060f146: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f148: jmp 0x60f138 */ goto L_0060f138;
L_0060f14a:; BB(0x0060f14a);
    /* 0060f14a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f14c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f14f: jmp 0x60f0eb */ goto L_0060f0eb;
L_0060f151:; BB(0x0060f151);
    /* 0060f151: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f153: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f156: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f15d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f15f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f160: ret  */ FN_RET(0x0060f074); r_esp += 4; return;
}

void f_0060f164(void)
{
    FN_ENTER(0x0060f164);
    /* 0060f164: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f165: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f167: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f169: push 0x8e0632 */ { u32 v = 0x8e0632u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f16e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f175: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f17c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f17f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f182: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f185: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f188: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f18b: mov eax, dword ptr [0xa8e940] */ r_eax = R32((u32)(0xa8e940u));
    /* 0060f190: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f192: je 0x60f241 */ if (fZ) goto L_0060f241;
L_0060f198:; BB(0x0060f198);
    /* 0060f198: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f19f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1a1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f1a6u); f_005caba4();
    /* 0060f1a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f1a7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f1aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f1ac: je 0x60f23a */ if (fZ) goto L_0060f23a;
L_0060f1b2:; BB(0x0060f1b2);
    /* 0060f1b2: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060f1b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f1c0: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f1c6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f1c9: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60f1ceu); f_00787a4c();
    /* 0060f1ce: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f1d1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f1d8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060f1db:; BB(0x0060f1db);
    /* 0060f1db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f1e2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060f1e9: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f1ee: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f1f3u); f_005caba4();
    /* 0060f1f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f1f4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f1f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f1f9: je 0x60f236 */ if (fZ) goto L_0060f236;
L_0060f1fb:; BB(0x0060f1fb);
    /* 0060f1fb: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060f202: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060f209: push dword ptr [0xa8e940] */ { u32 v = R32((u32)(0xa8e940u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f20f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f212: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f215: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f219: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60f21eu); f_0060ef70();
    /* 0060f21e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f221: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060f228:; BB(0x0060f228);
    /* 0060f228: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f22b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f232: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f234: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f235: ret  */ FN_RET(0x0060f164); r_esp += 4; return;
L_0060f236:; BB(0x0060f236);
    /* 0060f236: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f238: jmp 0x60f228 */ goto L_0060f228;
L_0060f23a:; BB(0x0060f23a);
    /* 0060f23a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f23c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f23f: jmp 0x60f1db */ goto L_0060f1db;
L_0060f241:; BB(0x0060f241);
    /* 0060f241: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f243: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f246: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f24d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f24f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f250: ret  */ FN_RET(0x0060f164); r_esp += 4; return;
}

void f_0060f254(void)
{
    FN_ENTER(0x0060f254);
    /* 0060f254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f255: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f257: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f259: push 0x8e0672 */ { u32 v = 0x8e0672u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f25e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f265: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f26c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f26f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f272: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f275: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f278: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f27b: mov eax, dword ptr [0xa8e944] */ r_eax = R32((u32)(0xa8e944u));
    /* 0060f280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f282: je 0x60f331 */ if (fZ) goto L_0060f331;
L_0060f288:; BB(0x0060f288);
    /* 0060f288: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f28f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f291: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f296u); f_005caba4();
    /* 0060f296: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f297: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f29a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f29c: je 0x60f32a */ if (fZ) goto L_0060f32a;
L_0060f2a2:; BB(0x0060f2a2);
    /* 0060f2a2: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060f2a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f2b0: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f2b6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f2b9: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60f2beu); f_00787a4c();
    /* 0060f2be: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f2c1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f2c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060f2cb:; BB(0x0060f2cb);
    /* 0060f2cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f2d2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060f2d9: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f2de: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f2e3u); f_005caba4();
    /* 0060f2e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f2e4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f2e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f2e9: je 0x60f326 */ if (fZ) goto L_0060f326;
L_0060f2eb:; BB(0x0060f2eb);
    /* 0060f2eb: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060f2f2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060f2f9: push dword ptr [0xa8e944] */ { u32 v = R32((u32)(0xa8e944u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f2ff: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f302: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f305: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f309: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60f30eu); f_0060ef70();
    /* 0060f30e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f311: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060f318:; BB(0x0060f318);
    /* 0060f318: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f31b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f322: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f324: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f325: ret  */ FN_RET(0x0060f254); r_esp += 4; return;
L_0060f326:; BB(0x0060f326);
    /* 0060f326: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f328: jmp 0x60f318 */ goto L_0060f318;
L_0060f32a:; BB(0x0060f32a);
    /* 0060f32a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f32c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f32f: jmp 0x60f2cb */ goto L_0060f2cb;
L_0060f331:; BB(0x0060f331);
    /* 0060f331: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f333: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f336: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f33d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f33f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f340: ret  */ FN_RET(0x0060f254); r_esp += 4; return;
}

void f_0060f344(void)
{
    FN_ENTER(0x0060f344);
    /* 0060f344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f345: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f347: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f349: push 0x8e06b2 */ { u32 v = 0x8e06b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f34e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f354: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f355: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f35c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f35f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f362: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f365: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f368: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f36b: mov eax, dword ptr [0xa8e948] */ r_eax = R32((u32)(0xa8e948u));
    /* 0060f370: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f372: je 0x60f421 */ if (fZ) goto L_0060f421;
L_0060f378:; BB(0x0060f378);
    /* 0060f378: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f37f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f381: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f386u); f_005caba4();
    /* 0060f386: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f387: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f38a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f38c: je 0x60f41a */ if (fZ) goto L_0060f41a;
L_0060f392:; BB(0x0060f392);
    /* 0060f392: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060f399: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f3a0: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f3a6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f3a9: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60f3aeu); f_00787a4c();
    /* 0060f3ae: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f3b1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f3b8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060f3bb:; BB(0x0060f3bb);
    /* 0060f3bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f3c2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060f3c9: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f3ce: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f3d3u); f_005caba4();
    /* 0060f3d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f3d4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f3d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f3d9: je 0x60f416 */ if (fZ) goto L_0060f416;
L_0060f3db:; BB(0x0060f3db);
    /* 0060f3db: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060f3e2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060f3e9: push dword ptr [0xa8e948] */ { u32 v = R32((u32)(0xa8e948u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f3ef: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f3f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f3f5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f3f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f3f9: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60f3feu); f_0060ef70();
    /* 0060f3fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f401: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060f408:; BB(0x0060f408);
    /* 0060f408: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f40b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f412: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f414: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f415: ret  */ FN_RET(0x0060f344); r_esp += 4; return;
L_0060f416:; BB(0x0060f416);
    /* 0060f416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f418: jmp 0x60f408 */ goto L_0060f408;
L_0060f41a:; BB(0x0060f41a);
    /* 0060f41a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f41c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f41f: jmp 0x60f3bb */ goto L_0060f3bb;
L_0060f421:; BB(0x0060f421);
    /* 0060f421: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f423: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f426: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f42d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f42f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f430: ret  */ FN_RET(0x0060f344); r_esp += 4; return;
}

void f_0060f434(void)
{
    FN_ENTER(0x0060f434);
    /* 0060f434: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f435: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f437: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f439: push 0x8e06f2 */ { u32 v = 0x8e06f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f43e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f445: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f44c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f44f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f452: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f455: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f458: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f45b: mov eax, dword ptr [0xa8e94c] */ r_eax = R32((u32)(0xa8e94cu));
    /* 0060f460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f462: je 0x60f511 */ if (fZ) goto L_0060f511;
L_0060f468:; BB(0x0060f468);
    /* 0060f468: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f46f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f471: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f476u); f_005caba4();
    /* 0060f476: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f477: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f47a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f47c: je 0x60f50a */ if (fZ) goto L_0060f50a;
L_0060f482:; BB(0x0060f482);
    /* 0060f482: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060f489: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f490: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f496: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f499: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60f49eu); f_00787a4c();
    /* 0060f49e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f4a1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f4a8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060f4ab:; BB(0x0060f4ab);
    /* 0060f4ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f4b2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060f4b9: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f4be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f4c3u); f_005caba4();
    /* 0060f4c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f4c4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f4c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f4c9: je 0x60f506 */ if (fZ) goto L_0060f506;
L_0060f4cb:; BB(0x0060f4cb);
    /* 0060f4cb: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060f4d2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060f4d9: push dword ptr [0xa8e94c] */ { u32 v = R32((u32)(0xa8e94cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f4df: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f4e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f4e5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f4e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f4e9: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60f4eeu); f_0060ef70();
    /* 0060f4ee: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f4f1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060f4f8:; BB(0x0060f4f8);
    /* 0060f4f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f4fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f502: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f504: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f505: ret  */ FN_RET(0x0060f434); r_esp += 4; return;
L_0060f506:; BB(0x0060f506);
    /* 0060f506: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f508: jmp 0x60f4f8 */ goto L_0060f4f8;
L_0060f50a:; BB(0x0060f50a);
    /* 0060f50a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f50c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f50f: jmp 0x60f4ab */ goto L_0060f4ab;
L_0060f511:; BB(0x0060f511);
    /* 0060f511: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f513: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f516: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f51d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f51f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f520: ret  */ FN_RET(0x0060f434); r_esp += 4; return;
}

void f_0060f524(void)
{
    FN_ENTER(0x0060f524);
    /* 0060f524: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f525: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f527: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f529: push 0x8e0732 */ { u32 v = 0x8e0732u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f52e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f535: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f53c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f53f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f542: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f545: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f548: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f54b: mov eax, dword ptr [0xa8e950] */ r_eax = R32((u32)(0xa8e950u));
    /* 0060f550: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f552: je 0x60f601 */ if (fZ) goto L_0060f601;
L_0060f558:; BB(0x0060f558);
    /* 0060f558: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f55f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f561: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f566u); f_005caba4();
    /* 0060f566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f567: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f56a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f56c: je 0x60f5fa */ if (fZ) goto L_0060f5fa;
L_0060f572:; BB(0x0060f572);
    /* 0060f572: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060f579: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f580: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f586: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f589: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60f58eu); f_00787a4c();
    /* 0060f58e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f591: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f598: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060f59b:; BB(0x0060f59b);
    /* 0060f59b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f5a2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060f5a9: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f5ae: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f5b3u); f_005caba4();
    /* 0060f5b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f5b4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f5b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f5b9: je 0x60f5f6 */ if (fZ) goto L_0060f5f6;
L_0060f5bb:; BB(0x0060f5bb);
    /* 0060f5bb: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060f5c2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060f5c9: push dword ptr [0xa8e950] */ { u32 v = R32((u32)(0xa8e950u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f5cf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f5d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f5d5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f5d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f5d9: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60f5deu); f_0060ef70();
    /* 0060f5de: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f5e1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060f5e8:; BB(0x0060f5e8);
    /* 0060f5e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f5eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f5f2: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f5f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f5f5: ret  */ FN_RET(0x0060f524); r_esp += 4; return;
L_0060f5f6:; BB(0x0060f5f6);
    /* 0060f5f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f5f8: jmp 0x60f5e8 */ goto L_0060f5e8;
L_0060f5fa:; BB(0x0060f5fa);
    /* 0060f5fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f5fc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f5ff: jmp 0x60f59b */ goto L_0060f59b;
L_0060f601:; BB(0x0060f601);
    /* 0060f601: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f603: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f606: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f60d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f60f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f610: ret  */ FN_RET(0x0060f524); r_esp += 4; return;
}

void f_0060f614(void)
{
    FN_ENTER(0x0060f614);
    /* 0060f614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f615: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f617: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f619: push 0x8e0772 */ { u32 v = 0x8e0772u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f61e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f625: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f62c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f62f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f632: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f635: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f638: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f63b: mov eax, dword ptr [0xa8e954] */ r_eax = R32((u32)(0xa8e954u));
    /* 0060f640: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f642: je 0x60f6f1 */ if (fZ) goto L_0060f6f1;
L_0060f648:; BB(0x0060f648);
    /* 0060f648: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f64f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f651: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f656u); f_005caba4();
    /* 0060f656: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f657: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f65a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f65c: je 0x60f6ea */ if (fZ) goto L_0060f6ea;
L_0060f662:; BB(0x0060f662);
    /* 0060f662: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060f669: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f670: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f676: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f679: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60f67eu); f_00787a4c();
    /* 0060f67e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f681: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f688: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060f68b:; BB(0x0060f68b);
    /* 0060f68b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f692: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060f699: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f69e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f6a3u); f_005caba4();
    /* 0060f6a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f6a4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f6a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f6a9: je 0x60f6e6 */ if (fZ) goto L_0060f6e6;
L_0060f6ab:; BB(0x0060f6ab);
    /* 0060f6ab: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060f6b2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060f6b9: push dword ptr [0xa8e954] */ { u32 v = R32((u32)(0xa8e954u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f6bf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f6c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f6c5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f6c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f6c9: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60f6ceu); f_0060ef70();
    /* 0060f6ce: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f6d1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060f6d8:; BB(0x0060f6d8);
    /* 0060f6d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f6db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f6e2: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f6e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f6e5: ret  */ FN_RET(0x0060f614); r_esp += 4; return;
L_0060f6e6:; BB(0x0060f6e6);
    /* 0060f6e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f6e8: jmp 0x60f6d8 */ goto L_0060f6d8;
L_0060f6ea:; BB(0x0060f6ea);
    /* 0060f6ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f6ec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f6ef: jmp 0x60f68b */ goto L_0060f68b;
L_0060f6f1:; BB(0x0060f6f1);
    /* 0060f6f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f6f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f6f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f6fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f6ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f700: ret  */ FN_RET(0x0060f614); r_esp += 4; return;
}

void f_0060f704(void)
{
    FN_ENTER(0x0060f704);
    /* 0060f704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f705: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f707: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f709: push 0x8e07b2 */ { u32 v = 0x8e07b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f70e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f715: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f71c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f71f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f722: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f725: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f728: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f72b: mov eax, dword ptr [0xa8e958] */ r_eax = R32((u32)(0xa8e958u));
    /* 0060f730: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f732: je 0x60f7e1 */ if (fZ) goto L_0060f7e1;
L_0060f738:; BB(0x0060f738);
    /* 0060f738: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f73f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f741: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f746u); f_005caba4();
    /* 0060f746: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f747: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f74a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f74c: je 0x60f7da */ if (fZ) goto L_0060f7da;
L_0060f752:; BB(0x0060f752);
    /* 0060f752: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060f759: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f760: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f766: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f769: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60f76eu); f_00787a4c();
    /* 0060f76e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f771: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f778: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060f77b:; BB(0x0060f77b);
    /* 0060f77b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f782: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060f789: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f78e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f793u); f_005caba4();
    /* 0060f793: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f794: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f797: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f799: je 0x60f7d6 */ if (fZ) goto L_0060f7d6;
L_0060f79b:; BB(0x0060f79b);
    /* 0060f79b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060f7a2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060f7a9: push dword ptr [0xa8e958] */ { u32 v = R32((u32)(0xa8e958u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f7af: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f7b2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f7b5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f7b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f7b9: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60f7beu); f_0060ef70();
    /* 0060f7be: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f7c1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060f7c8:; BB(0x0060f7c8);
    /* 0060f7c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f7cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f7d2: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f7d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f7d5: ret  */ FN_RET(0x0060f704); r_esp += 4; return;
L_0060f7d6:; BB(0x0060f7d6);
    /* 0060f7d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f7d8: jmp 0x60f7c8 */ goto L_0060f7c8;
L_0060f7da:; BB(0x0060f7da);
    /* 0060f7da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f7dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f7df: jmp 0x60f77b */ goto L_0060f77b;
L_0060f7e1:; BB(0x0060f7e1);
    /* 0060f7e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f7e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f7e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f7ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f7ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f7f0: ret  */ FN_RET(0x0060f704); r_esp += 4; return;
}

void f_0060f7f4(void)
{
    FN_ENTER(0x0060f7f4);
    /* 0060f7f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f7f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f7f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f7f9: push 0x8e07f2 */ { u32 v = 0x8e07f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f7fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f804: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f805: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f80c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f80f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f812: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f815: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f818: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f81b: mov eax, dword ptr [0xa8e95c] */ r_eax = R32((u32)(0xa8e95cu));
    /* 0060f820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f822: je 0x60f8d1 */ if (fZ) goto L_0060f8d1;
L_0060f828:; BB(0x0060f828);
    /* 0060f828: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f82f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f831: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f836u); f_005caba4();
    /* 0060f836: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f837: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f83a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f83c: je 0x60f8ca */ if (fZ) goto L_0060f8ca;
L_0060f842:; BB(0x0060f842);
    /* 0060f842: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060f849: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f850: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f856: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f859: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60f85eu); f_00787a4c();
    /* 0060f85e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f861: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f868: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060f86b:; BB(0x0060f86b);
    /* 0060f86b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f872: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060f879: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f87e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f883u); f_005caba4();
    /* 0060f883: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f884: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f889: je 0x60f8c6 */ if (fZ) goto L_0060f8c6;
L_0060f88b:; BB(0x0060f88b);
    /* 0060f88b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060f892: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060f899: push dword ptr [0xa8e95c] */ { u32 v = R32((u32)(0xa8e95cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f89f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f8a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f8a5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f8a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f8a9: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60f8aeu); f_0060ef70();
    /* 0060f8ae: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f8b1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060f8b8:; BB(0x0060f8b8);
    /* 0060f8b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f8bb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f8c2: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f8c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f8c5: ret  */ FN_RET(0x0060f7f4); r_esp += 4; return;
L_0060f8c6:; BB(0x0060f8c6);
    /* 0060f8c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f8c8: jmp 0x60f8b8 */ goto L_0060f8b8;
L_0060f8ca:; BB(0x0060f8ca);
    /* 0060f8ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f8cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f8cf: jmp 0x60f86b */ goto L_0060f86b;
L_0060f8d1:; BB(0x0060f8d1);
    /* 0060f8d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f8d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f8d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f8dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f8df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f8e0: ret  */ FN_RET(0x0060f7f4); r_esp += 4; return;
}

void f_0060f8e4(void)
{
    FN_ENTER(0x0060f8e4);
    /* 0060f8e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f8e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f8e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f8e9: push 0x8e0832 */ { u32 v = 0x8e0832u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f8ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f8f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f8f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f8fc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f8ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f902: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f905: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f908: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f90b: mov eax, dword ptr [0xa8e960] */ r_eax = R32((u32)(0xa8e960u));
    /* 0060f910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f912: je 0x60f9c1 */ if (fZ) goto L_0060f9c1;
L_0060f918:; BB(0x0060f918);
    /* 0060f918: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f91f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f921: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f926u); f_005caba4();
    /* 0060f926: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f927: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060f92a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f92c: je 0x60f9ba */ if (fZ) goto L_0060f9ba;
L_0060f932:; BB(0x0060f932);
    /* 0060f932: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060f939: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f940: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f946: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f949: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60f94eu); f_00787a4c();
    /* 0060f94e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060f951: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060f958: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060f95b:; BB(0x0060f95b);
    /* 0060f95b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f962: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060f969: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f96e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60f973u); f_005caba4();
    /* 0060f973: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f974: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f977: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f979: je 0x60f9b6 */ if (fZ) goto L_0060f9b6;
L_0060f97b:; BB(0x0060f97b);
    /* 0060f97b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060f982: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060f989: push dword ptr [0xa8e960] */ { u32 v = R32((u32)(0xa8e960u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f98f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060f992: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f995: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f999: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60f99eu); f_0060ef70();
    /* 0060f99e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f9a1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060f9a8:; BB(0x0060f9a8);
    /* 0060f9a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f9ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f9b2: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f9b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f9b5: ret  */ FN_RET(0x0060f8e4); r_esp += 4; return;
L_0060f9b6:; BB(0x0060f9b6);
    /* 0060f9b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f9b8: jmp 0x60f9a8 */ goto L_0060f9a8;
L_0060f9ba:; BB(0x0060f9ba);
    /* 0060f9ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f9bc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f9bf: jmp 0x60f95b */ goto L_0060f95b;
L_0060f9c1:; BB(0x0060f9c1);
    /* 0060f9c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060f9c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f9c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f9cd: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f9cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f9d0: ret  */ FN_RET(0x0060f8e4); r_esp += 4; return;
}

void f_0060f9d4(void)
{
    FN_ENTER(0x0060f9d4);
    /* 0060f9d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f9d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f9d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f9d9: push 0x8e0872 */ { u32 v = 0x8e0872u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f9de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f9e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f9e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060f9ec: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f9ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060f9f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060f9f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060f9f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060f9fb: mov eax, dword ptr [0xa8e964] */ r_eax = R32((u32)(0xa8e964u));
    /* 0060fa00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fa02: je 0x60fab1 */ if (fZ) goto L_0060fab1;
L_0060fa08:; BB(0x0060fa08);
    /* 0060fa08: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060fa0f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fa11: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60fa16u); f_005caba4();
    /* 0060fa16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fa17: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060fa1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fa1c: je 0x60faaa */ if (fZ) goto L_0060faaa;
L_0060fa22:; BB(0x0060fa22);
    /* 0060fa22: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060fa29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060fa30: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fa36: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060fa39: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60fa3eu); f_00787a4c();
    /* 0060fa3e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060fa41: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060fa48: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060fa4b:; BB(0x0060fa4b);
    /* 0060fa4b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060fa52: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060fa59: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fa5e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60fa63u); f_005caba4();
    /* 0060fa63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fa64: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060fa67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fa69: je 0x60faa6 */ if (fZ) goto L_0060faa6;
L_0060fa6b:; BB(0x0060fa6b);
    /* 0060fa6b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060fa72: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060fa79: push dword ptr [0xa8e964] */ { u32 v = R32((u32)(0xa8e964u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fa7f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fa82: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fa85: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fa88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fa89: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60fa8eu); f_0060ef70();
    /* 0060fa8e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fa91: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060fa98:; BB(0x0060fa98);
    /* 0060fa98: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060fa9b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060faa2: mov esp, ebp */ r_esp = r_ebp;
    /* 0060faa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060faa5: ret  */ FN_RET(0x0060f9d4); r_esp += 4; return;
L_0060faa6:; BB(0x0060faa6);
    /* 0060faa6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060faa8: jmp 0x60fa98 */ goto L_0060fa98;
L_0060faaa:; BB(0x0060faaa);
    /* 0060faaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060faac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060faaf: jmp 0x60fa4b */ goto L_0060fa4b;
L_0060fab1:; BB(0x0060fab1);
    /* 0060fab1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060fab3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060fab6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060fabd: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fabf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fac0: ret  */ FN_RET(0x0060f9d4); r_esp += 4; return;
}

void f_0060fac4(void)
{
    FN_ENTER(0x0060fac4);
    /* 0060fac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060fac5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060fac7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060fac9: push 0x8e08b2 */ { u32 v = 0x8e08b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060face: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060fad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fad5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060fadc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060fadf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060fae2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060fae5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060fae8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060faeb: mov eax, dword ptr [0xa8e968] */ r_eax = R32((u32)(0xa8e968u));
    /* 0060faf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060faf2: je 0x60fba1 */ if (fZ) goto L_0060fba1;
L_0060faf8:; BB(0x0060faf8);
    /* 0060faf8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060faff: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fb01: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60fb06u); f_005caba4();
    /* 0060fb06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fb07: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060fb0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fb0c: je 0x60fb9a */ if (fZ) goto L_0060fb9a;
L_0060fb12:; BB(0x0060fb12);
    /* 0060fb12: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060fb19: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060fb20: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fb26: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060fb29: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60fb2eu); f_00787a4c();
    /* 0060fb2e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060fb31: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060fb38: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060fb3b:; BB(0x0060fb3b);
    /* 0060fb3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060fb42: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060fb49: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fb4e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60fb53u); f_005caba4();
    /* 0060fb53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fb54: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060fb57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fb59: je 0x60fb96 */ if (fZ) goto L_0060fb96;
L_0060fb5b:; BB(0x0060fb5b);
    /* 0060fb5b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060fb62: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060fb69: push dword ptr [0xa8e968] */ { u32 v = R32((u32)(0xa8e968u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fb6f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fb72: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fb75: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fb78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fb79: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60fb7eu); f_0060ef70();
    /* 0060fb7e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fb81: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060fb88:; BB(0x0060fb88);
    /* 0060fb88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060fb8b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060fb92: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fb94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fb95: ret  */ FN_RET(0x0060fac4); r_esp += 4; return;
L_0060fb96:; BB(0x0060fb96);
    /* 0060fb96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060fb98: jmp 0x60fb88 */ goto L_0060fb88;
L_0060fb9a:; BB(0x0060fb9a);
    /* 0060fb9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060fb9c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060fb9f: jmp 0x60fb3b */ goto L_0060fb3b;
L_0060fba1:; BB(0x0060fba1);
    /* 0060fba1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060fba3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060fba6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060fbad: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fbaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fbb0: ret  */ FN_RET(0x0060fac4); r_esp += 4; return;
}

void f_0060fbb4(void)
{
    FN_ENTER(0x0060fbb4);
    /* 0060fbb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbb5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060fbb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbb9: push 0x8e08f2 */ { u32 v = 0x8e08f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060fbc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060fbcc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060fbcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060fbd2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060fbd5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060fbd8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060fbdb: mov eax, dword ptr [0xa8e96c] */ r_eax = R32((u32)(0xa8e96cu));
    /* 0060fbe0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fbe2: je 0x60fc91 */ if (fZ) goto L_0060fc91;
L_0060fbe8:; BB(0x0060fbe8);
    /* 0060fbe8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060fbef: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fbf1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60fbf6u); f_005caba4();
    /* 0060fbf6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fbf7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060fbfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fbfc: je 0x60fc8a */ if (fZ) goto L_0060fc8a;
L_0060fc02:; BB(0x0060fc02);
    /* 0060fc02: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060fc09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060fc10: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fc16: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060fc19: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60fc1eu); f_00787a4c();
    /* 0060fc1e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060fc21: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060fc28: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060fc2b:; BB(0x0060fc2b);
    /* 0060fc2b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060fc32: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060fc39: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fc3e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60fc43u); f_005caba4();
    /* 0060fc43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fc44: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060fc47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fc49: je 0x60fc86 */ if (fZ) goto L_0060fc86;
L_0060fc4b:; BB(0x0060fc4b);
    /* 0060fc4b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060fc52: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060fc59: push dword ptr [0xa8e96c] */ { u32 v = R32((u32)(0xa8e96cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fc5f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fc62: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fc65: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fc68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fc69: call 0x60ef70 */ r_esp -= 4; W32(r_esp, 0x60fc6eu); f_0060ef70();
    /* 0060fc6e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fc71: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060fc78:; BB(0x0060fc78);
    /* 0060fc78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060fc7b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060fc82: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fc84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fc85: ret  */ FN_RET(0x0060fbb4); r_esp += 4; return;
L_0060fc86:; BB(0x0060fc86);
    /* 0060fc86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060fc88: jmp 0x60fc78 */ goto L_0060fc78;
L_0060fc8a:; BB(0x0060fc8a);
    /* 0060fc8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060fc8c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060fc8f: jmp 0x60fc2b */ goto L_0060fc2b;
L_0060fc91:; BB(0x0060fc91);
    /* 0060fc91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060fc93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060fc96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060fc9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fc9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fca0: ret  */ FN_RET(0x0060fbb4); r_esp += 4; return;
}

void f_0060fca4(void) /* sub_60FCA4 */
{
    FN_ENTER(0x0060fca4);
    /* 0060fca4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060fca5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060fca7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060fca9: push 0x8e0918 */ { u32 v = 0x8e0918u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fcae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060fcb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fcb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060fcbc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060fcbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060fcc2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060fcc5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060fcc8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060fccb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060fccd: mov dword ptr [0xa8e938], eax */ W32((u32)(0xa8e938u), r_eax);
    /* 0060fcd2: mov dword ptr [0xa8e93c], eax */ W32((u32)(0xa8e93cu), r_eax);
    /* 0060fcd7: mov dword ptr [0xa8e940], eax */ W32((u32)(0xa8e940u), r_eax);
    /* 0060fcdc: mov dword ptr [0xa8e944], eax */ W32((u32)(0xa8e944u), r_eax);
    /* 0060fce1: mov dword ptr [0xa8e948], eax */ W32((u32)(0xa8e948u), r_eax);
    /* 0060fce6: mov dword ptr [0xa8e94c], eax */ W32((u32)(0xa8e94cu), r_eax);
    /* 0060fceb: mov dword ptr [0xa8e950], eax */ W32((u32)(0xa8e950u), r_eax);
    /* 0060fcf0: mov dword ptr [0xa8e954], eax */ W32((u32)(0xa8e954u), r_eax);
    /* 0060fcf5: mov dword ptr [0xa8e958], eax */ W32((u32)(0xa8e958u), r_eax);
    /* 0060fcfa: mov dword ptr [0xa8e95c], eax */ W32((u32)(0xa8e95cu), r_eax);
    /* 0060fcff: mov dword ptr [0xa8e960], eax */ W32((u32)(0xa8e960u), r_eax);
    /* 0060fd04: mov dword ptr [0xa8e964], eax */ W32((u32)(0xa8e964u), r_eax);
    /* 0060fd09: mov dword ptr [0xa8e968], eax */ W32((u32)(0xa8e968u), r_eax);
    /* 0060fd0e: mov dword ptr [0xa8e96c], eax */ W32((u32)(0xa8e96cu), r_eax);
    /* 0060fd13: call 0x807e68 */ r_esp -= 4; W32(r_esp, 0x60fd18u); f_00807e68();
    /* 0060fd18: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fd1b: je 0x60fde2 */ if (fZ) goto L_0060fde2;
L_0060fd21:; BB(0x0060fd21);
    /* 0060fd21: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fd24: je 0x60fd60 */ if (fZ) goto L_0060fd60;
L_0060fd26:; BB(0x0060fd26);
    /* 0060fd26: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fd29: jne 0x60fd35 */ if (!fZ) goto L_0060fd35;
L_0060fd2b:; BB(0x0060fd2b);
    /* 0060fd2b: mov eax, 0x9c46c4 */ r_eax = 0x9c46c4u;
    /* 0060fd30: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060fd33: jmp 0x60fd68 */ goto L_0060fd68;
L_0060fd35:; BB(0x0060fd35);
    /* 0060fd35: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060fd38: jl 0x60fd49 */ if ((fS!=fO)) goto L_0060fd49;
L_0060fd3a:; BB(0x0060fd3a);
    /* 0060fd3a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060fd3d: jg 0x60fd49 */ if ((!fZ&&fS==fO)) goto L_0060fd49;
L_0060fd3f:; BB(0x0060fd3f);
    /* 0060fd3f: mov eax, 0x9c46d4 */ r_eax = 0x9c46d4u;
    /* 0060fd44: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060fd47: jmp 0x60fd68 */ goto L_0060fd68;
L_0060fd49:; BB(0x0060fd49);
    /* 0060fd49: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060fd4c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060fd4f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060fd52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060fd55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060fd5c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fd5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fd5f: ret  */ FN_RET(0x0060fca4); r_esp += 4; return;
L_0060fd60:; BB(0x0060fd60);
    /* 0060fd60: mov eax, 0x9c46ac */ r_eax = 0x9c46acu;
    /* 0060fd65: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060fd68:; BB(0x0060fd68);
    /* 0060fd68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060fd6a: je 0x60fd49 */ if (fZ) goto L_0060fd49;
L_0060fd6c:; BB(0x0060fd6c);
    /* 0060fd6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060fd6e: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060fd71: je 0x60fd49 */ if (fZ) goto L_0060fd49;
L_0060fd73:; BB(0x0060fd73);
    /* 0060fd73: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060fd7a: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fd7f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60fd84u); f_008581c5();
    /* 0060fd84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fd85: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060fd88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fd8a: je 0x60fdde */ if (fZ) goto L_0060fdde;
L_0060fd8c:; BB(0x0060fd8c);
    /* 0060fd8c: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060fd93: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060fd9a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fd9d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fda0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060fda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fda3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fda4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fda5: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fda8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fdaa: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60fdafu); f_005b7a84();
    /* 0060fdaf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060fdb2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060fdb9:; BB(0x0060fdb9);
    /* 0060fdb9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fdbc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060fdbe: mov dword ptr [edx*4 + 0xa8e938], ecx */ W32((u32)(r_edx*4+0xa8e938u), r_ecx);
    /* 0060fdc5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060fdcc: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060fdcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060fdd1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060fdd4: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060fdd7: jne 0x60fd73 */ if (!fZ) goto L_0060fd73;
L_0060fdd9:; BB(0x0060fdd9);
    /* 0060fdd9: jmp 0x60fd49 */ goto L_0060fd49;
L_0060fdde:; BB(0x0060fdde);
    /* 0060fdde: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060fde0: jmp 0x60fdb9 */ goto L_0060fdb9;
L_0060fde2:; BB(0x0060fde2);
    /* 0060fde2: mov eax, 0x9c44e0 */ r_eax = 0x9c44e0u;
    /* 0060fde7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060fdea: jmp 0x60fd68 */ goto L_0060fd68;
}

void f_0060fdf0(void) /* sub_60FDF0 */
{
    FN_ENTER(0x0060fdf0);
    /* 0060fdf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060fdf1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060fdf3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060fdf5: call 0x60fe14 */ r_esp -= 4; W32(r_esp, 0x60fdfau); f_0060fe14();
    /* 0060fdfa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060fdfe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060fe00: jne 0x60fe06 */ if (!fZ) goto L_0060fe06;
L_0060fe02:; BB(0x0060fe02);
    /* 0060fe02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060fe03: ret 4 */ FN_RET(0x0060fdf0); r_esp += 8; return;
L_0060fe06:; BB(0x0060fe06);
    /* 0060fe06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe07: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60fe0cu); f_005c2f74();
    /* 0060fe0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fe0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060fe0e: ret 4 */ FN_RET(0x0060fdf0); r_esp += 8; return;
}

void f_0060fe14(void) /* sub_60FE14 */
{
    FN_ENTER(0x0060fe14);
    /* 0060fe14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe15: mov ebp, esp */ r_ebp = r_esp;
    /* 0060fe17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe19: push 0x8e0934 */ { u32 v = 0x8e0934u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060fe24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060fe2c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060fe2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060fe32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060fe35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060fe38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060fe3b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060fe3e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060fe41: mov dword ptr [ecx], 0xb23a40 */ W32((u32)(r_ecx), 0xb23a40u);
    /* 0060fe47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060fe4e: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x60fe53u); f_00608fc0();
    /* 0060fe53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060fe56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060fe5d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fe5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fe60: ret  */ FN_RET(0x0060fe14); r_esp += 4; return;
}

void f_0060fe64(void) /* sub_60FE64 */
{
    FN_ENTER(0x0060fe64);
    /* 0060fe64: mov ecx, dword ptr [0xa8e9ac] */ r_ecx = R32((u32)(0xa8e9acu));
    /* 0060fe6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fe6c: je 0x60fe89 */ if (fZ) goto L_0060fe89;
L_0060fe6e:; BB(0x0060fe6e);
    /* 0060fe6e: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60fe73u); f_00829de0();
    /* 0060fe73: push dword ptr [0xa8e9ac] */ { u32 v = R32((u32)(0xa8e9acu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fe79: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60fe7eu); f_0082e960();
    /* 0060fe7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fe7f: mov dword ptr [0xa8e9ac], 0 */ W32((u32)(0xa8e9acu), 0x0u);
L_0060fe89:; BB(0x0060fe89);
    /* 0060fe89: mov eax, dword ptr [0xa8e9b0] */ r_eax = R32((u32)(0xa8e9b0u));
    /* 0060fe8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060fe90: je 0x60fea3 */ if (fZ) goto L_0060fea3;
L_0060fe92:; BB(0x0060fe92);
    /* 0060fe92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe93: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x60fe98u); f_005b9bac();
    /* 0060fe98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fe99: mov dword ptr [0xa8e9b0], 0 */ W32((u32)(0xa8e9b0u), 0x0u);
L_0060fea3:; BB(0x0060fea3);
    /* 0060fea3: ret  */ FN_RET(0x0060fe64); r_esp += 4; return;
}

void f_0060fea4(void)
{
    FN_ENTER(0x0060fea4);
    /* 0060fea4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060fea5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060fea7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060fea9: push 0x8e0976 */ { u32 v = 0x8e0976u; r_esp -= 4; W32(r_esp, v); }
    /* 0060feae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060feb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060feb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060febc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060febf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060fec2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060fec5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060fec8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060fecb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fecd: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060fed4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60fed9u); f_005caba4();
    /* 0060fed9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060feda: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060fedd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fedf: je 0x60ff67 */ if (fZ) goto L_0060ff67;
L_0060fee5:; BB(0x0060fee5);
    /* 0060fee5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060feec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060fef3: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060fef9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060fefc: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60ff01u); f_00787a4c();
    /* 0060ff01: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060ff04: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060ff0b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060ff0e:; BB(0x0060ff0e);
    /* 0060ff0e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060ff15: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060ff1c: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ff21: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60ff26u); f_005caba4();
    /* 0060ff26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ff27: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060ff2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ff2c: je 0x60ff63 */ if (fZ) goto L_0060ff63;
L_0060ff2e:; BB(0x0060ff2e);
    /* 0060ff2e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060ff35: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060ff3c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ff3f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ff42: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ff45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ff46: call 0x60ff70 */ r_esp -= 4; W32(r_esp, 0x60ff4bu); f_0060ff70();
    /* 0060ff4b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ff4e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060ff55:; BB(0x0060ff55);
    /* 0060ff55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ff58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ff5f: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ff61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ff62: ret  */ FN_RET(0x0060fea4); r_esp += 4; return;
L_0060ff63:; BB(0x0060ff63);
    /* 0060ff63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ff65: jmp 0x60ff55 */ goto L_0060ff55;
L_0060ff67:; BB(0x0060ff67);
    /* 0060ff67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060ff69: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060ff6c: jmp 0x60ff0e */ goto L_0060ff0e;
}

void f_0060ff70(void) /* sub_60FF70 */
{
    FN_ENTER(0x0060ff70);
    /* 0060ff70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ff71: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ff73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ff75: push 0x8e0990 */ { u32 v = 0x8e0990u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ff7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ff80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ff81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ff88: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ff8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ff8e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060ff91: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060ff94: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060ff97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060ff9a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ff9d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060ffa0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060ffa3: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x60ffa8u); f_00609010();
    /* 0060ffa8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060ffaf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ffb2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ffb5: mov dword ptr [ecx], 0xb23a40 */ W32((u32)(r_ecx), 0xb23a40u);
    /* 0060ffbb: mov eax, dword ptr [0x9c4700] */ r_eax = R32((u32)(0x9c4700u));
    /* 0060ffc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ffc1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060ffc4: call dword ptr [0xb23b8c] */ { u32 t = R32((u32)(0xb23b8cu)); r_esp -= 4; W32(r_esp, 0x60ffcau); call_ind(t); }
    /* 0060ffca: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ffcd: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060ffd0: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060ffd3: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060ffd6: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060ffdc: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060ffe2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ffe5: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060ffeb: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060fff1: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060fff7: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060fffd: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00610003: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00610009: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061000c: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00610012: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610015: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0061001b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0061001e: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00610024: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00610027: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0061002d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00610030: mov eax, dword ptr [0xa8e9b0] */ r_eax = R32((u32)(0xa8e9b0u));
    /* 00610035: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00610037: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0061003a: mov eax, dword ptr [0xa8e9ac] */ r_eax = R32((u32)(0xa8e9acu));
    /* 0061003f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00610042: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x610047u); f_00606bc8();
    /* 00610047: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061004a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061004d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610050: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x0060ff70); r_esp += 12; return;
}

