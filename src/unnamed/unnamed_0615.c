#include "protos.h"

void f_00615148(void) /* sub_615148 */
{
    FN_ENTER(0x00615148);
    /* 00615148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615149: mov ebp, esp */ r_ebp = r_esp;
    /* 0061514b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061514d: push 0x8e1274 */ { u32 v = 0x8e1274u; r_esp -= 4; W32(r_esp, v); }
    /* 00615152: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615159: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615160: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615163: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615166: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00615169: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061516c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061516f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00615174: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061517b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x615180u); f_008581c5();
    /* 00615180: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615181: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00615184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615186: je 0x6151c7 */ if (fZ) goto L_006151c7;
L_00615188:; BB(0x00615188);
    /* 00615188: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061518f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00615196: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615199: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061519b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061519c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061519d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061519e: push 0x9c4970 */ { u32 v = 0x9c4970u; r_esp -= 4; W32(r_esp, v); }
    /* 006151a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006151a5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6151aau); f_005b7a84();
    /* 006151aa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006151ad: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006151b4:; BB(0x006151b4);
    /* 006151b4: mov dword ptr [0xa8ea98], eax */ W32((u32)(0xa8ea98u), r_eax);
    /* 006151b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006151bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006151c3: mov esp, ebp */ r_esp = r_ebp;
    /* 006151c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006151c6: ret  */ FN_RET(0x00615148); r_esp += 4; return;
L_006151c7:; BB(0x006151c7);
    /* 006151c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006151c9: jmp 0x6151b4 */ goto L_006151b4;
}

void f_006151cc(void) /* sub_6151CC */
{
    FN_ENTER(0x006151cc);
    /* 006151cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006151cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006151cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006151d1: call 0x6151f0 */ r_esp -= 4; W32(r_esp, 0x6151d6u); f_006151f0();
    /* 006151d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006151da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006151dc: jne 0x6151e2 */ if (!fZ) goto L_006151e2;
L_006151de:; BB(0x006151de);
    /* 006151de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006151df: ret 4 */ FN_RET(0x006151cc); r_esp += 8; return;
L_006151e2:; BB(0x006151e2);
    /* 006151e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006151e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6151e8u); f_005c2f74();
    /* 006151e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006151e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006151ea: ret 4 */ FN_RET(0x006151cc); r_esp += 8; return;
}

void f_006151f0(void) /* sub_6151F0 */
{
    FN_ENTER(0x006151f0);
    /* 006151f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006151f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006151f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006151f5: push 0x8e1290 */ { u32 v = 0x8e1290u; r_esp -= 4; W32(r_esp, v); }
    /* 006151fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615201: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615208: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061520b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061520e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00615211: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00615214: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00615217: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061521a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00615221: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615224: mov dword ptr [eax], 0xb254e0 */ W32((u32)(r_eax), 0xb254e0u);
    /* 0061522a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061522b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x615230u); f_007b4e84();
    /* 00615230: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615231: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615234: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x615239u); f_007b9c8c();
    /* 00615239: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00615240: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615243: call 0x628d94 */ r_esp -= 4; W32(r_esp, 0x615248u); f_00628d94();
    /* 00615248: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061524b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615252: mov esp, ebp */ r_esp = r_ebp;
    /* 00615254: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615255: ret  */ FN_RET(0x006151f0); r_esp += 4; return;
}

void f_00615258(void) /* sub_615258 */
{
    FN_ENTER(0x00615258);
    /* 00615258: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00615259: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061525a: mov edi, ecx */ r_edi = r_ecx;
    /* 0061525c: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615262: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615268: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0061526a: mov ecx, edi */ r_ecx = r_edi;
    /* 0061526c: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61526fu); call_ind(t); }
    /* 0061526f: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 00615275: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00615278: je 0x61527d */ if (fZ) goto L_0061527d;
L_0061527a:; BB(0x0061527a);
    /* 0061527a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061527b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061527c: ret  */ FN_RET(0x00615258); r_esp += 4; return;
L_0061527d:; BB(0x0061527d);
    /* 0061527d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x615282u); f_0082d7b0();
    /* 00615282: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00615285: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61528au); f_0082d838();
    /* 0061528a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0061528d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061528f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x615294u); f_0082d8bc();
    /* 00615294: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00615297: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61529cu); f_00829cc8();
    /* 0061529c: mov ebp, dword ptr [edi + 0x34] */ r_ebp = R32((u32)(r_edi+0x34u));
    /* 0061529f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006152a2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006152a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006152a7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006152aa: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6152afu); f_00830b74();
    /* 006152af: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006152b2: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6152b7u); f_008321d8();
    /* 006152b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006152b8: mov eax, dword ptr [edi + 0xcc] */ r_eax = R32((u32)(r_edi+0xccu));
    /* 006152be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006152c1: je 0x6152cb */ if (fZ) goto L_006152cb;
L_006152c3:; BB(0x006152c3);
    /* 006152c3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6152c8u); f_0082da80();
    /* 006152c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006152c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006152ca: ret  */ FN_RET(0x00615258); r_esp += 4; return;
L_006152cb:; BB(0x006152cb);
    /* 006152cb: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6152d0u); f_0082dbac();
    /* 006152d0: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 006152d3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6152d8u); f_0082d7b0();
    /* 006152d8: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006152db: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006152de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006152e0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006152e3: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6152e8u); f_00830b74();
    /* 006152e8: mov edx, dword ptr [edi + 0xe4] */ r_edx = R32((u32)(r_edi+0xe4u));
    /* 006152ee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006152f0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6152f5u); f_0082d8bc();
    /* 006152f5: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006152f8: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6152fdu); f_008321d8();
    /* 006152fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006152fe: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x615303u); f_0082da80();
    /* 00615303: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x615308u); f_0082dab0();
    /* 00615308: jmp 0x6152c3 */ goto L_006152c3;
}

void f_0061530c(void) /* sub_61530C */
{
    FN_ENTER(0x0061530c);
    /* 0061530c: mov ecx, dword ptr [0xa8eaa4] */ r_ecx = R32((u32)(0xa8eaa4u));
    /* 00615312: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615314: je 0x615329 */ if (fZ) goto L_00615329;
L_00615316:; BB(0x00615316);
    /* 00615316: je 0x61531f */ if (fZ) goto L_0061531f;
L_00615318:; BB(0x00615318);
    /* 00615318: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061531a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61531fu); f_004066a8();
L_0061531f:; BB(0x0061531f);
    /* 0061531f: mov dword ptr [0xa8eaa4], 0 */ W32((u32)(0xa8eaa4u), 0x0u);
L_00615329:; BB(0x00615329);
    /* 00615329: ret  */ FN_RET(0x0061530c); r_esp += 4; return;
}

void f_0061532c(void)
{
    FN_ENTER(0x0061532c);
    /* 0061532c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061532d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061532f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615331: push 0x8e12b8 */ { u32 v = 0x8e12b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00615336: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061533c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061533d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615344: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615347: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061534a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061534d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00615350: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00615353: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00615358: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061535f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x615364u); f_005caba4();
    /* 00615364: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615365: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00615368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061536a: je 0x6153a3 */ if (fZ) goto L_006153a3;
L_0061536c:; BB(0x0061536c);
    /* 0061536c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00615373: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061537a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061537d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615383: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615386: call 0x6153a8 */ r_esp -= 4; W32(r_esp, 0x61538bu); f_006153a8();
    /* 0061538b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061538e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00615395:; BB(0x00615395);
    /* 00615395: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615398: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061539f: mov esp, ebp */ r_esp = r_ebp;
    /* 006153a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006153a2: ret  */ FN_RET(0x0061532c); r_esp += 4; return;
L_006153a3:; BB(0x006153a3);
    /* 006153a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006153a5: jmp 0x615395 */ goto L_00615395;
}

