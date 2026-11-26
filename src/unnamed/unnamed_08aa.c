#include "protos.h"

void f_008aa045(void) /* sub_8AA045 */
{
    FN_ENTER(0x008aa045);
    /* 008aa045: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aa046: mov ebp, esp */ r_ebp = r_esp;
    /* 008aa048: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa049: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa04a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa04b: mov edi, dword ptr [esi + 0x17c] */ r_edi = R32((u32)(r_esi+0x17cu));
    /* 008aa051: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa052: call 0x8a9de7 */ r_esp -= 4; W32(r_esp, 0x8aa057u); f_008a9de7();
    /* 008aa057: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa058: mov eax, esi */ r_eax = r_esi;
    /* 008aa05a: call 0x8a9fd6 */ r_esp -= 4; W32(r_esp, 0x8aa05fu); f_008a9fd6();
    /* 008aa05f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008aa061: mov edx, esi */ r_edx = r_esi;
    /* 008aa063: mov dword ptr [edi + 0xc], ebx */ W32((u32)(r_edi+0xcu), r_ebx);
    /* 008aa066: call 0x8a9d76 */ r_esp -= 4; W32(r_esp, 0x8aa06bu); f_008a9d76();
    /* 008aa06b: mov byte ptr [edi + 0x10], al */ W8((u32)(r_edi+0x10u), (u8)r_eax);
    /* 008aa06e: mov dword ptr [edi + 0x14], ebx */ W32((u32)(r_edi+0x14u), r_ebx);
    /* 008aa071: mov dword ptr [edi + 0x18], ebx */ W32((u32)(r_edi+0x18u), r_ebx);
    /* 008aa074: mov al, byte ptr [esi + 0x4a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x4au))) & 0xffu);
    /* 008aa077: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa079: je 0x8aa080 */ if (fZ) goto L_008aa080;
L_008aa07b:; BB(0x008aa07b);
    /* 008aa07b: cmp byte ptr [esi + 0x40], bl */ {  u32 a = R8((u32)(r_esi+0x40u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa07e: jne 0x8aa089 */ if (!fZ) goto L_008aa089;
L_008aa080:; BB(0x008aa080);
    /* 008aa080: mov byte ptr [esi + 0x58], bl */ W8((u32)(r_esi+0x58u), (u8)r_ebx);
    /* 008aa083: mov byte ptr [esi + 0x59], bl */ W8((u32)(r_esi+0x59u), (u8)r_ebx);
    /* 008aa086: mov byte ptr [esi + 0x5a], bl */ W8((u32)(r_esi+0x5au), (u8)r_ebx);
L_008aa089:; BB(0x008aa089);
    /* 008aa089: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa08b: je 0x8aa0e3 */ if (fZ) goto L_008aa0e3;
L_008aa08d:; BB(0x008aa08d);
    /* 008aa08d: cmp byte ptr [esi + 0x41], bl */ {  u32 a = R8((u32)(r_esi+0x41u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa090: je 0x8aa0a1 */ if (fZ) goto L_008aa0a1;
L_008aa092:; BB(0x008aa092);
    /* 008aa092: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008aa094: mov dword ptr [eax + 0x14], 0x2e */ W32((u32)(r_eax+0x14u), 0x2eu);
    /* 008aa09b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008aa09d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa09e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa0a0u); call_ind(t); }
    /* 008aa0a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa0a1:; BB(0x008aa0a1);
    /* 008aa0a1: cmp dword ptr [esi + 0x64], 3 */ {  u32 a = R32((u32)(r_esi+0x64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa0a5: je 0x8aa0f5 */ if (fZ) goto L_008aa0f5;
L_008aa0a7:; BB(0x008aa0a7);
    /* 008aa0a7: mov byte ptr [esi + 0x59], bl */ W8((u32)(r_esi+0x59u), (u8)r_ebx);
    /* 008aa0aa: mov byte ptr [esi + 0x5a], bl */ W8((u32)(r_esi+0x5au), (u8)r_ebx);
    /* 008aa0ad: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
L_008aa0b0:; BB(0x008aa0b0);
    /* 008aa0b0: mov byte ptr [esi + 0x58], 1 */ W8((u32)(r_esi+0x58u), 0x1u);
L_008aa0b4:; BB(0x008aa0b4);
    /* 008aa0b4: cmp byte ptr [esi + 0x58], bl */ {  u32 a = R8((u32)(r_esi+0x58u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa0b7: je 0x8aa0c9 */ if (fZ) goto L_008aa0c9;
L_008aa0b9:; BB(0x008aa0b9);
    /* 008aa0b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa0ba: call 0x8b9fe1 */ r_esp -= 4; W32(r_esp, 0x8aa0bfu); f_008b9fe1();
    /* 008aa0bf: mov eax, dword ptr [esi + 0x1a4] */ r_eax = R32((u32)(r_esi+0x1a4u));
    /* 008aa0c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa0c6: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
L_008aa0c9:; BB(0x008aa0c9);
    /* 008aa0c9: cmp byte ptr [esi + 0x5a], bl */ {  u32 a = R8((u32)(r_esi+0x5au)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa0cc: jne 0x8aa0d3 */ if (!fZ) goto L_008aa0d3;
L_008aa0ce:; BB(0x008aa0ce);
    /* 008aa0ce: cmp byte ptr [esi + 0x59], bl */ {  u32 a = R8((u32)(r_esi+0x59u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa0d1: je 0x8aa0e3 */ if (fZ) goto L_008aa0e3;
L_008aa0d3:; BB(0x008aa0d3);
    /* 008aa0d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa0d4: call 0x8b954f */ r_esp -= 4; W32(r_esp, 0x8aa0d9u); f_008b954f();
    /* 008aa0d9: mov eax, dword ptr [esi + 0x1a4] */ r_eax = R32((u32)(r_esi+0x1a4u));
    /* 008aa0df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa0e0: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_008aa0e3:; BB(0x008aa0e3);
    /* 008aa0e3: cmp byte ptr [esi + 0x41], bl */ {  u32 a = R8((u32)(r_esi+0x41u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa0e6: jne 0x8aa126 */ if (!fZ) goto L_008aa126;
L_008aa0e8:; BB(0x008aa0e8);
    /* 008aa0e8: cmp byte ptr [edi + 0x10], bl */ {  u32 a = R8((u32)(r_edi+0x10u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa0eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa0ec: je 0x8aa10b */ if (fZ) goto L_008aa10b;
L_008aa0ee:; BB(0x008aa0ee);
    /* 008aa0ee: call 0x8b85da */ r_esp -= 4; W32(r_esp, 0x8aa0f3u); f_008b85da();
    /* 008aa0f3: jmp 0x8aa117 */ goto L_008aa117;
L_008aa0f5:; BB(0x008aa0f5);
    /* 008aa0f5: cmp dword ptr [esi + 0x74], ebx */ {  u32 a = R32((u32)(r_esi+0x74u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa0f8: je 0x8aa100 */ if (fZ) goto L_008aa100;
L_008aa0fa:; BB(0x008aa0fa);
    /* 008aa0fa: mov byte ptr [esi + 0x59], 1 */ W8((u32)(r_esi+0x59u), 0x1u);
    /* 008aa0fe: jmp 0x8aa0b4 */ goto L_008aa0b4;
L_008aa100:; BB(0x008aa100);
    /* 008aa100: cmp byte ptr [esi + 0x50], bl */ {  u32 a = R8((u32)(r_esi+0x50u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa103: je 0x8aa0b0 */ if (fZ) goto L_008aa0b0;
L_008aa105:; BB(0x008aa105);
    /* 008aa105: mov byte ptr [esi + 0x5a], 1 */ W8((u32)(r_esi+0x5au), 0x1u);
    /* 008aa109: jmp 0x8aa0b4 */ goto L_008aa0b4;
L_008aa10b:; BB(0x008aa10b);
    /* 008aa10b: call 0x8b7fe1 */ r_esp -= 4; W32(r_esp, 0x8aa110u); f_008b7fe1();
    /* 008aa110: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa111: call 0x8b7856 */ r_esp -= 4; W32(r_esp, 0x8aa116u); f_008b7856();
    /* 008aa116: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa117:; BB(0x008aa117);
    /* 008aa117: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008aa119: mov al, byte ptr [esi + 0x5a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x5au))) & 0xffu);
    /* 008aa11c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa11d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008aa11e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa11f: call 0x8b7397 */ r_esp -= 4; W32(r_esp, 0x8aa124u); f_008b7397();
    /* 008aa124: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa125: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa126:; BB(0x008aa126);
    /* 008aa126: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa127: call 0x8b70fc */ r_esp -= 4; W32(r_esp, 0x8aa12cu); f_008b70fc();
    /* 008aa12c: cmp byte ptr [esi + 0xc9], bl */ {  u32 a = R8((u32)(r_esi+0xc9u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa132: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa133: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa134: je 0x8aa145 */ if (fZ) goto L_008aa145;
L_008aa136:; BB(0x008aa136);
    /* 008aa136: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008aa138: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 008aa13f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008aa141: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa143u); call_ind(t); }
    /* 008aa143: jmp 0x8aa159 */ goto L_008aa159;
L_008aa145:; BB(0x008aa145);
    /* 008aa145: cmp byte ptr [esi + 0xc8], bl */ {  u32 a = R8((u32)(r_esi+0xc8u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa14b: je 0x8aa154 */ if (fZ) goto L_008aa154;
L_008aa14d:; BB(0x008aa14d);
    /* 008aa14d: call 0x8b6ee4 */ r_esp -= 4; W32(r_esp, 0x8aa152u); f_008b6ee4();
    /* 008aa152: jmp 0x8aa159 */ goto L_008aa159;
L_008aa154:; BB(0x008aa154);
    /* 008aa154: call 0x8b6336 */ r_esp -= 4; W32(r_esp, 0x8aa159u); f_008b6336();
L_008aa159:; BB(0x008aa159);
    /* 008aa159: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008aa15f: cmp byte ptr [eax + 0x10], bl */ {  u32 a = R8((u32)(r_eax+0x10u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa162: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa163: jne 0x8aa16d */ if (!fZ) goto L_008aa16d;
L_008aa165:; BB(0x008aa165);
    /* 008aa165: cmp byte ptr [esi + 0x40], bl */ {  u32 a = R8((u32)(r_esi+0x40u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa168: mov byte ptr [ebp - 4], bl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_ebx);
    /* 008aa16b: je 0x8aa171 */ if (fZ) goto L_008aa171;
L_008aa16d:; BB(0x008aa16d);
    /* 008aa16d: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
L_008aa171:; BB(0x008aa171);
    /* 008aa171: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa174: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa175: call 0x8b5966 */ r_esp -= 4; W32(r_esp, 0x8aa17au); f_008b5966();
    /* 008aa17a: cmp byte ptr [esi + 0x41], bl */ {  u32 a = R8((u32)(r_esi+0x41u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa17d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa17e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa17f: jne 0x8aa18a */ if (!fZ) goto L_008aa18a;
L_008aa181:; BB(0x008aa181);
    /* 008aa181: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa182: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa183: call 0x8b4d2a */ r_esp -= 4; W32(r_esp, 0x8aa188u); f_008b4d2a();
    /* 008aa188: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa18a:; BB(0x008aa18a);
    /* 008aa18a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa18d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa18e: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x8aa191u); call_ind(t); }
    /* 008aa191: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008aa197: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa198: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8aa19bu); call_ind(t); }
    /* 008aa19b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa19c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa19d: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008aa1a0: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa1a2: je 0x8aa1ee */ if (fZ) goto L_008aa1ee;
L_008aa1a4:; BB(0x008aa1a4);
    /* 008aa1a4: cmp byte ptr [esi + 0x40], bl */ {  u32 a = R8((u32)(r_esi+0x40u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008aa1a7: jne 0x8aa1ee */ if (!fZ) goto L_008aa1ee;
L_008aa1a9:; BB(0x008aa1a9);
    /* 008aa1a9: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008aa1af: cmp byte ptr [eax + 0x10], bl */ {  u32 a = R8((u32)(r_eax+0x10u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008aa1b2: je 0x8aa1ee */ if (fZ) goto L_008aa1ee;
L_008aa1b4:; BB(0x008aa1b4);
    /* 008aa1b4: cmp byte ptr [esi + 0xc8], bl */ {  u32 a = R8((u32)(r_esi+0xc8u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa1ba: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008aa1bd: je 0x8aa1c3 */ if (fZ) goto L_008aa1c3;
L_008aa1bf:; BB(0x008aa1bf);
    /* 008aa1bf: lea eax, [eax + eax*2 + 2] */ r_eax = (u32)(r_eax+r_eax*2+0x2u);
L_008aa1c3:; BB(0x008aa1c3);
    /* 008aa1c3: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 008aa1c6: mov ecx, dword ptr [esi + 0x118] */ r_ecx = R32((u32)(r_esi+0x118u));
    /* 008aa1cc: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008aa1cf: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008aa1d2: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008aa1d5: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008aa1d8: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 008aa1db: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008aa1de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008aa1e0: cmp byte ptr [esi + 0x5a], bl */ {  u32 a = R8((u32)(r_esi+0x5au)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aa1e3: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008aa1e6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aa1e7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aa1e8: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 008aa1eb: inc dword ptr [edi + 0xc] */ { u32 ad = (u32)(r_edi+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_008aa1ee:; BB(0x008aa1ee);
    /* 008aa1ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aa1ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008aa1f0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008aa1f1: ret  */ FN_RET(0x008aa045); r_esp += 4; return;
}

void f_008aa1f2(void) /* sub_8AA1F2 */
{
    FN_ENTER(0x008aa1f2);
    /* 008aa1f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa1f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa1f4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008aa1f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa1f9: mov edi, dword ptr [esi + 0x17c] */ r_edi = R32((u32)(r_esi+0x17cu));
    /* 008aa1ff: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008aa201: cmp byte ptr [edi + 8], bl */ {  u32 a = R8((u32)(r_edi+0x8u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa204: je 0x8aa231 */ if (fZ) goto L_008aa231;
L_008aa206:; BB(0x008aa206);
    /* 008aa206: mov byte ptr [edi + 8], bl */ W8((u32)(r_edi+0x8u), (u8)r_ebx);
    /* 008aa209: mov eax, dword ptr [esi + 0x1a4] */ r_eax = R32((u32)(r_esi+0x1a4u));
    /* 008aa20f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa210: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa211: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa213u); call_ind(t); }
    /* 008aa213: mov eax, dword ptr [esi + 0x188] */ r_eax = R32((u32)(r_esi+0x188u));
    /* 008aa219: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa21b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa21c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa21eu); call_ind(t); }
    /* 008aa21e: mov eax, dword ptr [esi + 0x180] */ r_eax = R32((u32)(r_esi+0x180u));
    /* 008aa224: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa226: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa227: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa229u); call_ind(t); }
    /* 008aa229: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aa22c: jmp 0x8aa2dd */ goto L_008aa2dd;
L_008aa231:; BB(0x008aa231);
    /* 008aa231: cmp byte ptr [esi + 0x4a], bl */ {  u32 a = R8((u32)(r_esi+0x4au)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa234: je 0x8aa273 */ if (fZ) goto L_008aa273;
L_008aa236:; BB(0x008aa236);
    /* 008aa236: cmp dword ptr [esi + 0x74], ebx */ {  u32 a = R32((u32)(r_esi+0x74u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa239: jne 0x8aa273 */ if (!fZ) goto L_008aa273;
L_008aa23b:; BB(0x008aa23b);
    /* 008aa23b: cmp byte ptr [esi + 0x50], bl */ {  u32 a = R8((u32)(r_esi+0x50u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa23e: je 0x8aa254 */ if (fZ) goto L_008aa254;
L_008aa240:; BB(0x008aa240);
    /* 008aa240: cmp byte ptr [esi + 0x5a], bl */ {  u32 a = R8((u32)(r_esi+0x5au)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa243: je 0x8aa254 */ if (fZ) goto L_008aa254;
L_008aa245:; BB(0x008aa245);
    /* 008aa245: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 008aa248: mov dword ptr [esi + 0x1a4], eax */ W32((u32)(r_esi+0x1a4u), r_eax);
    /* 008aa24e: mov byte ptr [edi + 8], 1 */ W8((u32)(r_edi+0x8u), 0x1u);
    /* 008aa252: jmp 0x8aa273 */ goto L_008aa273;
L_008aa254:; BB(0x008aa254);
    /* 008aa254: cmp byte ptr [esi + 0x58], bl */ {  u32 a = R8((u32)(r_esi+0x58u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa257: je 0x8aa264 */ if (fZ) goto L_008aa264;
L_008aa259:; BB(0x008aa259);
    /* 008aa259: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 008aa25c: mov dword ptr [esi + 0x1a4], eax */ W32((u32)(r_esi+0x1a4u), r_eax);
    /* 008aa262: jmp 0x8aa273 */ goto L_008aa273;
L_008aa264:; BB(0x008aa264);
    /* 008aa264: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008aa266: mov dword ptr [eax + 0x14], 0x2d */ W32((u32)(r_eax+0x14u), 0x2du);
    /* 008aa26d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008aa26f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa270: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa272u); call_ind(t); }
    /* 008aa272: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa273:; BB(0x008aa273);
    /* 008aa273: mov eax, dword ptr [esi + 0x198] */ r_eax = R32((u32)(r_esi+0x198u));
    /* 008aa279: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa27a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa27cu); call_ind(t); }
    /* 008aa27c: mov eax, dword ptr [esi + 0x184] */ r_eax = R32((u32)(r_esi+0x184u));
    /* 008aa282: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa283: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8aa286u); call_ind(t); }
    /* 008aa286: cmp byte ptr [esi + 0x41], bl */ {  u32 a = R8((u32)(r_esi+0x41u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa289: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa28a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa28b: jne 0x8aa2dd */ if (!fZ) goto L_008aa2dd;
L_008aa28d:; BB(0x008aa28d);
    /* 008aa28d: cmp byte ptr [edi + 0x10], bl */ {  u32 a = R8((u32)(r_edi+0x10u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa290: jne 0x8aa29c */ if (!fZ) goto L_008aa29c;
L_008aa292:; BB(0x008aa292);
    /* 008aa292: mov eax, dword ptr [esi + 0x1a0] */ r_eax = R32((u32)(r_esi+0x1a0u));
    /* 008aa298: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa299: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa29bu); call_ind(t); }
    /* 008aa29b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa29c:; BB(0x008aa29c);
    /* 008aa29c: mov eax, dword ptr [esi + 0x19c] */ r_eax = R32((u32)(r_esi+0x19cu));
    /* 008aa2a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa2a3: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa2a5u); call_ind(t); }
    /* 008aa2a5: cmp byte ptr [esi + 0x4a], bl */ {  u32 a = R8((u32)(r_esi+0x4au)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa2a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa2a9: je 0x8aa2bc */ if (fZ) goto L_008aa2bc;
L_008aa2ab:; BB(0x008aa2ab);
    /* 008aa2ab: mov eax, dword ptr [esi + 0x1a4] */ r_eax = R32((u32)(r_esi+0x1a4u));
    /* 008aa2b1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008aa2b3: mov cl, byte ptr [edi + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x8u))) & 0xffu);
    /* 008aa2b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa2b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa2b8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa2bau); call_ind(t); }
    /* 008aa2ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa2bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa2bc:; BB(0x008aa2bc);
    /* 008aa2bc: mov cl, byte ptr [edi + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x8u))) & 0xffu);
    /* 008aa2bf: mov eax, dword ptr [esi + 0x188] */ r_eax = R32((u32)(r_esi+0x188u));
    /* 008aa2c5: neg cl */ { u32 x = (u8)r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fC = (a < b); fC = (b != 0); }
    /* 008aa2c7: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 008aa2c9: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008aa2cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa2cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa2ce: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa2d0u); call_ind(t); }
    /* 008aa2d0: mov eax, dword ptr [esi + 0x180] */ r_eax = R32((u32)(r_esi+0x180u));
    /* 008aa2d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa2d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa2d8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa2dau); call_ind(t); }
    /* 008aa2da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008aa2dd:; BB(0x008aa2dd);
    /* 008aa2dd: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008aa2e0: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa2e2: je 0x8aa31b */ if (fZ) goto L_008aa31b;
L_008aa2e4:; BB(0x008aa2e4);
    /* 008aa2e4: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 008aa2e7: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008aa2ea: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008aa2ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008aa2ef: cmp byte ptr [edi + 8], bl */ {  u32 a = R8((u32)(r_edi+0x8u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa2f2: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008aa2f5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aa2f6: add eax, dword ptr [edi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aa2f9: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 008aa2fc: cmp byte ptr [esi + 0x40], bl */ {  u32 a = R8((u32)(r_esi+0x40u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008aa2ff: je 0x8aa31b */ if (fZ) goto L_008aa31b;
L_008aa301:; BB(0x008aa301);
    /* 008aa301: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008aa307: cmp byte ptr [eax + 0x11], bl */ {  u32 a = R8((u32)(r_eax+0x11u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008aa30a: jne 0x8aa31b */ if (!fZ) goto L_008aa31b;
L_008aa30c:; BB(0x008aa30c);
    /* 008aa30c: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008aa30f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008aa311: cmp byte ptr [esi + 0x5a], bl */ {  u32 a = R8((u32)(r_esi+0x5au)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa314: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008aa317: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008aa318: add dword ptr [eax + 0x10], ecx */ { u32 ad = (u32)(r_eax+0x10u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008aa31b:; BB(0x008aa31b);
    /* 008aa31b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aa31c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa31d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008aa31e: ret  */ FN_RET(0x008aa1f2); r_esp += 4; return;
}

void f_008aa31f(void) /* sub_8AA31F */
{
    FN_ENTER(0x008aa31f);
    /* 008aa31f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008aa323: cmp byte ptr [eax + 0x4a], 0 */ {  u32 a = R8((u32)(r_eax+0x4au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aa327: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa328: mov esi, dword ptr [eax + 0x17c] */ r_esi = R32((u32)(r_eax+0x17cu));
    /* 008aa32e: je 0x8aa33b */ if (fZ) goto L_008aa33b;
L_008aa330:; BB(0x008aa330);
    /* 008aa330: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 008aa336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008aa337: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8aa33au); call_ind(t); }
    /* 008aa33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa33b:; BB(0x008aa33b);
    /* 008aa33b: inc dword ptr [esi + 0xc] */ { u32 ad = (u32)(r_esi+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008aa33e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa33f: ret  */ FN_RET(0x008aa31f); r_esp += 4; return;
}

void f_008aa340(void) /* sub_8AA340 */
{
    FN_ENTER(0x008aa340);
    /* 008aa340: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa341: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008aa345: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa348: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa34a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa34c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa34d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8aa34fu); call_ind(t); }
    /* 008aa34f: mov dword ptr [esi + 0x17c], eax */ W32((u32)(r_esi+0x17cu), r_eax);
    /* 008aa355: and byte ptr [eax + 8], 0 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008aa359: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aa35c: mov dword ptr [eax], 0x8aa1f2 */ W32((u32)(r_eax), 0x8aa1f2u);
    /* 008aa362: mov dword ptr [eax + 4], 0x8aa31f */ W32((u32)(r_eax+0x4u), 0x8aa31fu);
    /* 008aa369: call 0x8aa045 */ r_esp -= 4; W32(r_esp, 0x8aa36eu); f_008aa045();
    /* 008aa36e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa36f: ret  */ FN_RET(0x008aa340); r_esp += 4; return;
}

void f_008aa370(void) /* sub_8AA370 */
{
    FN_ENTER(0x008aa370);
    /* 008aa370: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008aa374: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008aa376: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa378: je 0x8aa3ab */ if (fZ) goto L_008aa3ab;
L_008aa37a:; BB(0x008aa37a);
    /* 008aa37a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 008aa37d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa37f: je 0x8aa3ab */ if (fZ) goto L_008aa3ab;
L_008aa381:; BB(0x008aa381);
    /* 008aa381: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa382: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 008aa385: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 008aa388: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 008aa38b: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 008aa38e: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); fC = (b != 0); }
    /* 008aa390: sbb esi, esi */ { u32 c = fC; u32 a = r_esi; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 008aa392: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa393: and esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008aa396: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 008aa398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008aa399: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 008aa39c: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa39f: call 0x8ba068 */ r_esp -= 4; W32(r_esp, 0x8aa3a4u); f_008ba068();
    /* 008aa3a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aa3a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa3a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa3aa: ret  */ FN_RET(0x008aa370); r_esp += 4; return;
L_008aa3ab:; BB(0x008aa3ab);
    /* 008aa3ab: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa3ad: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008aa3ae: ret  */ FN_RET(0x008aa370); r_esp += 4; return;
}

void f_008aa3af(void) /* sub_8AA3AF */
{
    FN_ENTER(0x008aa3af);
    /* 008aa3af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa3b0: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008aa3b4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa3b6: je 0x8aa3e8 */ if (fZ) goto L_008aa3e8;
L_008aa3b8:; BB(0x008aa3b8);
    /* 008aa3b8: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa3bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa3bd: je 0x8aa3e8 */ if (fZ) goto L_008aa3e8;
L_008aa3bf:; BB(0x008aa3bf);
    /* 008aa3bf: cmp dword ptr [esi + 0x24], 0 */ {  u32 a = R32((u32)(r_esi+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa3c3: je 0x8aa3e8 */ if (fZ) goto L_008aa3e8;
L_008aa3c5:; BB(0x008aa3c5);
    /* 008aa3c5: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 008aa3c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa3ca: je 0x8aa3d5 */ if (fZ) goto L_008aa3d5;
L_008aa3cc:; BB(0x008aa3cc);
    /* 008aa3cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa3cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008aa3ce: call 0x8ba8fb */ r_esp -= 4; W32(r_esp, 0x8aa3d3u); f_008ba8fb();
    /* 008aa3d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa3d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa3d5:; BB(0x008aa3d5);
    /* 008aa3d5: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa3d8: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa3db: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8aa3deu); call_ind(t); }
    /* 008aa3de: and dword ptr [esi + 0x1c], 0 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa3e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa3e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa3e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa3e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa3e7: ret  */ FN_RET(0x008aa3af); r_esp += 4; return;
L_008aa3e8:; BB(0x008aa3e8);
    /* 008aa3e8: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa3ea: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008aa3eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa3ec: ret  */ FN_RET(0x008aa3af); r_esp += 4; return;
}

void f_008aa3ed(void) /* sub_8AA3ED */
{
    FN_ENTER(0x008aa3ed);
    /* 008aa3ed: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008aa3f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa3f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa3f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa3f4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008aa3f6: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa3f8: je 0x8aa4cb */ if (fZ) goto L_008aa4cb;
L_008aa3fe:; BB(0x008aa3fe);
    /* 008aa3fe: cmp byte ptr [eax], 0x31 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008aa401: jne 0x8aa4cb */ if (!fZ) goto L_008aa4cb;
L_008aa407:; BB(0x008aa407);
    /* 008aa407: cmp dword ptr [esp + 0x1c], 0x38 */ {  u32 a = R32((u32)(r_esp+0x1cu)); u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa40c: jne 0x8aa4cb */ if (!fZ) goto L_008aa4cb;
L_008aa412:; BB(0x008aa412);
    /* 008aa412: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008aa416: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa418: jne 0x8aa421 */ if (!fZ) goto L_008aa421;
L_008aa41a:; BB(0x008aa41a);
    /* 008aa41a: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa41c: jmp 0x8aa4cd */ goto L_008aa4cd;
L_008aa421:; BB(0x008aa421);
    /* 008aa421: cmp dword ptr [esi + 0x20], edi */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa424: mov dword ptr [esi + 0x18], edi */ W32((u32)(r_esi+0x18u), r_edi);
    /* 008aa427: jne 0x8aa433 */ if (!fZ) goto L_008aa433;
L_008aa429:; BB(0x008aa429);
    /* 008aa429: mov dword ptr [esi + 0x20], 0x8baa48 */ W32((u32)(r_esi+0x20u), 0x8baa48u);
    /* 008aa430: mov dword ptr [esi + 0x28], edi */ W32((u32)(r_esi+0x28u), r_edi);
L_008aa433:; BB(0x008aa433);
    /* 008aa433: cmp dword ptr [esi + 0x24], edi */ {  u32 a = R32((u32)(r_esi+0x24u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa436: jne 0x8aa43f */ if (!fZ) goto L_008aa43f;
L_008aa438:; BB(0x008aa438);
    /* 008aa438: mov dword ptr [esi + 0x24], 0x8b47ba */ W32((u32)(r_esi+0x24u), 0x8b47bau);
L_008aa43f:; BB(0x008aa43f);
    /* 008aa43f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008aa441: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa443: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008aa444: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa445: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa448: call dword ptr [esi + 0x20] */ { u32 t = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, 0x8aa44bu); call_ind(t); }
    /* 008aa44b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aa44e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa450: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 008aa453: jne 0x8aa459 */ if (!fZ) goto L_008aa459;
L_008aa455:; BB(0x008aa455);
    /* 008aa455: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa457: jmp 0x8aa4cd */ goto L_008aa4cd;
L_008aa459:; BB(0x008aa459);
    /* 008aa459: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008aa45d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aa45f: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 008aa462: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa465: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 008aa468: jge 0x8aa472 */ if ((fS==fO)) goto L_008aa472;
L_008aa46a:; BB(0x008aa46a);
    /* 008aa46a: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa46d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008aa46f: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
L_008aa472:; BB(0x008aa472);
    /* 008aa472: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aa475: jl 0x8aa4c7 */ if ((fS!=fO)) goto L_008aa4c7;
L_008aa477:; BB(0x008aa477);
    /* 008aa477: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa47a: jg 0x8aa4c7 */ if ((!fZ&&fS==fO)) goto L_008aa4c7;
L_008aa47c:; BB(0x008aa47c);
    /* 008aa47c: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa47f: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008aa482: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa485: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 008aa488: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008aa48a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008aa48c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008aa48e: not eax */ r_eax = ~r_eax;
    /* 008aa490: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa491: and eax, 0x8ba92f */ {  u32 a = r_eax; u32 b = 0x8ba92fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008aa496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008aa497: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa498: call 0x8ba0d3 */ r_esp -= 4; W32(r_esp, 0x8aa49du); f_008ba0d3();
    /* 008aa49d: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 008aa4a0: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 008aa4a3: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa4a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aa4a9: cmp dword ptr [eax + 0x14], edi */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa4ac: jne 0x8aa4bc */ if (!fZ) goto L_008aa4bc;
L_008aa4ae:; BB(0x008aa4ae);
    /* 008aa4ae: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
L_008aa4b0:; BB(0x008aa4b0);
    /* 008aa4b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aa4b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa4b2: call 0x8aa3af */ r_esp -= 4; W32(r_esp, 0x8aa4b7u); f_008aa3af();
    /* 008aa4b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa4b8: mov eax, edi */ r_eax = r_edi;
    /* 008aa4ba: jmp 0x8aa4ce */ goto L_008aa4ce;
L_008aa4bc:; BB(0x008aa4bc);
    /* 008aa4bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa4bd: call 0x8aa370 */ r_esp -= 4; W32(r_esp, 0x8aa4c2u); f_008aa370();
    /* 008aa4c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa4c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa4c5: jmp 0x8aa4ce */ goto L_008aa4ce;
L_008aa4c7:; BB(0x008aa4c7);
    /* 008aa4c7: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa4c9: jmp 0x8aa4b0 */ goto L_008aa4b0;
L_008aa4cb:; BB(0x008aa4cb);
    /* 008aa4cb: push -6 */ { u32 v = 0xfffffffau; r_esp -= 4; W32(r_esp, v); }
L_008aa4cd:; BB(0x008aa4cd);
    /* 008aa4cd: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008aa4ce:; BB(0x008aa4ce);
    /* 008aa4ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aa4cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa4d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008aa4d1: ret  */ FN_RET(0x008aa3ed); r_esp += 4; return;
}

void f_008aa4d2(void) /* sub_8AA4D2 */
{
    FN_ENTER(0x008aa4d2);
    /* 008aa4d2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa4d6: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa4da: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa4dc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa4e0: call 0x8aa3ed */ r_esp -= 4; W32(r_esp, 0x8aa4e5u); f_008aa3ed();
    /* 008aa4e5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008aa4e8: ret  */ FN_RET(0x008aa4d2); r_esp += 4; return;
}

void f_008aa4e9(void) /* sub_8AA4E9 */
{
    FN_ENTER(0x008aa4e9);
    /* 008aa4e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa4ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aa4eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa4ec: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008aa4f0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008aa4f2: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa4f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa4f5: je 0x8aa723 */ if (fZ) goto L_008aa723;
L_008aa4fb:; BB(0x008aa4fb);
    /* 008aa4fb: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa4fe: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa500: je 0x8aa723 */ if (fZ) goto L_008aa723;
L_008aa506:; BB(0x008aa506);
    /* 008aa506: cmp dword ptr [esi], ebx */ {  u32 a = R32((u32)(r_esi)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa508: je 0x8aa723 */ if (fZ) goto L_008aa723;
L_008aa50e:; BB(0x008aa50e);
    /* 008aa50e: cmp dword ptr [esp + 0x18], 4 */ {  u32 a = R32((u32)(r_esp+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa513: push -5 */ { u32 v = 0xfffffffbu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa515: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aa516: jne 0x8aa51a */ if (!fZ) goto L_008aa51a;
L_008aa518:; BB(0x008aa518);
    /* 008aa518: mov ebx, edi */ r_ebx = r_edi;
L_008aa51a:; BB(0x008aa51a);
    /* 008aa51a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa51c: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 008aa520: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008aa521: jmp 0x8aa719 */ goto L_008aa719;
L_008aa526:; BB(0x008aa526);
    /* 008aa526: jmp dword ptr [eax*4 + 0x8aa818] */ { u32 t = R32((u32)(r_eax*4+0x8aa818u)); switch (t) { case 0x8aa52du: goto L_008aa52d; case 0x8aa58cu: goto L_008aa58c; case 0x8aa738u: goto L_008aa738; case 0x8aa761u: goto L_008aa761; case 0x8aa78au: goto L_008aa78a; case 0x8aa7b3u: goto L_008aa7b3; case 0x8aa7e8u: goto L_008aa7e8; case 0x8aa5eeu: goto L_008aa5ee; case 0x8aa654u: goto L_008aa654; case 0x8aa681u: goto L_008aa681; case 0x8aa6aeu: goto L_008aa6ae; case 0x8aa6d7u: goto L_008aa6d7; case 0x8aa809u: goto L_008aa809; case 0x8aa811u: goto L_008aa811; default: UNSUP(0x008aa526, "jump table entry is not a known target"); } }
L_008aa52d:; BB(0x008aa52d);
    /* 008aa52d: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa532: je 0x8aa72b */ if (fZ) goto L_008aa72b;
L_008aa538:; BB(0x008aa538);
    /* 008aa538: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 008aa53b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aa53c: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa53f: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008aa542: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008aa544: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008aa547: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 008aa54a: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa54d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008aa550: and cl, 0xf */ {  u32 a = (u8)r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aa553: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa555: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aa558: mov edi, ebx */ r_edi = r_ebx;
    /* 008aa55a: je 0x8aa56a */ if (fZ) goto L_008aa56a;
L_008aa55c:; BB(0x008aa55c);
    /* 008aa55c: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 008aa55e: mov dword ptr [esi + 0x18], 0x99e004 */ W32((u32)(r_esi+0x18u), 0x99e004u);
    /* 008aa565: jmp 0x8aa70c */ goto L_008aa70c;
L_008aa56a:; BB(0x008aa56a);
    /* 008aa56a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008aa56d: shr ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008aa570: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008aa573: cmp ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aa576: jbe 0x8aa586 */ if ((fC||fZ)) goto L_008aa586;
L_008aa578:; BB(0x008aa578);
    /* 008aa578: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 008aa57a: mov dword ptr [esi + 0x18], 0x99dff0 */ W32((u32)(r_esi+0x18u), 0x99dff0u);
    /* 008aa581: jmp 0x8aa70c */ goto L_008aa70c;
L_008aa586:; BB(0x008aa586);
    /* 008aa586: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
L_008aa58c:; BB(0x008aa58c);
    /* 008aa58c: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa58f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa591: je 0x8aa72b */ if (fZ) goto L_008aa72b;
L_008aa597:; BB(0x008aa597);
    /* 008aa597: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 008aa59a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aa59b: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa59e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008aa5a1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008aa5a3: mov edi, ebx */ r_edi = r_ebx;
    /* 008aa5a5: movzx ebx, byte ptr [eax] */ r_ebx = (u32)R8((u32)(r_eax));
    /* 008aa5a8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aa5a9: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008aa5ab: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008aa5ae: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008aa5b1: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa5b3: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aa5b5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008aa5b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008aa5b8: div ebp */ { u32 d = r_ebp; if (!d) UNSUP(0x008aa5b8, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008aa5b8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008aa5ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa5bc: je 0x8aa5d3 */ if (fZ) goto L_008aa5d3;
L_008aa5be:; BB(0x008aa5be);
    /* 008aa5be: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008aa5c2: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa5c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008aa5c5: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 008aa5c7: mov dword ptr [esi + 0x18], 0x99dfd8 */ W32((u32)(r_esi+0x18u), 0x99dfd8u);
    /* 008aa5ce: jmp 0x8aa70c */ goto L_008aa70c;
L_008aa5d3:; BB(0x008aa5d3);
    /* 008aa5d3: test bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008aa5d6: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008aa5da: jne 0x8aa72f */ if (!fZ) goto L_008aa72f;
L_008aa5e0:; BB(0x008aa5e0);
    /* 008aa5e0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa5e2: mov dword ptr [ecx], 7 */ W32((u32)(r_ecx), 0x7u);
    /* 008aa5e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008aa5e9: jmp 0x8aa716 */ goto L_008aa716;
L_008aa5ee:; BB(0x008aa5ee);
    /* 008aa5ee: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa5f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa5f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa5f3: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa5f6: call 0x8ba160 */ r_esp -= 4; W32(r_esp, 0x8aa5fbu); f_008ba160();
    /* 008aa5fb: mov edi, eax */ r_edi = r_eax;
    /* 008aa5fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aa600: cmp edi, -3 */ {  u32 a = r_edi; u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa603: jne 0x8aa616 */ if (!fZ) goto L_008aa616;
L_008aa605:; BB(0x008aa605);
    /* 008aa605: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa608: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 008aa60a: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa60d: and dword ptr [eax + 4], 0 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa611: jmp 0x8aa716 */ goto L_008aa716;
L_008aa616:; BB(0x008aa616);
    /* 008aa616: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa618: jne 0x8aa61c */ if (!fZ) goto L_008aa61c;
L_008aa61a:; BB(0x008aa61a);
    /* 008aa61a: mov edi, ebx */ r_edi = r_ebx;
L_008aa61c:; BB(0x008aa61c);
    /* 008aa61c: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa61f: jne 0x8aa72b */ if (!fZ) goto L_008aa72b;
L_008aa625:; BB(0x008aa625);
    /* 008aa625: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa628: lea ecx, [eax + 4] */ r_ecx = (u32)(r_eax+0x4u);
    /* 008aa62b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa62c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa62d: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa630: mov edi, ebx */ r_edi = r_ebx;
    /* 008aa632: call 0x8ba068 */ r_esp -= 4; W32(r_esp, 0x8aa637u); f_008ba068();
    /* 008aa637: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa63a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aa63d: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa641: je 0x8aa64e */ if (fZ) goto L_008aa64e;
L_008aa643:; BB(0x008aa643);
    /* 008aa643: mov dword ptr [eax], 0xc */ W32((u32)(r_eax), 0xcu);
    /* 008aa649: jmp 0x8aa716 */ goto L_008aa716;
L_008aa64e:; BB(0x008aa64e);
    /* 008aa64e: mov dword ptr [eax], 8 */ W32((u32)(r_eax), 0x8u);
L_008aa654:; BB(0x008aa654);
    /* 008aa654: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa657: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa659: je 0x8aa72b */ if (fZ) goto L_008aa72b;
L_008aa65f:; BB(0x008aa65f);
    /* 008aa65f: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 008aa662: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aa663: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa666: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008aa669: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008aa66b: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008aa66e: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008aa671: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 008aa674: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa677: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa679: mov edi, ebx */ r_edi = r_ebx;
    /* 008aa67b: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
L_008aa681:; BB(0x008aa681);
    /* 008aa681: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa686: je 0x8aa72b */ if (fZ) goto L_008aa72b;
L_008aa68c:; BB(0x008aa68c);
    /* 008aa68c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008aa68e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aa68f: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa692: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008aa695: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 008aa698: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa69b: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008aa69e: add dword ptr [eax + 8], ecx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa6a1: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa6a4: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa6a6: mov edi, ebx */ r_edi = r_ebx;
    /* 008aa6a8: mov dword ptr [eax], 0xa */ W32((u32)(r_eax), 0xau);
L_008aa6ae:; BB(0x008aa6ae);
    /* 008aa6ae: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa6b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa6b3: je 0x8aa72b */ if (fZ) goto L_008aa72b;
L_008aa6b5:; BB(0x008aa6b5);
    /* 008aa6b5: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008aa6b7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aa6b8: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa6bb: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008aa6be: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 008aa6c1: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa6c4: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008aa6c7: add dword ptr [eax + 8], ecx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa6ca: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa6cd: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa6cf: mov edi, ebx */ r_edi = r_ebx;
    /* 008aa6d1: mov dword ptr [eax], 0xb */ W32((u32)(r_eax), 0xbu);
L_008aa6d7:; BB(0x008aa6d7);
    /* 008aa6d7: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa6dc: je 0x8aa72b */ if (fZ) goto L_008aa72b;
L_008aa6de:; BB(0x008aa6de);
    /* 008aa6de: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008aa6e0: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aa6e1: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa6e4: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008aa6e7: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 008aa6ea: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa6ed: add dword ptr [eax + 8], ecx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa6f0: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa6f3: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa6f5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008aa6f8: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa6fb: mov edi, ebx */ r_edi = r_ebx;
    /* 008aa6fd: je 0x8aa800 */ if (fZ) goto L_008aa800;
L_008aa703:; BB(0x008aa703);
    /* 008aa703: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 008aa705: mov dword ptr [esi + 0x18], 0x99dfc0 */ W32((u32)(r_esi+0x18u), 0x99dfc0u);
L_008aa70c:; BB(0x008aa70c);
    /* 008aa70c: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa70f: mov dword ptr [eax + 4], 5 */ W32((u32)(r_eax+0x4u), 0x5u);
L_008aa716:; BB(0x008aa716);
    /* 008aa716: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
L_008aa719:; BB(0x008aa719);
    /* 008aa719: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008aa71b: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa71d: jbe 0x8aa526 */ if ((fC||fZ)) goto L_008aa526;
L_008aa723:; BB(0x008aa723);
    /* 008aa723: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
L_008aa725:; BB(0x008aa725);
    /* 008aa725: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008aa726:; BB(0x008aa726);
    /* 008aa726: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aa727: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa728: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008aa729: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008aa72a: ret  */ FN_RET(0x008aa4e9); r_esp += 4; return;
L_008aa72b:; BB(0x008aa72b);
    /* 008aa72b: mov eax, edi */ r_eax = r_edi;
    /* 008aa72d: jmp 0x8aa726 */ goto L_008aa726;
L_008aa72f:; BB(0x008aa72f);
    /* 008aa72f: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa732: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
L_008aa738:; BB(0x008aa738);
    /* 008aa738: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa73b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa73d: je 0x8aa72b */ if (fZ) goto L_008aa72b;
L_008aa73f:; BB(0x008aa73f);
    /* 008aa73f: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 008aa742: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aa743: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa746: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008aa749: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008aa74b: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008aa74e: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008aa751: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 008aa754: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa757: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa759: mov edi, ebx */ r_edi = r_ebx;
    /* 008aa75b: mov dword ptr [eax], 3 */ W32((u32)(r_eax), 0x3u);
L_008aa761:; BB(0x008aa761);
    /* 008aa761: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa766: je 0x8aa72b */ if (fZ) goto L_008aa72b;
L_008aa768:; BB(0x008aa768);
    /* 008aa768: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008aa76a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aa76b: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa76e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008aa771: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 008aa774: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa777: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008aa77a: add dword ptr [eax + 8], ecx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa77d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa780: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa782: mov edi, ebx */ r_edi = r_ebx;
    /* 008aa784: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
L_008aa78a:; BB(0x008aa78a);
    /* 008aa78a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa78d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa78f: je 0x8aa72b */ if (fZ) goto L_008aa72b;
L_008aa791:; BB(0x008aa791);
    /* 008aa791: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008aa793: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aa794: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa797: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008aa79a: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 008aa79d: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa7a0: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008aa7a3: add dword ptr [eax + 8], ecx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa7a6: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa7a9: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa7ab: mov edi, ebx */ r_edi = r_ebx;
    /* 008aa7ad: mov dword ptr [eax], 5 */ W32((u32)(r_eax), 0x5u);
L_008aa7b3:; BB(0x008aa7b3);
    /* 008aa7b3: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008aa7b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa7b8: je 0x8aa72b */ if (fZ) goto L_008aa72b;
L_008aa7be:; BB(0x008aa7be);
    /* 008aa7be: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008aa7c0: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aa7c1: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aa7c4: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008aa7c7: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 008aa7ca: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa7cd: add dword ptr [eax + 8], ecx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 008aa7d0: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa7d3: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008aa7d5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008aa7d8: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 008aa7db: mov dword ptr [eax], 6 */ W32((u32)(r_eax), 0x6u);
    /* 008aa7e1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa7e3: jmp 0x8aa725 */ goto L_008aa725;
L_008aa7e8:; BB(0x008aa7e8);
    /* 008aa7e8: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa7eb: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 008aa7ed: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa7f0: mov dword ptr [esi + 0x18], 0x99dfb0 */ W32((u32)(r_esi+0x18u), 0x99dfb0u);
    /* 008aa7f7: and dword ptr [eax + 4], 0 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa7fb: jmp 0x8aa723 */ goto L_008aa723;
L_008aa800:; BB(0x008aa800);
    /* 008aa800: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008aa803: mov dword ptr [eax], 0xc */ W32((u32)(r_eax), 0xcu);
L_008aa809:; BB(0x008aa809);
    /* 008aa809: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008aa80b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008aa80c: jmp 0x8aa726 */ goto L_008aa726;
L_008aa811:; BB(0x008aa811);
    /* 008aa811: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 008aa813: jmp 0x8aa725 */ goto L_008aa725;
}

void f_008aa850(void) /* sub_8AA850 */
{
    FN_ENTER(0x008aa850);
    /* 008aa850: cmp dword ptr [esp + 4], 2 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa855: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa856: jne 0x8aa85d */ if (!fZ) goto L_008aa85d;
L_008aa858:; BB(0x008aa858);
    /* 008aa858: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa85a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa85b: jmp 0x8aa869 */ goto L_008aa869;
L_008aa85d:; BB(0x008aa85d);
    /* 008aa85d: cmp dword ptr [esp + 8], 1 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa862: jne 0x8aa88e */ if (!fZ) goto L_008aa88e;
L_008aa864:; BB(0x008aa864);
    /* 008aa864: mov esi, 0x19c */ r_esi = 0x19cu;
L_008aa869:; BB(0x008aa869);
    /* 008aa869: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa86a: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8aa86fu); f_00859c55();
    /* 008aa86f: mov edx, eax */ r_edx = r_eax;
    /* 008aa871: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa873: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa874: je 0x8aa88a */ if (fZ) goto L_008aa88a;
L_008aa876:; BB(0x008aa876);
    /* 008aa876: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa877: mov ecx, esi */ r_ecx = r_esi;
    /* 008aa879: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008aa87c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008aa87e: mov edi, edx */ r_edi = r_edx;
    /* 008aa880: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008aa882: mov ecx, esi */ r_ecx = r_esi;
    /* 008aa884: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa887: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008aa889: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008aa88a:; BB(0x008aa88a);
    /* 008aa88a: mov eax, edx */ r_eax = r_edx;
    /* 008aa88c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa88d: ret  */ FN_RET(0x008aa850); r_esp += 4; return;
L_008aa88e:; BB(0x008aa88e);
    /* 008aa88e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa890: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa891: ret  */ FN_RET(0x008aa850); r_esp += 4; return;
}

void f_008aa892(void) /* sub_8AA892 */
{
    FN_ENTER(0x008aa892);
    /* 008aa892: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa897: je 0x8aa89e */ if (fZ) goto L_008aa89e;
L_008aa899:; BB(0x008aa899);
    /* 008aa899: jmp 0x858882 */ f_00858882(); return;
L_008aa89e:; BB(0x008aa89e);
    /* 008aa89e: ret  */ FN_RET(0x008aa892); r_esp += 4; return;
}

void f_008aa89f(void) /* sub_8AA89F */
{
    FN_ENTER(0x008aa89f);
    /* 008aa89f: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa8a4: je 0x8aa8d2 */ if (fZ) goto L_008aa8d2;
L_008aa8a6:; BB(0x008aa8a6);
    /* 008aa8a6: cmp dword ptr [esp + 8], 0 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa8ab: je 0x8aa8d2 */ if (fZ) goto L_008aa8d2;
L_008aa8ad:; BB(0x008aa8ad);
    /* 008aa8ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa8ae: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa8b2: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8aa8b7u); f_00859c55();
    /* 008aa8b7: mov esi, eax */ r_esi = r_eax;
    /* 008aa8b9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa8bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa8bc: jne 0x8aa8ce */ if (!fZ) goto L_008aa8ce;
L_008aa8be:; BB(0x008aa8be);
    /* 008aa8be: push 0x99e020 */ { u32 v = 0x99e020u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa8c3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa8c7: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8aa8ccu); f_008a3ef0();
    /* 008aa8cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa8cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa8ce:; BB(0x008aa8ce);
    /* 008aa8ce: mov eax, esi */ r_eax = r_esi;
    /* 008aa8d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa8d1: ret  */ FN_RET(0x008aa89f); r_esp += 4; return;
L_008aa8d2:; BB(0x008aa8d2);
    /* 008aa8d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa8d4: ret  */ FN_RET(0x008aa89f); r_esp += 4; return;
}

void f_008aa8d5(void) /* sub_8AA8D5 */
{
    FN_ENTER(0x008aa8d5);
    /* 008aa8d5: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa8da: je 0x8aa8ed */ if (fZ) goto L_008aa8ed;
L_008aa8dc:; BB(0x008aa8dc);
    /* 008aa8dc: cmp dword ptr [esp + 8], 0 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa8e1: je 0x8aa8ed */ if (fZ) goto L_008aa8ed;
L_008aa8e3:; BB(0x008aa8e3);
    /* 008aa8e3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa8e7: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8aa8ecu); f_00858882();
    /* 008aa8ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aa8ed:; BB(0x008aa8ed);
    /* 008aa8ed: ret  */ FN_RET(0x008aa8d5); r_esp += 4; return;
}

void f_008aa8ee(void) /* sub_8AA8EE */
{
    FN_ENTER(0x008aa8ee);
    /* 008aa8ee: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008aa8f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa8f3: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008aa8f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa8f8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008aa8fc: mov eax, ecx */ r_eax = r_ecx;
    /* 008aa8fe: mov edx, edi */ r_edx = r_edi;
    /* 008aa900: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008aa903: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008aa905: mov ecx, eax */ r_ecx = r_eax;
    /* 008aa907: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa90a: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008aa90c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aa90d: mov eax, edx */ r_eax = r_edx;
    /* 008aa90f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa910: ret  */ FN_RET(0x008aa8ee); r_esp += 4; return;
}

void f_008aa911(void) /* sub_8AA911 */
{
    FN_ENTER(0x008aa911);
    /* 008aa911: mov al, byte ptr [esp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0xcu))) & 0xffu);
    /* 008aa915: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008aa919: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aa91a: mov bl, al */ r_ebx = (r_ebx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 008aa91c: mov bh, bl */ r_ebx = (r_ebx & 0xffff00ffu) | ((((u8)r_ebx) & 0xffu) << 8);
    /* 008aa91e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa91f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa920: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 008aa924: mov edx, ecx */ r_edx = r_ecx;
    /* 008aa926: mov esi, edi */ r_esi = r_edi;
    /* 008aa928: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008aa92b: mov eax, ebx */ r_eax = r_ebx;
    /* 008aa92d: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008aa930: mov ax, bx */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_ebx) & 0xffffu);
    /* 008aa933: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008aa935: mov ecx, edx */ r_ecx = r_edx;
    /* 008aa937: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa93a: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008aa93c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aa93d: mov eax, esi */ r_eax = r_esi;
    /* 008aa93f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa940: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008aa941: ret  */ FN_RET(0x008aa911); r_esp += 4; return;
}

void f_008aa942(void) /* sub_8AA942 */
{
    FN_ENTER(0x008aa942);
    /* 008aa942: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008aa946: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 008aa949: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 008aa94d: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008aa950: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aa952: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 008aa956: movzx ecx, byte ptr [ecx + 3] */ r_ecx = (u32)R8((u32)(r_ecx+0x3u));
    /* 008aa95a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008aa95d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aa95f: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008aa962: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008aa964: ret  */ FN_RET(0x008aa942); r_esp += 4; return;
}

void f_008aa965(void) /* sub_8AA965 */
{
    FN_ENTER(0x008aa965);
    goto L_008aa965;
L_008a6377:; BB(0x008a6377);
    /* 008a6377: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a637b: test byte ptr [eax + 0x10c], 0x20 */ {  u32 a = R8((u32)(r_eax+0x10cu)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6382: je 0x8a6393 */ if (fZ) goto L_008a6393;
L_008a6384:; BB(0x008a6384);
    /* 008a6384: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 008a6387: mov ecx, 0x300 */ r_ecx = 0x300u;
    /* 008a638c: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a638e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a6390: jne 0x8a6399 */ if (!fZ) goto L_008a6399;
L_008a6392:; BB(0x008a6392);
    /* 008a6392: ret  */ FN_RET(0x008aa965); r_esp += 4; return;
L_008a6393:; BB(0x008a6393);
    /* 008a6393: test byte ptr [eax + 0x5d], 8 */ {  u32 a = R8((u32)(r_eax+0x5du)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a6397: jne 0x8a63b5 */ if (!fZ) goto L_008a63b5;
L_008a6399:; BB(0x008a6399);
    /* 008a6399: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a639a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a639e: lea esi, [eax + 0x100] */ r_esi = (u32)(r_eax+0x100u);
    /* 008a63a4: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a63a8: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008a63aa: call 0x8abc4a */ r_esp -= 4; W32(r_esp, 0x8a63afu); f_008abc4a();
    /* 008a63af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a63b2: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008a63b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008a63b5:; BB(0x008a63b5);
    /* 008a63b5: ret  */ FN_RET(0x008aa965); r_esp += 4; return;
L_008aa965:; BB(0x008aa965);
    /* 008aa965: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aa966: mov ebp, esp */ r_ebp = r_esp;
    /* 008aa968: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa96b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa96e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aa971: call 0x8a6258 */ r_esp -= 4; W32(r_esp, 0x8aa976u); f_008a6258();
    /* 008aa976: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aa979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008aa97a: jmp 0x8a6377 */ goto L_008a6377;
}

void f_008aa97f(void) /* sub_8AA97F */
{
    FN_ENTER(0x008aa97f);
    /* 008aa97f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aa980: mov ebp, esp */ r_ebp = r_esp;
    /* 008aa982: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa983: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008aa986: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa987: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008aa989: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008aa98a: test byte ptr [esi + 0x10c], 0x20 */ {  u32 a = R8((u32)(r_esi+0x10cu)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008aa991: je 0x8aa9a3 */ if (fZ) goto L_008aa9a3;
L_008aa993:; BB(0x008aa993);
    /* 008aa993: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 008aa996: mov eax, 0x300 */ r_eax = 0x300u;
    /* 008aa99b: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008aa99d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa99f: jne 0x8aa9ab */ if (!fZ) goto L_008aa9ab;
L_008aa9a1:; BB(0x008aa9a1);
    /* 008aa9a1: jmp 0x8aa9a9 */ goto L_008aa9a9;
L_008aa9a3:; BB(0x008aa9a3);
    /* 008aa9a3: test byte ptr [esi + 0x5d], 8 */ {  u32 a = R8((u32)(r_esi+0x5du)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008aa9a7: je 0x8aa9ab */ if (fZ) goto L_008aa9ab;
L_008aa9a9:; BB(0x008aa9a9);
    /* 008aa9a9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008aa9ab:; BB(0x008aa9ab);
    /* 008aa9ab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa9ad: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008aa9b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008aa9b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aa9b2: call 0x8a6258 */ r_esp -= 4; W32(r_esp, 0x8aa9b7u); f_008a6258();
    /* 008aa9b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aa9ba: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aa9bc: je 0x8aa9d7 */ if (fZ) goto L_008aa9d7;
L_008aa9be:; BB(0x008aa9be);
    /* 008aa9be: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008aa9c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008aa9c2: call 0x8aa942 */ r_esp -= 4; W32(r_esp, 0x8aa9c7u); f_008aa942();
    /* 008aa9c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa9c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008aa9ca: cmp eax, dword ptr [esi + 0x100] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x100u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aa9d0: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008aa9d3: mov eax, ecx */ r_eax = r_ecx;
    /* 008aa9d5: jmp 0x8aa9d9 */ goto L_008aa9d9;
L_008aa9d7:; BB(0x008aa9d7);
    /* 008aa9d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008aa9d9:; BB(0x008aa9d9);
    /* 008aa9d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aa9da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa9db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008aa9dc: ret  */ FN_RET(0x008aa97f); r_esp += 4; return;
}

void f_008aa9dd(void) /* sub_8AA9DD */
{
    FN_ENTER(0x008aa9dd);
    /* 008aa9dd: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008aa9e1: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008aa9e3: mov dl, 0x29 */ r_edx = (r_edx & 0xffffff00u) | ((0x29u) & 0xffu);
    /* 008aa9e5: cmp al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008aa9e7: jb 0x8aaa2e */ if (fC) goto L_008aaa2e;
L_008aa9e9:; BB(0x008aa9e9);
    /* 008aa9e9: cmp al, 0x7a */ {  u32 a = (u8)r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aa9eb: ja 0x8aaa2e */ if ((!fC&&!fZ)) goto L_008aaa2e;
L_008aa9ed:; BB(0x008aa9ed);
    /* 008aa9ed: cmp al, 0x5a */ {  u32 a = (u8)r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aa9ef: jbe 0x8aa9f5 */ if ((fC||fZ)) goto L_008aa9f5;
L_008aa9f1:; BB(0x008aa9f1);
    /* 008aa9f1: cmp al, 0x61 */ {  u32 a = (u8)r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008aa9f3: jb 0x8aaa2e */ if (fC) goto L_008aaa2e;
L_008aa9f5:; BB(0x008aa9f5);
    /* 008aa9f5: mov al, byte ptr [ecx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 008aa9f8: cmp al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008aa9fa: jb 0x8aaa2e */ if (fC) goto L_008aaa2e;
L_008aa9fc:; BB(0x008aa9fc);
    /* 008aa9fc: cmp al, 0x7a */ {  u32 a = (u8)r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aa9fe: ja 0x8aaa2e */ if ((!fC&&!fZ)) goto L_008aaa2e;
L_008aaa00:; BB(0x008aaa00);
    /* 008aaa00: cmp al, 0x5a */ {  u32 a = (u8)r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aaa02: jbe 0x8aaa08 */ if ((fC||fZ)) goto L_008aaa08;
L_008aaa04:; BB(0x008aaa04);
    /* 008aaa04: cmp al, 0x61 */ {  u32 a = (u8)r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008aaa06: jb 0x8aaa2e */ if (fC) goto L_008aaa2e;
L_008aaa08:; BB(0x008aaa08);
    /* 008aaa08: mov al, byte ptr [ecx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 008aaa0b: cmp al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008aaa0d: jb 0x8aaa2e */ if (fC) goto L_008aaa2e;
L_008aaa0f:; BB(0x008aaa0f);
    /* 008aaa0f: cmp al, 0x7a */ {  u32 a = (u8)r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aaa11: ja 0x8aaa2e */ if ((!fC&&!fZ)) goto L_008aaa2e;
L_008aaa13:; BB(0x008aaa13);
    /* 008aaa13: cmp al, 0x5a */ {  u32 a = (u8)r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aaa15: jbe 0x8aaa1b */ if ((fC||fZ)) goto L_008aaa1b;
L_008aaa17:; BB(0x008aaa17);
    /* 008aaa17: cmp al, 0x61 */ {  u32 a = (u8)r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008aaa19: jb 0x8aaa2e */ if (fC) goto L_008aaa2e;
L_008aaa1b:; BB(0x008aaa1b);
    /* 008aaa1b: mov al, byte ptr [ecx + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x3u))) & 0xffu);
    /* 008aaa1e: cmp al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008aaa20: jb 0x8aaa2e */ if (fC) goto L_008aaa2e;
L_008aaa22:; BB(0x008aaa22);
    /* 008aaa22: cmp al, 0x7a */ {  u32 a = (u8)r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aaa24: ja 0x8aaa2e */ if ((!fC&&!fZ)) goto L_008aaa2e;
L_008aaa26:; BB(0x008aaa26);
    /* 008aaa26: cmp al, 0x5a */ {  u32 a = (u8)r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008aaa28: jbe 0x8aaa3e */ if ((fC||fZ)) goto L_008aaa3e;
L_008aaa2a:; BB(0x008aaa2a);
    /* 008aaa2a: cmp al, 0x61 */ {  u32 a = (u8)r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008aaa2c: jae 0x8aaa3e */ if (!fC) goto L_008aaa3e;
L_008aaa2e:; BB(0x008aaa2e);
    /* 008aaa2e: push 0x99e0a8 */ { u32 v = 0x99e0a8u; r_esp -= 4; W32(r_esp, v); }
    /* 008aaa33: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aaa37: call 0x8a3f23 */ r_esp -= 4; W32(r_esp, 0x8aaa3cu); f_008a3f23();
    /* 008aaa3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aaa3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aaa3e:; BB(0x008aaa3e);
    /* 008aaa3e: ret  */ FN_RET(0x008aa9dd); r_esp += 4; return;
}

void f_008aaa3f(void) /* sub_8AAA3F */
{
    FN_ENTER(0x008aaa3f);
    /* 008aaa3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aaa40: mov ebp, esp */ r_ebp = r_esp;
    /* 008aaa42: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aaa45: cmp dword ptr [ebp + 0x10], 0xff */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aaa4c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008aaa4f: movzx ecx, byte ptr [eax + 0xfb] */ r_ecx = (u32)R8((u32)(r_eax+0xfbu));
    /* 008aaa56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aaa57: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aaa58: jne 0x8aaa84 */ if (!fZ) goto L_008aaa84;
L_008aaa5a:; BB(0x008aaa5a);
    /* 008aaa5a: imul ecx, dword ptr [eax + 0xb8] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0xb8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008aaa61: mov esi, dword ptr [eax + 0xdc] */ r_esi = R32((u32)(r_eax+0xdcu));
    /* 008aaa67: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008aaa6a: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008aaa6d: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008aaa70: mov eax, ecx */ r_eax = r_ecx;
    /* 008aaa72: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008aaa75: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008aaa76: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008aaa78: mov ecx, eax */ r_ecx = r_eax;
    /* 008aaa7a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aaa7d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008aaa7f: jmp 0x8aac51 */ goto L_008aac51;
L_008aaa84:; BB(0x008aaa84);
    /* 008aaa84: mov edx, ecx */ r_edx = r_ecx;
    /* 008aaa86: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008aaa87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aaa88: je 0x8aabe4 */ if (fZ) goto L_008aabe4;
L_008aaa8e:; BB(0x008aaa8e);
    /* 008aaa8e: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008aaa8f: je 0x8aab71 */ if (fZ) goto L_008aab71;
L_008aaa95:; BB(0x008aaa95);
    /* 008aaa95: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008aaa96: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008aaa97: je 0x8aaafa */ if (fZ) goto L_008aaafa;
L_008aaa99:; BB(0x008aaa99);
    /* 008aaa99: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 008aaa9f: mov eax, dword ptr [eax + 0xb8] */ r_eax = R32((u32)(r_eax+0xb8u));
    /* 008aaaa5: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008aaaa8: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008aaaab: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008aaaac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aaaae: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008aaab1: mov byte ptr [ebp - 1], 0x80 */ W8((u32)(r_ebp+0xffffffffu), 0x80u);
    /* 008aaab5: jbe 0x8aac50 */ if ((fC||fZ)) goto L_008aac50;
L_008aaabb:; BB(0x008aaabb);
    /* 008aaabb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008aaabe:; BB(0x008aaabe);
    /* 008aaabe: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 008aaac1: test byte ptr [ebp - 1], al */ {  u32 a = R8((u32)(r_ebp+0xffffffffu)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008aaac4: je 0x8aaadb */ if (fZ) goto L_008aaadb;
L_008aaac6:; BB(0x008aaac6);
    /* 008aaac6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008aaac9: mov eax, ecx */ r_eax = r_ecx;
    /* 008aaacb: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008aaace: mov esi, edx */ r_esi = r_edx;
    /* 008aaad0: mov edi, ebx */ r_edi = r_ebx;
    /* 008aaad2: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008aaad4: mov ecx, eax */ r_ecx = r_eax;
    /* 008aaad6: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008aaad9: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_008aaadb:; BB(0x008aaadb);
    /* 008aaadb: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008aaade: add ebx, dword ptr [ebp - 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008aaae1: cmp byte ptr [ebp - 1], 1 */ {  u32 a = R8((u32)(r_ebp+0xffffffffu)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aaae5: jne 0x8aaaed */ if (!fZ) goto L_008aaaed;
L_008aaae7:; BB(0x008aaae7);
    /* 008aaae7: mov byte ptr [ebp - 1], 0x80 */ W8((u32)(r_ebp+0xffffffffu), 0x80u);
    /* 008aaaeb: jmp 0x8aaaf0 */ goto L_008aaaf0;
L_008aaaed:; BB(0x008aaaed);
    /* 008aaaed: shr byte ptr [ebp - 1], 1 */ { u32 ad = (u32)(r_ebp+0xffffffffu); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); W8(ad, r); fC = (c <= 8) ? ((a >> (c - 1)) & 1) : 0; } }
L_008aaaf0:; BB(0x008aaaf0);
    /* 008aaaf0: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aaaf3: jne 0x8aaabe */ if (!fZ) goto L_008aaabe;
L_008aaaf5:; BB(0x008aaaf5);
    /* 008aaaf5: jmp 0x8aac50 */ goto L_008aac50;
L_008aaafa:; BB(0x008aaafa);
    /* 008aaafa: mov esi, dword ptr [eax + 0xdc] */ r_esi = R32((u32)(r_eax+0xdcu));
    /* 008aab00: mov eax, dword ptr [eax + 0xb8] */ r_eax = R32((u32)(r_eax+0xb8u));
    /* 008aab06: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008aab09: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008aab0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aab0c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008aab0e: mov dword ptr [ebp - 8], 0x80 */ W32((u32)(r_ebp+0xfffffff8u), 0x80u);
    /* 008aab15: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008aab16: jbe 0x8aac50 */ if ((fC||fZ)) goto L_008aac50;
L_008aab1c:; BB(0x008aab1c);
    /* 008aab1c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008aab1f:; BB(0x008aab1f);
    /* 008aab1f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008aab22: test dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008aab25: je 0x8aab47 */ if (fZ) goto L_008aab47;
L_008aab27:; BB(0x008aab27);
    /* 008aab27: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 008aab2a: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 008aab2c: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008aab2e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008aab30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aab31: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aab33: mov ebx, 0xf0f */ r_ebx = 0xf0fu;
    /* 008aab38: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008aab3a: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008aab3d: mov ecx, edx */ r_ecx = r_edx;
    /* 008aab3f: shl al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008aab41: and bl, byte ptr [edi] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edi)); u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aab43: or bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aab45: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
L_008aab47:; BB(0x008aab47);
    /* 008aab47: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aab49: jne 0x8aab52 */ if (!fZ) goto L_008aab52;
L_008aab4b:; BB(0x008aab4b);
    /* 008aab4b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008aab4d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008aab4e: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008aab4f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008aab50: jmp 0x8aab55 */ goto L_008aab55;
L_008aab52:; BB(0x008aab52);
    /* 008aab52: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_008aab55:; BB(0x008aab55);
    /* 008aab55: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aab59: jne 0x8aab64 */ if (!fZ) goto L_008aab64;
L_008aab5b:; BB(0x008aab5b);
    /* 008aab5b: mov dword ptr [ebp - 8], 0x80 */ W32((u32)(r_ebp+0xfffffff8u), 0x80u);
    /* 008aab62: jmp 0x8aab67 */ goto L_008aab67;
L_008aab64:; BB(0x008aab64);
    /* 008aab64: sar dword ptr [ebp - 8], 1 */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r); fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; } }
L_008aab67:; BB(0x008aab67);
    /* 008aab67: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aab6a: jne 0x8aab1f */ if (!fZ) goto L_008aab1f;
L_008aab6c:; BB(0x008aab6c);
    /* 008aab6c: jmp 0x8aac50 */ goto L_008aac50;
L_008aab71:; BB(0x008aab71);
    /* 008aab71: mov esi, dword ptr [eax + 0xdc] */ r_esi = R32((u32)(r_eax+0xdcu));
    /* 008aab77: mov eax, dword ptr [eax + 0xb8] */ r_eax = R32((u32)(r_eax+0xb8u));
    /* 008aab7d: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008aab80: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008aab81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aab83: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008aab85: mov dword ptr [ebp - 8], 0x80 */ W32((u32)(r_ebp+0xfffffff8u), 0x80u);
    /* 008aab8c: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008aab8d: jbe 0x8aac50 */ if ((fC||fZ)) goto L_008aac50;
L_008aab93:; BB(0x008aab93);
    /* 008aab93: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008aab96:; BB(0x008aab96);
    /* 008aab96: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008aab99: test dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008aab9c: je 0x8aabbe */ if (fZ) goto L_008aabbe;
L_008aab9e:; BB(0x008aab9e);
    /* 008aab9e: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 008aaba1: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 008aaba3: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008aaba5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008aaba7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aaba8: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aabaa: mov ebx, 0x3f3f */ r_ebx = 0x3f3fu;
    /* 008aabaf: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008aabb1: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008aabb4: mov ecx, edx */ r_ecx = r_edx;
    /* 008aabb6: shl al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008aabb8: and bl, byte ptr [edi] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edi)); u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aabba: or bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aabbc: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
L_008aabbe:; BB(0x008aabbe);
    /* 008aabbe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aabc0: jne 0x8aabc9 */ if (!fZ) goto L_008aabc9;
L_008aabc2:; BB(0x008aabc2);
    /* 008aabc2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008aabc4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008aabc5: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008aabc6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008aabc7: jmp 0x8aabcb */ goto L_008aabcb;
L_008aabc9:; BB(0x008aabc9);
    /* 008aabc9: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008aabca: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_008aabcb:; BB(0x008aabcb);
    /* 008aabcb: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aabcf: jne 0x8aabda */ if (!fZ) goto L_008aabda;
L_008aabd1:; BB(0x008aabd1);
    /* 008aabd1: mov dword ptr [ebp - 8], 0x80 */ W32((u32)(r_ebp+0xfffffff8u), 0x80u);
    /* 008aabd8: jmp 0x8aabdd */ goto L_008aabdd;
L_008aabda:; BB(0x008aabda);
    /* 008aabda: sar dword ptr [ebp - 8], 1 */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r); fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; } }
L_008aabdd:; BB(0x008aabdd);
    /* 008aabdd: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aabe0: jne 0x8aab96 */ if (!fZ) goto L_008aab96;
L_008aabe2:; BB(0x008aabe2);
    /* 008aabe2: jmp 0x8aac50 */ goto L_008aac50;
L_008aabe4:; BB(0x008aabe4);
    /* 008aabe4: mov esi, dword ptr [eax + 0xdc] */ r_esi = R32((u32)(r_eax+0xdcu));
    /* 008aabea: mov eax, dword ptr [eax + 0xb8] */ r_eax = R32((u32)(r_eax+0xb8u));
    /* 008aabf0: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008aabf3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008aabf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aabf6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008aabf8: mov dword ptr [ebp - 8], 0x80 */ W32((u32)(r_ebp+0xfffffff8u), 0x80u);
    /* 008aabff: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008aac00: jbe 0x8aac50 */ if ((fC||fZ)) goto L_008aac50;
L_008aac02:; BB(0x008aac02);
    /* 008aac02: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008aac05:; BB(0x008aac05);
    /* 008aac05: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008aac08: test dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008aac0b: je 0x8aac2d */ if (fZ) goto L_008aac2d;
L_008aac0d:; BB(0x008aac0d);
    /* 008aac0d: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 008aac10: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 008aac12: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008aac14: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008aac16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aac17: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aac19: mov ebx, 0x7f7f */ r_ebx = 0x7f7fu;
    /* 008aac1e: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008aac20: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008aac23: mov ecx, edx */ r_ecx = r_edx;
    /* 008aac25: shl al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008aac27: and bl, byte ptr [edi] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edi)); u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aac29: or bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aac2b: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
L_008aac2d:; BB(0x008aac2d);
    /* 008aac2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aac2f: jne 0x8aac38 */ if (!fZ) goto L_008aac38;
L_008aac31:; BB(0x008aac31);
    /* 008aac31: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008aac33: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008aac34: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008aac35: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008aac36: jmp 0x8aac39 */ goto L_008aac39;
L_008aac38:; BB(0x008aac38);
    /* 008aac38: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_008aac39:; BB(0x008aac39);
    /* 008aac39: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008aac3d: jne 0x8aac48 */ if (!fZ) goto L_008aac48;
L_008aac3f:; BB(0x008aac3f);
    /* 008aac3f: mov dword ptr [ebp - 8], 0x80 */ W32((u32)(r_ebp+0xfffffff8u), 0x80u);
    /* 008aac46: jmp 0x8aac4b */ goto L_008aac4b;
L_008aac48:; BB(0x008aac48);
    /* 008aac48: sar dword ptr [ebp - 8], 1 */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r); fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; } }
L_008aac4b:; BB(0x008aac4b);
    /* 008aac4b: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aac4e: jne 0x8aac05 */ if (!fZ) goto L_008aac05;
L_008aac50:; BB(0x008aac50);
    /* 008aac50: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008aac51:; BB(0x008aac51);
    /* 008aac51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aac52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aac53: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008aac54: ret  */ FN_RET(0x008aaa3f); r_esp += 4; return;
}

void f_008aac55(void) /* sub_8AAC55 */
{
    FN_ENTER(0x008aac55);
    /* 008aac55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aac56: mov ebp, esp */ r_ebp = r_esp;
    /* 008aac58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aac5b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008aac5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aac60: je 0x8aaf1c */ if (fZ) goto L_008aaf1c;
L_008aac66:; BB(0x008aac66);
    /* 008aac66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aac67: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008aac6a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aac6c: je 0x8aaf1b */ if (fZ) goto L_008aaf1b;
L_008aac72:; BB(0x008aac72);
    /* 008aac72: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008aac75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aac76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aac77: mov esi, dword ptr [eax*4 + 0x99e04c] */ r_esi = R32((u32)(r_eax*4+0x99e04cu));
    /* 008aac7e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008aac80: mov edx, eax */ r_edx = r_eax;
    /* 008aac82: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008aac85: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 008aac88: movzx esi, byte ptr [edi + 0xb] */ r_esi = (u32)R8((u32)(r_edi+0xbu));
    /* 008aac8c: mov edi, esi */ r_edi = r_esi;
    /* 008aac8e: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008aac8f: je 0x8aae6c */ if (fZ) goto L_008aae6c;
L_008aac95:; BB(0x008aac95);
    /* 008aac95: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008aac96: je 0x8aadc5 */ if (fZ) goto L_008aadc5;
L_008aac9c:; BB(0x008aac9c);
    /* 008aac9c: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008aac9d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008aac9e: je 0x8aad1a */ if (fZ) goto L_008aad1a;
L_008aaca0:; BB(0x008aaca0);
    /* 008aaca0: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aaca4: shr esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008aaca7: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 008aacaa: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008aacad: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008aacaf: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 008aacb2: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008aacb5: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008aacb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008aacba: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 008aacbd: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008aacc0: jbe 0x8aaf04 */ if ((fC||fZ)) goto L_008aaf04;
L_008aacc6:; BB(0x008aacc6);
    /* 008aacc6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008aacc9: mov eax, ecx */ r_eax = r_ecx;
    /* 008aaccb: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008aacce: mov esi, ebx */ r_esi = r_ebx;
    /* 008aacd0: lea edi, [ebp - 0x18] */ r_edi = (u32)(r_ebp+0xffffffe8u);
    /* 008aacd3: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008aacd5: mov ecx, eax */ r_ecx = r_eax;
    /* 008aacd7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008aacda: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008aacdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008aacdf: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008aace1: jle 0x8aad05 */ if ((fZ||fS!=fO)) goto L_008aad05;
L_008aace3:; BB(0x008aace3);
    /* 008aace3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_008aace6:; BB(0x008aace6);
    /* 008aace6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008aace9: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008aacec: mov eax, ecx */ r_eax = r_ecx;
    /* 008aacee: sub dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008aacf1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008aacf4: lea esi, [ebp - 0x18] */ r_esi = (u32)(r_ebp+0xffffffe8u);
    /* 008aacf7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008aacf9: mov ecx, eax */ r_ecx = r_eax;
    /* 008aacfb: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008aacfe: dec dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008aad01: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008aad03: jne 0x8aace6 */ if (!fZ) goto L_008aace6;
L_008aad05:; BB(0x008aad05);
    /* 008aad05: sub ebx, dword ptr [ebp - 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008aad08: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aad0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008aad0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008aad11: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008aad13: jb 0x8aacc6 */ if (fC) goto L_008aacc6;
L_008aad15:; BB(0x008aad15);
    /* 008aad15: jmp 0x8aaf04 */ goto L_008aaf04;
L_008aad1a:; BB(0x008aad1a);
    /* 008aad1a: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aad1e: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
    /* 008aad21: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 008aad24: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008aad26: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008aad28: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008aad2a: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008aad2c: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 008aad2f: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008aad32: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008aad35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008aad37: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008aad39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aad3a: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008aad3c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008aad3f: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 008aad42: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008aad45: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008aad48: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008aad4a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008aad4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aad4d: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008aad4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008aad51: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008aad54: jbe 0x8aaf04 */ if ((fC||fZ)) goto L_008aaf04;
L_008aad5a:; BB(0x008aad5a);
    /* 008aad5a: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 008aad5d: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008aad5f: shr al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008aad61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008aad64: and al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aad66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008aad68: mov byte ptr [ebp + 0xf], al */ W8((u32)(r_ebp+0xfu), (u8)r_eax);
    /* 008aad6b: jle 0x8aada2 */ if ((fZ||fS!=fO)) goto L_008aada2;
L_008aad6d:; BB(0x008aad6d);
    /* 008aad6d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008aad70: jmp 0x8aad75 */ goto L_008aad75;
L_008aad72:; BB(0x008aad72);
    /* 008aad72: mov al, byte ptr [ebp + 0xf] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfu))) & 0xffu);
L_008aad75:; BB(0x008aad75);
    /* 008aad75: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008aad77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aad78: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aad7b: mov ebx, 0xf0f */ r_ebx = 0xf0fu;
    /* 008aad80: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008aad82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008aad85: shl al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008aad87: and bl, byte ptr [esi] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_esi)); u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aad89: or bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aad8b: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aad8e: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008aad90: jne 0x8aad99 */ if (!fZ) goto L_008aad99;
L_008aad92:; BB(0x008aad92);
    /* 008aad92: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aad96: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008aad97: jmp 0x8aad9d */ goto L_008aad9d;
L_008aad99:; BB(0x008aad99);
    /* 008aad99: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008aad9d:; BB(0x008aad9d);
    /* 008aad9d: dec dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008aada0: jne 0x8aad72 */ if (!fZ) goto L_008aad72;
L_008aada2:; BB(0x008aada2);
    /* 008aada2: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aada6: jne 0x8aadaf */ if (!fZ) goto L_008aadaf;
L_008aada8:; BB(0x008aada8);
    /* 008aada8: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aadac: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008aadad: jmp 0x8aadb3 */ goto L_008aadb3;
L_008aadaf:; BB(0x008aadaf);
    /* 008aadaf: add dword ptr [ebp - 8], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008aadb3:; BB(0x008aadb3);
    /* 008aadb3: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aadb6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008aadb9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008aadbc: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aadbe: jb 0x8aad5a */ if (fC) goto L_008aad5a;
L_008aadc0:; BB(0x008aadc0);
    /* 008aadc0: jmp 0x8aaf04 */ goto L_008aaf04;
L_008aadc5:; BB(0x008aadc5);
    /* 008aadc5: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aadc9: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
    /* 008aadcc: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 008aadcf: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008aadd2: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008aadd4: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008aadd7: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008aadd9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008aaddb: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 008aadde: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008aade1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aade2: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008aade4: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008aade6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008aade9: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 008aadec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008aadee: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008aadf1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aadf2: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008aadf4: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008aadf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008aadf8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008aadfb: jbe 0x8aaf04 */ if ((fC||fZ)) goto L_008aaf04;
L_008aae01:; BB(0x008aae01);
    /* 008aae01: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 008aae04: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008aae06: shr al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008aae08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008aae0b: and al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aae0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008aae0f: mov byte ptr [ebp + 0xf], al */ W8((u32)(r_ebp+0xfu), (u8)r_eax);
    /* 008aae12: jle 0x8aae49 */ if ((fZ||fS!=fO)) goto L_008aae49;
L_008aae14:; BB(0x008aae14);
    /* 008aae14: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008aae17: jmp 0x8aae1c */ goto L_008aae1c;
L_008aae19:; BB(0x008aae19);
    /* 008aae19: mov al, byte ptr [ebp + 0xf] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfu))) & 0xffu);
L_008aae1c:; BB(0x008aae1c);
    /* 008aae1c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008aae1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aae1f: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aae22: mov ebx, 0x3f3f */ r_ebx = 0x3f3fu;
    /* 008aae27: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008aae29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008aae2c: shl al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008aae2e: and bl, byte ptr [esi] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_esi)); u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aae30: or bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aae32: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aae35: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008aae37: jne 0x8aae40 */ if (!fZ) goto L_008aae40;
L_008aae39:; BB(0x008aae39);
    /* 008aae39: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aae3d: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008aae3e: jmp 0x8aae44 */ goto L_008aae44;
L_008aae40:; BB(0x008aae40);
    /* 008aae40: add dword ptr [ebp - 4], 2 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008aae44:; BB(0x008aae44);
    /* 008aae44: dec dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008aae47: jne 0x8aae19 */ if (!fZ) goto L_008aae19;
L_008aae49:; BB(0x008aae49);
    /* 008aae49: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aae4d: jne 0x8aae56 */ if (!fZ) goto L_008aae56;
L_008aae4f:; BB(0x008aae4f);
    /* 008aae4f: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aae53: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008aae54: jmp 0x8aae5a */ goto L_008aae5a;
L_008aae56:; BB(0x008aae56);
    /* 008aae56: add dword ptr [ebp - 8], 2 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008aae5a:; BB(0x008aae5a);
    /* 008aae5a: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aae5d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008aae60: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008aae63: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aae65: jb 0x8aae01 */ if (fC) goto L_008aae01;
L_008aae67:; BB(0x008aae67);
    /* 008aae67: jmp 0x8aaf04 */ goto L_008aaf04;
L_008aae6c:; BB(0x008aae6c);
    /* 008aae6c: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aae70: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
    /* 008aae73: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 008aae76: shr edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008aae79: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008aae7b: shr esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008aae7e: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008aae80: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008aae82: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 008aae85: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008aae88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aae89: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008aae8b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008aae8e: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 008aae91: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008aae93: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008aae96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aae97: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008aae99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008aae9b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008aae9e: jbe 0x8aaf04 */ if ((fC||fZ)) goto L_008aaf04;
L_008aaea0:; BB(0x008aaea0);
    /* 008aaea0: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 008aaea3: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008aaea5: shr al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008aaea7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008aaeaa: and al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aaeac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008aaeae: mov byte ptr [ebp + 0xf], al */ W8((u32)(r_ebp+0xfu), (u8)r_eax);
    /* 008aaeb1: jle 0x8aaee7 */ if ((fZ||fS!=fO)) goto L_008aaee7;
L_008aaeb3:; BB(0x008aaeb3);
    /* 008aaeb3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008aaeb6: jmp 0x8aaebb */ goto L_008aaebb;
L_008aaeb8:; BB(0x008aaeb8);
    /* 008aaeb8: mov al, byte ptr [ebp + 0xf] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfu))) & 0xffu);
L_008aaebb:; BB(0x008aaebb);
    /* 008aaebb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008aaebd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aaebe: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aaec1: mov ebx, 0x7f7f */ r_ebx = 0x7f7fu;
    /* 008aaec6: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008aaec8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008aaecb: shl al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008aaecd: and bl, byte ptr [esi] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_esi)); u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aaecf: or bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008aaed1: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aaed4: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008aaed6: jne 0x8aaedf */ if (!fZ) goto L_008aaedf;
L_008aaed8:; BB(0x008aaed8);
    /* 008aaed8: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aaedc: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008aaedd: jmp 0x8aaee2 */ goto L_008aaee2;
L_008aaedf:; BB(0x008aaedf);
    /* 008aaedf: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008aaee2:; BB(0x008aaee2);
    /* 008aaee2: dec dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008aaee5: jne 0x8aaeb8 */ if (!fZ) goto L_008aaeb8;
L_008aaee7:; BB(0x008aaee7);
    /* 008aaee7: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aaeeb: jne 0x8aaef4 */ if (!fZ) goto L_008aaef4;
L_008aaeed:; BB(0x008aaeed);
    /* 008aaeed: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008aaef1: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008aaef2: jmp 0x8aaef7 */ goto L_008aaef7;
L_008aaef4:; BB(0x008aaef4);
    /* 008aaef4: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008aaef7:; BB(0x008aaef7);
    /* 008aaef7: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aaefa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008aaefd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008aaf00: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aaf02: jb 0x8aaea0 */ if (fC) goto L_008aaea0;
L_008aaf04:; BB(0x008aaf04);
    /* 008aaf04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008aaf07: movzx ecx, byte ptr [eax + 0xb] */ r_ecx = (u32)R8((u32)(r_eax+0xbu));
    /* 008aaf0b: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008aaf0e: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008aaf11: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008aaf14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aaf15: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 008aaf17: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008aaf1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008aaf1b:; BB(0x008aaf1b);
    /* 008aaf1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008aaf1c:; BB(0x008aaf1c);
    /* 008aaf1c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008aaf1d: ret  */ FN_RET(0x008aac55); r_esp += 4; return;
}

void f_008aaf1e(void) /* sub_8AAF1E */
{
    FN_ENTER(0x008aaf1e);
    /* 008aaf1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aaf1f: mov ebp, esp */ r_ebp = r_esp;
    /* 008aaf21: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aaf24: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008aaf27: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aaf2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aaf2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aaf2c: je 0x8ab095 */ if (fZ) goto L_008ab095;
L_008aaf32:; BB(0x008aaf32);
    /* 008aaf32: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008aaf33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aaf34: je 0x8ab06b */ if (fZ) goto L_008ab06b;
L_008aaf3a:; BB(0x008aaf3a);
    /* 008aaf3a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008aaf3b: je 0x8ab04c */ if (fZ) goto L_008ab04c;
L_008aaf41:; BB(0x008aaf41);
    /* 008aaf41: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008aaf42: je 0x8ab008 */ if (fZ) goto L_008ab008;
L_008aaf48:; BB(0x008aaf48);
    /* 008aaf48: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008aaf49: je 0x8aaf65 */ if (fZ) goto L_008aaf65;
L_008aaf4b:; BB(0x008aaf4b);
    /* 008aaf4b: push 0x99e0bc */ { u32 v = 0x99e0bcu; r_esp -= 4; W32(r_esp, v); }
    /* 008aaf50: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aaf53: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8aaf58u); f_008a3f0e();
    /* 008aaf58: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008aaf5b: and byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aaf5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aaf5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aaf60: jmp 0x8ab094 */ goto L_008ab094;
L_008aaf65:; BB(0x008aaf65);
    /* 008aaf65: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008aaf68: movzx eax, byte ptr [ecx + 0xb] */ r_eax = (u32)R8((u32)(r_ecx+0xbu));
    /* 008aaf6c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 008aaf6f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008aaf72: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 008aaf75: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aaf78: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008aaf7b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008aaf7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008aaf7f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008aaf82: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 008aaf85: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008aaf88: jbe 0x8aaf98 */ if ((fC||fZ)) goto L_008aaf98;
L_008aaf8a:; BB(0x008aaf8a);
    /* 008aaf8a: mov esi, eax */ r_esi = r_eax;
L_008aaf8c:; BB(0x008aaf8c);
    /* 008aaf8c: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008aaf8e: add byte ptr [edx], al */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008aaf90: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008aaf91: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008aaf92: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008aaf93: jne 0x8aaf8c */ if (!fZ) goto L_008aaf8c;
L_008aaf95:; BB(0x008aaf95);
    /* 008aaf95: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_008aaf98:; BB(0x008aaf98);
    /* 008aaf98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aaf9a: jbe 0x8ab094 */ if ((fC||fZ)) goto L_008ab094;
L_008aafa0:; BB(0x008aafa0);
    /* 008aafa0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_008aafa3:; BB(0x008aafa3);
    /* 008aafa3: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008aafa6: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008aafa9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008aafac: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008aafaf: movzx esi, byte ptr [edx] */ r_esi = (u32)R8((u32)(r_edx));
    /* 008aafb2: inc dword ptr [ebp + 0x18] */ { u32 ad = (u32)(r_ebp+0x18u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aafb5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008aafb8: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008aafb9: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aafbc: mov edx, ecx */ r_edx = r_ecx;
    /* 008aafbe: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aafc0: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008aafc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008aafc4: jge 0x8aafcf */ if ((fS==fO)) goto L_008aafcf;
L_008aafc6:; BB(0x008aafc6);
    /* 008aafc6: mov ebx, eax */ r_ebx = r_eax;
    /* 008aafc8: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008aafca: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008aafcd: jmp 0x8aafd2 */ goto L_008aafd2;
L_008aafcf:; BB(0x008aafcf);
    /* 008aafcf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008aafd2:; BB(0x008aafd2);
    /* 008aafd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008aafd4: mov ebx, edx */ r_ebx = r_edx;
    /* 008aafd6: jge 0x8aafda */ if ((fS==fO)) goto L_008aafda;
L_008aafd8:; BB(0x008aafd8);
    /* 008aafd8: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_008aafda:; BB(0x008aafda);
    /* 008aafda: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aafdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008aafde: jge 0x8aafe2 */ if ((fS==fO)) goto L_008aafe2;
L_008aafe0:; BB(0x008aafe0);
    /* 008aafe0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008aafe2:; BB(0x008aafe2);
    /* 008aafe2: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aafe5: jg 0x8aafec */ if ((!fZ&&fS==fO)) goto L_008aafec;
L_008aafe7:; BB(0x008aafe7);
    /* 008aafe7: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aafea: jle 0x8aaff5 */ if ((fZ||fS!=fO)) goto L_008aaff5;
L_008aafec:; BB(0x008aafec);
    /* 008aafec: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aafee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008aaff1: jle 0x8aaff5 */ if ((fZ||fS!=fO)) goto L_008aaff5;
L_008aaff3:; BB(0x008aaff3);
    /* 008aaff3: mov ecx, esi */ r_ecx = r_esi;
L_008aaff5:; BB(0x008aaff5);
    /* 008aaff5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008aaff8: add byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 008aaffa: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aaffb: dec dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aaffe: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008ab001: jne 0x8aafa3 */ if (!fZ) goto L_008aafa3;
L_008ab003:; BB(0x008ab003);
    /* 008ab003: jmp 0x8ab094 */ goto L_008ab094;
L_008ab008:; BB(0x008ab008);
    /* 008ab008: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008ab00b: movzx eax, byte ptr [ecx + 0xb] */ r_eax = (u32)R8((u32)(r_ecx+0xbu));
    /* 008ab00f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 008ab012: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008ab015: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 008ab018: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab01b: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008ab01e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab020: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008ab022: mov ebx, esi */ r_ebx = r_esi;
    /* 008ab024: jbe 0x8ab031 */ if ((fC||fZ)) goto L_008ab031;
L_008ab026:; BB(0x008ab026);
    /* 008ab026: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008ab028: shr dl, 1 */ { u32 c = (1u) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008ab02a: add byte ptr [esi], dl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008ab02c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ab02d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ab02e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008ab02f: jne 0x8ab026 */ if (!fZ) goto L_008ab026;
L_008ab031:; BB(0x008ab031);
    /* 008ab031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ab033: jbe 0x8ab094 */ if ((fC||fZ)) goto L_008ab094;
L_008ab035:; BB(0x008ab035);
    /* 008ab035: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 008ab038: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 008ab03b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab03d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008ab03e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008ab040: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008ab042: add byte ptr [esi], al */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 008ab044: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008ab045: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ab046: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ab047: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ab048: jne 0x8ab035 */ if (!fZ) goto L_008ab035;
L_008ab04a:; BB(0x008ab04a);
    /* 008ab04a: jmp 0x8ab094 */ goto L_008ab094;
L_008ab04c:; BB(0x008ab04c);
    /* 008ab04c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ab04f: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 008ab052: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008ab055: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab057: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ab059: jbe 0x8ab094 */ if ((fC||fZ)) goto L_008ab094;
L_008ab05b:; BB(0x008ab05b);
    /* 008ab05b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008ab05e: mov dl, byte ptr [ecx + edx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 008ab061: add byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008ab063: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab064: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab065: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ab067: jb 0x8ab05b */ if (fC) goto L_008ab05b;
L_008ab069:; BB(0x008ab069);
    /* 008ab069: jmp 0x8ab094 */ goto L_008ab094;
L_008ab06b:; BB(0x008ab06b);
    /* 008ab06b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ab06e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008ab071: movzx eax, byte ptr [eax + 0xb] */ r_eax = (u32)R8((u32)(r_eax+0xbu));
    /* 008ab075: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008ab078: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab07b: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008ab07e: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ab080: lea esi, [eax + edx] */ r_esi = (u32)(r_eax+r_edx);
    /* 008ab083: jae 0x8ab094 */ if (!fC) goto L_008ab094;
L_008ab085:; BB(0x008ab085);
    /* 008ab085: mov edx, esi */ r_edx = r_esi;
    /* 008ab087: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008ab089: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008ab08b:; BB(0x008ab08b);
    /* 008ab08b: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008ab08d: add byte ptr [esi], al */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 008ab08f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ab090: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008ab091: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ab092: jne 0x8ab08b */ if (!fZ) goto L_008ab08b;
L_008ab094:; BB(0x008ab094);
    /* 008ab094: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008ab095:; BB(0x008ab095);
    /* 008ab095: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ab096: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ab097: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008ab098: ret  */ FN_RET(0x008aaf1e); r_esp += 4; return;
}

