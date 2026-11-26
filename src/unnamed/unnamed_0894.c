#include "protos.h"

void f_008940e7(void) /* sub_8940E7 */
{
    FN_ENTER(0x008940e7);
    /* 008940e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008940e8: mov ebp, esp */ r_ebp = r_esp;
    /* 008940ea: sub esp, 0x3e8 */ {  u32 a = r_esp; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008940f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008940f1: lea ecx, [ebp - 0x3e8] */ r_ecx = (u32)(r_ebp+0xfffffc18u);
    /* 008940f7: call 0x89f710 */ r_esp -= 4; W32(r_esp, 0x8940fcu); f_0089f710();
    /* 008940fc: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008940ff: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00894101: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894103: je 0x894107 */ if (fZ) goto L_00894107;
L_00894105:; BB(0x00894105);
    /* 00894105: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
L_00894107:; BB(0x00894107);
    /* 00894107: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0089410a: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089410c: je 0x894110 */ if (fZ) goto L_00894110;
L_0089410e:; BB(0x0089410e);
    /* 0089410e: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
L_00894110:; BB(0x00894110);
    /* 00894110: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00894113: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894115: je 0x894119 */ if (fZ) goto L_00894119;
L_00894117:; BB(0x00894117);
    /* 00894117: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
L_00894119:; BB(0x00894119);
    /* 00894119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089411a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089411b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089411c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089411f: lea ecx, [ebp - 0x3e8] */ r_ecx = (u32)(r_ebp+0xfffffc18u);
    /* 00894125: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00894127: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00894128: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089412b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089412e: call 0x8a1b7e */ r_esp -= 4; W32(r_esp, 0x894133u); f_008a1b7e();
    /* 00894133: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00894135: jge 0x894139 */ if ((fS==fO)) goto L_00894139;
L_00894137:; BB(0x00894137);
    /* 00894137: mov esi, eax */ r_esi = r_eax;
L_00894139:; BB(0x00894139);
    /* 00894139: lea ecx, [ebp - 0x3e8] */ r_ecx = (u32)(r_ebp+0xfffffc18u);
    /* 0089413f: call 0x89f7b9 */ r_esp -= 4; W32(r_esp, 0x894144u); f_0089f7b9();
    /* 00894144: mov eax, esi */ r_eax = r_esi;
    /* 00894146: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00894147: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00894148: ret 0x18 */ FN_RET(0x008940e7); r_esp += 28; return;
}

void f_0089414b(void) /* sub_89414B */
{
    FN_ENTER(0x0089414b);
    /* 0089414b: cmp dword ptr [0xae9748], 0 */ {  u32 a = R32((u32)(0xae9748u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894152: jne 0x8941c0 */ if (!fZ) goto L_008941c0;
L_00894154:; BB(0x00894154);
    /* 00894154: cmp dword ptr [0xae9744], 0 */ {  u32 a = R32((u32)(0xae9744u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089415b: jne 0x8941d4 */ if (!fZ) goto L_008941d4;
L_0089415d:; BB(0x0089415d);
    /* 0089415d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089415e: mov ebx, dword ptr [0x8f81f0] */ r_ebx = R32((u32)(0x8f81f0u));
    /* 00894164: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00894165: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00894166: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00894167: mov esi, 0x99ba20 */ r_esi = 0x99ba20u;
    /* 0089416c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089416d: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x89416fu); call_ind(t); }
    /* 0089416f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894171: mov ebp, dword ptr [0x8f812c] */ r_ebp = R32((u32)(0x8f812cu));
    /* 00894177: mov edi, dword ptr [0x8f8130] */ r_edi = R32((u32)(0x8f8130u));
    /* 0089417d: je 0x894193 */ if (fZ) goto L_00894193;
L_0089417f:; BB(0x0089417f);
    /* 0089417f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00894180: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x894182u); call_ind(t); }
    /* 00894182: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894184: je 0x894193 */ if (fZ) goto L_00894193;
L_00894186:; BB(0x00894186);
    /* 00894186: push 0x99ba10 */ { u32 v = 0x99ba10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089418b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089418c: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x89418eu); call_ind(t); }
    /* 0089418e: mov dword ptr [0xae9748], eax */ W32((u32)(0xae9748u), r_eax);
L_00894193:; BB(0x00894193);
    /* 00894193: mov esi, 0x99ba04 */ r_esi = 0x99ba04u;
    /* 00894198: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00894199: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x89419bu); call_ind(t); }
    /* 0089419b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089419d: je 0x8941b3 */ if (fZ) goto L_008941b3;
L_0089419f:; BB(0x0089419f);
    /* 0089419f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008941a0: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8941a2u); call_ind(t); }
    /* 008941a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008941a4: je 0x8941b3 */ if (fZ) goto L_008941b3;
L_008941a6:; BB(0x008941a6);
    /* 008941a6: push 0x99ba10 */ { u32 v = 0x99ba10u; r_esp -= 4; W32(r_esp, v); }
    /* 008941ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008941ac: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8941aeu); call_ind(t); }
    /* 008941ae: mov dword ptr [0xae9744], eax */ W32((u32)(0xae9744u), r_eax);
L_008941b3:; BB(0x008941b3);
    /* 008941b3: cmp dword ptr [0xae9748], 0 */ {  u32 a = R32((u32)(0xae9748u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008941ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008941bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008941bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008941bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008941be: je 0x8941cb */ if (fZ) goto L_008941cb;
L_008941c0:; BB(0x008941c0);
    /* 008941c0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008941c4: call dword ptr [0xae9748] */ { u32 t = R32((u32)(0xae9748u)); r_esp -= 4; W32(r_esp, 0x8941cau); call_ind(t); }
    /* 008941ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008941cb:; BB(0x008941cb);
    /* 008941cb: cmp dword ptr [0xae9744], 0 */ {  u32 a = R32((u32)(0xae9744u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008941d2: je 0x8941da */ if (fZ) goto L_008941da;
L_008941d4:; BB(0x008941d4);
    /* 008941d4: jmp dword ptr [0xae9744] */ { u32 t = R32((u32)(0xae9744u)); jmp_ind(t); return; }
L_008941da:; BB(0x008941da);
    /* 008941da: ret  */ FN_RET(0x0089414b); r_esp += 4; return;
}

void f_008941f4(void) /* sub_8941F4 */
{
    FN_ENTER(0x008941f4);
    /* 008941f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008941f5: mov esi, ecx */ r_esi = r_ecx;
    /* 008941f7: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008941fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008941fc: je 0x89420b */ if (fZ) goto L_0089420b;
L_008941fe:; BB(0x008941fe);
    /* 008941fe: cmp dword ptr [esi + 0x38], 0 */ {  u32 a = R32((u32)(r_esi+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894202: je 0x89420b */ if (fZ) goto L_0089420b;
L_00894204:; BB(0x00894204);
    /* 00894204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894205: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89420au); f_00857e98();
    /* 0089420a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089420b:; BB(0x0089420b);
    /* 0089420b: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0089420e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894210: je 0x89421f */ if (fZ) goto L_0089421f;
L_00894212:; BB(0x00894212);
    /* 00894212: cmp dword ptr [esi + 0x3c], 0 */ {  u32 a = R32((u32)(r_esi+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894216: je 0x89421f */ if (fZ) goto L_0089421f;
L_00894218:; BB(0x00894218);
    /* 00894218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894219: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89421eu); f_00857e98();
    /* 0089421e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089421f:; BB(0x0089421f);
    /* 0089421f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00894220: mov edi, dword ptr [esi + 0x4c] */ r_edi = R32((u32)(r_esi+0x4cu));
    /* 00894223: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894225: je 0x894235 */ if (fZ) goto L_00894235;
L_00894227:; BB(0x00894227);
    /* 00894227: mov ecx, edi */ r_ecx = r_edi;
    /* 00894229: call 0x8941f4 */ r_esp -= 4; W32(r_esp, 0x89422eu); f_008941f4();
    /* 0089422e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089422f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x894234u); f_00857e98();
    /* 00894234: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00894235:; BB(0x00894235);
    /* 00894235: mov esi, dword ptr [esi + 0x50] */ r_esi = R32((u32)(r_esi+0x50u));
    /* 00894238: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089423a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089423b: je 0x89424b */ if (fZ) goto L_0089424b;
L_0089423d:; BB(0x0089423d);
    /* 0089423d: mov ecx, esi */ r_ecx = r_esi;
    /* 0089423f: call 0x8941f4 */ r_esp -= 4; W32(r_esp, 0x894244u); f_008941f4();
    /* 00894244: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00894245: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89424au); f_00857e98();
    /* 0089424a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089424b:; BB(0x0089424b);
    /* 0089424b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089424c: ret  */ FN_RET(0x008941f4); r_esp += 4; return;
}

void f_00894269(void) /* sub_894269 */
{
    FN_ENTER(0x00894269);
    /* 00894269: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089426a: mov ebp, esp */ r_ebp = r_esp;
    /* 0089426c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089426f: cmp dword ptr [ebp + 0xc], 0x28 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894273: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00894274: mov esi, ecx */ r_esi = r_ecx;
    /* 00894276: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 00894279: jae 0x894285 */ if (!fC) goto L_00894285;
L_0089427b:; BB(0x0089427b);
    /* 0089427b: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00894280: jmp 0x89497a */ goto L_0089497a;
L_00894285:; BB(0x00894285);
    /* 00894285: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00894286: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00894287: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0089428a: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0089428c: cmp ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089428f: jae 0x89429b */ if (!fC) goto L_0089429b;
L_00894291:; BB(0x00894291);
    /* 00894291: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00894296: jmp 0x894978 */ goto L_00894978;
L_0089429b:; BB(0x0089429b);
    /* 0089429b: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0089429e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008942a1: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 008942a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008942a6: jg 0x8942aa */ if ((!fZ&&fS==fO)) goto L_008942aa;
L_008942a8:; BB(0x008942a8);
    /* 008942a8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008942aa:; BB(0x008942aa);
    /* 008942aa: mov dx, word ptr [edi + 0xe] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edi+0xeu))) & 0xffffu);
    /* 008942ae: cmp dx, 8 */ {  u32 a = (u16)r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008942b2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008942b5: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 008942b8: ja 0x8942c3 */ if ((!fC&&!fZ)) goto L_008942c3;
L_008942ba:; BB(0x008942ba);
    /* 008942ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008942bc: jne 0x8942c3 */ if (!fZ) goto L_008942c3;
L_008942be:; BB(0x008942be);
    /* 008942be: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008942bf: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 008942c1: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
L_008942c3:; BB(0x008942c3);
    /* 008942c3: lea eax, [ebx + eax*4] */ r_eax = (u32)(r_ebx+r_eax*4);
    /* 008942c6: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008942c9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008942cc: ja 0x894291 */ if ((!fC&&!fZ)) goto L_00894291;
L_008942ce:; BB(0x008942ce);
    /* 008942ce: cmp word ptr [edi + 0xc], 1 */ {  u32 a = R16((u32)(r_edi+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 008942d3: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008942d5:; BB(0x008942d5);
    /* 008942d5: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 008942d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008942da: jge 0x8942e8 */ if ((fS==fO)) goto L_008942e8;
L_008942dc:; BB(0x008942dc);
    /* 008942dc: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 008942df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008942e1: je 0x8942e8 */ if (fZ) goto L_008942e8;
L_008942e3:; BB(0x008942e3);
    /* 008942e3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008942e6: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008942e8:; BB(0x008942e8);
    /* 008942e8: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 008942eb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008942ee: jbe 0x89453c */ if ((fC||fZ)) goto L_0089453c;
L_008942f4:; BB(0x008942f4);
    /* 008942f4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008942f7: jne 0x894973 */ if (!fZ) goto L_00894973;
L_008942fd:; BB(0x008942fd);
    /* 008942fd: cmp ebx, 0x6c */ {  u32 a = r_ebx; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894300: jae 0x894313 */ if (!fC) goto L_00894313;
L_00894302:; BB(0x00894302);
    /* 00894302: and dword ptr [ebp + 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00894306: lea eax, [ebx + edi] */ r_eax = (u32)(r_ebx+r_edi);
    /* 00894309: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0089430c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0089430f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00894311: jmp 0x894322 */ goto L_00894322;
L_00894313:; BB(0x00894313);
    /* 00894313: mov ebx, dword ptr [edi + 0x34] */ r_ebx = R32((u32)(r_edi+0x34u));
    /* 00894316: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00894319: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0089431c: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0089431f: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
L_00894322:; BB(0x00894322);
    /* 00894322: movzx ebx, word ptr [edi + 0xe] */ r_ebx = (u32)R16((u32)(r_edi+0xeu));
    /* 00894326: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894329: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0089432c: je 0x89442b */ if (fZ) goto L_0089442b;
L_00894332:; BB(0x00894332);
    /* 00894332: cmp ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894335: je 0x8943f2 */ if (fZ) goto L_008943f2;
L_0089433b:; BB(0x0089433b);
    /* 0089433b: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089433e: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894344:; BB(0x00894344);
    /* 00894344: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089434a: jne 0x894386 */ if (!fZ) goto L_00894386;
L_0089434c:; BB(0x0089434c);
    /* 0089434c: cmp ecx, 0xff00 */ {  u32 a = r_ecx; u32 b = 0xff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894352: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894358:; BB(0x00894358);
    /* 00894358: cmp eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089435d: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894363:; BB(0x00894363);
    /* 00894363: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894367: je 0x894566 */ if (fZ) goto L_00894566;
L_0089436d:; BB(0x0089436d);
    /* 0089436d: cmp dword ptr [ebp + 0xc], 0xff000000 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894374: jne 0x894291 */ if (!fZ) goto L_00894291;
L_0089437a:; BB(0x0089437a);
    /* 0089437a: mov dword ptr [ebp + 0xc], 0x15 */ W32((u32)(r_ebp+0xcu), 0x15u);
    /* 00894381: jmp 0x89457f */ goto L_0089457f;
L_00894386:; BB(0x00894386);
    /* 00894386: cmp edx, 0x3ff00000 */ {  u32 a = r_edx; u32 b = 0x3ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089438c: jne 0x8943be */ if (!fZ) goto L_008943be;
L_0089438e:; BB(0x0089438e);
    /* 0089438e: cmp ecx, 0xffc00 */ {  u32 a = r_ecx; u32 b = 0xffc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894394: jne 0x894291 */ if (!fZ) goto L_00894291;
L_0089439a:; BB(0x0089439a);
    /* 0089439a: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089439f: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008943a5:; BB(0x008943a5);
    /* 008943a5: cmp dword ptr [ebp + 0xc], 0xc0000000 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xc0000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008943ac: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008943b2:; BB(0x008943b2);
    /* 008943b2: mov dword ptr [ebp + 0xc], 0x1f */ W32((u32)(r_ebp+0xcu), 0x1fu);
    /* 008943b9: jmp 0x89457f */ goto L_0089457f;
L_008943be:; BB(0x008943be);
    /* 008943be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008943c0: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008943c6:; BB(0x008943c6);
    /* 008943c6: cmp ecx, 0xffff0000 */ {  u32 a = r_ecx; u32 b = 0xffff0000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008943cc: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008943d2:; BB(0x008943d2);
    /* 008943d2: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008943d7: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008943dd:; BB(0x008943dd);
    /* 008943dd: cmp dword ptr [ebp + 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008943e0: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008943e6:; BB(0x008943e6);
    /* 008943e6: mov dword ptr [ebp + 0xc], 0x22 */ W32((u32)(r_ebp+0xcu), 0x22u);
    /* 008943ed: jmp 0x89457f */ goto L_0089457f;
L_008943f2:; BB(0x008943f2);
    /* 008943f2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008943f8: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008943fe:; BB(0x008943fe);
    /* 008943fe: cmp ecx, 0xff00 */ {  u32 a = r_ecx; u32 b = 0xff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894404: jne 0x894291 */ if (!fZ) goto L_00894291;
L_0089440a:; BB(0x0089440a);
    /* 0089440a: cmp eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089440f: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894415:; BB(0x00894415);
    /* 00894415: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894419: jne 0x894291 */ if (!fZ) goto L_00894291;
L_0089441f:; BB(0x0089441f);
    /* 0089441f: mov dword ptr [ebp + 0xc], 0x14 */ W32((u32)(r_ebp+0xcu), 0x14u);
    /* 00894426: jmp 0x89457f */ goto L_0089457f;
L_0089442b:; BB(0x0089442b);
    /* 0089442b: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00894430: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894432: jne 0x89445d */ if (!fZ) goto L_0089445d;
L_00894434:; BB(0x00894434);
    /* 00894434: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894436: jne 0x894291 */ if (!fZ) goto L_00894291;
L_0089443c:; BB(0x0089443c);
    /* 0089443c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089443e: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894444:; BB(0x00894444);
    /* 00894444: cmp dword ptr [ebp + 0xc], 0xff00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089444b: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894451:; BB(0x00894451);
    /* 00894451: mov dword ptr [ebp + 0xc], 0x33 */ W32((u32)(r_ebp+0xcu), 0x33u);
    /* 00894458: jmp 0x89457f */ goto L_0089457f;
L_0089445d:; BB(0x0089445d);
    /* 0089445d: cmp edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894460: jne 0x8944c5 */ if (!fZ) goto L_008944c5;
L_00894462:; BB(0x00894462);
    /* 00894462: cmp ecx, 0x7e0 */ {  u32 a = r_ecx; u32 b = 0x7e0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894468: jne 0x89448b */ if (!fZ) goto L_0089448b;
L_0089446a:; BB(0x0089446a);
    /* 0089446a: cmp eax, 0xf800 */ {  u32 a = r_eax; u32 b = 0xf800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089446f: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894475:; BB(0x00894475);
    /* 00894475: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894479: jne 0x894291 */ if (!fZ) goto L_00894291;
L_0089447f:; BB(0x0089447f);
    /* 0089447f: mov dword ptr [ebp + 0xc], 0x17 */ W32((u32)(r_ebp+0xcu), 0x17u);
    /* 00894486: jmp 0x89457f */ goto L_0089457f;
L_0089448b:; BB(0x0089448b);
    /* 0089448b: cmp ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894491: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894497:; BB(0x00894497);
    /* 00894497: cmp eax, 0x7c00 */ {  u32 a = r_eax; u32 b = 0x7c00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089449c: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008944a2:; BB(0x008944a2);
    /* 008944a2: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008944a6: je 0x89456f */ if (fZ) goto L_0089456f;
L_008944ac:; BB(0x008944ac);
    /* 008944ac: cmp dword ptr [ebp + 0xc], 0x8000 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008944b3: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008944b9:; BB(0x008944b9);
    /* 008944b9: mov dword ptr [ebp + 0xc], 0x19 */ W32((u32)(r_ebp+0xcu), 0x19u);
    /* 008944c0: jmp 0x89457f */ goto L_0089457f;
L_008944c5:; BB(0x008944c5);
    /* 008944c5: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008944c8: jne 0x8944f6 */ if (!fZ) goto L_008944f6;
L_008944ca:; BB(0x008944ca);
    /* 008944ca: cmp ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008944d0: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008944d6:; BB(0x008944d6);
    /* 008944d6: cmp eax, 0xf00 */ {  u32 a = r_eax; u32 b = 0xf00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008944db: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008944e1:; BB(0x008944e1);
    /* 008944e1: cmp dword ptr [ebp + 0xc], 0xf000 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008944e8: jne 0x894529 */ if (!fZ) goto L_00894529;
L_008944ea:; BB(0x008944ea);
    /* 008944ea: mov dword ptr [ebp + 0xc], 0x1a */ W32((u32)(r_ebp+0xcu), 0x1au);
    /* 008944f1: jmp 0x89457f */ goto L_0089457f;
L_008944f6:; BB(0x008944f6);
    /* 008944f6: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008944f9: jne 0x894291 */ if (!fZ) goto L_00894291;
L_008944ff:; BB(0x008944ff);
    /* 008944ff: cmp ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894502: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894508:; BB(0x00894508);
    /* 00894508: cmp eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089450d: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894513:; BB(0x00894513);
    /* 00894513: cmp dword ptr [ebp + 0xc], 0xff00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089451a: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894520:; BB(0x00894520);
    /* 00894520: mov dword ptr [ebp + 0xc], 0x1d */ W32((u32)(r_ebp+0xcu), 0x1du);
    /* 00894527: jmp 0x89457f */ goto L_0089457f;
L_00894529:; BB(0x00894529);
    /* 00894529: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089452d: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894533:; BB(0x00894533);
    /* 00894533: mov dword ptr [ebp + 0xc], 0x1e */ W32((u32)(r_ebp+0xcu), 0x1eu);
    /* 0089453a: jmp 0x89457f */ goto L_0089457f;
L_0089453c:; BB(0x0089453c);
    /* 0089453c: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 0089453f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00894542: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00894543: je 0x894578 */ if (fZ) goto L_00894578;
L_00894545:; BB(0x00894545);
    /* 00894545: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00894548: je 0x894578 */ if (fZ) goto L_00894578;
L_0089454a:; BB(0x0089454a);
    /* 0089454a: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0089454d: je 0x894578 */ if (fZ) goto L_00894578;
L_0089454f:; BB(0x0089454f);
    /* 0089454f: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00894552: je 0x89456f */ if (fZ) goto L_0089456f;
L_00894554:; BB(0x00894554);
    /* 00894554: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00894557: je 0x89441f */ if (fZ) goto L_0089441f;
L_0089455d:; BB(0x0089455d);
    /* 0089455d: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894560: jne 0x894291 */ if (!fZ) goto L_00894291;
L_00894566:; BB(0x00894566);
    /* 00894566: mov dword ptr [ebp + 0xc], 0x16 */ W32((u32)(r_ebp+0xcu), 0x16u);
    /* 0089456d: jmp 0x89457f */ goto L_0089457f;
L_0089456f:; BB(0x0089456f);
    /* 0089456f: mov dword ptr [ebp + 0xc], 0x18 */ W32((u32)(r_ebp+0xcu), 0x18u);
    /* 00894576: jmp 0x89457f */ goto L_0089457f;
L_00894578:; BB(0x00894578);
    /* 00894578: mov dword ptr [ebp + 0xc], 0x29 */ W32((u32)(r_ebp+0xcu), 0x29u);
L_0089457f:; BB(0x0089457f);
    /* 0089457f: cmp dword ptr [esi + 0x40], 0 */ {  u32 a = R32((u32)(r_esi+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894583: je 0x894641 */ if (fZ) goto L_00894641;
L_00894589:; BB(0x00894589);
    /* 00894589: cmp dword ptr [ebp + 0xc], 0x29 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089458d: jne 0x894641 */ if (!fZ) goto L_00894641;
L_00894593:; BB(0x00894593);
    /* 00894593: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 00894596: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00894598: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0089459b: jne 0x8945a6 */ if (!fZ) goto L_008945a6;
L_0089459d:; BB(0x0089459d);
    /* 0089459d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008945a0: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008945a1: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008945a3: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
L_008945a6:; BB(0x008945a6);
    /* 008945a6: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 008945ab: mov dword ptr [esi + 0x3c], 1 */ W32((u32)(r_esi+0x3cu), 0x1u);
    /* 008945b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8945b7u); f_008581c5();
    /* 008945b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008945b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008945ba: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 008945bd: jne 0x8945c9 */ if (!fZ) goto L_008945c9;
L_008945bf:; BB(0x008945bf);
    /* 008945bf: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 008945c4: jmp 0x894978 */ goto L_00894978;
L_008945c9:; BB(0x008945c9);
    /* 008945c9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008945cb: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008945cf: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008945d1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008945d3: jbe 0x89460d */ if ((fC||fZ)) goto L_0089460d;
L_008945d5:; BB(0x008945d5);
    /* 008945d5: mov bl, byte ptr [eax + 2] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 008945d8: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008945db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008945de: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008945e1: mov byte ptr [ecx + edx], bl */ W8((u32)(r_ecx+r_edx), (u8)r_ebx);
    /* 008945e4: mov bl, byte ptr [eax + 1] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 008945e7: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008945ea: mov byte ptr [ecx + edx + 1], bl */ W8((u32)(r_ecx+r_edx+0x1u), (u8)r_ebx);
    /* 008945ee: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008945f0: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008945f3: mov byte ptr [ecx + edx + 2], bl */ W8((u32)(r_ecx+r_edx+0x2u), (u8)r_ebx);
    /* 008945f7: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008945fa: or byte ptr [ecx + edx + 3], 0xff */ { u32 ad = (u32)(r_ecx+r_edx+0x3u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008945ff: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00894602: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00894605: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00894608: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089460b: jb 0x8945d5 */ if (fC) goto L_008945d5;
L_0089460d:; BB(0x0089460d);
    /* 0089460d: mov ecx, 0x100 */ r_ecx = 0x100u;
    /* 00894612: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894614: mov edx, ebx */ r_edx = r_ebx;
    /* 00894616: jae 0x894641 */ if (!fC) goto L_00894641;
L_00894618:; BB(0x00894618);
    /* 00894618: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 0089461b: mov eax, edx */ r_eax = r_edx;
    /* 0089461d: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00894620: or byte ptr [eax + ebx], 0xff */ { u32 ad = (u32)(r_eax+r_ebx);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00894624: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00894627: or byte ptr [eax + ebx + 1], 0xff */ { u32 ad = (u32)(r_eax+r_ebx+0x1u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0089462c: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 0089462f: or byte ptr [eax + ebx + 2], 0xff */ { u32 ad = (u32)(r_eax+r_ebx+0x2u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00894634: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00894637: or byte ptr [eax + ebx + 3], 0xff */ { u32 ad = (u32)(r_eax+r_ebx+0x3u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0089463c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089463d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089463f: jb 0x894618 */ if (fC) goto L_00894618;
L_00894641:; BB(0x00894641);
    /* 00894641: movzx eax, word ptr [edi + 0xe] */ r_eax = (u32)R16((u32)(r_edi+0xeu));
    /* 00894645: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00894648: mov ecx, eax */ r_ecx = r_eax;
    /* 0089464a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0089464b: je 0x894664 */ if (fZ) goto L_00894664;
L_0089464d:; BB(0x0089464d);
    /* 0089464d: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00894650: je 0x89465d */ if (fZ) goto L_0089465d;
L_00894652:; BB(0x00894652);
    /* 00894652: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00894655: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894658: lea ecx, [eax + 3] */ r_ecx = (u32)(r_eax+0x3u);
    /* 0089465b: jmp 0x89466f */ goto L_0089466f;
L_0089465d:; BB(0x0089465d);
    /* 0089465d: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 00894660: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00894662: jmp 0x89466a */ goto L_0089466a;
L_00894664:; BB(0x00894664);
    /* 00894664: lea ecx, [edx + 7] */ r_ecx = (u32)(r_edx+0x7u);
    /* 00894667: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
L_0089466a:; BB(0x0089466a);
    /* 0089466a: mov eax, edx */ r_eax = r_edx;
    /* 0089466c: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0089466f:; BB(0x0089466f);
    /* 0089466f: and ecx, 0xfffffffc */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00894672: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00894675: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00894678: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0089467b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089467e: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00894680: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00894682: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00894685: cmp dword ptr [esi + 0x40], ecx */ {  u32 a = R32((u32)(r_esi+0x40u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894688: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 0089468b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089468e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00894691: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 00894694: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 00894697: mov dword ptr [esi + 0x14], 1 */ W32((u32)(r_esi+0x14u), 0x1u);
    /* 0089469e: je 0x8946b7 */ if (fZ) goto L_008946b7;
L_008946a0:; BB(0x008946a0);
    /* 008946a0: cmp dword ptr [edi + 8], ecx */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008946a3: jge 0x8946be */ if ((fS==fO)) goto L_008946be;
L_008946a5:; BB(0x008946a5);
    /* 008946a5: cmp word ptr [edi + 0xe], 8 */ {  u32 a = R16((u32)(r_edi+0xeu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 008946aa: jb 0x8946be */ if (fC) goto L_008946be;
L_008946ac:; BB(0x008946ac);
    /* 008946ac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008946af: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008946b1: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 008946b4: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_008946b7:; BB(0x008946b7);
    /* 008946b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008946b9: jmp 0x894978 */ goto L_00894978;
L_008946be:; BB(0x008946be);
    /* 008946be: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008946c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008946c3: mov dword ptr [esi + 0x38], 1 */ W32((u32)(r_esi+0x38u), 0x1u);
    /* 008946ca: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8946cfu); f_008581c5();
    /* 008946cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008946d0: mov ecx, eax */ r_ecx = r_eax;
    /* 008946d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008946d4: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008946d7: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 008946da: je 0x8945bf */ if (fZ) goto L_008945bf;
L_008946e0:; BB(0x008946e0);
    /* 008946e0: cmp dword ptr [edi + 8], 0 */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008946e4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008946e7: lea edx, [eax + edi] */ r_edx = (u32)(r_eax+r_edi);
    /* 008946ea: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 008946ed: jge 0x8946f6 */ if ((fS==fO)) goto L_008946f6;
L_008946ef:; BB(0x008946ef);
    /* 008946ef: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008946f2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008946f4: jmp 0x894706 */ goto L_00894706;
L_008946f6:; BB(0x008946f6);
    /* 008946f6: mov ebx, eax */ r_ebx = r_eax;
    /* 008946f8: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008946fa: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 008946fd: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00894700: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00894701: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894704: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00894706:; BB(0x00894706);
    /* 00894706: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089470a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0089470d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089470f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00894712: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00894715: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894718: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0089471b: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0089471e: jne 0x8947e2 */ if (!fZ) goto L_008947e2;
L_00894724:; BB(0x00894724);
    /* 00894724: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894726: jb 0x8946b7 */ if (fC) goto L_008946b7;
L_00894728:; BB(0x00894728);
    /* 00894728: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0089472a: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089472c: jne 0x8947a3 */ if (!fZ) goto L_008947a3;
L_0089472e:; BB(0x0089472e);
    /* 0089472e: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00894732: mov ecx, eax */ r_ecx = r_eax;
    /* 00894734: sub ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00894737: je 0x894798 */ if (fZ) goto L_00894798;
L_00894739:; BB(0x00894739);
    /* 00894739: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0089473a: je 0x894790 */ if (fZ) goto L_00894790;
L_0089473c:; BB(0x0089473c);
    /* 0089473c: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0089473d: je 0x89477a */ if (fZ) goto L_0089477a;
L_0089473f:; BB(0x0089473f);
    /* 0089473f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00894741: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00894743: jle 0x89476a */ if ((fZ||fS!=fO)) goto L_0089476a;
L_00894745:; BB(0x00894745);
    /* 00894745: mov eax, ecx */ r_eax = r_ecx;
    /* 00894747: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00894749: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089474c: movzx eax, byte ptr [eax + edx + 2] */ r_eax = (u32)R8((u32)(r_eax+r_edx+0x2u));
    /* 00894751: je 0x894758 */ if (fZ) goto L_00894758;
L_00894753:; BB(0x00894753);
    /* 00894753: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00894756: jmp 0x89475b */ goto L_0089475b;
L_00894758:; BB(0x00894758);
    /* 00894758: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_0089475b:; BB(0x0089475b);
    /* 0089475b: mov byte ptr [ecx + ebx], al */ W8((u32)(r_ecx+r_ebx), (u8)r_eax);
    /* 0089475e: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00894762: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00894763: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00894765: jl 0x894745 */ if ((fS!=fO)) goto L_00894745;
L_00894767:; BB(0x00894767);
    /* 00894767: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
L_0089476a:; BB(0x0089476a);
    /* 0089476a: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 0089476e: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00894770: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00894772: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00894773: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00894776: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00894778: jmp 0x8947d2 */ goto L_008947d2;
L_0089477a:; BB(0x0089477a);
    /* 0089477a: movzx ecx, byte ptr [edx + 3] */ r_ecx = (u32)R8((u32)(r_edx+0x3u));
    /* 0089477e: imul ecx, dword ptr [esi + 0x30] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esi+0x30u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894782: lea eax, [edx + 2] */ r_eax = (u32)(r_edx+0x2u);
    /* 00894785: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 00894788: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089478a: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089478c: mov edx, eax */ r_edx = r_eax;
    /* 0089478e: jmp 0x8947d2 */ goto L_008947d2;
L_00894790:; BB(0x00894790);
    /* 00894790: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00894793: sub ebx, dword ptr [esi + 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00894796: jmp 0x8947d2 */ goto L_008947d2;
L_00894798:; BB(0x00894798);
    /* 00894798: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089479b: sub ebx, dword ptr [esi + 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0089479e: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 008947a1: jmp 0x8947d2 */ goto L_008947d2;
L_008947a3:; BB(0x008947a3);
    /* 008947a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008947a5: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fC = 0; }
    /* 008947a7: jbe 0x8947cd */ if ((fC||fZ)) goto L_008947cd;
L_008947a9:; BB(0x008947a9);
    /* 008947a9: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008947ac: je 0x8947b8 */ if (fZ) goto L_008947b8;
L_008947ae:; BB(0x008947ae);
    /* 008947ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008947b0: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 008947b3: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008947b6: jmp 0x8947bf */ goto L_008947bf;
L_008947b8:; BB(0x008947b8);
    /* 008947b8: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 008947bc: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_008947bf:; BB(0x008947bf);
    /* 008947bf: mov byte ptr [ecx + ebx], al */ W8((u32)(r_ecx+r_ebx), (u8)r_eax);
    /* 008947c2: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 008947c5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008947c6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008947c8: jl 0x8947a9 */ if ((fS!=fO)) goto L_008947a9;
L_008947ca:; BB(0x008947ca);
    /* 008947ca: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
L_008947cd:; BB(0x008947cd);
    /* 008947cd: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 008947d0: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008947d2:; BB(0x008947d2);
    /* 008947d2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008947d3: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008947d4: cmp ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008947d7: jae 0x894728 */ if (!fC) goto L_00894728;
L_008947dd:; BB(0x008947dd);
    /* 008947dd: jmp 0x8946b7 */ goto L_008946b7;
L_008947e2:; BB(0x008947e2);
    /* 008947e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008947e5: jne 0x894895 */ if (!fZ) goto L_00894895;
L_008947eb:; BB(0x008947eb);
    /* 008947eb: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008947ed: jb 0x8946b7 */ if (fC) goto L_008946b7;
L_008947f3:; BB(0x008947f3);
    /* 008947f3: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008947f5: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008947f7: jne 0x894854 */ if (!fZ) goto L_00894854;
L_008947f9:; BB(0x008947f9);
    /* 008947f9: movzx ecx, byte ptr [edx + 1] */ r_ecx = (u32)R8((u32)(r_edx+0x1u));
    /* 008947fd: mov eax, ecx */ r_eax = r_ecx;
    /* 008947ff: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00894802: je 0x894849 */ if (fZ) goto L_00894849;
L_00894804:; BB(0x00894804);
    /* 00894804: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00894805: je 0x894841 */ if (fZ) goto L_00894841;
L_00894807:; BB(0x00894807);
    /* 00894807: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00894808: je 0x89482b */ if (fZ) goto L_0089482b;
L_0089480a:; BB(0x0089480a);
    /* 0089480a: mov eax, ecx */ r_eax = r_ecx;
    /* 0089480c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089480f: lea esi, [edx + 2] */ r_esi = (u32)(r_edx+0x2u);
    /* 00894812: mov edi, ebx */ r_edi = r_ebx;
    /* 00894814: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00894816: mov ecx, eax */ r_ecx = r_eax;
    /* 00894818: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089481b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0089481d: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00894821: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00894823: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00894824: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00894827: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00894829: jmp 0x89487f */ goto L_0089487f;
L_0089482b:; BB(0x0089482b);
    /* 0089482b: movzx ecx, byte ptr [edx + 3] */ r_ecx = (u32)R8((u32)(r_edx+0x3u));
    /* 0089482f: imul ecx, dword ptr [esi + 0x30] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esi+0x30u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894833: lea eax, [edx + 2] */ r_eax = (u32)(r_edx+0x2u);
    /* 00894836: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 00894839: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089483b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089483d: mov edx, eax */ r_edx = r_eax;
    /* 0089483f: jmp 0x894882 */ goto L_00894882;
L_00894841:; BB(0x00894841);
    /* 00894841: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00894844: sub ebx, dword ptr [esi + 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00894847: jmp 0x894882 */ goto L_00894882;
L_00894849:; BB(0x00894849);
    /* 00894849: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089484c: sub ebx, dword ptr [esi + 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0089484f: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 00894852: jmp 0x894882 */ goto L_00894882;
L_00894854:; BB(0x00894854);
    /* 00894854: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00894857: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 0089485b: mov edi, ebx */ r_edi = r_ebx;
    /* 0089485d: mov bl, al */ r_ebx = (r_ebx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 0089485f: mov bh, bl */ r_ebx = (r_ebx & 0xffff00ffu) | ((((u8)r_ebx) & 0xffu) << 8);
    /* 00894861: mov esi, ecx */ r_esi = r_ecx;
    /* 00894863: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00894866: mov eax, ebx */ r_eax = r_ebx;
    /* 00894868: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089486b: mov ax, bx */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_ebx) & 0xffffu);
    /* 0089486e: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00894871: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00894873: mov ecx, esi */ r_ecx = r_esi;
    /* 00894875: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00894878: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0089487a: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0089487d: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0089487f:; BB(0x0089487f);
    /* 0089487f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
L_00894882:; BB(0x00894882);
    /* 00894882: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00894883: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00894884: cmp ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894887: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0089488a: jae 0x8947f3 */ if (!fC) goto L_008947f3;
L_00894890:; BB(0x00894890);
    /* 00894890: jmp 0x8946b7 */ goto L_008946b7;
L_00894895:; BB(0x00894895);
    /* 00894895: mov di, word ptr [edi + 0xe] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_edi+0xeu))) & 0xffffu);
    /* 00894899: cmp di, 1 */ {  u32 a = (u16)r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0089489d: je 0x894914 */ if (fZ) goto L_00894914;
L_0089489f:; BB(0x0089489f);
    /* 0089489f: cmp di, 4 */ {  u32 a = (u16)r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008948a3: jne 0x89493d */ if (!fZ) goto L_0089493d;
L_008948a9:; BB(0x008948a9);
    /* 008948a9: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008948ab: jb 0x8946b7 */ if (fC) goto L_008946b7;
L_008948b1:; BB(0x008948b1);
    /* 008948b1: cmp ebx, dword ptr [ebp - 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008948b4: jae 0x8946b7 */ if (!fC) goto L_008946b7;
L_008948ba:; BB(0x008948ba);
    /* 008948ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008948bc: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008948bf: jbe 0x894929 */ if ((fC||fZ)) goto L_00894929;
L_008948c1:; BB(0x008948c1);
    /* 008948c1: mov eax, ecx */ r_eax = r_ecx;
    /* 008948c3: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008948c5: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008948c8: movzx eax, byte ptr [eax + edx] */ r_eax = (u32)R8((u32)(r_eax+r_edx));
    /* 008948cc: je 0x89491d */ if (fZ) goto L_0089491d;
L_008948ce:; BB(0x008948ce);
    /* 008948ce: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008948d1: jmp 0x894920 */ goto L_00894920;
L_008948d3:; BB(0x008948d3);
    /* 008948d3: cmp ebx, dword ptr [ebp - 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008948d6: jae 0x8946b7 */ if (!fC) goto L_008946b7;
L_008948dc:; BB(0x008948dc);
    /* 008948dc: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008948e0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008948e4: jbe 0x89490e */ if ((fC||fZ)) goto L_0089490e;
L_008948e6:; BB(0x008948e6);
    /* 008948e6: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 008948e9: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008948ec: and al, 7 */ {  u32 a = (u8)r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008948ee: mov cl, 7 */ r_ecx = (r_ecx & 0xffffff00u) | ((0x7u) & 0xffu);
    /* 008948f0: sub cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008948f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008948f5: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008948f8: mov al, byte ptr [eax + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_edx))) & 0xffu);
    /* 008948fb: shr al, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008948fd: and al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008948ff: mov byte ptr [esi + ebx], al */ W8((u32)(r_esi+r_ebx), (u8)r_eax);
    /* 00894902: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00894903: cmp esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894906: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00894909: jb 0x8948e6 */ if (fC) goto L_008948e6;
L_0089490b:; BB(0x0089490b);
    /* 0089490b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
L_0089490e:; BB(0x0089490e);
    /* 0089490e: add ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00894911: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00894914:; BB(0x00894914);
    /* 00894914: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894916: jae 0x8948d3 */ if (!fC) goto L_008948d3;
L_00894918:; BB(0x00894918);
    /* 00894918: jmp 0x8946b7 */ goto L_008946b7;
L_0089491d:; BB(0x0089491d);
    /* 0089491d: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_00894920:; BB(0x00894920);
    /* 00894920: mov byte ptr [ecx + ebx], al */ W8((u32)(r_ecx+r_ebx), (u8)r_eax);
    /* 00894923: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00894924: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894927: jb 0x8948c1 */ if (fC) goto L_008948c1;
L_00894929:; BB(0x00894929);
    /* 00894929: add ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089492c: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089492f: cmp ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894932: jae 0x8948b1 */ if (!fC) goto L_008948b1;
L_00894938:; BB(0x00894938);
    /* 00894938: jmp 0x8946b7 */ goto L_008946b7;
L_0089493d:; BB(0x0089493d);
    /* 0089493d: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089493f: jb 0x8946b7 */ if (fC) goto L_008946b7;
L_00894945:; BB(0x00894945);
    /* 00894945: cmp ebx, dword ptr [ebp - 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894948: jae 0x8946b7 */ if (!fC) goto L_008946b7;
L_0089494e:; BB(0x0089494e);
    /* 0089494e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00894951: mov eax, ecx */ r_eax = r_ecx;
    /* 00894953: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00894956: mov esi, edx */ r_esi = r_edx;
    /* 00894958: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089495b: mov edi, ebx */ r_edi = r_ebx;
    /* 0089495d: add ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00894960: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00894962: mov ecx, eax */ r_ecx = r_eax;
    /* 00894964: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00894967: cmp ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089496a: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0089496c: jae 0x894945 */ if (!fC) goto L_00894945;
L_0089496e:; BB(0x0089496e);
    /* 0089496e: jmp 0x8946b7 */ goto L_008946b7;
L_00894973:; BB(0x00894973);
    /* 00894973: mov eax, 0x80004001 */ r_eax = 0x80004001u;
L_00894978:; BB(0x00894978);
    /* 00894978: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00894979: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089497a:; BB(0x0089497a);
    /* 0089497a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089497b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089497c: ret 8 */ FN_RET(0x00894269); r_esp += 12; return;
}

void f_0089497f(void) /* sub_89497F */
{
    FN_ENTER(0x0089497f);
    /* 0089497f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00894980: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00894984: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00894986: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00894987: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x89498au); call_ind(t); }
    /* 0089498a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089498c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089498d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089498f: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00894994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894995: call 0x8cb0f0 */ r_esp -= 4; W32(r_esp, 0x89499au); f_008cb0f0();
    /* 0089499a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089499b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0089499f: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 008949a2: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 008949a5: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008949a7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 008949aa: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008949ad: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008949af: ret  */ FN_RET(0x0089497f); r_esp += 4; return;
}

void f_0089499b(void)
{
    FN_ENTER(0x0089499b);
    /* 0089499b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0089499f: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 008949a2: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 008949a5: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008949a7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 008949aa: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008949ad: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008949af: ret  */ FN_RET(0x0089499b); r_esp += 4; return;
}

void f_008949b0(void) /* sub_8949B0 */
{
    FN_ENTER(0x008949b0);
    /* 008949b0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008949b4: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 008949b7: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008949bb: add dword ptr [eax], ecx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008949bd: sub dword ptr [eax + 4], ecx */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008949c0: ret  */ FN_RET(0x008949b0); r_esp += 4; return;
}

void f_008949c1(void) /* sub_8949C1 */
{
    FN_ENTER(0x008949c1);
    /* 008949c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008949c2: mov ebp, esp */ r_ebp = r_esp;
    /* 008949c4: sub esp, 0x274 */ {  u32 a = r_esp; u32 b = 0x274u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008949ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008949cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008949cc: lea eax, [ebp - 0x274] */ r_eax = (u32)(r_ebp+0xfffffd8cu);
    /* 008949d2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008949d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008949d4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008949d7: call 0x8a3e03 */ r_esp -= 4; W32(r_esp, 0x8949dcu); f_008a3e03();
    /* 008949dc: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 008949e2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008949e4: lea eax, [ebp - 0x1f0] */ r_eax = (u32)(r_ebp+0xfffffe10u);
    /* 008949ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008949eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008949ec: mov dword ptr [ebp - 0x274], 0x89497f */ W32((u32)(r_ebp+0xfffffd8cu), 0x89497fu);
    /* 008949f6: mov dword ptr [ebp - 0x26c], 0x857d95 */ W32((u32)(r_ebp+0xfffffd94u), 0x857d95u);
    /* 00894a00: call 0x8cb16c */ r_esp -= 4; W32(r_esp, 0x894a05u); f_008cb16c();
    /* 00894a05: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00894a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894a0a: je 0x894a16 */ if (fZ) goto L_00894a16;
L_00894a0c:; BB(0x00894a0c);
    /* 00894a0c: mov esi, 0x80004005 */ r_esi = 0x80004005u;
    /* 00894a11: jmp 0x894c1b */ goto L_00894c1b;
L_00894a16:; BB(0x00894a16);
    /* 00894a16: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00894a1b: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00894a21: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00894a23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894a24: call 0x8a2041 */ r_esp -= 4; W32(r_esp, 0x894a29u); f_008a2041();
    /* 00894a29: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00894a2b: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00894a31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00894a32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894a33: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00894a39: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x894a3bu); call_ind(t); }
    /* 00894a3b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00894a3e: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 00894a44: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00894a47: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00894a4a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00894a4c: mov dword ptr [eax + 8], 0x857d95 */ W32((u32)(r_eax+0x8u), 0x857d95u);
    /* 00894a53: mov dword ptr [eax + 0xc], 0x89499b */ W32((u32)(r_eax+0xcu), 0x89499bu);
    /* 00894a5a: mov dword ptr [eax + 0x10], 0x8949b0 */ W32((u32)(r_eax+0x10u), 0x8949b0u);
    /* 00894a61: mov dword ptr [eax + 0x14], 0x8a3b5c */ W32((u32)(r_eax+0x14u), 0x8a3b5cu);
    /* 00894a68: mov dword ptr [eax + 0x18], 0x857d95 */ W32((u32)(r_eax+0x18u), 0x857d95u);
    /* 00894a6f: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00894a72: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00894a74: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00894a77: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00894a78: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00894a7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00894a7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894a80: call 0x8a23ba */ r_esp -= 4; W32(r_esp, 0x894a85u); f_008a23ba();
    /* 00894a85: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00894a88: call 0x89f409 */ r_esp -= 4; W32(r_esp, 0x894a8du); f_0089f409();
    /* 00894a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894a8f: jne 0x894a97 */ if (!fZ) goto L_00894a97;
L_00894a91:; BB(0x00894a91);
    /* 00894a91: mov dword ptr [ebp - 0x16c], edi */ W32((u32)(r_ebp+0xfffffe94u), r_edi);
L_00894a97:; BB(0x00894a97);
    /* 00894a97: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00894a9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894a9e: mov dword ptr [ebp - 0x26c], 0x8a3d0d */ W32((u32)(r_ebp+0xfffffd94u), 0x8a3d0du);
    /* 00894aa8: call 0x8a254a */ r_esp -= 4; W32(r_esp, 0x894aadu); f_008a254a();
    /* 00894aad: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00894ab3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00894ab4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00894ab5: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00894ab7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00894ab8: je 0x894adb */ if (fZ) goto L_00894adb;
L_00894aba:; BB(0x00894aba);
    /* 00894aba: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00894abb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00894abc: jne 0x894a0c */ if (!fZ) goto L_00894a0c;
L_00894ac2:; BB(0x00894ac2);
    /* 00894ac2: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 00894ac8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00894acb: mov ecx, eax */ r_ecx = r_eax;
    /* 00894acd: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00894ad0: mov dword ptr [esi], 0x16 */ W32((u32)(r_esi), 0x16u);
    /* 00894ad6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 00894ad9: jmp 0x894ae9 */ goto L_00894ae9;
L_00894adb:; BB(0x00894adb);
    /* 00894adb: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00894ade: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 00894ae4: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 00894ae6: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_00894ae9:; BB(0x00894ae9);
    /* 00894ae9: and dword ptr [esi + 0x34], 0 */ { u32 ad = (u32)(r_esi+0x34u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00894aed: cmp dword ptr [esi + 0x40], 0 */ {  u32 a = R32((u32)(r_esi+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894af1: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00894af4: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00894afa: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 00894afd: mov dword ptr [esi + 0x14], edi */ W32((u32)(r_esi+0x14u), r_edi);
    /* 00894b00: je 0x894c19 */ if (fZ) goto L_00894c19;
L_00894b06:; BB(0x00894b06);
    /* 00894b06: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00894b09: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894b0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00894b0d: mov dword ptr [esi + 0x38], edi */ W32((u32)(r_esi+0x38u), r_edi);
    /* 00894b10: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x894b15u); f_008581c5();
    /* 00894b15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894b17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00894b18: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00894b1b: jne 0x894b27 */ if (!fZ) goto L_00894b27;
L_00894b1d:; BB(0x00894b1d);
    /* 00894b1d: mov esi, 0x8007000e */ r_esi = 0x8007000eu;
    /* 00894b22: jmp 0x894c1b */ goto L_00894c1b;
L_00894b27:; BB(0x00894b27);
    /* 00894b27: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 00894b2d: imul eax, dword ptr [ebp - 0x148] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffeb8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894b34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00894b35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894b36: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00894b3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00894b3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894b3e: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00894b44: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x894b47u); call_ind(t); }
    /* 00894b47: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00894b4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894b4c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00894b4f: je 0x894b1d */ if (fZ) goto L_00894b1d;
L_00894b51:; BB(0x00894b51);
    /* 00894b51: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00894b53: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894b55: jne 0x894bb5 */ if (!fZ) goto L_00894bb5;
L_00894b57:; BB(0x00894b57);
    /* 00894b57: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00894b5d: cmp eax, dword ptr [ebp - 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffeb0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894b63: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00894b66: jae 0x894c0c */ if (!fC) goto L_00894c0c;
L_00894b6c:; BB(0x00894b6c);
    /* 00894b6c: jmp 0x894b71 */ goto L_00894b71;
L_00894b6e:; BB(0x00894b6e);
    /* 00894b6e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00894b70: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00894b71:; BB(0x00894b71);
    /* 00894b71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00894b72: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00894b75: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00894b7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894b7c: call 0x8a24c6 */ r_esp -= 4; W32(r_esp, 0x894b81u); f_008a24c6();
    /* 00894b81: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 00894b87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00894b8a: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00894b8c: mov eax, ecx */ r_eax = r_ecx;
    /* 00894b8e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00894b91: mov edi, ebx */ r_edi = r_ebx;
    /* 00894b93: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00894b95: mov ecx, eax */ r_ecx = r_eax;
    /* 00894b97: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00894b9a: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00894b9c: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00894ba2: add ebx, dword ptr [ebp - 0x154] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffeacu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00894ba8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00894bab: cmp eax, dword ptr [ebp - 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffeb0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894bb1: jb 0x894b6e */ if (fC) goto L_00894b6e;
L_00894bb3:; BB(0x00894bb3);
    /* 00894bb3: jmp 0x894c0c */ goto L_00894c0c;
L_00894bb5:; BB(0x00894bb5);
    /* 00894bb5: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894bb8: jne 0x894c0c */ if (!fZ) goto L_00894c0c;
L_00894bba:; BB(0x00894bba);
    /* 00894bba: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 00894bbd: jmp 0x894bfe */ goto L_00894bfe;
L_00894bbf:; BB(0x00894bbf);
    /* 00894bbf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00894bc0: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00894bc3: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00894bc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894bca: call 0x8a24c6 */ r_esp -= 4; W32(r_esp, 0x894bcfu); f_008a24c6();
    /* 00894bcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00894bd2: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 00894bd8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00894bda: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00894bdd: lea ecx, [esi + ecx*4] */ r_ecx = (u32)(r_esi+r_ecx*4);
    /* 00894be0: jmp 0x894bfa */ goto L_00894bfa;
L_00894be2:; BB(0x00894be2);
    /* 00894be2: movzx ebx, byte ptr [eax + 2] */ r_ebx = (u32)R8((u32)(r_eax+0x2u));
    /* 00894be6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00894be8: mov dh, byte ptr [eax] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_eax))) & 0xffu) << 8);
    /* 00894bea: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00894bed: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00894bf0: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00894bf2: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00894bf4: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00894bf7: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00894bfa:; BB(0x00894bfa);
    /* 00894bfa: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894bfc: jb 0x894be2 */ if (fC) goto L_00894be2;
L_00894bfe:; BB(0x00894bfe);
    /* 00894bfe: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00894c04: cmp eax, dword ptr [ebp - 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffeb0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894c0a: jb 0x894bbf */ if (fC) goto L_00894bbf;
L_00894c0c:; BB(0x00894c0c);
    /* 00894c0c: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00894c12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894c13: call 0x8a2313 */ r_esp -= 4; W32(r_esp, 0x894c18u); f_008a2313();
    /* 00894c18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00894c19:; BB(0x00894c19);
    /* 00894c19: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00894c1b:; BB(0x00894c1b);
    /* 00894c1b: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00894c21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894c22: call 0x8a2101 */ r_esp -= 4; W32(r_esp, 0x894c27u); f_008a2101();
    /* 00894c27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00894c28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00894c29: mov eax, esi */ r_eax = r_esi;
    /* 00894c2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00894c2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00894c2d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00894c2e: ret 8 */ FN_RET(0x008949c1); r_esp += 12; return;
}

void f_00894c31(void) /* sub_894C31 */
{
    FN_ENTER(0x00894c31);
    /* 00894c31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00894c32: mov ebp, esp */ r_ebp = r_esp;
    /* 00894c34: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00894c37: cmp dword ptr [ebp + 0xc], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894c3b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00894c3c: mov esi, ecx */ r_esi = r_ecx;
    /* 00894c3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00894c3f: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00894c42: jae 0x894c4e */ if (!fC) goto L_00894c4e;
L_00894c44:; BB(0x00894c44);
    /* 00894c44: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00894c49: jmp 0x8950d2 */ goto L_008950d2;
L_00894c4e:; BB(0x00894c4e);
    /* 00894c4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00894c4f: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00894c52: mov cl, byte ptr [ebx + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx+0x1u))) & 0xffu);
    /* 00894c55: test cl, 0xfe */ {  u32 a = (u8)r_ecx; u32 b = 0xfeu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00894c58: jne 0x8950cc */ if (!fZ) goto L_008950cc;
L_00894c5e:; BB(0x00894c5e);
    /* 00894c5e: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 00894c62: test edx, 0xfffffff4 */ {  u32 a = r_edx; u32 b = 0xfffffff4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00894c68: jne 0x8950cc */ if (!fZ) goto L_008950cc;
L_00894c6e:; BB(0x00894c6e);
    /* 00894c6e: cmp word ptr [ebx + 0xc], 0 */ {  u32 a = R16((u32)(r_ebx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00894c73: je 0x8950cc */ if (fZ) goto L_008950cc;
L_00894c79:; BB(0x00894c79);
    /* 00894c79: cmp word ptr [ebx + 0xe], 0 */ {  u32 a = R16((u32)(r_ebx+0xeu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00894c7e: je 0x8950cc */ if (fZ) goto L_008950cc;
L_00894c84:; BB(0x00894c84);
    /* 00894c84: movzx eax, byte ptr [ebx + 7] */ r_eax = (u32)R8((u32)(r_ebx+0x7u));
    /* 00894c88: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00894c8c: lea edi, [eax + 7] */ r_edi = (u32)(r_eax+0x7u);
    /* 00894c8f: shr edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00894c92: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00894c94: je 0x894cce */ if (fZ) goto L_00894cce;
L_00894c96:; BB(0x00894c96);
    /* 00894c96: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00894c99: je 0x894cc7 */ if (fZ) goto L_00894cc7;
L_00894c9b:; BB(0x00894c9b);
    /* 00894c9b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00894c9c: je 0x894cbe */ if (fZ) goto L_00894cbe;
L_00894c9e:; BB(0x00894c9e);
    /* 00894c9e: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00894ca1: je 0x894cb5 */ if (fZ) goto L_00894cb5;
L_00894ca3:; BB(0x00894ca3);
    /* 00894ca3: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894ca6: jne 0x8950cc */ if (!fZ) goto L_008950cc;
L_00894cac:; BB(0x00894cac);
    /* 00894cac: mov dword ptr [ebp - 0x14], 0x15 */ W32((u32)(r_ebp+0xffffffecu), 0x15u);
    /* 00894cb3: jmp 0x894cce */ goto L_00894cce;
L_00894cb5:; BB(0x00894cb5);
    /* 00894cb5: mov dword ptr [ebp - 0x14], 0x14 */ W32((u32)(r_ebp+0xffffffecu), 0x14u);
    /* 00894cbc: jmp 0x894cce */ goto L_00894cce;
L_00894cbe:; BB(0x00894cbe);
    /* 00894cbe: mov dword ptr [ebp - 0x14], 0x19 */ W32((u32)(r_ebp+0xffffffecu), 0x19u);
    /* 00894cc5: jmp 0x894cce */ goto L_00894cce;
L_00894cc7:; BB(0x00894cc7);
    /* 00894cc7: mov dword ptr [ebp - 0x14], 0x18 */ W32((u32)(r_ebp+0xffffffecu), 0x18u);
L_00894cce:; BB(0x00894cce);
    /* 00894cce: movzx ecx, byte ptr [ebx + 0x10] */ r_ecx = (u32)R8((u32)(r_ebx+0x10u));
    /* 00894cd2: lea eax, [ecx + 7] */ r_eax = (u32)(r_ecx+0x7u);
    /* 00894cd5: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00894cd8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00894cdb: mov eax, edx */ r_eax = r_edx;
    /* 00894cdd: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00894ce0: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00894ce1: je 0x894d3a */ if (fZ) goto L_00894d3a;
L_00894ce3:; BB(0x00894ce3);
    /* 00894ce3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00894ce4: je 0x894d00 */ if (fZ) goto L_00894d00;
L_00894ce6:; BB(0x00894ce6);
    /* 00894ce6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00894ce7: jne 0x8950cc */ if (!fZ) goto L_008950cc;
L_00894ced:; BB(0x00894ced);
    /* 00894ced: cmp byte ptr [ebx + 0x10], 8 */ {  u32 a = R8((u32)(r_ebx+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00894cf1: jne 0x8950cc */ if (!fZ) goto L_008950cc;
L_00894cf7:; BB(0x00894cf7);
    /* 00894cf7: mov dword ptr [ebp - 0xc], 0x32 */ W32((u32)(r_ebp+0xfffffff4u), 0x32u);
    /* 00894cfe: jmp 0x894d55 */ goto L_00894d55;
L_00894d00:; BB(0x00894d00);
    /* 00894d00: sub ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00894d03: je 0x894d31 */ if (fZ) goto L_00894d31;
L_00894d05:; BB(0x00894d05);
    /* 00894d05: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00894d06: je 0x894d28 */ if (fZ) goto L_00894d28;
L_00894d08:; BB(0x00894d08);
    /* 00894d08: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00894d0b: je 0x894d1f */ if (fZ) goto L_00894d1f;
L_00894d0d:; BB(0x00894d0d);
    /* 00894d0d: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894d10: jne 0x8950cc */ if (!fZ) goto L_008950cc;
L_00894d16:; BB(0x00894d16);
    /* 00894d16: mov dword ptr [ebp - 0xc], 0x15 */ W32((u32)(r_ebp+0xfffffff4u), 0x15u);
    /* 00894d1d: jmp 0x894d55 */ goto L_00894d55;
L_00894d1f:; BB(0x00894d1f);
    /* 00894d1f: mov dword ptr [ebp - 0xc], 0x14 */ W32((u32)(r_ebp+0xfffffff4u), 0x14u);
    /* 00894d26: jmp 0x894d55 */ goto L_00894d55;
L_00894d28:; BB(0x00894d28);
    /* 00894d28: mov dword ptr [ebp - 0xc], 0x19 */ W32((u32)(r_ebp+0xfffffff4u), 0x19u);
    /* 00894d2f: jmp 0x894d55 */ goto L_00894d55;
L_00894d31:; BB(0x00894d31);
    /* 00894d31: mov dword ptr [ebp - 0xc], 0x18 */ W32((u32)(r_ebp+0xfffffff4u), 0x18u);
    /* 00894d38: jmp 0x894d55 */ goto L_00894d55;
L_00894d3a:; BB(0x00894d3a);
    /* 00894d3a: cmp byte ptr [ebx + 1], 0 */ {  u32 a = R8((u32)(r_ebx+0x1u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00894d3e: je 0x8950cc */ if (fZ) goto L_008950cc;
L_00894d44:; BB(0x00894d44);
    /* 00894d44: cmp byte ptr [ebx + 0x10], 8 */ {  u32 a = R8((u32)(r_ebx+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00894d48: jne 0x8950cc */ if (!fZ) goto L_008950cc;
L_00894d4e:; BB(0x00894d4e);
    /* 00894d4e: mov dword ptr [ebp - 0xc], 0x29 */ W32((u32)(r_ebp+0xfffffff4u), 0x29u);
L_00894d55:; BB(0x00894d55);
    /* 00894d55: mov al, byte ptr [ebx + 0x11] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx+0x11u))) & 0xffu);
    /* 00894d58: mov cl, al */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 00894d5a: and cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00894d5d: sub cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00894d60: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00894d63: neg cl */ { u32 x = (u8)r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fC = (a < b); fC = (b != 0); }
    /* 00894d65: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00894d68: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00894d6a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00894d6b: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00894d6d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00894d70: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00894d72: cmp al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00894d74: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 00894d77: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00894d7a: sub dword ptr [ebp + 0xc], 0x12 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00894d7e: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894d81: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00894d84: jb 0x8950cc */ if (fC) goto L_008950cc;
L_00894d8a:; BB(0x00894d8a);
    /* 00894d8a: sub dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00894d8d: lea ecx, [eax + ebx + 0x12] */ r_ecx = (u32)(r_eax+r_ebx+0x12u);
    /* 00894d91: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00894d94: movzx ecx, word ptr [ebx + 5] */ r_ecx = (u32)R16((u32)(r_ebx+0x5u));
    /* 00894d98: mov eax, ecx */ r_eax = r_ecx;
    /* 00894d9a: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894d9d: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894da0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00894da3: jb 0x8950cc */ if (fC) goto L_008950cc;
L_00894da9:; BB(0x00894da9);
    /* 00894da9: cmp dword ptr [esi + 0x40], 0 */ {  u32 a = R32((u32)(r_esi+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894dad: je 0x894f39 */ if (fZ) goto L_00894f39;
L_00894db3:; BB(0x00894db3);
    /* 00894db3: cmp dword ptr [ebp - 0xc], 0x29 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894db7: jne 0x894f39 */ if (!fZ) goto L_00894f39;
L_00894dbd:; BB(0x00894dbd);
    /* 00894dbd: movzx eax, word ptr [ebx + 3] */ r_eax = (u32)R16((u32)(r_ebx+0x3u));
    /* 00894dc1: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00894dc3: mov edi, 0x100 */ r_edi = 0x100u;
    /* 00894dc8: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894dca: jg 0x8950cc */ if ((!fZ&&fS==fO)) goto L_008950cc;
L_00894dd0:; BB(0x00894dd0);
    /* 00894dd0: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 00894dd5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x894ddau); f_008581c5();
    /* 00894dda: mov edx, eax */ r_edx = r_eax;
    /* 00894ddc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00894dde: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00894ddf: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00894de2: jne 0x894dee */ if (!fZ) goto L_00894dee;
L_00894de4:; BB(0x00894de4);
    /* 00894de4: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 00894de9: jmp 0x8950d1 */ goto L_008950d1;
L_00894dee:; BB(0x00894dee);
    /* 00894dee: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00894df1: mov ecx, edi */ r_ecx = r_edi;
    /* 00894df3: mov dword ptr [esi + 0x3c], 1 */ W32((u32)(r_esi+0x3cu), 0x1u);
    /* 00894dfa: mov edi, edx */ r_edi = r_edx;
    /* 00894dfc: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00894dfe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00894e01: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00894e04: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00894e07: movzx eax, word ptr [ebx + 3] */ r_eax = (u32)R16((u32)(r_ebx+0x3u));
    /* 00894e0b: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 00894e0e: movzx ecx, word ptr [ebx + 5] */ r_ecx = (u32)R16((u32)(r_ebx+0x5u));
    /* 00894e12: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 00894e15: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894e17: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00894e1a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00894e1d: jae 0x894f39 */ if (!fC) goto L_00894f39;
L_00894e23:; BB(0x00894e23);
    /* 00894e23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00894e26: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
L_00894e29:; BB(0x00894e29);
    /* 00894e29: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00894e2c: sub edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00894e2f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00894e32: je 0x894efa */ if (fZ) goto L_00894efa;
L_00894e38:; BB(0x00894e38);
    /* 00894e38: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00894e39: je 0x894ed7 */ if (fZ) goto L_00894ed7;
L_00894e3f:; BB(0x00894e3f);
    /* 00894e3f: sub edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00894e42: je 0x894e98 */ if (fZ) goto L_00894e98;
L_00894e44:; BB(0x00894e44);
    /* 00894e44: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00894e45: jne 0x894f18 */ if (!fZ) goto L_00894f18;
L_00894e4b:; BB(0x00894e4b);
    /* 00894e4b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00894e4e: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 00894e51: mov ecx, eax */ r_ecx = r_eax;
    /* 00894e53: shr ecx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00894e56: imul ecx, ecx, 0xff */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894e5c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00894e5f: mov ecx, eax */ r_ecx = r_eax;
    /* 00894e61: shr ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00894e64: mov edx, eax */ r_edx = r_eax;
    /* 00894e66: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00894e69: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00894e6c: mov edi, eax */ r_edi = r_eax;
    /* 00894e6e: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00894e71: mov eax, ecx */ r_eax = r_ecx;
    /* 00894e73: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00894e76: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00894e79: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00894e7c: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00894e7e: mov ecx, edx */ r_ecx = r_edx;
    /* 00894e80: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00894e83: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00894e86: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00894e88: mov edx, edi */ r_edx = r_edi;
    /* 00894e8a: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00894e8d: shl edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00894e90: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00894e92: add dword ptr [ebp + 8], 2 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00894e96: jmp 0x894f15 */ goto L_00894f15;
L_00894e98:; BB(0x00894e98);
    /* 00894e98: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00894e9b: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 00894e9e: mov ecx, eax */ r_ecx = r_eax;
    /* 00894ea0: shr ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00894ea3: mov edx, eax */ r_edx = r_eax;
    /* 00894ea5: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00894ea8: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00894eab: mov edi, eax */ r_edi = r_eax;
    /* 00894ead: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00894eb0: mov eax, ecx */ r_eax = r_ecx;
    /* 00894eb2: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00894eb5: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00894eb8: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00894ebb: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00894ebd: mov ecx, edx */ r_ecx = r_edx;
    /* 00894ebf: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00894ec2: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00894ec5: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00894ec7: mov edx, edi */ r_edx = r_edi;
    /* 00894ec9: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00894ecc: shl edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00894ecf: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00894ed1: add dword ptr [ebp + 8], 2 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00894ed5: jmp 0x894f0e */ goto L_00894f0e;
L_00894ed7:; BB(0x00894ed7);
    /* 00894ed7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00894eda: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00894edc: mov eax, edx */ r_eax = r_edx;
    /* 00894ede: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00894ee1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00894ee4: movzx ecx, dh */ r_ecx = (u32)(u8)(r_edx>>8);
    /* 00894ee7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00894eea: movzx eax, byte ptr [ebp - 0x16] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffeau));
    /* 00894eee: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00894ef4: add dword ptr [ebp + 8], 4 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00894ef8: jmp 0x894f15 */ goto L_00894f15;
L_00894efa:; BB(0x00894efa);
    /* 00894efa: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00894efd: movzx eax, byte ptr [edi + 2] */ r_eax = (u32)R8((u32)(r_edi+0x2u));
    /* 00894f01: movzx ecx, byte ptr [edi + 1] */ r_ecx = (u32)R8((u32)(r_edi+0x1u));
    /* 00894f05: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 00894f08: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00894f0b: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
L_00894f0e:; BB(0x00894f0e);
    /* 00894f0e: mov dword ptr [ebp - 0x1c], 0xff */ W32((u32)(r_ebp+0xffffffe4u), 0xffu);
L_00894f15:; BB(0x00894f15);
    /* 00894f15: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_00894f18:; BB(0x00894f18);
    /* 00894f18: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00894f1b: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00894f1f: mov byte ptr [edi + 2], dl */ W8((u32)(r_edi+0x2u), (u8)r_edx);
    /* 00894f22: mov dl, byte ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 00894f25: mov byte ptr [edi + 3], dl */ W8((u32)(r_edi+0x3u), (u8)r_edx);
    /* 00894f28: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00894f2b: cmp edx, dword ptr [ebp - 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00894f2e: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00894f30: mov byte ptr [edi + 1], cl */ W8((u32)(r_edi+0x1u), (u8)r_ecx);
    /* 00894f33: jb 0x894e29 */ if (fC) goto L_00894e29;
L_00894f39:; BB(0x00894f39);
    /* 00894f39: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 00894f3d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00894f40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00894f43: sub dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00894f46: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00894f48: movzx eax, word ptr [ebx + 0xe] */ r_eax = (u32)R16((u32)(r_ebx+0xeu));
    /* 00894f4c: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894f4f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00894f52: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894f56: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00894f58: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 00894f5b: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 00894f5f: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894f63: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00894f65: cmp dword ptr [esi + 0x40], edi */ {  u32 a = R32((u32)(r_esi+0x40u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894f68: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00894f6b: mov dword ptr [esi + 0x34], edi */ W32((u32)(r_esi+0x34u), r_edi);
    /* 00894f6e: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 00894f72: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00894f75: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 00894f79: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00894f7c: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 00894f7f: mov dword ptr [esi + 0x14], 1 */ W32((u32)(r_esi+0x14u), 0x1u);
    /* 00894f86: je 0x8950c8 */ if (fZ) goto L_008950c8;
L_00894f8c:; BB(0x00894f8c);
    /* 00894f8c: cmp dword ptr [ebp - 0x28], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894f8f: jne 0x894faf */ if (!fZ) goto L_00894faf;
L_00894f91:; BB(0x00894f91);
    /* 00894f91: cmp dword ptr [ebp - 0x24], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894f94: je 0x894faf */ if (fZ) goto L_00894faf;
L_00894f96:; BB(0x00894f96);
    /* 00894f96: cmp dword ptr [ebp - 0x20], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894f99: je 0x894faf */ if (fZ) goto L_00894faf;
L_00894f9b:; BB(0x00894f9b);
    /* 00894f9b: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894f9e: jb 0x8950cc */ if (fC) goto L_008950cc;
L_00894fa4:; BB(0x00894fa4);
    /* 00894fa4: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 00894fa7: mov dword ptr [esi + 0x38], edi */ W32((u32)(r_esi+0x38u), r_edi);
    /* 00894faa: jmp 0x8950c8 */ goto L_008950c8;
L_00894faf:; BB(0x00894faf);
    /* 00894faf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00894fb0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x894fb5u); f_008581c5();
    /* 00894fb5: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00894fb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00894fb8: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00894fbb: je 0x894de4 */ if (fZ) goto L_00894de4;
L_00894fc1:; BB(0x00894fc1);
    /* 00894fc1: cmp dword ptr [ebp - 0x24], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894fc4: mov dword ptr [esi + 0x38], 1 */ W32((u32)(r_esi+0x38u), 0x1u);
    /* 00894fcb: je 0x894fd1 */ if (fZ) goto L_00894fd1;
L_00894fcd:; BB(0x00894fcd);
    /* 00894fcd: mov edx, eax */ r_edx = r_eax;
    /* 00894fcf: jmp 0x894fdc */ goto L_00894fdc;
L_00894fd1:; BB(0x00894fd1);
    /* 00894fd1: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 00894fd5: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00894fd6: imul edx, dword ptr [esi + 0x30] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esi+0x30u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00894fda: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00894fdc:; BB(0x00894fdc);
    /* 00894fdc: cmp word ptr [ebx + 0xe], di */ {  u32 a = R16((u32)(r_ebx+0xeu)); u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00894fe0: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 00894fe3: jbe 0x8950c8 */ if ((fC||fZ)) goto L_008950c8;
L_00894fe9:; BB(0x00894fe9);
    /* 00894fe9: cmp dword ptr [ebp - 0x20], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00894fec: je 0x894ff3 */ if (fZ) goto L_00894ff3;
L_00894fee:; BB(0x00894fee);
    /* 00894fee: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00894ff1: jmp 0x894ffe */ goto L_00894ffe;
L_00894ff3:; BB(0x00894ff3);
    /* 00894ff3: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00894ff6: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00894ff9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00894ffb: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00894ffe:; BB(0x00894ffe);
    /* 00894ffe: movzx eax, word ptr [ebx + 0xc] */ r_eax = (u32)R16((u32)(r_ebx+0xcu));
    /* 00895002: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00895004: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 00895007: jbe 0x8950ab */ if ((fC||fZ)) goto L_008950ab;
L_0089500d:; BB(0x0089500d);
    /* 0089500d: cmp dword ptr [ebp - 0x28], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895010: je 0x895039 */ if (fZ) goto L_00895039;
L_00895012:; BB(0x00895012);
    /* 00895012: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00895016: jb 0x8950cc */ if (fC) goto L_008950cc;
L_0089501c:; BB(0x0089501c);
    /* 0089501c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089501f: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00895022: mov ecx, eax */ r_ecx = r_eax;
    /* 00895024: and ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089502a: and eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089502d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089502e: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00895031: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00895034: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00895037: jmp 0x89503c */ goto L_0089503c;
L_00895039:; BB(0x00895039);
    /* 00895039: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
L_0089503c:; BB(0x0089503c);
    /* 0089503c: add dword ptr [ebp - 0x18], eax */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089503f: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895041: je 0x89508d */ if (fZ) goto L_0089508d;
L_00895043:; BB(0x00895043);
    /* 00895043: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00895044: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00895047: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0089504a: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089504d: jb 0x8950cc */ if (fC) goto L_008950cc;
L_0089504f:; BB(0x0089504f);
    /* 0089504f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00895052: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00895055: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00895058: mov eax, ecx */ r_eax = r_ecx;
    /* 0089505a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089505d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089505f: mov ecx, eax */ r_ecx = r_eax;
    /* 00895061: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00895064: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895068: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0089506a: jne 0x895072 */ if (!fZ) goto L_00895072;
L_0089506c:; BB(0x0089506c);
    /* 0089506c: add dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089506f: sub dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00895072:; BB(0x00895072);
    /* 00895072: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895076: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00895079: je 0x895080 */ if (fZ) goto L_00895080;
L_0089507b:; BB(0x0089507b);
    /* 0089507b: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089507e: jmp 0x895083 */ goto L_00895083;
L_00895080:; BB(0x00895080);
    /* 00895080: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00895083:; BB(0x00895083);
    /* 00895083: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00895086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895088: jne 0x895043 */ if (!fZ) goto L_00895043;
L_0089508a:; BB(0x0089508a);
    /* 0089508a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
L_0089508d:; BB(0x0089508d);
    /* 0089508d: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895091: je 0x89509c */ if (fZ) goto L_0089509c;
L_00895093:; BB(0x00895093);
    /* 00895093: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00895096: add dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00895099: sub dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0089509c:; BB(0x0089509c);
    /* 0089509c: movzx eax, word ptr [ebx + 0xc] */ r_eax = (u32)R16((u32)(r_ebx+0xcu));
    /* 008950a0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008950a2: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008950a5: jb 0x89500d */ if (fC) goto L_0089500d;
L_008950ab:; BB(0x008950ab);
    /* 008950ab: cmp dword ptr [ebp - 0x24], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008950ae: je 0x8950b5 */ if (fZ) goto L_008950b5;
L_008950b0:; BB(0x008950b0);
    /* 008950b0: add edx, dword ptr [esi + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008950b3: jmp 0x8950b8 */ goto L_008950b8;
L_008950b5:; BB(0x008950b5);
    /* 008950b5: sub edx, dword ptr [esi + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_008950b8:; BB(0x008950b8);
    /* 008950b8: movzx eax, word ptr [ebx + 0xe] */ r_eax = (u32)R16((u32)(r_ebx+0xeu));
    /* 008950bc: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008950bf: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008950c2: jb 0x894fe9 */ if (fC) goto L_00894fe9;
L_008950c8:; BB(0x008950c8);
    /* 008950c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008950ca: jmp 0x8950d1 */ goto L_008950d1;
L_008950cc:; BB(0x008950cc);
    /* 008950cc: mov eax, 0x80004005 */ r_eax = 0x80004005u;
L_008950d1:; BB(0x008950d1);
    /* 008950d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008950d2:; BB(0x008950d2);
    /* 008950d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008950d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008950d4: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008950d5: ret 8 */ FN_RET(0x00894c31); r_esp += 12; return;
}

