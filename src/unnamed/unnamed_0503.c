#include "protos.h"

void f_00503048(void) /* sub_503048 */
{
    FN_ENTER(0x00503048);
    /* 00503048: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00503049: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050304b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050304d: call 0x50306c */ r_esp -= 4; W32(r_esp, 0x503052u); f_0050306c();
    /* 00503052: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00503056: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00503058: jne 0x50305e */ if (!fZ) goto L_0050305e;
L_0050305a:; BB(0x0050305a);
    /* 0050305a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050305b: ret 4 */ FN_RET(0x00503048); r_esp += 8; return;
L_0050305e:; BB(0x0050305e);
    /* 0050305e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050305f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x503064u); f_005c2f74();
    /* 00503064: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00503065: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00503066: ret 4 */ FN_RET(0x00503048); r_esp += 8; return;
}

void f_0050306c(void) /* sub_50306C */
{
    FN_ENTER(0x0050306c);
    /* 0050306c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050306d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050306f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00503071: push 0x8d36e8 */ { u32 v = 0x8d36e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00503076: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050307c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050307d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00503084: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00503087: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050308a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050308d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00503090: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00503093: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00503096: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00503099: mov dword ptr [ecx], 0xafe938 */ W32((u32)(r_ecx), 0xafe938u);
    /* 0050309f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005030a6: call 0x5017b0 */ r_esp -= 4; W32(r_esp, 0x5030abu); f_005017b0();
    /* 005030ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005030ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005030b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005030b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005030b8: ret  */ FN_RET(0x0050306c); r_esp += 4; return;
}

void f_005030bc(void) /* sub_5030BC */
{
    FN_ENTER(0x005030bc);
    /* 005030bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005030bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005030bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005030c1: push 0x8d3710 */ { u32 v = 0x8d3710u; r_esp -= 4; W32(r_esp, v); }
    /* 005030c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005030cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005030cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005030d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005030d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005030da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005030dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005030e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005030e3: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 005030e5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005030ec: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5030f1u); f_005caba4();
    /* 005030f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005030f2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005030f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005030f7: je 0x50311a */ if (fZ) goto L_0050311a;
L_005030f9:; BB(0x005030f9);
    /* 005030f9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00503100: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00503107: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050310a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050310e: call 0x503144 */ r_esp -= 4; W32(r_esp, 0x503113u); f_00503144();
    /* 00503113: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0050311a:; BB(0x0050311a);
    /* 0050311a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00503121: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00503124: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00503126: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00503127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00503128: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00503129: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0050312b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x503130u); f_00814298();
    /* 00503130: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00503133: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00503136: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050313d: mov esp, ebp */ r_esp = r_ebp;
    /* 0050313f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00503140: ret  */ FN_RET(0x005030bc); r_esp += 4; return;
}

void f_00503144(void) /* sub_503144 */
{
    FN_ENTER(0x00503144);
    /* 00503144: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00503145: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00503146: mov edi, ecx */ r_edi = r_ecx;
    /* 00503148: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0050314c: mov ecx, edi */ r_ecx = r_edi;
    /* 0050314e: call 0x501860 */ r_esp -= 4; W32(r_esp, 0x503153u); f_00501860();
    /* 00503153: mov dword ptr [edi], 0xafe938 */ W32((u32)(r_edi), 0xafe938u);
    /* 00503159: mov edx, dword ptr [0x9ba418] */ r_edx = R32((u32)(0x9ba418u));
    /* 0050315f: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00503162: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00503164: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00503167: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0050316a: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0050316d: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 00503170: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 00503173: mov eax, edi */ r_eax = r_edi;
    /* 00503175: mov dword ptr [edi + 0x70], 0 */ W32((u32)(r_edi+0x70u), 0x0u);
    /* 0050317c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050317d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050317e: ret 4 */ FN_RET(0x00503144); r_esp += 8; return;
}

void f_00503184(void) /* sub_503184 */
{
    FN_ENTER(0x00503184);
    /* 00503184: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00503187: mov eax, ecx */ r_eax = r_ecx;
    /* 00503189: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0050318c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050318e: je 0x5031b3 */ if (fZ) goto L_005031b3;
L_00503190:; BB(0x00503190);
    /* 00503190: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503193: jne 0x5031e3 */ if (!fZ) goto L_005031e3;
L_00503195:; BB(0x00503195);
    /* 00503195: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00503198: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050319b: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 0050319e: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005031a1: jle 0x5031e3 */ if ((fZ||fS!=fO)) goto L_005031e3;
L_005031a3:; BB(0x005031a3);
    /* 005031a3: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 005031a7: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005031ad: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 005031b1: jmp 0x5031e3 */ goto L_005031e3;
L_005031b3:; BB(0x005031b3);
    /* 005031b3: mov dword ptr [eax + 0x70], 1 */ W32((u32)(r_eax+0x70u), 0x1u);
    /* 005031ba: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005031be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005031c0: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005031c3: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005031c6: mov ebx, eax */ r_ebx = r_eax;
    /* 005031c8: mov esi, edx */ r_esi = r_edx;
L_005031ca:; BB(0x005031ca);
    /* 005031ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005031cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005031cc: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5031d1u); f_0050b510();
    /* 005031d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005031d4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005031d7: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005031da: jl 0x5031ca */ if ((fS!=fO)) goto L_005031ca;
L_005031dc:; BB(0x005031dc);
    /* 005031dc: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005031e0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005031e3:; BB(0x005031e3);
    /* 005031e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005031e6: ret  */ FN_RET(0x00503184); r_esp += 4; return;
}

void f_005031e8(void) /* sub_5031E8 */
{
    FN_ENTER(0x005031e8);
    /* 005031e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005031e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005031eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005031ed: call 0x50320c */ r_esp -= 4; W32(r_esp, 0x5031f2u); f_0050320c();
    /* 005031f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005031f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005031f8: jne 0x5031fe */ if (!fZ) goto L_005031fe;
L_005031fa:; BB(0x005031fa);
    /* 005031fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005031fb: ret 4 */ FN_RET(0x005031e8); r_esp += 8; return;
L_005031fe:; BB(0x005031fe);
    /* 005031fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005031ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x503204u); f_005c2f74();
    /* 00503204: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00503205: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00503206: ret 4 */ FN_RET(0x005031e8); r_esp += 8; return;
}

void f_0050320c(void) /* sub_50320C */
{
    FN_ENTER(0x0050320c);
    /* 0050320c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050320d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050320f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00503211: push 0x8d372c */ { u32 v = 0x8d372cu; r_esp -= 4; W32(r_esp, v); }
    /* 00503216: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050321c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050321d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00503224: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00503227: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050322a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050322d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00503230: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00503233: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00503236: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00503239: mov dword ptr [ecx], 0xafe998 */ W32((u32)(r_ecx), 0xafe998u);
    /* 0050323f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00503246: call 0x5017b0 */ r_esp -= 4; W32(r_esp, 0x50324bu); f_005017b0();
    /* 0050324b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050324e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00503255: mov esp, ebp */ r_esp = r_ebp;
    /* 00503257: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00503258: ret  */ FN_RET(0x0050320c); r_esp += 4; return;
}

void f_0050325c(void) /* sub_50325C */
{
    FN_ENTER(0x0050325c);
    /* 0050325c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050325d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050325f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00503261: push 0x8d3754 */ { u32 v = 0x8d3754u; r_esp -= 4; W32(r_esp, v); }
    /* 00503266: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050326c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050326d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00503274: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00503277: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050327a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050327d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00503280: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00503283: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00503285: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0050328c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x503291u); f_005caba4();
    /* 00503291: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00503292: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00503295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00503297: je 0x5032b9 */ if (fZ) goto L_005032b9;
L_00503299:; BB(0x00503299);
    /* 00503299: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005032a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005032a7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005032aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005032ad: call 0x5032c8 */ r_esp -= 4; W32(r_esp, 0x5032b2u); f_005032c8();
    /* 005032b2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005032b9:; BB(0x005032b9);
    /* 005032b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005032bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005032c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005032c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005032c6: ret  */ FN_RET(0x0050325c); r_esp += 4; return;
}

void f_005032c8(void) /* sub_5032C8 */
{
    FN_ENTER(0x005032c8);
    /* 005032c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005032c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005032ca: mov edi, ecx */ r_edi = r_ecx;
    /* 005032cc: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005032d0: mov ecx, edi */ r_ecx = r_edi;
    /* 005032d2: call 0x501860 */ r_esp -= 4; W32(r_esp, 0x5032d7u); f_00501860();
    /* 005032d7: mov dword ptr [edi], 0xafe998 */ W32((u32)(r_edi), 0xafe998u);
    /* 005032dd: mov edx, dword ptr [0x9ba420] */ r_edx = R32((u32)(0x9ba420u));
    /* 005032e3: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005032e6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005032e8: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 005032eb: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005032ee: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 005032f1: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 005032f4: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 005032f7: mov eax, edi */ r_eax = r_edi;
    /* 005032f9: mov dword ptr [edi + 0x70], 0 */ W32((u32)(r_edi+0x70u), 0x0u);
    /* 00503300: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00503301: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00503302: ret 4 */ FN_RET(0x005032c8); r_esp += 8; return;
}

void f_00503308(void) /* sub_503308 */
{
    FN_ENTER(0x00503308);
    /* 00503308: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050330b: mov eax, ecx */ r_eax = r_ecx;
    /* 0050330d: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00503310: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503312: je 0x503337 */ if (fZ) goto L_00503337;
L_00503314:; BB(0x00503314);
    /* 00503314: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503317: jne 0x503382 */ if (!fZ) goto L_00503382;
L_00503319:; BB(0x00503319);
    /* 00503319: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 0050331c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050331f: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 00503322: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00503325: jle 0x503382 */ if ((fZ||fS!=fO)) goto L_00503382;
L_00503327:; BB(0x00503327);
    /* 00503327: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0050332b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00503331: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00503335: jmp 0x503382 */ goto L_00503382;
L_00503337:; BB(0x00503337);
    /* 00503337: mov dword ptr [eax + 0x70], 1 */ W32((u32)(r_eax+0x70u), 0x1u);
    /* 0050333e: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00503342: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00503344: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00503348: mov ebx, edx */ r_ebx = r_edx;
    /* 0050334a: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0050334e: lea ecx, [eax + 0x20] */ r_ecx = (u32)(r_eax+0x20u);
    /* 00503351: mov edi, eax */ r_edi = r_eax;
    /* 00503353: mov esi, ecx */ r_esi = r_ecx;
L_00503355:; BB(0x00503355);
    /* 00503355: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 00503358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00503359: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050335a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x50335fu); f_0050b510();
    /* 0050335f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00503362:; BB(0x00503362);
    /* 00503362: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00503365: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00503368: jge 0x503376 */ if ((fS==fO)) goto L_00503376;
L_0050336a:; BB(0x0050336a);
    /* 0050336a: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050336d: je 0x503393 */ if (fZ) goto L_00503393;
L_0050336f:; BB(0x0050336f);
    /* 0050336f: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503372: je 0x503386 */ if (fZ) goto L_00503386;
L_00503374:; BB(0x00503374);
    /* 00503374: jmp 0x503355 */ goto L_00503355;
L_00503376:; BB(0x00503376);
    /* 00503376: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0050337a: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0050337e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_00503382:; BB(0x00503382);
    /* 00503382: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00503385: ret  */ FN_RET(0x00503308); r_esp += 4; return;
L_00503386:; BB(0x00503386);
    /* 00503386: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00503388: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00503389: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x50338eu); f_0050b510();
    /* 0050338e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00503391: jmp 0x503362 */ goto L_00503362;
L_00503393:; BB(0x00503393);
    /* 00503393: fld dword ptr [0x91fca0] */ FPUSH(R_F32((u32)(0x91fca0u)));
    /* 00503399: fadd dword ptr [edi + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x24u));
    /* 0050339c: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0050339f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005033a3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005033a6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005033a9: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 005033ac: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005033b0: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 005033b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005033b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005033b5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5033bau); f_0050b510();
    /* 005033ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005033bd: jmp 0x503362 */ goto L_00503362;
}

void f_005033c0(void) /* sub_5033C0 */
{
    FN_ENTER(0x005033c0);
    /* 005033c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005033c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005033c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005033c5: call 0x5033e4 */ r_esp -= 4; W32(r_esp, 0x5033cau); f_005033e4();
    /* 005033ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005033ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005033d0: jne 0x5033d6 */ if (!fZ) goto L_005033d6;
L_005033d2:; BB(0x005033d2);
    /* 005033d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005033d3: ret 4 */ FN_RET(0x005033c0); r_esp += 8; return;
L_005033d6:; BB(0x005033d6);
    /* 005033d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005033d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5033dcu); f_005c2f74();
    /* 005033dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005033dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005033de: ret 4 */ FN_RET(0x005033c0); r_esp += 8; return;
}

void f_005033e4(void) /* sub_5033E4 */
{
    FN_ENTER(0x005033e4);
    /* 005033e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005033e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005033e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005033e9: push 0x8d3770 */ { u32 v = 0x8d3770u; r_esp -= 4; W32(r_esp, v); }
    /* 005033ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005033f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005033f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005033fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005033ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00503402: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00503405: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00503408: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050340b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0050340e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00503411: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00503414: mov dword ptr [ecx], 0xafea00 */ W32((u32)(r_ecx), 0xafea00u);
    /* 0050341a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050341c: je 0x503435 */ if (fZ) goto L_00503435;
L_0050341e:; BB(0x0050341e);
    /* 0050341e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00503421: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00503425: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050342a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0050342e: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_00503435:; BB(0x00503435);
    /* 00503435: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050343c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x503441u); f_008171e8();
    /* 00503441: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00503444: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050344b: mov esp, ebp */ r_esp = r_ebp;
    /* 0050344d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050344e: ret  */ FN_RET(0x005033e4); r_esp += 4; return;
}

void f_00503450(void) /* sub_503450 */
{
    FN_ENTER(0x00503450);
    /* 00503450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00503451: mov ebp, esp */ r_ebp = r_esp;
    /* 00503453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00503455: push 0x8d37a6 */ { u32 v = 0x8d37a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0050345a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00503460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00503461: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00503468: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050346b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050346e: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00503471: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00503474: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 00503477: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050347a: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050347d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00503480: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00503483: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00503486: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00503489: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050348c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0050348f: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 00503493: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00503496: movzx eax, byte ptr [ebp + 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0x18u));
    /* 0050349a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0050349d: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005034a0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005034a3: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005034a6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005034a9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5034aeu); f_008193cc();
    /* 005034ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005034b5: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 005034b8: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005034bb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005034be: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005034c1: mov dword ptr [esi + 0x1c], edi */ W32((u32)(r_esi+0x1cu), r_edi);
    /* 005034c4: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 005034c7: mov dword ptr [esi], 0xafea00 */ W32((u32)(r_esi), 0xafea00u);
    /* 005034cd: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005034cf: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 005034d2: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 005034d5: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005034dc: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005034de: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 005034e1: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005034e4: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 005034e7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005034ea: mov byte ptr [esi + 0x30], al */ W8((u32)(r_esi+0x30u), (u8)r_eax);
    /* 005034ed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005034f0: mov byte ptr [esi + 0x31], al */ W8((u32)(r_esi+0x31u), (u8)r_eax);
    /* 005034f3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005034f6: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 005034f9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5034feu); f_005caba4();
    /* 005034fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005034ff: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00503502: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503504: je 0x50355c */ if (fZ) goto L_0050355c;
L_00503506:; BB(0x00503506);
    /* 00503506: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0050350d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00503514: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050351a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0050351d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050351f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00503521: call 0x5058a0 */ r_esp -= 4; W32(r_esp, 0x503526u); f_005058a0();
    /* 00503526: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00503529: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00503530:; BB(0x00503530);
    /* 00503530: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00503533: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00503536: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00503539: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0050353c: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0050353f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00503542: mov dword ptr [eax + 0x38], 1 */ W32((u32)(r_eax+0x38u), 0x1u);
    /* 00503549: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0050354c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050354f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00503556: mov esp, ebp */ r_esp = r_ebp;
    /* 00503558: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00503559: ret 0x20 */ FN_RET(0x00503450); r_esp += 36; return;
L_0050355c:; BB(0x0050355c);
    /* 0050355c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050355e: jmp 0x503530 */ goto L_00503530;
}

void f_00503560(void) /* sub_503560 */
{
    FN_ENTER(0x00503560);
    /* 00503560: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00503563: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503565: je 0x503585 */ if (fZ) goto L_00503585;
L_00503567:; BB(0x00503567);
    /* 00503567: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0050356a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050356c: je 0x503584 */ if (fZ) goto L_00503584;
L_0050356e:; BB(0x0050356e);
    /* 0050356e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00503571: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 00503574: jne 0x503584 */ if (!fZ) goto L_00503584;
L_00503576:; BB(0x00503576);
    /* 00503576: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0050357a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050357f: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00503583: ret  */ FN_RET(0x00503560); r_esp += 4; return;
L_00503584:; BB(0x00503584);
    /* 00503584: ret  */ FN_RET(0x00503560); r_esp += 4; return;
L_00503585:; BB(0x00503585);
    /* 00503585: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00503589: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050358e: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00503592: ret  */ FN_RET(0x00503560); r_esp += 4; return;
}

void f_00503594(void) /* sub_503594 */
{
    FN_ENTER(0x00503594);
    /* 00503594: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00503595: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00503597: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00503599: call 0x5035b8 */ r_esp -= 4; W32(r_esp, 0x50359eu); f_005035b8();
    /* 0050359e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005035a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005035a4: jne 0x5035aa */ if (!fZ) goto L_005035aa;
L_005035a6:; BB(0x005035a6);
    /* 005035a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005035a7: ret 4 */ FN_RET(0x00503594); r_esp += 8; return;
L_005035aa:; BB(0x005035aa);
    /* 005035aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005035ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5035b0u); f_005c2f74();
    /* 005035b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005035b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005035b2: ret 4 */ FN_RET(0x00503594); r_esp += 8; return;
}

void f_005035b8(void) /* sub_5035B8 */
{
    FN_ENTER(0x005035b8);
    /* 005035b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005035b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005035bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005035bd: push 0x8d37c0 */ { u32 v = 0x8d37c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005035c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005035c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005035c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005035d0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005035d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005035d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005035d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005035dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005035df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005035e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005035e9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005035ec: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005035ef: mov dword ptr [edx], 0xafead8 */ W32((u32)(r_edx), 0xafead8u);
    /* 005035f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005035f7: je 0x50360a */ if (fZ) goto L_0050360a;
L_005035f9:; BB(0x005035f9);
    /* 005035f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005035fa: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5035ffu); f_0082e960();
    /* 005035ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00503600: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00503603: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
L_0050360a:; BB(0x0050360a);
    /* 0050360a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0050360d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050360f: je 0x503625 */ if (fZ) goto L_00503625;
L_00503611:; BB(0x00503611);
    /* 00503611: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x503616u); f_00829de0();
    /* 00503616: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00503619: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050361c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x503621u); f_00857e98();
    /* 00503621: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00503622: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_00503625:; BB(0x00503625);
    /* 00503625: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00503628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050362a: je 0x503636 */ if (fZ) goto L_00503636;
L_0050362c:; BB(0x0050362c);
    /* 0050362c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050362d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x503632u); f_00857e98();
    /* 00503632: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00503633: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_00503636:; BB(0x00503636);
    /* 00503636: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050363d: mov ecx, edx */ r_ecx = r_edx;
    /* 0050363f: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x503644u); f_008171e8();
    /* 00503644: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00503647: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050364e: mov esp, ebp */ r_esp = r_ebp;
    /* 00503650: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00503651: ret  */ FN_RET(0x005035b8); r_esp += 4; return;
}

void f_00503654(void) /* sub_503654 */
{
    FN_ENTER(0x00503654);
    /* 00503654: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00503655: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00503657: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00503659: call 0x503678 */ r_esp -= 4; W32(r_esp, 0x50365eu); f_00503678();
    /* 0050365e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00503662: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00503664: jne 0x50366a */ if (!fZ) goto L_0050366a;
L_00503666:; BB(0x00503666);
    /* 00503666: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00503667: ret 4 */ FN_RET(0x00503654); r_esp += 8; return;
L_0050366a:; BB(0x0050366a);
    /* 0050366a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050366b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x503670u); f_005c2f74();
    /* 00503670: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00503671: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00503672: ret 4 */ FN_RET(0x00503654); r_esp += 8; return;
}

void f_00503678(void) /* sub_503678 */
{
    FN_ENTER(0x00503678);
    /* 00503678: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00503679: mov ebp, esp */ r_ebp = r_esp;
    /* 0050367b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050367d: push 0x8d37dc */ { u32 v = 0x8d37dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00503682: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00503688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00503689: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00503690: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00503693: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00503696: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00503699: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050369c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050369f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005036a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005036a5: mov dword ptr [ecx], 0xafeae8 */ W32((u32)(r_ecx), 0xafeae8u);
    /* 005036ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005036b2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5036b7u); f_008171e8();
    /* 005036b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005036ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005036c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005036c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005036c4: ret  */ FN_RET(0x00503678); r_esp += 4; return;
}

void f_005036c8(void) /* sub_5036C8 */
{
    FN_ENTER(0x005036c8);
    /* 005036c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005036c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005036ca: call 0x503750 */ r_esp -= 4; W32(r_esp, 0x5036cfu); f_00503750();
    /* 005036cf: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 005036d4: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005036db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005036dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005036df: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005036e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005036e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005036e4: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x5036eau); call_ind(t); }
    /* 005036ea: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 005036ed: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 005036f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005036f4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005036f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005036f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005036f9: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x5036ffu); call_ind(t); }
    /* 005036ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00503701: mov dword ptr [0xa72b10], eax */ W32((u32)(0xa72b10u), r_eax);
    /* 00503706: mov dword ptr [0xa72b14], eax */ W32((u32)(0xa72b14u), r_eax);
    /* 0050370b: mov dword ptr [0xa72b18], eax */ W32((u32)(0xa72b18u), r_eax);
    /* 00503710: mov dword ptr [0xa72b1c], eax */ W32((u32)(0xa72b1cu), r_eax);
    /* 00503715: mov dword ptr [0xa72b20], eax */ W32((u32)(0xa72b20u), r_eax);
    /* 0050371a: mov dword ptr [0xa72b24], eax */ W32((u32)(0xa72b24u), r_eax);
    /* 0050371f: call 0x50376c */ r_esp -= 4; W32(r_esp, 0x503724u); f_0050376c();
    /* 00503724: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00503726: mov ebx, eax */ r_ebx = r_eax;
L_00503728:; BB(0x00503728);
    /* 00503728: mov edx, dword ptr [ebx + 0xa72b30] */ r_edx = R32((u32)(r_ebx+0xa72b30u));
    /* 0050372e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00503731: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503733: je 0x503746 */ if (fZ) goto L_00503746;
L_00503735:; BB(0x00503735);
    /* 00503735: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00503736: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x50373bu); f_0082e960();
    /* 0050373b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050373c: mov dword ptr [ebx + 0xa72b2c], 0 */ W32((u32)(r_ebx+0xa72b2cu), 0x0u);
L_00503746:; BB(0x00503746);
    /* 00503746: cmp ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00503749: jl 0x503728 */ if ((fS!=fO)) goto L_00503728;
L_0050374b:; BB(0x0050374b);
    /* 0050374b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050374c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050374d: ret  */ FN_RET(0x005036c8); r_esp += 4; return;
}

void f_00503750(void) /* sub_503750 */
{
    FN_ENTER(0x00503750);
    /* 00503750: mov eax, dword ptr [0xa72b28] */ r_eax = R32((u32)(0xa72b28u));
    /* 00503755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00503757: je 0x50376a */ if (fZ) goto L_0050376a;
L_00503759:; BB(0x00503759);
    /* 00503759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050375a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x50375fu); f_0082e960();
    /* 0050375f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00503760: mov dword ptr [0xa72b28], 0 */ W32((u32)(0xa72b28u), 0x0u);
L_0050376a:; BB(0x0050376a);
    /* 0050376a: ret  */ FN_RET(0x00503750); r_esp += 4; return;
}

void f_0050376c(void) /* sub_50376C */
{
    FN_ENTER(0x0050376c);
    /* 0050376c: mov eax, dword ptr [0x9ba450] */ r_eax = R32((u32)(0x9ba450u));
    /* 00503771: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00503774: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503776: je 0x503782 */ if (fZ) goto L_00503782;
L_00503778:; BB(0x00503778);
    /* 00503778: mov ecx, 0x9ba450 */ r_ecx = 0x9ba450u;
    /* 0050377d: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x503782u); f_00829de0();
L_00503782:; BB(0x00503782);
    /* 00503782: mov eax, dword ptr [0xa72b60] */ r_eax = R32((u32)(0xa72b60u));
    /* 00503787: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503789: je 0x50379c */ if (fZ) goto L_0050379c;
L_0050378b:; BB(0x0050378b);
    /* 0050378b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050378c: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x503791u); f_0082e960();
    /* 00503791: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00503792: mov dword ptr [0xa72b60], 0 */ W32((u32)(0xa72b60u), 0x0u);
L_0050379c:; BB(0x0050379c);
    /* 0050379c: mov eax, dword ptr [0xa72b2c] */ r_eax = R32((u32)(0xa72b2cu));
    /* 005037a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005037a3: je 0x5037b6 */ if (fZ) goto L_005037b6;
L_005037a5:; BB(0x005037a5);
    /* 005037a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005037a6: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5037abu); f_0082e960();
    /* 005037ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005037ac: mov dword ptr [0xa72b2c], 0 */ W32((u32)(0xa72b2cu), 0x0u);
L_005037b6:; BB(0x005037b6);
    /* 005037b6: ret  */ FN_RET(0x0050376c); r_esp += 4; return;
}

void f_005037b8(void) /* sub_5037B8 */
{
    FN_ENTER(0x005037b8);
    /* 005037b8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005037bc: mov eax, dword ptr [0xa72b60] */ r_eax = R32((u32)(0xa72b60u));
    /* 005037c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005037c3: je 0x5037e6 */ if (fZ) goto L_005037e6;
L_005037c5:; BB(0x005037c5);
    /* 005037c5: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005037c8: jl 0x5037cb */ if ((fS!=fO)) goto L_005037cb;
L_005037ca:; BB(0x005037ca);
    /* 005037ca: ret  */ FN_RET(0x005037b8); r_esp += 4; return;
L_005037cb:; BB(0x005037cb);
    /* 005037cb: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005037cf: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 005037d2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005037d4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005037d6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005037d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005037da: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005037dc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005037e0: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 005037e3: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_005037e6:; BB(0x005037e6);
    /* 005037e6: ret  */ FN_RET(0x005037b8); r_esp += 4; return;
}

void f_005037e8(void) /* sub_5037E8 */
{
    FN_ENTER(0x005037e8);
    /* 005037e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005037e9: mov ebp, esp */ r_ebp = r_esp;
    /* 005037eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005037ed: push 0x8d37f8 */ { u32 v = 0x8d37f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005037f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005037f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005037f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00503800: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00503803: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00503806: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00503809: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0050380c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0050380f: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00503813: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00503816: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00503819: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050381c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x503821u); f_008193cc();
    /* 00503821: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00503828: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050382b: mov dword ptr [edx], 0xafead8 */ W32((u32)(r_edx), 0xafead8u);
    /* 00503831: mov eax, dword ptr [0x9ba424] */ r_eax = R32((u32)(0x9ba424u));
    /* 00503836: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00503838: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0050383b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x503840u); f_008581c5();
    /* 00503840: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00503843: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00503845: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00503848: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x50384du); f_008581c5();
    /* 0050384d: mov edx, eax */ r_edx = r_eax;
    /* 0050384f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00503852: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00503855: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00503858: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050385a: je 0x503990 */ if (fZ) goto L_00503990;
L_00503860:; BB(0x00503860);
    /* 00503860: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00503863: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503865: je 0x503990 */ if (fZ) goto L_00503990;
L_0050386b:; BB(0x0050386b);
    /* 0050386b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050386e: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 00503875: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00503877: mov word ptr [eax + 0x4a], si */ W16((u32)(r_eax+0x4au), (u16)r_esi);
    /* 0050387b: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 00503882: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 00503885: mov dword ptr [eax + 0x44], esi */ W32((u32)(r_eax+0x44u), r_esi);
    /* 00503888: mov word ptr [eax + 0x48], si */ W16((u32)(r_eax+0x48u), (u16)r_esi);
    /* 0050388c: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 00503893: mov byte ptr [eax + 0x25], cl */ W8((u32)(r_eax+0x25u), (u8)r_ecx);
    /* 00503896: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00503899: jl 0x5038a2 */ if ((fS!=fO)) goto L_005038a2;
L_0050389b:; BB(0x0050389b);
    /* 0050389b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050389d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005038a0: jmp 0x5038b1 */ goto L_005038b1;
L_005038a2:; BB(0x005038a2);
    /* 005038a2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005038a4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005038a6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005038a8: add ecx, dword ptr [0xa72b60] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa72b60u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005038ae: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005038b1:; BB(0x005038b1);
    /* 005038b1: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005038b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005038b6: jne 0x5038cb */ if (!fZ) goto L_005038cb;
L_005038b8:; BB(0x005038b8);
    /* 005038b8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005038bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005038be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005038c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005038c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005038c8: ret 0xc */ FN_RET(0x005037e8); r_esp += 16; return;
L_005038cb:; BB(0x005038cb);
    /* 005038cb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005038cd: movzx ecx, byte ptr [ebx + 7] */ r_ecx = (u32)R8((u32)(r_ebx+0x7u));
    /* 005038d1: mov byte ptr [eax + 0x24], cl */ W8((u32)(r_eax+0x24u), (u8)r_ecx);
    /* 005038d4: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005038d7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005038d9: mov edi, 0x40 */ r_edi = 0x40u;
    /* 005038de: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005038e1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005038e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005038e5: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 005038e8: mov dword ptr [esi + 4], 1 */ W32((u32)(r_esi+0x4u), 0x1u);
    /* 005038ef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005038f0: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 005038f3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005038f5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005038f7: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x5038fcu); f_0082a9dc();
    /* 005038fc: push 0x8800000 */ { u32 v = 0x8800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00503901: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00503904: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00503907: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 0050390a: push 0x22b8 */ { u32 v = 0x22b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050390f: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x503914u); f_0082aa0c();
    /* 00503914: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00503919: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x50391eu); f_0082aab8();
    /* 0050391e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00503921: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00503924: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00503926: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x50392bu); f_00829e74();
    /* 0050392b: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x503930u); f_0082aac0();
    /* 00503930: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00503935: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x50393au); f_0082e940();
    /* 0050393a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050393b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050393e: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00503941: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00503944: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x503949u); f_00829cc8();
    /* 00503949: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0050394c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050394e: call 0x835ca8 */ r_esp -= 4; W32(r_esp, 0x503953u); f_00835ca8();
    /* 00503953: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00503956: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00503959: movzx eax, byte ptr [ebx + 0x24] */ r_eax = (u32)R8((u32)(r_ebx+0x24u));
    /* 0050395d: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 00503960: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00503961: call 0x5039b5 */ r_esp -= 4; W32(r_esp, 0x503966u); f_005039b5();
    /* 00503966: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00503967: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00503968: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050396a: call 0x5039cc */ r_esp -= 4; W32(r_esp, 0x50396fu); f_005039cc();
    /* 0050396f: call 0x5039e4 */ r_esp -= 4; W32(r_esp, 0x503974u); f_005039e4();
    /* 00503974: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00503977: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050397a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050397d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00503980: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00503983: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050398a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050398c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050398d: ret 0xc */ FN_RET(0x005037e8); r_esp += 16; return;
L_00503990:; BB(0x00503990);
    /* 00503990: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00503994: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050399a: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0050399e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005039a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005039a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005039aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005039ab: ret 0xc */ FN_RET(0x005037e8); r_esp += 16; return;
}

void f_005039b5(void) /* sub_5039B5 */
{
    FN_ENTER(0x005039b5);
    /* 005039b5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005039b8: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005039bb: jl 0x5039bf */ if ((fS!=fO)) goto L_005039bf;
L_005039bd:; BB(0x005039bd);
    /* 005039bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005039bf:; BB(0x005039bf);
    /* 005039bf: mov eax, dword ptr [eax*4 + 0xa72b30] */ r_eax = R32((u32)(r_eax*4+0xa72b30u));
    /* 005039c6: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005039c9: ret  */ FN_RET(0x005039b5); r_esp += 4; return;
}

void f_005039cc(void) /* sub_5039CC */
{
    FN_ENTER(0x005039cc);
    /* 005039cc: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005039d1: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005039d5: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005039d8: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x5039ddu); f_00858c80();
    /* 005039dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005039e0: ret 4 */ FN_RET(0x005039cc); r_esp += 8; return;
}

void f_005039e4(void) /* sub_5039E4 */
{
    FN_ENTER(0x005039e4);
    /* 005039e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005039e6: call 0x835cd8 */ r_esp -= 4; W32(r_esp, 0x5039ebu); f_00835cd8();
    /* 005039eb: ret  */ FN_RET(0x005039e4); r_esp += 4; return;
}

void f_005039ec(void) /* sub_5039EC */
{
    FN_ENTER(0x005039ec);
    /* 005039ec: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005039f1: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005039f4: jl 0x5039fa */ if ((fS!=fO)) goto L_005039fa;
L_005039f6:; BB(0x005039f6);
    /* 005039f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005039f8: jmp 0x503a07 */ goto L_00503a07;
L_005039fa:; BB(0x005039fa);
    /* 005039fa: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005039fd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005039ff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00503a01: add edx, dword ptr [0xa72b60] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa72b60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00503a07:; BB(0x00503a07);
    /* 00503a07: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00503a0a: movzx edx, byte ptr [edx + 7] */ r_edx = (u32)R8((u32)(r_edx+0x7u));
    /* 00503a0e: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 00503a11: mov byte ptr [ecx + 0x25], al */ W8((u32)(r_ecx+0x25u), (u8)r_eax);
    /* 00503a14: ret 4 */ FN_RET(0x005039ec); r_esp += 8; return;
}

void f_00503a18(void) /* sub_503A18 */
{
    FN_ENTER(0x00503a18);
    /* 00503a18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00503a19: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00503a1c: mov esi, ecx */ r_esi = r_ecx;
    /* 00503a1e: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x503a23u); f_004f7c84();
    /* 00503a23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503a25: jne 0x503a34 */ if (!fZ) goto L_00503a34;
L_00503a27:; BB(0x00503a27);
    /* 00503a27: movzx eax, word ptr [esi + 0x4a] */ r_eax = (u32)R16((u32)(r_esi+0x4au));
    /* 00503a2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503a2d: je 0x503a34 */ if (fZ) goto L_00503a34;
L_00503a2f:; BB(0x00503a2f);
    /* 00503a2f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00503a32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00503a33: ret  */ FN_RET(0x00503a18); r_esp += 4; return;
L_00503a34:; BB(0x00503a34);
    /* 00503a34: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00503a37: movsx eax, byte ptr [edx + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x4u));
    /* 00503a3b: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00503a3e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00503a40: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 00503a43: movsx eax, byte ptr [edx + 5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x5u));
    /* 00503a47: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 00503a4a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00503a4c: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 00503a4f: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 00503a53: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00503a57: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00503a5b: fstp dword ptr [esi + 0x4c] */ W_F32((u32)(r_esi+0x4cu), ST(0)); FPOP();
    /* 00503a5e: movsx eax, byte ptr [edx + 2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x2u));
    /* 00503a62: mov dword ptr [esp], 0x503adc */ W32((u32)(r_esp), 0x503adcu);
    /* 00503a69: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00503a6d: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00503a71: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00503a76: fstp dword ptr [esi + 0x50] */ W_F32((u32)(r_esi+0x50u), ST(0)); FPOP();
    /* 00503a79: test al, 0x1f */ {  u32 a = (u8)r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00503a7b: mov dword ptr [esp + 4], 0x504254 */ W32((u32)(r_esp+0x4u), 0x504254u);
    /* 00503a83: mov dword ptr [esp + 8], 0x5046b0 */ W32((u32)(r_esp+0x8u), 0x5046b0u);
    /* 00503a8b: jne 0x503ab4 */ if (!fZ) goto L_00503ab4;
L_00503a8d:; BB(0x00503a8d);
    /* 00503a8d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x503a92u); f_008587a5();
    /* 00503a92: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00503a95: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00503a99: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00503a9d: fdiv dword ptr [0x91fcd0] */ ST(0) = ST(0) / R_F32((u32)(0x91fcd0u));
    /* 00503aa3: movsx eax, byte ptr [edx + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
    /* 00503aa7: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00503aab: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00503aaf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00503ab1: fstp dword ptr [esi + 0x54] */ W_F32((u32)(r_esi+0x54u), ST(0)); FPOP();
L_00503ab4:; BB(0x00503ab4);
    /* 00503ab4: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00503ab7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00503aba: jge 0x503ac4 */ if ((fS==fO)) goto L_00503ac4;
L_00503abc:; BB(0x00503abc);
    /* 00503abc: mov ecx, esi */ r_ecx = r_esi;
    /* 00503abe: call dword ptr [esp + eax*4] */ { u32 t = R32((u32)(r_esp+r_eax*4)); r_esp -= 4; W32(r_esp, 0x503ac1u); call_ind(t); }
    /* 00503ac1: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
L_00503ac4:; BB(0x00503ac4);
    /* 00503ac4: movzx eax, byte ptr [edx + 7] */ r_eax = (u32)R8((u32)(r_edx+0x7u));
    /* 00503ac8: mov byte ptr [esi + 0x24], al */ W8((u32)(r_esi+0x24u), (u8)r_eax);
    /* 00503acb: mov edx, 1 */ r_edx = 0x1u;
    /* 00503ad0: mov word ptr [esi + 0x4a], dx */ W16((u32)(r_esi+0x4au), (u16)r_edx);
    /* 00503ad4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00503ad7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00503ad8: ret  */ FN_RET(0x00503a18); r_esp += 4; return;
}

void f_00503adc(void) /* sub_503ADC */
{
    FN_ENTER(0x00503adc);
    /* 00503adc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00503add: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00503ae0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00503ae2: movzx eax, byte ptr [ebx + 0x24] */ r_eax = (u32)R8((u32)(r_ebx+0x24u));
    /* 00503ae6: call 0x5039b5 */ r_esp -= 4; W32(r_esp, 0x503aebu); f_005039b5();
    /* 00503aeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00503aec: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00503aef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00503af1: call 0x503b74 */ r_esp -= 4; W32(r_esp, 0x503af6u); f_00503b74();
    /* 00503af6: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 00503af9: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 00503afc: movsx ecx, byte ptr [ecx + 3] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3u));
    /* 00503b00: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 00503b04: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 00503b09: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00503b0e: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00503b12: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00503b16: fistp qword ptr [esp + 0x2c] */ W64((u32)(r_esp+0x2cu), (u64)fx_int64(ST(0))); FPOP();
    /* 00503b1a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00503b1e: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00503b22: movzx eax, word ptr [ebx + 0x48] */ r_eax = (u32)R16((u32)(r_ebx+0x48u));
    /* 00503b26: mov byte ptr [esp + 0xc], dl */ W8((u32)(r_esp+0xcu), (u8)r_edx);
    /* 00503b2a: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00503b2d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00503b2f: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 00503b32: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00503b35: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00503b39: mov word ptr [ebx + 0x48], ax */ W16((u32)(r_ebx+0x48u), (u16)r_eax);
    /* 00503b3d: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00503b40: call 0x503b98 */ r_esp -= 4; W32(r_esp, 0x503b45u); f_00503b98();
    /* 00503b45: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00503b48: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x503b4du); f_00829cc8();
    /* 00503b4d: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00503b51: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00503b53: call 0x835ca8 */ r_esp -= 4; W32(r_esp, 0x503b58u); f_00835ca8();
    /* 00503b58: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00503b5c: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00503b5f: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00503b62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00503b64: call 0x5039cc */ r_esp -= 4; W32(r_esp, 0x503b69u); f_005039cc();
    /* 00503b69: call 0x5039e4 */ r_esp -= 4; W32(r_esp, 0x503b6eu); f_005039e4();
    /* 00503b6e: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00503b71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00503b72: ret  */ FN_RET(0x00503adc); r_esp += 4; return;
}

void f_00503b74(void) /* sub_503B74 */
{
    FN_ENTER(0x00503b74);
    /* 00503b74: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00503b79: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00503b7d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00503b81: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x503b86u); f_00858c80();
    /* 00503b86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00503b89: ret 8 */ FN_RET(0x00503b74); r_esp += 12; return;
}

void f_00503b98(void) /* sub_503B98 */
{
    FN_ENTER(0x00503b98);
    /* 00503b98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00503b99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00503b9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00503b9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00503b9c: sub esp, 0x154 */ {  u32 a = r_esp; u32 b = 0x154u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00503ba2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00503ba4: mov ebp, edx */ r_ebp = r_edx;
    /* 00503ba6: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00503baa: fild dword ptr [esp + 0x178] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x178u)));
    /* 00503bb1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00503bb3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00503bb5: mov eax, dword ptr [esp + 0x178] */ r_eax = R32((u32)(r_esp+0x178u));
    /* 00503bbc: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00503bbf: fadd dword ptr [eax*4 + 0x91fcb8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x91fcb8u));
    /* 00503bc6: call 0x5041f0 */ r_esp -= 4; W32(r_esp, 0x503bcbu); f_005041f0();
    /* 00503bcb: movzx eax, byte ptr [esp + 0x174] */ r_eax = (u32)R8((u32)(r_esp+0x174u));
    /* 00503bd3: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00503bd7: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00503bdb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00503bdd: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00503be1: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00503be6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00503beb: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00503bef: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00503bf3: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00503bf7: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00503bfb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503bfd: movsx eax, word ptr [esp + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 00503c02: je 0x503c0e */ if (fZ) goto L_00503c0e;
L_00503c04:; BB(0x00503c04);
    /* 00503c04: mov edi, 1 */ r_edi = 0x1u;
    /* 00503c09: mov esi, 1 */ r_esi = 0x1u;
L_00503c0e:; BB(0x00503c0e);
    /* 00503c0e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503c10: je 0x503c18 */ if (fZ) goto L_00503c18;
L_00503c12:; BB(0x00503c12);
    /* 00503c12: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00503c15: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00503c18:; BB(0x00503c18);
    /* 00503c18: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503c1a: je 0x5040f6 */ if (fZ) goto L_005040f6;
L_00503c20:; BB(0x00503c20);
    /* 00503c20: and ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00503c23: and ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00503c26: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00503c28: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00503c2c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00503c2e: jle 0x503ff0 */ if ((fZ||fS!=fO)) goto L_00503ff0;
L_00503c34:; BB(0x00503c34);
    /* 00503c34: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 00503c38: mov edx, 0xff */ r_edx = 0xffu;
    /* 00503c3d: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00503c42: jl 0x503c46 */ if ((fS!=fO)) goto L_00503c46;
L_00503c44:; BB(0x00503c44);
    /* 00503c44: mov eax, edx */ r_eax = r_edx;
L_00503c46:; BB(0x00503c46);
    /* 00503c46: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00503c48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00503c4a: jg 0x503c4e */ if ((!fZ&&fS==fO)) goto L_00503c4e;
L_00503c4c:; BB(0x00503c4c);
    /* 00503c4c: mov eax, edx */ r_eax = r_edx;
L_00503c4e:; BB(0x00503c4e);
    /* 00503c4e: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00503c52: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
L_00503c56:; BB(0x00503c56);
    /* 00503c56: mov eax, edi */ r_eax = r_edi;
    /* 00503c58: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00503c5b: je 0x503c61 */ if (fZ) goto L_00503c61;
L_00503c5d:; BB(0x00503c5d);
    /* 00503c5d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00503c5f: jmp 0x503c65 */ goto L_00503c65;
L_00503c61:; BB(0x00503c61);
    /* 00503c61: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
L_00503c65:; BB(0x00503c65);
    /* 00503c65: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00503c69: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00503c6d: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00503c71: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00503c75: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00503c79: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00503c7d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00503c7f:; BB(0x00503c7f);
    /* 00503c7f: mov esi, dword ptr [0xa72b2c] */ r_esi = R32((u32)(0xa72b2cu));
    /* 00503c85: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00503c89: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00503c8d: mov edx, ebx */ r_edx = r_ebx;
    /* 00503c8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00503c91: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00503c95: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 00503c99: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 00503c9c: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
L_00503ca0:; BB(0x00503ca0);
    /* 00503ca0: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00503ca4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00503ca7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503ca9: jne 0x5041bb */ if (!fZ) goto L_005041bb;
L_00503caf:; BB(0x00503caf);
    /* 00503caf: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00503cb3: movzx ebp, dl */ r_ebp = (u32)(u8)r_edx;
    /* 00503cb6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503cb8: je 0x5041b4 */ if (fZ) goto L_005041b4;
L_00503cbe:; BB(0x00503cbe);
    /* 00503cbe: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00503cc2: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00503cc5: add ebx, dword ptr [esp + 0x50] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00503cc9: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00503ccb: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00503ccd: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00503ccf: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00503cd1: movzx ebp, word ptr [ebx + ebp*8] */ r_ebp = (u32)R16((u32)(r_ebx+r_ebp*8));
L_00503cd5:; BB(0x00503cd5);
    /* 00503cd5: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00503cd9: movzx ecx, word ptr [ecx + ebp*2] */ r_ecx = (u32)R16((u32)(r_ecx+r_ebp*2));
    /* 00503cdd: mov edi, ecx */ r_edi = r_ecx;
    /* 00503cdf: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00503ce5: sar edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00503ce8: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00503ceb: lea ebx, [esi] */ r_ebx = (u32)(r_esi);
    /* 00503ced: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00503cf0: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00503cf2: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00503cf4: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00503cf6: movzx edi, di */ r_edi = (u32)(u16)r_edi;
    /* 00503cf9: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00503cfb: movzx ecx, bx */ r_ecx = (u32)(u16)r_ebx;
    /* 00503cfe: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00503d03: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00503d09: jl 0x503d0d */ if ((fS!=fO)) goto L_00503d0d;
L_00503d0b:; BB(0x00503d0b);
    /* 00503d0b: mov edi, ebx */ r_edi = r_ebx;
L_00503d0d:; BB(0x00503d0d);
    /* 00503d0d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00503d0f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00503d11: jg 0x503d15 */ if ((!fZ&&fS==fO)) goto L_00503d15;
L_00503d13:; BB(0x00503d13);
    /* 00503d13: mov edi, ebx */ r_edi = r_ebx;
L_00503d15:; BB(0x00503d15);
    /* 00503d15: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00503d1a: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00503d20: jl 0x503d24 */ if ((fS!=fO)) goto L_00503d24;
L_00503d22:; BB(0x00503d22);
    /* 00503d22: mov ecx, ebx */ r_ecx = r_ebx;
L_00503d24:; BB(0x00503d24);
    /* 00503d24: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00503d26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00503d28: jg 0x503d2c */ if ((!fZ&&fS==fO)) goto L_00503d2c;
L_00503d2a:; BB(0x00503d2a);
    /* 00503d2a: mov ecx, ebx */ r_ecx = r_ebx;
L_00503d2c:; BB(0x00503d2c);
    /* 00503d2c: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00503d2f: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00503d31: mov word ptr [esp + eax*4 + 0x52], di */ W16((u32)(r_esp+r_eax*4+0x52u), (u16)r_edi);
    /* 00503d36: mov word ptr [esp + edx*4 + 0x54], bp */ W16((u32)(r_esp+r_edx*4+0x54u), (u16)r_ebp);
    /* 00503d3b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00503d3e: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00503d41: jb 0x503d46 */ if (fC) goto L_00503d46;
L_00503d43:; BB(0x00503d43);
    /* 00503d43: add edx, -0x20 */ {  u32 a = r_edx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00503d46:; BB(0x00503d46);
    /* 00503d46: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00503d49: jl 0x503ca0 */ if ((fS!=fO)) goto L_00503ca0;
L_00503d4f:; BB(0x00503d4f);
    /* 00503d4f: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00503d53: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 00503d57: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00503d5b: movzx edx, word ptr [esp + 0x54] */ r_edx = (u32)R16((u32)(r_esp+0x54u));
    /* 00503d60: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00503d63: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00503d66: movzx eax, word ptr [esp + 0x56] */ r_eax = (u32)R16((u32)(r_esp+0x56u));
    /* 00503d6b: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503d70: movzx edi, word ptr [esp + 0x58] */ r_edi = (u32)R16((u32)(r_esp+0x58u));
    /* 00503d75: movzx esi, word ptr [esp + 0x5a] */ r_esi = (u32)R16((u32)(r_esp+0x5au));
    /* 00503d7a: mov word ptr [ebp + edi*2], si */ W16((u32)(r_ebp+r_edi*2), (u16)r_esi);
    /* 00503d7f: movzx edx, word ptr [esp + 0x5c] */ r_edx = (u32)R16((u32)(r_esp+0x5cu));
    /* 00503d84: movzx eax, word ptr [esp + 0x5e] */ r_eax = (u32)R16((u32)(r_esp+0x5eu));
    /* 00503d89: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503d8e: movzx edx, word ptr [esp + 0x60] */ r_edx = (u32)R16((u32)(r_esp+0x60u));
    /* 00503d93: movzx eax, word ptr [esp + 0x62] */ r_eax = (u32)R16((u32)(r_esp+0x62u));
    /* 00503d98: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503d9d: movzx edx, word ptr [esp + 0x64] */ r_edx = (u32)R16((u32)(r_esp+0x64u));
    /* 00503da2: movzx eax, word ptr [esp + 0x66] */ r_eax = (u32)R16((u32)(r_esp+0x66u));
    /* 00503da7: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503dac: movzx edx, word ptr [esp + 0x68] */ r_edx = (u32)R16((u32)(r_esp+0x68u));
    /* 00503db1: movzx eax, word ptr [esp + 0x6a] */ r_eax = (u32)R16((u32)(r_esp+0x6au));
    /* 00503db6: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503dbb: movzx edx, word ptr [esp + 0x6c] */ r_edx = (u32)R16((u32)(r_esp+0x6cu));
    /* 00503dc0: movzx eax, word ptr [esp + 0x6e] */ r_eax = (u32)R16((u32)(r_esp+0x6eu));
    /* 00503dc5: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503dca: movzx edx, word ptr [esp + 0x70] */ r_edx = (u32)R16((u32)(r_esp+0x70u));
    /* 00503dcf: movzx eax, word ptr [esp + 0x72] */ r_eax = (u32)R16((u32)(r_esp+0x72u));
    /* 00503dd4: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503dd9: movzx edx, word ptr [esp + 0x74] */ r_edx = (u32)R16((u32)(r_esp+0x74u));
    /* 00503dde: movzx eax, word ptr [esp + 0x76] */ r_eax = (u32)R16((u32)(r_esp+0x76u));
    /* 00503de3: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503de8: movzx edx, word ptr [esp + 0x78] */ r_edx = (u32)R16((u32)(r_esp+0x78u));
    /* 00503ded: movzx eax, word ptr [esp + 0x7a] */ r_eax = (u32)R16((u32)(r_esp+0x7au));
    /* 00503df2: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503df7: movzx edx, word ptr [esp + 0x7c] */ r_edx = (u32)R16((u32)(r_esp+0x7cu));
    /* 00503dfc: movzx eax, word ptr [esp + 0x7e] */ r_eax = (u32)R16((u32)(r_esp+0x7eu));
    /* 00503e01: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503e06: movzx edx, word ptr [esp + 0x80] */ r_edx = (u32)R16((u32)(r_esp+0x80u));
    /* 00503e0e: movzx eax, word ptr [esp + 0x82] */ r_eax = (u32)R16((u32)(r_esp+0x82u));
    /* 00503e16: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503e1b: movzx edx, word ptr [esp + 0x84] */ r_edx = (u32)R16((u32)(r_esp+0x84u));
    /* 00503e23: movzx eax, word ptr [esp + 0x86] */ r_eax = (u32)R16((u32)(r_esp+0x86u));
    /* 00503e2b: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503e30: movzx edx, word ptr [esp + 0x88] */ r_edx = (u32)R16((u32)(r_esp+0x88u));
    /* 00503e38: movzx eax, word ptr [esp + 0x8a] */ r_eax = (u32)R16((u32)(r_esp+0x8au));
    /* 00503e40: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503e45: movzx edx, word ptr [esp + 0x8c] */ r_edx = (u32)R16((u32)(r_esp+0x8cu));
    /* 00503e4d: movzx eax, word ptr [esp + 0x8e] */ r_eax = (u32)R16((u32)(r_esp+0x8eu));
    /* 00503e55: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503e5a: movzx edx, word ptr [esp + 0x90] */ r_edx = (u32)R16((u32)(r_esp+0x90u));
    /* 00503e62: movzx eax, word ptr [esp + 0x92] */ r_eax = (u32)R16((u32)(r_esp+0x92u));
    /* 00503e6a: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503e6f: movzx edx, word ptr [esp + 0x94] */ r_edx = (u32)R16((u32)(r_esp+0x94u));
    /* 00503e77: movzx eax, word ptr [esp + 0x96] */ r_eax = (u32)R16((u32)(r_esp+0x96u));
    /* 00503e7f: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503e84: movzx edx, word ptr [esp + 0x98] */ r_edx = (u32)R16((u32)(r_esp+0x98u));
    /* 00503e8c: movzx eax, word ptr [esp + 0x9a] */ r_eax = (u32)R16((u32)(r_esp+0x9au));
    /* 00503e94: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503e99: movzx edx, word ptr [esp + 0x9c] */ r_edx = (u32)R16((u32)(r_esp+0x9cu));
    /* 00503ea1: movzx eax, word ptr [esp + 0x9e] */ r_eax = (u32)R16((u32)(r_esp+0x9eu));
    /* 00503ea9: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503eae: movzx edx, word ptr [esp + 0xa0] */ r_edx = (u32)R16((u32)(r_esp+0xa0u));
    /* 00503eb6: movzx eax, word ptr [esp + 0xa2] */ r_eax = (u32)R16((u32)(r_esp+0xa2u));
    /* 00503ebe: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503ec3: movzx edx, word ptr [esp + 0xa4] */ r_edx = (u32)R16((u32)(r_esp+0xa4u));
    /* 00503ecb: movzx eax, word ptr [esp + 0xa6] */ r_eax = (u32)R16((u32)(r_esp+0xa6u));
    /* 00503ed3: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503ed8: movzx edx, word ptr [esp + 0xa8] */ r_edx = (u32)R16((u32)(r_esp+0xa8u));
    /* 00503ee0: movzx eax, word ptr [esp + 0xaa] */ r_eax = (u32)R16((u32)(r_esp+0xaau));
    /* 00503ee8: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503eed: movzx edx, word ptr [esp + 0xac] */ r_edx = (u32)R16((u32)(r_esp+0xacu));
    /* 00503ef5: movzx eax, word ptr [esp + 0xae] */ r_eax = (u32)R16((u32)(r_esp+0xaeu));
    /* 00503efd: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503f02: movzx edx, word ptr [esp + 0xb0] */ r_edx = (u32)R16((u32)(r_esp+0xb0u));
    /* 00503f0a: movzx eax, word ptr [esp + 0xb2] */ r_eax = (u32)R16((u32)(r_esp+0xb2u));
    /* 00503f12: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503f17: movzx edx, word ptr [esp + 0xb4] */ r_edx = (u32)R16((u32)(r_esp+0xb4u));
    /* 00503f1f: movzx eax, word ptr [esp + 0xb6] */ r_eax = (u32)R16((u32)(r_esp+0xb6u));
    /* 00503f27: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503f2c: movzx edx, word ptr [esp + 0xb8] */ r_edx = (u32)R16((u32)(r_esp+0xb8u));
    /* 00503f34: movzx eax, word ptr [esp + 0xba] */ r_eax = (u32)R16((u32)(r_esp+0xbau));
    /* 00503f3c: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503f41: movzx edx, word ptr [esp + 0xbc] */ r_edx = (u32)R16((u32)(r_esp+0xbcu));
    /* 00503f49: movzx eax, word ptr [esp + 0xbe] */ r_eax = (u32)R16((u32)(r_esp+0xbeu));
    /* 00503f51: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503f56: movzx edx, word ptr [esp + 0xc0] */ r_edx = (u32)R16((u32)(r_esp+0xc0u));
    /* 00503f5e: movzx eax, word ptr [esp + 0xc2] */ r_eax = (u32)R16((u32)(r_esp+0xc2u));
    /* 00503f66: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503f6b: movzx edx, word ptr [esp + 0xc4] */ r_edx = (u32)R16((u32)(r_esp+0xc4u));
    /* 00503f73: movzx eax, word ptr [esp + 0xc6] */ r_eax = (u32)R16((u32)(r_esp+0xc6u));
    /* 00503f7b: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503f80: movzx edx, word ptr [esp + 0xc8] */ r_edx = (u32)R16((u32)(r_esp+0xc8u));
    /* 00503f88: movzx eax, word ptr [esp + 0xca] */ r_eax = (u32)R16((u32)(r_esp+0xcau));
    /* 00503f90: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503f95: movzx edx, word ptr [esp + 0xcc] */ r_edx = (u32)R16((u32)(r_esp+0xccu));
    /* 00503f9d: movzx eax, word ptr [esp + 0xce] */ r_eax = (u32)R16((u32)(r_esp+0xceu));
    /* 00503fa5: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503faa: movzx edx, word ptr [esp + 0xd0] */ r_edx = (u32)R16((u32)(r_esp+0xd0u));
    /* 00503fb2: movzx eax, word ptr [esp + 0xd2] */ r_eax = (u32)R16((u32)(r_esp+0xd2u));
    /* 00503fba: mov word ptr [ebp + edx*2], ax */ W16((u32)(r_ebp+r_edx*2), (u16)r_eax);
    /* 00503fbf: jl 0x503c7f */ if ((fS!=fO)) goto L_00503c7f;
L_00503fc5:; BB(0x00503fc5);
    /* 00503fc5: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00503fc9: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00503fcd: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00503fd1: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00503fd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00503fd7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00503fdb: je 0x503fe2 */ if (fZ) goto L_00503fe2;
L_00503fdd:; BB(0x00503fdd);
    /* 00503fdd: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00503fe0: jmp 0x503fe5 */ goto L_00503fe5;
L_00503fe2:; BB(0x00503fe2);
    /* 00503fe2: and edi, 0xfffffffd */ {  u32 a = r_edi; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
L_00503fe5:; BB(0x00503fe5);
    /* 00503fe5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00503fe8: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00503fea: jl 0x503c56 */ if ((fS!=fO)) goto L_00503c56;
L_00503ff0:; BB(0x00503ff0);
    /* 00503ff0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00503ff2: mov eax, 0x20 */ r_eax = 0x20u;
L_00503ff7:; BB(0x00503ff7);
    /* 00503ff7: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00503ffb: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00503fff: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00504001: movzx esi, dl */ r_esi = (u32)(u8)r_edx;
    /* 00504004: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00504008: movzx ebp, al */ r_ebp = (u32)(u8)r_eax;
    /* 0050400b: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 0050400f: mov ecx, 0x20 */ r_ecx = 0x20u;
L_00504014:; BB(0x00504014);
    /* 00504014: mov edx, dword ptr [0xa72b2c] */ r_edx = R32((u32)(0xa72b2cu));
    /* 0050401a: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 0050401d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050401f: je 0x5041ad */ if (fZ) goto L_005041ad;
L_00504025:; BB(0x00504025);
    /* 00504025: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00504029: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 0050402c: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050402e: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00504031: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504033: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504035: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504037: movzx ebp, word ptr [ebp + edi*8] */ r_ebp = (u32)R16((u32)(r_ebp+r_edi*8));
L_0050403c:; BB(0x0050403c);
    /* 0050403c: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0050403f: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00504043: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504045: je 0x5041a6 */ if (fZ) goto L_005041a6;
L_0050404b:; BB(0x0050404b);
    /* 0050404b: mov edi, eax */ r_edi = r_eax;
    /* 0050404d: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00504050: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 00504054: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504056: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504059: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050405b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050405d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050405f: movzx eax, word ptr [eax + edi*8] */ r_eax = (u32)R16((u32)(r_eax+r_edi*8));
L_00504063:; BB(0x00504063);
    /* 00504063: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504065: je 0x50419f */ if (fZ) goto L_0050419f;
L_0050406b:; BB(0x0050406b);
    /* 0050406b: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0050406f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504071: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504073: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504076: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504078: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050407a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050407c: movzx esi, word ptr [esi + edi*8] */ r_esi = (u32)R16((u32)(r_esi+r_edi*8));
L_00504080:; BB(0x00504080);
    /* 00504080: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504082: je 0x504194 */ if (fZ) goto L_00504194;
L_00504088:; BB(0x00504088);
    /* 00504088: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0050408c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050408e: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504090: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00504094: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504097: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504099: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050409b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050409d: movzx edx, word ptr [edx + edi*8] */ r_edx = (u32)R16((u32)(r_edx+r_edi*8));
    /* 005040a1: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
L_005040a5:; BB(0x005040a5);
    /* 005040a5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005040a9: movzx edi, word ptr [edx + ebp*2] */ r_edi = (u32)R16((u32)(r_edx+r_ebp*2));
    /* 005040ad: mov word ptr [edx + eax*2], di */ W16((u32)(r_edx+r_eax*2), (u16)r_edi);
    /* 005040b1: movzx eax, word ptr [edx + ebp*2] */ r_eax = (u32)R16((u32)(r_edx+r_ebp*2));
    /* 005040b5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005040b8: mov word ptr [edx + esi*2], ax */ W16((u32)(r_edx+r_esi*2), (u16)r_eax);
    /* 005040bc: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 005040c0: movzx ebp, word ptr [edx + ebp*2] */ r_ebp = (u32)R16((u32)(r_edx+r_ebp*2));
    /* 005040c4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005040c7: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005040ca: mov word ptr [edx + esi*2], bp */ W16((u32)(r_edx+r_esi*2), (u16)r_ebp);
    /* 005040ce: jl 0x504014 */ if ((fS!=fO)) goto L_00504014;
L_005040d4:; BB(0x005040d4);
    /* 005040d4: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 005040d8: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 005040dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005040df: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005040e2: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005040e5: jl 0x503ff7 */ if ((fS!=fO)) goto L_00503ff7;
L_005040eb:; BB(0x005040eb);
    /* 005040eb: add esp, 0x154 */ {  u32 a = r_esp; u32 b = 0x154u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005040f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005040f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005040f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005040f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005040f5: ret  */ FN_RET(0x00503b98); r_esp += 4; return;
L_005040f6:; BB(0x005040f6);
    /* 005040f6: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 005040fa: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005040fc: mov edx, 0xff */ r_edx = 0xffu;
    /* 00504101: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504106: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0050410b: jl 0x50410f */ if ((fS!=fO)) goto L_0050410f;
L_0050410d:; BB(0x0050410d);
    /* 0050410d: mov eax, edx */ r_eax = r_edx;
L_0050410f:; BB(0x0050410f);
    /* 0050410f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00504111: jg 0x504115 */ if ((!fZ&&fS==fO)) goto L_00504115;
L_00504113:; BB(0x00504113);
    /* 00504113: mov eax, ecx */ r_eax = r_ecx;
L_00504115:; BB(0x00504115);
    /* 00504115: lea ebx, [eax] */ r_ebx = (u32)(r_eax);
    /* 00504117: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0050411a: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050411c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
L_0050411e:; BB(0x0050411e);
    /* 0050411e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00504120:; BB(0x00504120);
    /* 00504120: movzx edi, word ptr [ebp] */ r_edi = (u32)R16((u32)(r_ebp));
    /* 00504124: mov edx, edi */ r_edx = r_edi;
    /* 00504126: and edx, 0xff00 */ {  u32 a = r_edx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0050412c: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0050412f: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00504135: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504137: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 0050413a: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050413c: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 0050413f: mov edi, 0xff */ r_edi = 0xffu;
    /* 00504144: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050414a: jl 0x50414e */ if ((fS!=fO)) goto L_0050414e;
L_0050414c:; BB(0x0050414c);
    /* 0050414c: mov ecx, edi */ r_ecx = r_edi;
L_0050414e:; BB(0x0050414e);
    /* 0050414e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504150: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00504152: jg 0x504156 */ if ((!fZ&&fS==fO)) goto L_00504156;
L_00504154:; BB(0x00504154);
    /* 00504154: mov ecx, edi */ r_ecx = r_edi;
L_00504156:; BB(0x00504156);
    /* 00504156: mov edi, 0xff */ r_edi = 0xffu;
    /* 0050415b: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504161: jl 0x504165 */ if ((fS!=fO)) goto L_00504165;
L_00504163:; BB(0x00504163);
    /* 00504163: mov edx, edi */ r_edx = r_edi;
L_00504165:; BB(0x00504165);
    /* 00504165: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504167: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00504169: jg 0x50416d */ if ((!fZ&&fS==fO)) goto L_0050416d;
L_0050416b:; BB(0x0050416b);
    /* 0050416b: mov edx, edi */ r_edx = r_edi;
L_0050416d:; BB(0x0050416d);
    /* 0050416d: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00504170: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00504172: mov word ptr [ebp], cx */ W16((u32)(r_ebp), (u16)r_ecx);
    /* 00504176: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504179: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050417c: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050417f: jl 0x504120 */ if ((fS!=fO)) goto L_00504120;
L_00504181:; BB(0x00504181);
    /* 00504181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504184: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504187: jl 0x50411e */ if ((fS!=fO)) goto L_0050411e;
L_00504189:; BB(0x00504189);
    /* 00504189: add esp, 0x154 */ {  u32 a = r_esp; u32 b = 0x154u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050418f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504190: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504191: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00504192: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00504193: ret  */ FN_RET(0x00503b98); r_esp += 4; return;
L_00504194:; BB(0x00504194);
    /* 00504194: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504196: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0050419a: jmp 0x5040a5 */ goto L_005040a5;
L_0050419f:; BB(0x0050419f);
    /* 0050419f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005041a1: jmp 0x504080 */ goto L_00504080;
L_005041a6:; BB(0x005041a6);
    /* 005041a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005041a8: jmp 0x504063 */ goto L_00504063;
L_005041ad:; BB(0x005041ad);
    /* 005041ad: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005041af: jmp 0x50403c */ goto L_0050403c;
L_005041b4:; BB(0x005041b4);
    /* 005041b4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005041b6: jmp 0x503cd5 */ goto L_00503cd5;
L_005041bb:; BB(0x005041bb);
    /* 005041bb: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 005041bf: movzx ebx, dl */ r_ebx = (u32)(u8)r_edx;
    /* 005041c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005041c4: je 0x5041e2 */ if (fZ) goto L_005041e2;
L_005041c6:; BB(0x005041c6);
    /* 005041c6: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 005041ca: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005041cc: add ebx, dword ptr [esp + 0x50] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005041d0: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 005041d3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005041d5: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005041d7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005041d9: movzx ebp, word ptr [ebx + ebp*8] */ r_ebp = (u32)R16((u32)(r_ebx+r_ebp*8));
    /* 005041dd: jmp 0x503cd5 */ goto L_00503cd5;
L_005041e2:; BB(0x005041e2);
    /* 005041e2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005041e4: jmp 0x503cd5 */ goto L_00503cd5;
}

