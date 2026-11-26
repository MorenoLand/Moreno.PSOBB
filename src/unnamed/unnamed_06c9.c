#include "protos.h"

void f_006c9008(void) /* sub_6C9008 */
{
    FN_ENTER(0x006c9008);
    /* 006c9008: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c900b: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006c9011: lea edx, [ecx + 8] */ r_edx = (u32)(r_ecx+0x8u);
    /* 006c9014: lea eax, [ecx + 0x12b0] */ r_eax = (u32)(r_ecx+0x12b0u);
    /* 006c901a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c901c: jae 0x6c90b5 */ if (!fC) goto L_006c90b5;
L_006c9022:; BB(0x006c9022);
    /* 006c9022: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 006c9026: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 006c902a: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006c902e: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 006c9032: lea ecx, [edx + 0x12c0] */ r_ecx = (u32)(r_edx+0x12c0u);
    /* 006c9038: mov ebp, eax */ r_ebp = r_eax;
    /* 006c903a: mov ebx, ecx */ r_ebx = r_ecx;
L_006c903c:; BB(0x006c903c);
    /* 006c903c: movsx esi, word ptr [edx + 0x16] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x16u));
    /* 006c9040: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9042: jne 0x6c9093 */ if (!fZ) goto L_006c9093;
L_006c9044:; BB(0x006c9044);
    /* 006c9044: lea edi, [edx + 0x18] */ r_edi = (u32)(r_edx+0x18u);
    /* 006c9047: mov esi, edi */ r_esi = r_edi;
    /* 006c9049: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c904b: jae 0x6c9096 */ if (!fC) goto L_006c9096;
L_006c904d:; BB(0x006c904d);
    /* 006c904d: movsx eax, word ptr [esi + 0x16] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x16u));
    /* 006c9051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9053: jne 0x6c905e */ if (!fZ) goto L_006c905e;
L_006c9055:; BB(0x006c9055);
    /* 006c9055: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c9058: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c905a: jb 0x6c904d */ if (fC) goto L_006c904d;
L_006c905c:; BB(0x006c905c);
    /* 006c905c: jmp 0x6c9096 */ goto L_006c9096;
L_006c905e:; BB(0x006c905e);
    /* 006c905e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006c9060: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006c9062: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006c9065: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006c9068: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006c906b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006c906e: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006c9071: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006c9074: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006c9077: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006c907a: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006c907d: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006c9080: mov ecx, esi */ r_ecx = r_esi;
    /* 006c9082: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c9087u); f_005d6a3c();
    /* 006c9087: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c9089: mov word ptr [esi + 0x14], dx */ W16((u32)(r_esi+0x14u), (u16)r_edx);
    /* 006c908d: mov word ptr [esi + 0x16], dx */ W16((u32)(r_esi+0x16u), (u16)r_edx);
    /* 006c9091: jmp 0x6c9096 */ goto L_006c9096;
L_006c9093:; BB(0x006c9093);
    /* 006c9093: lea edi, [edx + 0x18] */ r_edi = (u32)(r_edx+0x18u);
L_006c9096:; BB(0x006c9096);
    /* 006c9096: mov edx, edi */ r_edx = r_edi;
    /* 006c9098: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c909a: jb 0x6c903c */ if (fC) goto L_006c903c;
L_006c909c:; BB(0x006c909c);
    /* 006c909c: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006c90a0: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006c90a4: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 006c90a8: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 006c90ac: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006c90b2: lea edx, [ecx + 8] */ r_edx = (u32)(r_ecx+0x8u);
L_006c90b5:; BB(0x006c90b5);
    /* 006c90b5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c90b7: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 006c90b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c90ba: call 0x6dbedc */ r_esp -= 4; W32(r_esp, 0x6c90bfu); f_006dbedc();
    /* 006c90bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c90c2: mov byte ptr [esp], 0xbd */ W8((u32)(r_esp), 0xbdu);
    /* 006c90c6: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006c90cb: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 006c90d0: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006c90d5: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006c90da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c90dc: mov byte ptr [esp + 0xc], 2 */ W8((u32)(r_esp+0xcu), 0x2u);
    /* 006c90e1: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006c90e5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006c90e9: mov byte ptr [esp + 0xd], dl */ W8((u32)(r_esp+0xdu), (u8)r_edx);
    /* 006c90ed: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 006c90f2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006c90f5: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6c90fau); f_00800518();
    /* 006c90fa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c90fd: ret  */ FN_RET(0x006c9008); r_esp += 4; return;
}

