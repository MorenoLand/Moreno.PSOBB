#include "protos.h"

void f_00845060(void) /* sub_845060 */
{
    FN_ENTER(0x00845060);
    /* 00845060: movzx eax, byte ptr [0xae6f40] */ r_eax = (u32)R8((u32)(0xae6f40u));
    /* 00845067: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00845069: je 0x845071 */ if (fZ) goto L_00845071;
L_0084506b:; BB(0x0084506b);
    /* 0084506b: mov eax, 0xae6f60 */ r_eax = 0xae6f60u;
    /* 00845070: ret  */ FN_RET(0x00845060); r_esp += 4; return;
L_00845071:; BB(0x00845071);
    /* 00845071: mov ecx, 0xae6f60 */ r_ecx = 0xae6f60u;
    /* 00845076: call 0x8450ac */ r_esp -= 4; W32(r_esp, 0x84507bu); f_008450ac();
    /* 0084507b: push 0x844d94 */ { u32 v = 0x844d94u; r_esp -= 4; W32(r_esp, v); }
    /* 00845080: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x845085u); f_0085909d();
    /* 00845085: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00845086: movzx eax, byte ptr [0xae6f40] */ r_eax = (u32)R8((u32)(0xae6f40u));
    /* 0084508d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00845092: mov byte ptr [0xae6f40], al */ W8((u32)(0xae6f40u), (u8)r_eax);
    /* 00845097: jmp 0x84506b */ goto L_0084506b;
}

void f_0084509c(void) /* sub_84509C */
{
    FN_ENTER(0x0084509c);
    /* 0084509c: push dword ptr [ecx + 0x800] */ { u32 v = R32((u32)(r_ecx+0x800u)); r_esp -= 4; W32(r_esp, v); }
    /* 008450a2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8450a7u); f_00857e98();
    /* 008450a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008450a8: ret  */ FN_RET(0x0084509c); r_esp += 4; return;
}

