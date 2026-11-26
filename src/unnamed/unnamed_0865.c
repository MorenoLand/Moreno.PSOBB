#include "protos.h"

void f_0086511c(void) /* __setargv */
{
    FN_ENTER(0x0086511c);
    /* 0086511c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086511d: mov ebp, esp */ r_ebp = r_esp;
    /* 0086511f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00865120: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00865121: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865122: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865123: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865124: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00865126: cmp dword ptr [0xaf1bd4], edi */ {  u32 a = R32((u32)(0xaf1bd4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086512c: jne 0x865133 */ if (!fZ) goto L_00865133;
L_0086512e:; BB(0x0086512e);
    /* 0086512e: call 0x866787 */ r_esp -= 4; W32(r_esp, 0x865133u); f_00866787();
L_00865133:; BB(0x00865133);
    /* 00865133: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00865138: mov esi, 0xae7d00 */ r_esi = 0xae7d00u;
    /* 0086513d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086513e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086513f: mov byte ptr [0xae7e04], 0 */ W8((u32)(0xae7e04u), 0x0u);
    /* 00865146: call dword ptr [0x8f81ec] */ { u32 t = R32((u32)(0x8f81ecu)); r_esp -= 4; W32(r_esp, 0x86514cu); call_ind(t); }
    /* 0086514c: mov eax, dword ptr [0xaf1bc4] */ r_eax = R32((u32)(0xaf1bc4u));
    /* 00865151: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865153: mov dword ptr [0xae7a40], esi */ W32((u32)(0xae7a40u), r_esi);
    /* 00865159: je 0x865162 */ if (fZ) goto L_00865162;
L_0086515b:; BB(0x0086515b);
    /* 0086515b: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086515e: mov ebx, eax */ r_ebx = r_eax;
    /* 00865160: jne 0x865164 */ if (!fZ) goto L_00865164;
L_00865162:; BB(0x00865162);
    /* 00865162: mov ebx, esi */ r_ebx = r_esi;
L_00865164:; BB(0x00865164);
    /* 00865164: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00865167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865169: lea esi, [ebp - 8] */ r_esi = (u32)(r_ebp+0xfffffff8u);
    /* 0086516c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086516e: mov eax, ebx */ r_eax = r_ebx;
    /* 00865170: call 0x864fb0 */ r_esp -= 4; W32(r_esp, 0x865175u); f_00864fb0();
    /* 00865175: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00865178: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086517b: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0086517e: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865181: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x865186u); f_00859c55();
    /* 00865186: mov edi, eax */ r_edi = r_eax;
    /* 00865188: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086518b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086518d: jne 0x865194 */ if (!fZ) goto L_00865194;
L_0086518f:; BB(0x0086518f);
    /* 0086518f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00865192: jmp 0x8651b9 */ goto L_008651b9;
L_00865194:; BB(0x00865194);
    /* 00865194: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00865197: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865198: lea ecx, [esi + edi] */ r_ecx = (u32)(r_esi+r_edi);
    /* 0086519b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086519c: lea esi, [ebp - 8] */ r_esi = (u32)(r_ebp+0xfffffff8u);
    /* 0086519f: mov eax, ebx */ r_eax = r_ebx;
    /* 008651a1: call 0x864fb0 */ r_esp -= 4; W32(r_esp, 0x8651a6u); f_00864fb0();
    /* 008651a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008651a9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008651aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008651ab: mov dword ptr [0xae7a24], eax */ W32((u32)(0xae7a24u), r_eax);
    /* 008651b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008651b1: mov dword ptr [0xae7a28], edi */ W32((u32)(0xae7a28u), r_edi);
    /* 008651b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008651b9:; BB(0x008651b9);
    /* 008651b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008651ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008651bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008651bc: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008651bd: ret  */ FN_RET(0x0086511c); r_esp += 4; return;
}

void f_008651be(void) /* ___crtGetEnvironmentStringsA */
{
    FN_ENTER(0x008651be);
    /* 008651be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008651bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008651c0: mov eax, dword ptr [0xae7e08] */ r_eax = R32((u32)(0xae7e08u));
    /* 008651c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008651c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008651c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008651c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008651c9: mov edi, dword ptr [0x8f8280] */ r_edi = R32((u32)(0x8f8280u));
    /* 008651cf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008651d1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008651d3: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008651d5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008651d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008651d8: jne 0x865207 */ if (!fZ) goto L_00865207;
L_008651da:; BB(0x008651da);
    /* 008651da: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8651dcu); call_ind(t); }
    /* 008651dc: mov esi, eax */ r_esi = r_eax;
    /* 008651de: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008651e0: je 0x8651ee */ if (fZ) goto L_008651ee;
L_008651e2:; BB(0x008651e2);
    /* 008651e2: mov dword ptr [0xae7e08], 1 */ W32((u32)(0xae7e08u), 0x1u);
    /* 008651ec: jmp 0x86520c */ goto L_0086520c;
L_008651ee:; BB(0x008651ee);
    /* 008651ee: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8651f4u); call_ind(t); }
    /* 008651f4: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008651f7: jne 0x865202 */ if (!fZ) goto L_00865202;
L_008651f9:; BB(0x008651f9);
    /* 008651f9: mov eax, ebp */ r_eax = r_ebp;
    /* 008651fb: mov dword ptr [0xae7e08], eax */ W32((u32)(0xae7e08u), r_eax);
    /* 00865200: jmp 0x865207 */ goto L_00865207;
L_00865202:; BB(0x00865202);
    /* 00865202: mov eax, dword ptr [0xae7e08] */ r_eax = R32((u32)(0xae7e08u));
L_00865207:; BB(0x00865207);
    /* 00865207: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086520a: jne 0x865289 */ if (!fZ) goto L_00865289;
L_0086520c:; BB(0x0086520c);
    /* 0086520c: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086520e: jne 0x865218 */ if (!fZ) goto L_00865218;
L_00865210:; BB(0x00865210);
    /* 00865210: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x865212u); call_ind(t); }
    /* 00865212: mov esi, eax */ r_esi = r_eax;
    /* 00865214: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865216: je 0x865291 */ if (fZ) goto L_00865291;
L_00865218:; BB(0x00865218);
    /* 00865218: cmp word ptr [esi], bx */ {  u32 a = R16((u32)(r_esi)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0086521b: mov eax, esi */ r_eax = r_esi;
    /* 0086521d: je 0x86522d */ if (fZ) goto L_0086522d;
L_0086521f:; BB(0x0086521f);
    /* 0086521f: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865221: cmp word ptr [eax], bx */ {  u32 a = R16((u32)(r_eax)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00865224: jne 0x86521f */ if (!fZ) goto L_0086521f;
L_00865226:; BB(0x00865226);
    /* 00865226: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865228: cmp word ptr [eax], bx */ {  u32 a = R16((u32)(r_eax)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0086522b: jne 0x86521f */ if (!fZ) goto L_0086521f;
L_0086522d:; BB(0x0086522d);
    /* 0086522d: mov edi, dword ptr [0x8f81d8] */ r_edi = R32((u32)(0x8f81d8u));
    /* 00865233: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865234: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865235: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865236: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00865238: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865239: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0086523b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086523c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086523d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086523e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086523f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865240: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00865244: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x865246u); call_ind(t); }
    /* 00865246: mov ebp, eax */ r_ebp = r_eax;
    /* 00865248: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086524a: je 0x86527e */ if (fZ) goto L_0086527e;
L_0086524c:; BB(0x0086524c);
    /* 0086524c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086524d: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x865252u); f_00859c55();
    /* 00865252: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865254: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865255: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00865259: je 0x86527e */ if (fZ) goto L_0086527e;
L_0086525b:; BB(0x0086525b);
    /* 0086525b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086525c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086525d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086525e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086525f: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865263: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865264: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865265: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865266: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x865268u); call_ind(t); }
    /* 00865268: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086526a: jne 0x86527a */ if (!fZ) goto L_0086527a;
L_0086526c:; BB(0x0086526c);
    /* 0086526c: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865270: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x865275u); f_00858882();
    /* 00865275: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865276: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
L_0086527a:; BB(0x0086527a);
    /* 0086527a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_0086527e:; BB(0x0086527e);
    /* 0086527e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086527f: call dword ptr [0x8f827c] */ { u32 t = R32((u32)(0x8f827cu)); r_esp -= 4; W32(r_esp, 0x865285u); call_ind(t); }
    /* 00865285: mov eax, ebx */ r_eax = r_ebx;
    /* 00865287: jmp 0x8652d9 */ goto L_008652d9;
L_00865289:; BB(0x00865289);
    /* 00865289: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086528b: je 0x865295 */ if (fZ) goto L_00865295;
L_0086528d:; BB(0x0086528d);
    /* 0086528d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086528f: je 0x865295 */ if (fZ) goto L_00865295;
L_00865291:; BB(0x00865291);
    /* 00865291: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00865293: jmp 0x8652d9 */ goto L_008652d9;
L_00865295:; BB(0x00865295);
    /* 00865295: call dword ptr [0x8f8278] */ { u32 t = R32((u32)(0x8f8278u)); r_esp -= 4; W32(r_esp, 0x86529bu); call_ind(t); }
    /* 0086529b: mov esi, eax */ r_esi = r_eax;
    /* 0086529d: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086529f: je 0x865291 */ if (fZ) goto L_00865291;
L_008652a1:; BB(0x008652a1);
    /* 008652a1: cmp byte ptr [esi], bl */ {  u32 a = R8((u32)(r_esi)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008652a3: je 0x8652af */ if (fZ) goto L_008652af;
L_008652a5:; BB(0x008652a5);
    /* 008652a5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008652a6: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008652a8: jne 0x8652a5 */ if (!fZ) goto L_008652a5;
L_008652aa:; BB(0x008652aa);
    /* 008652aa: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008652ab: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008652ad: jne 0x8652a5 */ if (!fZ) goto L_008652a5;
L_008652af:; BB(0x008652af);
    /* 008652af: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008652b1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008652b2: mov ebp, eax */ r_ebp = r_eax;
    /* 008652b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008652b5: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8652bau); f_00859c55();
    /* 008652ba: mov edi, eax */ r_edi = r_eax;
    /* 008652bc: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008652be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008652bf: jne 0x8652c5 */ if (!fZ) goto L_008652c5;
L_008652c1:; BB(0x008652c1);
    /* 008652c1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008652c3: jmp 0x8652d0 */ goto L_008652d0;
L_008652c5:; BB(0x008652c5);
    /* 008652c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008652c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008652c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008652c8: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x8652cdu); f_00861d00();
    /* 008652cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008652d0:; BB(0x008652d0);
    /* 008652d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008652d1: call dword ptr [0x8f8274] */ { u32 t = R32((u32)(0x8f8274u)); r_esp -= 4; W32(r_esp, 0x8652d7u); call_ind(t); }
    /* 008652d7: mov eax, edi */ r_eax = r_edi;
L_008652d9:; BB(0x008652d9);
    /* 008652d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008652da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008652db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008652dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008652dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008652de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008652df: ret  */ FN_RET(0x008651be); r_esp += 4; return;
}

void f_008652e0(void) /* __mbctoupper */
{
    FN_ENTER(0x008652e0);
    /* 008652e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008652e1: mov ebp, esp */ r_ebp = r_esp;
    /* 008652e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008652e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008652e5: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8652eau); f_0085c583();
    /* 008652ea: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 008652ed: cmp eax, dword ptr [0xaf0838] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008652f3: je 0x8652fa */ if (fZ) goto L_008652fa;
L_008652f5:; BB(0x008652f5);
    /* 008652f5: call 0x866438 */ r_esp -= 4; W32(r_esp, 0x8652fau); f_00866438();
L_008652fa:; BB(0x008652fa);
    /* 008652fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008652fb: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008652fe: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865304: jbe 0x86534f */ if ((fC||fZ)) goto L_0086534f;
L_00865306:; BB(0x00865306);
    /* 00865306: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00865308: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086530b: mov byte ptr [ebp - 4], cl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_ecx);
    /* 0086530e: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00865311: mov byte ptr [ebp - 3], bl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ebx);
    /* 00865314: test byte ptr [ecx + eax + 0x1d], 4 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00865319: je 0x865360 */ if (fZ) goto L_00865360;
L_0086531b:; BB(0x0086531b);
    /* 0086531b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086531d: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865320: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00865323: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00865325: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00865326: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00865328: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0086532b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086532c: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00865331: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00865334: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x865339u); f_00860103();
    /* 00865339: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086533c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086533e: je 0x865360 */ if (fZ) goto L_00865360;
L_00865340:; BB(0x00865340);
    /* 00865340: movzx eax, byte ptr [ebp - 8] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff8u));
    /* 00865344: movzx ecx, byte ptr [ebp - 7] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff9u));
    /* 00865348: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086534b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086534d: jmp 0x865362 */ goto L_00865362;
L_0086534f:; BB(0x0086534f);
    /* 0086534f: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865351: test byte ptr [eax + 0x1d], 0x20 */ {  u32 a = R8((u32)(r_eax+0x1du)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00865355: je 0x865360 */ if (fZ) goto L_00865360;
L_00865357:; BB(0x00865357);
    /* 00865357: movsx eax, byte ptr [eax + 0x11d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x11du));
    /* 0086535e: jmp 0x865362 */ goto L_00865362;
L_00865360:; BB(0x00865360);
    /* 00865360: mov eax, ebx */ r_eax = r_ebx;
L_00865362:; BB(0x00865362);
    /* 00865362: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00865363: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00865364: ret  */ FN_RET(0x008652e0); r_esp += 4; return;
}

void f_00865365(void) /* __resetstkoflw */
{
    FN_ENTER(0x00865365);
    /* 00865365: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00865366: mov ebp, esp */ r_ebp = r_esp;
    /* 00865368: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086536b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086536c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086536d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086536e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00865370: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00865371: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x865376u); f_00858020();
    /* 00865376: mov esi, esp */ r_esi = r_esp;
    /* 00865378: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0086537a: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0086537d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086537e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086537f: call dword ptr [0x8f828c] */ { u32 t = R32((u32)(0x8f828cu)); r_esp -= 4; W32(r_esp, 0x865385u); call_ind(t); }
    /* 00865385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865387: je 0x865400 */ if (fZ) goto L_00865400;
L_00865389:; BB(0x00865389);
    /* 00865389: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086538c: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 0086538f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865390: call dword ptr [0x8f8288] */ { u32 t = R32((u32)(0x8f8288u)); r_esp -= 4; W32(r_esp, 0x865396u); call_ind(t); }
    /* 00865396: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00865399: mov eax, dword ptr [0xae7a10] */ r_eax = R32((u32)(0xae7a10u));
    /* 0086539e: lea edi, [ecx - 1] */ r_edi = (u32)(r_ecx+0xffffffffu);
    /* 008653a1: not edi */ r_edi = ~r_edi;
    /* 008653a3: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008653a5: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008653a7: mov esi, eax */ r_esi = r_eax;
    /* 008653a9: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008653aa: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); fC = (b != 0); }
    /* 008653ac: sbb esi, esi */ { u32 c = fC; u32 a = r_esi; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 008653ae: and esi, 0xfffffff1 */ {  u32 a = r_esi; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008653b1: add esi, 0x11 */ {  u32 a = r_esi; u32 b = 0x11u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008653b4: imul esi, ecx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ecx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008653b7: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008653b9: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008653bb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008653be: jb 0x865400 */ if (fC) goto L_00865400;
L_008653c0:; BB(0x008653c0);
    /* 008653c0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008653c3: je 0x865421 */ if (fZ) goto L_00865421;
L_008653c5:; BB(0x008653c5);
    /* 008653c5: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008653c8: mov ebx, 0x1000 */ r_ebx = 0x1000u;
L_008653cd:; BB(0x008653cd);
    /* 008653cd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008653cf: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 008653d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008653d3: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008653d6: call dword ptr [0x8f828c] */ { u32 t = R32((u32)(0x8f828cu)); r_esp -= 4; W32(r_esp, 0x8653dcu); call_ind(t); }
    /* 008653dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008653de: je 0x865400 */ if (fZ) goto L_00865400;
L_008653e0:; BB(0x008653e0);
    /* 008653e0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008653e3: add dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008653e6: test dword ptr [ebp - 0x18], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008653e9: je 0x8653cd */ if (fZ) goto L_008653cd;
L_008653eb:; BB(0x008653eb);
    /* 008653eb: test byte ptr [ebp - 0x13], 1 */ {  u32 a = R8((u32)(r_ebp+0xffffffedu)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008653ef: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008653f2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008653f5: je 0x8653fc */ if (fZ) goto L_008653fc;
L_008653f7:; BB(0x008653f7);
    /* 008653f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008653f9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008653fa: jmp 0x865440 */ goto L_00865440;
L_008653fc:; BB(0x008653fc);
    /* 008653fc: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008653fe: jae 0x865404 */ if (!fC) goto L_00865404;
L_00865400:; BB(0x00865400);
    /* 00865400: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00865402: jmp 0x865440 */ goto L_00865440;
L_00865404:; BB(0x00865404);
    /* 00865404: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00865406: jae 0x86540b */ if (!fC) goto L_0086540b;
L_00865408:; BB(0x00865408);
    /* 00865408: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
L_0086540b:; BB(0x0086540b);
    /* 0086540b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086540d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086540e: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865411: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00865414: call dword ptr [0x8f823c] */ { u32 t = R32((u32)(0x8f823cu)); r_esp -= 4; W32(r_esp, 0x86541au); call_ind(t); }
    /* 0086541a: mov eax, dword ptr [0xae7a10] */ r_eax = R32((u32)(0xae7a10u));
    /* 0086541f: jmp 0x865424 */ goto L_00865424;
L_00865421:; BB(0x00865421);
    /* 00865421: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
L_00865424:; BB(0x00865424);
    /* 00865424: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00865425: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00865427: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00865429: and eax, 0x103 */ {  u32 a = r_eax; u32 b = 0x103u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086542e: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00865431: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00865432: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865433: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865434: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865437: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086543a: call dword ptr [0x8f8284] */ { u32 t = R32((u32)(0x8f8284u)); r_esp -= 4; W32(r_esp, 0x865440u); call_ind(t); }
L_00865440:; BB(0x00865440);
    /* 00865440: lea esp, [ebp - 0x58] */ r_esp = (u32)(r_ebp+0xffffffa8u);
    /* 00865443: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00865444: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00865445: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00865446: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00865447: ret  */ FN_RET(0x00865365); r_esp += 4; return;
}

void f_00865448(void) /* __expand */
{
    FN_ENTER(0x00865448);
    /* 00865448: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0086544a: push 0x999278 */ { u32 v = 0x999278u; r_esp -= 4; W32(r_esp, v); }
    /* 0086544f: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x865454u); f_0085e5ac();
    /* 00865454: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00865457: cmp esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086545a: jbe 0x865463 */ if ((fC||fZ)) goto L_00865463;
L_0086545c:; BB(0x0086545c);
    /* 0086545c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086545e: jmp 0x8654ec */ goto L_008654ec;
L_00865463:; BB(0x00865463);
    /* 00865463: cmp dword ptr [0xaf0ba0], 3 */ {  u32 a = R32((u32)(0xaf0ba0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086546a: jne 0x8654cf */ if (!fZ) goto L_008654cf;
L_0086546c:; BB(0x0086546c);
    /* 0086546c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086546e: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x865473u); f_0085e57a();
    /* 00865473: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865474: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00865478: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086547b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086547c: call 0x85f628 */ r_esp -= 4; W32(r_esp, 0x865481u); f_0085f628();
    /* 00865481: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865482: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00865485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865487: je 0x8654a7 */ if (fZ) goto L_008654a7;
L_00865489:; BB(0x00865489);
    /* 00865489: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086548d: cmp esi, dword ptr [0xaf0b8c] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaf0b8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865493: ja 0x8654a7 */ if ((!fC&&!fZ)) goto L_008654a7;
L_00865495:; BB(0x00865495);
    /* 00865495: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865496: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865497: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865498: call 0x85fb28 */ r_esp -= 4; W32(r_esp, 0x86549du); f_0085fb28();
    /* 0086549d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008654a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008654a2: je 0x8654a7 */ if (fZ) goto L_008654a7;
L_008654a4:; BB(0x008654a4);
    /* 008654a4: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
L_008654a7:; BB(0x008654a7);
    /* 008654a7: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008654ab: call 0x8654c6 */ r_esp -= 4; W32(r_esp, 0x8654b0u); f_008654c6();
    /* 008654b0: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008654b4: jne 0x8654e9 */ if (!fZ) goto L_008654e9;
L_008654b6:; BB(0x008654b6);
    /* 008654b6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008654b8: jne 0x8654bb */ if (!fZ) goto L_008654bb;
L_008654ba:; BB(0x008654ba);
    /* 008654ba: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008654bb:; BB(0x008654bb);
    /* 008654bb: add esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008654be: and esi, 0xfffffff0 */ {  u32 a = r_esi; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008654c1: jmp 0x8654d4 */ goto L_008654d4;
L_008654cf:; BB(0x008654cf);
    /* 008654cf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008654d1: jne 0x8654d4 */ if (!fZ) goto L_008654d4;
L_008654d3:; BB(0x008654d3);
    /* 008654d3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008654d4:; BB(0x008654d4);
    /* 008654d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008654d5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008654d8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008654da: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008654e0: call dword ptr [0x8f8240] */ { u32 t = R32((u32)(0x8f8240u)); r_esp -= 4; W32(r_esp, 0x8654e6u); call_ind(t); }
    /* 008654e6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_008654e9:; BB(0x008654e9);
    /* 008654e9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_008654ec:; BB(0x008654ec);
    /* 008654ec: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8654f1u); f_0085e5e7();
    /* 008654f1: ret  */ FN_RET(0x00865448); r_esp += 4; return;
}

void f_008654c2(void)
{
    FN_ENTER(0x008654c2);
    /* 008654c2: adc dword ptr [ebx + 0x46a0c75], ecx */ { u32 ad = (u32)(r_ebx+0x46a0c75u); u32 c = fC; u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 008654c8: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x8654cdu); f_0085e4c5();
    /* 008654cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008654ce: ret  */ FN_RET(0x008654c2); r_esp += 4; return;
}

void f_008654c3(void)
{
    FN_ENTER(0x008654c3);
    /* 008654c3: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008654c6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008654c8: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x8654cdu); f_0085e4c5();
    /* 008654cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008654ce: ret  */ FN_RET(0x008654c3); r_esp += 4; return;
}

void f_008654c6(void)
{
    FN_ENTER(0x008654c6);
    /* 008654c6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008654c8: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x8654cdu); f_0085e4c5();
    /* 008654cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008654ce: ret  */ FN_RET(0x008654c6); r_esp += 4; return;
}

void f_008654f2(void) /* __ValidateEH3RN */
{
    FN_ENTER(0x008654f2);
    /* 008654f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008654f3: mov ebp, esp */ r_ebp = r_esp;
    /* 008654f5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008654f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008654f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008654fa: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008654fd: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00865500: test bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865503: jne 0x865520 */ if (!fZ) goto L_00865520;
L_00865505:; BB(0x00865505);
    /* 00865505: mov eax, dword ptr fs:[0x18] */ r_eax = R32((u32)(TEB+0x18u));
    /* 0086550b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0086550e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00865511: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00865514: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00865516: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00865519: jb 0x865527 */ if (fC) goto L_00865527;
L_0086551b:; BB(0x0086551b);
    /* 0086551b: cmp ebx, dword ptr [eax + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086551e: jae 0x865527 */ if (!fC) goto L_00865527;
L_00865520:; BB(0x00865520);
    /* 00865520: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00865522: jmp 0x865717 */ goto L_00865717;
L_00865527:; BB(0x00865527);
    /* 00865527: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865528: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0086552b: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086552e: jne 0x865538 */ if (!fZ) goto L_00865538;
L_00865530:; BB(0x00865530);
    /* 00865530: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00865532: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00865533: jmp 0x865716 */ goto L_00865716;
L_00865538:; BB(0x00865538);
    /* 00865538: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086553a: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0086553d: mov eax, ebx */ r_eax = r_ebx;
L_0086553f:; BB(0x0086553f);
    /* 0086553f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00865541: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865544: je 0x86554e */ if (fZ) goto L_0086554e;
L_00865546:; BB(0x00865546);
    /* 00865546: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00865548: jae 0x865693 */ if (!fC) goto L_00865693;
L_0086554e:; BB(0x0086554e);
    /* 0086554e: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865552: je 0x865557 */ if (fZ) goto L_00865557;
L_00865554:; BB(0x00865554);
    /* 00865554: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00865557:; BB(0x00865557);
    /* 00865557: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00865558: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086555b: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086555d: jbe 0x86553f */ if ((fC||fZ)) goto L_0086553f;
L_0086555f:; BB(0x0086555f);
    /* 0086555f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865563: je 0x865579 */ if (fZ) goto L_00865579;
L_00865565:; BB(0x00865565);
    /* 00865565: mov eax, dword ptr [esi - 8] */ r_eax = R32((u32)(r_esi+0xfffffff8u));
    /* 00865568: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086556b: jb 0x865693 */ if (fC) goto L_00865693;
L_00865571:; BB(0x00865571);
    /* 00865571: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00865573: jae 0x865693 */ if (!fC) goto L_00865693;
L_00865579:; BB(0x00865579);
    /* 00865579: mov eax, dword ptr [0xae7e10] */ r_eax = R32((u32)(0xae7e10u));
    /* 0086557e: mov edi, ebx */ r_edi = r_ebx;
    /* 00865580: and edi, 0xfffff000 */ {  u32 a = r_edi; u32 b = 0xfffff000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00865586: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00865588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0086558a: jle 0x86559e */ if ((fZ||fS!=fO)) goto L_0086559e;
L_0086558c:; BB(0x0086558c);
    /* 0086558c: cmp dword ptr [esi*4 + 0xae7e18], edi */ {  u32 a = R32((u32)(r_esi*4+0xae7e18u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865593: je 0x865697 */ if (fZ) goto L_00865697;
L_00865599:; BB(0x00865599);
    /* 00865599: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086559a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086559c: jl 0x86558c */ if ((fS!=fO)) goto L_0086558c;
L_0086559e:; BB(0x0086559e);
    /* 0086559e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008655a0: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 008655a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008655a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008655a5: call dword ptr [0x8f828c] */ { u32 t = R32((u32)(0x8f828cu)); r_esp -= 4; W32(r_esp, 0x8655abu); call_ind(t); }
    /* 008655ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008655ad: je 0x865713 */ if (fZ) goto L_00865713;
L_008655b3:; BB(0x008655b3);
    /* 008655b3: cmp dword ptr [ebp - 8], 0x1000000 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008655ba: jne 0x865713 */ if (!fZ) goto L_00865713;
L_008655c0:; BB(0x008655c0);
    /* 008655c0: test byte ptr [ebp - 0xc], 0xcc */ {  u32 a = R8((u32)(r_ebp+0xfffffff4u)); u32 b = 0xccu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008655c4: je 0x86561c */ if (fZ) goto L_0086561c;
L_008655c6:; BB(0x008655c6);
    /* 008655c6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008655c9: cmp word ptr [ecx], 0x5a4d */ {  u32 a = R16((u32)(r_ecx)); u32 b = 0x5a4du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008655ce: jne 0x865713 */ if (!fZ) goto L_00865713;
L_008655d4:; BB(0x008655d4);
    /* 008655d4: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 008655d7: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008655d9: cmp dword ptr [eax], 0x4550 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x4550u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008655df: jne 0x865713 */ if (!fZ) goto L_00865713;
L_008655e5:; BB(0x008655e5);
    /* 008655e5: cmp word ptr [eax + 0x18], 0x10b */ {  u32 a = R16((u32)(r_eax+0x18u)); u32 b = 0x10bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008655eb: jne 0x865713 */ if (!fZ) goto L_00865713;
L_008655f1:; BB(0x008655f1);
    /* 008655f1: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008655f3: cmp word ptr [eax + 6], 0 */ {  u32 a = R16((u32)(r_eax+0x6u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008655f8: movzx ecx, word ptr [eax + 0x14] */ r_ecx = (u32)R16((u32)(r_eax+0x14u));
    /* 008655fc: lea ecx, [ecx + eax + 0x18] */ r_ecx = (u32)(r_ecx+r_eax+0x18u);
    /* 00865600: jbe 0x865713 */ if ((fC||fZ)) goto L_00865713;
L_00865606:; BB(0x00865606);
    /* 00865606: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00865609: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086560b: jb 0x86561c */ if (fC) goto L_0086561c;
L_0086560d:; BB(0x0086560d);
    /* 0086560d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00865610: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00865612: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00865614: jae 0x86561c */ if (!fC) goto L_0086561c;
L_00865616:; BB(0x00865616);
    /* 00865616: test byte ptr [ecx + 0x27], 0x80 */ {  u32 a = R8((u32)(r_ecx+0x27u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086561a: jne 0x865693 */ if (!fZ) goto L_00865693;
L_0086561c:; BB(0x0086561c);
    /* 0086561c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086561e: push 0xae7e58 */ { u32 v = 0xae7e58u; r_esp -= 4; W32(r_esp, v); }
    /* 00865623: call dword ptr [0x8f8290] */ { u32 t = R32((u32)(0x8f8290u)); r_esp -= 4; W32(r_esp, 0x865629u); call_ind(t); }
    /* 00865629: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086562b: jne 0x865530 */ if (!fZ) goto L_00865530;
L_00865631:; BB(0x00865631);
    /* 00865631: mov ecx, dword ptr [0xae7e10] */ r_ecx = R32((u32)(0xae7e10u));
    /* 00865637: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00865639: mov edx, ecx */ r_edx = r_ecx;
    /* 0086563b: jle 0x865650 */ if ((fZ||fS!=fO)) goto L_00865650;
L_0086563d:; BB(0x0086563d);
    /* 0086563d: lea eax, [ecx*4 + 0xae7e14] */ r_eax = (u32)(r_ecx*4+0xae7e14u);
L_00865644:; BB(0x00865644);
    /* 00865644: cmp dword ptr [eax], edi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865646: je 0x865650 */ if (fZ) goto L_00865650;
L_00865648:; BB(0x00865648);
    /* 00865648: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00865649: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086564c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0086564e: jg 0x865644 */ if ((!fZ&&fS==fO)) goto L_00865644;
L_00865650:; BB(0x00865650);
    /* 00865650: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865652: jne 0x865681 */ if (!fZ) goto L_00865681;
L_00865654:; BB(0x00865654);
    /* 00865654: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00865656: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00865657: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00865659: jg 0x86565d */ if ((!fZ&&fS==fO)) goto L_0086565d;
L_0086565b:; BB(0x0086565b);
    /* 0086565b: mov ebx, ecx */ r_ebx = r_ecx;
L_0086565d:; BB(0x0086565d);
    /* 0086565d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086565f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00865661: jl 0x865675 */ if ((fS!=fO)) goto L_00865675;
L_00865663:; BB(0x00865663);
    /* 00865663: lea eax, [edx*4 + 0xae7e18] */ r_eax = (u32)(r_edx*4+0xae7e18u);
    /* 0086566a: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0086566c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086566d: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086566f: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 00865671: mov edi, esi */ r_edi = r_esi;
    /* 00865673: jle 0x865663 */ if ((fZ||fS!=fO)) goto L_00865663;
L_00865675:; BB(0x00865675);
    /* 00865675: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00865678: jge 0x865681 */ if ((fS==fO)) goto L_00865681;
L_0086567a:; BB(0x0086567a);
    /* 0086567a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086567b: mov dword ptr [0xae7e10], ecx */ W32((u32)(0xae7e10u), r_ecx);
L_00865681:; BB(0x00865681);
    /* 00865681: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00865683: push 0xae7e58 */ { u32 v = 0xae7e58u; r_esp -= 4; W32(r_esp, v); }
    /* 00865688: call dword ptr [0x8f8290] */ { u32 t = R32((u32)(0x8f8290u)); r_esp -= 4; W32(r_esp, 0x86568eu); call_ind(t); }
    /* 0086568e: jmp 0x865530 */ goto L_00865530;
L_00865693:; BB(0x00865693);
    /* 00865693: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00865695: jmp 0x865716 */ goto L_00865716;
L_00865697:; BB(0x00865697);
    /* 00865697: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00865699: jle 0x865530 */ if ((fZ||fS!=fO)) goto L_00865530;
L_0086569f:; BB(0x0086569f);
    /* 0086569f: mov ebx, dword ptr [0x8f8290] */ r_ebx = R32((u32)(0x8f8290u));
    /* 008656a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008656a7: push 0xae7e58 */ { u32 v = 0xae7e58u; r_esp -= 4; W32(r_esp, v); }
    /* 008656ac: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8656aeu); call_ind(t); }
    /* 008656ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008656b0: jne 0x865530 */ if (!fZ) goto L_00865530;
L_008656b6:; BB(0x008656b6);
    /* 008656b6: cmp dword ptr [esi*4 + 0xae7e18], edi */ {  u32 a = R32((u32)(r_esi*4+0xae7e18u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008656bd: je 0x8656ed */ if (fZ) goto L_008656ed;
L_008656bf:; BB(0x008656bf);
    /* 008656bf: mov eax, dword ptr [0xae7e10] */ r_eax = R32((u32)(0xae7e10u));
    /* 008656c4: lea esi, [eax - 1] */ r_esi = (u32)(r_eax+0xffffffffu);
    /* 008656c7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008656c9: jl 0x8656db */ if ((fS!=fO)) goto L_008656db;
L_008656cb:; BB(0x008656cb);
    /* 008656cb: cmp dword ptr [esi*4 + 0xae7e18], edi */ {  u32 a = R32((u32)(r_esi*4+0xae7e18u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008656d2: je 0x8656d7 */ if (fZ) goto L_008656d7;
L_008656d4:; BB(0x008656d4);
    /* 008656d4: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); }
    /* 008656d5: jns 0x8656cb */ if (!fS) goto L_008656cb;
L_008656d7:; BB(0x008656d7);
    /* 008656d7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008656d9: jge 0x8656eb */ if ((fS==fO)) goto L_008656eb;
L_008656db:; BB(0x008656db);
    /* 008656db: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008656de: jge 0x8656e6 */ if ((fS==fO)) goto L_008656e6;
L_008656e0:; BB(0x008656e0);
    /* 008656e0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008656e1: mov dword ptr [0xae7e10], eax */ W32((u32)(0xae7e10u), r_eax);
L_008656e6:; BB(0x008656e6);
    /* 008656e6: lea esi, [eax - 1] */ r_esi = (u32)(r_eax+0xffffffffu);
    /* 008656e9: jmp 0x8656ed */ goto L_008656ed;
L_008656eb:; BB(0x008656eb);
    /* 008656eb: je 0x865705 */ if (fZ) goto L_00865705;
L_008656ed:; BB(0x008656ed);
    /* 008656ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008656ef: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008656f1: jl 0x865705 */ if ((fS!=fO)) goto L_00865705;
L_008656f3:; BB(0x008656f3);
    /* 008656f3: lea eax, [ecx*4 + 0xae7e18] */ r_eax = (u32)(r_ecx*4+0xae7e18u);
    /* 008656fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008656fc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008656fd: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008656ff: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 00865701: mov edi, edx */ r_edi = r_edx;
    /* 00865703: jle 0x8656f3 */ if ((fZ||fS!=fO)) goto L_008656f3;
L_00865705:; BB(0x00865705);
    /* 00865705: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00865707: push 0xae7e58 */ { u32 v = 0xae7e58u; r_esp -= 4; W32(r_esp, v); }
    /* 0086570c: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x86570eu); call_ind(t); }
    /* 0086570e: jmp 0x865530 */ goto L_00865530;
L_00865713:; BB(0x00865713);
    /* 00865713: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00865716:; BB(0x00865716);
    /* 00865716: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00865717:; BB(0x00865717);
    /* 00865717: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00865718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00865719: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086571a: ret  */ FN_RET(0x008654f2); r_esp += 4; return;
}

void f_008657b4(void) /* __expandtime */
{
    FN_ENTER(0x008657b4);
    /* 008657b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008657b5: mov ebp, esp */ r_ebp = r_esp;
    /* 008657b7: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 008657ba: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008657bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008657be: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008657c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008657c2: mov edi, ecx */ r_edi = r_ecx;
    /* 008657c4: jg 0x8658ea */ if ((!fZ&&fS==fO)) goto L_008658ea;
L_008657ca:; BB(0x008657ca);
    /* 008657ca: je 0x8659a5 */ if (fZ) goto L_008659a5;
L_008657d0:; BB(0x008657d0);
    /* 008657d0: cmp eax, 0x4d */ {  u32 a = r_eax; u32 b = 0x4du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008657d3: jg 0x86584a */ if ((!fZ&&fS==fO)) goto L_0086584a;
L_008657d5:; BB(0x008657d5);
    /* 008657d5: je 0x865840 */ if (fZ) goto L_00865840;
L_008657d7:; BB(0x008657d7);
    /* 008657d7: sub eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008657da: je 0x865832 */ if (fZ) goto L_00865832;
L_008657dc:; BB(0x008657dc);
    /* 008657dc: sub eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008657df: je 0x865823 */ if (fZ) goto L_00865823;
L_008657e1:; BB(0x008657e1);
    /* 008657e1: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008657e2: je 0x865814 */ if (fZ) goto L_00865814;
L_008657e4:; BB(0x008657e4);
    /* 008657e4: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008657e7: je 0x86580a */ if (fZ) goto L_0086580a;
L_008657e9:; BB(0x008657e9);
    /* 008657e9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008657ea: jne 0x865a13 */ if (!fZ) goto L_00865a13;
L_008657f0:; BB(0x008657f0);
    /* 008657f0: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008657f3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008657f4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008657f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008657f7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008657f7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008657f7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008657f9: mov eax, edx */ r_eax = r_edx;
    /* 008657fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008657fd: jne 0x865988 */ if (!fZ) goto L_00865988;
L_00865803:; BB(0x00865803);
    /* 00865803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00865804: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00865805: jmp 0x865988 */ goto L_00865988;
L_0086580a:; BB(0x0086580a);
    /* 0086580a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086580d: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00865810: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00865812: jmp 0x86587b */ goto L_0086587b;
L_00865814:; BB(0x00865814);
    /* 00865814: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00865817: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0086581a: mov edx, dword ptr [esi + edx*4 + 0x68] */ r_edx = R32((u32)(r_esi+r_edx*4+0x68u));
    /* 0086581e: jmp 0x865a0a */ goto L_00865a0a;
L_00865823:; BB(0x00865823);
    /* 00865823: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00865826: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00865829: mov edx, dword ptr [esi + edx*4 + 0x1c] */ r_edx = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 0086582d: jmp 0x865a0a */ goto L_00865a0a;
L_00865832:; BB(0x00865832);
    /* 00865832: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00865834: mov byte ptr [eax], 0x25 */ W8((u32)(r_eax), 0x25u);
    /* 00865837: inc dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865839: dec dword ptr [ebx] */ { u32 ad = (u32)(r_ebx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086583b: jmp 0x865a13 */ goto L_00865a13;
L_00865840:; BB(0x00865840);
    /* 00865840: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865843: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00865846: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00865848: jmp 0x86587b */ goto L_0086587b;
L_0086584a:; BB(0x0086584a);
    /* 0086584a: sub eax, 0x53 */ {  u32 a = r_eax; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086584d: je 0x8658e1 */ if (fZ) goto L_008658e1;
L_00865853:; BB(0x00865853);
    /* 00865853: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00865854: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00865855: je 0x8658bc */ if (fZ) goto L_008658bc;
L_00865857:; BB(0x00865857);
    /* 00865857: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00865858: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00865859: je 0x8658ab */ if (fZ) goto L_008658ab;
L_0086585b:; BB(0x0086585b);
    /* 0086585b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086585c: je 0x865889 */ if (fZ) goto L_00865889;
L_0086585e:; BB(0x0086585e);
    /* 0086585e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086585f: jne 0x865a13 */ if (!fZ) goto L_00865a13;
L_00865865:; BB(0x00865865);
    /* 00865865: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00865868: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00865869: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0086586b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086586c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0086586c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0086586c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0086586e: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865871: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00865873: add eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865876: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00865879: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0086587b:; BB(0x0086587b);
    /* 0086587b: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_0086587c:; BB(0x0086587c);
    /* 0086587c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0086587e: call 0x86573b */ r_esp -= 4; W32(r_esp, 0x865883u); f_0086573b();
    /* 00865883: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865884: jmp 0x865a13 */ goto L_00865a13;
L_00865889:; BB(0x00865889);
    /* 00865889: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086588c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086588d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086588e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086588f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
L_00865891:; BB(0x00865891);
    /* 00865891: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865894: call 0x865a1a */ r_esp -= 4; W32(r_esp, 0x865899u); f_00865a1a();
    /* 00865899: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086589c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086589e: jne 0x865a13 */ if (!fZ) goto L_00865a13;
L_008658a4:; BB(0x008658a4);
    /* 008658a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008658a6: jmp 0x865a16 */ goto L_00865a16;
L_008658ab:; BB(0x008658ab);
    /* 008658ab: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008658ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008658b0: jne 0x8658b7 */ if (!fZ) goto L_008658b7;
L_008658b2:; BB(0x008658b2);
    /* 008658b2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008658b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008658b5: jmp 0x8658bf */ goto L_008658bf;
L_008658b7:; BB(0x008658b7);
    /* 008658b7: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 008658ba: jmp 0x8658bf */ goto L_008658bf;
L_008658bc:; BB(0x008658bc);
    /* 008658bc: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
L_008658bf:; BB(0x008658bf);
    /* 008658bf: cmp dword ptr [esi + 0x1c], ecx */ {  u32 a = R32((u32)(r_esi+0x1cu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008658c2: jge 0x8658cb */ if ((fS==fO)) goto L_008658cb;
L_008658c4:; BB(0x008658c4);
    /* 008658c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008658c6: jmp 0x865988 */ goto L_00865988;
L_008658cb:; BB(0x008658cb);
    /* 008658cb: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008658ce: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008658d0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008658d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008658d2: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x008658d2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008658d2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008658d4: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008658d6: jl 0x865988 */ if ((fS!=fO)) goto L_00865988;
L_008658dc:; BB(0x008658dc);
    /* 008658dc: jmp 0x865987 */ goto L_00865987;
L_008658e1:; BB(0x008658e1);
    /* 008658e1: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008658e4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008658e6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008658e8: jmp 0x86587b */ goto L_0086587b;
L_008658ea:; BB(0x008658ea);
    /* 008658ea: cmp eax, 0x6d */ {  u32 a = r_eax; u32 b = 0x6du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008658ed: jg 0x865992 */ if ((!fZ&&fS==fO)) goto L_00865992;
L_008658f3:; BB(0x008658f3);
    /* 008658f3: je 0x865984 */ if (fZ) goto L_00865984;
L_008658f9:; BB(0x008658f9);
    /* 008658f9: sub eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008658fc: je 0x865976 */ if (fZ) goto L_00865976;
L_008658fe:; BB(0x008658fe);
    /* 008658fe: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008658ff: je 0x865967 */ if (fZ) goto L_00865967;
L_00865901:; BB(0x00865901);
    /* 00865901: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00865902: je 0x86592b */ if (fZ) goto L_0086592b;
L_00865904:; BB(0x00865904);
    /* 00865904: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00865905: je 0x86591e */ if (fZ) goto L_0086591e;
L_00865907:; BB(0x00865907);
    /* 00865907: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086590a: jne 0x865a13 */ if (!fZ) goto L_00865a13;
L_00865910:; BB(0x00865910);
    /* 00865910: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865913: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00865916: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865917: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00865919: jmp 0x86587b */ goto L_0086587b;
L_0086591e:; BB(0x0086591e);
    /* 0086591e: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865921: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00865924: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00865926: jmp 0x86587b */ goto L_0086587b;
L_0086592b:; BB(0x0086592b);
    /* 0086592b: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086592f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865932: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865933: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865934: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865935: je 0x865963 */ if (fZ) goto L_00865963;
L_00865937:; BB(0x00865937);
    /* 00865937: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
L_00865939:; BB(0x00865939);
    /* 00865939: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086593c: call 0x865a1a */ r_esp -= 4; W32(r_esp, 0x865941u); f_00865a1a();
    /* 00865941: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00865944: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865946: je 0x8658a4 */ if (fZ) goto L_008658a4;
L_0086594c:; BB(0x0086594c);
    /* 0086594c: cmp dword ptr [ebx], 0 */ {  u32 a = R32((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086594f: je 0x8658a4 */ if (fZ) goto L_008658a4;
L_00865955:; BB(0x00865955);
    /* 00865955: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00865957: mov byte ptr [eax], 0x20 */ W8((u32)(r_eax), 0x20u);
    /* 0086595a: inc dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086595c: dec dword ptr [ebx] */ { u32 ad = (u32)(r_ebx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086595e: jmp 0x865889 */ goto L_00865889;
L_00865963:; BB(0x00865963);
    /* 00865963: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00865965: jmp 0x865939 */ goto L_00865939;
L_00865967:; BB(0x00865967);
    /* 00865967: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0086596a: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0086596d: mov edx, dword ptr [esi + edx*4 + 0x38] */ r_edx = R32((u32)(r_esi+r_edx*4+0x38u));
    /* 00865971: jmp 0x865a0a */ goto L_00865a0a;
L_00865976:; BB(0x00865976);
    /* 00865976: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00865979: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0086597c: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 0086597f: jmp 0x865a0a */ goto L_00865a0a;
L_00865984:; BB(0x00865984);
    /* 00865984: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
L_00865987:; BB(0x00865987);
    /* 00865987: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00865988:; BB(0x00865988);
    /* 00865988: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
L_0086598b:; BB(0x0086598b);
    /* 0086598b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086598d: jmp 0x86587b */ goto L_0086587b;
L_00865992:; BB(0x00865992);
    /* 00865992: sub eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00865995: je 0x8659f3 */ if (fZ) goto L_008659f3;
L_00865997:; BB(0x00865997);
    /* 00865997: sub eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086599a: je 0x8659e5 */ if (fZ) goto L_008659e5;
L_0086599c:; BB(0x0086599c);
    /* 0086599c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086599d: je 0x8659cb */ if (fZ) goto L_008659cb;
L_0086599f:; BB(0x0086599f);
    /* 0086599f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008659a0: je 0x8659bb */ if (fZ) goto L_008659bb;
L_008659a2:; BB(0x008659a2);
    /* 008659a2: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008659a3: jne 0x865a13 */ if (!fZ) goto L_00865a13;
L_008659a5:; BB(0x008659a5);
    /* 008659a5: call 0x864428 */ r_esp -= 4; W32(r_esp, 0x8659aau); f_00864428();
    /* 008659aa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008659ac: cmp dword ptr [esi + 0x20], edx */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008659af: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008659b2: mov edx, dword ptr [edx*4 + 0xa24100] */ r_edx = R32((u32)(r_edx*4+0xa24100u));
    /* 008659b9: jmp 0x865a0a */ goto L_00865a0a;
L_008659bb:; BB(0x008659bb);
    /* 008659bb: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008659be: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008659c1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008659c2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 008659c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008659c5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008659c5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008659c5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008659c7: mov eax, edx */ r_eax = r_edx;
    /* 008659c9: jmp 0x86598b */ goto L_0086598b;
L_008659cb:; BB(0x008659cb);
    /* 008659cb: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008659cf: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008659d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008659d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008659d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008659d5: je 0x8659de */ if (fZ) goto L_008659de;
L_008659d7:; BB(0x008659d7);
    /* 008659d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008659d9: jmp 0x865891 */ goto L_00865891;
L_008659de:; BB(0x008659de);
    /* 008659de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008659e0: jmp 0x865891 */ goto L_00865891;
L_008659e5:; BB(0x008659e5);
    /* 008659e5: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008659e8: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008659eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008659ed: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008659ee: jmp 0x86587c */ goto L_0086587c;
L_008659f3:; BB(0x008659f3);
    /* 008659f3: cmp dword ptr [esi + 8], 0xb */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008659f7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008659fa: jg 0x865a04 */ if ((!fZ&&fS==fO)) goto L_00865a04;
L_008659fc:; BB(0x008659fc);
    /* 008659fc: mov edx, dword ptr [edx + 0x98] */ r_edx = R32((u32)(r_edx+0x98u));
    /* 00865a02: jmp 0x865a0a */ goto L_00865a0a;
L_00865a04:; BB(0x00865a04);
    /* 00865a04: mov edx, dword ptr [edx + 0x9c] */ r_edx = R32((u32)(r_edx+0x9cu));
L_00865a0a:; BB(0x00865a0a);
    /* 00865a0a: mov ecx, edi */ r_ecx = r_edi;
    /* 00865a0c: mov eax, ebx */ r_eax = r_ebx;
    /* 00865a0e: call 0x86571b */ r_esp -= 4; W32(r_esp, 0x865a13u); f_0086571b();
L_00865a13:; BB(0x00865a13);
    /* 00865a13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00865a15: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_00865a16:; BB(0x00865a16);
    /* 00865a16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00865a17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00865a18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00865a19: ret  */ FN_RET(0x008657b4); r_esp += 4; return;
}

void f_00865aed(void)
{
    FN_ENTER(0x00865aed);
    /* 00865aed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00865aef: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00865af0: ret  */ FN_RET(0x00865aed); r_esp += 4; return;
}

void f_00865af1(void)
{
    FN_ENTER(0x00865af1);
    /* 00865af1: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00865af4: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x865af9u); f_00865365();
    /* 00865af9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00865afb: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00865aff: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00865b02: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00865b04: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865b06: jne 0x865b1e */ if (!fZ) goto L_00865b1e;
L_00865b08:; BB(0x00865b08);
    /* 00865b08: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865b0b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x865b10u); f_00859c55();
    /* 00865b10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865b11: mov edi, eax */ r_edi = r_eax;
    /* 00865b13: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865b15: je 0x865b7a */ if (fZ) goto L_00865b7a;
L_00865b17:; BB(0x00865b17);
    /* 00865b17: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_00865b1e:; BB(0x00865b1e);
    /* 00865b1e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00865b21: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865b24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865b25: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865b28: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00865b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865b2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865b2d: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00865b30: push dword ptr [eax + 0xac] */ { u32 v = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00865b36: call dword ptr [ebp - 0x30] */ { u32 t = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, 0x865b39u); call_ind(t); }
    /* 00865b39: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00865b3a: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00865b3c: jle 0x865b5e */ if ((fZ||fS!=fO)) goto L_00865b5e;
L_00865b3e:; BB(0x00865b3e);
    /* 00865b3e: mov esi, dword ptr [ebp + 0x18] */ r_esi = R32((u32)(r_ebp+0x18u));
    /* 00865b41: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
L_00865b44:; BB(0x00865b44);
    /* 00865b44: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865b47: jbe 0x865b5e */ if ((fC||fZ)) goto L_00865b5e;
L_00865b49:; BB(0x00865b49);
    /* 00865b49: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00865b4b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00865b4e: mov bl, byte ptr [ebx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 00865b50: mov byte ptr [edx], bl */ W8((u32)(r_edx), (u8)r_ebx);
    /* 00865b52: inc dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865b54: inc dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865b57: dec dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00865b59: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00865b5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00865b5c: jg 0x865b44 */ if ((!fZ&&fS==fO)) goto L_00865b44;
L_00865b5e:; BB(0x00865b5e);
    /* 00865b5e: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865b62: je 0x865b6b */ if (fZ) goto L_00865b6b;
L_00865b64:; BB(0x00865b64);
    /* 00865b64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865b65: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x865b6au); f_00858882();
    /* 00865b6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00865b6b:; BB(0x00865b6b);
    /* 00865b6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00865b6d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00865b6e:; BB(0x00865b6e);
    /* 00865b6e: lea esp, [ebp - 0x54] */ r_esp = (u32)(r_ebp+0xffffffacu);
    /* 00865b71: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x865b76u); f_0085e5e7();
    /* 00865b76: ret  */ FN_RET(0x00865af1); r_esp += 4; return;
L_00865b7a:; BB(0x00865b7a);
    /* 00865b7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865b7d: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865b7f: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865b81: je 0x865b6b */ if (fZ) goto L_00865b6b;
L_00865b83:; BB(0x00865b83);
    /* 00865b83: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00865b86: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00865b89: jmp 0x865b8e */ goto L_00865b8e;
L_00865b8b:; BB(0x00865b8b);
    /* 00865b8b: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
L_00865b8e:; BB(0x00865b8e);
    /* 00865b8e: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865b91: je 0x865b6b */ if (fZ) goto L_00865b6b;
L_00865b93:; BB(0x00865b93);
    /* 00865b93: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 00865b97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00865b99: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00865b9c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00865b9f:; BB(0x00865b9f);
    /* 00865b9f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865ba0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00865ba1: cmp byte ptr [eax], cl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865ba3: je 0x865b9f */ if (fZ) goto L_00865b9f;
L_00865ba5:; BB(0x00865ba5);
    /* 00865ba5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00865ba8: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 00865bab: cmp ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00865bae: jg 0x865d0a */ if ((!fZ&&fS==fO)) goto L_00865d0a;
L_00865bb4:; BB(0x00865bb4);
    /* 00865bb4: je 0x865cd6 */ if (fZ) goto L_00865cd6;
L_00865bba:; BB(0x00865bba);
    /* 00865bba: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bbd: je 0x865c65 */ if (fZ) goto L_00865c65;
L_00865bc3:; BB(0x00865bc3);
    /* 00865bc3: cmp ecx, 0x41 */ {  u32 a = r_ecx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bc6: je 0x865bdb */ if (fZ) goto L_00865bdb;
L_00865bc8:; BB(0x00865bc8);
    /* 00865bc8: cmp ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bcb: je 0x865c28 */ if (fZ) goto L_00865c28;
L_00865bcd:; BB(0x00865bcd);
    /* 00865bcd: cmp ecx, 0x4d */ {  u32 a = r_ecx; u32 b = 0x4du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bd0: je 0x865bf4 */ if (fZ) goto L_00865bf4;
L_00865bd2:; BB(0x00865bd2);
    /* 00865bd2: cmp ecx, 0x61 */ {  u32 a = r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bd5: jne 0x865e32 */ if (!fZ) goto L_00865e32;
L_00865bdb:; BB(0x00865bdb);
    /* 00865bdb: push 0x9993b4 */ { u32 v = 0x9993b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00865be0: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865be3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865be4: call 0x862400 */ r_esp -= 4; W32(r_esp, 0x865be9u); f_00862400();
    /* 00865be9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865bea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865beb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bed: jne 0x865c45 */ if (!fZ) goto L_00865c45;
L_00865bef:; BB(0x00865bef);
    /* 00865bef: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00865bf2: jmp 0x865c59 */ goto L_00865c59;
L_00865bf4:; BB(0x00865bf4);
    /* 00865bf4: mov ecx, edx */ r_ecx = r_edx;
    /* 00865bf6: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865bf7: je 0x865c18 */ if (fZ) goto L_00865c18;
L_00865bf9:; BB(0x00865bf9);
    /* 00865bf9: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865bfa: je 0x865c1f */ if (fZ) goto L_00865c1f;
L_00865bfc:; BB(0x00865bfc);
    /* 00865bfc: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865bfd: je 0x865c0f */ if (fZ) goto L_00865c0f;
L_00865bff:; BB(0x00865bff);
    /* 00865bff: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865c00: jne 0x865e32 */ if (!fZ) goto L_00865e32;
L_00865c06:; BB(0x00865c06);
    /* 00865c06: mov byte ptr [ebp - 0x19], 0x42 */ W8((u32)(r_ebp+0xffffffe7u), 0x42u);
    /* 00865c0a: jmp 0x865e32 */ goto L_00865e32;
L_00865c0f:; BB(0x00865c0f);
    /* 00865c0f: mov byte ptr [ebp - 0x19], 0x62 */ W8((u32)(r_ebp+0xffffffe7u), 0x62u);
    /* 00865c13: jmp 0x865e32 */ goto L_00865e32;
L_00865c18:; BB(0x00865c18);
    /* 00865c18: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865c1f:; BB(0x00865c1f);
    /* 00865c1f: mov byte ptr [ebp - 0x19], 0x6d */ W8((u32)(r_ebp+0xffffffe7u), 0x6du);
    /* 00865c23: jmp 0x865e32 */ goto L_00865e32;
L_00865c28:; BB(0x00865c28);
    /* 00865c28: mov ecx, edx */ r_ecx = r_edx;
    /* 00865c2a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865c2b: je 0x865c35 */ if (fZ) goto L_00865c35;
L_00865c2d:; BB(0x00865c2d);
    /* 00865c2d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865c2e: je 0x865c3c */ if (fZ) goto L_00865c3c;
L_00865c30:; BB(0x00865c30);
    /* 00865c30: jmp 0x865e32 */ goto L_00865e32;
L_00865c35:; BB(0x00865c35);
    /* 00865c35: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865c3c:; BB(0x00865c3c);
    /* 00865c3c: mov byte ptr [ebp - 0x19], 0x48 */ W8((u32)(r_ebp+0xffffffe7u), 0x48u);
    /* 00865c40: jmp 0x865e32 */ goto L_00865e32;
L_00865c45:; BB(0x00865c45);
    /* 00865c45: push 0x9993b0 */ { u32 v = 0x9993b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00865c4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865c4b: call 0x862400 */ r_esp -= 4; W32(r_esp, 0x865c50u); f_00862400();
    /* 00865c50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865c51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865c52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865c54: jne 0x865c5c */ if (!fZ) goto L_00865c5c;
L_00865c56:; BB(0x00865c56);
    /* 00865c56: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00865c59:; BB(0x00865c59);
    /* 00865c59: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
L_00865c5c:; BB(0x00865c5c);
    /* 00865c5c: mov byte ptr [ebp - 0x19], 0x70 */ W8((u32)(r_ebp+0xffffffe7u), 0x70u);
    /* 00865c60: jmp 0x865e32 */ goto L_00865e32;
L_00865c65:; BB(0x00865c65);
    /* 00865c65: add dword ptr [ebp - 0x20], edx */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865c68: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865c6b: je 0x865e92 */ if (fZ) goto L_00865e92;
L_00865c71:; BB(0x00865c71);
    /* 00865c71: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865c74: jmp 0x865cc3 */ goto L_00865cc3;
L_00865c76:; BB(0x00865c76);
    /* 00865c76: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00865c78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865c7a: je 0x865e92 */ if (fZ) goto L_00865e92;
L_00865c80:; BB(0x00865c80);
    /* 00865c80: cmp al, 0x27 */ {  u32 a = (u8)r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865c82: je 0x865cce */ if (fZ) goto L_00865cce;
L_00865c84:; BB(0x00865c84);
    /* 00865c84: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00865c87: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00865c8a: mov ebx, dword ptr [ebx + 0x48] */ r_ebx = R32((u32)(r_ebx+0x48u));
    /* 00865c8d: test byte ptr [ebx + edx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ebx+r_edx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865c92: je 0x865cb2 */ if (fZ) goto L_00865cb2;
L_00865c94:; BB(0x00865c94);
    /* 00865c94: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865c97: jbe 0x865cb2 */ if ((fC||fZ)) goto L_00865cb2;
L_00865c99:; BB(0x00865c99);
    /* 00865c99: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865c9c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00865c9d: cmp byte ptr [ecx], 0 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865ca0: je 0x865e55 */ if (fZ) goto L_00865e55;
L_00865ca6:; BB(0x00865ca6);
    /* 00865ca6: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00865ca8: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00865caa: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865cac: mov eax, ecx */ r_eax = r_ecx;
    /* 00865cae: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00865cb0: jmp 0x865cb5 */ goto L_00865cb5;
L_00865cb2:; BB(0x00865cb2);
    /* 00865cb2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00865cb5:; BB(0x00865cb5);
    /* 00865cb5: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00865cb7: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865cb9: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 00865cbb: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865cbd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865cbe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00865cc1: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865cc3:; BB(0x00865cc3);
    /* 00865cc3: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865cc5: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865cc7: jne 0x865c76 */ if (!fZ) goto L_00865c76;
L_00865cc9:; BB(0x00865cc9);
    /* 00865cc9: jmp 0x865e92 */ goto L_00865e92;
L_00865cce:; BB(0x00865cce);
    /* 00865cce: inc dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865cd1: jmp 0x865e92 */ goto L_00865e92;
L_00865cd6:; BB(0x00865cd6);
    /* 00865cd6: mov ecx, edx */ r_ecx = r_edx;
    /* 00865cd8: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865cd9: je 0x865cfa */ if (fZ) goto L_00865cfa;
L_00865cdb:; BB(0x00865cdb);
    /* 00865cdb: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865cdc: je 0x865d01 */ if (fZ) goto L_00865d01;
L_00865cde:; BB(0x00865cde);
    /* 00865cde: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865cdf: je 0x865cf1 */ if (fZ) goto L_00865cf1;
L_00865ce1:; BB(0x00865ce1);
    /* 00865ce1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865ce2: jne 0x865e32 */ if (!fZ) goto L_00865e32;
L_00865ce8:; BB(0x00865ce8);
    /* 00865ce8: mov byte ptr [ebp - 0x19], 0x41 */ W8((u32)(r_ebp+0xffffffe7u), 0x41u);
    /* 00865cec: jmp 0x865e32 */ goto L_00865e32;
L_00865cf1:; BB(0x00865cf1);
    /* 00865cf1: mov byte ptr [ebp - 0x19], 0x61 */ W8((u32)(r_ebp+0xffffffe7u), 0x61u);
    /* 00865cf5: jmp 0x865e32 */ goto L_00865e32;
L_00865cfa:; BB(0x00865cfa);
    /* 00865cfa: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865d01:; BB(0x00865d01);
    /* 00865d01: mov byte ptr [ebp - 0x19], 0x64 */ W8((u32)(r_ebp+0xffffffe7u), 0x64u);
    /* 00865d05: jmp 0x865e32 */ goto L_00865e32;
L_00865d0a:; BB(0x00865d0a);
    /* 00865d0a: sub ecx, 0x68 */ {  u32 a = r_ecx; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d0d: je 0x865e1d */ if (fZ) goto L_00865e1d;
L_00865d13:; BB(0x00865d13);
    /* 00865d13: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d16: je 0x865e06 */ if (fZ) goto L_00865e06;
L_00865d1c:; BB(0x00865d1c);
    /* 00865d1c: sub ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d1f: je 0x865def */ if (fZ) goto L_00865def;
L_00865d25:; BB(0x00865d25);
    /* 00865d25: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d26: je 0x865d51 */ if (fZ) goto L_00865d51;
L_00865d28:; BB(0x00865d28);
    /* 00865d28: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d2b: jne 0x865e32 */ if (!fZ) goto L_00865e32;
L_00865d31:; BB(0x00865d31);
    /* 00865d31: mov ecx, edx */ r_ecx = r_edx;
    /* 00865d33: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00865d34: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d35: je 0x865d48 */ if (fZ) goto L_00865d48;
L_00865d37:; BB(0x00865d37);
    /* 00865d37: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00865d38: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d39: jne 0x865e32 */ if (!fZ) goto L_00865e32;
L_00865d3f:; BB(0x00865d3f);
    /* 00865d3f: mov byte ptr [ebp - 0x19], 0x59 */ W8((u32)(r_ebp+0xffffffe7u), 0x59u);
    /* 00865d43: jmp 0x865e32 */ goto L_00865e32;
L_00865d48:; BB(0x00865d48);
    /* 00865d48: mov byte ptr [ebp - 0x19], 0x79 */ W8((u32)(r_ebp+0xffffffe7u), 0x79u);
    /* 00865d4c: jmp 0x865e32 */ goto L_00865e32;
L_00865d51:; BB(0x00865d51);
    /* 00865d51: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00865d54: cmp dword ptr [ebx + 8], 0xb */ {  u32 a = R32((u32)(r_ebx+0x8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00865d58: jg 0x865d62 */ if ((!fZ&&fS==fO)) goto L_00865d62;
L_00865d5a:; BB(0x00865d5a);
    /* 00865d5a: mov eax, dword ptr [eax + 0x98] */ r_eax = R32((u32)(r_eax+0x98u));
    /* 00865d60: jmp 0x865d68 */ goto L_00865d68;
L_00865d62:; BB(0x00865d62);
    /* 00865d62: mov eax, dword ptr [eax + 0x9c] */ r_eax = R32((u32)(r_eax+0x9cu));
L_00865d68:; BB(0x00865d68);
    /* 00865d68: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865d6b: jne 0x865dde */ if (!fZ) goto L_00865dde;
L_00865d6d:; BB(0x00865d6d);
    /* 00865d6d: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865d70: jbe 0x865dde */ if ((fC||fZ)) goto L_00865dde;
L_00865d72:; BB(0x00865d72);
    /* 00865d72: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865d74: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00865d77: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00865d7a: mov ebx, dword ptr [ebx + 0x48] */ r_ebx = R32((u32)(r_ebx+0x48u));
    /* 00865d7d: test byte ptr [ebx + edx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ebx+r_edx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865d82: je 0x865d9b */ if (fZ) goto L_00865d9b;
L_00865d84:; BB(0x00865d84);
    /* 00865d84: cmp dword ptr [edi], 1 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865d87: jbe 0x865d9b */ if ((fC||fZ)) goto L_00865d9b;
L_00865d89:; BB(0x00865d89);
    /* 00865d89: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865d8a: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865d8d: je 0x865e55 */ if (fZ) goto L_00865e55;
L_00865d93:; BB(0x00865d93);
    /* 00865d93: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00865d95: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 00865d97: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865d99: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865d9b:; BB(0x00865d9b);
    /* 00865d9b: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00865d9d: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865d9f: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00865da1: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865da3: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00865da5: jmp 0x865de4 */ goto L_00865de4;
L_00865da7:; BB(0x00865da7);
    /* 00865da7: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865daa: jbe 0x865de4 */ if ((fC||fZ)) goto L_00865de4;
L_00865dac:; BB(0x00865dac);
    /* 00865dac: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00865daf: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00865db2: mov ebx, dword ptr [ebx + 0x48] */ r_ebx = R32((u32)(r_ebx+0x48u));
    /* 00865db5: test byte ptr [ebx + edx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ebx+r_edx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865dba: je 0x865dd3 */ if (fZ) goto L_00865dd3;
L_00865dbc:; BB(0x00865dbc);
    /* 00865dbc: cmp dword ptr [edi], 1 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865dbf: jbe 0x865dd3 */ if ((fC||fZ)) goto L_00865dd3;
L_00865dc1:; BB(0x00865dc1);
    /* 00865dc1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865dc2: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865dc5: je 0x865e55 */ if (fZ) goto L_00865e55;
L_00865dcb:; BB(0x00865dcb);
    /* 00865dcb: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00865dcd: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 00865dcf: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865dd1: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865dd3:; BB(0x00865dd3);
    /* 00865dd3: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00865dd5: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865dd7: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 00865dd9: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865ddb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865ddc: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865dde:; BB(0x00865dde);
    /* 00865dde: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865de0: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865de2: jne 0x865da7 */ if (!fZ) goto L_00865da7;
L_00865de4:; BB(0x00865de4);
    /* 00865de4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00865de7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00865dea: jmp 0x865e92 */ goto L_00865e92;
L_00865def:; BB(0x00865def);
    /* 00865def: mov ecx, edx */ r_ecx = r_edx;
    /* 00865df1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865df2: je 0x865df9 */ if (fZ) goto L_00865df9;
L_00865df4:; BB(0x00865df4);
    /* 00865df4: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865df5: je 0x865e00 */ if (fZ) goto L_00865e00;
L_00865df7:; BB(0x00865df7);
    /* 00865df7: jmp 0x865e32 */ goto L_00865e32;
L_00865df9:; BB(0x00865df9);
    /* 00865df9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865e00:; BB(0x00865e00);
    /* 00865e00: mov byte ptr [ebp - 0x19], 0x53 */ W8((u32)(r_ebp+0xffffffe7u), 0x53u);
    /* 00865e04: jmp 0x865e32 */ goto L_00865e32;
L_00865e06:; BB(0x00865e06);
    /* 00865e06: mov ecx, edx */ r_ecx = r_edx;
    /* 00865e08: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865e09: je 0x865e10 */ if (fZ) goto L_00865e10;
L_00865e0b:; BB(0x00865e0b);
    /* 00865e0b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865e0c: je 0x865e17 */ if (fZ) goto L_00865e17;
L_00865e0e:; BB(0x00865e0e);
    /* 00865e0e: jmp 0x865e32 */ goto L_00865e32;
L_00865e10:; BB(0x00865e10);
    /* 00865e10: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865e17:; BB(0x00865e17);
    /* 00865e17: mov byte ptr [ebp - 0x19], 0x4d */ W8((u32)(r_ebp+0xffffffe7u), 0x4du);
    /* 00865e1b: jmp 0x865e32 */ goto L_00865e32;
L_00865e1d:; BB(0x00865e1d);
    /* 00865e1d: mov ecx, edx */ r_ecx = r_edx;
    /* 00865e1f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865e20: je 0x865e27 */ if (fZ) goto L_00865e27;
L_00865e22:; BB(0x00865e22);
    /* 00865e22: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865e23: je 0x865e2e */ if (fZ) goto L_00865e2e;
L_00865e25:; BB(0x00865e25);
    /* 00865e25: jmp 0x865e32 */ goto L_00865e32;
L_00865e27:; BB(0x00865e27);
    /* 00865e27: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865e2e:; BB(0x00865e2e);
    /* 00865e2e: mov byte ptr [ebp - 0x19], 0x49 */ W8((u32)(r_ebp+0xffffffe7u), 0x49u);
L_00865e32:; BB(0x00865e32);
    /* 00865e32: mov al, byte ptr [ebp - 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe7u))) & 0xffu);
    /* 00865e35: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865e37: je 0x865e5c */ if (fZ) goto L_00865e5c;
L_00865e39:; BB(0x00865e39);
    /* 00865e39: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865e3c: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00865e3f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865e42: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865e45: mov ebx, edi */ r_ebx = r_edi;
    /* 00865e47: mov ecx, esi */ r_ecx = r_esi;
    /* 00865e49: call 0x8657b4 */ r_esp -= 4; W32(r_esp, 0x865e4eu); f_008657b4();
    /* 00865e4e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00865e51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865e53: jne 0x865de4 */ if (!fZ) goto L_00865de4;
L_00865e55:; BB(0x00865e55);
    /* 00865e55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00865e57: jmp 0x865b6e */ goto L_00865b6e;
L_00865e5c:; BB(0x00865e5c);
    /* 00865e5c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865e5f: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00865e61: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00865e64: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00865e67: mov ebx, dword ptr [ebx + 0x48] */ r_ebx = R32((u32)(r_ebx+0x48u));
    /* 00865e6a: test byte ptr [ebx + edx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ebx+r_edx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865e6f: je 0x865e84 */ if (fZ) goto L_00865e84;
L_00865e71:; BB(0x00865e71);
    /* 00865e71: cmp dword ptr [edi], 1 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865e74: jbe 0x865e84 */ if ((fC||fZ)) goto L_00865e84;
L_00865e76:; BB(0x00865e76);
    /* 00865e76: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00865e77: cmp byte ptr [ecx], 0 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865e7a: je 0x865e55 */ if (fZ) goto L_00865e55;
L_00865e7c:; BB(0x00865e7c);
    /* 00865e7c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00865e7e: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00865e80: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865e82: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865e84:; BB(0x00865e84);
    /* 00865e84: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00865e86: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00865e88: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 00865e8a: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865e8c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00865e8d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00865e90: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865e92:; BB(0x00865e92);
    /* 00865e92: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865e95: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865e97: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865e99: jne 0x865b8b */ if (!fZ) goto L_00865b8b;
L_00865e9f:; BB(0x00865e9f);
    /* 00865e9f: jmp 0x865b6b */ goto L_00865b6b;
}

