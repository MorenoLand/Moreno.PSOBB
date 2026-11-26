#include "protos.h"

void f_00741020(void)
{
    FN_ENTER(0x00741020);
    /* 00741020: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741023: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741026: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00741029: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074102a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074102b: call 0x75e790 */ r_esp -= 4; W32(r_esp, 0x741030u); f_0075e790();
    /* 00741030: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741033: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741035: jne 0x741127 */ if (!fZ) goto L_00741127;
L_0074103b:; BB(0x0074103b);
    /* 0074103b: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00741041: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 00741044: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741046: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741048: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074104a: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00741051: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x741056u); f_007c1160();
    /* 00741056: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741058: jne 0x7410a6 */ if (!fZ) goto L_007410a6;
L_0074105a:; BB(0x0074105a);
    /* 0074105a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074105d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00741060: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00741067: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741069: je 0x741092 */ if (fZ) goto L_00741092;
L_0074106b:; BB(0x0074106b);
    /* 0074106b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074106e: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741071: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00741074: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00741077: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074107b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741080: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741084: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00741087: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074108e: mov esp, ebp */ r_esp = r_ebp;
    /* 00741090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741091: ret  */ FN_RET(0x00741020); r_esp += 4; return;
L_00741092:; BB(0x00741092);
    /* 00741092: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741094: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_0074109a:; BB(0x0074109a);
    /* 0074109a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074109d: mov byte ptr [eax + 0x1d], 0xb */ W8((u32)(r_eax+0x1du), 0xbu);
    /* 007410a1: jmp 0x7415a0 */ goto L_007415a0;
L_007410a6:; BB(0x007410a6);
    /* 007410a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007410a9: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007410ac: movsx edx, word ptr [ecx + 0x8e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8eu));
    /* 007410b3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007410b6: je 0x7417b8 */ if (fZ) goto L_007417b8;
L_007410bc:; BB(0x007410bc);
    /* 007410bc: movsx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 007410c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007410c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007410c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007410c8: call 0x741d28 */ r_esp -= 4; W32(r_esp, 0x7410cdu); f_00741d28();
    /* 007410cd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007410d0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 007410d3: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 007410d8: mov word ptr [eax + 0x8e], di */ W16((u32)(r_eax+0x8eu), (u16)r_edi);
    /* 007410df: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 007410e2: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007410e5: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7410eau); f_006c1bd4();
    /* 007410ea: mov esi, eax */ r_esi = r_eax;
    /* 007410ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007410ef: movsx edx, word ptr [edi + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8cu));
    /* 007410f6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 007410f9: mov ecx, edi */ r_ecx = r_edi;
    /* 007410fb: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x741100u); f_00736578();
    /* 00741100: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00741102:; BB(0x00741102);
    /* 00741102: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741105: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00741106: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741109: movsx eax, word ptr [esi + ebx*2 + 0x291c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*2+0x291cu));
    /* 00741111: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741112: call 0x75e7e0 */ r_esp -= 4; W32(r_esp, 0x741117u); f_0075e7e0();
    /* 00741117: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074111a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074111d: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00741120: jl 0x741102 */ if ((fS!=fO)) goto L_00741102;
L_00741122:; BB(0x00741122);
    /* 00741122: jmp 0x741790 */ goto L_00741790;
L_00741127:; BB(0x00741127);
    /* 00741127: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074112a: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074112d: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00741130: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x741135u); f_006c1bd4();
    /* 00741135: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00741138: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074113b: movsx edx, word ptr [edi + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8cu));
    /* 00741142: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00741145: mov ecx, edi */ r_ecx = r_edi;
    /* 00741147: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x74114cu); f_00736578();
    /* 0074114c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0074114e:; BB(0x0074114e);
    /* 0074114e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00741151: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00741152: movsx eax, word ptr [edx + ebx*2 + 0x291c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*2+0x291cu));
    /* 0074115a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074115d: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741161: call 0x75e7e0 */ r_esp -= 4; W32(r_esp, 0x741166u); f_0075e7e0();
    /* 00741166: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741169: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074116c: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074116f: jl 0x74114e */ if ((fS!=fO)) goto L_0074114e;
L_00741171:; BB(0x00741171);
    /* 00741171: jmp 0x7417cb */ goto L_007417cb;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00741020); r_esp += 4; return;
L_00741790:; BB(0x00741790);
    /* 00741790: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00741795: mov ecx, edi */ r_ecx = r_edi;
    /* 00741797: push 0x439a0000 */ { u32 v = 0x439a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074179c: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7417a1u); f_007361d0();
    /* 007417a1: mov ecx, edi */ r_ecx = r_edi;
    /* 007417a3: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7417a8u); f_00736458();
    /* 007417a8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007417ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007417ac: mov ecx, edi */ r_ecx = r_edi;
    /* 007417ae: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7417b3u); f_00736510();
    /* 007417b3: jmp 0x74105a */ goto L_0074105a;
L_007417b8:; BB(0x007417b8);
    /* 007417b8: movzx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)R16((u32)(r_ecx+0x8cu));
    /* 007417bf: mov word ptr [ecx + 0x8e], ax */ W16((u32)(r_ecx+0x8eu), (u16)r_eax);
    /* 007417c6: jmp 0x74105a */ goto L_0074105a;