void f_006153a8(void) /* sub_6153A8 */
{
    FN_ENTER(0x006153a8);
    /* 006153a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006153a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006153ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006153ad: push 0x8e12d4 */ { u32 v = 0x8e12d4u; r_esp -= 4; W32(r_esp, v); }
    /* 006153b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006153b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006153b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006153c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006153c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006153c6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006153c9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006153cc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006153cf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006153d2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006153d5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006153d8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006153db: call 0x628ef4 */ r_esp -= 4; W32(r_esp, 0x6153e0u); f_00628ef4();
    /* 006153e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006153e7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006153ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006153ed: mov dword ptr [ecx], 0xb254e0 */ W32((u32)(r_ecx), 0xb254e0u);
    /* 006153f3: mov eax, dword ptr [0x9c49c8] */ r_eax = R32((u32)(0x9c49c8u));
    /* 006153f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006153f9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006153fc: call dword ptr [0xb254f4] */ { u32 t = R32((u32)(0xb254f4u)); r_esp -= 4; W32(r_esp, 0x615402u); call_ind(t); }
    /* 00615402: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615405: mov ebx, dword ptr [0xa8eaa4] */ r_ebx = R32((u32)(0xa8eaa4u));
    /* 0061540b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061540d: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00615413: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00615416: push 0x9c49cc */ { u32 v = 0x9c49ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0061541b: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0061541e: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 00615424: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00615427: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0061542a: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61542fu); f_007b9a88();
    /* 0061542f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615432: push 0x1288 */ { u32 v = 0x1288u; r_esp -= 4; W32(r_esp, v); }
    /* 00615437: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00615439: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61543eu); f_007b52c4();
    /* 0061543e: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00615441: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x615446u); f_007b999c();
    /* 00615446: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615447: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061544a: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61544fu); f_007b4f54();
    /* 0061544f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615452: call 0x628de4 */ r_esp -= 4; W32(r_esp, 0x615457u); f_00628de4();
    /* 00615457: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061545a: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 0061545f: mov dword ptr [ecx + 0xc0], 0x43fa0000 */ W32((u32)(r_ecx+0xc0u), 0x43fa0000u);
    /* 00615469: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061546c: mov dword ptr [ecx + 0xc4], 0x41200000 */ W32((u32)(r_ecx+0xc4u), 0x41200000u);
    /* 00615476: mov dword ptr [ecx + 0xe4], 0 */ W32((u32)(r_ecx+0xe4u), 0x0u);
    /* 00615480: je 0x61549d */ if (fZ) goto L_0061549d;
L_00615482:; BB(0x00615482);
    /* 00615482: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615485: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00615488: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061548b: mov eax, ecx */ r_eax = r_ecx;
    /* 0061548d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615490: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615497: mov esp, ebp */ r_esp = r_ebp;
    /* 00615499: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061549a: ret 8 */ FN_RET(0x006153a8); r_esp += 12; return;
L_0061549d:; BB(0x0061549d);
    /* 0061549d: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6154a2u); f_0078b1c4();
    /* 006154a2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006154a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006154a8: jne 0x615482 */ if (!fZ) goto L_00615482;
L_006154aa:; BB(0x006154aa);
    /* 006154aa: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 006154ae: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006154b4: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 006154b8: jmp 0x615482 */ goto L_00615482;
}

void f_006154bc(void) /* sub_6154BC */
{
    FN_ENTER(0x006154bc);
    /* 006154bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006154bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006154bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006154c1: push 0x8e12fc */ { u32 v = 0x8e12fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006154c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006154cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006154cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006154d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006154d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006154da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006154dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006154e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006154e3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006154e8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006154ef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6154f4u); f_008581c5();
    /* 006154f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006154f5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006154f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006154fa: je 0x61553b */ if (fZ) goto L_0061553b;
L_006154fc:; BB(0x006154fc);
    /* 006154fc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00615503: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061550a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061550d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061550f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615511: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615512: push 0x9c49b8 */ { u32 v = 0x9c49b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00615517: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00615519: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61551eu); f_005b7a84();
    /* 0061551e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615521: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00615528:; BB(0x00615528);
    /* 00615528: mov dword ptr [0xa8eaa4], eax */ W32((u32)(0xa8eaa4u), r_eax);
    /* 0061552d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615530: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615537: mov esp, ebp */ r_esp = r_ebp;
    /* 00615539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061553a: ret  */ FN_RET(0x006154bc); r_esp += 4; return;
L_0061553b:; BB(0x0061553b);
    /* 0061553b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061553d: jmp 0x615528 */ goto L_00615528;
}

void f_00615540(void) /* sub_615540 */
{
    FN_ENTER(0x00615540);
    /* 00615540: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00615541: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00615543: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00615545: call 0x615564 */ r_esp -= 4; W32(r_esp, 0x61554au); f_00615564();
    /* 0061554a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061554e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615550: jne 0x615556 */ if (!fZ) goto L_00615556;
L_00615552:; BB(0x00615552);
    /* 00615552: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00615553: ret 4 */ FN_RET(0x00615540); r_esp += 8; return;
L_00615556:; BB(0x00615556);
    /* 00615556: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00615557: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61555cu); f_005c2f74();
    /* 0061555c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061555d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061555e: ret 4 */ FN_RET(0x00615540); r_esp += 8; return;
}

void f_00615564(void) /* sub_615564 */
{
    FN_ENTER(0x00615564);
    /* 00615564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615565: mov ebp, esp */ r_ebp = r_esp;
    /* 00615567: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615569: push 0x8e1318 */ { u32 v = 0x8e1318u; r_esp -= 4; W32(r_esp, v); }
    /* 0061556e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615575: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061557c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061557f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615582: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00615585: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00615588: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061558b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061558e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00615595: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615598: mov dword ptr [eax], 0xb255c0 */ W32((u32)(r_eax), 0xb255c0u);
    /* 0061559e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061559f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6155a4u); f_007b4e84();
    /* 006155a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006155a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006155a8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6155adu); f_007b9c8c();
    /* 006155ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006155b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006155b7: call 0x628d94 */ r_esp -= 4; W32(r_esp, 0x6155bcu); f_00628d94();
    /* 006155bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006155bf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006155c6: mov esp, ebp */ r_esp = r_ebp;
    /* 006155c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006155c9: ret  */ FN_RET(0x00615564); r_esp += 4; return;
}

void f_006155cc(void) /* sub_6155CC */
{
    FN_ENTER(0x006155cc);
    /* 006155cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006155cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006155ce: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006155d0: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006155d6: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006155dc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006155de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006155e0: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6155e3u); call_ind(t); }
    /* 006155e3: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 006155e9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006155ec: je 0x6155f1 */ if (fZ) goto L_006155f1;
L_006155ee:; BB(0x006155ee);
    /* 006155ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006155ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006155f0: ret  */ FN_RET(0x006155cc); r_esp += 4; return;
L_006155f1:; BB(0x006155f1);
    /* 006155f1: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006155f4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6155f9u); f_00829cc8();
    /* 006155f9: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 006155ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615602: je 0x615696 */ if (fZ) goto L_00615696;
L_00615608:; BB(0x00615608);
    /* 00615608: mov eax, dword ptr [0xa8eab0] */ r_eax = R32((u32)(0xa8eab0u));
    /* 0061560d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061560f: je 0x615614 */ if (fZ) goto L_00615614;
L_00615611:; BB(0x00615611);
    /* 00615611: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00615614:; BB(0x00615614);
    /* 00615614: mov esi, dword ptr [ebx + 0x34] */ r_esi = R32((u32)(r_ebx+0x34u));
    /* 00615617: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x61561cu); f_00835068();
    /* 0061561c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x615621u); f_0082d7b0();
    /* 00615621: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00615624: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x615629u); f_0082d838();
    /* 00615629: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0061562c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061562e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x615633u); f_0082d8bc();
    /* 00615633: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00615636: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61563bu); f_0082d838();
    /* 0061563b: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0061563e: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x615643u); f_00835120();
    /* 00615643: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00615646: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61564bu); f_0082d7b0();
    /* 0061564b: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0061564e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x615653u); f_0082d838();
    /* 00615653: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00615659: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061565b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x615660u); f_0082d8bc();
    /* 00615660: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00615663: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x615668u); f_00835120();
    /* 00615668: mov ebx, dword ptr [esi + 0x2c] */ r_ebx = R32((u32)(r_esi+0x2cu));
    /* 0061566b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x615670u); f_0082dbac();
    /* 00615670: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00615673: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x615678u); f_0082d838();
    /* 00615678: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061567a: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x61567fu); f_00835090();
    /* 0061567f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x615684u); f_0082dab0();
    /* 00615684: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x615689u); f_0082da80();
    /* 00615689: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61568eu); f_0082da80();
    /* 0061568e: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x615693u); f_00835078();
    /* 00615693: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00615694: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00615695: ret  */ FN_RET(0x006155cc); r_esp += 4; return;
L_00615696:; BB(0x00615696);
    /* 00615696: mov eax, dword ptr [0xa8eab0] */ r_eax = R32((u32)(0xa8eab0u));
    /* 0061569b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061569d: je 0x615614 */ if (fZ) goto L_00615614;
L_006156a3:; BB(0x006156a3);
    /* 006156a3: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006156a6: jmp 0x615614 */ goto L_00615614;
}