void f_008450ac(void) /* sub_8450AC */
{
    FN_ENTER(0x008450ac);
    /* 008450ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008450ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008450ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008450af: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008450b5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008450b7: mov dword ptr [ebp + 0x800], 0 */ W32((u32)(r_ebp+0x800u), 0x0u);
    /* 008450c1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008450c3: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x8450c8u); f_006dc358();
    /* 008450c8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_008450ca:; BB(0x008450ca);
    /* 008450ca: cmp eax, dword ptr [edx*8 + 0xa22bc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*8+0xa22bc8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008450d1: je 0x84517f */ if (fZ) goto L_0084517f;
L_008450d7:; BB(0x008450d7);
    /* 008450d7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008450da: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008450dd: jb 0x8450ca */ if (fC) goto L_008450ca;
L_008450df:; BB(0x008450df);
    /* 008450df: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008450e1: je 0x845173 */ if (fZ) goto L_00845173;
L_008450e7:; BB(0x008450e7);
    /* 008450e7: push 0x97edc8 */ { u32 v = 0x97edc8u; r_esp -= 4; W32(r_esp, v); }
    /* 008450ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008450ed: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008450ef: call 0x85a807 */ r_esp -= 4; W32(r_esp, 0x8450f4u); f_0085a807();
    /* 008450f4: mov esi, eax */ r_esi = r_eax;
    /* 008450f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008450f9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008450fb: je 0x845155 */ if (fZ) goto L_00845155;
L_008450fd:; BB(0x008450fd);
    /* 008450fd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008450ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00845101: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00845102: call 0x85a8a9 */ r_esp -= 4; W32(r_esp, 0x845107u); f_0085a8a9();
    /* 00845107: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00845108: call 0x85aa54 */ r_esp -= 4; W32(r_esp, 0x84510du); f_0085aa54();
    /* 0084510d: mov ebx, eax */ r_ebx = r_eax;
    /* 0084510f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00845112: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00845114: jle 0x84514e */ if ((fZ||fS!=fO)) goto L_0084514e;
L_00845116:; BB(0x00845116);
    /* 00845116: lea edx, [ebx + ebx + 0x10] */ r_edx = (u32)(r_ebx+r_ebx+0x10u);
    /* 0084511a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084511b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x845120u); f_008581c5();
    /* 00845120: mov dword ptr [ebp + 0x800], eax */ W32((u32)(r_ebp+0x800u), r_eax);
    /* 00845126: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 00845129: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084512a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084512c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084512d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x845132u); f_0086b688();
    /* 00845132: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00845134: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00845135: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00845136: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00845137: call 0x85a8a9 */ r_esp -= 4; W32(r_esp, 0x84513cu); f_0085a8a9();
    /* 0084513c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084513d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084513e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00845140: push dword ptr [ebp + 0x800] */ { u32 v = R32((u32)(r_ebp+0x800u)); r_esp -= 4; W32(r_esp, v); }
    /* 00845146: call 0x859678 */ r_esp -= 4; W32(r_esp, 0x84514bu); f_00859678();
    /* 0084514b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0084514e:; BB(0x0084514e);
    /* 0084514e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084514f: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x845154u); f_00859710();
    /* 00845154: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00845155:; BB(0x00845155);
    /* 00845155: push 0x978 */ { u32 v = 0x978u; r_esp -= 4; W32(r_esp, v); }
    /* 0084515a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0084515e: call 0x763040 */ r_esp -= 4; W32(r_esp, 0x845163u); f_00763040();
    /* 00845163: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00845164: push dword ptr [ebp + 0x800] */ { u32 v = R32((u32)(r_ebp+0x800u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084516a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0084516e: call 0x763054 */ r_esp -= 4; W32(r_esp, 0x845173u); f_00763054();
L_00845173:; BB(0x00845173);
    /* 00845173: mov eax, ebp */ r_eax = r_ebp;
    /* 00845175: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084517b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084517c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084517d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084517e: ret  */ FN_RET(0x008450ac); r_esp += 4; return;
L_0084517f:; BB(0x0084517f);
    /* 0084517f: mov esi, dword ptr [edx*8 + 0xa22bcc] */ r_esi = R32((u32)(r_edx*8+0xa22bccu));
    /* 00845186: jmp 0x8450df */ goto L_008450df;
}

void f_0084518c(void) /* sub_84518C */
{
    FN_ENTER(0x0084518c);
    /* 0084518c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084518f: mov eax, edx */ r_eax = r_edx;
    /* 00845191: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00845194: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845196: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845198: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084519a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084519c: je 0x8451c3 */ if (fZ) goto L_008451c3;
L_0084519e:; BB(0x0084519e);
    /* 0084519e: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008451a2: mov ebx, eax */ r_ebx = r_eax;
    /* 008451a4: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008451a7: mov esi, ecx */ r_esi = r_ecx;
L_008451a9:; BB(0x008451a9);
    /* 008451a9: mov edx, dword ptr [esi - 4] */ r_edx = R32((u32)(r_esi+0xfffffffcu));
    /* 008451ac: add esi, -8 */ {  u32 a = r_esi; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008451af: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008451b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008451b4: je 0x8451b8 */ if (fZ) goto L_008451b8;
L_008451b6:; BB(0x008451b6);
    /* 008451b6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x8451b8u); call_ind(t); }
L_008451b8:; BB(0x008451b8);
    /* 008451b8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008451ba: jne 0x8451a9 */ if (!fZ) goto L_008451a9;
L_008451bc:; BB(0x008451bc);
    /* 008451bc: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008451c0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_008451c3:; BB(0x008451c3);
    /* 008451c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008451c6: ret  */ FN_RET(0x0084518c); r_esp += 4; return;
}

void f_008451c8(void) /* sub_8451C8 */
{
    FN_ENTER(0x008451c8);
    /* 008451c8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008451cb: mov eax, edx */ r_eax = r_edx;
    /* 008451cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008451cf: je 0x8451f3 */ if (fZ) goto L_008451f3;
L_008451d1:; BB(0x008451d1);
    /* 008451d1: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008451d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008451d7: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008451da: mov esi, eax */ r_esi = r_eax;
L_008451dc:; BB(0x008451dc);
    /* 008451dc: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008451de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008451e0: je 0x8451e4 */ if (fZ) goto L_008451e4;
L_008451e2:; BB(0x008451e2);
    /* 008451e2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x8451e4u); call_ind(t); }
L_008451e4:; BB(0x008451e4);
    /* 008451e4: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008451e7: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008451ea: jne 0x8451dc */ if (!fZ) goto L_008451dc;
L_008451ec:; BB(0x008451ec);
    /* 008451ec: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008451f0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_008451f3:; BB(0x008451f3);
    /* 008451f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008451f6: ret  */ FN_RET(0x008451c8); r_esp += 4; return;
}

void f_008451f8(void) /* sub_8451F8 */
{
    FN_ENTER(0x008451f8);
    /* 008451f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008451f9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008451fc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008451fe: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00845201: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00845204: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084520a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084520c: jne 0x8452a1 */ if (!fZ) goto L_008452a1;
L_00845212:; BB(0x00845212);
    /* 00845212: mov eax, ecx */ r_eax = r_ecx;
    /* 00845214: and eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00845219: je 0x8453b1 */ if (fZ) goto L_008453b1;
L_0084521f:; BB(0x0084521f);
    /* 0084521f: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00845224: je 0x84527e */ if (fZ) goto L_0084527e;
L_00845226:; BB(0x00845226);
    /* 00845226: cmp eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084522b: jne 0x845250 */ if (!fZ) goto L_00845250;
L_0084522d:; BB(0x0084522d);
    /* 0084522d: fld dword ptr [ecx*4 + 0x989560] */ FPUSH(R_F32((u32)(r_ecx*4+0x989560u)));
    /* 00845234: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00845238: fchs  */ ST(0) = -ST(0);
    /* 0084523a: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0084523c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084523e: fld dword ptr [ecx*4 + 0x98e560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98e560u)));
    /* 00845245: fchs  */ ST(0) = -ST(0);
    /* 00845247: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00845249: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084524c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084524d: ret 4 */ FN_RET(0x008451f8); r_esp += 8; return;
L_00845250:; BB(0x00845250);
    /* 00845250: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00845255: jne 0x8453aa */ if (!fZ) goto L_008453aa;
L_0084525b:; BB(0x0084525b);
    /* 0084525b: mov eax, ecx */ r_eax = r_ecx;
    /* 0084525d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084525f: fld dword ptr [eax*4 + 0x98f560] */ FPUSH(R_F32((u32)(r_eax*4+0x98f560u)));
    /* 00845266: fchs  */ ST(0) = -ST(0);
    /* 00845268: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0084526a: mov edx, dword ptr [ecx*4 + 0x988560] */ r_edx = R32((u32)(r_ecx*4+0x988560u));
    /* 00845271: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00845275: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00845277: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084527a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084527b: ret 4 */ FN_RET(0x008451f8); r_esp += 8; return;
L_0084527e:; BB(0x0084527e);
    /* 0084527e: fld dword ptr [ecx*4 + 0x98a560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98a560u)));
    /* 00845285: mov eax, ecx */ r_eax = r_ecx;
    /* 00845287: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00845289: mov ebp, dword ptr [eax*4 + 0x98d560] */ r_ebp = R32((u32)(r_eax*4+0x98d560u));
    /* 00845290: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 00845292: fchs  */ ST(0) = -ST(0);
    /* 00845294: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00845298: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0084529a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084529d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084529e: ret 4 */ FN_RET(0x008451f8); r_esp += 8; return;
L_008452a1:; BB(0x008452a1);
    /* 008452a1: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 008452a4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 008452a7: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 008452aa: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008452ad: fadd dword ptr [ebp*4 + 0x98b550] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x98b550u));
    /* 008452b4: fmul dword ptr [0x98b55c] */ ST(0) = ST(0) * R_F32((u32)(0x98b55cu));
    /* 008452ba: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008452bc: and ebp, 0xc00 */ {  u32 a = r_ebp; u32 b = 0xc00u; u32 r = (a & b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 008452c2: je 0x8453d0 */ if (fZ) goto L_008453d0;
L_008452c8:; BB(0x008452c8);
    /* 008452c8: cmp ebp, 0x400 */ {  u32 a = r_ebp; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008452ce: je 0x845362 */ if (fZ) goto L_00845362;
L_008452d4:; BB(0x008452d4);
    /* 008452d4: cmp ebp, 0x800 */ {  u32 a = r_ebp; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008452da: jne 0x845316 */ if (!fZ) goto L_00845316;
L_008452dc:; BB(0x008452dc);
    /* 008452dc: fld dword ptr [ecx*4 + 0x989560] */ FPUSH(R_F32((u32)(r_ecx*4+0x989560u)));
    /* 008452e3: fld dword ptr [ecx*4 + 0x989564] */ FPUSH(R_F32((u32)(r_ecx*4+0x989564u)));
    /* 008452ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008452ec: fchs  */ ST(0) = -ST(0);
    /* 008452ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008452f0: fchs  */ ST(0) = -ST(0);
    /* 008452f2: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008452f4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008452f6: fld dword ptr [ecx*4 + 0x98e560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98e560u)));
    /* 008452fd: fld dword ptr [eax*4 + 0x98e560] */ FPUSH(R_F32((u32)(r_eax*4+0x98e560u)));
    /* 00845304: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845306: fchs  */ ST(0) = -ST(0);
    /* 00845308: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084530a: fchs  */ ST(0) = -ST(0);
    /* 0084530c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084530e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845310: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845312: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845314: jmp 0x845390 */ goto L_00845390;
L_00845316:; BB(0x00845316);
    /* 00845316: fldz  */ FPUSH(0.0);
    /* 00845318: fldz  */ FPUSH(0.0);
    /* 0084531a: fldz  */ FPUSH(0.0);
    /* 0084531c: fldz  */ FPUSH(0.0);
    /* 0084531e: cmp ebp, 0xc00 */ {  u32 a = r_ebp; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00845324: jne 0x845390 */ if (!fZ) goto L_00845390;
L_00845326:; BB(0x00845326);
    /* 00845326: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00845328: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084532a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084532c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084532e: fld dword ptr [ecx*4 + 0x988560] */ FPUSH(R_F32((u32)(r_ecx*4+0x988560u)));
    /* 00845335: fld dword ptr [ecx*4 + 0x988564] */ FPUSH(R_F32((u32)(r_ecx*4+0x988564u)));
    /* 0084533c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0084533e: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00845340: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00845342: fld dword ptr [ebp*4 + 0x98f560] */ FPUSH(R_F32((u32)(r_ebp*4+0x98f560u)));
    /* 00845349: fld dword ptr [eax*4 + 0x98f560] */ FPUSH(R_F32((u32)(r_eax*4+0x98f560u)));
    /* 00845350: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845352: fchs  */ ST(0) = -ST(0);
    /* 00845354: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845356: fchs  */ ST(0) = -ST(0);
    /* 00845358: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084535a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084535c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084535e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845360: jmp 0x845390 */ goto L_00845390;
L_00845362:; BB(0x00845362);
    /* 00845362: fld dword ptr [ecx*4 + 0x98a560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98a560u)));
    /* 00845369: fld dword ptr [ecx*4 + 0x98a564] */ FPUSH(R_F32((u32)(r_ecx*4+0x98a564u)));
    /* 00845370: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00845372: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00845374: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00845376: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845378: fchs  */ ST(0) = -ST(0);
    /* 0084537a: fld dword ptr [ebp*4 + 0x98d560] */ FPUSH(R_F32((u32)(r_ebp*4+0x98d560u)));
    /* 00845381: fld dword ptr [eax*4 + 0x98d560] */ FPUSH(R_F32((u32)(r_eax*4+0x98d560u)));
    /* 00845388: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084538a: fchs  */ ST(0) = -ST(0);
    /* 0084538c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084538e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00845390:; BB(0x00845390);
    /* 00845390: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00845392: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845394: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845396: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845398: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0084539a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084539c: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0084539e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008453a0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008453a4: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 008453a6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008453a8: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_008453aa:; BB(0x008453aa);
    /* 008453aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008453ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008453ae: ret 4 */ FN_RET(0x008451f8); r_esp += 8; return;
L_008453b1:; BB(0x008453b1);
    /* 008453b1: mov eax, dword ptr [ecx*4 + 0x98b560] */ r_eax = R32((u32)(r_ecx*4+0x98b560u));
    /* 008453b8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008453ba: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008453bc: mov edx, dword ptr [ecx*4 + 0x98c560] */ r_edx = R32((u32)(r_ecx*4+0x98c560u));
    /* 008453c3: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008453c7: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 008453c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008453cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008453cd: ret 4 */ FN_RET(0x008451f8); r_esp += 8; return;
L_008453d0:; BB(0x008453d0);
    /* 008453d0: fld dword ptr [ecx*4 + 0x98b560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98b560u)));
    /* 008453d7: fld dword ptr [ecx*4 + 0x98b564] */ FPUSH(R_F32((u32)(r_ecx*4+0x98b564u)));
    /* 008453de: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008453e0: fld dword ptr [ecx*4 + 0x98c560] */ FPUSH(R_F32((u32)(r_ecx*4+0x98c560u)));
    /* 008453e7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008453e9: fld dword ptr [eax*4 + 0x98c560] */ FPUSH(R_F32((u32)(r_eax*4+0x98c560u)));
    /* 008453f0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008453f2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008453f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008453f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008453f8: jmp 0x845390 */ goto L_00845390;
}

void f_008453fc(void) /* sub_8453FC */
{
    FN_ENTER(0x008453fc);
    /* 008453fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008453fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008453fe: mov eax, ecx */ r_eax = r_ecx;
    /* 00845400: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00845406: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00845409: je 0x845424 */ if (fZ) goto L_00845424;
L_0084540b:; BB(0x0084540b);
    /* 0084540b: mov edx, dword ptr [0xacd538] */ r_edx = R32((u32)(0xacd538u));
    /* 00845411: mov ebx, 0xa22c60 */ r_ebx = 0xa22c60u;
    /* 00845416: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084541c: mov dword ptr [0xacd538], edx */ W32((u32)(0xacd538u), r_edx);
    /* 00845422: jmp 0x84543b */ goto L_0084543b;
L_00845424:; BB(0x00845424);
    /* 00845424: mov edx, dword ptr [0xacd538] */ r_edx = R32((u32)(0xacd538u));
    /* 0084542a: mov ebx, 0xa22cc0 */ r_ebx = 0xa22cc0u;
    /* 0084542f: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00845435: mov dword ptr [0xacd538], edx */ W32((u32)(0xacd538u), r_edx);
L_0084543b:; BB(0x0084543b);
    /* 0084543b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084543d: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 00845440: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00845446: je 0x84548e */ if (fZ) goto L_0084548e;
L_00845448:; BB(0x00845448);
    /* 00845448: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0084544b: mov esi, eax */ r_esi = r_eax;
L_0084544d:; BB(0x0084544d);
    /* 0084544d: mov ecx, edx */ r_ecx = r_edx;
    /* 0084544f: and ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00845455: cmp ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084545b: je 0x845469 */ if (fZ) goto L_00845469;
L_0084545d:; BB(0x0084545d);
    /* 0084545d: mov dword ptr [0xacd530], 0 */ W32((u32)(0xacd530u), 0x0u);
    /* 00845467: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
L_00845469:; BB(0x00845469);
    /* 00845469: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084546a: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0084546d: call dword ptr [ebx + edx*4 - 0x80] */ { u32 t = R32((u32)(r_ebx+r_edx*4+0xffffff80u)); r_esp -= 4; W32(r_esp, 0x845471u); call_ind(t); }
    /* 00845471: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00845472: movsx edx, word ptr [esi + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00845476: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845478: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084547a: lea esi, [esi + edx + 4] */ r_esi = (u32)(r_esi+r_edx+0x4u);
    /* 0084547e: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00845480: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 00845483: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00845489: jne 0x84544d */ if (!fZ) goto L_0084544d;
L_0084548b:; BB(0x0084548b);
    /* 0084548b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0084548e:; BB(0x0084548e);
    /* 0084548e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0084548f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00845490: ret  */ FN_RET(0x008453fc); r_esp += 4; return;
}

void f_00845494(void) /* sub_845494 */
{
    FN_ENTER(0x00845494);
    /* 00845494: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00845495: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00845496: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0084549a: mov esi, dword ptr [0xacd530] */ r_esi = R32((u32)(0xacd530u));
    /* 008454a0: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 008454a3: movzx ecx, bx */ r_ecx = (u32)(u16)r_ebx;
    /* 008454a6: sar ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008454a9: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 008454ac: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 008454af: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008454b1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008454b3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008454b5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008454b7: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008454b9: add eax, dword ptr [0xacd534] */ {  u32 a = r_eax; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008454bf: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008454c1: jg 0x8454c5 */ if ((!fZ&&fS==fO)) goto L_008454c5;
L_008454c3:; BB(0x008454c3);
    /* 008454c3: mov ecx, esi */ r_ecx = r_esi;
L_008454c5:; BB(0x008454c5);
    /* 008454c5: mov dword ptr [0xacd530], ecx */ W32((u32)(0xacd530u), r_ecx);
    /* 008454cb: mov ecx, dword ptr [0xacd538] */ r_ecx = R32((u32)(0xacd538u));
    /* 008454d1: or ecx, 0x900 */ {  u32 a = r_ecx; u32 b = 0x900u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008454d7: mov dword ptr [0xacd538], ecx */ W32((u32)(0xacd538u), r_ecx);
L_008454dd:; BB(0x008454dd);
    /* 008454dd: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 008454e3: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 008454e9: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 008454ef: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008454f1: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 008454f3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008454f5: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 008454fb: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008454fe: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00845500: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845502: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845504: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00845507: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845509: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084550b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084550d: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0084550f: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00845512: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00845518: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084551a: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00845520: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00845526: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845528: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084552a: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00845530: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00845532: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845534: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00845537: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 0084553d: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0084553f: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00845545: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845547: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845549: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 0084554f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845551: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00845557: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845559: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084555b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0084555e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00845561: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00845564: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845567: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084556a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084556c: jne 0x8454dd */ if (!fZ) goto L_008454dd;
L_00845572:; BB(0x00845572);
    /* 00845572: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00845573: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00845574: ret  */ FN_RET(0x00845494); r_esp += 4; return;
}

void f_00845578(void) /* sub_845578 */
{
    FN_ENTER(0x00845578);
    /* 00845578: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00845579: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084557a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0084557e: mov ebx, dword ptr [0xacd530] */ r_ebx = R32((u32)(0xacd530u));
    /* 00845584: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00845587: movzx esi, cx */ r_esi = (u32)(u16)r_ecx;
    /* 0084558a: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0084558d: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 00845590: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00845593: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845595: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845597: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845599: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084559b: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084559d: add eax, dword ptr [0xacd534] */ {  u32 a = r_eax; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008455a3: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008455a5: jg 0x8455a9 */ if ((!fZ&&fS==fO)) goto L_008455a9;
L_008455a7:; BB(0x008455a7);
    /* 008455a7: mov esi, ebx */ r_esi = r_ebx;
L_008455a9:; BB(0x008455a9);
    /* 008455a9: mov ebx, dword ptr [0xacd538] */ r_ebx = R32((u32)(0xacd538u));
    /* 008455af: and ebx, 0xfffff6ff */ {  u32 a = r_ebx; u32 b = 0xfffff6ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008455b5: mov dword ptr [0xacd530], esi */ W32((u32)(0xacd530u), r_esi);
    /* 008455bb: mov dword ptr [0xacd538], ebx */ W32((u32)(0xacd538u), r_ebx);
    /* 008455c1: jmp 0x8455c6 */ goto L_008455c6;
L_008455c3:; BB(0x008455c3);
    /* 008455c3: fstp dword ptr [eax - 0xc] */ W_F32((u32)(r_eax+0xfffffff4u), ST(0)); FPOP();
L_008455c6:; BB(0x008455c6);
    /* 008455c6: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 008455cc: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 008455d2: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 008455d8: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008455da: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 008455dc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008455de: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 008455e4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008455e7: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 008455e9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008455eb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008455ed: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008455f0: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008455f2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008455f4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008455f6: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008455f8: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008455fb: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00845601: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845603: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00845609: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 0084560f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845611: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845613: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00845619: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084561b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084561d: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00845620: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00845626: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00845628: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 0084562e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845630: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845632: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00845638: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084563a: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00845640: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845642: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845644: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00845647: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 0084564d: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00845653: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00845656: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845658: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0084565b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084565d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084565f: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00845661: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00845667: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0084566a: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0084566c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084566e: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00845670: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845672: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00845675: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845678: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 0084567e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845680: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00845686: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845688: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084568a: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00845690: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845692: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845694: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00845697: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 0084569d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084569f: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 008456a5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008456a7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008456a9: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 008456af: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008456b1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008456b3: mov dword ptr [eax + 0x18], 0xffffffff */ W32((u32)(r_eax+0x18u), 0xffffffffu);
    /* 008456ba: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008456bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008456bf: jne 0x8455c3 */ if (!fZ) goto L_008455c3;
L_008456c5:; BB(0x008456c5);
    /* 008456c5: fstp dword ptr [eax - 0xc] */ W_F32((u32)(r_eax+0xfffffff4u), ST(0)); FPOP();
    /* 008456c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008456c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008456ca: ret  */ FN_RET(0x00845578); r_esp += 4; return;
}

void f_008456cc(void) /* sub_8456CC */
{
    FN_ENTER(0x008456cc);
    /* 008456cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008456cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008456ce: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008456d2: mov esi, dword ptr [0xacd530] */ r_esi = R32((u32)(0xacd530u));
    /* 008456d8: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 008456db: movzx ecx, bx */ r_ecx = (u32)(u16)r_ebx;
    /* 008456de: sar ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008456e1: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 008456e4: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 008456e7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008456e9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008456eb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008456ed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008456ef: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008456f1: add eax, dword ptr [0xacd534] */ {  u32 a = r_eax; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008456f7: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008456f9: jg 0x8456fd */ if ((!fZ&&fS==fO)) goto L_008456fd;
L_008456fb:; BB(0x008456fb);
    /* 008456fb: mov ecx, esi */ r_ecx = r_esi;
L_008456fd:; BB(0x008456fd);
    /* 008456fd: mov dword ptr [0xacd530], ecx */ W32((u32)(0xacd530u), r_ecx);
    /* 00845703: mov ecx, dword ptr [0xacd538] */ r_ecx = R32((u32)(0xacd538u));
    /* 00845709: or ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0084570f: and ecx, 0xfffff7ff */ {  u32 a = r_ecx; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00845715: mov dword ptr [0xacd538], ecx */ W32((u32)(0xacd538u), r_ecx);
L_0084571b:; BB(0x0084571b);
    /* 0084571b: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00845721: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00845727: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 0084572d: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0084572f: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00845731: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845733: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00845739: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0084573c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0084573e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845740: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845742: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00845745: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845747: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845749: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084574b: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0084574d: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00845750: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00845756: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845758: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 0084575e: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00845764: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845766: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845768: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 0084576e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00845770: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845772: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00845775: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 0084577b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0084577d: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00845783: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845785: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845787: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 0084578d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084578f: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00845795: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845797: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845799: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0084579c: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 008457a2: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 008457a8: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 008457ab: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008457ad: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 008457b0: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008457b2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008457b4: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008457b6: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 008457bc: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 008457bf: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 008457c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008457c3: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008457c5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008457c7: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008457ca: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 008457d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008457d2: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 008457d8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008457da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008457dc: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 008457e2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008457e4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008457e6: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 008457e9: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 008457ef: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008457f1: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 008457f7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008457f9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008457fb: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00845801: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845803: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845805: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00845808: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0084580b: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 0084580e: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845811: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845814: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00845816: jne 0x84571b */ if (!fZ) goto L_0084571b;
L_0084581c:; BB(0x0084581c);
    /* 0084581c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084581d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084581e: ret  */ FN_RET(0x008456cc); r_esp += 4; return;
}

void f_00845820(void) /* sub_845820 */
{
    FN_ENTER(0x00845820);
    /* 00845820: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00845821: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00845822: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00845823: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00845826: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0084582a: mov esi, dword ptr [0xacd530] */ r_esi = R32((u32)(0xacd530u));
    /* 00845830: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00845832: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 00845835: and edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084583b: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0084583e: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00845841: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00845843: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00845845: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00845847: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00845849: add ebp, dword ptr [0xacd534] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084584f: sar ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00845852: lea ecx, [ecx + 8] */ r_ecx = (u32)(r_ecx+0x8u);
    /* 00845855: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845857: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00845859: jg 0x84585d */ if ((!fZ&&fS==fO)) goto L_0084585d;
L_0084585b:; BB(0x0084585b);
    /* 0084585b: mov eax, esi */ r_eax = r_esi;
L_0084585d:; BB(0x0084585d);
    /* 0084585d: mov dword ptr [0xacd530], eax */ W32((u32)(0xacd530u), r_eax);
    /* 00845862: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 00845867: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084586c: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 00845871: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00845873: je 0x845b35 */ if (fZ) goto L_00845b35;
L_00845879:; BB(0x00845879);
    /* 00845879: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084587f: je 0x8459d8 */ if (fZ) goto L_008459d8;
L_00845885:; BB(0x00845885);
    /* 00845885: fld dword ptr [0x98c5b0] */ FPUSH(R_F32((u32)(0x98c5b0u)));
L_0084588b:; BB(0x0084588b);
    /* 0084588b: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00845891: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00845897: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0084589a: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0084589c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084589e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008458a0: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 008458a6: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008458a9: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008458ab: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008458ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008458af: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008458b2: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 008458b8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008458ba: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008458bc: mov esi, eax */ r_esi = r_eax;
    /* 008458be: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008458c1: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 008458c4: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008458c7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 008458ca: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008458cd: fadd dword ptr [esi*4 + 0x98c590] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x98c590u));
    /* 008458d4: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008458d6: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008458d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008458da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008458dc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008458de: fadd dword ptr [ebp + edx*8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8));
    /* 008458e2: fstp dword ptr [ebp + edx*8] */ W_F32((u32)(r_ebp+r_edx*8), ST(0)); FPOP();
    /* 008458e6: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 008458ec: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008458ee: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 008458f4: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008458f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008458f8: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 008458fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845900: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00845906: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00845908: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084590a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084590c: fadd dword ptr [ebp + edx*8 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8+0x4u));
    /* 00845910: fstp dword ptr [ebp + edx*8 + 4] */ W_F32((u32)(r_ebp+r_edx*8+0x4u), ST(0)); FPOP();
    /* 00845914: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 0084591a: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0084591c: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00845922: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00845924: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845926: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 0084592c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084592e: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00845934: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00845936: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845938: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084593a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084593c: fadd dword ptr [ebp + edx*8 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8+0x8u));
    /* 00845940: fstp dword ptr [ebp + edx*8 + 8] */ W_F32((u32)(r_ebp+r_edx*8+0x8u), ST(0)); FPOP();
    /* 00845944: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 0084594a: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00845950: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00845953: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845955: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00845958: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084595a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084595c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0084595e: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00845964: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00845967: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00845969: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084596b: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0084596d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084596f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845971: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00845974: fadd dword ptr [ebp + edx*8 + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8+0xcu));
    /* 00845978: fstp dword ptr [ebp + edx*8 + 0xc] */ W_F32((u32)(r_ebp+r_edx*8+0xcu), ST(0)); FPOP();
    /* 0084597c: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00845982: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845984: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 0084598a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084598c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084598e: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00845991: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00845997: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845999: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084599b: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084599d: fadd dword ptr [ebp + edx*8 + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8+0x10u));
    /* 008459a1: fstp dword ptr [ebp + edx*8 + 0x10] */ W_F32((u32)(r_ebp+r_edx*8+0x10u), ST(0)); FPOP();
    /* 008459a5: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 008459ab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008459ad: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 008459b3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008459b5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008459b7: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 008459bd: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008459bf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008459c1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008459c3: fadd dword ptr [ebp + edx*8 + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8+0x14u));
    /* 008459c7: fstp dword ptr [ebp + edx*8 + 0x14] */ W_F32((u32)(r_ebp+r_edx*8+0x14u), ST(0)); FPOP();
    /* 008459cb: jne 0x84588b */ if (!fZ) goto L_0084588b;
L_008459d1:; BB(0x008459d1);
    /* 008459d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008459d3: jmp 0x845c6d */ goto L_00845c6d;
L_008459d8:; BB(0x008459d8);
    /* 008459d8: fld dword ptr [0x98c5b0] */ FPUSH(R_F32((u32)(0x98c5b0u)));
L_008459de:; BB(0x008459de);
    /* 008459de: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 008459e4: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 008459ea: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 008459ed: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008459ef: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008459f1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008459f3: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 008459f9: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008459fc: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008459fe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845a00: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845a02: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00845a05: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00845a0b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845a0d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00845a0f: mov esi, eax */ r_esi = r_eax;
    /* 00845a11: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00845a14: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00845a17: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00845a1b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00845a1f: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00845a22: fadd dword ptr [esi*4 + 0x98c590] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x98c590u));
    /* 00845a29: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00845a2b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845a2d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845a2f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845a31: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845a33: fadd dword ptr [ebp + edx*8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8));
    /* 00845a37: fstp dword ptr [ebp + edx*8] */ W_F32((u32)(r_ebp+r_edx*8), ST(0)); FPOP();
    /* 00845a3b: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00845a41: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845a43: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00845a49: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845a4b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845a4d: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00845a53: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845a55: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00845a5b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00845a5d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845a5f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00845a61: fadd dword ptr [ebp + edx*8 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8+0x4u));
    /* 00845a65: fstp dword ptr [ebp + edx*8 + 4] */ W_F32((u32)(r_ebp+r_edx*8+0x4u), ST(0)); FPOP();
    /* 00845a69: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00845a6f: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00845a71: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00845a77: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00845a79: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845a7b: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00845a81: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00845a83: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00845a89: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00845a8b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845a8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845a8f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845a91: fadd dword ptr [ebp + edx*8 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8+0x8u));
    /* 00845a95: fstp dword ptr [ebp + edx*8 + 8] */ W_F32((u32)(r_ebp+r_edx*8+0x8u), ST(0)); FPOP();
    /* 00845a99: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00845a9f: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00845aa5: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00845aa8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845aaa: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00845aad: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845aaf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845ab1: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00845ab3: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00845ab9: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00845abc: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00845abe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845ac0: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00845ac2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845ac4: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845ac6: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00845ac9: fadd dword ptr [ebp + edx*8 + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8+0xcu));
    /* 00845acd: fstp dword ptr [ebp + edx*8 + 0xc] */ W_F32((u32)(r_ebp+r_edx*8+0xcu), ST(0)); FPOP();
    /* 00845ad1: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00845ad7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845ad9: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00845adf: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845ae1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845ae3: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00845ae6: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00845aec: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845aee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845af0: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845af2: fadd dword ptr [ebp + edx*8 + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8+0x10u));
    /* 00845af6: fstp dword ptr [ebp + edx*8 + 0x10] */ W_F32((u32)(r_ebp+r_edx*8+0x10u), ST(0)); FPOP();
    /* 00845afa: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00845b00: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00845b02: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00845b08: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845b0a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845b0c: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00845b12: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845b14: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845b16: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00845b18: fadd dword ptr [ebp + edx*8 + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*8+0x14u));
    /* 00845b1c: mov dword ptr [ebp + edx*8 + 0x18], 0xffffffff */ W32((u32)(r_ebp+r_edx*8+0x18u), 0xffffffffu);
    /* 00845b24: fstp dword ptr [ebp + edx*8 + 0x14] */ W_F32((u32)(r_ebp+r_edx*8+0x14u), ST(0)); FPOP();
    /* 00845b28: jne 0x8459de */ if (!fZ) goto L_008459de;
L_00845b2e:; BB(0x00845b2e);
    /* 00845b2e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00845b30: jmp 0x845c6d */ goto L_00845c6d;
L_00845b35:; BB(0x00845b35);
    /* 00845b35: fld dword ptr [0x98c5b0] */ FPUSH(R_F32((u32)(0x98c5b0u)));
L_00845b3b:; BB(0x00845b3b);
    /* 00845b3b: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00845b41: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00845b47: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00845b4a: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00845b4c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845b4e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845b50: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00845b56: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00845b59: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845b5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845b5d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845b5f: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00845b62: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00845b68: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845b6a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00845b6c: mov esi, eax */ r_esi = r_eax;
    /* 00845b6e: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00845b71: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00845b74: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00845b78: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00845b7c: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00845b7f: fadd dword ptr [esi*4 + 0x98c590] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x98c590u));
    /* 00845b86: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00845b88: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845b8a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845b8c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845b8e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845b90: fstp dword ptr [ebp + edx*8] */ W_F32((u32)(r_ebp+r_edx*8), ST(0)); FPOP();
    /* 00845b94: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00845b9a: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845b9c: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00845ba2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845ba4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845ba6: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00845bac: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845bae: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00845bb4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00845bb6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845bb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00845bba: fstp dword ptr [ebp + edx*8 + 4] */ W_F32((u32)(r_ebp+r_edx*8+0x4u), ST(0)); FPOP();
    /* 00845bbe: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00845bc4: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00845bc6: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00845bcc: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00845bce: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845bd0: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00845bd6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00845bd8: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00845bde: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00845be0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845be2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845be4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845be6: fstp dword ptr [ebp + edx*8 + 8] */ W_F32((u32)(r_ebp+r_edx*8+0x8u), ST(0)); FPOP();
    /* 00845bea: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00845bed: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00845bf3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845bf5: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00845bfb: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00845bfe: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00845c00: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845c02: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00845c04: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00845c0a: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00845c0d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00845c0f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845c11: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00845c13: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845c15: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845c17: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00845c1a: fstp dword ptr [ebp + edx*8 + 0xc] */ W_F32((u32)(r_ebp+r_edx*8+0xcu), ST(0)); FPOP();
    /* 00845c1e: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00845c24: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845c26: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00845c29: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00845c2f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00845c31: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845c33: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00845c39: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845c3b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845c3d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00845c3f: fstp dword ptr [ebp + edx*8 + 0x10] */ W_F32((u32)(r_ebp+r_edx*8+0x10u), ST(0)); FPOP();
    /* 00845c43: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00845c49: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00845c4b: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00845c51: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00845c53: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00845c55: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00845c5b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00845c5d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845c5f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00845c61: fstp dword ptr [ebp + edx*8 + 0x14] */ W_F32((u32)(r_ebp+r_edx*8+0x14u), ST(0)); FPOP();
    /* 00845c65: jne 0x845b3b */ if (!fZ) goto L_00845b3b;
L_00845c6b:; BB(0x00845c6b);
    /* 00845c6b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00845c6d:; BB(0x00845c6d);
    /* 00845c6d: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 00845c72: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00845c77: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 00845c7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00845c7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00845c80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00845c81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00845c82: ret  */ FN_RET(0x00845820); r_esp += 4; return;
}

void f_00845c84(void) /* sub_845C84 */
{
    FN_ENTER(0x00845c84);
    /* 00845c84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00845c85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00845c86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00845c87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00845c88: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00845c8b: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00845c8f: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00845c92: movzx ebp, bx */ r_ebp = (u32)(u16)r_ebx;
    /* 00845c95: fld dword ptr [0x98c5ac] */ FPUSH(R_F32((u32)(0x98c5acu)));
    /* 00845c9b: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00845ca1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845ca3: mov edi, dword ptr [0xacd530] */ r_edi = R32((u32)(0xacd530u));
    /* 00845ca9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00845cac: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00845cb0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00845cb5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00845cb9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00845cbd: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00845cc1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00845cc4: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 00845cca: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845ccc: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00845cd0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00845cd3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00845cd7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00845cdc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00845ce0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00845ce4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00845ce8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00845ceb: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 00845cf1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845cf3: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00845cf7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00845cfb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00845cfe: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00845d02: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00845d07: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00845d0b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00845d0f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00845d13: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00845d16: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 00845d1c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00845d20: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00845d22: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00845d26: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00845d29: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00845d2d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00845d32: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00845d36: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00845d3a: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00845d3e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00845d41: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00845d45: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00845d49: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00845d4d: sar ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00845d50: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00845d54: lea edx, [edx + 8] */ r_edx = (u32)(r_edx+0x8u);
    /* 00845d57: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00845d5b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845d5d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845d5f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845d61: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845d63: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00845d65: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00845d67: jg 0x845d6b */ if ((!fZ&&fS==fO)) goto L_00845d6b;
L_00845d69:; BB(0x00845d69);
    /* 00845d69: mov ebp, edi */ r_ebp = r_edi;
L_00845d6b:; BB(0x00845d6b);
    /* 00845d6b: add eax, dword ptr [0xacd534] */ {  u32 a = r_eax; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845d71: mov dword ptr [0xacd530], ebp */ W32((u32)(0xacd530u), r_ebp);
    /* 00845d77: mov ebp, dword ptr [0xacd538] */ r_ebp = R32((u32)(0xacd538u));
    /* 00845d7d: or ebp, 0x900 */ {  u32 a = r_ebp; u32 b = 0x900u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00845d83: mov dword ptr [0xacd538], ebp */ W32((u32)(0xacd538u), r_ebp);
L_00845d89:; BB(0x00845d89);
    /* 00845d89: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00845d8f: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00845d95: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 00845d9b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00845d9d: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00845d9f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845da1: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00845da7: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00845daa: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00845dac: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00845dae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845db0: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00845db3: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00845db5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845db7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845db9: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00845dbb: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00845dc1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845dc3: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 00845dc9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00845dcb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00845dcd: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 00845dd3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845dd5: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00845ddb: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00845ddd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845ddf: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00845de2: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00845de8: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00845dea: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 00845df0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845df2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00845df4: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 00845dfa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845dfc: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00845e02: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00845e04: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00845e06: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00845e09: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 00845e0c: mov ecx, esi */ r_ecx = r_esi;
    /* 00845e0e: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00845e14: add ecx, dword ptr [esp + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00845e18: movsx edi, cx */ r_edi = (u32)(i32)(i16)(u16)r_ecx;
    /* 00845e1b: mov ecx, esi */ r_ecx = r_esi;
    /* 00845e1d: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00845e20: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00845e23: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845e26: add ecx, dword ptr [esp + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00845e2a: movsx ebp, cx */ r_ebp = (u32)(i32)(i16)(u16)r_ecx;
    /* 00845e2d: mov ecx, esi */ r_ecx = r_esi;
    /* 00845e2f: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00845e32: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00845e35: add ecx, dword ptr [esp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00845e39: movsx ebx, cx */ r_ebx = (u32)(i32)(i16)(u16)r_ecx;
    /* 00845e3c: shr esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00845e3f: add esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00845e43: movsx ecx, si */ r_ecx = (u32)(i32)(i16)(u16)r_esi;
    /* 00845e46: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00845e48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00845e4a: jg 0x845e4e */ if ((!fZ&&fS==fO)) goto L_00845e4e;
L_00845e4c:; BB(0x00845e4c);
    /* 00845e4c: mov ecx, esi */ r_ecx = r_esi;
L_00845e4e:; BB(0x00845e4e);
    /* 00845e4e: mov esi, 0xff */ r_esi = 0xffu;
    /* 00845e53: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00845e59: jl 0x845e5d */ if ((fS!=fO)) goto L_00845e5d;
L_00845e5b:; BB(0x00845e5b);
    /* 00845e5b: mov ecx, esi */ r_ecx = r_esi;
L_00845e5d:; BB(0x00845e5d);
    /* 00845e5d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00845e5f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00845e61: jg 0x845e65 */ if ((!fZ&&fS==fO)) goto L_00845e65;
L_00845e63:; BB(0x00845e63);
    /* 00845e63: mov ebx, esi */ r_ebx = r_esi;
L_00845e65:; BB(0x00845e65);
    /* 00845e65: mov esi, 0xff */ r_esi = 0xffu;
    /* 00845e6a: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00845e70: jl 0x845e74 */ if ((fS!=fO)) goto L_00845e74;
L_00845e72:; BB(0x00845e72);
    /* 00845e72: mov ebx, esi */ r_ebx = r_esi;
L_00845e74:; BB(0x00845e74);
    /* 00845e74: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00845e76: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00845e78: jg 0x845e7c */ if ((!fZ&&fS==fO)) goto L_00845e7c;
L_00845e7a:; BB(0x00845e7a);
    /* 00845e7a: mov ebp, esi */ r_ebp = r_esi;
L_00845e7c:; BB(0x00845e7c);
    /* 00845e7c: mov esi, 0xff */ r_esi = 0xffu;
    /* 00845e81: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00845e87: jl 0x845e8b */ if ((fS!=fO)) goto L_00845e8b;
L_00845e89:; BB(0x00845e89);
    /* 00845e89: mov ebp, esi */ r_ebp = r_esi;
L_00845e8b:; BB(0x00845e8b);
    /* 00845e8b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00845e8d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00845e8f: jg 0x845e93 */ if ((!fZ&&fS==fO)) goto L_00845e93;
L_00845e91:; BB(0x00845e91);
    /* 00845e91: mov edi, esi */ r_edi = r_esi;
L_00845e93:; BB(0x00845e93);
    /* 00845e93: mov esi, 0xff */ r_esi = 0xffu;
    /* 00845e98: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00845e9e: jl 0x845ea2 */ if ((fS!=fO)) goto L_00845ea2;
L_00845ea0:; BB(0x00845ea0);
    /* 00845ea0: mov edi, esi */ r_edi = r_esi;
L_00845ea2:; BB(0x00845ea2);
    /* 00845ea2: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00845ea5: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00845ea7: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00845eaa: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00845ead: or ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00845eaf: or ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00845eb1: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00845eb4: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00845eb8: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00845ebb: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845ebe: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00845ec2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00845ec4: jne 0x845d89 */ if (!fZ) goto L_00845d89;
L_00845eca:; BB(0x00845eca);
    /* 00845eca: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00845ecd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00845ece: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00845ecf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00845ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00845ed1: ret  */ FN_RET(0x00845c84); r_esp += 4; return;
}

void f_00845ed4(void) /* sub_845ED4 */
{
    FN_ENTER(0x00845ed4);
    /* 00845ed4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00845ed5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00845ed6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00845ed7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00845ed8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00845edb: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00845edf: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00845ee2: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 00845ee5: fld dword ptr [0x98c5a8] */ FPUSH(R_F32((u32)(0x98c5a8u)));
    /* 00845eeb: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00845ef1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845ef3: sar esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00845ef6: lea eax, [eax + 8] */ r_eax = (u32)(r_eax+0x8u);
    /* 00845ef9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00845efd: mov eax, dword ptr [0xacd530] */ r_eax = R32((u32)(0xacd530u));
    /* 00845f02: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 00845f05: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00845f07: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00845f09: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00845f0b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00845f0d: add ebp, dword ptr [0xacd534] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xacd534u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00845f13: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00845f15: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00845f17: mov edi, 0 */ r_edi = 0x0u;
    /* 00845f1c: jg 0x845f20 */ if ((!fZ&&fS==fO)) goto L_00845f20;
L_00845f1e:; BB(0x00845f1e);
    /* 00845f1e: mov edx, eax */ r_edx = r_eax;
L_00845f20:; BB(0x00845f20);
    /* 00845f20: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 00845f25: mov dword ptr [0xacd530], edx */ W32((u32)(0xacd530u), r_edx);
    /* 00845f2b: and eax, 0xfffff6ff */ {  u32 a = r_eax; u32 b = 0xfffff6ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00845f30: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 00845f35: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00845f38: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00845f3c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00845f41: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00845f45: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00845f49: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00845f4d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00845f50: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 00845f56: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845f58: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00845f5c: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845f61: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 00845f64: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00845f67: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00845f6b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00845f70: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00845f74: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00845f78: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00845f7c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00845f7f: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 00845f85: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00845f87: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00845f8b: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845f90: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00845f93: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00845f96: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00845f9a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00845f9f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00845fa3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00845fa7: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00845fab: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00845fae: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 00845fb4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00845fb6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00845fb8: jg 0x845fbc */ if ((!fZ&&fS==fO)) goto L_00845fbc;
L_00845fba:; BB(0x00845fba);
    /* 00845fba: mov ebx, edi */ r_ebx = r_edi;
L_00845fbc:; BB(0x00845fbc);
    /* 00845fbc: mov edi, 0xff */ r_edi = 0xffu;
    /* 00845fc1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00845fc5: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845fca: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00845fcd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00845fd0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00845fd4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00845fd9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00845fdd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00845fe1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00845fe5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00845fe8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00845fec: add eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00845ff1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00845ff4: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00845ffa: jl 0x845ffe */ if ((fS!=fO)) goto L_00845ffe;
L_00845ffc:; BB(0x00845ffc);
    /* 00845ffc: mov ebx, edi */ r_ebx = r_edi;
L_00845ffe:; BB(0x00845ffe);
    /* 00845ffe: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00846000: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00846002: jg 0x846006 */ if ((!fZ&&fS==fO)) goto L_00846006;
L_00846004:; BB(0x00846004);
    /* 00846004: mov ecx, edi */ r_ecx = r_edi;
L_00846006:; BB(0x00846006);
    /* 00846006: mov edi, 0xff */ r_edi = 0xffu;
    /* 0084600b: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00846011: jl 0x846015 */ if ((fS!=fO)) goto L_00846015;
L_00846013:; BB(0x00846013);
    /* 00846013: mov ecx, edi */ r_ecx = r_edi;
L_00846015:; BB(0x00846015);
    /* 00846015: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00846017: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00846019: jg 0x84601d */ if ((!fZ&&fS==fO)) goto L_0084601d;
L_0084601b:; BB(0x0084601b);
    /* 0084601b: mov edx, edi */ r_edx = r_edi;
L_0084601d:; BB(0x0084601d);
    /* 0084601d: mov edi, 0xff */ r_edi = 0xffu;
    /* 00846022: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00846028: jl 0x84602c */ if ((fS!=fO)) goto L_0084602c;
L_0084602a:; BB(0x0084602a);
    /* 0084602a: mov edx, edi */ r_edx = r_edi;
L_0084602c:; BB(0x0084602c);
    /* 0084602c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084602e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00846030: jg 0x846034 */ if ((!fZ&&fS==fO)) goto L_00846034;
L_00846032:; BB(0x00846032);
    /* 00846032: mov eax, edi */ r_eax = r_edi;
L_00846034:; BB(0x00846034);
    /* 00846034: mov edi, 0xff */ r_edi = 0xffu;
    /* 00846039: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084603e: jl 0x846042 */ if ((fS!=fO)) goto L_00846042;
L_00846040:; BB(0x00846040);
    /* 00846040: mov eax, edi */ r_eax = r_edi;
L_00846042:; BB(0x00846042);
    /* 00846042: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00846045: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00846047: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0084604a: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0084604d: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084604f: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00846051: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00846055: jmp 0x84605a */ goto L_0084605a;
L_00846057:; BB(0x00846057);
    /* 00846057: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
L_0084605a:; BB(0x0084605a);
    /* 0084605a: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 00846060: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 00846066: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 0084606c: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0084606e: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00846070: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846072: fadd dword ptr [0xae6f10] */ ST(0) = ST(0) + R_F32((u32)(0xae6f10u));
    /* 00846078: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0084607b: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0084607d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084607f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846081: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00846084: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00846086: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00846088: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084608a: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0084608d: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00846090: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846096: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00846098: fadd dword ptr [0xae6f14] */ ST(0) = ST(0) + R_F32((u32)(0xae6f14u));
    /* 0084609e: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 008460a4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008460a6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008460a8: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 008460ae: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008460b0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008460b2: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 008460b5: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 008460bb: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008460bd: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 008460c3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008460c5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008460c7: fadd dword ptr [0xae6f18] */ ST(0) = ST(0) + R_F32((u32)(0xae6f18u));
    /* 008460cd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008460cf: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 008460d5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008460d7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008460d9: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 008460dc: fld dword ptr [0xae6ee0] */ FPUSH(R_F32((u32)(0xae6ee0u)));
    /* 008460e2: fld dword ptr [0xae6ef0] */ FPUSH(R_F32((u32)(0xae6ef0u)));
    /* 008460e8: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008460eb: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008460ed: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 008460f0: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008460f2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008460f4: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008460f6: fld dword ptr [0xae6f00] */ FPUSH(R_F32((u32)(0xae6f00u)));
    /* 008460fc: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 008460ff: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00846101: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00846103: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00846105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00846107: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0084610a: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084610d: fld dword ptr [0xae6ee4] */ FPUSH(R_F32((u32)(0xae6ee4u)));
    /* 00846113: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00846115: fld dword ptr [0xae6ef4] */ FPUSH(R_F32((u32)(0xae6ef4u)));
    /* 0084611b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084611d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084611f: fld dword ptr [0xae6f04] */ FPUSH(R_F32((u32)(0xae6f04u)));
    /* 00846125: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00846127: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846129: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 0084612c: fld dword ptr [0xae6ee8] */ FPUSH(R_F32((u32)(0xae6ee8u)));
    /* 00846132: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00846134: fld dword ptr [0xae6ef8] */ FPUSH(R_F32((u32)(0xae6ef8u)));
    /* 0084613a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084613c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084613e: fld dword ptr [0xae6f08] */ FPUSH(R_F32((u32)(0xae6f08u)));
    /* 00846144: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00846146: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00846148: mov dword ptr [ebp + 0x18], ebx */ W32((u32)(r_ebp+0x18u), r_ebx);
    /* 0084614b: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084614e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00846150: jne 0x846057 */ if (!fZ) goto L_00846057;
L_00846156:; BB(0x00846156);
    /* 00846156: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00846159: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084615c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084615d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084615e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084615f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00846160: ret  */ FN_RET(0x00845ed4); r_esp += 4; return;
}