void f_006c9100(void) /* sub_6C9100 */
{
    FN_ENTER(0x006c9100);
    /* 006c9100: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c9103: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c9108: lea ecx, [eax + 8] */ r_ecx = (u32)(r_eax+0x8u);
    /* 006c910b: lea edx, [eax + 0x12b0] */ r_edx = (u32)(r_eax+0x12b0u);
    /* 006c9111: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c9113: jae 0x6c91a2 */ if (!fC) goto L_006c91a2;
L_006c9119:; BB(0x006c9119);
    /* 006c9119: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006c911d: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006c9120: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006c9124: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 006c9128: add eax, 0x12c8 */ {  u32 a = r_eax; u32 b = 0x12c8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c912d: mov ebx, eax */ r_ebx = r_eax;
    /* 006c912f: mov eax, ecx */ r_eax = r_ecx;
    /* 006c9131: mov ebp, edx */ r_ebp = r_edx;
L_006c9133:; BB(0x006c9133);
    /* 006c9133: movsx esi, word ptr [eax + 0x16] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x16u));
    /* 006c9137: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9139: jne 0x6c918a */ if (!fZ) goto L_006c918a;
L_006c913b:; BB(0x006c913b);
    /* 006c913b: lea edi, [eax + 0x18] */ r_edi = (u32)(r_eax+0x18u);
    /* 006c913e: mov esi, edi */ r_esi = r_edi;
    /* 006c9140: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c9142: jae 0x6c918d */ if (!fC) goto L_006c918d;
L_006c9144:; BB(0x006c9144);
    /* 006c9144: movsx edx, word ptr [esi + 0x16] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x16u));
    /* 006c9148: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c914a: jne 0x6c9155 */ if (!fZ) goto L_006c9155;
L_006c914c:; BB(0x006c914c);
    /* 006c914c: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c914f: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c9151: jb 0x6c9144 */ if (fC) goto L_006c9144;
L_006c9153:; BB(0x006c9153);
    /* 006c9153: jmp 0x6c918d */ goto L_006c918d;
L_006c9155:; BB(0x006c9155);
    /* 006c9155: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006c9157: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006c9159: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006c915c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006c915f: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 006c9162: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006c9165: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 006c9168: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 006c916b: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 006c916e: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 006c9171: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 006c9174: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 006c9177: mov ecx, esi */ r_ecx = r_esi;
    /* 006c9179: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c917eu); f_005d6a3c();
    /* 006c917e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c9180: mov word ptr [esi + 0x14], ax */ W16((u32)(r_esi+0x14u), (u16)r_eax);
    /* 006c9184: mov word ptr [esi + 0x16], ax */ W16((u32)(r_esi+0x16u), (u16)r_eax);
    /* 006c9188: jmp 0x6c918d */ goto L_006c918d;
L_006c918a:; BB(0x006c918a);
    /* 006c918a: lea edi, [eax + 0x18] */ r_edi = (u32)(r_eax+0x18u);
L_006c918d:; BB(0x006c918d);
    /* 006c918d: mov eax, edi */ r_eax = r_edi;
    /* 006c918f: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c9191: jb 0x6c9133 */ if (fC) goto L_006c9133;
L_006c9193:; BB(0x006c9193);
    /* 006c9193: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006c9197: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006c919a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006c919e: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_006c91a2:; BB(0x006c91a2);
    /* 006c91a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c91a5: ret  */ FN_RET(0x006c9100); r_esp += 4; return;
}

void f_006c91a8(void) /* sub_6C91A8 */
{
    FN_ENTER(0x006c91a8);
    /* 006c91a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c91a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c91aa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c91ad: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 006c91b1: mov ebx, dword ptr [0xa95ee0] */ r_ebx = R32((u32)(0xa95ee0u));
    /* 006c91b7: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 006c91ba: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c91bd: je 0x6c91c7 */ if (fZ) goto L_006c91c7;
L_006c91bf:; BB(0x006c91bf);
    /* 006c91bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c91c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c91c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c91c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c91c6: ret  */ FN_RET(0x006c91a8); r_esp += 4; return;
L_006c91c7:; BB(0x006c91c7);
    /* 006c91c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c91c8: call 0x6dc1e4 */ r_esp -= 4; W32(r_esp, 0x6c91cdu); f_006dc1e4();
    /* 006c91cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c91ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c91d0: jne 0x6c91da */ if (!fZ) goto L_006c91da;
L_006c91d2:; BB(0x006c91d2);
    /* 006c91d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c91d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c91d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c91d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c91d9: ret  */ FN_RET(0x006c91a8); r_esp += 4; return;
L_006c91da:; BB(0x006c91da);
    /* 006c91da: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006c91de: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006c91e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006c91e3:; BB(0x006c91e3);
    /* 006c91e3: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006c91e6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c91e8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006c91ea: movsx ebp, word ptr [ebx + eax*8 + 0x1e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*8+0x1eu));
    /* 006c91ef: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006c91f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c91f4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c91f6: lea ecx, [ecx + ebx + 8] */ r_ecx = (u32)(r_ecx+r_ebx+0x8u);
    /* 006c91fa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c91fc: je 0x6c9231 */ if (fZ) goto L_006c9231;
L_006c91fe:; BB(0x006c91fe);
    /* 006c91fe: movzx ebp, byte ptr [esi] */ r_ebp = (u32)R8((u32)(r_esi));
    /* 006c9201: movzx edi, byte ptr [ebx + eax*8 + 8] */ r_edi = (u32)R8((u32)(r_ebx+r_eax*8+0x8u));
    /* 006c9206: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9208: jne 0x6c9231 */ if (!fZ) goto L_006c9231;
L_006c920a:; BB(0x006c920a);
    /* 006c920a: movzx ebp, byte ptr [esi + 1] */ r_ebp = (u32)R8((u32)(r_esi+0x1u));
    /* 006c920e: movzx edi, byte ptr [ebx + eax*8 + 9] */ r_edi = (u32)R8((u32)(r_ebx+r_eax*8+0x9u));
    /* 006c9213: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9215: jne 0x6c9231 */ if (!fZ) goto L_006c9231;
L_006c9217:; BB(0x006c9217);
    /* 006c9217: movzx ebp, byte ptr [esi + 2] */ r_ebp = (u32)R8((u32)(r_esi+0x2u));
    /* 006c921b: movzx edi, byte ptr [ebx + eax*8 + 0xa] */ r_edi = (u32)R8((u32)(r_ebx+r_eax*8+0xau));
    /* 006c9220: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9222: jne 0x6c9231 */ if (!fZ) goto L_006c9231;
L_006c9224:; BB(0x006c9224);
    /* 006c9224: movzx ebp, byte ptr [esi + 4] */ r_ebp = (u32)R8((u32)(r_esi+0x4u));
    /* 006c9228: movzx edi, byte ptr [ebx + eax*8 + 0xc] */ r_edi = (u32)R8((u32)(r_ebx+r_eax*8+0xcu));
    /* 006c922d: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c922f: je 0x6c925f */ if (fZ) goto L_006c925f;
L_006c9231:; BB(0x006c9231);
    /* 006c9231: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c9234: cmp edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c923a: jl 0x6c91e3 */ if ((fS!=fO)) goto L_006c91e3;
L_006c923c:; BB(0x006c923c);
    /* 006c923c: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006c9240: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006c9243: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c9248: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006c924a: cmp edx, 0xc7 */ {  u32 a = r_edx; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c9250: jg 0x6c91d2 */ if ((!fZ&&fS==fO)) goto L_006c91d2;
L_006c9252:; BB(0x006c9252);
    /* 006c9252: mov ecx, esi */ r_ecx = r_esi;
    /* 006c9254: call 0x5d6430 */ r_esp -= 4; W32(r_esp, 0x6c9259u); f_005d6430();
    /* 006c9259: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c925c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c925d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c925e: ret  */ FN_RET(0x006c91a8); r_esp += 4; return;
L_006c925f:; BB(0x006c925f);
    /* 006c925f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006c9263: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006c9266: mov esi, eax */ r_esi = r_eax;
    /* 006c9268: call 0x5d6430 */ r_esp -= 4; W32(r_esp, 0x6c926du); f_005d6430();
    /* 006c926d: movsx edx, word ptr [ebx + esi*8 + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*8+0x1cu));
    /* 006c9272: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006c9274: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c9277: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c9278: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c9279: ret  */ FN_RET(0x006c91a8); r_esp += 4; return;
}

void f_006c927c(void) /* sub_6C927C */
{
    FN_ENTER(0x006c927c);
    /* 006c927c: mov edx, dword ptr [0xa95ee0] */ r_edx = R32((u32)(0xa95ee0u));
    /* 006c9282: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006c9284: cmp ecx, 0xc7 */ {  u32 a = r_ecx; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c928a: mov eax, 0 */ r_eax = 0x0u;
    /* 006c928f: setle al */ r_eax = (r_eax & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 006c9292: ret  */ FN_RET(0x006c927c); r_esp += 4; return;
}

void f_006c9294(void) /* sub_6C9294 */
{
    FN_ENTER(0x006c9294);
    /* 006c9294: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9295: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c9296: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c9298: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006c929c: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006c92a2: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006c92a5:; BB(0x006c92a5);
    /* 006c92a5: movsx ebx, word ptr [ecx + 0x16] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x16u));
    /* 006c92a9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c92ab: je 0x6c92f3 */ if (fZ) goto L_006c92f3;
L_006c92ad:; BB(0x006c92ad);
    /* 006c92ad: movzx ebx, byte ptr [ecx] */ r_ebx = (u32)R8((u32)(r_ecx));
    /* 006c92b0: movzx esi, byte ptr [edx] */ r_esi = (u32)R8((u32)(r_edx));
    /* 006c92b3: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c92b5: jne 0x6c92f3 */ if (!fZ) goto L_006c92f3;
L_006c92b7:; BB(0x006c92b7);
    /* 006c92b7: movzx ebx, byte ptr [ecx + 1] */ r_ebx = (u32)R8((u32)(r_ecx+0x1u));
    /* 006c92bb: movzx esi, byte ptr [edx + 1] */ r_esi = (u32)R8((u32)(r_edx+0x1u));
    /* 006c92bf: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c92c1: jne 0x6c92f3 */ if (!fZ) goto L_006c92f3;
L_006c92c3:; BB(0x006c92c3);
    /* 006c92c3: movzx ebx, byte ptr [ecx + 2] */ r_ebx = (u32)R8((u32)(r_ecx+0x2u));
    /* 006c92c7: movzx esi, byte ptr [edx + 2] */ r_esi = (u32)R8((u32)(r_edx+0x2u));
    /* 006c92cb: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c92cd: jne 0x6c92f3 */ if (!fZ) goto L_006c92f3;
L_006c92cf:; BB(0x006c92cf);
    /* 006c92cf: movzx ebx, byte ptr [ecx + 3] */ r_ebx = (u32)R8((u32)(r_ecx+0x3u));
    /* 006c92d3: movzx esi, byte ptr [edx + 3] */ r_esi = (u32)R8((u32)(r_edx+0x3u));
    /* 006c92d7: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c92d9: jne 0x6c92f3 */ if (!fZ) goto L_006c92f3;
L_006c92db:; BB(0x006c92db);
    /* 006c92db: movzx ebx, byte ptr [ecx + 4] */ r_ebx = (u32)R8((u32)(r_ecx+0x4u));
    /* 006c92df: movzx esi, byte ptr [edx + 4] */ r_esi = (u32)R8((u32)(r_edx+0x4u));
    /* 006c92e3: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c92e5: jne 0x6c92f3 */ if (!fZ) goto L_006c92f3;
L_006c92e7:; BB(0x006c92e7);
    /* 006c92e7: movzx ebx, byte ptr [ecx + 5] */ r_ebx = (u32)R8((u32)(r_ecx+0x5u));
    /* 006c92eb: movzx esi, byte ptr [edx + 5] */ r_esi = (u32)R8((u32)(r_edx+0x5u));
    /* 006c92ef: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c92f1: je 0x6c9305 */ if (fZ) goto L_006c9305;
L_006c92f3:; BB(0x006c92f3);
    /* 006c92f3: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c92f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c92f9: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c92fe: jl 0x6c92a5 */ if ((fS!=fO)) goto L_006c92a5;
L_006c9300:; BB(0x006c9300);
    /* 006c9300: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9302: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c9303: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c9304: ret  */ FN_RET(0x006c9294); r_esp += 4; return;
L_006c9305:; BB(0x006c9305);
    /* 006c9305: call 0x6ca398 */ r_esp -= 4; W32(r_esp, 0x6c930au); f_006ca398();
    /* 006c930a: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6c930fu); f_006c8db4();
    /* 006c930f: mov eax, 1 */ r_eax = 0x1u;
    /* 006c9314: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c9315: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c9316: ret  */ FN_RET(0x006c9294); r_esp += 4; return;
}

void f_006c9318(void) /* sub_6C9318 */
{
    FN_ENTER(0x006c9318);
    /* 006c9318: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006c931b: mov eax, dword ptr [eax*4 + 0x9cec80] */ r_eax = R32((u32)(r_eax*4+0x9cec80u));
    /* 006c9322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9324: je 0x6c9328 */ if (fZ) goto L_006c9328;
L_006c9326:; BB(0x006c9326);
    /* 006c9326: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6c9328u); call_ind(t); }
L_006c9328:; BB(0x006c9328);
    /* 006c9328: ret  */ FN_RET(0x006c9318); r_esp += 4; return;
}

void f_006c932c(void) /* sub_6C932C */
{
    FN_ENTER(0x006c932c);
    /* 006c932c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c932e: mov dword ptr [0xa95ed8], eax */ W32((u32)(0xa95ed8u), r_eax);
    /* 006c9333: mov dword ptr [0xa95ed0], eax */ W32((u32)(0xa95ed0u), r_eax);
    /* 006c9338: mov dword ptr [0xa95ecc], eax */ W32((u32)(0xa95eccu), r_eax);
    /* 006c933d: mov dword ptr [0xa95ed4], eax */ W32((u32)(0xa95ed4u), r_eax);
    /* 006c9342: mov dword ptr [0xa95edc], eax */ W32((u32)(0xa95edcu), r_eax);
    /* 006c9347: ret  */ FN_RET(0x006c932c); r_esp += 4; return;
}

void f_006c9348(void)
{
    FN_ENTER(0x006c9348);
    /* 006c9348: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c934c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c934e: je 0x6c936c */ if (fZ) goto L_006c936c;
L_006c9350:; BB(0x006c9350);
    /* 006c9350: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c9354: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9356: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9358: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006c935a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006c935e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9361u); call_ind(t); }
    /* 006c9361: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c9365: mov dword ptr [eax + 0x20], 3 */ W32((u32)(r_eax+0x20u), 0x3u);
L_006c936c:; BB(0x006c936c);
    /* 006c936c: ret  */ FN_RET(0x006c9348); r_esp += 4; return;
}

void f_006c9370(void) /* sub_6C9370 */
{
    FN_ENTER(0x006c9370);
    /* 006c9370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c9371: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006c9375: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9377: je 0x6c938c */ if (fZ) goto L_006c938c;
L_006c9379:; BB(0x006c9379);
    /* 006c9379: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c937b: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006c937d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006c9380: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c9382: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9385u); call_ind(t); }
    /* 006c9385: mov dword ptr [ebp + 0x20], 3 */ W32((u32)(r_ebp+0x20u), 0x3u);
L_006c938c:; BB(0x006c938c);
    /* 006c938c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c938d: ret  */ FN_RET(0x006c9370); r_esp += 4; return;
}

void f_006c9390(void) /* sub_6C9390 */
{
    FN_ENTER(0x006c9390);
    /* 006c9390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c9391: mov ebp, esp */ r_ebp = r_esp;
    /* 006c9393: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c9395: push 0x8ed630 */ { u32 v = 0x8ed630u; r_esp -= 4; W32(r_esp, v); }
    /* 006c939a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c93a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c93a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c93a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c93ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c93ae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006c93b1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006c93b4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006c93b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006c93ba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c93bd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006c93c0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c93c3: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6c93c8u); f_006dc410();
    /* 006c93c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c93cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c93d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c93d5: mov dword ptr [ecx], 0xb3b880 */ W32((u32)(r_ecx), 0xb3b880u);
    /* 006c93db: mov eax, dword ptr [0x9cecd4] */ r_eax = R32((u32)(0x9cecd4u));
    /* 006c93e0: mov dword ptr [0xa95edc], 1 */ W32((u32)(0xa95edcu), 0x1u);
    /* 006c93ea: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006c93ed: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006c93f0: mov dword ptr [0xa95ed4], ecx */ W32((u32)(0xa95ed4u), r_ecx);
    /* 006c93f6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006c93f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c93f9: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006c93fc: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 006c93ff: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 006c9402: mov dword ptr [ecx + 0x40], ebx */ W32((u32)(r_ecx+0x40u), r_ebx);
    /* 006c9405: mov dword ptr [ecx + 0x44], ebx */ W32((u32)(r_ecx+0x44u), r_ebx);
    /* 006c9408: mov dword ptr [ecx + 0x48], ebx */ W32((u32)(r_ecx+0x48u), r_ebx);
    /* 006c940b: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006c940e: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006c9411: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006c9414: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6c9419u); f_00791748();
    /* 006c9419: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c941a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c941d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c9420: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c9423: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c942a: mov esp, ebp */ r_esp = r_ebp;
    /* 006c942c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c942d: ret 8 */ FN_RET(0x006c9390); r_esp += 12; return;
}

void f_006c9430(void) /* sub_6C9430 */
{
    FN_ENTER(0x006c9430);
    /* 006c9430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c9431: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9432: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c9434: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006c9437: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9439: jne 0x6c9450 */ if (!fZ) goto L_006c9450;
L_006c943b:; BB(0x006c943b);
    /* 006c943b: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 006c943e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9440: je 0x6c94d2 */ if (fZ) goto L_006c94d2;
L_006c9446:; BB(0x006c9446);
    /* 006c9446: mov dword ptr [ebp + 0x2c], 1 */ W32((u32)(r_ebp+0x2cu), 0x1u);
    /* 006c944d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c944e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c944f: ret  */ FN_RET(0x006c9430); r_esp += 4; return;
L_006c9450:; BB(0x006c9450);
    /* 006c9450: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c9453: jne 0x6c94cf */ if (!fZ) goto L_006c94cf;
L_006c9455:; BB(0x006c9455);
    /* 006c9455: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9458: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c945a: je 0x6c949d */ if (fZ) goto L_006c949d;
L_006c945c:; BB(0x006c945c);
    /* 006c945c: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006c9463: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c9465: je 0x6c949d */ if (fZ) goto L_006c949d;
L_006c9467:; BB(0x006c9467);
    /* 006c9467: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6c946cu); f_007365f4();
    /* 006c946c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c946e: je 0x6c947e */ if (fZ) goto L_006c947e;
L_006c9470:; BB(0x006c9470);
    /* 006c9470: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9473: je 0x6c956a */ if (fZ) goto L_006c956a;
L_006c9479:; BB(0x006c9479);
    /* 006c9479: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c947c: jmp 0x6c9496 */ goto L_006c9496;
L_006c947e:; BB(0x006c947e);
    /* 006c947e: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9481: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
    /* 006c9488: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c948du); f_007127b0();
    /* 006c948d: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 006c9494: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006c9496:; BB(0x006c9496);
    /* 006c9496: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
L_006c949d:; BB(0x006c949d);
    /* 006c949d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c949f: je 0x6c94cf */ if (fZ) goto L_006c94cf;
L_006c94a1:; BB(0x006c94a1);
    /* 006c94a1: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006c94a8: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c94aa: je 0x6c94cf */ if (fZ) goto L_006c94cf;
L_006c94ac:; BB(0x006c94ac);
    /* 006c94ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c94ae: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006c94b0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006c94b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c94b5: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c94b8u); call_ind(t); }
    /* 006c94b8: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c94bb: mov dword ptr [ebp + 0x20], 0xe */ W32((u32)(r_ebp+0x20u), 0xeu);
    /* 006c94c2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c94c7u); f_007127b0();
    /* 006c94c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c94c9: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 006c94cc: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
L_006c94cf:; BB(0x006c94cf);
    /* 006c94cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c94d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c94d1: ret  */ FN_RET(0x006c9430); r_esp += 4; return;
L_006c94d2:; BB(0x006c94d2);
    /* 006c94d2: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006c94d4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6c94d9u); f_0073ec50();
    /* 006c94d9: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006c94dc: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006c94e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c94e1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c94e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c94e4: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6c94e9u); f_007354fc();
    /* 006c94e9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c94eb: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 006c94ee: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6c94f3u); f_006dbdb8();
    /* 006c94f3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c94f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c94f8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006c94fa: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c94fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c94fe: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6c9503u); f_00735c90();
    /* 006c9503: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9505: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6c950au); f_006dbdb8();
    /* 006c950a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c950b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c950d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006c950f: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9512: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c9513: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6c9518u); f_00735c90();
    /* 006c9518: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c951b: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6c9520u); f_0073608c();
    /* 006c9520: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9523: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6c9528u); f_00736458();
    /* 006c9528: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006c952b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006c9532: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c9537: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006c953e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c9540: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6c9545u); f_006dc8d8();
    /* 006c9545: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006c9548: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c954a: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6c954fu); f_006dc8d8();
    /* 006c954f: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9552: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c9555: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006c9559: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006c955c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006c9560: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6c9565u); f_0070f5a4();
    /* 006c9565: jmp 0x6c9446 */ goto L_006c9446;
L_006c956a:; BB(0x006c956a);
    /* 006c956a: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c956d: mov dword ptr [ebp + 0x20], 0xb */ W32((u32)(r_ebp+0x20u), 0xbu);
    /* 006c9574: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c9579u); f_007127b0();
    /* 006c9579: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 006c9580: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006c9582: jmp 0x6c9496 */ goto L_006c9496;
}

void f_006c9588(void) /* sub_6C9588 */
{
    FN_ENTER(0x006c9588);
    /* 006c9588: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c9589: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c958a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c958c: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006c958f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9591: jne 0x6c95b4 */ if (!fZ) goto L_006c95b4;
L_006c9593:; BB(0x006c9593);
    /* 006c9593: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 006c9596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9598: je 0x6c9636 */ if (fZ) goto L_006c9636;
L_006c959e:; BB(0x006c959e);
    /* 006c959e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c95a0: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 006c95a2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006c95a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c95a7: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c95aau); call_ind(t); }
    /* 006c95aa: mov dword ptr [ebp + 0x2c], 1 */ W32((u32)(r_ebp+0x2cu), 0x1u);
    /* 006c95b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c95b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c95b3: ret  */ FN_RET(0x006c9588); r_esp += 4; return;
L_006c95b4:; BB(0x006c95b4);
    /* 006c95b4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c95b7: jne 0x6c9633 */ if (!fZ) goto L_006c9633;
L_006c95b9:; BB(0x006c95b9);
    /* 006c95b9: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c95bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c95be: je 0x6c9601 */ if (fZ) goto L_006c9601;
L_006c95c0:; BB(0x006c95c0);
    /* 006c95c0: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006c95c7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c95c9: je 0x6c9601 */ if (fZ) goto L_006c9601;
L_006c95cb:; BB(0x006c95cb);
    /* 006c95cb: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6c95d0u); f_007365f4();
    /* 006c95d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c95d2: je 0x6c95e2 */ if (fZ) goto L_006c95e2;
L_006c95d4:; BB(0x006c95d4);
    /* 006c95d4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c95d7: je 0x6c96ce */ if (fZ) goto L_006c96ce;
L_006c95dd:; BB(0x006c95dd);
    /* 006c95dd: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c95e0: jmp 0x6c95fa */ goto L_006c95fa;
L_006c95e2:; BB(0x006c95e2);
    /* 006c95e2: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c95e5: mov dword ptr [ebp + 0x20], 7 */ W32((u32)(r_ebp+0x20u), 0x7u);
    /* 006c95ec: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c95f1u); f_007127b0();
    /* 006c95f1: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 006c95f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006c95fa:; BB(0x006c95fa);
    /* 006c95fa: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
L_006c9601:; BB(0x006c9601);
    /* 006c9601: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9603: je 0x6c9633 */ if (fZ) goto L_006c9633;
L_006c9605:; BB(0x006c9605);
    /* 006c9605: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006c960c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c960e: je 0x6c9633 */ if (fZ) goto L_006c9633;
L_006c9610:; BB(0x006c9610);
    /* 006c9610: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9612: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9614: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006c9617: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c9619: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c961cu); call_ind(t); }
    /* 006c961c: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c961f: mov dword ptr [ebp + 0x20], 3 */ W32((u32)(r_ebp+0x20u), 0x3u);
    /* 006c9626: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c962bu); f_007127b0();
    /* 006c962b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c962d: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 006c9630: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
L_006c9633:; BB(0x006c9633);
    /* 006c9633: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c9634: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c9635: ret  */ FN_RET(0x006c9588); r_esp += 4; return;
L_006c9636:; BB(0x006c9636);
    /* 006c9636: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006c9638: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6c963du); f_0073ec50();
    /* 006c963d: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006c9640: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006c9644: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c9645: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9647: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c9648: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6c964du); f_007354fc();
    /* 006c964d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c964f: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 006c9652: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6c9657u); f_006dbdb8();
    /* 006c9657: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c965a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c965c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006c965e: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c9662: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6c9667u); f_00735c90();
    /* 006c9667: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9669: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6c966eu); f_006dbdb8();
    /* 006c966e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c966f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9671: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9673: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c9677: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6c967cu); f_00735c90();
    /* 006c967c: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c967f: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6c9684u); f_0073608c();
    /* 006c9684: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9687: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6c968cu); f_00736458();
    /* 006c968c: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006c968f: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006c9696: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c969b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006c96a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c96a4: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6c96a9u); f_006dc8d8();
    /* 006c96a9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006c96ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c96ae: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6c96b3u); f_006dc8d8();
    /* 006c96b3: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c96b6: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c96b9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006c96bd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006c96c0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006c96c4: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6c96c9u); f_0070f5a4();
    /* 006c96c9: jmp 0x6c959e */ goto L_006c959e;
L_006c96ce:; BB(0x006c96ce);
    /* 006c96ce: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c96d1: mov dword ptr [ebp + 0x20], 5 */ W32((u32)(r_ebp+0x20u), 0x5u);
    /* 006c96d8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c96ddu); f_007127b0();
    /* 006c96dd: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 006c96e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006c96e6: jmp 0x6c95fa */ goto L_006c95fa;
}

void f_006c96ec(void) /* sub_6C96EC */
{
    FN_ENTER(0x006c96ec);
    /* 006c96ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c96ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c96ee: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c96f0: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006c96f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c96f5: jne 0x6c9718 */ if (!fZ) goto L_006c9718;
L_006c96f7:; BB(0x006c96f7);
    /* 006c96f7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 006c96fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c96fc: je 0x6c979a */ if (fZ) goto L_006c979a;
L_006c9702:; BB(0x006c9702);
    /* 006c9702: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9704: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9706: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006c9709: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c970b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c970eu); call_ind(t); }
    /* 006c970e: mov dword ptr [ebp + 0x2c], 1 */ W32((u32)(r_ebp+0x2cu), 0x1u);
    /* 006c9715: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c9716: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c9717: ret  */ FN_RET(0x006c96ec); r_esp += 4; return;
L_006c9718:; BB(0x006c9718);
    /* 006c9718: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c971b: jne 0x6c9797 */ if (!fZ) goto L_006c9797;
L_006c971d:; BB(0x006c971d);
    /* 006c971d: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9720: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9722: je 0x6c9765 */ if (fZ) goto L_006c9765;
L_006c9724:; BB(0x006c9724);
    /* 006c9724: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006c972b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c972d: je 0x6c9765 */ if (fZ) goto L_006c9765;
L_006c972f:; BB(0x006c972f);
    /* 006c972f: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6c9734u); f_007365f4();
    /* 006c9734: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9736: je 0x6c9746 */ if (fZ) goto L_006c9746;
L_006c9738:; BB(0x006c9738);
    /* 006c9738: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c973b: je 0x6c9832 */ if (fZ) goto L_006c9832;
L_006c9741:; BB(0x006c9741);
    /* 006c9741: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9744: jmp 0x6c975e */ goto L_006c975e;
L_006c9746:; BB(0x006c9746);
    /* 006c9746: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9749: mov dword ptr [ebp + 0x20], 8 */ W32((u32)(r_ebp+0x20u), 0x8u);
    /* 006c9750: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c9755u); f_007127b0();
    /* 006c9755: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 006c975c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006c975e:; BB(0x006c975e);
    /* 006c975e: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
L_006c9765:; BB(0x006c9765);
    /* 006c9765: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9767: je 0x6c9797 */ if (fZ) goto L_006c9797;
L_006c9769:; BB(0x006c9769);
    /* 006c9769: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006c9770: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9772: je 0x6c9797 */ if (fZ) goto L_006c9797;
L_006c9774:; BB(0x006c9774);
    /* 006c9774: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9776: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9778: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006c977b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c977d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9780u); call_ind(t); }
    /* 006c9780: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9783: mov dword ptr [ebp + 0x20], 3 */ W32((u32)(r_ebp+0x20u), 0x3u);
    /* 006c978a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c978fu); f_007127b0();
    /* 006c978f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9791: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 006c9794: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
L_006c9797:; BB(0x006c9797);
    /* 006c9797: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c9798: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c9799: ret  */ FN_RET(0x006c96ec); r_esp += 4; return;
L_006c979a:; BB(0x006c979a);
    /* 006c979a: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006c979c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6c97a1u); f_0073ec50();
    /* 006c97a1: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006c97a4: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006c97a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c97a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c97ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c97ac: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6c97b1u); f_007354fc();
    /* 006c97b1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c97b3: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 006c97b6: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6c97bbu); f_006dbdb8();
    /* 006c97bb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c97be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c97c0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006c97c2: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c97c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c97c6: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6c97cbu); f_00735c90();
    /* 006c97cb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006c97cd: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6c97d2u); f_006dbdb8();
    /* 006c97d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c97d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c97d5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006c97d7: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c97da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c97db: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6c97e0u); f_00735c90();
    /* 006c97e0: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c97e3: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6c97e8u); f_0073608c();
    /* 006c97e8: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c97eb: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6c97f0u); f_00736458();
    /* 006c97f0: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 006c97f3: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006c97fa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c97ff: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006c9806: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c9808: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6c980du); f_006dc8d8();
    /* 006c980d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006c9810: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c9812: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6c9817u); f_006dc8d8();
    /* 006c9817: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c981a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c981d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006c9821: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006c9824: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006c9828: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6c982du); f_0070f5a4();
    /* 006c982d: jmp 0x6c9702 */ goto L_006c9702;
L_006c9832:; BB(0x006c9832);
    /* 006c9832: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006c9835: mov dword ptr [ebp + 0x20], 0xa */ W32((u32)(r_ebp+0x20u), 0xau);
    /* 006c983c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c9841u); f_007127b0();
    /* 006c9841: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 006c9848: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006c984a: jmp 0x6c975e */ goto L_006c975e;
}

void f_006c9850(void) /* sub_6C9850 */
{
    FN_ENTER(0x006c9850);
    /* 006c9850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c9851: mov ebp, esp */ r_ebp = r_esp;
    /* 006c9853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c9855: push 0x8ed658 */ { u32 v = 0x8ed658u; r_esp -= 4; W32(r_esp, v); }
    /* 006c985a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c9860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c9861: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c9868: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c986b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c986e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006c9871: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006c9874: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006c9877: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006c987a: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c987f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006c9881: cmp edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c9887: jle 0x6c98be */ if ((fZ||fS!=fO)) goto L_006c98be;
L_006c9889:; BB(0x006c9889);
    /* 006c9889: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c988b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c988d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c988f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9892u); call_ind(t); }
    /* 006c9892: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9895: mov dword ptr [0xa95ed0], 0x46 */ W32((u32)(0xa95ed0u), 0x46u);
    /* 006c989f: mov dword ptr [0xa95ecc], 3 */ W32((u32)(0xa95eccu), 0x3u);
    /* 006c98a9: mov dword ptr [eax + 0x20], 0x11 */ W32((u32)(r_eax+0x20u), 0x11u);
    /* 006c98b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c98b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c98ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006c98bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c98bd: ret  */ FN_RET(0x006c9850); r_esp += 4; return;
L_006c98be:; BB(0x006c98be);
    /* 006c98be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c98c0: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 006c98c2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c98c4: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c98c7u); call_ind(t); }
    /* 006c98c7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006c98ce: push 0x39c */ { u32 v = 0x39cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c98d3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c98d8u); f_005caba4();
    /* 006c98d8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c98db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c98de: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006c98e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c98e3: je 0x6c994a */ if (fZ) goto L_006c994a;
L_006c98e5:; BB(0x006c98e5);
    /* 006c98e5: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006c98ec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c98f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c98f6: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c98f9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c98fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c98fd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c9903: call 0x6da468 */ r_esp -= 4; W32(r_esp, 0x6c9908u); f_006da468();
    /* 006c9908: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006c990f:; BB(0x006c990f);
    /* 006c990f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c9916: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c9919: mov dword ptr [eax + 0x394], 0x6c9348 */ W32((u32)(r_eax+0x394u), 0x6c9348u);
    /* 006c9923: mov dword ptr [eax + 0x398], 0x6ca27c */ W32((u32)(r_eax+0x398u), 0x6ca27cu);
    /* 006c992d: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6c9932u); f_007bebe8();
    /* 006c9932: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9935: mov dword ptr [eax + 0x20], 0x12 */ W32((u32)(r_eax+0x20u), 0x12u);
    /* 006c993c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c993f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c9946: mov esp, ebp */ r_esp = r_ebp;
    /* 006c9948: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c9949: ret  */ FN_RET(0x006c9850); r_esp += 4; return;
L_006c994a:; BB(0x006c994a);
    /* 006c994a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c994c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c994f: jmp 0x6c990f */ goto L_006c990f;
}

void f_006c9954(void) /* sub_6C9954 */
{
    FN_ENTER(0x006c9954);
    /* 006c9954: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9955: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c9958: mov esi, ecx */ r_esi = r_ecx;
    /* 006c995a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006c995c: mov ecx, esi */ r_ecx = r_esi;
    /* 006c995e: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6c9961u); call_ind(t); }
    /* 006c9961: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9963: jne 0x6c996a */ if (!fZ) goto L_006c996a;
L_006c9965:; BB(0x006c9965);
    /* 006c9965: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c9968: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c9969: ret  */ FN_RET(0x006c9954); r_esp += 4; return;
L_006c996a:; BB(0x006c996a);
    /* 006c996a: mov ecx, esi */ r_ecx = r_esi;
    /* 006c996c: call 0x6dc8fc */ r_esp -= 4; W32(r_esp, 0x6c9971u); f_006dc8fc();
    /* 006c9971: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9973: je 0x6c99e5 */ if (fZ) goto L_006c99e5;
L_006c9975:; BB(0x006c9975);
    /* 006c9975: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c997au); f_00415cec();
    /* 006c997a: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c997d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c997e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c9983u); f_006dc358();
    /* 006c9983: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c9984: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9986: je 0x6c998d */ if (fZ) goto L_006c998d;
L_006c9988:; BB(0x006c9988);
    /* 006c9988: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c998b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c998c: ret  */ FN_RET(0x006c9954); r_esp += 4; return;
L_006c998d:; BB(0x006c998d);
    /* 006c998d: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6c9992u); f_006c8db4();
    /* 006c9992: mov ecx, esi */ r_ecx = r_esi;
    /* 006c9994: call 0x6dc500 */ r_esp -= 4; W32(r_esp, 0x6c9999u); f_006dc500();
    /* 006c9999: mov ecx, esi */ r_ecx = r_esi;
    /* 006c999b: call 0x6dc4b0 */ r_esp -= 4; W32(r_esp, 0x6c99a0u); f_006dc4b0();
    /* 006c99a0: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006c99a4: mov byte ptr [esp], 0xbd */ W8((u32)(r_esp), 0xbdu);
    /* 006c99a8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c99ad: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 006c99b1: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006c99b6: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 006c99bb: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 006c99c0: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006c99c5: mov word ptr [esp + 2], si */ W16((u32)(r_esp+0x2u), (u16)r_esi);
    /* 006c99ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c99cc: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006c99d0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006c99d4: mov byte ptr [esp + 0xd], dl */ W8((u32)(r_esp+0xdu), (u8)r_edx);
    /* 006c99d8: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 006c99dd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006c99e0: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6c99e5u); f_00800518();
L_006c99e5:; BB(0x006c99e5);
    /* 006c99e5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c99e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c99e9: ret  */ FN_RET(0x006c9954); r_esp += 4; return;
}

void f_006c99ec(void) /* sub_6C99EC */
{
    FN_ENTER(0x006c99ec);
    /* 006c99ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c99ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006c99ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c99f1: push 0x8ed680 */ { u32 v = 0x8ed680u; r_esp -= 4; W32(r_esp, v); }
    /* 006c99f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c99fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c99fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c9a04: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c9a07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c9a0a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006c9a0d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006c9a10: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006c9a13: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006c9a16: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c9a1b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006c9a1e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006c9a20: add edx, 0xf423f */ {  u32 a = r_edx; u32 b = 0xf423fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c9a26: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c9a28: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006c9a2b: jle 0x6c9b67 */ if ((fZ||fS!=fO)) goto L_006c9b67;
L_006c9a31:; BB(0x006c9a31);
    /* 006c9a31: mov eax, ecx */ r_eax = r_ecx;
    /* 006c9a33: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006c9a36: mov ecx, dword ptr [edx + 0x2b4] */ r_ecx = R32((u32)(r_edx+0x2b4u));
    /* 006c9a3c: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006c9a3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c9a41: jle 0x6c9b38 */ if ((fZ||fS!=fO)) goto L_006c9b38;
L_006c9a47:; BB(0x006c9a47);
    /* 006c9a47: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c9a4a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c9a4c: jl 0x6c9a50 */ if ((fS!=fO)) goto L_006c9a50;
L_006c9a4e:; BB(0x006c9a4e);
    /* 006c9a4e: mov edx, eax */ r_edx = r_eax;
L_006c9a50:; BB(0x006c9a50);
    /* 006c9a50: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9a53: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006c9a56: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006c9a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9a5b: je 0x6c9a8f */ if (fZ) goto L_006c9a8f;
L_006c9a5d:; BB(0x006c9a5d);
    /* 006c9a5d: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6c9a62u); f_007bebe8();
    /* 006c9a62: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9a65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9a67: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9a69: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c9a6b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9a6eu); call_ind(t); }
    /* 006c9a6e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9a71: mov dword ptr [eax + 0x20], 6 */ W32((u32)(r_eax+0x20u), 0x6u);
L_006c9a78:; BB(0x006c9a78);
    /* 006c9a78: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006c9a7b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c9a7e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c9a81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c9a84: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c9a8b: mov esp, ebp */ r_esp = r_ebp;
    /* 006c9a8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c9a8e: ret  */ FN_RET(0x006c99ec); r_esp += 4; return;
L_006c9a8f:; BB(0x006c9a8f);
    /* 006c9a8f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006c9a96: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9a9b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c9aa0u); f_005caba4();
    /* 006c9aa0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006c9aa3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c9aa6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006c9aa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9aab: je 0x6c9b31 */ if (fZ) goto L_006c9b31;
L_006c9ab1:; BB(0x006c9ab1);
    /* 006c9ab1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006c9ab8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c9abf: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006c9ac1: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6c9ac6u); f_0073ec50();
    /* 006c9ac6: mov ebx, eax */ r_ebx = r_eax;
    /* 006c9ac8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c9acb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9ace: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6c9ad3u); f_006dc9ec();
    /* 006c9ad3: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c9ad6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c9ad9: mov edi, 1 */ r_edi = 0x1u;
    /* 006c9ade: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006c9ae1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c9ae2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9ae3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9ae4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9ae5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c9ae6: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x6c9aebu); f_00728ac4();
    /* 006c9aeb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006c9af2:; BB(0x006c9af2);
    /* 006c9af2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c9af5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9af8: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006c9afb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c9b02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9b04: je 0x6c9a5d */ if (fZ) goto L_006c9a5d;
L_006c9b0a:; BB(0x006c9b0a);
    /* 006c9b0a: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6c9b0fu); f_0078b208();
    /* 006c9b0f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c9b12: jle 0x6c9a5d */ if ((fZ||fS!=fO)) goto L_006c9a5d;
L_006c9b18:; BB(0x006c9b18);
    /* 006c9b18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9b1b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006c9b1e: mov dword ptr [edx + 0x78], 0x3f400000 */ W32((u32)(r_edx+0x78u), 0x3f400000u);
    /* 006c9b25: mov dword ptr [edx + 0x7c], 0x3f400000 */ W32((u32)(r_edx+0x7cu), 0x3f400000u);
    /* 006c9b2c: jmp 0x6c9a5d */ goto L_006c9a5d;
L_006c9b31:; BB(0x006c9b31);
    /* 006c9b31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c9b33: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006c9b36: jmp 0x6c9af2 */ goto L_006c9af2;
L_006c9b38:; BB(0x006c9b38);
    /* 006c9b38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9b3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9b3d: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9b3f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c9b41: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9b44u); call_ind(t); }
    /* 006c9b44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9b47: mov dword ptr [0xa95ed0], 0x46 */ W32((u32)(0xa95ed0u), 0x46u);
    /* 006c9b51: mov dword ptr [0xa95ecc], 3 */ W32((u32)(0xa95eccu), 0x3u);
    /* 006c9b5b: mov dword ptr [eax + 0x20], 0x11 */ W32((u32)(r_eax+0x20u), 0x11u);
    /* 006c9b62: jmp 0x6c9a78 */ goto L_006c9a78;
L_006c9b67:; BB(0x006c9b67);
    /* 006c9b67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9b69: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9b6b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c9b6d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9b70u); call_ind(t); }
    /* 006c9b70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9b73: mov dword ptr [0xa95ed0], 0x46 */ W32((u32)(0xa95ed0u), 0x46u);
    /* 006c9b7d: mov dword ptr [0xa95ecc], 3 */ W32((u32)(0xa95eccu), 0x3u);
    /* 006c9b87: mov dword ptr [eax + 0x20], 0x11 */ W32((u32)(r_eax+0x20u), 0x11u);
    /* 006c9b8e: jmp 0x6c9a78 */ goto L_006c9a78;
}

void f_006c9b94(void) /* sub_6C9B94 */
{
    FN_ENTER(0x006c9b94);
    /* 006c9b94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9b95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c9b96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9b97: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c9b99: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 006c9b9c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9b9e: je 0x6c9bf7 */ if (fZ) goto L_006c9bf7;
L_006c9ba0:; BB(0x006c9ba0);
    /* 006c9ba0: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 006c9ba4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c9ba6: je 0x6c9bf7 */ if (fZ) goto L_006c9bf7;
L_006c9ba8:; BB(0x006c9ba8);
    /* 006c9ba8: mov esi, dword ptr [edx + 0x70] */ r_esi = R32((u32)(r_edx+0x70u));
    /* 006c9bab: mov eax, esi */ r_eax = r_esi;
    /* 006c9bad: call 0x6c9c2c */ r_esp -= 4; W32(r_esp, 0x6c9bb2u); f_006c9c2c();
    /* 006c9bb2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9bb3: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006c9bb6: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x6c9bbbu); f_007772bc();
    /* 006c9bbb: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6c9bc0u); f_006c8db4();
    /* 006c9bc0: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 006c9bc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9bc5: je 0x6c9bd4 */ if (fZ) goto L_006c9bd4;
L_006c9bc7:; BB(0x006c9bc7);
    /* 006c9bc7: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c9bcc: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c9bcf: call 0x73f040 */ r_esp -= 4; W32(r_esp, 0x6c9bd4u); f_0073f040();
L_006c9bd4:; BB(0x006c9bd4);
    /* 006c9bd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9bd6: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9bd8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006c9bda: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c9bdc: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9bdfu); call_ind(t); }
    /* 006c9bdf: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006c9be2: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006c9be9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c9beeu); f_007127b0();
    /* 006c9bee: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
    /* 006c9bf5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006c9bf7:; BB(0x006c9bf7);
    /* 006c9bf7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9bf9: je 0x6c9c24 */ if (fZ) goto L_006c9c24;
L_006c9bfb:; BB(0x006c9bfb);
    /* 006c9bfb: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 006c9bff: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9c01: je 0x6c9c24 */ if (fZ) goto L_006c9c24;
L_006c9c03:; BB(0x006c9c03);
    /* 006c9c03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9c05: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9c07: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006c9c09: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c9c0b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9c0eu); call_ind(t); }
    /* 006c9c0e: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006c9c11: mov dword ptr [ebx + 0x20], 4 */ W32((u32)(r_ebx+0x20u), 0x4u);
    /* 006c9c18: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c9c1du); f_007127b0();
    /* 006c9c1d: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
L_006c9c24:; BB(0x006c9c24);
    /* 006c9c24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c9c25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c9c26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c9c27: ret  */ FN_RET(0x006c9b94); r_esp += 4; return;
}

void f_006c9c2c(void) /* sub_6C9C2C */
{
    FN_ENTER(0x006c9c2c);
    /* 006c9c2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9c2d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c9c30: mov esi, eax */ r_esi = r_eax;
    /* 006c9c32: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006c9c34: mov byte ptr [esp], 0xbd */ W8((u32)(r_esp), 0xbdu);
    /* 006c9c38: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006c9c3d: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 006c9c42: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006c9c47: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006c9c4c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006c9c50: mov byte ptr [esp + 0xd], cl */ W8((u32)(r_esp+0xdu), (u8)r_ecx);
    /* 006c9c54: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 006c9c59: mov byte ptr [esp + 0xc], cl */ W8((u32)(r_esp+0xcu), (u8)r_ecx);
    /* 006c9c5d: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006c9c61: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006c9c64: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6c9c69u); f_00800518();
    /* 006c9c69: mov edx, dword ptr [0xa95ee0] */ r_edx = R32((u32)(0xa95ee0u));
    /* 006c9c6f: add dword ptr [edx + 4], esi */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c9c72: mov eax, 1 */ r_eax = 0x1u;
    /* 006c9c77: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c9c7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c9c7b: ret  */ FN_RET(0x006c9c2c); r_esp += 4; return;
}

void f_006c9c7c(void) /* sub_6C9C7C */
{
    FN_ENTER(0x006c9c7c);
    /* 006c9c7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c9c7d: mov ebp, esp */ r_ebp = r_esp;
    /* 006c9c7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c9c81: push 0x8ed6a8 */ { u32 v = 0x8ed6a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9c86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c9c8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c9c8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c9c94: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c9c97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c9c9a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006c9c9d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006c9ca0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006c9ca3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006c9ca6: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c9cab: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006c9cae: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c9cb0: jle 0x6c9de6 */ if ((fZ||fS!=fO)) goto L_006c9de6;
L_006c9cb6:; BB(0x006c9cb6);
    /* 006c9cb6: mov eax, ecx */ r_eax = r_ecx;
    /* 006c9cb8: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006c9cbb: mov ecx, dword ptr [edx + 0x2b4] */ r_ecx = R32((u32)(r_edx+0x2b4u));
    /* 006c9cc1: mov esi, dword ptr [ecx + 0x20] */ r_esi = R32((u32)(r_ecx+0x20u));
    /* 006c9cc4: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c9cc6: add esi, 0xf423f */ {  u32 a = r_esi; u32 b = 0xf423fu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c9ccc: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c9cce: jl 0x6c9cd2 */ if ((fS!=fO)) goto L_006c9cd2;
L_006c9cd0:; BB(0x006c9cd0);
    /* 006c9cd0: mov esi, ebx */ r_esi = r_ebx;
L_006c9cd2:; BB(0x006c9cd2);
    /* 006c9cd2: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c9cd5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c9cd7: jle 0x6c9db8 */ if ((fZ||fS!=fO)) goto L_006c9db8;
L_006c9cdd:; BB(0x006c9cdd);
    /* 006c9cdd: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006c9ce0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9ce2: je 0x6c9d16 */ if (fZ) goto L_006c9d16;
L_006c9ce4:; BB(0x006c9ce4);
    /* 006c9ce4: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6c9ce9u); f_007bebe8();
    /* 006c9ce9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9cec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9cee: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 006c9cf0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c9cf2: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9cf5u); call_ind(t); }
    /* 006c9cf5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9cf8: mov dword ptr [eax + 0x20], 0xd */ W32((u32)(r_eax+0x20u), 0xdu);
L_006c9cff:; BB(0x006c9cff);
    /* 006c9cff: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006c9d02: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c9d05: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c9d08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c9d0b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c9d12: mov esp, ebp */ r_esp = r_ebp;
    /* 006c9d14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c9d15: ret  */ FN_RET(0x006c9c7c); r_esp += 4; return;
L_006c9d16:; BB(0x006c9d16);
    /* 006c9d16: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006c9d1d: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9d22: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c9d27u); f_005caba4();
    /* 006c9d27: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006c9d2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c9d2d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006c9d30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9d32: je 0x6c9db1 */ if (fZ) goto L_006c9db1;
L_006c9d34:; BB(0x006c9d34);
    /* 006c9d34: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006c9d3b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c9d42: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006c9d44: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6c9d49u); f_0073ec50();
    /* 006c9d49: mov ebx, eax */ r_ebx = r_eax;
    /* 006c9d4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c9d4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9d51: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6c9d56u); f_006dc9ec();
    /* 006c9d56: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c9d59: mov edi, 1 */ r_edi = 0x1u;
    /* 006c9d5e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006c9d61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c9d62: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9d63: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9d64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9d65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c9d66: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x6c9d6bu); f_00728ac4();
    /* 006c9d6b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006c9d72:; BB(0x006c9d72);
    /* 006c9d72: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c9d75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9d78: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006c9d7b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c9d82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9d84: je 0x6c9ce4 */ if (fZ) goto L_006c9ce4;
L_006c9d8a:; BB(0x006c9d8a);
    /* 006c9d8a: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6c9d8fu); f_0078b208();
    /* 006c9d8f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c9d92: jle 0x6c9ce4 */ if ((fZ||fS!=fO)) goto L_006c9ce4;
L_006c9d98:; BB(0x006c9d98);
    /* 006c9d98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9d9b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006c9d9e: mov dword ptr [edx + 0x78], 0x3f400000 */ W32((u32)(r_edx+0x78u), 0x3f400000u);
    /* 006c9da5: mov dword ptr [edx + 0x7c], 0x3f400000 */ W32((u32)(r_edx+0x7cu), 0x3f400000u);
    /* 006c9dac: jmp 0x6c9ce4 */ goto L_006c9ce4;
L_006c9db1:; BB(0x006c9db1);
    /* 006c9db1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c9db3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006c9db6: jmp 0x6c9d72 */ goto L_006c9d72;
L_006c9db8:; BB(0x006c9db8);
    /* 006c9db8: mov ecx, eax */ r_ecx = r_eax;
    /* 006c9dba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9dbc: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 006c9dbe: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c9dc0: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9dc3u); call_ind(t); }
    /* 006c9dc3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9dc6: mov dword ptr [0xa95ed0], 0x46 */ W32((u32)(0xa95ed0u), 0x46u);
    /* 006c9dd0: mov dword ptr [0xa95ecc], 3 */ W32((u32)(0xa95eccu), 0x3u);
    /* 006c9dda: mov dword ptr [eax + 0x20], 0x11 */ W32((u32)(r_eax+0x20u), 0x11u);
    /* 006c9de1: jmp 0x6c9cff */ goto L_006c9cff;
L_006c9de6:; BB(0x006c9de6);
    /* 006c9de6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9de8: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 006c9dea: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c9dec: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9defu); call_ind(t); }
    /* 006c9def: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9df2: mov dword ptr [0xa95ed0], 0x46 */ W32((u32)(0xa95ed0u), 0x46u);
    /* 006c9dfc: mov dword ptr [0xa95ecc], 3 */ W32((u32)(0xa95eccu), 0x3u);
    /* 006c9e06: mov dword ptr [eax + 0x20], 0x11 */ W32((u32)(r_eax+0x20u), 0x11u);
    /* 006c9e0d: jmp 0x6c9cff */ goto L_006c9cff;
}

void f_006c9e14(void) /* sub_6C9E14 */
{
    FN_ENTER(0x006c9e14);
    /* 006c9e14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9e15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c9e16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9e17: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c9e19: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 006c9e1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9e1e: je 0x6c9e77 */ if (fZ) goto L_006c9e77;
L_006c9e20:; BB(0x006c9e20);
    /* 006c9e20: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 006c9e24: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c9e26: je 0x6c9e77 */ if (fZ) goto L_006c9e77;
L_006c9e28:; BB(0x006c9e28);
    /* 006c9e28: mov esi, dword ptr [edx + 0x70] */ r_esi = R32((u32)(r_edx+0x70u));
    /* 006c9e2b: mov eax, esi */ r_eax = r_esi;
    /* 006c9e2d: call 0x6c9eac */ r_esp -= 4; W32(r_esp, 0x6c9e32u); f_006c9eac();
    /* 006c9e32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c9e33: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006c9e36: call 0x770d30 */ r_esp -= 4; W32(r_esp, 0x6c9e3bu); f_00770d30();
    /* 006c9e3b: call 0x6c8db4 */ r_esp -= 4; W32(r_esp, 0x6c9e40u); f_006c8db4();
    /* 006c9e40: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 006c9e43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9e45: je 0x6c9e54 */ if (fZ) goto L_006c9e54;
L_006c9e47:; BB(0x006c9e47);
    /* 006c9e47: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006c9e4c: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c9e4f: call 0x73f040 */ r_esp -= 4; W32(r_esp, 0x6c9e54u); f_0073f040();
L_006c9e54:; BB(0x006c9e54);
    /* 006c9e54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9e56: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9e58: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006c9e5a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c9e5c: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9e5fu); call_ind(t); }
    /* 006c9e5f: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006c9e62: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006c9e69: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c9e6eu); f_007127b0();
    /* 006c9e6e: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
    /* 006c9e75: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006c9e77:; BB(0x006c9e77);
    /* 006c9e77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9e79: je 0x6c9ea4 */ if (fZ) goto L_006c9ea4;
L_006c9e7b:; BB(0x006c9e7b);
    /* 006c9e7b: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 006c9e7f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c9e81: je 0x6c9ea4 */ if (fZ) goto L_006c9ea4;
L_006c9e83:; BB(0x006c9e83);
    /* 006c9e83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9e85: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9e87: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006c9e89: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c9e8b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6c9e8eu); call_ind(t); }
    /* 006c9e8e: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006c9e91: mov dword ptr [ebx + 0x20], 0xb */ W32((u32)(r_ebx+0x20u), 0xbu);
    /* 006c9e98: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c9e9du); f_007127b0();
    /* 006c9e9d: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
L_006c9ea4:; BB(0x006c9ea4);
    /* 006c9ea4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c9ea5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c9ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c9ea7: ret  */ FN_RET(0x006c9e14); r_esp += 4; return;
}

void f_006c9eac(void) /* sub_6C9EAC */
{
    FN_ENTER(0x006c9eac);
    /* 006c9eac: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c9eaf: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006c9eb5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006c9eb8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c9eba: jge 0x6c9ec2 */ if ((fS==fO)) goto L_006c9ec2;
L_006c9ebc:; BB(0x006c9ebc);
    /* 006c9ebc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c9ebe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c9ec1: ret  */ FN_RET(0x006c9eac); r_esp += 4; return;
L_006c9ec2:; BB(0x006c9ec2);
    /* 006c9ec2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006c9ec4: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006c9ec7: mov byte ptr [esp], 0xbd */ W8((u32)(r_esp), 0xbdu);
    /* 006c9ecb: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 006c9ed0: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006c9ed5: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006c9eda: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 006c9edf: mov byte ptr [esp + 0xd], 0 */ W8((u32)(r_esp+0xdu), 0x0u);
    /* 006c9ee4: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006c9ee8: mov byte ptr [esp + 0xc], 1 */ W8((u32)(r_esp+0xcu), 0x1u);
    /* 006c9eed: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 006c9ef2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006c9ef6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006c9ef9: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6c9efeu); f_00800518();
    /* 006c9efe: mov eax, 1 */ r_eax = 0x1u;
    /* 006c9f03: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c9f06: ret  */ FN_RET(0x006c9eac); r_esp += 4; return;
}

void f_006c9f08(void) /* sub_6C9F08 */
{
    FN_ENTER(0x006c9f08);
    /* 006c9f08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c9f09: mov ebp, esp */ r_ebp = r_esp;
    /* 006c9f0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c9f0d: push 0x8ed6d0 */ { u32 v = 0x8ed6d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9f12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c9f18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c9f19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c9f20: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c9f23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c9f26: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006c9f29: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006c9f2c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006c9f2f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006c9f32: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006c9f39: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9f3b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c9f40u); f_005caba4();
    /* 006c9f40: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c9f43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c9f46: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006c9f49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9f4b: je 0x6c9fac */ if (fZ) goto L_006c9fac;
L_006c9f4d:; BB(0x006c9f4d);
    /* 006c9f4d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006c9f54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c9f5b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c9f5e: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c9f61: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9f64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c9f65: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c9f6b: call 0x6d75e4 */ r_esp -= 4; W32(r_esp, 0x6c9f70u); f_006d75e4();
    /* 006c9f70: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006c9f77:; BB(0x006c9f77);
    /* 006c9f77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c9f7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c9f81: mov dword ptr [eax + 0x60], 0x6c9370 */ W32((u32)(r_eax+0x60u), 0x6c9370u);
    /* 006c9f88: mov dword ptr [eax + 0x64], 0x6ca258 */ W32((u32)(r_eax+0x64u), 0x6ca258u);
    /* 006c9f8f: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6c9f94u); f_007bebe8();
    /* 006c9f94: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c9f97: mov dword ptr [eax + 0x20], 0x12 */ W32((u32)(r_eax+0x20u), 0x12u);
    /* 006c9f9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c9fa1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c9fa8: mov esp, ebp */ r_esp = r_ebp;
    /* 006c9faa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c9fab: ret  */ FN_RET(0x006c9f08); r_esp += 4; return;
L_006c9fac:; BB(0x006c9fac);
    /* 006c9fac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c9fae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c9fb1: jmp 0x6c9f77 */ goto L_006c9f77;
}

void f_006c9fb4(void) /* sub_6C9FB4 */
{
    FN_ENTER(0x006c9fb4);
    /* 006c9fb4: mov dword ptr [ecx + 0x20], 0x14 */ W32((u32)(r_ecx+0x20u), 0x14u);
    /* 006c9fbb: ret  */ FN_RET(0x006c9fb4); r_esp += 4; return;
}

void f_006c9fbc(void) /* sub_6C9FBC */
{
    FN_ENTER(0x006c9fbc);
    /* 006c9fbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c9fbd: mov ebp, esp */ r_ebp = r_esp;
    /* 006c9fbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c9fc1: push 0x8ed6f8 */ { u32 v = 0x8ed6f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9fc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c9fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c9fcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c9fd4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c9fd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c9fda: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006c9fdd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006c9fe0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006c9fe3: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006c9fe6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006c9fed: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 006c9fef: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6c9ff4u); f_005caba4();
    /* 006c9ff4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c9ff7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c9ffa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006c9ffd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c9fff: je 0x6ca060 */ if (fZ) goto L_006ca060;
L_006ca001:; BB(0x006ca001);
    /* 006ca001: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006ca008: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ca00f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ca012: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ca015: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca019: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ca01f: call 0x6d3d70 */ r_esp -= 4; W32(r_esp, 0x6ca024u); f_006d3d70();
    /* 006ca024: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006ca02b:; BB(0x006ca02b);
    /* 006ca02b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ca032: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca035: mov dword ptr [eax + 0x28], 0x6c9370 */ W32((u32)(r_eax+0x28u), 0x6c9370u);
    /* 006ca03c: mov dword ptr [eax + 0x2c], 0x6ca258 */ W32((u32)(r_eax+0x2cu), 0x6ca258u);
    /* 006ca043: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6ca048u); f_007bebe8();
    /* 006ca048: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ca04b: mov dword ptr [eax + 0x20], 0x12 */ W32((u32)(r_eax+0x20u), 0x12u);
    /* 006ca052: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ca055: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ca05c: mov esp, ebp */ r_esp = r_ebp;
    /* 006ca05e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca05f: ret  */ FN_RET(0x006c9fbc); r_esp += 4; return;
L_006ca060:; BB(0x006ca060);
    /* 006ca060: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca062: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ca065: jmp 0x6ca02b */ goto L_006ca02b;
}