void f_006156ac(void) /* sub_6156AC */
{
    FN_ENTER(0x006156ac);
    /* 006156ac: mov eax, dword ptr [ecx + 0xe4] */ r_eax = R32((u32)(r_ecx+0xe4u));
    /* 006156b2: add eax, 0x222 */ {  u32 a = r_eax; u32 b = 0x222u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006156b7: mov dword ptr [ecx + 0xe4], eax */ W32((u32)(r_ecx+0xe4u), r_eax);
    /* 006156bd: ret  */ FN_RET(0x006156ac); r_esp += 4; return;
}

void f_006156c0(void) /* sub_6156C0 */
{
    FN_ENTER(0x006156c0);
    /* 006156c0: mov ecx, dword ptr [0xa8eab4] */ r_ecx = R32((u32)(0xa8eab4u));
    /* 006156c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006156c8: je 0x6156dd */ if (fZ) goto L_006156dd;
L_006156ca:; BB(0x006156ca);
    /* 006156ca: je 0x6156d3 */ if (fZ) goto L_006156d3;
L_006156cc:; BB(0x006156cc);
    /* 006156cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006156ce: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6156d3u); f_004066a8();
L_006156d3:; BB(0x006156d3);
    /* 006156d3: mov dword ptr [0xa8eab4], 0 */ W32((u32)(0xa8eab4u), 0x0u);
L_006156dd:; BB(0x006156dd);
    /* 006156dd: ret  */ FN_RET(0x006156c0); r_esp += 4; return;
}

void f_006156e0(void)
{
    FN_ENTER(0x006156e0);
    /* 006156e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006156e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006156e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006156e5: push 0x8e1340 */ { u32 v = 0x8e1340u; r_esp -= 4; W32(r_esp, v); }
    /* 006156ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006156f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006156f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006156f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006156fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006156fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00615701: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00615704: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00615707: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061570c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00615713: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x615718u); f_005caba4();
    /* 00615718: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615719: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061571c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061571e: je 0x615757 */ if (fZ) goto L_00615757;
L_00615720:; BB(0x00615720);
    /* 00615720: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00615727: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061572e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615731: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615737: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061573a: call 0x61575c */ r_esp -= 4; W32(r_esp, 0x61573fu); f_0061575c();
    /* 0061573f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615742: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00615749:; BB(0x00615749);
    /* 00615749: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061574c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615753: mov esp, ebp */ r_esp = r_ebp;
    /* 00615755: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615756: ret  */ FN_RET(0x006156e0); r_esp += 4; return;
L_00615757:; BB(0x00615757);
    /* 00615757: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615759: jmp 0x615749 */ goto L_00615749;
}

void f_0061575c(void) /* sub_61575C */
{
    FN_ENTER(0x0061575c);
    /* 0061575c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061575d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061575f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615761: push 0x8e135c */ { u32 v = 0x8e135cu; r_esp -= 4; W32(r_esp, v); }
    /* 00615766: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061576c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061576d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615774: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615777: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061577a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061577d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00615780: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00615783: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00615786: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615789: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061578c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061578f: call 0x628ef4 */ r_esp -= 4; W32(r_esp, 0x615794u); f_00628ef4();
    /* 00615794: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061579b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061579e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006157a1: mov dword ptr [ecx], 0xb255c0 */ W32((u32)(r_ecx), 0xb255c0u);
    /* 006157a7: mov eax, dword ptr [0x9c4a10] */ r_eax = R32((u32)(0x9c4a10u));
    /* 006157ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006157ad: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006157b0: call dword ptr [0xb255d4] */ { u32 t = R32((u32)(0xb255d4u)); r_esp -= 4; W32(r_esp, 0x6157b6u); call_ind(t); }
    /* 006157b6: mov ecx, dword ptr [0xa8eab4] */ r_ecx = R32((u32)(0xa8eab4u));
    /* 006157bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006157be: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6157c3u); f_005b8610();
    /* 006157c3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006157c6: mov ecx, dword ptr [0xa8eab4] */ r_ecx = R32((u32)(0xa8eab4u));
    /* 006157cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006157ce: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006157d1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6157d6u); f_005b8624();
    /* 006157d6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006157d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006157db: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006157de: push 0x9c4a14 */ { u32 v = 0x9c4a14u; r_esp -= 4; W32(r_esp, v); }
    /* 006157e3: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6157e8u); f_007b9a88();
    /* 006157e8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006157eb: push 0x1288 */ { u32 v = 0x1288u; r_esp -= 4; W32(r_esp, v); }
    /* 006157f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006157f2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x6157f7u); f_007b52c4();
    /* 006157f7: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006157fa: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6157ffu); f_007b999c();
    /* 006157ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615800: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615803: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x615808u); f_007b4f54();
    /* 00615808: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061580b: call 0x628de4 */ r_esp -= 4; W32(r_esp, 0x615810u); f_00628de4();
    /* 00615810: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615813: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00615818: mov dword ptr [ecx + 0xc0], 0x43fa0000 */ W32((u32)(r_ecx+0xc0u), 0x43fa0000u);
    /* 00615822: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00615825: mov dword ptr [ecx + 0xc4], 0x42480000 */ W32((u32)(r_ecx+0xc4u), 0x42480000u);
    /* 0061582f: mov dword ptr [ecx + 0xe4], 0 */ W32((u32)(r_ecx+0xe4u), 0x0u);
    /* 00615839: je 0x61584d */ if (fZ) goto L_0061584d;
L_0061583b:; BB(0x0061583b);
    /* 0061583b: mov eax, ecx */ r_eax = r_ecx;
    /* 0061583d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615840: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615847: mov esp, ebp */ r_esp = r_ebp;
    /* 00615849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061584a: ret 8 */ FN_RET(0x0061575c); r_esp += 12; return;
L_0061584d:; BB(0x0061584d);
    /* 0061584d: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x615852u); f_0078b1c4();
    /* 00615852: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615855: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00615858: jne 0x61583b */ if (!fZ) goto L_0061583b;
L_0061585a:; BB(0x0061585a);
    /* 0061585a: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0061585e: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615864: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00615868: jmp 0x61583b */ goto L_0061583b;
}

void f_0061586c(void) /* sub_61586C */
{
    FN_ENTER(0x0061586c);
    /* 0061586c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061586d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061586f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615871: push 0x8e1384 */ { u32 v = 0x8e1384u; r_esp -= 4; W32(r_esp, v); }
    /* 00615876: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061587c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061587d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615884: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615887: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061588a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061588d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00615890: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00615893: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00615898: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061589f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6158a4u); f_008581c5();
    /* 006158a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006158a5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006158a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006158aa: je 0x61591d */ if (fZ) goto L_0061591d;
L_006158ac:; BB(0x006158ac);
    /* 006158ac: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006158b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006158ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006158bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006158bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006158c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006158c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006158c2: push 0x9c4a00 */ { u32 v = 0x9c4a00u; r_esp -= 4; W32(r_esp, v); }
    /* 006158c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006158c9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6158ceu); f_005b7a84();
    /* 006158ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006158d1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006158d8:; BB(0x006158d8);
    /* 006158d8: mov dword ptr [0xa8eab4], ecx */ W32((u32)(0xa8eab4u), r_ecx);
    /* 006158de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006158e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006158e7: je 0x6158f4 */ if (fZ) goto L_006158f4;
L_006158e9:; BB(0x006158e9);
    /* 006158e9: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x6158eeu); f_005b90d0();
    /* 006158ee: mov ecx, dword ptr [0xa8eab4] */ r_ecx = R32((u32)(0xa8eab4u));
L_006158f4:; BB(0x006158f4);
    /* 006158f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006158f6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6158fbu); f_005b8610();
    /* 006158fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006158fd: je 0x61590f */ if (fZ) goto L_0061590f;
L_006158ff:; BB(0x006158ff);
    /* 006158ff: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00615901: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615902: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x615907u); f_0078e9b0();
    /* 00615907: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061590a: mov dword ptr [0xa8eab0], eax */ W32((u32)(0xa8eab0u), r_eax);
L_0061590f:; BB(0x0061590f);
    /* 0061590f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615912: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615919: mov esp, ebp */ r_esp = r_ebp;
    /* 0061591b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061591c: ret  */ FN_RET(0x0061586c); r_esp += 4; return;
L_0061591d:; BB(0x0061591d);
    /* 0061591d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061591f: jmp 0x6158d8 */ goto L_006158d8;
}

void f_00615924(void) /* sub_615924 */
{
    FN_ENTER(0x00615924);
    /* 00615924: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00615925: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00615927: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00615929: call 0x615948 */ r_esp -= 4; W32(r_esp, 0x61592eu); f_00615948();
    /* 0061592e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00615932: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615934: jne 0x61593a */ if (!fZ) goto L_0061593a;
L_00615936:; BB(0x00615936);
    /* 00615936: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00615937: ret 4 */ FN_RET(0x00615924); r_esp += 8; return;
L_0061593a:; BB(0x0061593a);
    /* 0061593a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061593b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x615940u); f_005c2f74();
    /* 00615940: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615941: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00615942: ret 4 */ FN_RET(0x00615924); r_esp += 8; return;
}

void f_00615948(void) /* sub_615948 */
{
    FN_ENTER(0x00615948);
    /* 00615948: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615949: mov ebp, esp */ r_ebp = r_esp;
    /* 0061594b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061594d: push 0x8e13a0 */ { u32 v = 0x8e13a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00615952: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615959: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615960: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615963: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615966: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00615969: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061596c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061596f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00615972: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00615979: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061597c: mov dword ptr [ecx], 0xb256a0 */ W32((u32)(r_ecx), 0xb256a0u);
    /* 00615982: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x615987u); f_007b9c8c();
    /* 00615987: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061598a: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61598fu); f_007b4e84();
    /* 0061598f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615990: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00615997: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061599a: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x61599fu); f_006131f4();
    /* 0061599f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006159a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006159a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006159ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006159ac: ret  */ FN_RET(0x00615948); r_esp += 4; return;
}

void f_006159b0(void) /* sub_6159B0 */
{
    FN_ENTER(0x006159b0);
    /* 006159b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006159b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006159b3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006159b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006159b7: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006159bd: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006159c3: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6159c6u); call_ind(t); }
    /* 006159c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006159c8: je 0x615a27 */ if (fZ) goto L_00615a27;
L_006159ca:; BB(0x006159ca);
    /* 006159ca: mov eax, dword ptr [0xa8eac0] */ r_eax = R32((u32)(0xa8eac0u));
    /* 006159cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006159d1: je 0x6159e7 */ if (fZ) goto L_006159e7;
L_006159d3:; BB(0x006159d3);
    /* 006159d3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006159d5: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x6159dau); f_00835f78();
    /* 006159da: mov ecx, dword ptr [0xa8eac0] */ r_ecx = R32((u32)(0xa8eac0u));
    /* 006159e0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006159e2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006159e4: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6159e7u); call_ind(t); }
L_006159e7:; BB(0x006159e7);
    /* 006159e7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6159ecu); f_0082d7b0();
    /* 006159ec: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006159ef: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6159f4u); f_0082d838();
    /* 006159f4: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006159f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006159f9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6159feu); f_0082d8bc();
    /* 006159fe: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00615a01: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x615a06u); f_00829cc8();
    /* 00615a06: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00615a09: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x615a0eu); f_00831758();
    /* 00615a0e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x615a13u); f_0082da80();
    /* 00615a13: mov ecx, dword ptr [0xa8eac0] */ r_ecx = R32((u32)(0xa8eac0u));
    /* 00615a19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615a1b: je 0x615a27 */ if (fZ) goto L_00615a27;
L_00615a1d:; BB(0x00615a1d);
    /* 00615a1d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00615a1f: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x615a22u); call_ind(t); }
    /* 00615a22: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x615a27u); f_0083603c();
L_00615a27:; BB(0x00615a27);
    /* 00615a27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00615a28: ret  */ FN_RET(0x006159b0); r_esp += 4; return;
}

void f_00615a2c(void) /* sub_615A2C */
{
    FN_ENTER(0x00615a2c);
    /* 00615a2c: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00615a31: cmp eax, dword ptr [0xa8eacc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8eaccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00615a37: je 0x615a51 */ if (fZ) goto L_00615a51;
L_00615a39:; BB(0x00615a39);
    /* 00615a39: mov ecx, dword ptr [0xa8eac0] */ r_ecx = R32((u32)(0xa8eac0u));
    /* 00615a3f: mov dword ptr [0xa8eacc], eax */ W32((u32)(0xa8eaccu), r_eax);
    /* 00615a44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615a46: je 0x615a51 */ if (fZ) goto L_00615a51;
L_00615a48:; BB(0x00615a48);
    /* 00615a48: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00615a4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00615a4c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00615a4e: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x615a51u); call_ind(t); }
L_00615a51:; BB(0x00615a51);
    /* 00615a51: ret  */ FN_RET(0x00615a2c); r_esp += 4; return;
}

void f_00615a54(void) /* sub_615A54 */
{
    FN_ENTER(0x00615a54);
    /* 00615a54: mov ecx, dword ptr [0xa8eac0] */ r_ecx = R32((u32)(0xa8eac0u));
    /* 00615a5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615a5c: je 0x615a70 */ if (fZ) goto L_00615a70;
L_00615a5e:; BB(0x00615a5e);
    /* 00615a5e: je 0x615a66 */ if (fZ) goto L_00615a66;
L_00615a60:; BB(0x00615a60);
    /* 00615a60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00615a62: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00615a64: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x615a66u); call_ind(t); }
L_00615a66:; BB(0x00615a66);
    /* 00615a66: mov dword ptr [0xa8eac0], 0 */ W32((u32)(0xa8eac0u), 0x0u);
L_00615a70:; BB(0x00615a70);
    /* 00615a70: mov ecx, dword ptr [0xa8ead0] */ r_ecx = R32((u32)(0xa8ead0u));
    /* 00615a76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00615a78: mov dword ptr [0xa8eacc], eax */ W32((u32)(0xa8eaccu), r_eax);
    /* 00615a7d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615a7f: mov dword ptr [0xa8eac8], eax */ W32((u32)(0xa8eac8u), r_eax);
    /* 00615a84: je 0x615a99 */ if (fZ) goto L_00615a99;
L_00615a86:; BB(0x00615a86);
    /* 00615a86: je 0x615a8f */ if (fZ) goto L_00615a8f;
L_00615a88:; BB(0x00615a88);
    /* 00615a88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00615a8a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x615a8fu); f_004066a8();
L_00615a8f:; BB(0x00615a8f);
    /* 00615a8f: mov dword ptr [0xa8ead0], 0 */ W32((u32)(0xa8ead0u), 0x0u);
L_00615a99:; BB(0x00615a99);
    /* 00615a99: ret  */ FN_RET(0x00615a54); r_esp += 4; return;
}

void f_00615a9c(void)
{
    FN_ENTER(0x00615a9c);
    /* 00615a9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615a9d: mov ebp, esp */ r_ebp = r_esp;
    /* 00615a9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615aa1: push 0x8e13c8 */ { u32 v = 0x8e13c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00615aa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615aad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615ab4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615ab7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615aba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00615abd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00615ac0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00615ac3: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00615ac8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00615acf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x615ad4u); f_005caba4();
    /* 00615ad4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615ad5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00615ad8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615ada: je 0x615b0d */ if (fZ) goto L_00615b0d;
L_00615adc:; BB(0x00615adc);
    /* 00615adc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00615ae3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00615aea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615aed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615af0: call 0x615b14 */ r_esp -= 4; W32(r_esp, 0x615af5u); f_00615b14();
    /* 00615af5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615af8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00615aff:; BB(0x00615aff);
    /* 00615aff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615b02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615b09: mov esp, ebp */ r_esp = r_ebp;
    /* 00615b0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615b0c: ret  */ FN_RET(0x00615a9c); r_esp += 4; return;
L_00615b0d:; BB(0x00615b0d);
    /* 00615b0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615b0f: jmp 0x615aff */ goto L_00615aff;
}

void f_00615b14(void) /* sub_615B14 */
{
    FN_ENTER(0x00615b14);
    /* 00615b14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615b15: mov ebp, esp */ r_ebp = r_esp;
    /* 00615b17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615b19: push 0x8e13e4 */ { u32 v = 0x8e13e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00615b1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615b25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615b2c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615b2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615b32: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00615b35: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00615b38: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00615b3b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00615b3e: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615b44: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00615b47: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00615b4a: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x615b4fu); f_006132e4();
    /* 00615b4f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00615b56: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615b59: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00615b5c: mov dword ptr [ecx], 0xb256a0 */ W32((u32)(r_ecx), 0xb256a0u);
    /* 00615b62: mov eax, dword ptr [0x9c4a58] */ r_eax = R32((u32)(0x9c4a58u));
    /* 00615b67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00615b68: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00615b6b: call dword ptr [0xb256b4] */ { u32 t = R32((u32)(0xb256b4u)); r_esp -= 4; W32(r_esp, 0x615b71u); call_ind(t); }
    /* 00615b71: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615b74: mov ebx, dword ptr [0xa8ead0] */ r_ebx = R32((u32)(0xa8ead0u));
    /* 00615b7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00615b7c: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00615b82: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00615b85: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00615b88: push 0x9c4a5c */ { u32 v = 0x9c4a5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00615b8d: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00615b92: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00615b95: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 00615b9b: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00615b9e: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00615ba1: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00615ba4: mov dword ptr [ecx + 0xc0], 0x43fa0000 */ W32((u32)(r_ecx+0xc0u), 0x43fa0000u);
    /* 00615bae: mov dword ptr [ecx + 0xc4], 0x42480000 */ W32((u32)(r_ecx+0xc4u), 0x42480000u);
    /* 00615bb8: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x615bbdu); f_007b9a88();
    /* 00615bbd: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00615bc0: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x615bc5u); f_007b999c();
    /* 00615bc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615bc6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615bc9: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x615bceu); f_007b4f54();
    /* 00615bce: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615bd1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615bd4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00615bd7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00615bda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615bdd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615be4: mov esp, ebp */ r_esp = r_ebp;
    /* 00615be6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615be7: ret 4 */ FN_RET(0x00615b14); r_esp += 8; return;
}

void f_00615bec(void) /* sub_615BEC */
{
    FN_ENTER(0x00615bec);
    /* 00615bec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615bed: mov ebp, esp */ r_ebp = r_esp;
    /* 00615bef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615bf1: push 0x8e140c */ { u32 v = 0x8e140cu; r_esp -= 4; W32(r_esp, v); }
    /* 00615bf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615bfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615c04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615c07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615c0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00615c0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00615c10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00615c13: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00615c18: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00615c1f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x615c24u); f_008581c5();
    /* 00615c24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615c25: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00615c28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615c2a: je 0x615cc7 */ if (fZ) goto L_00615cc7;
L_00615c30:; BB(0x00615c30);
    /* 00615c30: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00615c37: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00615c3e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615c41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00615c43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615c44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615c45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615c46: push 0x9c4a48 */ { u32 v = 0x9c4a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00615c4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00615c4d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x615c52u); f_005b7a84();
    /* 00615c52: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615c55: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00615c5c:; BB(0x00615c5c);
    /* 00615c5c: mov dword ptr [0xa8ead0], eax */ W32((u32)(0xa8ead0u), r_eax);
    /* 00615c61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00615c68: mov eax, dword ptr [0xa8ead0] */ r_eax = R32((u32)(0xa8ead0u));
    /* 00615c6d: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00615c73: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00615c76: mov ebx, dword ptr [ecx + 0x2c] */ r_ebx = R32((u32)(r_ecx+0x2cu));
    /* 00615c79: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 00615c7c: mov edi, dword ptr [esi + 0x2c] */ r_edi = R32((u32)(r_esi+0x2cu));
    /* 00615c7f: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00615c82: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00615c85: mov dword ptr [0xa8eac0], 0 */ W32((u32)(0xa8eac0u), 0x0u);
    /* 00615c8f: mov dword ptr [0xa8eac4], eax */ W32((u32)(0xa8eac4u), r_eax);
    /* 00615c94: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00615c96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00615c97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00615c99: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x615c9eu); f_0066f3d4();
    /* 00615c9e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00615ca1: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00615ca4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00615ca7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00615caa: mov dword ptr [0xa8eac0], eax */ W32((u32)(0xa8eac0u), r_eax);
    /* 00615caf: mov dword ptr [0xa8eacc], 0 */ W32((u32)(0xa8eaccu), 0x0u);
    /* 00615cb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615cbc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615cc3: mov esp, ebp */ r_esp = r_ebp;
    /* 00615cc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615cc6: ret  */ FN_RET(0x00615bec); r_esp += 4; return;
L_00615cc7:; BB(0x00615cc7);
    /* 00615cc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00615cc9: jmp 0x615c5c */ goto L_00615c5c;
}

void f_00615ccc(void) /* sub_615CCC */
{
    FN_ENTER(0x00615ccc);
    /* 00615ccc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00615ccd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00615ccf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00615cd1: call 0x615cf0 */ r_esp -= 4; W32(r_esp, 0x615cd6u); f_00615cf0();
    /* 00615cd6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00615cda: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615cdc: jne 0x615ce2 */ if (!fZ) goto L_00615ce2;
L_00615cde:; BB(0x00615cde);
    /* 00615cde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00615cdf: ret 4 */ FN_RET(0x00615ccc); r_esp += 8; return;
L_00615ce2:; BB(0x00615ce2);
    /* 00615ce2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00615ce3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x615ce8u); f_005c2f74();
    /* 00615ce8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615ce9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00615cea: ret 4 */ FN_RET(0x00615ccc); r_esp += 8; return;
}

void f_00615cf0(void) /* sub_615CF0 */
{
    FN_ENTER(0x00615cf0);
    /* 00615cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00615cf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615cf5: push 0x8e1428 */ { u32 v = 0x8e1428u; r_esp -= 4; W32(r_esp, v); }
    /* 00615cfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615d00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615d01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615d08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615d0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615d0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00615d11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00615d14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00615d17: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00615d1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615d1d: mov dword ptr [ecx], 0xb257f8 */ W32((u32)(r_ecx), 0xb257f8u);
    /* 00615d23: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00615d2a: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x615d2fu); f_007ba1f0();
    /* 00615d2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615d32: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615d39: mov esp, ebp */ r_esp = r_ebp;
    /* 00615d3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615d3c: ret  */ FN_RET(0x00615cf0); r_esp += 4; return;
}

void f_00615d40(void) /* sub_615D40 */
{
    FN_ENTER(0x00615d40);
    /* 00615d40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00615d41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00615d43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00615d45: call 0x615d64 */ r_esp -= 4; W32(r_esp, 0x615d4au); f_00615d64();
    /* 00615d4a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00615d4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615d50: jne 0x615d56 */ if (!fZ) goto L_00615d56;
L_00615d52:; BB(0x00615d52);
    /* 00615d52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00615d53: ret 4 */ FN_RET(0x00615d40); r_esp += 8; return;
L_00615d56:; BB(0x00615d56);
    /* 00615d56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00615d57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x615d5cu); f_005c2f74();
    /* 00615d5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615d5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00615d5e: ret 4 */ FN_RET(0x00615d40); r_esp += 8; return;
}

void f_00615d64(void) /* sub_615D64 */
{
    FN_ENTER(0x00615d64);
    /* 00615d64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615d65: mov ebp, esp */ r_ebp = r_esp;
    /* 00615d67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615d69: push 0x8e1444 */ { u32 v = 0x8e1444u; r_esp -= 4; W32(r_esp, v); }
    /* 00615d6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615d74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615d75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615d7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615d7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615d82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00615d85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00615d88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00615d8b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00615d8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615d91: mov dword ptr [ecx], 0xb25824 */ W32((u32)(r_ecx), 0xb25824u);
    /* 00615d97: mov dword ptr [0xa8eaec], 0 */ W32((u32)(0xa8eaecu), 0x0u);
    /* 00615da1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00615da8: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x615dadu); f_008171e8();
    /* 00615dad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615db0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615db7: mov esp, ebp */ r_esp = r_ebp;
    /* 00615db9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615dba: ret  */ FN_RET(0x00615d64); r_esp += 4; return;
}

void f_00615dbc(void) /* sub_615DBC */
{
    FN_ENTER(0x00615dbc);
    /* 00615dbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615dbd: mov ebp, esp */ r_ebp = r_esp;
    /* 00615dbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615dc1: push 0x8e1460 */ { u32 v = 0x8e1460u; r_esp -= 4; W32(r_esp, v); }
    /* 00615dc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615dcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615dcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615dd4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615dd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615dda: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00615ddd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00615de0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00615de3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00615de6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00615de9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00615df0: mov eax, ecx */ r_eax = r_ecx;
    /* 00615df2: mov dword ptr [eax], 0xb25834 */ W32((u32)(r_eax), 0xb25834u);
    /* 00615df8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00615dfa:; BB(0x00615dfa);
    /* 00615dfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00615dfd: push dword ptr [eax + ebx*4 + 0x2c] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00615e01: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x615e06u); f_00857e98();
    /* 00615e06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615e07: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00615e0a: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00615e0d: jl 0x615dfa */ if ((fS!=fO)) goto L_00615dfa;
L_00615e0f:; BB(0x00615e0f);
    /* 00615e0f: mov dword ptr [0xa8eadc], 0 */ W32((u32)(0xa8eadcu), 0x0u);
    /* 00615e19: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00615e20: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00615e23: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x615e28u); f_008171e8();
    /* 00615e28: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00615e2b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615e2d: jne 0x615e48 */ if (!fZ) goto L_00615e48;
L_00615e2f:; BB(0x00615e2f);
    /* 00615e2f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615e32: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00615e35: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00615e38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615e3b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615e42: mov esp, ebp */ r_esp = r_ebp;
    /* 00615e44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615e45: ret 4 */ FN_RET(0x00615dbc); r_esp += 8; return;
L_00615e48:; BB(0x00615e48);
    /* 00615e48: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00615e4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615e4c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x615e51u); f_005c2f74();
    /* 00615e51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615e52: jmp 0x615e2f */ goto L_00615e2f;
}

void f_00615e54(void) /* sub_615E54 */
{
    FN_ENTER(0x00615e54);
    /* 00615e54: mov eax, dword ptr [0xa8eaf0] */ r_eax = R32((u32)(0xa8eaf0u));
    /* 00615e59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615e5b: je 0x615e6e */ if (fZ) goto L_00615e6e;
L_00615e5d:; BB(0x00615e5d);
    /* 00615e5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615e5e: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x615e63u); f_005b9bac();
    /* 00615e63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615e64: mov dword ptr [0xa8eaf0], 0 */ W32((u32)(0xa8eaf0u), 0x0u);
L_00615e6e:; BB(0x00615e6e);
    /* 00615e6e: ret  */ FN_RET(0x00615e54); r_esp += 4; return;
}

void f_00615e70(void) /* sub_615E70 */
{
    FN_ENTER(0x00615e70);
    /* 00615e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00615e73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615e75: push 0x8e14a2 */ { u32 v = 0x8e14a2u; r_esp -= 4; W32(r_esp, v); }
    /* 00615e7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615e81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615e88: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615e8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615e8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00615e91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00615e94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00615e97: mov eax, dword ptr [0xa8eaec] */ r_eax = R32((u32)(0xa8eaecu));
    /* 00615e9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615e9e: je 0x615efc */ if (fZ) goto L_00615efc;
L_00615ea0:; BB(0x00615ea0);
    /* 00615ea0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615ea2: je 0x615f46 */ if (fZ) goto L_00615f46;
L_00615ea8:; BB(0x00615ea8);
    /* 00615ea8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00615eaf: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 00615eb4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x615eb9u); f_005caba4();
    /* 00615eb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615eba: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00615ebd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615ebf: je 0x615ef8 */ if (fZ) goto L_00615ef8;
L_00615ec1:; BB(0x00615ec1);
    /* 00615ec1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00615ec8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00615ecf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615ed2: push dword ptr [0xa8eaec] */ { u32 v = R32((u32)(0xa8eaecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00615ed8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615edb: call 0x615f84 */ r_esp -= 4; W32(r_esp, 0x615ee0u); f_00615f84();
    /* 00615ee0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00615ee3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00615eea:; BB(0x00615eea);
    /* 00615eea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615eed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615ef4: mov esp, ebp */ r_esp = r_ebp;
    /* 00615ef6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615ef7: ret  */ FN_RET(0x00615e70); r_esp += 4; return;
L_00615ef8:; BB(0x00615ef8);
    /* 00615ef8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615efa: jmp 0x615eea */ goto L_00615eea;
L_00615efc:; BB(0x00615efc);
    /* 00615efc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00615f03: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00615f05: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x615f0au); f_005caba4();
    /* 00615f0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615f0b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00615f0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615f10: je 0x615f35 */ if (fZ) goto L_00615f35;
L_00615f12:; BB(0x00615f12);
    /* 00615f12: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00615f19: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00615f20: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615f26: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00615f29: call 0x615f58 */ r_esp -= 4; W32(r_esp, 0x615f2eu); f_00615f58();
    /* 00615f2e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00615f35:; BB(0x00615f35);
    /* 00615f35: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00615f3c: mov eax, dword ptr [0xa8eaec] */ r_eax = R32((u32)(0xa8eaecu));
    /* 00615f41: jmp 0x615ea0 */ goto L_00615ea0;
L_00615f46:; BB(0x00615f46);
    /* 00615f46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615f48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615f4b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00615f52: mov esp, ebp */ r_esp = r_ebp;
    /* 00615f54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615f55: ret  */ FN_RET(0x00615e70); r_esp += 4; return;
}

void f_00615f58(void) /* sub_615F58 */
{
    FN_ENTER(0x00615f58);
    /* 00615f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00615f59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00615f5b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615f5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00615f61: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x615f66u); f_008193cc();
    /* 00615f66: mov dword ptr [ebx], 0xb25824 */ W32((u32)(r_ebx), 0xb25824u);
    /* 00615f6c: mov edx, dword ptr [0x9c4a8c] */ r_edx = R32((u32)(0x9c4a8cu));
    /* 00615f72: mov dword ptr [0xa8eaec], ebx */ W32((u32)(0xa8eaecu), r_ebx);
    /* 00615f78: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00615f7b: mov eax, ebx */ r_eax = r_ebx;
    /* 00615f7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00615f7e: ret 4 */ FN_RET(0x00615f58); r_esp += 8; return;
}

void f_00615f74(void)
{
    FN_ENTER(0x00615f74);
    /* 00615f74: in al, dx */ UNSUP(0x00615f74, "in al, dx");
    /* 00615f75: ljmp 0x8b04:0x538900a8 */ UNSUP(0x00615f75, "ljmp 0x8b04:0x538900a8");
    /* 00615f7c: ret  */ FN_RET(0x00615f74); r_esp += 4; return;
}

void f_00615f84(void) /* sub_615F84 */
{
    FN_ENTER(0x00615f84);
    /* 00615f84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615f85: mov ebp, esp */ r_ebp = r_esp;
    /* 00615f87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615f89: push 0x8e14bc */ { u32 v = 0x8e14bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00615f8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615f95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00615f9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615f9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00615fa2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00615fa5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00615fa8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00615fab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00615fae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615fb1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00615fb4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00615fb7: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x615fbcu); f_007ba278();
    /* 00615fbc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00615fc3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615fc6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00615fc9: mov dword ptr [ecx], 0xb257f8 */ W32((u32)(r_ecx), 0xb257f8u);
    /* 00615fcf: mov eax, dword ptr [0x9c4a88] */ r_eax = R32((u32)(0x9c4a88u));
    /* 00615fd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00615fd5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00615fd8: call dword ptr [0xb2580c] */ { u32 t = R32((u32)(0xb2580cu)); r_esp -= 4; W32(r_esp, 0x615fdeu); call_ind(t); }
    /* 00615fde: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615fe1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00615fe3: mov dword ptr [ecx + 0x124], eax */ W32((u32)(r_ecx+0x124u), r_eax);
    /* 00615fe9: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 00615fef: call 0x6162f4 */ r_esp -= 4; W32(r_esp, 0x615ff4u); f_006162f4();
    /* 00615ff4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00615ff7: mov ebx, dword ptr [eax + 0x12c] */ r_ebx = R32((u32)(r_eax+0x12cu));
    /* 00615ffd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615fff: jle 0x6162e0 */ if ((fZ||fS!=fO)) goto L_006162e0;
L_00616005:; BB(0x00616005);
    /* 00616005: mov edx, dword ptr [0xa8eaf0] */ r_edx = R32((u32)(0xa8eaf0u));
    /* 0061600b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0061600e: mov edx, dword ptr [ecx + ebx*4 - 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0xfffffffcu));
    /* 00616012: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00616014: je 0x6162e0 */ if (fZ) goto L_006162e0;
L_0061601a:; BB(0x0061601a);
    /* 0061601a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0061601c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061601d: add eax, 0xa4 */ {  u32 a = r_eax; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616023: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x616028u); f_00857dec();
    /* 00616028: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061602b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061602e: movzx ecx, word ptr [eax + 0xa4] */ r_ecx = (u32)R16((u32)(r_eax+0xa4u));
    /* 00616035: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616037: mov word ptr [eax + 0xe2], dx */ W16((u32)(r_eax+0xe2u), (u16)r_edx);
    /* 0061603e: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616041: jne 0x61604c */ if (!fZ) goto L_0061604c;
L_00616043:; BB(0x00616043);
    /* 00616043: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616045: mov word ptr [eax + 0xa4], dx */ W16((u32)(r_eax+0xa4u), (u16)r_edx);
L_0061604c:; BB(0x0061604c);
    /* 0061604c: movzx edx, word ptr [eax + 0xa6] */ r_edx = (u32)R16((u32)(r_eax+0xa6u));
    /* 00616053: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616056: jne 0x616061 */ if (!fZ) goto L_00616061;
L_00616058:; BB(0x00616058);
    /* 00616058: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061605a: mov word ptr [eax + 0xa6], dx */ W16((u32)(r_eax+0xa6u), (u16)r_edx);
L_00616061:; BB(0x00616061);
    /* 00616061: movzx edx, word ptr [eax + 0xa8] */ r_edx = (u32)R16((u32)(r_eax+0xa8u));
    /* 00616068: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061606b: jne 0x616076 */ if (!fZ) goto L_00616076;
L_0061606d:; BB(0x0061606d);
    /* 0061606d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061606f: mov word ptr [eax + 0xa8], dx */ W16((u32)(r_eax+0xa8u), (u16)r_edx);
L_00616076:; BB(0x00616076);
    /* 00616076: movzx edx, word ptr [eax + 0xaa] */ r_edx = (u32)R16((u32)(r_eax+0xaau));
    /* 0061607d: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616080: jne 0x61608b */ if (!fZ) goto L_0061608b;
L_00616082:; BB(0x00616082);
    /* 00616082: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616084: mov word ptr [eax + 0xaa], dx */ W16((u32)(r_eax+0xaau), (u16)r_edx);
L_0061608b:; BB(0x0061608b);
    /* 0061608b: movzx edx, word ptr [eax + 0xac] */ r_edx = (u32)R16((u32)(r_eax+0xacu));
    /* 00616092: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616095: jne 0x6160a0 */ if (!fZ) goto L_006160a0;
L_00616097:; BB(0x00616097);
    /* 00616097: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616099: mov word ptr [eax + 0xac], dx */ W16((u32)(r_eax+0xacu), (u16)r_edx);
L_006160a0:; BB(0x006160a0);
    /* 006160a0: movzx edx, word ptr [eax + 0xae] */ r_edx = (u32)R16((u32)(r_eax+0xaeu));
    /* 006160a7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006160aa: jne 0x6160b5 */ if (!fZ) goto L_006160b5;
L_006160ac:; BB(0x006160ac);
    /* 006160ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006160ae: mov word ptr [eax + 0xae], dx */ W16((u32)(r_eax+0xaeu), (u16)r_edx);
L_006160b5:; BB(0x006160b5);
    /* 006160b5: movzx edx, word ptr [eax + 0xb0] */ r_edx = (u32)R16((u32)(r_eax+0xb0u));
    /* 006160bc: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006160bf: jne 0x6160ca */ if (!fZ) goto L_006160ca;
L_006160c1:; BB(0x006160c1);
    /* 006160c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006160c3: mov word ptr [eax + 0xb0], dx */ W16((u32)(r_eax+0xb0u), (u16)r_edx);
L_006160ca:; BB(0x006160ca);
    /* 006160ca: movzx edx, word ptr [eax + 0xb2] */ r_edx = (u32)R16((u32)(r_eax+0xb2u));
    /* 006160d1: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006160d4: jne 0x6160df */ if (!fZ) goto L_006160df;
L_006160d6:; BB(0x006160d6);
    /* 006160d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006160d8: mov word ptr [eax + 0xb2], dx */ W16((u32)(r_eax+0xb2u), (u16)r_edx);
L_006160df:; BB(0x006160df);
    /* 006160df: movzx edx, word ptr [eax + 0xb4] */ r_edx = (u32)R16((u32)(r_eax+0xb4u));
    /* 006160e6: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006160e9: jne 0x6160f4 */ if (!fZ) goto L_006160f4;
L_006160eb:; BB(0x006160eb);
    /* 006160eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006160ed: mov word ptr [eax + 0xb4], dx */ W16((u32)(r_eax+0xb4u), (u16)r_edx);
L_006160f4:; BB(0x006160f4);
    /* 006160f4: movzx edx, word ptr [eax + 0xb6] */ r_edx = (u32)R16((u32)(r_eax+0xb6u));
    /* 006160fb: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006160fe: jne 0x616109 */ if (!fZ) goto L_00616109;
L_00616100:; BB(0x00616100);
    /* 00616100: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616102: mov word ptr [eax + 0xb6], dx */ W16((u32)(r_eax+0xb6u), (u16)r_edx);
L_00616109:; BB(0x00616109);
    /* 00616109: movzx edx, word ptr [eax + 0xb8] */ r_edx = (u32)R16((u32)(r_eax+0xb8u));
    /* 00616110: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616113: jne 0x61611e */ if (!fZ) goto L_0061611e;
L_00616115:; BB(0x00616115);
    /* 00616115: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616117: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
L_0061611e:; BB(0x0061611e);
    /* 0061611e: movzx edx, word ptr [eax + 0xba] */ r_edx = (u32)R16((u32)(r_eax+0xbau));
    /* 00616125: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616128: jne 0x616133 */ if (!fZ) goto L_00616133;
L_0061612a:; BB(0x0061612a);
    /* 0061612a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061612c: mov word ptr [eax + 0xba], dx */ W16((u32)(r_eax+0xbau), (u16)r_edx);
L_00616133:; BB(0x00616133);
    /* 00616133: movzx edx, word ptr [eax + 0xbc] */ r_edx = (u32)R16((u32)(r_eax+0xbcu));
    /* 0061613a: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061613d: jne 0x616148 */ if (!fZ) goto L_00616148;
L_0061613f:; BB(0x0061613f);
    /* 0061613f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616141: mov word ptr [eax + 0xbc], dx */ W16((u32)(r_eax+0xbcu), (u16)r_edx);
L_00616148:; BB(0x00616148);
    /* 00616148: movzx edx, word ptr [eax + 0xbe] */ r_edx = (u32)R16((u32)(r_eax+0xbeu));
    /* 0061614f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616152: jne 0x61615d */ if (!fZ) goto L_0061615d;
L_00616154:; BB(0x00616154);
    /* 00616154: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616156: mov word ptr [eax + 0xbe], dx */ W16((u32)(r_eax+0xbeu), (u16)r_edx);
L_0061615d:; BB(0x0061615d);
    /* 0061615d: movzx edx, word ptr [eax + 0xc0] */ r_edx = (u32)R16((u32)(r_eax+0xc0u));
    /* 00616164: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616167: jne 0x616172 */ if (!fZ) goto L_00616172;
L_00616169:; BB(0x00616169);
    /* 00616169: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061616b: mov word ptr [eax + 0xc0], dx */ W16((u32)(r_eax+0xc0u), (u16)r_edx);
L_00616172:; BB(0x00616172);
    /* 00616172: movzx edx, word ptr [eax + 0xc2] */ r_edx = (u32)R16((u32)(r_eax+0xc2u));
    /* 00616179: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061617c: jne 0x616187 */ if (!fZ) goto L_00616187;
L_0061617e:; BB(0x0061617e);
    /* 0061617e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616180: mov word ptr [eax + 0xc2], dx */ W16((u32)(r_eax+0xc2u), (u16)r_edx);
L_00616187:; BB(0x00616187);
    /* 00616187: movzx edx, word ptr [eax + 0xc4] */ r_edx = (u32)R16((u32)(r_eax+0xc4u));
    /* 0061618e: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616191: jne 0x61619c */ if (!fZ) goto L_0061619c;
L_00616193:; BB(0x00616193);
    /* 00616193: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616195: mov word ptr [eax + 0xc4], dx */ W16((u32)(r_eax+0xc4u), (u16)r_edx);
L_0061619c:; BB(0x0061619c);
    /* 0061619c: movzx edx, word ptr [eax + 0xc6] */ r_edx = (u32)R16((u32)(r_eax+0xc6u));
    /* 006161a3: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006161a6: jne 0x6161b1 */ if (!fZ) goto L_006161b1;
L_006161a8:; BB(0x006161a8);
    /* 006161a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006161aa: mov word ptr [eax + 0xc6], dx */ W16((u32)(r_eax+0xc6u), (u16)r_edx);
L_006161b1:; BB(0x006161b1);
    /* 006161b1: movzx edx, word ptr [eax + 0xc8] */ r_edx = (u32)R16((u32)(r_eax+0xc8u));
    /* 006161b8: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006161bb: jne 0x6161c6 */ if (!fZ) goto L_006161c6;
L_006161bd:; BB(0x006161bd);
    /* 006161bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006161bf: mov word ptr [eax + 0xc8], dx */ W16((u32)(r_eax+0xc8u), (u16)r_edx);
L_006161c6:; BB(0x006161c6);
    /* 006161c6: movzx edx, word ptr [eax + 0xca] */ r_edx = (u32)R16((u32)(r_eax+0xcau));
    /* 006161cd: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006161d0: jne 0x6161db */ if (!fZ) goto L_006161db;
L_006161d2:; BB(0x006161d2);
    /* 006161d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006161d4: mov word ptr [eax + 0xca], dx */ W16((u32)(r_eax+0xcau), (u16)r_edx);
L_006161db:; BB(0x006161db);
    /* 006161db: movzx edx, word ptr [eax + 0xcc] */ r_edx = (u32)R16((u32)(r_eax+0xccu));
    /* 006161e2: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006161e5: jne 0x6161f0 */ if (!fZ) goto L_006161f0;
L_006161e7:; BB(0x006161e7);
    /* 006161e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006161e9: mov word ptr [eax + 0xcc], dx */ W16((u32)(r_eax+0xccu), (u16)r_edx);
L_006161f0:; BB(0x006161f0);
    /* 006161f0: movzx edx, word ptr [eax + 0xce] */ r_edx = (u32)R16((u32)(r_eax+0xceu));
    /* 006161f7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006161fa: jne 0x616205 */ if (!fZ) goto L_00616205;
L_006161fc:; BB(0x006161fc);
    /* 006161fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006161fe: mov word ptr [eax + 0xce], dx */ W16((u32)(r_eax+0xceu), (u16)r_edx);
L_00616205:; BB(0x00616205);
    /* 00616205: movzx edx, word ptr [eax + 0xd0] */ r_edx = (u32)R16((u32)(r_eax+0xd0u));
    /* 0061620c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061620f: jne 0x61621a */ if (!fZ) goto L_0061621a;
L_00616211:; BB(0x00616211);
    /* 00616211: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616213: mov word ptr [eax + 0xd0], dx */ W16((u32)(r_eax+0xd0u), (u16)r_edx);
L_0061621a:; BB(0x0061621a);
    /* 0061621a: movzx edx, word ptr [eax + 0xd2] */ r_edx = (u32)R16((u32)(r_eax+0xd2u));
    /* 00616221: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616224: jne 0x61622f */ if (!fZ) goto L_0061622f;
L_00616226:; BB(0x00616226);
    /* 00616226: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616228: mov word ptr [eax + 0xd2], dx */ W16((u32)(r_eax+0xd2u), (u16)r_edx);
L_0061622f:; BB(0x0061622f);
    /* 0061622f: movzx edx, word ptr [eax + 0xd4] */ r_edx = (u32)R16((u32)(r_eax+0xd4u));
    /* 00616236: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616239: jne 0x616244 */ if (!fZ) goto L_00616244;
L_0061623b:; BB(0x0061623b);
    /* 0061623b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061623d: mov word ptr [eax + 0xd4], dx */ W16((u32)(r_eax+0xd4u), (u16)r_edx);
L_00616244:; BB(0x00616244);
    /* 00616244: movzx edx, word ptr [eax + 0xd6] */ r_edx = (u32)R16((u32)(r_eax+0xd6u));
    /* 0061624b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061624e: jne 0x616259 */ if (!fZ) goto L_00616259;
L_00616250:; BB(0x00616250);
    /* 00616250: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616252: mov word ptr [eax + 0xd6], dx */ W16((u32)(r_eax+0xd6u), (u16)r_edx);
L_00616259:; BB(0x00616259);
    /* 00616259: movzx edx, word ptr [eax + 0xd8] */ r_edx = (u32)R16((u32)(r_eax+0xd8u));
    /* 00616260: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616263: jne 0x61626e */ if (!fZ) goto L_0061626e;
L_00616265:; BB(0x00616265);
    /* 00616265: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616267: mov word ptr [eax + 0xd8], dx */ W16((u32)(r_eax+0xd8u), (u16)r_edx);
L_0061626e:; BB(0x0061626e);
    /* 0061626e: movzx edx, word ptr [eax + 0xda] */ r_edx = (u32)R16((u32)(r_eax+0xdau));
    /* 00616275: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616278: jne 0x616283 */ if (!fZ) goto L_00616283;
L_0061627a:; BB(0x0061627a);
    /* 0061627a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061627c: mov word ptr [eax + 0xda], dx */ W16((u32)(r_eax+0xdau), (u16)r_edx);
L_00616283:; BB(0x00616283);
    /* 00616283: movzx edx, word ptr [eax + 0xdc] */ r_edx = (u32)R16((u32)(r_eax+0xdcu));
    /* 0061628a: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061628d: jne 0x616298 */ if (!fZ) goto L_00616298;
L_0061628f:; BB(0x0061628f);
    /* 0061628f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00616291: mov word ptr [eax + 0xdc], dx */ W16((u32)(r_eax+0xdcu), (u16)r_edx);
L_00616298:; BB(0x00616298);
    /* 00616298: movzx edx, word ptr [eax + 0xde] */ r_edx = (u32)R16((u32)(r_eax+0xdeu));
    /* 0061629f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006162a2: jne 0x6162ad */ if (!fZ) goto L_006162ad;
L_006162a4:; BB(0x006162a4);
    /* 006162a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006162a6: mov word ptr [eax + 0xde], dx */ W16((u32)(r_eax+0xdeu), (u16)r_edx);
L_006162ad:; BB(0x006162ad);
    /* 006162ad: movzx edx, word ptr [eax + 0xe0] */ r_edx = (u32)R16((u32)(r_eax+0xe0u));
    /* 006162b4: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006162b7: jne 0x6162c2 */ if (!fZ) goto L_006162c2;
L_006162b9:; BB(0x006162b9);
    /* 006162b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006162bb: mov word ptr [eax + 0xe0], dx */ W16((u32)(r_eax+0xe0u), (u16)r_edx);
L_006162c2:; BB(0x006162c2);
    /* 006162c2: movzx edx, word ptr [eax + 0xe2] */ r_edx = (u32)R16((u32)(r_eax+0xe2u));
    /* 006162c9: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006162cc: jne 0x6162d7 */ if (!fZ) goto L_006162d7;
L_006162ce:; BB(0x006162ce);
    /* 006162ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006162d0: mov word ptr [eax + 0xe2], dx */ W16((u32)(r_eax+0xe2u), (u16)r_edx);
L_006162d7:; BB(0x006162d7);
    /* 006162d7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006162d9: mov word ptr [eax + 0xe4], dx */ W16((u32)(r_eax+0xe4u), (u16)r_edx);
L_006162e0:; BB(0x006162e0);
    /* 006162e0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006162e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006162e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006162ed: mov esp, ebp */ r_esp = r_ebp;
    /* 006162ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006162f0: ret 8 */ FN_RET(0x00615f84); r_esp += 12; return;
}

