#include "protos.h"

void f_0085c003(void) /* ?BuildCatchObject@@YAXPAUEHExceptionRecord@@PAXPBU_s_HandlerType@@PBU_s_CatchableType@@@Z */
{
    FN_ENTER(0x0085c003);
    /* 0085c003: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c005: push 0x9980e0 */ { u32 v = 0x9980e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c00a: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85c00fu); f_0085e5ac();
    /* 0085c00f: mov esi, ecx */ r_esi = r_ecx;
    /* 0085c011: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085c014: mov edi, edx */ r_edi = r_edx;
    /* 0085c016: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0085c019: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0085c01c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c01e: je 0x85c16d */ if (fZ) goto L_0085c16d;
L_0085c024:; BB(0x0085c024);
    /* 0085c024: cmp byte ptr [ecx + 8], 0 */ {  u32 a = R8((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085c028: je 0x85c16d */ if (fZ) goto L_0085c16d;
L_0085c02e:; BB(0x0085c02e);
    /* 0085c02e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0085c031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c033: jne 0x85c03f */ if (!fZ) goto L_0085c03f;
L_0085c035:; BB(0x0085c035);
    /* 0085c035: test byte ptr [eax + 3], 0x80 */ {  u32 a = R8((u32)(r_eax+0x3u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085c039: je 0x85c16d */ if (fZ) goto L_0085c16d;
L_0085c03f:; BB(0x0085c03f);
    /* 0085c03f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085c041: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); }
    /* 0085c043: js 0x85c049 */ if (fS) goto L_0085c049;
L_0085c045:; BB(0x0085c045);
    /* 0085c045: lea edi, [ecx + edi + 0xc] */ r_edi = (u32)(r_ecx+r_edi+0xcu);
L_0085c049:; BB(0x0085c049);
    /* 0085c049: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c04d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c04f: push dword ptr [ebx + 0x18] */ { u32 v = R32((u32)(r_ebx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c052: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085c054: je 0x85c08b */ if (fZ) goto L_0085c08b;
L_0085c056:; BB(0x0085c056);
    /* 0085c056: call 0x866204 */ r_esp -= 4; W32(r_esp, 0x85c05bu); f_00866204();
    /* 0085c05b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c05c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c05d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c05f: je 0x85c164 */ if (fZ) goto L_0085c164;
L_0085c065:; BB(0x0085c065);
    /* 0085c065: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c067: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c068: call 0x866220 */ r_esp -= 4; W32(r_esp, 0x85c06du); f_00866220();
    /* 0085c06d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c06e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c06f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c071: je 0x85c164 */ if (fZ) goto L_0085c164;
L_0085c077:; BB(0x0085c077);
    /* 0085c077: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0085c07a: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
L_0085c07c:; BB(0x0085c07c);
    /* 0085c07c: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0085c07f: call 0x85be20 */ r_esp -= 4; W32(r_esp, 0x85c084u); f_0085be20();
    /* 0085c084: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0085c086: jmp 0x85c169 */ goto L_0085c169;
L_0085c08b:; BB(0x0085c08b);
    /* 0085c08b: test byte ptr [esi], 1 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085c08e: je 0x85c0d6 */ if (fZ) goto L_0085c0d6;
L_0085c090:; BB(0x0085c090);
    /* 0085c090: call 0x866204 */ r_esp -= 4; W32(r_esp, 0x85c095u); f_00866204();
    /* 0085c095: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c099: je 0x85c164 */ if (fZ) goto L_0085c164;
L_0085c09f:; BB(0x0085c09f);
    /* 0085c09f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c0a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c0a2: call 0x866220 */ r_esp -= 4; W32(r_esp, 0x85c0a7u); f_00866220();
    /* 0085c0a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c0a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c0a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c0ab: je 0x85c164 */ if (fZ) goto L_0085c164;
L_0085c0b1:; BB(0x0085c0b1);
    /* 0085c0b1: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c0b4: push dword ptr [ebx + 0x18] */ { u32 v = R32((u32)(r_ebx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c0b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c0b8: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x85c0bdu); f_00858c80();
    /* 0085c0bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085c0c0: cmp dword ptr [esi + 0x14], 4 */ {  u32 a = R32((u32)(r_esi+0x14u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c0c4: jne 0x85c169 */ if (!fZ) goto L_0085c169;
L_0085c0ca:; BB(0x0085c0ca);
    /* 0085c0ca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0085c0cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c0ce: je 0x85c169 */ if (fZ) goto L_0085c169;
L_0085c0d4:; BB(0x0085c0d4);
    /* 0085c0d4: jmp 0x85c07c */ goto L_0085c07c;
L_0085c0d6:; BB(0x0085c0d6);
    /* 0085c0d6: cmp dword ptr [esi + 0x18], 0 */ {  u32 a = R32((u32)(r_esi+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c0da: jne 0x85c10f */ if (!fZ) goto L_0085c10f;
L_0085c0dc:; BB(0x0085c0dc);
    /* 0085c0dc: call 0x866204 */ r_esp -= 4; W32(r_esp, 0x85c0e1u); f_00866204();
    /* 0085c0e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c0e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c0e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c0e5: je 0x85c164 */ if (fZ) goto L_0085c164;
L_0085c0e7:; BB(0x0085c0e7);
    /* 0085c0e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c0e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c0ea: call 0x866220 */ r_esp -= 4; W32(r_esp, 0x85c0efu); f_00866220();
    /* 0085c0ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c0f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c0f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c0f3: je 0x85c164 */ if (fZ) goto L_0085c164;
L_0085c0f5:; BB(0x0085c0f5);
    /* 0085c0f5: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c0f8: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0085c0fb: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0085c0fe: call 0x85be20 */ r_esp -= 4; W32(r_esp, 0x85c103u); f_0085be20();
    /* 0085c103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c104: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c105: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x85c10au); f_00858c80();
    /* 0085c10a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085c10d: jmp 0x85c169 */ goto L_0085c169;
L_0085c10f:; BB(0x0085c10f);
    /* 0085c10f: call 0x866204 */ r_esp -= 4; W32(r_esp, 0x85c114u); f_00866204();
    /* 0085c114: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c115: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c116: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c118: je 0x85c164 */ if (fZ) goto L_0085c164;
L_0085c11a:; BB(0x0085c11a);
    /* 0085c11a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c11c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c11d: call 0x866220 */ r_esp -= 4; W32(r_esp, 0x85c122u); f_00866220();
    /* 0085c122: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c123: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c126: je 0x85c164 */ if (fZ) goto L_0085c164;
L_0085c128:; BB(0x0085c128);
    /* 0085c128: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c12b: call 0x86623c */ r_esp -= 4; W32(r_esp, 0x85c130u); f_0086623c();
    /* 0085c130: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c131: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c133: je 0x85c164 */ if (fZ) goto L_0085c164;
L_0085c135:; BB(0x0085c135);
    /* 0085c135: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0085c138: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0085c13b: test byte ptr [esi], 4 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085c13e: je 0x85c153 */ if (fZ) goto L_0085c153;
L_0085c140:; BB(0x0085c140);
    /* 0085c140: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c142: call 0x85be20 */ r_esp -= 4; W32(r_esp, 0x85c147u); f_0085be20();
    /* 0085c147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c148: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c14b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c14c: call 0x8579ea */ r_esp -= 4; W32(r_esp, 0x85c151u); f_008579ea();
    /* 0085c151: jmp 0x85c169 */ goto L_0085c169;
L_0085c153:; BB(0x0085c153);
    /* 0085c153: call 0x85be20 */ r_esp -= 4; W32(r_esp, 0x85c158u); f_0085be20();
    /* 0085c158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c159: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c15c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c15d: call 0x8579ea */ r_esp -= 4; W32(r_esp, 0x85c162u); f_008579ea();
    /* 0085c162: jmp 0x85c169 */ goto L_0085c169;
L_0085c164:; BB(0x0085c164);
    /* 0085c164: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x85c169u); f_0085c88e();
L_0085c169:; BB(0x0085c169);
    /* 0085c169: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085c16d:; BB(0x0085c16d);
    /* 0085c16d: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85c172u); f_0085e5e7();
    /* 0085c172: ret  */ FN_RET(0x0085c003); r_esp += 4; return;
}

void f_0085c17f(void) /* ?CatchIt@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z */
{
    FN_ENTER(0x0085c17f);
    /* 0085c17f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085c180: mov ebp, esp */ r_ebp = r_esp;
    /* 0085c182: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c184: je 0x85c193 */ if (fZ) goto L_0085c193;
L_0085c186:; BB(0x0085c186);
    /* 0085c186: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c187: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c18a: mov edx, esi */ r_edx = r_esi;
    /* 0085c18c: call 0x85c003 */ r_esp -= 4; W32(r_esp, 0x85c191u); f_0085c003();
    /* 0085c191: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c192: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c193:; BB(0x0085c193);
    /* 0085c193: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c197: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c19a: jne 0x85c19f */ if (!fZ) goto L_0085c19f;
L_0085c19c:; BB(0x0085c19c);
    /* 0085c19c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c19d: jmp 0x85c1a2 */ goto L_0085c1a2;
L_0085c19f:; BB(0x0085c19f);
    /* 0085c19f: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
L_0085c1a2:; BB(0x0085c1a2);
    /* 0085c1a2: call 0x8579f1 */ r_esp -= 4; W32(r_esp, 0x85c1a7u); f_008579f1();
    /* 0085c1a7: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c1a9: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c1ac: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c1af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c1b0: call 0x85bd0d */ r_esp -= 4; W32(r_esp, 0x85c1b5u); f_0085bd0d();
    /* 0085c1b5: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0085c1b8: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c1bd: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c1c0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085c1c1: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c1c4: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0085c1c7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c1ca: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085c1cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c1ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c1d1: call 0x85be3f */ r_esp -= 4; W32(r_esp, 0x85c1d6u); f_0085be3f();
    /* 0085c1d6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085c1d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085c1db: je 0x85c1e4 */ if (fZ) goto L_0085c1e4;
L_0085c1dd:; BB(0x0085c1dd);
    /* 0085c1dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c1de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c1df: call 0x8579ba */ r_esp -= 4; W32(r_esp, 0x85c1e4u); f_008579ba();
L_0085c1e4:; BB(0x0085c1e4);
    /* 0085c1e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085c1e5: ret  */ FN_RET(0x0085c17f); r_esp += 4; return;
}

void f_0085c1e6(void) /* ?FindHandlerForForeignException@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@HH1@Z */
{
    FN_ENTER(0x0085c1e6);
    /* 0085c1e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085c1e7: mov ebp, esp */ r_ebp = r_esp;
    /* 0085c1e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c1ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c1eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c1ec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085c1ef: cmp dword ptr [esi], 0x80000003 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x80000003u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085c1f5: je 0x85c2a1 */ if (fZ) goto L_0085c2a1;
L_0085c1fb:; BB(0x0085c1fb);
    /* 0085c1fb: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85c200u); f_0085c583();
    /* 0085c200: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c204: je 0x85c225 */ if (fZ) goto L_0085c225;
L_0085c206:; BB(0x0085c206);
    /* 0085c206: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c209: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c20c: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c20f: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c212: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c215: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c218: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c219: call 0x857ab4 */ r_esp -= 4; W32(r_esp, 0x85c21eu); f_00857ab4();
    /* 0085c21e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085c221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085c223: jne 0x85c2a1 */ if (!fZ) goto L_0085c2a1;
L_0085c225:; BB(0x0085c225);
    /* 0085c225: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 0085c228: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c229: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0085c22c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c22d: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0085c230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c231: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c232: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c235: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c238: call 0x857c2d */ r_esp -= 4; W32(r_esp, 0x85c23du); f_00857c2d();
    /* 0085c23d: mov edi, eax */ r_edi = r_eax;
    /* 0085c23f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085c242: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085c245: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085c248: jae 0x85c2a0 */ if (!fC) goto L_0085c2a0;
L_0085c24a:; BB(0x0085c24a);
    /* 0085c24a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0085c24b:; BB(0x0085c24b);
    /* 0085c24b: cmp esi, dword ptr [edi] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085c24d: jl 0x85c291 */ if ((fS!=fO)) goto L_0085c291;
L_0085c24f:; BB(0x0085c24f);
    /* 0085c24f: cmp esi, dword ptr [edi + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085c252: jg 0x85c291 */ if ((!fZ&&fS==fO)) goto L_0085c291;
L_0085c254:; BB(0x0085c254);
    /* 0085c254: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0085c257: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 0085c25a: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085c25d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085c25f: mov ecx, dword ptr [eax - 0xc] */ r_ecx = R32((u32)(r_eax+0xfffffff4u));
    /* 0085c262: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c264: je 0x85c26c */ if (fZ) goto L_0085c26c;
L_0085c266:; BB(0x0085c266);
    /* 0085c266: cmp byte ptr [ecx + 8], 0 */ {  u32 a = R8((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085c26a: jne 0x85c291 */ if (!fZ) goto L_0085c291;
L_0085c26c:; BB(0x0085c26c);
    /* 0085c26c: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c26f: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0085c272: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c275: lea ebx, [eax - 0x10] */ r_ebx = (u32)(r_eax+0xfffffff0u);
    /* 0085c278: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c27b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085c27d: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c280: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c283: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c286: call 0x85c17f */ r_esp -= 4; W32(r_esp, 0x85c28bu); f_0085c17f();
    /* 0085c28b: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 0085c28e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085c291:; BB(0x0085c291);
    /* 0085c291: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c294: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085c297: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085c29a: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085c29d: jb 0x85c24b */ if (fC) goto L_0085c24b;
L_0085c29f:; BB(0x0085c29f);
    /* 0085c29f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0085c2a0:; BB(0x0085c2a0);
    /* 0085c2a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0085c2a1:; BB(0x0085c2a1);
    /* 0085c2a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085c2a2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085c2a3: ret  */ FN_RET(0x0085c1e6); r_esp += 4; return;
}

void f_0085c2a4(void) /* ?FindHandler@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@EH1@Z */
{
    FN_ENTER(0x0085c2a4);
    /* 0085c2a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085c2a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0085c2a7: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085c2aa: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085c2ad: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0085c2b0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085c2b3: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0085c2b7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085c2ba: jl 0x85c2c4 */ if ((fS!=fO)) goto L_0085c2c4;
L_0085c2bc:; BB(0x0085c2bc);
    /* 0085c2bc: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0085c2bf: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085c2c2: jl 0x85c2c9 */ if ((fS!=fO)) goto L_0085c2c9;
L_0085c2c4:; BB(0x0085c2c4);
    /* 0085c2c4: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x85c2c9u); f_0085c88e();
L_0085c2c9:; BB(0x0085c2c9);
    /* 0085c2c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c2ca: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0085c2cd: cmp dword ptr [ebx], 0xe06d7363 */ {  u32 a = R32((u32)(r_ebx)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c2d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c2d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c2d5: jne 0x85c47d */ if (!fZ) goto L_0085c47d;
L_0085c2db:; BB(0x0085c2db);
    /* 0085c2db: cmp dword ptr [ebx + 0x10], 3 */ {  u32 a = R32((u32)(r_ebx+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c2df: mov edi, 0x19930520 */ r_edi = 0x19930520u;
    /* 0085c2e4: jne 0x85c371 */ if (!fZ) goto L_0085c371;
L_0085c2ea:; BB(0x0085c2ea);
    /* 0085c2ea: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0085c2ed: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c2ef: je 0x85c2f8 */ if (fZ) goto L_0085c2f8;
L_0085c2f1:; BB(0x0085c2f1);
    /* 0085c2f1: cmp eax, 0x19930521 */ {  u32 a = r_eax; u32 b = 0x19930521u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c2f6: jne 0x85c371 */ if (!fZ) goto L_0085c371;
L_0085c2f8:; BB(0x0085c2f8);
    /* 0085c2f8: cmp dword ptr [ebx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c2fc: jne 0x85c371 */ if (!fZ) goto L_0085c371;
L_0085c2fe:; BB(0x0085c2fe);
    /* 0085c2fe: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85c303u); f_0085c583();
    /* 0085c303: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085c307: je 0x85c475 */ if (fZ) goto L_0085c475;
L_0085c30d:; BB(0x0085c30d);
    /* 0085c30d: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85c312u); f_0085c583();
    /* 0085c312: mov esi, dword ptr [eax + 0x7c] */ r_esi = R32((u32)(r_eax+0x7cu));
    /* 0085c315: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 0085c318: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85c31du); f_0085c583();
    /* 0085c31d: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 0085c323: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c325: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c326: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0085c329: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0085c32d: call 0x866204 */ r_esp -= 4; W32(r_esp, 0x85c332u); f_00866204();
    /* 0085c332: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c334: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c335: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c336: jne 0x85c33d */ if (!fZ) goto L_0085c33d;
L_0085c338:; BB(0x0085c338);
    /* 0085c338: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x85c33du); f_0085c88e();
L_0085c33d:; BB(0x0085c33d);
    /* 0085c33d: cmp dword ptr [esi], 0xe06d7363 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c343: jne 0x85c47a */ if (!fZ) goto L_0085c47a;
L_0085c349:; BB(0x0085c349);
    /* 0085c349: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085c34c: cmp dword ptr [eax + 0x10], 3 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c350: jne 0x85c36e */ if (!fZ) goto L_0085c36e;
L_0085c352:; BB(0x0085c352);
    /* 0085c352: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0085c355: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c357: je 0x85c360 */ if (fZ) goto L_0085c360;
L_0085c359:; BB(0x0085c359);
    /* 0085c359: cmp eax, 0x19930521 */ {  u32 a = r_eax; u32 b = 0x19930521u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c35e: jne 0x85c36e */ if (!fZ) goto L_0085c36e;
L_0085c360:; BB(0x0085c360);
    /* 0085c360: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085c363: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c367: jne 0x85c36e */ if (!fZ) goto L_0085c36e;
L_0085c369:; BB(0x0085c369);
    /* 0085c369: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x85c36eu); f_0085c88e();
L_0085c36e:; BB(0x0085c36e);
    /* 0085c36e: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_0085c371:; BB(0x0085c371);
    /* 0085c371: cmp dword ptr [ebx], 0xe06d7363 */ {  u32 a = R32((u32)(r_ebx)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c377: jne 0x85c47d */ if (!fZ) goto L_0085c47d;
L_0085c37d:; BB(0x0085c37d);
    /* 0085c37d: cmp dword ptr [ebx + 0x10], 3 */ {  u32 a = R32((u32)(r_ebx+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c381: jne 0x85c47d */ if (!fZ) goto L_0085c47d;
L_0085c387:; BB(0x0085c387);
    /* 0085c387: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0085c38a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c38c: je 0x85c399 */ if (fZ) goto L_0085c399;
L_0085c38e:; BB(0x0085c38e);
    /* 0085c38e: cmp eax, 0x19930521 */ {  u32 a = r_eax; u32 b = 0x19930521u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c393: jne 0x85c47d */ if (!fZ) goto L_0085c47d;
L_0085c399:; BB(0x0085c399);
    /* 0085c399: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085c39c: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0085c39f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c3a0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0085c3a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c3a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c3a5: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c3a8: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c3ab: call 0x857c2d */ r_esp -= 4; W32(r_esp, 0x85c3b0u); f_00857c2d();
    /* 0085c3b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0085c3b3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085c3b6: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085c3b9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0085c3bc: jae 0x85c465 */ if (!fC) goto L_0085c465;
L_0085c3c2:; BB(0x0085c3c2);
    /* 0085c3c2: jmp 0x85c3c7 */ goto L_0085c3c7;
L_0085c3c4:; BB(0x0085c3c4);
    /* 0085c3c4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_0085c3c7:; BB(0x0085c3c7);
    /* 0085c3c7: cmp dword ptr [eax], esi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085c3c9: jg 0x85c450 */ if ((!fZ&&fS==fO)) goto L_0085c450;
L_0085c3cf:; BB(0x0085c3cf);
    /* 0085c3cf: cmp esi, dword ptr [eax + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085c3d2: jg 0x85c450 */ if ((!fZ&&fS==fO)) goto L_0085c450;
L_0085c3d4:; BB(0x0085c3d4);
    /* 0085c3d4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0085c3d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085c3d9: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 0085c3dc: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0085c3df: jle 0x85c450 */ if ((fZ||fS!=fO)) goto L_0085c450;
L_0085c3e1:; BB(0x0085c3e1);
    /* 0085c3e1: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0085c3e4: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0085c3e7: lea edx, [ecx + 4] */ r_edx = (u32)(r_ecx+0x4u);
    /* 0085c3ea: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0085c3ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085c3ee: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0085c3f1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0085c3f4: jle 0x85c41a */ if ((fZ||fS!=fO)) goto L_0085c41a;
L_0085c3f6:; BB(0x0085c3f6);
    /* 0085c3f6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0085c3f9: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0085c3fb: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c3fe: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0085c401: call 0x85bca0 */ r_esp -= 4; W32(r_esp, 0x85c406u); f_0085bca0();
    /* 0085c406: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c408: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c409: jne 0x85c428 */ if (!fZ) goto L_0085c428;
L_0085c40b:; BB(0x0085c40b);
    /* 0085c40b: dec dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c40e: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c412: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085c415: jg 0x85c3f6 */ if ((!fZ&&fS==fO)) goto L_0085c3f6;
L_0085c417:; BB(0x0085c417);
    /* 0085c417: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_0085c41a:; BB(0x0085c41a);
    /* 0085c41a: dec dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c41d: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085c420: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085c424: jg 0x85c3e1 */ if ((!fZ&&fS==fO)) goto L_0085c3e1;
L_0085c426:; BB(0x0085c426);
    /* 0085c426: jmp 0x85c450 */ goto L_0085c450;
L_0085c428:; BB(0x0085c428);
    /* 0085c428: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c42b: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085c42e: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c431: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0085c434: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c437: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c43a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c43d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c43e: mov ebx, esi */ r_ebx = r_esi;
    /* 0085c440: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0085c443: call 0x85c17f */ r_esp -= 4; W32(r_esp, 0x85c448u); f_0085c17f();
    /* 0085c448: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0085c44b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085c44e: mov eax, edi */ r_eax = r_edi;
L_0085c450:; BB(0x0085c450);
    /* 0085c450: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c453: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0085c456: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085c459: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085c45c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0085c45f: jb 0x85c3c4 */ if (fC) goto L_0085c3c4;
L_0085c465:; BB(0x0085c465);
    /* 0085c465: cmp byte ptr [ebp + 0x1c], 0 */ {  u32 a = R8((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085c469: je 0x85c475 */ if (fZ) goto L_0085c475;
L_0085c46b:; BB(0x0085c46b);
    /* 0085c46b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c46d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c46e: call 0x85bddb */ r_esp -= 4; W32(r_esp, 0x85c473u); f_0085bddb();
    /* 0085c473: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c474: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c475:; BB(0x0085c475);
    /* 0085c475: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085c476: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085c477: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085c478: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085c479: ret  */ FN_RET(0x0085c2a4); r_esp += 4; return;
L_0085c47a:; BB(0x0085c47a);
    /* 0085c47a: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_0085c47d:; BB(0x0085c47d);
    /* 0085c47d: cmp byte ptr [ebp + 0x1c], 0 */ {  u32 a = R8((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085c481: jne 0x85c4a3 */ if (!fZ) goto L_0085c4a3;
L_0085c483:; BB(0x0085c483);
    /* 0085c483: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c486: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c489: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c48c: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c48f: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c492: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c495: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c498: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c499: call 0x85c1e6 */ r_esp -= 4; W32(r_esp, 0x85c49eu); f_0085c1e6();
    /* 0085c49e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085c4a1: jmp 0x85c475 */ goto L_0085c475;
L_0085c4a3:; BB(0x0085c4a3);
    /* 0085c4a3: jmp 0x85c859 */ f_0085c859(); return;
}

void f_0085c859(void) /* ?terminate@@YAXXZ */
{
    FN_ENTER(0x0085c859);
    /* 0085c859: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c85b: push 0x998148 */ { u32 v = 0x998148u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c860: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85c865u); f_0085e5ac();
    /* 0085c865: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85c86au); f_0085c583();
    /* 0085c86a: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c86e: je 0x85c889 */ if (fZ) goto L_0085c889;
L_0085c870:; BB(0x0085c870);
    /* 0085c870: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c874: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85c879u); f_0085c583();
    /* 0085c879: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x85c87cu); call_ind(t); }
    /* 0085c87c: jmp 0x85c885 */ goto L_0085c885;
L_0085c885:; BB(0x0085c885);
    /* 0085c885: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085c889:; BB(0x0085c889);
    /* 0085c889: jmp 0x863578 */ f_00863578(); return;
}

