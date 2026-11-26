#include "protos.h"

void f_00516068(void) /* sub_516068 */
{
    FN_ENTER(0x00516068);
    /* 00516068: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516069: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051606b: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00516072: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00516075: je 0x5160cc */ if (fZ) goto L_005160cc;
L_00516077:; BB(0x00516077);
    /* 00516077: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051607c: mov eax, 9 */ r_eax = 0x9u;
    /* 00516081: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 00516088: mov edx, 7 */ r_edx = 0x7u;
    /* 0051608d: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00516094: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0051609a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0051609d: and eax, 0xffff7ffe */ {  u32 a = r_eax; u32 b = 0xffff7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005160a2: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005160a5: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 005160ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005160ac: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5160b1u); f_0050b510();
    /* 005160b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005160b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005160b6: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x5160bbu); f_00787534();
    /* 005160bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005160bc: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x5160c1u); f_008113e4();
    /* 005160c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005160c2: mov dword ptr [ebx + 0x37c], 0 */ W32((u32)(r_ebx+0x37cu), 0x0u);
L_005160cc:; BB(0x005160cc);
    /* 005160cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005160cd: ret  */ FN_RET(0x00516068); r_esp += 4; return;
}

void f_00516124(void)
{
    FN_ENTER(0x00516124);
    /* 00516124: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00516125: mov ebp, esp */ r_ebp = r_esp;
    /* 00516127: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00516129: push 0x8d44ee */ { u32 v = 0x8d44eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051612e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00516134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516135: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051613c: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051613f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00516142: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00516145: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00516148: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051614b: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00516150: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516153: jne 0x5161ac */ if (!fZ) goto L_005161ac;
L_00516155:; BB(0x00516155);
    /* 00516155: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0051615c: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00516161: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x516166u); f_008581c5();
    /* 00516166: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516167: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0051616a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051616c: je 0x51644d */ if (fZ) goto L_0051644d;
L_00516172:; BB(0x00516172);
    /* 00516172: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00516179: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00516180: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00516183: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00516185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516188: push 0x9bb540 */ { u32 v = 0x9bb540u; r_esp -= 4; W32(r_esp, v); }
    /* 0051618d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051618f: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x516194u); f_005b7a84();
    /* 00516194: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00516197: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0051619e: mov dword ptr [0xa72d38], eax */ W32((u32)(0xa72d38u), r_eax);
    /* 005161a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005161aa: jmp 0x516201 */ goto L_00516201;
L_005161ac:; BB(0x005161ac);
    /* 005161ac: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005161b3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005161b8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5161bdu); f_008581c5();
    /* 005161bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005161be: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005161c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005161c3: je 0x51645b */ if (fZ) goto L_0051645b;
L_005161c9:; BB(0x005161c9);
    /* 005161c9: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 005161d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005161d7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005161da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005161dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005161dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005161de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005161df: push 0x9bb4f0 */ { u32 v = 0x9bb4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005161e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005161e6: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5161ebu); f_005b7a84();
    /* 005161eb: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005161ee: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005161f5:; BB(0x005161f5);
    /* 005161f5: mov dword ptr [0xa72d38], eax */ W32((u32)(0xa72d38u), r_eax);
    /* 005161fa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00516201:; BB(0x00516201);
    /* 00516201: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00516208: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051620a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51620fu); f_008581c5();
    /* 0051620f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516210: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00516213: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516215: je 0x516454 */ if (fZ) goto L_00516454;
L_0051621b:; BB(0x0051621b);
    /* 0051621b: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00516222: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00516229: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051622c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051622e: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 00516233: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00516238: push dword ptr [0xa72d24] */ { u32 v = R32((u32)(0xa72d24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051623e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x516243u); f_005795a0();
    /* 00516243: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00516246: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0051624d:; BB(0x0051624d);
    /* 0051624d: mov dword ptr [0xa72d4c], eax */ W32((u32)(0xa72d4cu), r_eax);
    /* 00516252: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00516259: mov eax, dword ptr [0xa72d38] */ r_eax = R32((u32)(0xa72d38u));
    /* 0051625e: mov edi, dword ptr [0x9bb454] */ r_edi = R32((u32)(0x9bb454u));
    /* 00516264: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0051626a: mov esi, dword ptr [eax + 0x430] */ r_esi = R32((u32)(r_eax+0x430u));
    /* 00516270: lea ebx, [ebp - 0x4c] */ r_ebx = (u32)(r_ebp+0xffffffb4u);
    /* 00516273: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0051627a: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0051627d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051627e: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00516285: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516286: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0051628d: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0051628f: mov dword ptr [ebp - 0x40], 0xc1a00000 */ W32((u32)(r_ebp+0xffffffc0u), 0xc1a00000u);
    /* 00516296: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0051629d: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005162a4: push dword ptr [esi + edi*8 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005162a8: push dword ptr [ecx + 0x18] */ { u32 v = R32((u32)(r_ecx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005162ab: mov ecx, dword ptr [0xa72d4c] */ r_ecx = R32((u32)(0xa72d4cu));
    /* 005162b1: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x5162b6u); f_00579be8();
    /* 005162b6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005162b8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5162bdu); f_008581c5();
    /* 005162bd: mov dword ptr [0xa72d48], eax */ W32((u32)(0xa72d48u), r_eax);
    /* 005162c2: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005162c4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5162c9u); f_008581c5();
    /* 005162c9: mov dword ptr [0xa72d44], eax */ W32((u32)(0xa72d44u), r_eax);
    /* 005162ce: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005162d0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5162d5u); f_008581c5();
    /* 005162d5: mov dword ptr [0xa72d40], eax */ W32((u32)(0xa72d40u), r_eax);
    /* 005162da: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005162dc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5162e1u); f_008581c5();
    /* 005162e1: mov dword ptr [0xa72d3c], eax */ W32((u32)(0xa72d3cu), r_eax);
    /* 005162e6: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005162e8: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5162edu); f_0077a684();
    /* 005162ed: mov edx, dword ptr [0xa72d48] */ r_edx = R32((u32)(0xa72d48u));
    /* 005162f3: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005162f5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005162f7: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5162fcu); f_0077a684();
    /* 005162fc: mov edx, dword ptr [0xa72d48] */ r_edx = R32((u32)(0xa72d48u));
    /* 00516302: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00516304: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00516307: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51630cu); f_0077a698();
    /* 0051630c: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516312: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00516314: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00516316: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51631bu); f_0077a698();
    /* 0051631b: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516321: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00516323: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00516326: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51632bu); f_0077a698();
    /* 0051632b: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516331: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00516333: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00516336: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51633bu); f_0077a698();
    /* 0051633b: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516341: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00516343: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00516346: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51634bu); f_0077a698();
    /* 0051634b: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516351: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00516353: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00516356: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51635bu); f_0077a698();
    /* 0051635b: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516361: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00516363: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00516366: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x51636bu); f_0077a6b4();
    /* 0051636b: mov edx, dword ptr [0xa72d40] */ r_edx = R32((u32)(0xa72d40u));
    /* 00516371: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00516373: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00516375: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x51637au); f_0077a6b4();
    /* 0051637a: mov edx, dword ptr [0xa72d40] */ r_edx = R32((u32)(0xa72d40u));
    /* 00516380: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00516382: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00516385: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x51638au); f_0077a6cc();
    /* 0051638a: mov edx, dword ptr [0xa72d3c] */ r_edx = R32((u32)(0xa72d3cu));
    /* 00516390: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00516392: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00516394: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x516399u); f_0077a6cc();
    /* 00516399: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051639c: mov edx, dword ptr [0xa72d3c] */ r_edx = R32((u32)(0xa72d3cu));
    /* 005163a2: mov esi, dword ptr [0x920810] */ r_esi = R32((u32)(0x920810u));
    /* 005163a8: movzx edi, word ptr [0x920814] */ r_edi = (u32)R16((u32)(0x920814u));
    /* 005163af: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005163b2: mov edx, dword ptr [0xa72d38] */ r_edx = R32((u32)(0xa72d38u));
    /* 005163b8: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005163bb: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005163bf: mov eax, 0x32 */ r_eax = 0x32u;
    /* 005163c4: mov ecx, 0x33 */ r_ecx = 0x33u;
    /* 005163c9: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005163cd: movzx eax, word ptr [0x920816] */ r_eax = (u32)R16((u32)(0x920816u));
    /* 005163d4: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 005163d8: mov ebx, 0x34 */ r_ebx = 0x34u;
    /* 005163dd: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 005163e1: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 005163e5: movzx eax, word ptr [0x920818] */ r_eax = (u32)R16((u32)(0x920818u));
    /* 005163ec: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005163f0: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005163f6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005163f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005163fb:; BB(0x005163fb);
    /* 005163fb: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005163fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005163ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516401: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00516407: push dword ptr [0x9bb598] */ { u32 v = R32((u32)(0x9bb598u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051640d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00516410: movsx esi, word ptr [ebp + ecx - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffccu));
    /* 00516415: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00516419: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051641d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051641e: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x516423u); f_00608470();
    /* 00516423: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516426: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00516429: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051642c: jge 0x516436 */ if ((fS==fO)) goto L_00516436;
L_0051642e:; BB(0x0051642e);
    /* 0051642e: mov edx, dword ptr [0xa72d38] */ r_edx = R32((u32)(0xa72d38u));
    /* 00516434: jmp 0x5163fb */ goto L_005163fb;
L_00516436:; BB(0x00516436);
    /* 00516436: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00516439: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051643c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051643f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00516442: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00516449: mov esp, ebp */ r_esp = r_ebp;
    /* 0051644b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051644c: ret  */ FN_RET(0x00516124); r_esp += 4; return;
L_0051644d:; BB(0x0051644d);
    /* 0051644d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051644f: jmp 0x51619e */ f_0051619e(); return;
L_00516454:; BB(0x00516454);
    /* 00516454: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00516456: jmp 0x51624d */ goto L_0051624d;
L_0051645b:; BB(0x0051645b);
    /* 0051645b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051645d: jmp 0x5161f5 */ goto L_005161f5;
}

void f_00516464(void) /* sub_516464 */
{
    FN_ENTER(0x00516464);
    /* 00516464: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516465: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00516467: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516469: call 0x516488 */ r_esp -= 4; W32(r_esp, 0x51646eu); f_00516488();
    /* 0051646e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516472: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00516474: jne 0x51647a */ if (!fZ) goto L_0051647a;
L_00516476:; BB(0x00516476);
    /* 00516476: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00516477: ret 4 */ FN_RET(0x00516464); r_esp += 8; return;
L_0051647a:; BB(0x0051647a);
    /* 0051647a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051647b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x516480u); f_005c2f74();
    /* 00516480: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516481: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00516482: ret 4 */ FN_RET(0x00516464); r_esp += 8; return;
}

void f_00516488(void) /* sub_516488 */
{
    FN_ENTER(0x00516488);
    /* 00516488: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00516489: mov ebp, esp */ r_ebp = r_esp;
    /* 0051648b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051648d: push 0x8d4508 */ { u32 v = 0x8d4508u; r_esp -= 4; W32(r_esp, v); }
    /* 00516492: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00516498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516499: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005164a0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005164a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005164a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005164a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005164ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005164af: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005164b2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005164b9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005164bc: mov edx, dword ptr [ecx + 0x460] */ r_edx = R32((u32)(r_ecx+0x460u));
    /* 005164c2: mov dword ptr [ecx], 0xaffd20 */ W32((u32)(r_ecx), 0xaffd20u);
    /* 005164c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005164ca: je 0x5164e6 */ if (fZ) goto L_005164e6;
L_005164cc:; BB(0x005164cc);
    /* 005164cc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005164cf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005164d3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005164d8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005164dc: mov dword ptr [ecx + 0x460], 0 */ W32((u32)(r_ecx+0x460u), 0x0u);
L_005164e6:; BB(0x005164e6);
    /* 005164e6: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5164ebu); f_007b9c8c();
    /* 005164eb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005164f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005164f5: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x5164fau); f_0051f4fc();
    /* 005164fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005164fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00516504: mov esp, ebp */ r_esp = r_ebp;
    /* 00516506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00516507: ret  */ FN_RET(0x00516488); r_esp += 4; return;
}

void f_00516508(void) /* sub_516508 */
{
    FN_ENTER(0x00516508);
    /* 00516508: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00516509: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051650a: mov esi, ecx */ r_esi = r_ecx;
    /* 0051650c: fld dword ptr [esi + 0x434] */ FPUSH(R_F32((u32)(r_esi+0x434u)));
    /* 00516512: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 00516515: fcom dword ptr [0x920cd0] */ fx_compare(ST(0), R_F32((u32)(0x920cd0u))); 
    /* 0051651b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051651d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00516520: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00516521: jb 0x51652f */ if (fC) goto L_0051652f;
L_00516523:; BB(0x00516523);
    /* 00516523: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00516525: mov ecx, esi */ r_ecx = r_esi;
    /* 00516527: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x51652du); call_ind(t); }
    /* 0051652d: jmp 0x516539 */ goto L_00516539;
L_0051652f:; BB(0x0051652f);
    /* 0051652f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00516531: mov ecx, esi */ r_ecx = r_esi;
    /* 00516533: call dword ptr [eax + 0x190] */ { u32 t = R32((u32)(r_eax+0x190u)); r_esp -= 4; W32(r_esp, 0x516539u); call_ind(t); }
L_00516539:; BB(0x00516539);
    /* 00516539: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0051653c: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00516542: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00516545: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516546: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00516547: ret  */ FN_RET(0x00516508); r_esp += 4; return;
}

void f_00516548(void) /* sub_516548 */
{
    FN_ENTER(0x00516548);
    /* 00516548: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516549: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051654b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051654d: call 0x520220 */ r_esp -= 4; W32(r_esp, 0x516552u); f_00520220();
    /* 00516552: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516554: call 0x51655c */ r_esp -= 4; W32(r_esp, 0x516559u); f_0051655c();
    /* 00516559: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051655a: ret  */ FN_RET(0x00516548); r_esp += 4; return;
}

void f_0051655c(void) /* sub_51655C */
{
    FN_ENTER(0x0051655c);
    /* 0051655c: fld dword ptr [0x920ccc] */ FPUSH(R_F32((u32)(0x920cccu)));
    /* 00516562: fld dword ptr [ecx + 0x434] */ FPUSH(R_F32((u32)(r_ecx+0x434u)));
    /* 00516568: fld dword ptr [ecx + 0x434] */ FPUSH(R_F32((u32)(r_ecx+0x434u)));
    /* 0051656e: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00516571: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00516573: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00516575: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 00516577: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00516579: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051657a: jae 0x51658a */ if (!fC) goto L_0051658a;
L_0051657c:; BB(0x0051657c);
    /* 0051657c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0051657e: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00516580: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00516582: fst dword ptr [ecx + 0x434] */ W_F32((u32)(r_ecx+0x434u), ST(0));
    /* 00516588: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0051658a:; BB(0x0051658a);
    /* 0051658a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051658c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0051658e: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 00516594: ret  */ FN_RET(0x0051655c); r_esp += 4; return;
}

void f_00516598(void) /* sub_516598 */
{
    FN_ENTER(0x00516598);
    /* 00516598: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516599: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051659b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051659d: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5165a2u); f_005213d8();
    /* 005165a2: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 005165a5: fadd dword ptr [ebx + 0x458] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x458u));
    /* 005165ab: fstp dword ptr [ebx + 0x3a0] */ W_F32((u32)(r_ebx+0x3a0u), ST(0)); FPOP();
    /* 005165b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005165b2: ret  */ FN_RET(0x00516598); r_esp += 4; return;
}

void f_005165b4(void) /* sub_5165B4 */
{
    FN_ENTER(0x005165b4);
    /* 005165b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005165b5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005165b7: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 005165bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005165bf: mov eax, dword ptr [0xa72d68] */ r_eax = R32((u32)(0xa72d68u));
    /* 005165c4: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005165c6: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005165c9: call 0x5215ec */ r_esp -= 4; W32(r_esp, 0x5165ceu); f_005215ec();
    /* 005165ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005165d0: je 0x5165e3 */ if (fZ) goto L_005165e3;
L_005165d2:; BB(0x005165d2);
    /* 005165d2: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 005165d8: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005165db: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 005165e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005165e2: ret  */ FN_RET(0x005165b4); r_esp += 4; return;
L_005165e3:; BB(0x005165e3);
    /* 005165e3: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 005165e9: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005165ec: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 005165f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005165f3: ret  */ FN_RET(0x005165b4); r_esp += 4; return;
}

void f_005165f4(void) /* sub_5165F4 */
{
    FN_ENTER(0x005165f4);
    /* 005165f4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005165f7: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005165fb: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 005165ff: fsub dword ptr [esp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xcu));
    /* 00516603: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00516606: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00516607: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051660a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x51660fu); f_0082e900();
    /* 0051660f: fcomp dword ptr [0x920cc0] */ fx_compare(ST(0), R_F32((u32)(0x920cc0u))); FPOP();
    /* 00516615: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00516617: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00516618: jb 0x516667 */ if (fC) goto L_00516667;
L_0051661a:; BB(0x0051661a);
    /* 0051661a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0051661d: fmul dword ptr [0x920cb8] */ ST(0) = ST(0) * R_F32((u32)(0x920cb8u));
    /* 00516623: fld dword ptr [0x920cb4] */ FPUSH(R_F32((u32)(0x920cb4u)));
    /* 00516629: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051662b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051662d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051662f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00516632: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00516633: jae 0x516643 */ if (!fC) goto L_00516643;
L_00516635:; BB(0x00516635);
    /* 00516635: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00516637: fld dword ptr [0x920cbc] */ FPUSH(R_F32((u32)(0x920cbcu)));
    /* 0051663d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00516641: jmp 0x51665b */ goto L_0051665b;
L_00516643:; BB(0x00516643);
    /* 00516643: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00516646: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00516648: fchs  */ ST(0) = -ST(0);
    /* 0051664a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051664c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051664e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051664f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00516651: ja 0x516655 */ if ((!fC&&!fZ)) goto L_00516655;
L_00516653:; BB(0x00516653);
    /* 00516653: fst st(1) */ ST(1) = ST(0);
L_00516655:; BB(0x00516655);
    /* 00516655: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00516657: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_0051665b:; BB(0x0051665b);
    /* 0051665b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0051665f: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00516663: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_00516667:; BB(0x00516667);
    /* 00516667: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0051666b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051666e: ret 8 */ FN_RET(0x005165f4); r_esp += 12; return;
}

void f_00516674(void) /* sub_516674 */
{
    FN_ENTER(0x00516674);
    /* 00516674: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00516675: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00516677: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00516679: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 0051667e: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x516683u); f_007879b8();
    /* 00516683: mov ecx, eax */ r_ecx = r_eax;
    /* 00516685: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00516688: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051668a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051668b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051668c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051668d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051668e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051668f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x516694u); f_008144b0();
    /* 00516694: push 0xfffffc00 */ { u32 v = 0xfffffc00u; r_esp -= 4; W32(r_esp, v); }
    /* 00516699: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51669eu); f_00814680();
    /* 0051669e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005166a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005166a2: ret  */ FN_RET(0x00516674); r_esp += 4; return;
}

void f_005166a4(void) /* sub_5166A4 */
{
    FN_ENTER(0x005166a4);
    /* 005166a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005166a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005166a6: mov edi, ecx */ r_edi = r_ecx;
    /* 005166a8: mov edx, dword ptr [0xa72d70] */ r_edx = R32((u32)(0xa72d70u));
    /* 005166ae: fld dword ptr [0x920cb0] */ FPUSH(R_F32((u32)(0x920cb0u)));
    /* 005166b4: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 005166b7: fcomp dword ptr [edi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3b4u))); FPOP();
    /* 005166bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005166bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005166c0: jbe 0x516716 */ if ((fC||fZ)) goto L_00516716;
L_005166c2:; BB(0x005166c2);
    /* 005166c2: fld dword ptr [edi + 0x434] */ FPUSH(R_F32((u32)(r_edi+0x434u)));
    /* 005166c8: fsub dword ptr [edi + 0x3a0] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3a0u));
    /* 005166ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005166cf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005166d2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x5166d7u); f_0082e900();
    /* 005166d7: fcomp dword ptr [0x920cac] */ fx_compare(ST(0), R_F32((u32)(0x920cacu))); FPOP();
    /* 005166dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005166df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005166e0: jae 0x516716 */ if (!fC) goto L_00516716;
L_005166e2:; BB(0x005166e2);
    /* 005166e2: lea ecx, [edi + 0x438] */ r_ecx = (u32)(r_edi+0x438u);
    /* 005166e8: lea edx, [edi + 0x3a8] */ r_edx = (u32)(r_edi+0x3a8u);
    /* 005166ee: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x5166f3u); f_0082f9e0();
    /* 005166f3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005166f6: mov eax, dword ptr [edi + 0x31c] */ r_eax = R32((u32)(r_edi+0x31cu));
    /* 005166fc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005166ff: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x516704u); f_0082ddd8();
    /* 00516704: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00516707: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00516709: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051670b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051670c: jb 0x516716 */ if (fC) goto L_00516716;
L_0051670e:; BB(0x0051670e);
    /* 0051670e: mov eax, 1 */ r_eax = 0x1u;
    /* 00516713: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516714: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00516715: ret  */ FN_RET(0x005166a4); r_esp += 4; return;
L_00516716:; BB(0x00516716);
    /* 00516716: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00516718: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516719: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051671a: ret  */ FN_RET(0x005166a4); r_esp += 4; return;
}

void f_0051671c(void) /* sub_51671C */
{
    FN_ENTER(0x0051671c);
    /* 0051671c: mov ecx, dword ptr [0xa72d78] */ r_ecx = R32((u32)(0xa72d78u));
    /* 00516722: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00516724: je 0x516738 */ if (fZ) goto L_00516738;
L_00516726:; BB(0x00516726);
    /* 00516726: je 0x51672e */ if (fZ) goto L_0051672e;
L_00516728:; BB(0x00516728);
    /* 00516728: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051672a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051672c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x51672eu); call_ind(t); }
L_0051672e:; BB(0x0051672e);
    /* 0051672e: mov dword ptr [0xa72d78], 0 */ W32((u32)(0xa72d78u), 0x0u);
L_00516738:; BB(0x00516738);
    /* 00516738: ret  */ FN_RET(0x0051671c); r_esp += 4; return;
}

void f_0051673c(void) /* sub_51673C */
{
    FN_ENTER(0x0051673c);
    /* 0051673c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051673d: mov ebp, esp */ r_ebp = r_esp;
    /* 0051673f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00516741: push 0x8d4530 */ { u32 v = 0x8d4530u; r_esp -= 4; W32(r_esp, v); }
    /* 00516746: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051674c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051674d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00516754: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00516757: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051675a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051675d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00516760: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00516763: push 0x4b0 */ { u32 v = 0x4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516768: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0051676f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x516774u); f_005caba4();
    /* 00516774: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516775: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00516778: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051677a: je 0x5167c1 */ if (fZ) goto L_005167c1;
L_0051677c:; BB(0x0051677c);
    /* 0051677c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00516783: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051678a: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051678d: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516790: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516793: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00516797: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051679a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051679b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051679e: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005167a4: call 0x5167c8 */ r_esp -= 4; W32(r_esp, 0x5167a9u); f_005167c8();
    /* 005167a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005167ac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005167b3:; BB(0x005167b3);
    /* 005167b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005167b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005167bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005167bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005167c0: ret  */ FN_RET(0x0051673c); r_esp += 4; return;
L_005167c1:; BB(0x005167c1);
    /* 005167c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005167c3: jmp 0x5167b3 */ goto L_005167b3;
}

void f_005167c8(void) /* sub_5167C8 */
{
    FN_ENTER(0x005167c8);
    /* 005167c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005167c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005167cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005167cd: push 0x8d454c */ { u32 v = 0x8d454cu; r_esp -= 4; W32(r_esp, v); }
    /* 005167d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005167d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005167d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005167e0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005167e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005167e6: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 005167e9: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005167ec: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005167ef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005167f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005167f5: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 005167f9: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005167fc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005167ff: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00516802: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00516805: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00516808: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0051680b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051680e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00516811: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00516814: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x516819u); f_005216f4();
    /* 00516819: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00516820: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00516823: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00516826: mov dword ptr [ecx], 0xaffd20 */ W32((u32)(r_ecx), 0xaffd20u);
    /* 0051682c: mov eax, dword ptr [0x9bb610] */ r_eax = R32((u32)(0x9bb610u));
    /* 00516831: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516832: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00516835: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00516839: mov word ptr [ecx + 0x420], dx */ W16((u32)(r_ecx+0x420u), (u16)r_edx);
    /* 00516840: call 0x51f760 */ r_esp -= 4; W32(r_esp, 0x516845u); f_0051f760();
    /* 00516845: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00516848: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051684b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051684e: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00516851: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00516855: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 00516859: mov edx, ebx */ r_edx = r_ebx;
    /* 0051685b: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0051685d: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 00516860: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00516863: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 00516866: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00516869: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0051686c: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0051686f: mov dword ptr [ecx + 0x424], eax */ W32((u32)(r_ecx+0x424u), r_eax);
    /* 00516875: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00516878: mov dword ptr [ecx + 0x428], eax */ W32((u32)(r_ecx+0x428u), r_eax);
    /* 0051687e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00516881: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00516884: mov dword ptr [ecx + 0x42c], eax */ W32((u32)(r_ecx+0x42cu), r_eax);
    /* 0051688a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051688c: mov dword ptr [ecx + 0x414], eax */ W32((u32)(r_ecx+0x414u), r_eax);
    /* 00516892: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00516895: mov dword ptr [ecx + 0x418], eax */ W32((u32)(r_ecx+0x418u), r_eax);
    /* 0051689b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0051689e: mov dword ptr [ecx + 0x41c], eax */ W32((u32)(r_ecx+0x41cu), r_eax);
    /* 005168a4: call 0x518bfc */ r_esp -= 4; W32(r_esp, 0x5168a9u); f_00518bfc();
    /* 005168a9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005168ac: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005168af: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005168b2: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005168b5: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 005168bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005168c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005168c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005168cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005168cc: ret 0x18 */ FN_RET(0x005167c8); r_esp += 28; return;
}

void f_005168d0(void) /* sub_5168D0 */
{
    FN_ENTER(0x005168d0);
    /* 005168d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005168d1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005168d4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005168d6: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5168dbu); f_004f7c84();
    /* 005168db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005168dd: je 0x5168ef */ if (fZ) goto L_005168ef;
L_005168df:; BB(0x005168df);
    /* 005168df: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005168e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005168e4: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x5168eau); call_ind(t); }
    /* 005168ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005168ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005168ee: ret  */ FN_RET(0x005168d0); r_esp += 4; return;
L_005168ef:; BB(0x005168ef);
    /* 005168ef: movzx eax, word ptr [ebp + 0x420] */ r_eax = (u32)R16((u32)(r_ebp+0x420u));
    /* 005168f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005168f7: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5168fcu); f_007b4d18();
    /* 005168fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005168fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005168ff: je 0x516a37 */ if (fZ) goto L_00516a37;
L_00516905:; BB(0x00516905);
    /* 00516905: mov ecx, eax */ r_ecx = r_eax;
    /* 00516907: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x51690cu); f_008173b4();
    /* 0051690c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051690e: je 0x516a37 */ if (fZ) goto L_00516a37;
L_00516914:; BB(0x00516914);
    /* 00516914: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00516917: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00516919: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x51691fu); call_ind(t); }
    /* 0051691f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516922: je 0x516a0a */ if (fZ) goto L_00516a0a;
L_00516928:; BB(0x00516928);
    /* 00516928: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051692b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051692d: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x516933u); call_ind(t); }
    /* 00516933: mov ecx, dword ptr [ebp + 0x460] */ r_ecx = R32((u32)(r_ebp+0x460u));
    /* 00516939: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051693b: je 0x516a50 */ if (fZ) goto L_00516a50;
L_00516941:; BB(0x00516941);
    /* 00516941: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00516948: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051694b: je 0x516a49 */ if (fZ) goto L_00516a49;
L_00516951:; BB(0x00516951);
    /* 00516951: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516954: je 0x516a49 */ if (fZ) goto L_00516a49;
L_0051695a:; BB(0x0051695a);
    /* 0051695a: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051695d: je 0x516a49 */ if (fZ) goto L_00516a49;
L_00516963:; BB(0x00516963);
    /* 00516963: mov eax, dword ptr [ebp + 0x464] */ r_eax = R32((u32)(r_ebp+0x464u));
    /* 00516969: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051696b: jne 0x516982 */ if (!fZ) goto L_00516982;
L_0051696d:; BB(0x0051696d);
    /* 0051696d: fld dword ptr [0x920ca4] */ FPUSH(R_F32((u32)(0x920ca4u)));
    /* 00516973: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00516976: mov dword ptr [ebp + 0x464], 1 */ W32((u32)(r_ebp+0x464u), 0x1u);
    /* 00516980: jmp 0x516995 */ goto L_00516995;
L_00516982:; BB(0x00516982);
    /* 00516982: fld dword ptr [0x920ca8] */ FPUSH(R_F32((u32)(0x920ca8u)));
    /* 00516988: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051698b: mov dword ptr [ebp + 0x464], 0 */ W32((u32)(r_ebp+0x464u), 0x0u);
L_00516995:; BB(0x00516995);
    /* 00516995: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x51699au); f_00520e6c();
    /* 0051699a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051699c: je 0x5169aa */ if (fZ) goto L_005169aa;
L_0051699e:; BB(0x0051699e);
    /* 0051699e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005169a1: fmul dword ptr [0x920ca4] */ ST(0) = ST(0) * R_F32((u32)(0x920ca4u));
    /* 005169a7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_005169aa:; BB(0x005169aa);
    /* 005169aa: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005169ad: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5169b2u); f_0082ddd8();
    /* 005169b2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005169b6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005169ba: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005169bd: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005169c0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005169c4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5169c9u); f_0082dcbc();
    /* 005169c9: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005169cd: fadd dword ptr [ebp + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x300u));
    /* 005169d3: fld dword ptr [0x920ca0] */ FPUSH(R_F32((u32)(0x920ca0u)));
    /* 005169d9: fadd dword ptr [ebp + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x304u));
    /* 005169df: mov ecx, dword ptr [ebp + 0x460] */ r_ecx = R32((u32)(r_ebp+0x460u));
    /* 005169e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005169e7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005169eb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005169ef: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005169f3: fchs  */ ST(0) = -ST(0);
    /* 005169f5: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005169f8: fadd dword ptr [ebp + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x308u));
    /* 005169fe: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00516a02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516a03: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x516a08u); f_00508db8();
    /* 00516a08: jmp 0x516a19 */ goto L_00516a19;
L_00516a0a:; BB(0x00516a0a);
    /* 00516a0a: mov ecx, dword ptr [ebp + 0x460] */ r_ecx = R32((u32)(r_ebp+0x460u));
    /* 00516a10: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516a12: je 0x516a19 */ if (fZ) goto L_00516a19;
L_00516a14:; BB(0x00516a14);
    /* 00516a14: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x516a19u); f_00508f48();
L_00516a19:; BB(0x00516a19);
    /* 00516a19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00516a1b: call 0x58a5dc */ r_esp -= 4; W32(r_esp, 0x516a20u); f_0058a5dc();
    /* 00516a20: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00516a22: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x516a27u); f_006401f0();
    /* 00516a27: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00516a2a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00516a2c: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x516a32u); call_ind(t); }
    /* 00516a32: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00516a35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00516a36: ret  */ FN_RET(0x005168d0); r_esp += 4; return;
L_00516a37:; BB(0x00516a37);
    /* 00516a37: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00516a3b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00516a40: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00516a44: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00516a47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00516a48: ret  */ FN_RET(0x005168d0); r_esp += 4; return;
L_00516a49:; BB(0x00516a49);
    /* 00516a49: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x516a4eu); f_00508f48();
    /* 00516a4e: jmp 0x516a19 */ goto L_00516a19;
L_00516a50:; BB(0x00516a50);
    /* 00516a50: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 00516a55: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 00516a5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516a5c: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x516a61u); f_00509590();
    /* 00516a61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516a64: mov dword ptr [ebp + 0x460], eax */ W32((u32)(r_ebp+0x460u), r_eax);
    /* 00516a6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516a6c: je 0x516a19 */ if (fZ) goto L_00516a19;
L_00516a6e:; BB(0x00516a6e);
    /* 00516a6e: mov ecx, eax */ r_ecx = r_eax;
    /* 00516a70: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x516a75u); f_00508f48();
    /* 00516a75: jmp 0x516a19 */ goto L_00516a19;
}

void f_00516a78(void) /* sub_516A78 */
{
    FN_ENTER(0x00516a78);
    /* 00516a78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00516a79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00516a7a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00516a7d: mov edi, ecx */ r_edi = r_ecx;
    /* 00516a7f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x516a84u); f_004f7c84();
    /* 00516a84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516a86: jne 0x516b82 */ if (!fZ) goto L_00516b82;
L_00516a8c:; BB(0x00516a8c);
    /* 00516a8c: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 00516a92: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00516a94: jne 0x516b7c */ if (!fZ) goto L_00516b7c;
L_00516a9a:; BB(0x00516a9a);
    /* 00516a9a: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x516a9fu); f_00694cc8();
    /* 00516a9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516aa1: je 0x516ac7 */ if (fZ) goto L_00516ac7;
L_00516aa3:; BB(0x00516aa3);
    /* 00516aa3: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00516aa8: mov ecx, edi */ r_ecx = r_edi;
    /* 00516aaa: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00516aac: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516ab2: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516ab8: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x516abbu); call_ind(t); }
    /* 00516abb: mov ebp, eax */ r_ebp = r_eax;
    /* 00516abd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516abf: je 0x516b7c */ if (fZ) goto L_00516b7c;
L_00516ac5:; BB(0x00516ac5);
    /* 00516ac5: jmp 0x516ae5 */ goto L_00516ae5;
L_00516ac7:; BB(0x00516ac7);
    /* 00516ac7: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00516acc: mov ecx, edi */ r_ecx = r_edi;
    /* 00516ace: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00516ad0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00516ad5: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x516ad8u); call_ind(t); }
    /* 00516ad8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516ada: je 0x516b7c */ if (fZ) goto L_00516b7c;
L_00516ae0:; BB(0x00516ae0);
    /* 00516ae0: mov ebp, 1 */ r_ebp = 0x1u;
L_00516ae5:; BB(0x00516ae5);
    /* 00516ae5: mov edx, dword ptr [edi + 0x430] */ r_edx = R32((u32)(r_edi+0x430u));
    /* 00516aeb: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00516aee: je 0x516b14 */ if (fZ) goto L_00516b14;
L_00516af0:; BB(0x00516af0);
    /* 00516af0: mov dword ptr [esp], 0x3f4ccccd */ W32((u32)(r_esp), 0x3f4ccccdu);
    /* 00516af7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00516afa: mov ecx, edi */ r_ecx = r_edi;
    /* 00516afc: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00516b04: mov dword ptr [esp + 8], 0x3f4ccccd */ W32((u32)(r_esp+0x8u), 0x3f4ccccdu);
    /* 00516b0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516b0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516b0f: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x516b14u); f_00520cf8();
L_00516b14:; BB(0x00516b14);
    /* 00516b14: mov ecx, edi */ r_ecx = r_edi;
    /* 00516b16: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x516b1bu); f_00520608();
    /* 00516b1b: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00516b1e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x516b23u); f_00829cc8();
    /* 00516b23: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x516b28u); f_0082d7b0();
    /* 00516b28: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516b2b: push dword ptr [edi + 0x434] */ { u32 v = R32((u32)(r_edi+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516b31: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00516b33: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516b36: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x516b3bu); f_00830b74();
    /* 00516b3b: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00516b3e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00516b40: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x516b45u); f_0082d8bc();
    /* 00516b45: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x516b4au); f_00520d08();
    /* 00516b4a: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x516b4fu); f_00578b38();
    /* 00516b4f: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 00516b54: call 0x7a9404 */ r_esp -= 4; W32(r_esp, 0x516b59u); f_007a9404();
    /* 00516b59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516b5a: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516b5d: je 0x516b92 */ if (fZ) goto L_00516b92;
L_00516b5f:; BB(0x00516b5f);
    /* 00516b5f: mov ecx, edi */ r_ecx = r_edi;
    /* 00516b61: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x516b66u); f_007aa7b8();
L_00516b66:; BB(0x00516b66);
    /* 00516b66: call 0x7a9424 */ r_esp -= 4; W32(r_esp, 0x516b6bu); f_007a9424();
    /* 00516b6b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x516b70u); f_0082dab0();
    /* 00516b70: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x516b75u); f_0082da80();
    /* 00516b75: mov ecx, edi */ r_ecx = r_edi;
    /* 00516b77: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x516b7cu); f_00520610();
L_00516b7c:; BB(0x00516b7c);
    /* 00516b7c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00516b7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00516b80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00516b81: ret  */ FN_RET(0x00516a78); r_esp += 4; return;
L_00516b82:; BB(0x00516b82);
    /* 00516b82: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00516b84: mov ecx, edi */ r_ecx = r_edi;
    /* 00516b86: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x516b8cu); call_ind(t); }
    /* 00516b8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00516b8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00516b90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00516b91: ret  */ FN_RET(0x00516a78); r_esp += 4; return;
L_00516b92:; BB(0x00516b92);
    /* 00516b92: mov ecx, edi */ r_ecx = r_edi;
    /* 00516b94: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x516b99u); f_007aa668();
    /* 00516b99: jmp 0x516b66 */ goto L_00516b66;
}

void f_00516b9c(void) /* sub_516B9C */
{
    FN_ENTER(0x00516b9c);
    /* 00516b9c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00516ba0: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00516ba3: ja 0x516c28 */ if ((!fC&&!fZ)) goto L_00516c28;
L_00516ba9:; BB(0x00516ba9);
    /* 00516ba9: mov eax, dword ptr [eax*4 + 0x920b2c] */ r_eax = R32((u32)(r_eax*4+0x920b2cu));
    /* 00516bb0: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00516c28:; BB(0x00516c28);
    /* 00516c28: ret 8 */ FN_RET(0x00516b9c); r_esp += 12; return;
}

void f_00516bb2(void)
{
    FN_ENTER(0x00516bb2);
    /* 00516bb2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516bb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516bb7: call 0x516c2c */ r_esp -= 4; W32(r_esp, 0x516bbcu); f_00516c2c();
    /* 00516bbc: jmp 0x516c28 */ goto L_00516c28;
L_00516c28:; BB(0x00516c28);
    /* 00516c28: ret 8 */ FN_RET(0x00516bb2); r_esp += 12; return;
}

void f_00516bbe(void)
{
    FN_ENTER(0x00516bbe);
    /* 00516bbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516bc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516bc3: call 0x516c60 */ r_esp -= 4; W32(r_esp, 0x516bc8u); f_00516c60();
    /* 00516bc8: jmp 0x516c28 */ goto L_00516c28;
L_00516c28:; BB(0x00516c28);
    /* 00516c28: ret 8 */ FN_RET(0x00516bbe); r_esp += 12; return;
}

void f_00516bca(void)
{
    FN_ENTER(0x00516bca);
    /* 00516bca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516bce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516bcf: call 0x516ed8 */ r_esp -= 4; W32(r_esp, 0x516bd4u); f_00516ed8();
    /* 00516bd4: jmp 0x516c28 */ goto L_00516c28;
L_00516c28:; BB(0x00516c28);
    /* 00516c28: ret 8 */ FN_RET(0x00516bca); r_esp += 12; return;
}

void f_00516bd6(void)
{
    FN_ENTER(0x00516bd6);
    /* 00516bd6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516bda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516bdb: call 0x516fbc */ r_esp -= 4; W32(r_esp, 0x516be0u); f_00516fbc();
    /* 00516be0: jmp 0x516c28 */ goto L_00516c28;
L_00516c28:; BB(0x00516c28);
    /* 00516c28: ret 8 */ FN_RET(0x00516bd6); r_esp += 12; return;
}

void f_00516be2(void)
{
    FN_ENTER(0x00516be2);
    /* 00516be2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516be6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516be7: call 0x517200 */ r_esp -= 4; W32(r_esp, 0x516becu); f_00517200();
    /* 00516bec: jmp 0x516c28 */ goto L_00516c28;
L_00516c28:; BB(0x00516c28);
    /* 00516c28: ret 8 */ FN_RET(0x00516be2); r_esp += 12; return;
}

void f_00516bee(void)
{
    FN_ENTER(0x00516bee);
    /* 00516bee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516bf3: call 0x51738c */ r_esp -= 4; W32(r_esp, 0x516bf8u); f_0051738c();
    /* 00516bf8: jmp 0x516c28 */ goto L_00516c28;
L_00516c28:; BB(0x00516c28);
    /* 00516c28: ret 8 */ FN_RET(0x00516bee); r_esp += 12; return;
}

void f_00516bfa(void)
{
    FN_ENTER(0x00516bfa);
    /* 00516bfa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516bfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516bff: call 0x51784c */ r_esp -= 4; W32(r_esp, 0x516c04u); f_0051784c();
    /* 00516c04: jmp 0x516c28 */ goto L_00516c28;
L_00516c28:; BB(0x00516c28);
    /* 00516c28: ret 8 */ FN_RET(0x00516bfa); r_esp += 12; return;
}

void f_00516c06(void)
{
    FN_ENTER(0x00516c06);
    /* 00516c06: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516c0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516c0b: call 0x517b28 */ r_esp -= 4; W32(r_esp, 0x516c10u); f_00517b28();
    /* 00516c10: jmp 0x516c28 */ goto L_00516c28;
L_00516c28:; BB(0x00516c28);
    /* 00516c28: ret 8 */ FN_RET(0x00516c06); r_esp += 12; return;
}

void f_00516c12(void)
{
    FN_ENTER(0x00516c12);
    /* 00516c12: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516c17: call 0x518144 */ r_esp -= 4; W32(r_esp, 0x516c1cu); f_00518144();
    /* 00516c1c: jmp 0x516c28 */ goto L_00516c28;
L_00516c28:; BB(0x00516c28);
    /* 00516c28: ret 8 */ FN_RET(0x00516c12); r_esp += 12; return;
}

void f_00516c1e(void)
{
    FN_ENTER(0x00516c1e);
    /* 00516c1e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516c23: call 0x51845c */ r_esp -= 4; W32(r_esp, 0x516c28u); f_0051845c();
    /* 00516c28: ret 8 */ FN_RET(0x00516c1e); r_esp += 12; return;
}

void f_00516c2c(void) /* sub_516C2C */
{
    FN_ENTER(0x00516c2c);
    /* 00516c2c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00516c30: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516c33: je 0x516c4a */ if (fZ) goto L_00516c4a;
L_00516c35:; BB(0x00516c35);
    /* 00516c35: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00516c38: jne 0x516c47 */ if (!fZ) goto L_00516c47;
L_00516c3a:; BB(0x00516c3a);
    /* 00516c3a: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00516c3e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00516c43: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_00516c47:; BB(0x00516c47);
    /* 00516c47: ret 4 */ FN_RET(0x00516c2c); r_esp += 8; return;
L_00516c4a:; BB(0x00516c4a);
    /* 00516c4a: mov eax, dword ptr [ecx + 0x430] */ r_eax = R32((u32)(r_ecx+0x430u));
    /* 00516c50: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00516c53: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00516c56: mov dword ptr [ecx + 0x430], eax */ W32((u32)(r_ecx+0x430u), r_eax);
    /* 00516c5c: ret 4 */ FN_RET(0x00516c2c); r_esp += 8; return;
}

void f_00516c60(void) /* sub_516C60 */
{
    FN_ENTER(0x00516c60);
    /* 00516c60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00516c61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516c62: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00516c64: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00516c68: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516c6b: je 0x516de0 */ if (fZ) goto L_00516de0;
L_00516c71:; BB(0x00516c71);
    /* 00516c71: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00516c74: je 0x516da5 */ if (fZ) goto L_00516da5;
L_00516c7a:; BB(0x00516c7a);
    /* 00516c7a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00516c7d: je 0x516d88 */ if (fZ) goto L_00516d88;
L_00516c83:; BB(0x00516c83);
    /* 00516c83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00516c85: jne 0x516da5 */ if (!fZ) goto L_00516da5;
L_00516c8b:; BB(0x00516c8b);
    /* 00516c8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516c8d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x516c92u); f_007aa094();
    /* 00516c92: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00516c98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00516c9a: jl 0x516d71 */ if ((fS!=fO)) goto L_00516d71;
L_00516ca0:; BB(0x00516ca0);
    /* 00516ca0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00516ca3: jle 0x516ccc */ if ((fZ||fS!=fO)) goto L_00516ccc;
L_00516ca5:; BB(0x00516ca5);
    /* 00516ca5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00516ca8: jne 0x516d71 */ if (!fZ) goto L_00516d71;
L_00516cae:; BB(0x00516cae);
    /* 00516cae: fld dword ptr [ebx + 0x434] */ FPUSH(R_F32((u32)(r_ebx+0x434u)));
    /* 00516cb4: fsub dword ptr [0x920c78] */ ST(0) = ST(0) - R_F32((u32)(0x920c78u));
    /* 00516cba: fstp dword ptr [ebx + 0x434] */ W_F32((u32)(r_ebx+0x434u), ST(0)); FPOP();
    /* 00516cc0: add dword ptr [ebx + 0x3cc], 1 */ { u32 ad = (u32)(r_ebx+0x3ccu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00516cc7: jmp 0x516d71 */ goto L_00516d71;
L_00516ccc:; BB(0x00516ccc);
    /* 00516ccc: push dword ptr [ebx + 0x3ec] */ { u32 v = R32((u32)(r_ebx+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00516cd2: push dword ptr [ebx + 0x440] */ { u32 v = R32((u32)(r_ebx+0x440u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516cd8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516cda: push dword ptr [ebx + 0x438] */ { u32 v = R32((u32)(r_ebx+0x438u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516ce0: call 0x516e98 */ r_esp -= 4; W32(r_esp, 0x516ce5u); f_00516e98();
    /* 00516ce5: fld dword ptr [0x920c8c] */ FPUSH(R_F32((u32)(0x920c8cu)));
    /* 00516ceb: fadd dword ptr [ebx + 0x3e8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3e8u));
    /* 00516cf1: fld dword ptr [ebx + 0x434] */ FPUSH(R_F32((u32)(r_ebx+0x434u)));
    /* 00516cf7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00516cf9: fst dword ptr [ebx + 0x3e8] */ W_F32((u32)(r_ebx+0x3e8u), ST(0));
    /* 00516cff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00516d01: fld dword ptr [0x920ccc] */ FPUSH(R_F32((u32)(0x920cccu)));
    /* 00516d07: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 00516d0a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00516d0c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00516d0e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00516d0f: jbe 0x516d62 */ if ((fC||fZ)) goto L_00516d62;
L_00516d11:; BB(0x00516d11);
    /* 00516d11: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00516d13: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00516d19: fstp dword ptr [ebx + 0x434] */ W_F32((u32)(r_ebx+0x434u), ST(0)); FPOP();
    /* 00516d1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516d21: je 0x516daa */ if (fZ) goto L_00516daa;
L_00516d27:; BB(0x00516d27);
    /* 00516d27: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 00516d2d: mov dword ptr [ebx + 0x3c8], 2 */ W32((u32)(r_ebx+0x3c8u), 0x2u);
    /* 00516d37: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00516d3a: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 00516d40: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 00516d4a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00516d4c: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00516d4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00516d50: call 0x578268 */ r_esp -= 4; W32(r_esp, 0x516d55u); f_00578268();
    /* 00516d55: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00516d57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00516d58: call 0x578778 */ r_esp -= 4; W32(r_esp, 0x516d5du); f_00578778();
    /* 00516d5d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516d60: jmp 0x516d6a */ goto L_00516d6a;
L_00516d62:; BB(0x00516d62);
    /* 00516d62: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00516d64: fstp dword ptr [ebx + 0x434] */ W_F32((u32)(r_ebx+0x434u), ST(0)); FPOP();
L_00516d6a:; BB(0x00516d6a);
    /* 00516d6a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516d6c: call 0x51655c */ r_esp -= 4; W32(r_esp, 0x516d71u); f_0051655c();
L_00516d71:; BB(0x00516d71);
    /* 00516d71: fld dword ptr [ebx + 0x3ec] */ FPUSH(R_F32((u32)(r_ebx+0x3ecu)));
    /* 00516d77: fmul dword ptr [0x920c84] */ ST(0) = ST(0) * R_F32((u32)(0x920c84u));
    /* 00516d7d: fstp dword ptr [ebx + 0x3ec] */ W_F32((u32)(r_ebx+0x3ecu), ST(0)); FPOP();
    /* 00516d83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00516d84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00516d85: ret 4 */ FN_RET(0x00516c60); r_esp += 8; return;
L_00516d88:; BB(0x00516d88);
    /* 00516d88: fld dword ptr [ebx + 0x434] */ FPUSH(R_F32((u32)(r_ebx+0x434u)));
    /* 00516d8e: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 00516d91: fcomp dword ptr [0x920c7c] */ fx_compare(ST(0), R_F32((u32)(0x920c7cu))); FPOP();
    /* 00516d97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00516d99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00516d9a: jae 0x516da5 */ if (!fC) goto L_00516da5;
L_00516d9c:; BB(0x00516d9c);
    /* 00516d9c: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00516d9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516da0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x516da5u); f_0051f62c();
L_00516da5:; BB(0x00516da5);
    /* 00516da5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00516da6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00516da7: ret 4 */ FN_RET(0x00516c60); r_esp += 8; return;
L_00516daa:; BB(0x00516daa);
    /* 00516daa: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00516db0: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00516db2: jne 0x516d27 */ if (!fZ) goto L_00516d27;
L_00516db8:; BB(0x00516db8);
    /* 00516db8: fld dword ptr [ebx + 0x3ec] */ FPUSH(R_F32((u32)(r_ebx+0x3ecu)));
    /* 00516dbe: fmul dword ptr [0x920c84] */ ST(0) = ST(0) * R_F32((u32)(0x920c84u));
    /* 00516dc4: fstp dword ptr [ebx + 0x3ec] */ W_F32((u32)(r_ebx+0x3ecu), ST(0)); FPOP();
    /* 00516dca: mov dword ptr [ebx + 0x3c8], 1 */ W32((u32)(r_ebx+0x3c8u), 0x1u);
    /* 00516dd4: mov dword ptr [ebx + 0x3e8], 0x3f000000 */ W32((u32)(r_ebx+0x3e8u), 0x3f000000u);
    /* 00516dde: jmp 0x516d6a */ goto L_00516d6a;
L_00516de0:; BB(0x00516de0);
    /* 00516de0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00516de2: mov eax, 4 */ r_eax = 0x4u;
    /* 00516de7: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00516dee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516df0: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x516df6u); call_ind(t); }
    /* 00516df6: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 00516dfc: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00516dff: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00516e02: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 00516e08: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516e0a: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x516e0fu); f_0051f894();
    /* 00516e0f: movzx eax, word ptr [ebx + 0x420] */ r_eax = (u32)R16((u32)(r_ebx+0x420u));
    /* 00516e16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516e17: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x516e1cu); f_007b4d18();
    /* 00516e1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516e1f: je 0x516e29 */ if (fZ) goto L_00516e29;
L_00516e21:; BB(0x00516e21);
    /* 00516e21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516e22: mov ecx, eax */ r_ecx = r_eax;
    /* 00516e24: call 0x51a9b4 */ r_esp -= 4; W32(r_esp, 0x516e29u); f_0051a9b4();
L_00516e29:; BB(0x00516e29);
    /* 00516e29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516e2b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x516e30u); f_0061cdb0();
    /* 00516e30: mov edx, dword ptr [ebx + 0x30c] */ r_edx = R32((u32)(r_ebx+0x30cu));
    /* 00516e36: mov esi, dword ptr [ebx + 0x314] */ r_esi = R32((u32)(r_ebx+0x314u));
    /* 00516e3c: mov dword ptr [ebx + 0x3e8], 0 */ W32((u32)(r_ebx+0x3e8u), 0x0u);
    /* 00516e46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00516e48: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 00516e4e: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 00516e54: mov dword ptr [ebx + 0x438], edx */ W32((u32)(r_ebx+0x438u), r_edx);
    /* 00516e5a: mov dword ptr [ebx + 0x440], esi */ W32((u32)(r_ebx+0x440u), r_esi);
    /* 00516e60: lea eax, [ebx + 0x438] */ r_eax = (u32)(r_ebx+0x438u);
    /* 00516e66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516e67: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x516e6cu); f_007828e4();
    /* 00516e6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516e6d: fstp dword ptr [ebx + 0x3ec] */ W_F32((u32)(r_ebx+0x3ecu), ST(0)); FPOP();
    /* 00516e73: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 00516e78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516e7a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x516e7fu); f_007879b8();
    /* 00516e7f: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00516e82: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00516e84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516e85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516e86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516e87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516e88: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x516e8du); f_00814298();
    /* 00516e8d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00516e90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00516e91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00516e92: ret 4 */ FN_RET(0x00516c60); r_esp += 8; return;
}

void f_00516e98(void) /* sub_516E98 */
{
    FN_ENTER(0x00516e98);
    /* 00516e98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516e99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00516e9b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516e9f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516ea3: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516ea7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516ea9: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x516eaeu); f_00520adc();
    /* 00516eae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516eb0: je 0x516ec5 */ if (fZ) goto L_00516ec5;
L_00516eb2:; BB(0x00516eb2);
    /* 00516eb2: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 00516eb8: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00516ebb: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 00516ec1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00516ec2: ret 0xc */ FN_RET(0x00516e98); r_esp += 16; return;
L_00516ec5:; BB(0x00516ec5);
    /* 00516ec5: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 00516ecb: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00516ece: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 00516ed4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00516ed5: ret 0xc */ FN_RET(0x00516e98); r_esp += 16; return;
}

void f_00516ed8(void) /* sub_516ED8 */
{
    FN_ENTER(0x00516ed8);
    /* 00516ed8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516ed9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00516edb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00516edf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516ee2: je 0x516f10 */ if (fZ) goto L_00516f10;
L_00516ee4:; BB(0x00516ee4);
    /* 00516ee4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516ee7: je 0x516ef8 */ if (fZ) goto L_00516ef8;
L_00516ee9:; BB(0x00516ee9);
    /* 00516ee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00516eeb: jne 0x516f0c */ if (!fZ) goto L_00516f0c;
L_00516eed:; BB(0x00516eed);
    /* 00516eed: add dword ptr [ebx + 0x3c8], 1 */ { u32 ad = (u32)(r_ebx+0x3c8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00516ef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00516ef5: ret 4 */ FN_RET(0x00516ed8); r_esp += 8; return;
L_00516ef8:; BB(0x00516ef8);
    /* 00516ef8: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00516efe: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00516f01: jl 0x516f0c */ if ((fS!=fO)) goto L_00516f0c;
L_00516f03:; BB(0x00516f03);
    /* 00516f03: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00516f05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516f07: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x516f0cu); f_0051f62c();
L_00516f0c:; BB(0x00516f0c);
    /* 00516f0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00516f0d: ret 4 */ FN_RET(0x00516ed8); r_esp += 8; return;
L_00516f10:; BB(0x00516f10);
    /* 00516f10: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00516f12: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516f14: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x516f1au); call_ind(t); }
    /* 00516f1a: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 00516f20: mov dword ptr [ebx + 0x80], 0 */ W32((u32)(r_ebx+0x80u), 0x0u);
    /* 00516f2a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00516f2d: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00516f30: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 00516f36: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516f38: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x516f3du); f_0051f894();
    /* 00516f3d: movzx eax, word ptr [ebx + 0x420] */ r_eax = (u32)R16((u32)(r_ebx+0x420u));
    /* 00516f44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516f45: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x516f4au); f_007b4d18();
    /* 00516f4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516f4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516f4d: je 0x516f57 */ if (fZ) goto L_00516f57;
L_00516f4f:; BB(0x00516f4f);
    /* 00516f4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516f50: mov ecx, eax */ r_ecx = r_eax;
    /* 00516f52: call 0x51a9b4 */ r_esp -= 4; W32(r_esp, 0x516f57u); f_0051a9b4();
L_00516f57:; BB(0x00516f57);
    /* 00516f57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516f59: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x516f5eu); f_0061cdb0();
    /* 00516f5e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00516f63: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516f68: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516f6a: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x516f6fu); f_00618a44();
    /* 00516f6f: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 00516f74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00516f76: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x516f7bu); f_007879b8();
    /* 00516f7b: mov ecx, eax */ r_ecx = r_eax;
    /* 00516f7d: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00516f80: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00516f82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516f83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516f85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516f86: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x516f8bu); f_00814298();
    /* 00516f8b: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516f8e: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00516f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516f95: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516f98: push 0x920c58 */ { u32 v = 0x920c58u; r_esp -= 4; W32(r_esp, v); }
    /* 00516f9d: push dword ptr [0xa72d78] */ { u32 v = R32((u32)(0xa72d78u)); r_esp -= 4; W32(r_esp, v); }
    /* 00516fa3: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x516fa8u); f_00578aa0();
    /* 00516fa8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00516fab: mov dword ptr [ebx + 0x3c8], 0 */ W32((u32)(r_ebx+0x3c8u), 0x0u);
    /* 00516fb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00516fb6: ret 4 */ FN_RET(0x00516ed8); r_esp += 8; return;
}

void f_00516fbc(void) /* sub_516FBC */
{
    FN_ENTER(0x00516fbc);
    /* 00516fbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00516fbd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00516fbe: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00516fc1: mov edi, ecx */ r_edi = r_ecx;
    /* 00516fc3: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00516fc7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516fca: je 0x517194 */ if (fZ) goto L_00517194;
L_00516fd0:; BB(0x00516fd0);
    /* 00516fd0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516fd3: je 0x517078 */ if (fZ) goto L_00517078;
L_00516fd9:; BB(0x00516fd9);
    /* 00516fd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516fdb: jne 0x51706a */ if (!fZ) goto L_0051706a;
L_00516fe1:; BB(0x00516fe1);
    /* 00516fe1: mov ecx, edi */ r_ecx = r_edi;
    /* 00516fe3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x516fe8u); f_007aa094();
    /* 00516fe8: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 00516fee: mov edx, dword ptr [edi + 0x314] */ r_edx = R32((u32)(r_edi+0x314u));
    /* 00516ff4: add dword ptr [edi + 0x3c8], 1 */ { u32 ad = (u32)(r_edi+0x3c8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00516ffb: mov dword ptr [edi + 0x438], eax */ W32((u32)(r_edi+0x438u), r_eax);
    /* 00517001: mov dword ptr [edi + 0x440], edx */ W32((u32)(r_edi+0x440u), r_edx);
    /* 00517007: lea ebp, [edi + 0x438] */ r_ebp = (u32)(r_edi+0x438u);
    /* 0051700d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051700e: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x517013u); f_007828e4();
    /* 00517013: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00517014: mov eax, dword ptr [edi + 0x438] */ r_eax = R32((u32)(r_edi+0x438u));
    /* 0051701a: mov edx, dword ptr [edi + 0x440] */ r_edx = R32((u32)(r_edi+0x440u));
    /* 00517020: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517023: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00517027: mov ecx, edi */ r_ecx = r_edi;
    /* 00517029: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051702c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00517030: call 0x516e98 */ r_esp -= 4; W32(r_esp, 0x517035u); f_00516e98();
    /* 00517035: mov ecx, edi */ r_ecx = r_edi;
    /* 00517037: call 0x51655c */ r_esp -= 4; W32(r_esp, 0x51703cu); f_0051655c();
    /* 0051703c: fld dword ptr [0x920c54] */ FPUSH(R_F32((u32)(0x920c54u)));
    /* 00517042: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 00517048: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051704a: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 00517050: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00517052: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00517054: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0051705a: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 00517060: mov ecx, edi */ r_ecx = r_edi;
    /* 00517062: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x517068u); call_ind(t); }
    /* 00517068: jmp 0x5170b2 */ goto L_005170b2;
L_0051706a:; BB(0x0051706a);
    /* 0051706a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051706d: jne 0x5170b2 */ if (!fZ) goto L_005170b2;
L_0051706f:; BB(0x0051706f);
    /* 0051706f: mov ecx, edi */ r_ecx = r_edi;
    /* 00517071: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x517076u); f_0051f81c();
    /* 00517076: jmp 0x5170b2 */ goto L_005170b2;
L_00517078:; BB(0x00517078);
    /* 00517078: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0051707e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00517080: je 0x5170b2 */ if (fZ) goto L_005170b2;
L_00517082:; BB(0x00517082);
    /* 00517082: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00517084: mov ecx, edi */ r_ecx = r_edi;
    /* 00517086: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x51708cu); call_ind(t); }
    /* 0051708c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051708e: je 0x51709f */ if (fZ) goto L_0051709f;
L_00517090:; BB(0x00517090);
    /* 00517090: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00517095: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00517097: mov ecx, edi */ r_ecx = r_edi;
    /* 00517099: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x51709fu); call_ind(t); }
L_0051709f:; BB(0x0051709f);
    /* 0051709f: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 005170a5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005170a8: je 0x5170ba */ if (fZ) goto L_005170ba;
L_005170aa:; BB(0x005170aa);
    /* 005170aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005170ab: mov ecx, edi */ r_ecx = r_edi;
    /* 005170ad: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5170b2u); f_0051f62c();
L_005170b2:; BB(0x005170b2);
    /* 005170b2: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005170b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005170b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005170b7: ret 4 */ FN_RET(0x00516fbc); r_esp += 8; return;
L_005170ba:; BB(0x005170ba);
    /* 005170ba: movzx eax, word ptr [edi + 0x420] */ r_eax = (u32)R16((u32)(r_edi+0x420u));
    /* 005170c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005170c2: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5170c7u); f_007b4d18();
    /* 005170c7: mov ebp, eax */ r_ebp = r_eax;
    /* 005170c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005170cc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005170ce: je 0x51717c */ if (fZ) goto L_0051717c;
L_005170d4:; BB(0x005170d4);
    /* 005170d4: movzx edx, word ptr [edi + 0x394] */ r_edx = (u32)R16((u32)(r_edi+0x394u));
    /* 005170db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005170dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005170de: call 0x51a924 */ r_esp -= 4; W32(r_esp, 0x5170e3u); f_0051a924();
    /* 005170e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005170e5: je 0x5170f2 */ if (fZ) goto L_005170f2;
L_005170e7:; BB(0x005170e7);
    /* 005170e7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005170e9: mov ecx, edi */ r_ecx = r_edi;
    /* 005170eb: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5170f0u); f_0051f62c();
    /* 005170f0: jmp 0x5170b2 */ goto L_005170b2;
L_005170f2:; BB(0x005170f2);
    /* 005170f2: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005170f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005170f7: mov ecx, edi */ r_ecx = r_edi;
    /* 005170f9: push dword ptr [0xa72d54] */ { u32 v = R32((u32)(0xa72d54u)); r_esp -= 4; W32(r_esp, v); }
    /* 005170ff: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x517104u); f_0051f918();
    /* 00517104: mov edx, eax */ r_edx = r_eax;
    /* 00517106: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00517108: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051710a: jle 0x517147 */ if ((fZ||fS!=fO)) goto L_00517147;
L_0051710c:; BB(0x0051710c);
    /* 0051710c: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00517110: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00517114: mov ebx, eax */ r_ebx = r_eax;
    /* 00517116: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00517119: mov esi, edx */ r_esi = r_edx;
L_0051711b:; BB(0x0051711b);
    /* 0051711b: movzx ebp, word ptr [esp + ebx*8 + 0xc] */ r_ebp = (u32)R16((u32)(r_esp+r_ebx*8+0xcu));
    /* 00517120: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 00517127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051712a: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051712c: je 0x51713c */ if (fZ) goto L_0051713c;
L_0051712e:; BB(0x0051712e);
    /* 0051712e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051712f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00517133: call 0x51a924 */ r_esp -= 4; W32(r_esp, 0x517138u); f_0051a924();
    /* 00517138: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051713a: jne 0x51715f */ if (!fZ) goto L_0051715f;
L_0051713c:; BB(0x0051713c);
    /* 0051713c: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051713e: jl 0x51711b */ if ((fS!=fO)) goto L_0051711b;
L_00517140:; BB(0x00517140);
    /* 00517140: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00517144: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00517147:; BB(0x00517147);
    /* 00517147: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00517149: mov ecx, edi */ r_ecx = r_edi;
    /* 0051714b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517150u); f_0051f62c();
    /* 00517150: mov dword ptr [edi + 0x45c], 0 */ W32((u32)(r_edi+0x45cu), 0x0u);
    /* 0051715a: jmp 0x5170b2 */ goto L_005170b2;
L_0051715f:; BB(0x0051715f);
    /* 0051715f: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00517163: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00517166: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00517167: mov ecx, edi */ r_ecx = r_edi;
    /* 00517169: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x51716eu); f_00520fcc();
    /* 0051716e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00517170: mov ecx, edi */ r_ecx = r_edi;
    /* 00517172: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517177u); f_0051f62c();
    /* 00517177: jmp 0x5170b2 */ goto L_005170b2;
L_0051717c:; BB(0x0051717c);
    /* 0051717c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051717e: mov ecx, edi */ r_ecx = r_edi;
    /* 00517180: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517185u); f_0051f62c();
    /* 00517185: mov dword ptr [edi + 0x45c], 0 */ W32((u32)(r_edi+0x45cu), 0x0u);
    /* 0051718f: jmp 0x5170d4 */ goto L_005170d4;
L_00517194:; BB(0x00517194);
    /* 00517194: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00517196: mov eax, 3 */ r_eax = 0x3u;
    /* 0051719b: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005171a2: mov ecx, edi */ r_ecx = r_edi;
    /* 005171a4: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5171aau); call_ind(t); }
    /* 005171aa: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 005171b0: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005171b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005171b8: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005171bb: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005171be: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 005171c4: mov ecx, edi */ r_ecx = r_edi;
    /* 005171c6: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5171cbu); f_0051f664();
    /* 005171cb: mov ecx, edi */ r_ecx = r_edi;
    /* 005171cd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5171d2u); f_0061cdb0();
    /* 005171d2: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 005171d7: mov ecx, edi */ r_ecx = r_edi;
    /* 005171d9: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5171deu); f_007879b8();
    /* 005171de: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 005171e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005171e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005171e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005171e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005171e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005171e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5171ecu); f_00814298();
    /* 005171ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005171ef: mov dword ptr [edi + 0x3c8], 0 */ W32((u32)(r_edi+0x3c8u), 0x0u);
    /* 005171f9: jmp 0x5170b2 */ goto L_005170b2;
}

