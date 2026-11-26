#include "protos.h"

void f_00542034(void)
{
    FN_ENTER(0x00542034);
    /* 00542034: push 0x923710 */ { u32 v = 0x923710u; r_esp -= 4; W32(r_esp, v); }
    /* 00542039: mov ecx, edi */ r_ecx = r_edi;
    /* 0054203b: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x542040u); f_00540c80();
    /* 00542040: mov dword ptr [edi + 0x4c0], 3 */ W32((u32)(r_edi+0x4c0u), 0x3u);
    /* 0054204a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054204c: mov dword ptr [edi + 0x4c4], edx */ W32((u32)(r_edi+0x4c4u), r_edx);
    /* 00542052: mov eax, 2 */ r_eax = 0x2u;
    /* 00542057: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542058: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542059: mov dword ptr [edi + 0x4c8], eax */ W32((u32)(r_edi+0x4c8u), r_eax);
    /* 0054205f: mov dword ptr [edi + 0x4cc], edx */ W32((u32)(r_edi+0x4ccu), r_edx);
    /* 00542065: mov dword ptr [edi + 0x4fc], eax */ W32((u32)(r_edi+0x4fcu), r_eax);
    /* 0054206b: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00542071: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00542072: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 00542077: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54207cu); f_00814298();
    /* 0054207c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054207f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00542081: ret  */ FN_RET(0x00542034); r_esp += 4; return;
}

void f_0054207f(void)
{
    FN_ENTER(0x0054207f);
    /* 0054207f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00542081: ret  */ FN_RET(0x0054207f); r_esp += 4; return;
}