L_007417cb:; BB(0x007417cb);
    /* 007417cb: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 007417d0: mov ecx, edi */ r_ecx = r_edi;
    /* 007417d2: push 0x439a0000 */ { u32 v = 0x439a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007417d7: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7417dcu); f_007361d0();
    /* 007417dc: mov ecx, edi */ r_ecx = r_edi;
    /* 007417de: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7417e3u); f_00736458();
    /* 007417e3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007417e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007417e7: mov ecx, edi */ r_ecx = r_edi;
    /* 007417e9: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7417eeu); f_00736510();
    /* 007417ee: jmp 0x74103b */ goto L_0074103b;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00741176(void)
{
    FN_ENTER(0x00741176);
    /* 00741176: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0074117c: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 0074117f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00741181: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00741183: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00741185: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00741187: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 0074118e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074118f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x741194u); f_007c1160();
    /* 00741194: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741196: je 0x7411ce */ if (fZ) goto L_007411ce;
L_00741198:; BB(0x00741198);
    /* 00741198: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074119a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074119b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074119c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074119d: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 007411a2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7411a7u); f_00814298();
    /* 007411a7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007411aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007411ad: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007411b0: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007411b3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007411b7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007411bc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007411c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007411c3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007411ca: mov esp, ebp */ r_esp = r_ebp;
    /* 007411cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007411cd: ret  */ FN_RET(0x00741176); r_esp += 4; return;
L_007411ce:; BB(0x007411ce);
    /* 007411ce: mov ecx, edi */ r_ecx = r_edi;
    /* 007411d0: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x7411d5u); f_0068fb00();
    /* 007411d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007411d7: jne 0x7411ed */ if (!fZ) goto L_007411ed;
L_007411d9:; BB(0x007411d9);
    /* 007411d9: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007411dc: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007411df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007411e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007411e9: mov esp, ebp */ r_esp = r_ebp;
    /* 007411eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007411ec: ret  */ FN_RET(0x00741176); r_esp += 4; return;
L_007411ed:; BB(0x007411ed);
    /* 007411ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007411f0: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 007411f3: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7411f8u); f_00737d90();
    /* 007411f8: mov ebx, eax */ r_ebx = r_eax;
    /* 007411fa: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007411fd: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741200: jne 0x741245 */ if (!fZ) goto L_00741245;
L_00741202:; BB(0x00741202);
    /* 00741202: call 0x6b08b8 */ r_esp -= 4; W32(r_esp, 0x741207u); f_006b08b8();
    /* 00741207: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741209: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_0074120f:; BB(0x0074120f);
    /* 0074120f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00741211: add edi, 0x8a0 */ {  u32 a = r_edi; u32 b = 0x8a0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00741217: mov ecx, edi */ r_ecx = r_edi;
    /* 00741219: call 0x697968 */ r_esp -= 4; W32(r_esp, 0x74121eu); f_00697968();
    /* 0074121e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741221: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741224: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00741227: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074122a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074122e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741233: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741237: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074123a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00741241: mov esp, ebp */ r_esp = r_ebp;
    /* 00741243: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741244: ret  */ FN_RET(0x00741176); r_esp += 4; return;
L_00741245:; BB(0x00741245);
    /* 00741245: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741248: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074124b: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x741250u); f_00719200();
    /* 00741250: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00741251: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741253: jne 0x741829 */ if (!fZ) goto L_00741829;
L_00741259:; BB(0x00741259);
    /* 00741259: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074125c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074125f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00741262: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00741265: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074126c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074126e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074126f: ret  */ FN_RET(0x00741176); r_esp += 4; return;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00741176); r_esp += 4; return;
L_00741829:; BB(0x00741829);
    /* 00741829: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074182a: mov ecx, edi */ r_ecx = r_edi;
    /* 0074182c: call 0x6959c0 */ r_esp -= 4; W32(r_esp, 0x741831u); f_006959c0();
    /* 00741831: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741834: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00741838: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074183d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741841: jmp 0x741259 */ goto L_00741259;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00741270(void)
{
    FN_ENTER(0x00741270);
    /* 00741270: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00741273: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00741276: jmp 0x74128d */ goto L_0074128d;
L_0074128d:; BB(0x0074128d);
    /* 0074128d: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x741292u); f_00737d90();
    /* 00741292: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741295: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00741298: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074129b: call 0x741c08 */ r_esp -= 4; W32(r_esp, 0x7412a0u); f_00741c08();
    /* 007412a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007412a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007412a6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007412a9: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007412b0: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007412b2: je 0x7412db */ if (fZ) goto L_007412db;
L_007412b4:; BB(0x007412b4);
    /* 007412b4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007412b7: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007412ba: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007412bd: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007412c0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007412c4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007412c9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007412cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007412d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007412d7: mov esp, ebp */ r_esp = r_ebp;
    /* 007412d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007412da: ret  */ FN_RET(0x00741270); r_esp += 4; return;
L_007412db:; BB(0x007412db);
    /* 007412db: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007412dd: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_007412e3:; BB(0x007412e3);
    /* 007412e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007412e6: mov byte ptr [eax + 0x1d], 8 */ W8((u32)(r_eax+0x1du), 0x8u);
    /* 007412ea: jmp 0x7415a0 */ goto L_007415a0;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00741270); r_esp += 4; return;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00741278(void)
{
    FN_ENTER(0x00741278);
    /* 00741278: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074127b: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0074127e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741280: je 0x741846 */ if (fZ) goto L_00741846;
L_00741286:; BB(0x00741286);
    /* 00741286: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00741289: mov byte ptr [eax + 0x1d], 7 */ W8((u32)(r_eax+0x1du), 0x7u);
    /* 0074128d: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x741292u); f_00737d90();
    /* 00741292: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741295: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00741298: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074129b: call 0x741c08 */ r_esp -= 4; W32(r_esp, 0x7412a0u); f_00741c08();
    /* 007412a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007412a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007412a6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007412a9: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007412b0: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007412b2: je 0x7412db */ if (fZ) goto L_007412db;
L_007412b4:; BB(0x007412b4);
    /* 007412b4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007412b7: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007412ba: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007412bd: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007412c0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007412c4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007412c9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007412cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007412d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007412d7: mov esp, ebp */ r_esp = r_ebp;
    /* 007412d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007412da: ret  */ FN_RET(0x00741278); r_esp += 4; return;
L_007412db:; BB(0x007412db);
    /* 007412db: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007412dd: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_007412e3:; BB(0x007412e3);
    /* 007412e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007412e6: mov byte ptr [eax + 0x1d], 8 */ W8((u32)(r_eax+0x1du), 0x8u);
    /* 007412ea: jmp 0x7415a0 */ goto L_007415a0;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00741278); r_esp += 4; return;
L_00741846:; BB(0x00741846);
    /* 00741846: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00741848: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74184du); f_0073ec50();
    /* 0074184d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741850: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741853: push 0x972f48 */ { u32 v = 0x972f48u; r_esp -= 4; W32(r_esp, v); }
    /* 00741858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741859: call 0x74aff8 */ r_esp -= 4; W32(r_esp, 0x74185eu); f_0074aff8();
    /* 0074185e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741861: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741864: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00741867: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0074186e: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00741874: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0074187b: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 0074187e: call 0x74b9b4 */ r_esp -= 4; W32(r_esp, 0x741883u); f_0074b9b4();
    /* 00741883: mov edx, ebx */ r_edx = r_ebx;
    /* 00741885: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00741888: mov dword ptr [eax + 0x5c], 0x1000000 */ W32((u32)(r_eax+0x5cu), 0x1000000u);
    /* 0074188f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00741892: jmp 0x741286 */ goto L_00741286;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_007412ef(void)
{
    FN_ENTER(0x007412ef);
    goto L_007412ef;
L_00741259:; BB(0x00741259);
    /* 00741259: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074125c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074125f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00741262: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00741265: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074126c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074126e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074126f: ret  */ FN_RET(0x007412ef); r_esp += 4; return;
L_007412ef:; BB(0x007412ef);
    /* 007412ef: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007412f2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 007412f5: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7412fau); f_00737d90();
    /* 007412fa: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007412fd: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 00741300: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741303: call 0x741c08 */ r_esp -= 4; W32(r_esp, 0x741308u); f_00741c08();
    /* 00741308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074130b: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00741311: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 00741314: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00741316: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00741318: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074131a: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074131c: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 00741323: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00741324: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x741329u); f_007c1160();
    /* 00741329: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074132b: je 0x741365 */ if (fZ) goto L_00741365;
L_0074132d:; BB(0x0074132d);
    /* 0074132d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074132f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741332: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00741337: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x74133cu); f_00814298();
    /* 0074133c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074133f: mov edx, ebx */ r_edx = r_ebx;
    /* 00741341: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741344: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00741347: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074134a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074134e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741353: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741357: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074135a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00741361: mov esp, ebp */ r_esp = r_ebp;
    /* 00741363: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741364: ret  */ FN_RET(0x007412ef); r_esp += 4; return;
L_00741365:; BB(0x00741365);
    /* 00741365: mov ecx, edi */ r_ecx = r_edi;
    /* 00741367: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x74136cu); f_0068fb00();
    /* 0074136c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074136e: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_00741374:; BB(0x00741374);
    /* 00741374: mov edx, ebx */ r_edx = r_ebx;
    /* 00741376: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00741379: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74137eu); f_00737d90();
    /* 0074137e: mov ebx, eax */ r_ebx = r_eax;
    /* 00741380: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741381: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x741386u); f_005c5528();
    /* 00741386: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00741387: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741389: je 0x741259 */ if (fZ) goto L_00741259;
L_0074138f:; BB(0x0074138f);
    /* 0074138f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741390: mov ecx, edi */ r_ecx = r_edi;
    /* 00741392: call 0x68dbbc */ r_esp -= 4; W32(r_esp, 0x741397u); f_0068dbbc();
    /* 00741397: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074139a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074139d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007413a0: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007413a3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007413a7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007413ac: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007413b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007413b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007413ba: mov esp, ebp */ r_esp = r_ebp;
    /* 007413bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007413bd: ret  */ FN_RET(0x007412ef); r_esp += 4; return;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x007412ef); r_esp += 4; return;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_007413be(void)
{
    FN_ENTER(0x007413be);
    /* 007413be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007413c1: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007413c4: jmp 0x7413db */ goto L_007413db;
L_007413db:; BB(0x007413db);
    /* 007413db: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7413e0u); f_00737d90();
    /* 007413e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007413e3: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 007413e6: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007413e9: call 0x741c08 */ r_esp -= 4; W32(r_esp, 0x7413eeu); f_00741c08();
    /* 007413ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007413f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007413f4: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007413f7: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007413fe: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741400: je 0x741429 */ if (fZ) goto L_00741429;
L_00741402:; BB(0x00741402);
    /* 00741402: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741405: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741408: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074140b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074140e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00741412: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741417: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0074141b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074141e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00741425: mov esp, ebp */ r_esp = r_ebp;
    /* 00741427: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741428: ret  */ FN_RET(0x007413be); r_esp += 4; return;
L_00741429:; BB(0x00741429);
    /* 00741429: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074142b: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_00741431:; BB(0x00741431);
    /* 00741431: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00741434: mov byte ptr [eax + 0x1d], 5 */ W8((u32)(r_eax+0x1du), 0x5u);
    /* 00741438: jmp 0x7415a0 */ goto L_007415a0;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x007413be); r_esp += 4; return;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_007413c6(void)
{
    FN_ENTER(0x007413c6);
    /* 007413c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007413c9: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007413cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007413ce: je 0x741897 */ if (fZ) goto L_00741897;
L_007413d4:; BB(0x007413d4);
    /* 007413d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007413d7: mov byte ptr [eax + 0x1d], 4 */ W8((u32)(r_eax+0x1du), 0x4u);
    /* 007413db: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7413e0u); f_00737d90();
    /* 007413e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007413e3: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 007413e6: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007413e9: call 0x741c08 */ r_esp -= 4; W32(r_esp, 0x7413eeu); f_00741c08();
    /* 007413ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007413f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007413f4: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007413f7: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007413fe: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741400: je 0x741429 */ if (fZ) goto L_00741429;
L_00741402:; BB(0x00741402);
    /* 00741402: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741405: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741408: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074140b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074140e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00741412: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741417: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0074141b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074141e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00741425: mov esp, ebp */ r_esp = r_ebp;
    /* 00741427: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741428: ret  */ FN_RET(0x007413c6); r_esp += 4; return;
L_00741429:; BB(0x00741429);
    /* 00741429: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074142b: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_00741431:; BB(0x00741431);
    /* 00741431: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00741434: mov byte ptr [eax + 0x1d], 5 */ W8((u32)(r_eax+0x1du), 0x5u);
    /* 00741438: jmp 0x7415a0 */ goto L_007415a0;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x007413c6); r_esp += 4; return;
L_00741897:; BB(0x00741897);
    /* 00741897: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00741899: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74189eu); f_0073ec50();
    /* 0074189e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007418a1: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007418a4: push 0x972f48 */ { u32 v = 0x972f48u; r_esp -= 4; W32(r_esp, v); }
    /* 007418a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007418aa: call 0x74aff8 */ r_esp -= 4; W32(r_esp, 0x7418afu); f_0074aff8();
    /* 007418af: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007418b2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007418b5: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 007418b8: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 007418bf: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007418c5: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 007418cc: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 007418cf: call 0x74b620 */ r_esp -= 4; W32(r_esp, 0x7418d4u); f_0074b620();
    /* 007418d4: mov edx, ebx */ r_edx = r_ebx;
    /* 007418d6: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 007418d9: mov dword ptr [eax + 0x5c], 0x1000000 */ W32((u32)(r_eax+0x5cu), 0x1000000u);
    /* 007418e0: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 007418e3: jmp 0x7413d4 */ goto L_007413d4;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_0074143d(void)
{
    FN_ENTER(0x0074143d);
    /* 0074143d: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00741443: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 00741446: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00741448: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074144a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074144c: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074144e: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 00741455: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00741456: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74145bu); f_007c1160();
    /* 0074145b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074145d: je 0x741495 */ if (fZ) goto L_00741495;
L_0074145f:; BB(0x0074145f);
    /* 0074145f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00741461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741462: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741464: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00741469: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x74146eu); f_00814298();
    /* 0074146e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741471: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741474: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741477: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074147a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074147e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741483: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741487: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074148a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00741491: mov esp, ebp */ r_esp = r_ebp;
    /* 00741493: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741494: ret  */ FN_RET(0x0074143d); r_esp += 4; return;
L_00741495:; BB(0x00741495);
    /* 00741495: mov ecx, edi */ r_ecx = r_edi;
    /* 00741497: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x74149cu); f_0068fb00();
    /* 0074149c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074149e: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_007414a4:; BB(0x007414a4);
    /* 007414a4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007414a7: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007414aa: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7414afu); f_00737d90();
    /* 007414af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007414b2: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007414b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007414b6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007414b8: call 0x74ad88 */ r_esp -= 4; W32(r_esp, 0x7414bdu); f_0074ad88();
    /* 007414bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007414c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007414c3: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007414c6: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007414c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007414cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007414d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007414d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007414d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007414e0: mov esp, ebp */ r_esp = r_ebp;
    /* 007414e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007414e3: ret  */ FN_RET(0x0074143d); r_esp += 4; return;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x0074143d); r_esp += 4; return;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_007414e4(void)
{
    FN_ENTER(0x007414e4);
    /* 007414e4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007414e7: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 007414ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007414ec: je 0x741972 */ if (fZ) goto L_00741972;
L_007414f2:; BB(0x007414f2);
    /* 007414f2: mov byte ptr [edx + 0x1d], 1 */ W8((u32)(r_edx+0x1du), 0x1u);
    /* 007414f6: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007414fc: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 007414ff: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741501: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741503: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741505: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0074150c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x741511u); f_007c1160();
    /* 00741511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741513: je 0x741549 */ if (fZ) goto L_00741549;
L_00741515:; BB(0x00741515);
    /* 00741515: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00741518: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0074151b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074151d: je 0x7418e8 */ if (fZ) goto L_007418e8;
L_00741523:; BB(0x00741523);
    /* 00741523: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x741528u); f_007127b0();
    /* 00741528: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074152b: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00741531: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00741538: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074153a: je 0x741549 */ if (fZ) goto L_00741549;
L_0074153c:; BB(0x0074153c);
    /* 0074153c: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00741540: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00741545: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_00741549:; BB(0x00741549);
    /* 00741549: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074154c: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0074154f: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x741554u); f_00737d90();
    /* 00741554: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741558: call 0x741bdc */ r_esp -= 4; W32(r_esp, 0x74155du); f_00741bdc();
    /* 0074155d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00741560: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00741563: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074156a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074156c: je 0x741595 */ if (fZ) goto L_00741595;
L_0074156e:; BB(0x0074156e);
    /* 0074156e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741571: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741574: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00741577: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074157a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074157e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741583: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741587: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074158a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00741591: mov esp, ebp */ r_esp = r_ebp;
    /* 00741593: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741594: ret  */ FN_RET(0x007414e4); r_esp += 4; return;
L_00741595:; BB(0x00741595);
    /* 00741595: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741597: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_00741599:; BB(0x00741599);
    /* 00741599: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074159c: mov byte ptr [eax + 0x1d], 2 */ W8((u32)(r_eax+0x1du), 0x2u);
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x007414e4); r_esp += 4; return;
L_007418e8:; BB(0x007418e8);
    /* 007418e8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 007418ef: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 007418f4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7418f9u); f_005caba4();
    /* 007418f9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007418fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007418ff: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00741902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741904: je 0x74196b */ if (fZ) goto L_0074196b;
L_00741906:; BB(0x00741906);
    /* 00741906: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0074190d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00741914: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00741916: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74191bu); f_0073ec50();
    /* 0074191b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074191c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074191f: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741922: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00741925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741926: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x74192bu); f_00725d18();
    /* 0074192b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00741932:; BB(0x00741932);
    /* 00741932: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00741935: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741938: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0074193b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00741942: mov eax, edx */ r_eax = r_edx;
    /* 00741944: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0074194a: mov dword ptr [eax + 0x44], 0xffffffff */ W32((u32)(r_eax+0x44u), 0xffffffffu);
    /* 00741951: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741953: je 0x741549 */ if (fZ) goto L_00741549;
L_00741959:; BB(0x00741959);
    /* 00741959: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0074195d: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00741962: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 00741966: jmp 0x741549 */ goto L_00741549;
L_0074196b:; BB(0x0074196b);
    /* 0074196b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074196d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00741970: jmp 0x741932 */ goto L_00741932;
L_00741972:; BB(0x00741972);
    /* 00741972: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00741974: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x741979u); f_0073ec50();
    /* 00741979: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074197c: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074197f: push 0x972f48 */ { u32 v = 0x972f48u; r_esp -= 4; W32(r_esp, v); }
    /* 00741984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741985: call 0x74aff8 */ r_esp -= 4; W32(r_esp, 0x74198au); f_0074aff8();
    /* 0074198a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074198d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741990: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00741993: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0074199a: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007419a0: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 007419a7: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 007419aa: call 0x74b510 */ r_esp -= 4; W32(r_esp, 0x7419afu); f_0074b510();
    /* 007419af: mov edx, ebx */ r_edx = r_ebx;
    /* 007419b1: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 007419b4: mov dword ptr [ecx + 0x5c], 0x1000000 */ W32((u32)(r_ecx+0x5cu), 0x1000000u);
    /* 007419bb: jmp 0x7414f2 */ goto L_007414f2;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_007414f6(void)
{
    FN_ENTER(0x007414f6);
    /* 007414f6: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007414fc: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 007414ff: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741501: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741503: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741505: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0074150c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x741511u); f_007c1160();
    /* 00741511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741513: je 0x741549 */ if (fZ) goto L_00741549;
L_00741515:; BB(0x00741515);
    /* 00741515: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00741518: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0074151b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074151d: je 0x7418e8 */ if (fZ) goto L_007418e8;
L_00741523:; BB(0x00741523);
    /* 00741523: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x741528u); f_007127b0();
    /* 00741528: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074152b: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00741531: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00741538: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074153a: je 0x741549 */ if (fZ) goto L_00741549;
L_0074153c:; BB(0x0074153c);
    /* 0074153c: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00741540: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00741545: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_00741549:; BB(0x00741549);
    /* 00741549: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074154c: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0074154f: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x741554u); f_00737d90();
    /* 00741554: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741558: call 0x741bdc */ r_esp -= 4; W32(r_esp, 0x74155du); f_00741bdc();
    /* 0074155d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00741560: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00741563: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074156a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074156c: je 0x741595 */ if (fZ) goto L_00741595;
L_0074156e:; BB(0x0074156e);
    /* 0074156e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741571: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741574: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00741577: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074157a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074157e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741583: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741587: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074158a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00741591: mov esp, ebp */ r_esp = r_ebp;
    /* 00741593: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741594: ret  */ FN_RET(0x007414f6); r_esp += 4; return;
L_00741595:; BB(0x00741595);
    /* 00741595: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741597: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_00741599:; BB(0x00741599);
    /* 00741599: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074159c: mov byte ptr [eax + 0x1d], 2 */ W8((u32)(r_eax+0x1du), 0x2u);
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x007414f6); r_esp += 4; return;
L_007418e8:; BB(0x007418e8);
    /* 007418e8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 007418ef: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 007418f4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7418f9u); f_005caba4();
    /* 007418f9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007418fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007418ff: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00741902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741904: je 0x74196b */ if (fZ) goto L_0074196b;
L_00741906:; BB(0x00741906);
    /* 00741906: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0074190d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00741914: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00741916: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74191bu); f_0073ec50();
    /* 0074191b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074191c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074191f: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741922: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00741925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741926: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x74192bu); f_00725d18();
    /* 0074192b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00741932:; BB(0x00741932);
    /* 00741932: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00741935: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741938: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0074193b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00741942: mov eax, edx */ r_eax = r_edx;
    /* 00741944: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0074194a: mov dword ptr [eax + 0x44], 0xffffffff */ W32((u32)(r_eax+0x44u), 0xffffffffu);
    /* 00741951: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741953: je 0x741549 */ if (fZ) goto L_00741549;
L_00741959:; BB(0x00741959);
    /* 00741959: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0074195d: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00741962: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 00741966: jmp 0x741549 */ goto L_00741549;
L_0074196b:; BB(0x0074196b);
    /* 0074196b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074196d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00741970: jmp 0x741932 */ goto L_00741932;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_007419d4(void) /* sub_7419D4 */
{
    FN_ENTER(0x007419d4);
    /* 007419d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007419d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007419d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007419d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007419d8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007419db: mov esi, ecx */ r_esi = r_ecx;
    /* 007419dd: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007419e0: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x7419e5u); f_00719140();
    /* 007419e5: mov ebx, eax */ r_ebx = r_eax;
    /* 007419e7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007419e9: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007419ec: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7419f1u); f_007be19c();
    /* 007419f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007419f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007419f6: je 0x741a00 */ if (fZ) goto L_00741a00;
L_007419f8:; BB(0x007419f8);
    /* 007419f8: mov edx, dword ptr [0xa0f684] */ r_edx = R32((u32)(0xa0f684u));
    /* 007419fe: jmp 0x741a06 */ goto L_00741a06;
L_00741a00:; BB(0x00741a00);
    /* 00741a00: mov edx, dword ptr [0xa0f688] */ r_edx = R32((u32)(0xa0f688u));
L_00741a06:; BB(0x00741a06);
    /* 00741a06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00741a07: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 00741a0a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741a0c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741a0e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741a10: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00741a17: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x741a1cu); f_007c1160();
    /* 00741a1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741a1e: jne 0x741a28 */ if (!fZ) goto L_00741a28;
L_00741a20:; BB(0x00741a20);
    /* 00741a20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00741a23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741a24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741a25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741a26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00741a27: ret  */ FN_RET(0x007419d4); r_esp += 4; return;
L_00741a28:; BB(0x00741a28);
    /* 00741a28: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741a2b: movsx ebp, byte ptr [esi + 0x1c] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 00741a2f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x741a34u); f_0068d5a8();
    /* 00741a34: mov ebx, eax */ r_ebx = r_eax;
    /* 00741a36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741a39: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741a3b: je 0x741ae7 */ if (fZ) goto L_00741ae7;
L_00741a41:; BB(0x00741a41);
    /* 00741a41: mov edx, ebx */ r_edx = r_ebx;
    /* 00741a43: add edx, 0x930 */ {  u32 a = r_edx; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00741a49: je 0x741ae7 */ if (fZ) goto L_00741ae7;
L_00741a4f:; BB(0x00741a4f);
    /* 00741a4f: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x741a54u); f_0080a640();
    /* 00741a54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741a56: jne 0x741ae7 */ if (!fZ) goto L_00741ae7;
L_00741a5c:; BB(0x00741a5c);
    /* 00741a5c: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00741a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741a61: je 0x741a6b */ if (fZ) goto L_00741a6b;
L_00741a63:; BB(0x00741a63);
    /* 00741a63: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00741a66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741a67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741a68: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741a69: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00741a6a: ret  */ FN_RET(0x007419d4); r_esp += 4; return;
L_00741a6b:; BB(0x00741a6b);
    /* 00741a6b: movsx edx, byte ptr [esi + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 00741a6f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00741a72: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00741a75: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00741a78: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00741a7b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00741a7f: jl 0x741a93 */ if ((fS!=fO)) goto L_00741a93;
L_00741a81:; BB(0x00741a81);
    /* 00741a81: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00741a84: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00741a87: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00741a8a: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
    /* 00741a8d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00741a91: jmp 0x741a99 */ goto L_00741a99;
L_00741a93:; BB(0x00741a93);
    /* 00741a93: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00741a96: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
L_00741a99:; BB(0x00741a99);
    /* 00741a99: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00741a9d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741aa0: je 0x741b1a */ if (fZ) goto L_00741b1a;
L_00741aa2:; BB(0x00741aa2);
    /* 00741aa2: mov eax, dword ptr [ebx + 0x964] */ r_eax = R32((u32)(r_ebx+0x964u));
    /* 00741aa8: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741aaa: je 0x741ab5 */ if (fZ) goto L_00741ab5;
L_00741aac:; BB(0x00741aac);
    /* 00741aac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00741ab0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741ab3: je 0x741aef */ if (fZ) goto L_00741aef;
L_00741ab5:; BB(0x00741ab5);
    /* 00741ab5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00741ab9: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741abb: jne 0x741ac5 */ if (!fZ) goto L_00741ac5;
L_00741abd:; BB(0x00741abd);
    /* 00741abd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00741ac0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741ac1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741ac2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741ac3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00741ac4: ret  */ FN_RET(0x007419d4); r_esp += 4; return;
L_00741ac5:; BB(0x00741ac5);
    /* 00741ac5: push 0xfffcffff */ { u32 v = 0xfffcffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00741aca: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00741acd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741ace: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741ad1: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x741ad6u); f_007be17c();
    /* 00741ad6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741ad9: mov ecx, esi */ r_ecx = r_esi;
    /* 00741adb: call 0x741b6c */ r_esp -= 4; W32(r_esp, 0x741ae0u); f_00741b6c();
    /* 00741ae0: mov ecx, esi */ r_ecx = r_esi;
    /* 00741ae2: call 0x742070 */ r_esp -= 4; W32(r_esp, 0x741ae7u); f_00742070();
L_00741ae7:; BB(0x00741ae7);
    /* 00741ae7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00741aea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741aeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741aec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741aed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00741aee: ret  */ FN_RET(0x007419d4); r_esp += 4; return;
L_00741aef:; BB(0x00741aef);
    /* 00741aef: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00741af2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741af5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00741af8: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 00741afb: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00741afe: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00741b02: jl 0x741b15 */ if ((fS!=fO)) goto L_00741b15;
L_00741b04:; BB(0x00741b04);
    /* 00741b04: mov eax, edx */ r_eax = r_edx;
    /* 00741b06: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741b09: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 00741b0c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00741b10: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
    /* 00741b13: jmp 0x741ab5 */ goto L_00741ab5;
L_00741b15:; BB(0x00741b15);
    /* 00741b15: mov byte ptr [esi + 0x1c], al */ W8((u32)(r_esi+0x1cu), (u8)r_eax);
    /* 00741b18: jmp 0x741ab5 */ goto L_00741ab5;
L_00741b1a:; BB(0x00741b1a);
    /* 00741b1a: mov ecx, esi */ r_ecx = r_esi;
    /* 00741b1c: call 0x742034 */ r_esp -= 4; W32(r_esp, 0x741b21u); f_00742034();
    /* 00741b21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741b23: jne 0x741b5b */ if (!fZ) goto L_00741b5b;
L_00741b25:; BB(0x00741b25);
    /* 00741b25: movsx edx, byte ptr [esi + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 00741b29: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00741b2c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00741b2f: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00741b32: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00741b35: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00741b39: jl 0x741b50 */ if ((fS!=fO)) goto L_00741b50;
L_00741b3b:; BB(0x00741b3b);
    /* 00741b3b: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00741b3e: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00741b41: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00741b44: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
    /* 00741b47: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00741b4b: jmp 0x741aa2 */ goto L_00741aa2;
L_00741b50:; BB(0x00741b50);
    /* 00741b50: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00741b53: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
    /* 00741b56: jmp 0x741aa2 */ goto L_00741aa2;
L_00741b5b:; BB(0x00741b5b);
    /* 00741b5b: movsx edx, byte ptr [esi + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 00741b5f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00741b62: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00741b66: jmp 0x741aa2 */ goto L_00741aa2;
}

void f_00741b6c(void) /* sub_741B6C */
{
    FN_ENTER(0x00741b6c);
    /* 00741b6c: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00741b6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741b71: je 0x741b87 */ if (fZ) goto L_00741b87;
L_00741b73:; BB(0x00741b73);
    /* 00741b73: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00741b77: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00741b7c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741b80: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_00741b87:; BB(0x00741b87);
    /* 00741b87: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00741b8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741b8c: je 0x741ba2 */ if (fZ) goto L_00741ba2;
L_00741b8e:; BB(0x00741b8e);
    /* 00741b8e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00741b92: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00741b97: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741b9b: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_00741ba2:; BB(0x00741ba2);
    /* 00741ba2: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00741ba5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741ba7: je 0x741bbd */ if (fZ) goto L_00741bbd;
L_00741ba9:; BB(0x00741ba9);
    /* 00741ba9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00741bad: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00741bb2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741bb6: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_00741bbd:; BB(0x00741bbd);
    /* 00741bbd: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00741bc0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741bc2: je 0x741bd8 */ if (fZ) goto L_00741bd8;
L_00741bc4:; BB(0x00741bc4);
    /* 00741bc4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00741bc8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741bcd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741bd1: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_00741bd8:; BB(0x00741bd8);
    /* 00741bd8: ret  */ FN_RET(0x00741b6c); r_esp += 4; return;
}

void f_00741bdc(void) /* sub_741BDC */
{
    FN_ENTER(0x00741bdc);
    /* 00741bdc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00741be0: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00741be3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741be5: je 0x741bfa */ if (fZ) goto L_00741bfa;
L_00741be7:; BB(0x00741be7);
    /* 00741be7: cmp eax, dword ptr [ecx + 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x44u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00741bea: jne 0x741bef */ if (!fZ) goto L_00741bef;
L_00741bec:; BB(0x00741bec);
    /* 00741bec: ret 4 */ FN_RET(0x00741bdc); r_esp += 8; return;
L_00741bef:; BB(0x00741bef);
    /* 00741bef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741bf0: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 00741bf3: mov ecx, edx */ r_ecx = r_edx;
    /* 00741bf5: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x741bfau); f_0072606c();
L_00741bfa:; BB(0x00741bfa);
    /* 00741bfa: ret 4 */ FN_RET(0x00741bdc); r_esp += 8; return;
}

void f_00741c00(void) /* sub_741C00 */
{
    FN_ENTER(0x00741c00);
    /* 00741c00: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00741c04: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00741c08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00741c09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00741c0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741c0b: mov ebx, eax */ r_ebx = r_eax;
    /* 00741c0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00741c0e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x741c13u); f_0068d5a8();
    /* 00741c13: mov ebp, eax */ r_ebp = r_eax;
    /* 00741c15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741c18: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741c1a: je 0x741c83 */ if (fZ) goto L_00741c83;
L_00741c1c:; BB(0x00741c1c);
    /* 00741c1c: mov esi, dword ptr [ebp + 0x45c] */ r_esi = R32((u32)(r_ebp+0x45cu));
    /* 00741c22: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741c24: je 0x741c83 */ if (fZ) goto L_00741c83;
L_00741c26:; BB(0x00741c26);
    /* 00741c26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741c27: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x741c2cu); f_005c5528();
    /* 00741c2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00741c2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741c2f: je 0x741c83 */ if (fZ) goto L_00741c83;
L_00741c31:; BB(0x00741c31);
    /* 00741c31: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 00741c38: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00741c3b: je 0x741c41 */ if (fZ) goto L_00741c41;
L_00741c3d:; BB(0x00741c3d);
    /* 00741c3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741c3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741c3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741c40: ret  */ FN_RET(0x00741c00); r_esp += 4; return;
L_00741c41:; BB(0x00741c41);
    /* 00741c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741c42: call 0x5de4d8 */ r_esp -= 4; W32(r_esp, 0x741c47u); f_005de4d8();
    /* 00741c47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00741c48: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00741c4b: je 0x741c83 */ if (fZ) goto L_00741c83;
L_00741c4d:; BB(0x00741c4d);
    /* 00741c4d: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 00741c50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741c51: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00741c53: lea ecx, [esi + 0x10b0] */ r_ecx = (u32)(r_esi+0x10b0u);
    /* 00741c59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00741c5a: call 0x7a3790 */ r_esp -= 4; W32(r_esp, 0x741c5fu); f_007a3790();
    /* 00741c5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741c61: je 0x741c83 */ if (fZ) goto L_00741c83;
L_00741c63:; BB(0x00741c63);
    /* 00741c63: movzx eax, word ptr [esi + 0x10b6] */ r_eax = (u32)R16((u32)(r_esi+0x10b6u));
    /* 00741c6a: mov byte ptr [esi + 0x10b4], 4 */ W8((u32)(r_esi+0x10b4u), 0x4u);
    /* 00741c71: mov byte ptr [esi + 0x10b5], bl */ W8((u32)(r_esi+0x10b5u), (u8)r_ebx);
    /* 00741c77: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741c7c: mov word ptr [esi + 0x10b6], ax */ W16((u32)(r_esi+0x10b6u), (u16)r_eax);
L_00741c83:; BB(0x00741c83);
    /* 00741c83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741c84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741c85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741c86: ret  */ FN_RET(0x00741c00); r_esp += 4; return;
}

void f_00741c08(void) /* sub_741C08 */
{
    FN_ENTER(0x00741c08);
    /* 00741c08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00741c09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00741c0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741c0b: mov ebx, eax */ r_ebx = r_eax;
    /* 00741c0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00741c0e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x741c13u); f_0068d5a8();
    /* 00741c13: mov ebp, eax */ r_ebp = r_eax;
    /* 00741c15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741c18: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741c1a: je 0x741c83 */ if (fZ) goto L_00741c83;
L_00741c1c:; BB(0x00741c1c);
    /* 00741c1c: mov esi, dword ptr [ebp + 0x45c] */ r_esi = R32((u32)(r_ebp+0x45cu));
    /* 00741c22: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741c24: je 0x741c83 */ if (fZ) goto L_00741c83;
L_00741c26:; BB(0x00741c26);
    /* 00741c26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741c27: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x741c2cu); f_005c5528();
    /* 00741c2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00741c2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741c2f: je 0x741c83 */ if (fZ) goto L_00741c83;
L_00741c31:; BB(0x00741c31);
    /* 00741c31: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 00741c38: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00741c3b: je 0x741c41 */ if (fZ) goto L_00741c41;
L_00741c3d:; BB(0x00741c3d);
    /* 00741c3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741c3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741c3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741c40: ret  */ FN_RET(0x00741c08); r_esp += 4; return;
L_00741c41:; BB(0x00741c41);
    /* 00741c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741c42: call 0x5de4d8 */ r_esp -= 4; W32(r_esp, 0x741c47u); f_005de4d8();
    /* 00741c47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00741c48: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00741c4b: je 0x741c83 */ if (fZ) goto L_00741c83;
L_00741c4d:; BB(0x00741c4d);
    /* 00741c4d: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 00741c50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741c51: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00741c53: lea ecx, [esi + 0x10b0] */ r_ecx = (u32)(r_esi+0x10b0u);
    /* 00741c59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00741c5a: call 0x7a3790 */ r_esp -= 4; W32(r_esp, 0x741c5fu); f_007a3790();
    /* 00741c5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741c61: je 0x741c83 */ if (fZ) goto L_00741c83;
L_00741c63:; BB(0x00741c63);
    /* 00741c63: movzx eax, word ptr [esi + 0x10b6] */ r_eax = (u32)R16((u32)(r_esi+0x10b6u));
    /* 00741c6a: mov byte ptr [esi + 0x10b4], 4 */ W8((u32)(r_esi+0x10b4u), 0x4u);
    /* 00741c71: mov byte ptr [esi + 0x10b5], bl */ W8((u32)(r_esi+0x10b5u), (u8)r_ebx);
    /* 00741c77: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741c7c: mov word ptr [esi + 0x10b6], ax */ W16((u32)(r_esi+0x10b6u), (u16)r_eax);
L_00741c83:; BB(0x00741c83);
    /* 00741c83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741c84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741c85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741c86: ret  */ FN_RET(0x00741c08); r_esp += 4; return;
}

void f_00741c88(void) /* sub_741C88 */
{
    FN_ENTER(0x00741c88);
    /* 00741c88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00741c89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00741c8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00741c8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741c8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00741c8d: mov edi, ecx */ r_edi = r_ecx;
    /* 00741c8f: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741c92: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00741c94: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741c98: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x741c9du); f_007354fc();
    /* 00741c9d: mov ebx, eax */ r_ebx = r_eax;
    /* 00741c9f: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00741ca6: mov dword ptr [ebx + 0x5c], 0x1000000 */ W32((u32)(r_ebx+0x5cu), 0x1000000u);
    /* 00741cad: or edx, 0xffff0110 */ {  u32 a = r_edx; u32 b = 0xffff0110u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00741cb3: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00741cba: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741cbd: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x741cc2u); f_006c1bd4();
    /* 00741cc2: mov esi, eax */ r_esi = r_eax;
    /* 00741cc4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741cc7: movsx ebp, word ptr [ebx + 0x8c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x8cu));
    /* 00741cce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00741cd0: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x741cd5u); f_00736578();
    /* 00741cd5: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00741cd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00741cda: mov ebp, eax */ r_ebp = r_eax;
L_00741cdc:; BB(0x00741cdc);
    /* 00741cdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741cdd: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741ce0: movsx edx, word ptr [esi + ebp*2 + 0x291c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*2+0x291cu));
    /* 00741ce8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00741ce9: call 0x75e7e0 */ r_esp -= 4; W32(r_esp, 0x741ceeu); f_0075e7e0();
    /* 00741cee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741cf1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00741cf4: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00741cf7: jl 0x741cdc */ if ((fS!=fO)) goto L_00741cdc;
L_00741cf9:; BB(0x00741cf9);
    /* 00741cf9: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00741cfc: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00741d00: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741d03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00741d05: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00741d07: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x741d0cu); f_007361d0();
    /* 00741d0c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00741d0e: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x741d13u); f_00736458();
    /* 00741d13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00741d14: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00741d16: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x741d1bu); f_00736510();
    /* 00741d1b: mov eax, ebx */ r_eax = r_ebx;
    /* 00741d1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00741d1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741d1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741d20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741d21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00741d22: ret 8 */ FN_RET(0x00741c88); r_esp += 12; return;
}

void f_00741d28(void) /* sub_741D28 */
{
    FN_ENTER(0x00741d28);
    /* 00741d28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00741d29: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00741d2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741d2b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00741d2d: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00741d31: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741d34: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x741d39u); f_006c1bd4();
    /* 00741d39: mov ecx, eax */ r_ecx = r_eax;
    /* 00741d3b: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00741d3f: movzx eax, word ptr [ecx + edi*2 + 0x291c] */ r_eax = (u32)R16((u32)(r_ecx+r_edi*2+0x291cu));
    /* 00741d47: movzx edx, word ptr [ecx + ebx*2 + 0x291c] */ r_edx = (u32)R16((u32)(r_ecx+r_ebx*2+0x291cu));
    /* 00741d4f: mov word ptr [ecx + edi*2 + 0x291c], dx */ W16((u32)(r_ecx+r_edi*2+0x291cu), (u16)r_edx);
    /* 00741d57: mov word ptr [ecx + ebx*2 + 0x291c], ax */ W16((u32)(r_ecx+r_ebx*2+0x291cu), (u16)r_eax);
    /* 00741d5f: mov dword ptr [ebp + 0x2c], 1 */ W32((u32)(r_ebp+0x2cu), 0x1u);
    /* 00741d66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00741d67: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741d68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741d69: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00741d6a: ret 8 */ FN_RET(0x00741d28); r_esp += 12; return;
}

void f_00741d70(void) /* sub_741D70 */
{
    FN_ENTER(0x00741d70);
    /* 00741d70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00741d71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00741d72: mov edi, ecx */ r_edi = r_ecx;
    /* 00741d74: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 00741d77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741d79: jne 0x741d80 */ if (!fZ) goto L_00741d80;
L_00741d7b:; BB(0x00741d7b);
    /* 00741d7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741d7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741d7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00741d7f: ret  */ FN_RET(0x00741d70); r_esp += 4; return;
L_00741d80:; BB(0x00741d80);
    /* 00741d80: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741d83: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x741d88u); f_0068d5a8();
    /* 00741d88: mov esi, eax */ r_esi = r_eax;
    /* 00741d8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741d8d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741d8f: je 0x741d7b */ if (fZ) goto L_00741d7b;
L_00741d91:; BB(0x00741d91);
    /* 00741d91: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 00741d96: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x741d9bu); f_0073ec50();
    /* 00741d9b: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741d9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00741da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741da1: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x741da6u); f_007354fc();
    /* 00741da6: mov edi, eax */ r_edi = r_eax;
    /* 00741da8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741dab: mov ecx, esi */ r_ecx = r_esi;
    /* 00741dad: call 0x68c470 */ r_esp -= 4; W32(r_esp, 0x741db2u); f_0068c470();
    /* 00741db2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741db4: je 0x741dd0 */ if (fZ) goto L_00741dd0;
L_00741db6:; BB(0x00741db6);
    /* 00741db6: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00741db8: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00741dba: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x741dbfu); f_00792fe8();
    /* 00741dbf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741dc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00741dc4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00741dc6: mov ecx, edi */ r_ecx = r_edi;
    /* 00741dc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741dc9: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x741dceu); f_00735c90();
    /* 00741dce: jmp 0x741de8 */ goto L_00741de8;
L_00741dd0:; BB(0x00741dd0);
    /* 00741dd0: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00741dd2: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00741dd4: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x741dd9u); f_00792fe8();
    /* 00741dd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741ddc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00741dde: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00741de0: mov ecx, edi */ r_ecx = r_edi;
    /* 00741de2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741de3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x741de8u); f_00735c90();
L_00741de8:; BB(0x00741de8);
    /* 00741de8: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 00741def: or edx, 0xffff00c0 */ {  u32 a = r_edx; u32 b = 0xffff00c0u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00741df5: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 00741dfc: mov ecx, edi */ r_ecx = r_edi;
    /* 00741dfe: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x741e03u); f_0073608c();
    /* 00741e03: mov eax, edi */ r_eax = r_edi;
    /* 00741e05: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741e06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00741e07: ret  */ FN_RET(0x00741d70); r_esp += 4; return;
}

void f_00741e08(void) /* sub_741E08 */
{
    FN_ENTER(0x00741e08);
    /* 00741e08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00741e09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741e0a: mov esi, ecx */ r_esi = r_ecx;
    /* 00741e0c: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741e0f: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x741e14u); f_00719140();
    /* 00741e14: mov ebx, eax */ r_ebx = r_eax;
    /* 00741e16: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00741e18: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741e1b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x741e20u); f_007be19c();
    /* 00741e20: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741e23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741e25: je 0x741e2f */ if (fZ) goto L_00741e2f;
L_00741e27:; BB(0x00741e27);
    /* 00741e27: mov edx, dword ptr [0xa0f684] */ r_edx = R32((u32)(0xa0f684u));
    /* 00741e2d: jmp 0x741e35 */ goto L_00741e35;
L_00741e2f:; BB(0x00741e2f);
    /* 00741e2f: mov edx, dword ptr [0xa0f688] */ r_edx = R32((u32)(0xa0f688u));
L_00741e35:; BB(0x00741e35);
    /* 00741e35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00741e36: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 00741e39: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741e3b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741e3d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741e3f: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00741e46: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x741e4bu); f_007c1160();
    /* 00741e4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741e4d: je 0x741e81 */ if (fZ) goto L_00741e81;
L_00741e4f:; BB(0x00741e4f);
    /* 00741e4f: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 00741e52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741e54: je 0x741e73 */ if (fZ) goto L_00741e73;
L_00741e56:; BB(0x00741e56);
    /* 00741e56: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 00741e59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741e5b: je 0x741e69 */ if (fZ) goto L_00741e69;
L_00741e5d:; BB(0x00741e5d);
    /* 00741e5d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x741e62u); f_007127b0();
    /* 00741e62: mov dword ptr [esi + 0x38], 0 */ W32((u32)(r_esi+0x38u), 0x0u);
L_00741e69:; BB(0x00741e69);
    /* 00741e69: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
    /* 00741e70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741e71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741e72: ret  */ FN_RET(0x00741e08); r_esp += 4; return;
L_00741e73:; BB(0x00741e73);
    /* 00741e73: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00741e76: mov dword ptr [esi + 0x48], 1 */ W32((u32)(r_esi+0x48u), 0x1u);
    /* 00741e7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741e7f: je 0x741e84 */ if (fZ) goto L_00741e84;
L_00741e81:; BB(0x00741e81);
    /* 00741e81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741e82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741e83: ret  */ FN_RET(0x00741e08); r_esp += 4; return;
L_00741e84:; BB(0x00741e84);
    /* 00741e84: mov ecx, esi */ r_ecx = r_esi;
    /* 00741e86: call 0x741d70 */ r_esp -= 4; W32(r_esp, 0x741e8bu); f_00741d70();
    /* 00741e8b: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00741e8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00741e8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741e90: ret  */ FN_RET(0x00741e08); r_esp += 4; return;
}

void f_00741e94(void) /* sub_741E94 */
{
    FN_ENTER(0x00741e94);
    /* 00741e94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00741e95: mov esi, ecx */ r_esi = r_ecx;
    /* 00741e97: movsx eax, byte ptr [esi + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 00741e9b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00741e9e: je 0x741ea9 */ if (fZ) goto L_00741ea9;
L_00741ea0:; BB(0x00741ea0);
    /* 00741ea0: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00741ea5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741ea6: ret 4 */ FN_RET(0x00741e94); r_esp += 8; return;
L_00741ea9:; BB(0x00741ea9);
    /* 00741ea9: movzx eax, byte ptr [esi + 0x1d] */ r_eax = (u32)R8((u32)(r_esi+0x1du));
    /* 00741ead: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00741eb0: je 0x741ebb */ if (fZ) goto L_00741ebb;
L_00741eb2:; BB(0x00741eb2);
    /* 00741eb2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00741eb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741eb8: ret 4 */ FN_RET(0x00741e94); r_esp += 8; return;
L_00741ebb:; BB(0x00741ebb);
    /* 00741ebb: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00741ebe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741ec0: je 0x741eb2 */ if (fZ) goto L_00741eb2;
L_00741ec2:; BB(0x00741ec2);
    /* 00741ec2: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00741ec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741ec7: je 0x741eb2 */ if (fZ) goto L_00741eb2;
L_00741ec9:; BB(0x00741ec9);
    /* 00741ec9: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 00741ecc: mov byte ptr [esi + 0x1d], 0x11 */ W8((u32)(r_esi+0x1du), 0x11u);
    /* 00741ed0: shl eax, 0x13 */ { u32 c = (19u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00741ed3: push 0xfff7ffff */ { u32 v = 0xfff7ffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00741ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741ed9: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741edc: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x741ee1u); f_007be17c();
    /* 00741ee1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741ee4: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00741ee7: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x741eecu); f_007365f4();
    /* 00741eec: mov ecx, dword ptr [eax*8 + 0x9f35e4] */ r_ecx = R32((u32)(r_eax*8+0x9f35e4u));
    /* 00741ef3: add ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00741ef7: call dword ptr [eax*8 + 0x9f35e0] */ { u32 t = R32((u32)(r_eax*8+0x9f35e0u)); r_esp -= 4; W32(r_esp, 0x741efeu); call_ind(t); }
    /* 00741efe: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00741f01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00741f02: ret 4 */ FN_RET(0x00741e94); r_esp += 8; return;
}

void f_00741f34(void) /* sub_741F34 */
{
    FN_ENTER(0x00741f34);
    /* 00741f34: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00741f37: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00741f3b: mov eax, 0x972f50 */ r_eax = 0x972f50u;
    /* 00741f40: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00741f42: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00741f45: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00741f48: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00741f4c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00741f4f: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00741f53: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00741f56: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00741f5a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00741f5d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00741f61: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00741f64: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00741f68: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00741f6b: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00741f6f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00741f72: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00741f76: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00741f79: movzx eax, word ptr [eax + 0x24] */ r_eax = (u32)R16((u32)(r_eax+0x24u));
    /* 00741f7d: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00741f81: mov word ptr [esp + 0x24], ax */ W16((u32)(r_esp+0x24u), (u16)r_eax);
    /* 00741f86: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00741f8a: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00741f8d: movzx ecx, word ptr [esp + 2] */ r_ecx = (u32)R16((u32)(r_esp+0x2u));
    /* 00741f92: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 00741f96: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00741f9b: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00741f9f: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 00741fa4: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 00741fa8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00741fad: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741fb1: movzx eax, word ptr [esp + 0xa] */ r_eax = (u32)R16((u32)(r_esp+0xau));
    /* 00741fb6: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 00741fba: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00741fbf: mov word ptr [edx + 0xc], ax */ W16((u32)(r_edx+0xcu), (u16)r_eax);
    /* 00741fc3: movzx eax, word ptr [esp + 0xe] */ r_eax = (u32)R16((u32)(r_esp+0xeu));
    /* 00741fc8: mov word ptr [edx + 0xe], ax */ W16((u32)(r_edx+0xeu), (u16)r_eax);
    /* 00741fcc: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00741fd1: mov word ptr [edx + 0x10], ax */ W16((u32)(r_edx+0x10u), (u16)r_eax);
    /* 00741fd5: movzx eax, word ptr [esp + 0x12] */ r_eax = (u32)R16((u32)(r_esp+0x12u));
    /* 00741fda: mov word ptr [edx + 0x12], ax */ W16((u32)(r_edx+0x12u), (u16)r_eax);
    /* 00741fde: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00741fe3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00741fe7: movzx eax, word ptr [esp + 0x16] */ r_eax = (u32)R16((u32)(r_esp+0x16u));
    /* 00741fec: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00741ff0: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00741ff5: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00741ff9: movzx eax, word ptr [esp + 0x1a] */ r_eax = (u32)R16((u32)(r_esp+0x1au));
    /* 00741ffe: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00742002: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 00742007: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 0074200b: movzx eax, word ptr [esp + 0x1e] */ r_eax = (u32)R16((u32)(r_esp+0x1eu));
    /* 00742010: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 00742014: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00742019: mov word ptr [edx + 0x20], ax */ W16((u32)(r_edx+0x20u), (u16)r_eax);
    /* 0074201d: movzx eax, word ptr [esp + 0x22] */ r_eax = (u32)R16((u32)(r_esp+0x22u));
    /* 00742022: mov word ptr [edx + 0x22], ax */ W16((u32)(r_edx+0x22u), (u16)r_eax);
    /* 00742026: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0074202b: mov word ptr [edx + 0x24], ax */ W16((u32)(r_edx+0x24u), (u16)r_eax);
    /* 0074202f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00742032: ret  */ FN_RET(0x00741f34); r_esp += 4; return;
}