void f_00542084(void) /* sub_542084 */
{
    FN_ENTER(0x00542084);
    /* 00542084: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0054208a: or eax, 0x100004 */ {  u32 a = r_eax; u32 b = 0x100004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054208f: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 00542095: ret  */ FN_RET(0x00542084); r_esp += 4; return;
}

void f_005420f4(void)
{
    FN_ENTER(0x005420f4);
    /* 005420f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005420f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005420f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005420f9: push 0x8d566e */ { u32 v = 0x8d566eu; r_esp -= 4; W32(r_esp, v); }
    /* 005420fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00542104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542105: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054210c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054210f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00542112: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00542115: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00542118: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0054211b: mov dword ptr [0xa73700], 0 */ W32((u32)(0xa73700u), 0x0u);
    /* 00542125: mov dword ptr [0xa73704], 0 */ W32((u32)(0xa73704u), 0x0u);
    /* 0054212f: mov dword ptr [0xa73708], 0 */ W32((u32)(0xa73708u), 0x0u);
    /* 00542139: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x54213eu); f_00520e6c();
    /* 0054213e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542140: je 0x54215b */ if (fZ) goto L_0054215b;
L_00542142:; BB(0x00542142);
    /* 00542142: push 0x923894 */ { u32 v = 0x923894u; r_esp -= 4; W32(r_esp, v); }
    /* 00542147: push 0x9bce98 */ { u32 v = 0x9bce98u; r_esp -= 4; W32(r_esp, v); }
    /* 0054214c: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x542151u); f_0051f674();
    /* 00542151: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542154: mov dword ptr [0xa73724], eax */ W32((u32)(0xa73724u), r_eax);
    /* 00542159: jmp 0x54216b */ goto L_0054216b;
L_0054215b:; BB(0x0054215b);
    /* 0054215b: push 0x9bce98 */ { u32 v = 0x9bce98u; r_esp -= 4; W32(r_esp, v); }
    /* 00542160: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x542165u); f_0051f6b0();
    /* 00542165: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542166: mov dword ptr [0xa73724], eax */ W32((u32)(0xa73724u), r_eax);
L_0054216b:; BB(0x0054216b);
    /* 0054216b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0054216d:; BB(0x0054216d);
    /* 0054216d: push dword ptr [ebx*4 + 0x923584] */ { u32 v = R32((u32)(r_ebx*4+0x923584u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542174: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x542179u); f_0077a684();
    /* 00542179: push dword ptr [ebx*4 + 0x923578] */ { u32 v = R32((u32)(r_ebx*4+0x923578u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542180: mov dword ptr [ebx*4 + 0xa7374c], eax */ W32((u32)(r_ebx*4+0xa7374cu), r_eax);
    /* 00542187: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x54218cu); f_0077a698();
    /* 0054218c: push dword ptr [ebx*4 + 0x92356c] */ { u32 v = R32((u32)(r_ebx*4+0x92356cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00542193: mov dword ptr [ebx*4 + 0xa73740], eax */ W32((u32)(r_ebx*4+0xa73740u), r_eax);
    /* 0054219a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x54219fu); f_0077a6b4();
    /* 0054219f: push dword ptr [ebx*4 + 0x923560] */ { u32 v = R32((u32)(r_ebx*4+0x923560u)); r_esp -= 4; W32(r_esp, v); }
    /* 005421a6: mov dword ptr [ebx*4 + 0xa73734], eax */ W32((u32)(r_ebx*4+0xa73734u), r_eax);
    /* 005421ad: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5421b2u); f_0077a6cc();
    /* 005421b2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005421b5: mov dword ptr [ebx*4 + 0xa73728], eax */ W32((u32)(r_ebx*4+0xa73728u), r_eax);
    /* 005421bc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005421bf: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005421c2: jl 0x54216d */ if ((fS!=fO)) goto L_0054216d;
L_005421c4:; BB(0x005421c4);
    /* 005421c4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005421c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005421c8: mov dword ptr [0xa73774], eax */ W32((u32)(0xa73774u), r_eax);
    /* 005421cd: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005421d0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5421d5u); f_008581c5();
    /* 005421d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005421d6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005421d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005421db: je 0x542397 */ if (fZ) goto L_00542397;
L_005421e1:; BB(0x005421e1);
    /* 005421e1: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 005421e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005421ef: mov eax, dword ptr [0xa73724] */ r_eax = R32((u32)(0xa73724u));
    /* 005421f4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005421f7: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005421fd: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542200: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x542205u); f_00511b74();
    /* 00542205: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00542208: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0054220f: mov dword ptr [0xa7376c], eax */ W32((u32)(0xa7376cu), r_eax);
    /* 00542214: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054221b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00542222: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00542224: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x542229u); f_008581c5();
    /* 00542229: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054222a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0054222d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054222f: je 0x542390 */ if (fZ) goto L_00542390;
L_00542235:; BB(0x00542235);
    /* 00542235: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0054223c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00542243: mov eax, dword ptr [0xa73724] */ r_eax = R32((u32)(0xa73724u));
    /* 00542248: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0054224b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00542251: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542254: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x542259u); f_00511b74();
    /* 00542259: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0054225c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00542263: mov dword ptr [0xa73768], eax */ W32((u32)(0xa73768u), r_eax);
    /* 00542268: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054226f: mov eax, dword ptr [0xa73724] */ r_eax = R32((u32)(0xa73724u));
    /* 00542274: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00542276: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0054227c: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 0054227f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542280: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x542285u); f_0078e934();
    /* 00542285: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00542287: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542288: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0054228b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054228e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00542291: mov dword ptr [0xa73764], edx */ W32((u32)(0xa73764u), r_edx);
    /* 00542297: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x54229cu); f_0078e934();
    /* 0054229c: mov ecx, dword ptr [0xa73724] */ r_ecx = R32((u32)(0xa73724u));
    /* 005422a2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005422a4: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005422a7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005422aa: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 005422b0: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005422b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005422b4: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005422b7: mov dword ptr [0xa73760], edx */ W32((u32)(0xa73760u), r_edx);
    /* 005422bd: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5422c2u); f_0078e934();
    /* 005422c2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005422c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005422c5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005422c8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005422cb: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005422ce: mov dword ptr [0xa7375c], edx */ W32((u32)(0xa7375cu), r_edx);
    /* 005422d4: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5422d9u); f_0078e934();
    /* 005422d9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005422dc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005422df: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005422e2: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005422e5: mov dword ptr [0xa73758], edx */ W32((u32)(0xa73758u), r_edx);
    /* 005422eb: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x5422f0u); f_0052d360();
    /* 005422f0: mov ecx, dword ptr [0x923514] */ r_ecx = R32((u32)(0x923514u));
    /* 005422f6: movzx ebx, word ptr [0x923518] */ r_ebx = (u32)R16((u32)(0x923518u));
    /* 005422fd: movzx esi, word ptr [0x92351a] */ r_esi = (u32)R16((u32)(0x92351au));
    /* 00542304: movzx edi, word ptr [0x92351c] */ r_edi = (u32)R16((u32)(0x92351cu));
    /* 0054230b: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00542310: mov edx, 0x18 */ r_edx = 0x18u;
    /* 00542315: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00542319: mov word ptr [ebp - 0x2e], dx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_edx);
    /* 0054231d: mov edx, dword ptr [0xa73724] */ r_edx = R32((u32)(0xa73724u));
    /* 00542323: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00542329: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0054232c: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 00542330: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00542332: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 00542336: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 0054233a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_0054233d:; BB(0x0054233d);
    /* 0054233d: movsx esi, word ptr [ebp + ebx*2 - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffd0u));
    /* 00542342: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00542345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542346: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0054234c: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0054234f: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00542354: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00542359: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054235c: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542360: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00542361: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x542366u); f_00608470();
    /* 00542366: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542369: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0054236c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054236f: jge 0x542379 */ if ((fS==fO)) goto L_00542379;
L_00542371:; BB(0x00542371);
    /* 00542371: mov edx, dword ptr [0xa73724] */ r_edx = R32((u32)(0xa73724u));
    /* 00542377: jmp 0x54233d */ goto L_0054233d;
L_00542379:; BB(0x00542379);
    /* 00542379: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054237c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054237f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542382: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542385: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054238c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054238e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054238f: ret  */ FN_RET(0x005420f4); r_esp += 4; return;
L_00542390:; BB(0x00542390);
    /* 00542390: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00542392: jmp 0x542263 */ f_00542263(); return;
L_00542397:; BB(0x00542397);
    /* 00542397: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00542399: jmp 0x54220f */ f_0054220f(); return;
}

void f_005423a0(void) /* sub_5423A0 */
{
    FN_ENTER(0x005423a0);
    /* 005423a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005423a1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005423a3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005423a7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005423aa: je 0x54241e */ if (fZ) goto L_0054241e;
L_005423ac:; BB(0x005423ac);
    /* 005423ac: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005423af: je 0x5423de */ if (fZ) goto L_005423de;
L_005423b1:; BB(0x005423b1);
    /* 005423b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005423b3: jne 0x54240d */ if (!fZ) goto L_0054240d;
L_005423b5:; BB(0x005423b5);
    /* 005423b5: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 005423bb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005423be: mov dword ptr [ebp + 0x478], eax */ W32((u32)(r_ebp+0x478u), r_eax);
    /* 005423c4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005423c7: je 0x542411 */ if (fZ) goto L_00542411;
L_005423c9:; BB(0x005423c9);
    /* 005423c9: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 005423cf: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005423d4: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 005423da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005423db: ret 4 */ FN_RET(0x005423a0); r_esp += 8; return;
L_005423de:; BB(0x005423de);
    /* 005423de: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 005423e4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005423e7: jl 0x54240d */ if ((fS!=fO)) goto L_0054240d;
L_005423e9:; BB(0x005423e9);
    /* 005423e9: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 005423ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005423f1: jne 0x542404 */ if (!fZ) goto L_00542404;
L_005423f3:; BB(0x005423f3);
    /* 005423f3: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 005423f9: or eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005423fe: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
L_00542404:; BB(0x00542404);
    /* 00542404: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00542406: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00542408: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54240du); f_0051f62c();
L_0054240d:; BB(0x0054240d);
    /* 0054240d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054240e: ret 4 */ FN_RET(0x005423a0); r_esp += 8; return;
L_00542411:; BB(0x00542411);
    /* 00542411: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00542414: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00542416: call dword ptr [eax + 0x1b4] */ { u32 t = R32((u32)(r_eax+0x1b4u)); r_esp -= 4; W32(r_esp, 0x54241cu); call_ind(t); }
    /* 0054241c: jmp 0x5423c9 */ goto L_005423c9;
L_0054241e:; BB(0x0054241e);
    /* 0054241e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00542420: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00542422: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00542429: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054242b: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x542430u); f_0051f664();
    /* 00542430: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00542433: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00542435: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x54243bu); call_ind(t); }
    /* 0054243b: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 00542441: mov dword ptr [ebp + 0x404], 4 */ W32((u32)(r_ebp+0x404u), 0x4u);
    /* 0054244b: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542450: mov dword ptr [ebp + 0x4c0], 1 */ W32((u32)(r_ebp+0x4c0u), 0x1u);
    /* 0054245a: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 00542460: mov dword ptr [ebp + 0x478], 0 */ W32((u32)(r_ebp+0x478u), 0x0u);
    /* 0054246a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054246b: ret 4 */ FN_RET(0x005423a0); r_esp += 8; return;
}

void f_00542470(void) /* sub_542470 */
{
    FN_ENTER(0x00542470);
    /* 00542470: fld dword ptr [ecx + 0x3f0] */ FPUSH(R_F32((u32)(r_ecx+0x3f0u)));
    /* 00542476: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00542479: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054247a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054247d: call 0x542498 */ r_esp -= 4; W32(r_esp, 0x542482u); f_00542498();
    /* 00542482: ret  */ FN_RET(0x00542470); r_esp += 4; return;
}

void f_00542484(void) /* sub_542484 */
{
    FN_ENTER(0x00542484);
    /* 00542484: fld dword ptr [ecx + 0x3f4] */ FPUSH(R_F32((u32)(r_ecx+0x3f4u)));
    /* 0054248a: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0054248d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054248e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00542491: call 0x542498 */ r_esp -= 4; W32(r_esp, 0x542496u); f_00542498();
    /* 00542496: ret  */ FN_RET(0x00542484); r_esp += 4; return;
}

void f_00542498(void) /* sub_542498 */
{
    FN_ENTER(0x00542498);
    /* 00542498: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00542499: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054249c: mov esi, ecx */ r_esi = r_ecx;
    /* 0054249e: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005424a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005424a4: call 0x53f240 */ r_esp -= 4; W32(r_esp, 0x5424a9u); f_0053f240();
    /* 005424a9: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005424ac: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005424af: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005424b2: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 005424b8: mov ecx, esi */ r_ecx = r_esi;
    /* 005424ba: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005424be: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005424c0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005424c4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005424c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005424c8: call dword ptr [edx + 0x19c] */ { u32 t = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, 0x5424ceu); call_ind(t); }
    /* 005424ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005424d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005424d2: ret 4 */ FN_RET(0x00542498); r_esp += 8; return;
}

void f_005424d8(void) /* sub_5424D8 */
{
    FN_ENTER(0x005424d8);
    /* 005424d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005424d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005424db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005424dd: push 0x8d5694 */ { u32 v = 0x8d5694u; r_esp -= 4; W32(r_esp, v); }
    /* 005424e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005424e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005424e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005424f0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005424f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005424f6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005424f9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005424fc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005424ff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00542502: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x542507u); f_00521840();
    /* 00542507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054250a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054250c: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x542512u); call_ind(t); }
    /* 00542512: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542515: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00542517: push 0x9bcecc */ { u32 v = 0x9bceccu; r_esp -= 4; W32(r_esp, v); }
    /* 0054251c: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x542521u); f_0051ff3c();
    /* 00542521: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542524: mov eax, dword ptr [0xa73724] */ r_eax = R32((u32)(0xa73724u));
    /* 00542529: mov dword ptr [ecx + 0xd8], 0x9bce00 */ W32((u32)(r_ecx+0xd8u), 0x9bce00u);
    /* 00542533: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00542539: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0054253f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00542541: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542542: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00542549: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x54254eu); f_007aa4c8();
    /* 0054254e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542551: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00542558: mov edx, dword ptr [ecx + 0x3cc] */ r_edx = R32((u32)(r_ecx+0x3ccu));
    /* 0054255e: push dword ptr [edx*4 + 0xa73734] */ { u32 v = R32((u32)(r_edx*4+0xa73734u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542565: push dword ptr [edx*4 + 0xa73740] */ { u32 v = R32((u32)(r_edx*4+0xa73740u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054256c: push dword ptr [edx*4 + 0xa7374c] */ { u32 v = R32((u32)(r_edx*4+0xa7374cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00542573: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0054257a: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x54257fu); f_00520c70();
    /* 0054257f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542582: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x542587u); f_00520370();
    /* 00542587: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054258a: mov dword ptr [ecx + 0x358], 0x9bceb0 */ W32((u32)(r_ecx+0x358u), 0x9bceb0u);
    /* 00542594: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00542596: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x54259bu); f_00520390();
    /* 0054259b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054259e: mov dword ptr [ecx + 0x384], 0x41200000 */ W32((u32)(r_ecx+0x384u), 0x41200000u);
    /* 005425a8: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005425aa: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5425afu); f_00521820();
    /* 005425af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005425b2: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005425b4: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5425b9u); f_005217fc();
    /* 005425b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005425bc: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5425c1u); f_00520bdc();
    /* 005425c1: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005425c4: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005425c7: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005425cc: mov edx, dword ptr [esi + 0x3cc] */ r_edx = R32((u32)(r_esi+0x3ccu));
    /* 005425d2: mov edi, dword ptr [esi + 0x3d4] */ r_edi = R32((u32)(r_esi+0x3d4u));
    /* 005425d8: mov ebx, dword ptr [edx*4 + 0xa73728] */ r_ebx = R32((u32)(r_edx*4+0xa73728u));
    /* 005425df: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005425e2: mov dword ptr [esi + 0x470], ebx */ W32((u32)(r_esi+0x470u), r_ebx);
    /* 005425e8: lea ecx, [esi + 0x3d4] */ r_ecx = (u32)(r_esi+0x3d4u);
    /* 005425ee: call dword ptr [edi + 8] */ { u32 t = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, 0x5425f1u); call_ind(t); }
    /* 005425f1: mov eax, esi */ r_eax = r_esi;
    /* 005425f3: mov dword ptr [eax + 0x3f0], 0x42340000 */ W32((u32)(r_eax+0x3f0u), 0x42340000u);
    /* 005425fd: mov dword ptr [eax + 0x3f4], 0x41700000 */ W32((u32)(r_eax+0x3f4u), 0x41700000u);
    /* 00542607: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x54260cu); f_008587a5();
    /* 0054260c: mov edx, esi */ r_edx = r_esi;
    /* 0054260e: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 00542611: fadd dword ptr [edx + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3f4u));
    /* 00542617: fstp dword ptr [edx + 0x400] */ W_F32((u32)(r_edx+0x400u), ST(0)); FPOP();
    /* 0054261d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054261f: mov dword ptr [edx + 0x404], 4 */ W32((u32)(r_edx+0x404u), 0x4u);
    /* 00542629: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0054262c: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0054262f: fdiv dword ptr [0x923558] */ ST(0) = ST(0) / R_F32((u32)(0x923558u));
    /* 00542635: fmul dword ptr [0x923540] */ ST(0) = ST(0) * R_F32((u32)(0x923540u));
    /* 0054263b: mov eax, dword ptr [edx + 0x3f4] */ r_eax = R32((u32)(r_edx+0x3f4u));
    /* 00542641: fadd dword ptr [0x923544] */ ST(0) = ST(0) + R_F32((u32)(0x923544u));
    /* 00542647: fstp dword ptr [edx + 0x3f8] */ W_F32((u32)(r_edx+0x3f8u), ST(0)); FPOP();
    /* 0054264d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00542650: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00542652: mov dword ptr [edx + 0x3fc], eax */ W32((u32)(r_edx+0x3fcu), r_eax);
    /* 00542658: mov dword ptr [edx + 0x408], ecx */ W32((u32)(r_edx+0x408u), r_ecx);
    /* 0054265e: mov dword ptr [edx + 0x40c], ecx */ W32((u32)(r_edx+0x40cu), r_ecx);
    /* 00542664: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x542669u); f_005caba4();
    /* 00542669: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054266c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054266f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00542672: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542674: je 0x542866 */ if (fZ) goto L_00542866;
L_0054267a:; BB(0x0054267a);
    /* 0054267a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00542681: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542688: mov eax, esi */ r_eax = r_esi;
    /* 0054268a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054268d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054268f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542690: call 0x542f88 */ r_esp -= 4; W32(r_esp, 0x542695u); f_00542f88();
    /* 00542695: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0054269c:; BB(0x0054269c);
    /* 0054269c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054269f: mov edx, esi */ r_edx = r_esi;
    /* 005426a1: mov dword ptr [edx + 0x410], eax */ W32((u32)(r_edx+0x410u), r_eax);
    /* 005426a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005426ae: mov ecx, edx */ r_ecx = r_edx;
    /* 005426b0: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005426b3: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005426b6: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 005426b9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005426bb: mov dword ptr [ecx + 0x414], esi */ W32((u32)(r_ecx+0x414u), r_esi);
    /* 005426c1: mov dword ptr [ecx + 0x48c], 0 */ W32((u32)(r_ecx+0x48cu), 0x0u);
    /* 005426cb: mov dword ptr [ecx + 0x418], esi */ W32((u32)(r_ecx+0x418u), r_esi);
    /* 005426d1: mov dword ptr [ecx + 0x41c], eax */ W32((u32)(r_ecx+0x41cu), r_eax);
    /* 005426d7: mov dword ptr [ecx + 0x420], edx */ W32((u32)(r_ecx+0x420u), r_edx);
    /* 005426dd: mov dword ptr [ecx + 0x490], 0 */ W32((u32)(r_ecx+0x490u), 0x0u);
    /* 005426e7: mov dword ptr [ecx + 0x424], ebx */ W32((u32)(r_ecx+0x424u), r_ebx);
    /* 005426ed: mov dword ptr [ecx + 0x428], eax */ W32((u32)(r_ecx+0x428u), r_eax);
    /* 005426f3: mov dword ptr [ecx + 0x42c], edx */ W32((u32)(r_ecx+0x42cu), r_edx);
    /* 005426f9: mov dword ptr [ecx + 0x494], 0 */ W32((u32)(r_ecx+0x494u), 0x0u);
    /* 00542703: mov dword ptr [ecx + 0x430], ebx */ W32((u32)(r_ecx+0x430u), r_ebx);
    /* 00542709: mov dword ptr [ecx + 0x434], eax */ W32((u32)(r_ecx+0x434u), r_eax);
    /* 0054270f: mov dword ptr [ecx + 0x438], edx */ W32((u32)(r_ecx+0x438u), r_edx);
    /* 00542715: mov dword ptr [ecx + 0x498], 0 */ W32((u32)(r_ecx+0x498u), 0x0u);
    /* 0054271f: mov dword ptr [ecx + 0x43c], ebx */ W32((u32)(r_ecx+0x43cu), r_ebx);
    /* 00542725: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
    /* 0054272b: mov dword ptr [ecx + 0x444], edx */ W32((u32)(r_ecx+0x444u), r_edx);
    /* 00542731: mov dword ptr [ecx + 0x49c], 0 */ W32((u32)(r_ecx+0x49cu), 0x0u);
    /* 0054273b: mov dword ptr [ecx + 0x448], ebx */ W32((u32)(r_ecx+0x448u), r_ebx);
    /* 00542741: mov dword ptr [ecx + 0x44c], eax */ W32((u32)(r_ecx+0x44cu), r_eax);
    /* 00542747: mov dword ptr [ecx + 0x450], edx */ W32((u32)(r_ecx+0x450u), r_edx);
    /* 0054274d: mov dword ptr [ecx + 0x4a0], 0 */ W32((u32)(r_ecx+0x4a0u), 0x0u);
    /* 00542757: mov dword ptr [ecx + 0x454], ebx */ W32((u32)(r_ecx+0x454u), r_ebx);
    /* 0054275d: mov dword ptr [ecx + 0x458], eax */ W32((u32)(r_ecx+0x458u), r_eax);
    /* 00542763: mov dword ptr [ecx + 0x45c], edx */ W32((u32)(r_ecx+0x45cu), r_edx);
    /* 00542769: mov dword ptr [ecx + 0x4b0], 0x3f800000 */ W32((u32)(r_ecx+0x4b0u), 0x3f800000u);
    /* 00542773: mov dword ptr [ecx + 0x460], ebx */ W32((u32)(r_ecx+0x460u), r_ebx);
    /* 00542779: mov dword ptr [ecx + 0x464], eax */ W32((u32)(r_ecx+0x464u), r_eax);
    /* 0054277f: mov dword ptr [ecx + 0x468], edx */ W32((u32)(r_ecx+0x468u), r_edx);
    /* 00542785: mov dword ptr [ecx + 0x4b4], 0 */ W32((u32)(r_ecx+0x4b4u), 0x0u);
    /* 0054278f: mov dword ptr [ecx + 0x46c], ebx */ W32((u32)(r_ecx+0x46cu), r_ebx);
    /* 00542795: mov dword ptr [ecx + 0x474], esi */ W32((u32)(r_ecx+0x474u), r_esi);
    /* 0054279b: mov dword ptr [ecx + 0x478], esi */ W32((u32)(r_ecx+0x478u), r_esi);
    /* 005427a1: mov dword ptr [ecx + 0x4b8], 0x3e4ccccd */ W32((u32)(r_ecx+0x4b8u), 0x3e4ccccdu);
    /* 005427ab: mov dword ptr [ecx + 0x47c], esi */ W32((u32)(r_ecx+0x47cu), r_esi);
    /* 005427b1: mov dword ptr [ecx + 0x480], esi */ W32((u32)(r_ecx+0x480u), r_esi);
    /* 005427b7: mov dword ptr [ecx + 0x484], esi */ W32((u32)(r_ecx+0x484u), r_esi);
    /* 005427bd: mov dword ptr [ecx + 0x4ac], 0 */ W32((u32)(r_ecx+0x4acu), 0x0u);
    /* 005427c7: mov dword ptr [ecx + 0x488], esi */ W32((u32)(r_ecx+0x488u), r_esi);
    /* 005427cd: mov dword ptr [ecx + 0x4a4], esi */ W32((u32)(r_ecx+0x4a4u), r_esi);
    /* 005427d3: mov dword ptr [ecx + 0x4a8], esi */ W32((u32)(r_ecx+0x4a8u), r_esi);
    /* 005427d9: mov dword ptr [ecx + 0x4c0], esi */ W32((u32)(r_ecx+0x4c0u), r_esi);
    /* 005427df: mov dword ptr [ecx + 0x4bc], esi */ W32((u32)(r_ecx+0x4bcu), r_esi);
    /* 005427e5: mov dword ptr [ecx + 0x4c4], esi */ W32((u32)(r_ecx+0x4c4u), r_esi);
    /* 005427eb: mov dword ptr [ecx + 0x4c8], esi */ W32((u32)(r_ecx+0x4c8u), r_esi);
    /* 005427f1: mov dword ptr [ecx + 0x4cc], esi */ W32((u32)(r_ecx+0x4ccu), r_esi);
    /* 005427f7: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x5427fcu); f_0055ce28();
    /* 005427fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005427ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00542801: push dword ptr [ecx + 0xa4] */ { u32 v = R32((u32)(r_ecx+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542807: call 0x5200e4 */ r_esp -= 4; W32(r_esp, 0x54280cu); f_005200e4();
    /* 0054280c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054280f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00542811: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00542813: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00542815: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0054281c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054281d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x542823u); call_ind(t); }
    /* 00542823: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00542826: mov eax, dword ptr [eax + 0x3c8] */ r_eax = R32((u32)(r_eax+0x3c8u));
    /* 0054282c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054282e: je 0x542840 */ if (fZ) goto L_00542840;
L_00542830:; BB(0x00542830);
    /* 00542830: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542833: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00542837: mov word ptr [edx + 0x4d0], ax */ W16((u32)(r_edx+0x4d0u), (u16)r_eax);
    /* 0054283e: jmp 0x54284f */ goto L_0054284f;
L_00542840:; BB(0x00542840);
    /* 00542840: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542843: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00542848: mov word ptr [edx + 0x4d0], ax */ W16((u32)(r_edx+0x4d0u), (u16)r_eax);
L_0054284f:; BB(0x0054284f);
    /* 0054284f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00542852: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00542855: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00542858: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054285b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00542862: mov esp, ebp */ r_esp = r_ebp;
    /* 00542864: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542865: ret  */ FN_RET(0x005424d8); r_esp += 4; return;
L_00542866:; BB(0x00542866);
    /* 00542866: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00542868: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054286b: jmp 0x54269c */ goto L_0054269c;
}

void f_00542870(void) /* sub_542870 */
{
    FN_ENTER(0x00542870);
    /* 00542870: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542871: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00542873: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00542875: call 0x542894 */ r_esp -= 4; W32(r_esp, 0x54287au); f_00542894();
    /* 0054287a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054287e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542880: jne 0x542886 */ if (!fZ) goto L_00542886;
L_00542882:; BB(0x00542882);
    /* 00542882: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00542883: ret 4 */ FN_RET(0x00542870); r_esp += 8; return;
L_00542886:; BB(0x00542886);
    /* 00542886: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542887: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x54288cu); f_005c2f74();
    /* 0054288c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054288d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054288e: ret 4 */ FN_RET(0x00542870); r_esp += 8; return;
}

void f_00542894(void) /* sub_542894 */
{
    FN_ENTER(0x00542894);
    /* 00542894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542895: mov ebp, esp */ r_ebp = r_esp;
    /* 00542897: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00542899: push 0x8d56b0 */ { u32 v = 0x8d56b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054289e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005428a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005428a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005428ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005428af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005428b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005428b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005428b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005428bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005428be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005428c1: mov dword ptr [ecx], 0xb030e0 */ W32((u32)(r_ecx), 0xb030e0u);
    /* 005428c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005428ce: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5428d3u); f_008171e8();
    /* 005428d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005428d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005428dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005428df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005428e0: ret  */ FN_RET(0x00542894); r_esp += 4; return;
}

void f_005428e4(void) /* sub_5428E4 */
{
    FN_ENTER(0x005428e4);
    /* 005428e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005428e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005428e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005428e9: call 0x542908 */ r_esp -= 4; W32(r_esp, 0x5428eeu); f_00542908();
    /* 005428ee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005428f2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005428f4: jne 0x5428fa */ if (!fZ) goto L_005428fa;
L_005428f6:; BB(0x005428f6);
    /* 005428f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005428f7: ret 4 */ FN_RET(0x005428e4); r_esp += 8; return;
L_005428fa:; BB(0x005428fa);
    /* 005428fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005428fb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x542900u); f_005c2f74();
    /* 00542900: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542901: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00542902: ret 4 */ FN_RET(0x005428e4); r_esp += 8; return;
}

void f_00542908(void) /* sub_542908 */
{
    FN_ENTER(0x00542908);
    /* 00542908: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542909: mov ebp, esp */ r_ebp = r_esp;
    /* 0054290b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054290d: push 0x8d56cc */ { u32 v = 0x8d56ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00542912: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00542918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542919: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00542920: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542923: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00542926: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00542929: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0054292c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0054292f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00542932: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00542935: mov dword ptr [ecx], 0xb030f0 */ W32((u32)(r_ecx), 0xb030f0u);
    /* 0054293b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00542942: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x542947u); f_008171e8();
    /* 00542947: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054294a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00542951: mov esp, ebp */ r_esp = r_ebp;
    /* 00542953: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542954: ret  */ FN_RET(0x00542908); r_esp += 4; return;
}

void f_00542958(void) /* sub_542958 */
{
    FN_ENTER(0x00542958);
    /* 00542958: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542959: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054295b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054295d: call 0x54297c */ r_esp -= 4; W32(r_esp, 0x542962u); f_0054297c();
    /* 00542962: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00542966: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542968: jne 0x54296e */ if (!fZ) goto L_0054296e;
L_0054296a:; BB(0x0054296a);
    /* 0054296a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054296b: ret 4 */ FN_RET(0x00542958); r_esp += 8; return;
L_0054296e:; BB(0x0054296e);
    /* 0054296e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054296f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x542974u); f_005c2f74();
    /* 00542974: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542975: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00542976: ret 4 */ FN_RET(0x00542958); r_esp += 8; return;
}

void f_0054297c(void) /* sub_54297C */
{
    FN_ENTER(0x0054297c);
    /* 0054297c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054297d: mov ebp, esp */ r_ebp = r_esp;
    /* 0054297f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00542981: push 0x8d56e8 */ { u32 v = 0x8d56e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00542986: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054298c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054298d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00542994: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542997: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054299a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0054299d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005429a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005429a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005429a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005429a9: mov dword ptr [ecx], 0xb03100 */ W32((u32)(r_ecx), 0xb03100u);
    /* 005429af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005429b6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5429bbu); f_008171e8();
    /* 005429bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005429be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005429c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005429c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005429c8: ret  */ FN_RET(0x0054297c); r_esp += 4; return;
}

void f_005429cc(void) /* sub_5429CC */
{
    FN_ENTER(0x005429cc);
    /* 005429cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005429cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005429cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005429d1: call 0x5429f0 */ r_esp -= 4; W32(r_esp, 0x5429d6u); f_005429f0();
    /* 005429d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005429da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005429dc: jne 0x5429e2 */ if (!fZ) goto L_005429e2;
L_005429de:; BB(0x005429de);
    /* 005429de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005429df: ret 4 */ FN_RET(0x005429cc); r_esp += 8; return;
L_005429e2:; BB(0x005429e2);
    /* 005429e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005429e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5429e8u); f_005c2f74();
    /* 005429e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005429e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005429ea: ret 4 */ FN_RET(0x005429cc); r_esp += 8; return;
}

void f_005429f0(void) /* sub_5429F0 */
{
    FN_ENTER(0x005429f0);
    /* 005429f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005429f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005429f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005429f5: push 0x8d5704 */ { u32 v = 0x8d5704u; r_esp -= 4; W32(r_esp, v); }
    /* 005429fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00542a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542a01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00542a08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542a0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00542a0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00542a11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00542a14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00542a17: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00542a1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542a21: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00542a24: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00542a27: mov dword ptr [eax], 0xb03110 */ W32((u32)(r_eax), 0xb03110u);
    /* 00542a2d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x542a32u); f_00857e98();
    /* 00542a32: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00542a35: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542a38: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00542a3f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x542a44u); f_00857e98();
    /* 00542a44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542a47: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00542a4a: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 00542a51: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00542a58: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x542a5du); f_008171e8();
    /* 00542a5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542a60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00542a67: mov esp, ebp */ r_esp = r_ebp;
    /* 00542a69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542a6a: ret  */ FN_RET(0x005429f0); r_esp += 4; return;
}

void f_00542a6c(void) /* sub_542A6C */
{
    FN_ENTER(0x00542a6c);
    /* 00542a6c: movzx edx, byte ptr [ecx + 0x37] */ r_edx = (u32)R8((u32)(r_ecx+0x37u));
    /* 00542a70: add edx, -0x10 */ {  u32 a = r_edx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00542a73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542a75: jge 0x542a86 */ if ((fS==fO)) goto L_00542a86;
L_00542a77:; BB(0x00542a77);
    /* 00542a77: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00542a7b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00542a7d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542a82: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_00542a86:; BB(0x00542a86);
    /* 00542a86: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00542a89: mov byte ptr [ecx + 0x37], dl */ W8((u32)(r_ecx+0x37u), (u8)r_edx);
    /* 00542a8c: mov byte ptr [ecx + 0x3b], dl */ W8((u32)(r_ecx+0x3bu), (u8)r_edx);
    /* 00542a8f: ret  */ FN_RET(0x00542a6c); r_esp += 4; return;
}

void f_00542a90(void) /* sub_542A90 */
{
    FN_ENTER(0x00542a90);
    /* 00542a90: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542a93: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00542a9b: lea eax, [ecx + 0x1c] */ r_eax = (u32)(r_ecx+0x1cu);
    /* 00542a9e: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 00542aa6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00542aa9: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00542aac: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00542ab0: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x542ab5u); f_007a902c();
    /* 00542ab5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00542ab8: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00542aba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00542abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542abd: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x542ac2u); f_0082c07c();
    /* 00542ac2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00542ac5: ret  */ FN_RET(0x00542a90); r_esp += 4; return;
}

void f_00542ac8(void) /* sub_542AC8 */
{
    FN_ENTER(0x00542ac8);
    /* 00542ac8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00542ac9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542aca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542acb: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542ace: mov esi, ecx */ r_esi = r_ecx;
    /* 00542ad0: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00542ad4: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00542ad8: mov ecx, esi */ r_ecx = r_esi;
    /* 00542ada: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542ade: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x542ae3u); f_008193cc();
    /* 00542ae3: mov dword ptr [esi], 0xb030f0 */ W32((u32)(r_esi), 0xb030f0u);
    /* 00542ae9: mov eax, dword ptr [0x9bcf48] */ r_eax = R32((u32)(0x9bcf48u));
    /* 00542aee: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00542af1: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 00542af4: mov dword ptr [esi + 0x24], ebp */ W32((u32)(r_esi+0x24u), r_ebp);
    /* 00542af7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00542af9: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00542afc: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00542aff: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00542b02: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00542b05: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 00542b08: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00542b0b: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00542b0e: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00542b11: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00542b14: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00542b17: mov dword ptr [esi + 0x3c], ebp */ W32((u32)(r_esi+0x3cu), r_ebp);
    /* 00542b1a: mov eax, 0xffff0033 */ r_eax = 0xffff0033u;
    /* 00542b1f: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00542b22: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00542b25: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x542b2au); f_008587a5();
    /* 00542b2a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00542b2d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00542b30: fdiv dword ptr [0x9238ec] */ ST(0) = ST(0) / R_F32((u32)(0x9238ecu));
    /* 00542b36: fmul dword ptr [0x9238e8] */ ST(0) = ST(0) * R_F32((u32)(0x9238e8u));
    /* 00542b3c: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00542b40: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00542b45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00542b4a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00542b4e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00542b52: fistp dword ptr [esi + 0x1c] */ W32((u32)(r_esi+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00542b55: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00542b59: mov eax, esi */ r_eax = r_esi;
    /* 00542b5b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00542b5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00542b5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542b60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00542b61: ret 0xc */ FN_RET(0x00542ac8); r_esp += 16; return;
}

void f_00542b64(void) /* sub_542B64 */
{
    FN_ENTER(0x00542b64);
    /* 00542b64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542b65: mov ebp, esp */ r_ebp = r_esp;
    /* 00542b67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00542b69: push 0x8d572c */ { u32 v = 0x8d572cu; r_esp -= 4; W32(r_esp, v); }
    /* 00542b6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00542b74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542b75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00542b7c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542b7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00542b82: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00542b85: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00542b88: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00542b8b: mov ebx, dword ptr [ecx + 0x20] */ r_ebx = R32((u32)(r_ecx+0x20u));
    /* 00542b8e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00542b90: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00542b93: lea eax, [ecx + 0x28] */ r_eax = (u32)(r_ecx+0x28u);
    /* 00542b96: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00542b99: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00542b9c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00542b9f: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00542ba2: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 00542ba5: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00542ba8: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00542bab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00542bad: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00542bb0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00542bb3: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00542bb6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00542bb9: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 00542bbc: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00542bbf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00542bc2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00542bc5: jle 0x542c0d */ if ((fZ||fS!=fO)) goto L_00542c0d;
L_00542bc7:; BB(0x00542bc7);
    /* 00542bc7: mov eax, ecx */ r_eax = r_ecx;
    /* 00542bc9: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00542bcb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00542bcd: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00542bd0: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00542bd3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x542bd8u); f_005caba4();
    /* 00542bd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542bd9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00542bdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542bde: je 0x542c12 */ if (fZ) goto L_00542c12;
L_00542be0:; BB(0x00542be0);
    /* 00542be0: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00542be7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542bee: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542bf1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00542bf4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00542bf7: lea eax, [ebx + 0x34] */ r_eax = (u32)(r_ebx+0x34u);
    /* 00542bfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542bfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542bfc: push dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542bff: call 0x542c24 */ r_esp -= 4; W32(r_esp, 0x542c04u); f_00542c24();
    /* 00542c04: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00542c0b: jmp 0x542c12 */ goto L_00542c12;
L_00542c0d:; BB(0x00542c0d);
    /* 00542c0d: mov edx, ecx */ r_edx = r_ecx;
    /* 00542c0f: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_00542c12:; BB(0x00542c12);
    /* 00542c12: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00542c15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542c18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00542c1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00542c21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542c22: ret  */ FN_RET(0x00542b64); r_esp += 4; return;
}

void f_00542c24(void) /* sub_542C24 */
{
    FN_ENTER(0x00542c24);
    /* 00542c24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00542c25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542c26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542c27: mov esi, ecx */ r_esi = r_ecx;
    /* 00542c29: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00542c2d: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00542c31: mov ecx, esi */ r_ecx = r_esi;
    /* 00542c33: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542c37: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x542c3cu); f_008193cc();
    /* 00542c3c: mov dword ptr [esi], 0xb030e0 */ W32((u32)(r_esi), 0xb030e0u);
    /* 00542c42: mov edx, dword ptr [0x9bcf40] */ r_edx = R32((u32)(0x9bcf40u));
    /* 00542c48: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00542c4b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00542c4d: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00542c50: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00542c53: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00542c56: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00542c59: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 00542c5c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00542c5f: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 00542c62: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00542c65: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00542c68: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00542c6b: mov dword ptr [esi + 0x30], ebp */ W32((u32)(r_esi+0x30u), r_ebp);
    /* 00542c6e: mov eax, 0xffff0033 */ r_eax = 0xffff0033u;
    /* 00542c73: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00542c76: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00542c79: mov eax, esi */ r_eax = r_esi;
    /* 00542c7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00542c7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542c7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00542c7e: ret 0xc */ FN_RET(0x00542c24); r_esp += 16; return;
}

void f_00542c84(void) /* sub_542C84 */
{
    FN_ENTER(0x00542c84);
    /* 00542c84: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542c87: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00542c8f: lea eax, [ecx + 0x28] */ r_eax = (u32)(r_ecx+0x28u);
    /* 00542c92: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 00542c9a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00542c9d: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00542ca0: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00542ca4: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x542ca9u); f_007a902c();
    /* 00542ca9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00542cac: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00542cae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00542cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542cb1: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x542cb6u); f_0082c07c();
    /* 00542cb6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00542cb9: ret  */ FN_RET(0x00542c84); r_esp += 4; return;
}

void f_00542cbc(void) /* sub_542CBC */
{
    FN_ENTER(0x00542cbc);
    /* 00542cbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542cbd: mov ebp, esp */ r_ebp = r_esp;
    /* 00542cbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00542cc1: push 0x8d5748 */ { u32 v = 0x8d5748u; r_esp -= 4; W32(r_esp, v); }
    /* 00542cc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00542ccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542ccd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00542cd4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542cd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00542cda: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00542cdd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00542ce0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00542ce3: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00542ce6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00542ce9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00542cec: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00542cef: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00542cf2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542cf3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00542cf6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00542cf9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x542cfeu); f_008193cc();
    /* 00542cfe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542d05: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00542d08: mov dword ptr [edx], 0xb03100 */ W32((u32)(r_edx), 0xb03100u);
    /* 00542d0e: mov eax, dword ptr [0x9bcf4c] */ r_eax = R32((u32)(0x9bcf4cu));
    /* 00542d13: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00542d16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00542d19: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 00542d1c: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00542d1e: mov dword ptr [edx + 0x38], esi */ W32((u32)(r_edx+0x38u), r_esi);
    /* 00542d21: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00542d24: mov dword ptr [edx + 0x3c], edi */ W32((u32)(r_edx+0x3cu), r_edi);
    /* 00542d27: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00542d2a: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00542d2d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00542d30: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00542d32: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 00542d35: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00542d38: mov dword ptr [edx + 0x48], ebx */ W32((u32)(r_edx+0x48u), r_ebx);
    /* 00542d3b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00542d3e: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00542d41: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 00542d44: mov dword ptr [edx + 0x60], ebx */ W32((u32)(r_edx+0x60u), r_ebx);
    /* 00542d47: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00542d4a: lea ecx, [edx + 0x5c] */ r_ecx = (u32)(r_edx+0x5cu);
    /* 00542d4d: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00542d50: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x542d55u); f_0082f9c4();
    /* 00542d55: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00542d58: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
    /* 00542d5f: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00542d62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542d63: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x542d68u); f_007828e4();
    /* 00542d68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00542d69: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00542d6c: fld dword ptr [0x9238e0] */ FPUSH(R_F32((u32)(0x9238e0u)));
    /* 00542d72: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00542d74: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00542d76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00542d78: fst dword ptr [edx + 0x34] */ W_F32((u32)(r_edx+0x34u), ST(0));
    /* 00542d7b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00542d7c: jae 0x542d8f */ if (!fC) goto L_00542d8f;
L_00542d7e:; BB(0x00542d7e);
    /* 00542d7e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00542d80: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 00542d83: mov eax, 0x41a00000 */ r_eax = 0x41a00000u;
    /* 00542d88: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00542d8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542d8d: jmp 0x542d9d */ goto L_00542d9d;
L_00542d8f:; BB(0x00542d8f);
    /* 00542d8f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00542d91: fst dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0));
    /* 00542d94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542d96: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
L_00542d9d:; BB(0x00542d9d);
    /* 00542d9d: fld dword ptr [0x9238dc] */ FPUSH(R_F32((u32)(0x9238dcu)));
    /* 00542da3: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00542da6: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00542da9: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 00542dac: fld dword ptr [edx + 0x48] */ FPUSH(R_F32((u32)(r_edx+0x48u)));
    /* 00542daf: fsub dword ptr [edx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x3cu));
    /* 00542db2: fld dword ptr [edx + 0x64] */ FPUSH(R_F32((u32)(r_edx+0x64u)));
    /* 00542db5: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00542db8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00542dba: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00542dbc: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00542dbe: fld dword ptr [edx + 0x5c] */ FPUSH(R_F32((u32)(r_edx+0x5cu)));
    /* 00542dc1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00542dc3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00542dc5: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00542dc7: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 00542dca: fstp dword ptr [edx + 0x5c] */ W_F32((u32)(r_edx+0x5cu), ST(0)); FPOP();
    /* 00542dcd: fstp dword ptr [edx + 0x64] */ W_F32((u32)(r_edx+0x64u), ST(0)); FPOP();
    /* 00542dd0: mov dword ptr [edx + 0x24], edi */ W32((u32)(r_edx+0x24u), r_edi);
    /* 00542dd3: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00542dd6: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00542dd9: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 00542ddc: mov dword ptr [edx + 0x54], edi */ W32((u32)(r_edx+0x54u), r_edi);
    /* 00542ddf: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00542de2: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00542de5: mov eax, edx */ r_eax = r_edx;
    /* 00542de7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542dea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00542df1: mov esp, ebp */ r_esp = r_ebp;
    /* 00542df3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542df4: ret 0xc */ FN_RET(0x00542cbc); r_esp += 16; return;
}

void f_00542df8(void) /* sub_542DF8 */
{
    FN_ENTER(0x00542df8);
    /* 00542df8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542df9: mov ebp, esp */ r_ebp = r_esp;
    /* 00542dfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00542dfd: push 0x8d5770 */ { u32 v = 0x8d5770u; r_esp -= 4; W32(r_esp, v); }
    /* 00542e02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00542e08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542e09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00542e10: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542e13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00542e16: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00542e19: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00542e1c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00542e1f: fld dword ptr [0x9238dc] */ FPUSH(R_F32((u32)(0x9238dcu)));
    /* 00542e25: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 00542e28: fcom dword ptr [ecx + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x34u))); 
    /* 00542e2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00542e2d: fst dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0));
    /* 00542e30: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00542e33: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00542e35: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00542e38: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00542e39: jbe 0x542e6a */ if ((fC||fZ)) goto L_00542e6a;
L_00542e3b:; BB(0x00542e3b);
    /* 00542e3b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00542e3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00542e3f: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
    /* 00542e42: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 00542e45: fld dword ptr [ebx + 0x48] */ FPUSH(R_F32((u32)(r_ebx+0x48u)));
    /* 00542e48: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 00542e4b: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 00542e4e: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00542e51: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 00542e54: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 00542e57: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 00542e5a: mov esi, 1 */ r_esi = 0x1u;
    /* 00542e5f: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00542e62: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00542e64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00542e66: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00542e68: jmp 0x542eaf */ goto L_00542eaf;
L_00542e6a:; BB(0x00542e6a);
    /* 00542e6a: mov edx, ecx */ r_edx = r_ecx;
    /* 00542e6c: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 00542e6f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00542e71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00542e73: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00542e76: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 00542e79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00542e7a: jbe 0x542e87 */ if ((fC||fZ)) goto L_00542e87;
L_00542e7c:; BB(0x00542e7c);
    /* 00542e7c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00542e7e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00542e80: mov eax, ecx */ r_eax = r_ecx;
    /* 00542e82: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 00542e85: jmp 0x542e99 */ goto L_00542e99;
L_00542e87:; BB(0x00542e87);
    /* 00542e87: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00542e89: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00542e8b: mov eax, ecx */ r_eax = r_ecx;
    /* 00542e8d: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 00542e90: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00542e92: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00542e94: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00542e96: fst dword ptr [eax + 0x54] */ W_F32((u32)(r_eax+0x54u), ST(0));
L_00542e99:; BB(0x00542e99);
    /* 00542e99: fld dword ptr [eax + 0x50] */ FPUSH(R_F32((u32)(r_eax+0x50u)));
    /* 00542e9c: fadd dword ptr [eax + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x5cu));
    /* 00542e9f: fld dword ptr [eax + 0x58] */ FPUSH(R_F32((u32)(r_eax+0x58u)));
    /* 00542ea2: fadd dword ptr [eax + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x64u));
    /* 00542ea5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00542ea7: fst dword ptr [eax + 0x50] */ W_F32((u32)(r_eax+0x50u), ST(0));
    /* 00542eaa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00542eac: fst dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0));
L_00542eaf:; BB(0x00542eaf);
    /* 00542eaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00542eb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00542eb4: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00542eb7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00542eb9: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00542ebc: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00542ebf: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00542ec2: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00542ec5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00542ec8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x542ecdu); f_0082f9c4();
    /* 00542ecd: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00542ed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542ed1: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x542ed6u); f_00782868();
    /* 00542ed6: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00542ed9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00542ee0: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 00542ee5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x542eeau); f_005caba4();
    /* 00542eea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542eed: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00542ef0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542ef2: je 0x542f31 */ if (fZ) goto L_00542f31;
L_00542ef4:; BB(0x00542ef4);
    /* 00542ef4: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00542efb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542f02: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 00542f08: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00542f0b: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00542f0e: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
    /* 00542f11: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542f14: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00542f18: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00542f1b: mov ecx, eax */ r_ecx = r_eax;
    /* 00542f1d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00542f21: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00542f25: call 0x6f37c0 */ r_esp -= 4; W32(r_esp, 0x542f2au); f_006f37c0();
    /* 00542f2a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00542f31:; BB(0x00542f31);
    /* 00542f31: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00542f38: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542f3b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00542f3e: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00542f41: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 00542f44: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 00542f47: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00542f4a: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00542f4d: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 00542f50: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542f52: je 0x542f71 */ if (fZ) goto L_00542f71;
L_00542f54:; BB(0x00542f54);
    /* 00542f54: mov edx, ebx */ r_edx = r_ebx;
    /* 00542f56: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00542f59: lea eax, [edx + 0x44] */ r_eax = (u32)(r_edx+0x44u);
    /* 00542f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542f5d: call 0x5410fc */ r_esp -= 4; W32(r_esp, 0x542f62u); f_005410fc();
    /* 00542f62: mov edx, ebx */ r_edx = r_ebx;
    /* 00542f64: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00542f68: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542f6d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00542f71:; BB(0x00542f71);
    /* 00542f71: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00542f74: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00542f77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542f7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00542f81: mov esp, ebp */ r_esp = r_ebp;
    /* 00542f83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542f84: ret  */ FN_RET(0x00542df8); r_esp += 4; return;
}

void f_00542e60(void)
{
    FN_ENTER(0x00542e60);
    goto L_00542e60;
L_00542e4a:; BB(0x00542e4a);
    /* 00542e4a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00542e4b: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 00542e4e: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00542e51: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 00542e54: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 00542e57: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 00542e5a: mov esi, 1 */ r_esi = 0x1u;
    /* 00542e5f: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_00542e60:; BB(0x00542e60);
    /* 00542e60: jne 0x542e4a */ if (!fZ) goto L_00542e4a;
L_00542e62:; BB(0x00542e62);
    /* 00542e62: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00542e64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00542e66: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00542e68: jmp 0x542eaf */ goto L_00542eaf;
L_00542eaf:; BB(0x00542eaf);
    /* 00542eaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00542eb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00542eb4: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00542eb7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00542eb9: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00542ebc: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00542ebf: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00542ec2: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00542ec5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00542ec8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x542ecdu); f_0082f9c4();
    /* 00542ecd: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00542ed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542ed1: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x542ed6u); f_00782868();
    /* 00542ed6: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00542ed9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00542ee0: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 00542ee5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x542eeau); f_005caba4();
    /* 00542eea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542eed: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00542ef0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542ef2: je 0x542f31 */ if (fZ) goto L_00542f31;
L_00542ef4:; BB(0x00542ef4);
    /* 00542ef4: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00542efb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542f02: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 00542f08: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00542f0b: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00542f0e: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
    /* 00542f11: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542f14: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00542f18: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00542f1b: mov ecx, eax */ r_ecx = r_eax;
    /* 00542f1d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00542f21: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00542f25: call 0x6f37c0 */ r_esp -= 4; W32(r_esp, 0x542f2au); f_006f37c0();
    /* 00542f2a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00542f31:; BB(0x00542f31);
    /* 00542f31: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00542f38: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542f3b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00542f3e: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00542f41: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 00542f44: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 00542f47: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00542f4a: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00542f4d: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 00542f50: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542f52: je 0x542f71 */ if (fZ) goto L_00542f71;
L_00542f54:; BB(0x00542f54);
    /* 00542f54: mov edx, ebx */ r_edx = r_ebx;
    /* 00542f56: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00542f59: lea eax, [edx + 0x44] */ r_eax = (u32)(r_edx+0x44u);
    /* 00542f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542f5d: call 0x5410fc */ r_esp -= 4; W32(r_esp, 0x542f62u); f_005410fc();
    /* 00542f62: mov edx, ebx */ r_edx = r_ebx;
    /* 00542f64: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00542f68: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00542f6d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00542f71:; BB(0x00542f71);
    /* 00542f71: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00542f74: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00542f77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542f7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00542f81: mov esp, ebp */ r_esp = r_ebp;
    /* 00542f83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542f84: ret  */ FN_RET(0x00542e60); r_esp += 4; return;
}

void f_00542f88(void) /* sub_542F88 */
{
    FN_ENTER(0x00542f88);
    /* 00542f88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542f89: mov ebp, esp */ r_ebp = r_esp;
    /* 00542f8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00542f8d: push 0x8d578c */ { u32 v = 0x8d578cu; r_esp -= 4; W32(r_esp, v); }
    /* 00542f92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00542f98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542f99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00542fa0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542fa3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00542fa6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00542fa9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00542fac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00542faf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00542fb2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542fb5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00542fb8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00542fbb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x542fc0u); f_008193cc();
    /* 00542fc0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542fc7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00542fca: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542fcd: mov dword ptr [ecx], 0xb03110 */ W32((u32)(r_ecx), 0xb03110u);
    /* 00542fd3: mov eax, dword ptr [0x9bcf54] */ r_eax = R32((u32)(0x9bcf54u));
    /* 00542fd8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00542fdb: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 00542fde: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00542fe0: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00542fe3: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00542fe6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00542fe8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00542fea: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00542fec: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00542fee: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00542ff0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542ff1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x542ff6u); f_008581c5();
    /* 00542ff6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00542ff9: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00542ffc: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00542fff: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 00543002: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00543004: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00543006: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00543007: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x54300cu); f_008581c5();
    /* 0054300c: mov ebx, eax */ r_ebx = r_eax;
    /* 0054300e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543011: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00543014: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00543017: mov dword ptr [eax + 0x2c], ebx */ W32((u32)(r_eax+0x2cu), r_ebx);
    /* 0054301a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0054301c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054301e: jle 0x54306a */ if ((fZ||fS!=fO)) goto L_0054306a;
L_00543020:; BB(0x00543020);
    /* 00543020: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00543022: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00543024:; BB(0x00543024);
    /* 00543024: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 00543027: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00543029: mov dword ptr [ebx + eax*4], edi */ W32((u32)(r_ebx+r_eax*4), r_edi);
    /* 0054302c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0054302f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00543032: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 00543035: mov dword ptr [ebx + eax*4 + 4], 0 */ W32((u32)(r_ebx+r_eax*4+0x4u), 0x0u);
    /* 0054303d: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00543040: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 00543043: mov dword ptr [ebx + eax*4 + 8], ecx */ W32((u32)(r_ebx+r_eax*4+0x8u), r_ecx);
    /* 00543047: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054304a: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 0054304d: mov dword ptr [ebx + eax*4 + 0xc], edx */ W32((u32)(r_ebx+r_eax*4+0xcu), r_edx);
    /* 00543051: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00543054: mov edi, dword ptr [ebx + 0x2c] */ r_edi = R32((u32)(r_ebx+0x2cu));
    /* 00543057: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00543059: mov dword ptr [edi + eax*4 + 0x10], ebx */ W32((u32)(r_edi+r_eax*4+0x10u), r_ebx);
    /* 0054305d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00543060: cmp esi, dword ptr [eax + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00543063: jge 0x54306a */ if ((fS==fO)) goto L_0054306a;
L_00543065:; BB(0x00543065);
    /* 00543065: mov ebx, dword ptr [eax + 0x2c] */ r_ebx = R32((u32)(r_eax+0x2cu));
    /* 00543068: jmp 0x543024 */ goto L_00543024;
L_0054306a:; BB(0x0054306a);
    /* 0054306a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054306d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00543070: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00543073: mov dword ptr [eax + 0x30], 0x30 */ W32((u32)(r_eax+0x30u), 0x30u);
    /* 0054307a: mov dword ptr [eax + 0x34], 0x3f59999a */ W32((u32)(r_eax+0x34u), 0x3f59999au);
    /* 00543081: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00543084: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054308b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054308d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054308e: ret 8 */ FN_RET(0x00542f88); r_esp += 12; return;
}

