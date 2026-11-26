#include "protos.h"

void f_00827024(void) /* sub_827024 */
{
    FN_ENTER(0x00827024);
    /* 00827024: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00827025: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00827029: movsx eax, byte ptr [0xaca900] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaca900u));
    /* 00827030: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00827032: je 0x82705f */ if (fZ) goto L_0082705f;
L_00827034:; BB(0x00827034);
    /* 00827034: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827036: jne 0x82704a */ if (!fZ) goto L_0082704a;
L_00827038:; BB(0x00827038);
    /* 00827038: push 0x10b */ { u32 v = 0x10bu; r_esp -= 4; W32(r_esp, v); }
    /* 0082703d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x827042u); f_0079317c();
    /* 00827042: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00827043: call 0x826e50 */ r_esp -= 4; W32(r_esp, 0x827048u); f_00826e50();
    /* 00827048: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00827049: ret  */ FN_RET(0x00827024); r_esp += 4; return;
L_0082704a:; BB(0x0082704a);
    /* 0082704a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082704d: jne 0x82705f */ if (!fZ) goto L_0082705f;
L_0082704f:; BB(0x0082704f);
    /* 0082704f: push 0x10a */ { u32 v = 0x10au; r_esp -= 4; W32(r_esp, v); }
    /* 00827054: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x827059u); f_0079317c();
    /* 00827059: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082705a: call 0x826e50 */ r_esp -= 4; W32(r_esp, 0x82705fu); f_00826e50();
L_0082705f:; BB(0x0082705f);
    /* 0082705f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00827060: ret  */ FN_RET(0x00827024); r_esp += 4; return;
}

void f_00827064(void) /* sub_827064 */
{
    FN_ENTER(0x00827064);
    /* 00827064: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 0082706b: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00827070: jne 0x827073 */ if (!fZ) goto L_00827073;
L_00827072:; BB(0x00827072);
    /* 00827072: ret  */ FN_RET(0x00827064); r_esp += 4; return;
L_00827073:; BB(0x00827073);
    /* 00827073: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00827079: call 0x7f6984 */ r_esp -= 4; W32(r_esp, 0x82707eu); f_007f6984();
    /* 0082707e: movzx eax, word ptr [0xaca908] */ r_eax = (u32)R16((u32)(0xaca908u));
    /* 00827085: mov byte ptr [0xaca900], 9 */ W8((u32)(0xaca900u), 0x9u);
    /* 0082708c: and eax, 0xfbff */ {  u32 a = r_eax; u32 b = 0xfbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00827091: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 00827097: ret  */ FN_RET(0x00827064); r_esp += 4; return;
}

void f_00827098(void) /* sub_827098 */
{
    FN_ENTER(0x00827098);
    /* 00827098: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00827099: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0082709d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082709f: je 0x8270f5 */ if (fZ) goto L_008270f5;
L_008270a1:; BB(0x008270a1);
    /* 008270a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008270a4: je 0x82718d */ if (fZ) goto L_0082718d;
L_008270aa:; BB(0x008270aa);
    /* 008270aa: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008270ad: je 0x8270e3 */ if (fZ) goto L_008270e3;
L_008270af:; BB(0x008270af);
    /* 008270af: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008270b2: jne 0x8270d1 */ if (!fZ) goto L_008270d1;
L_008270b4:; BB(0x008270b4);
    /* 008270b4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008270b8: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008270be: jne 0x827164 */ if (!fZ) goto L_00827164;
L_008270c4:; BB(0x008270c4);
    /* 008270c4: push 0x111 */ { u32 v = 0x111u; r_esp -= 4; W32(r_esp, v); }
    /* 008270c9: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x8270ceu); f_0079317c();
    /* 008270ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008270cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008270d0: ret  */ FN_RET(0x00827098); r_esp += 4; return;
L_008270d1:; BB(0x008270d1);
    /* 008270d1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008270d4: jne 0x8270f5 */ if (!fZ) goto L_008270f5;
L_008270d6:; BB(0x008270d6);
    /* 008270d6: push 0x10d */ { u32 v = 0x10du; r_esp -= 4; W32(r_esp, v); }
    /* 008270db: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x8270e0u); f_0079317c();
    /* 008270e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008270e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008270e2: ret  */ FN_RET(0x00827098); r_esp += 4; return;
L_008270e3:; BB(0x008270e3);
    /* 008270e3: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008270e7: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x8270ecu); f_005c5528();
    /* 008270ec: mov ebp, eax */ r_ebp = r_eax;
    /* 008270ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008270f1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008270f3: jne 0x8270f9 */ if (!fZ) goto L_008270f9;
L_008270f5:; BB(0x008270f5);
    /* 008270f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008270f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008270f8: ret  */ FN_RET(0x00827098); r_esp += 4; return;
L_008270f9:; BB(0x008270f9);
    /* 008270f9: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x8270feu); f_00816d30();
    /* 008270fe: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00827102: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827108: jne 0x82711f */ if (!fZ) goto L_0082711f;
L_0082710a:; BB(0x0082710a);
    /* 0082710a: push 0x112 */ { u32 v = 0x112u; r_esp -= 4; W32(r_esp, v); }
    /* 0082710f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x827114u); f_0079317c();
    /* 00827114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00827115: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x82711au); f_00816cb8();
    /* 0082711a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082711d: jmp 0x82713c */ goto L_0082713c;
L_0082711f:; BB(0x0082711f);
    /* 0082711f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00827123: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00827124: call 0x816cf0 */ r_esp -= 4; W32(r_esp, 0x827129u); f_00816cf0();
    /* 00827129: push 0x107 */ { u32 v = 0x107u; r_esp -= 4; W32(r_esp, v); }
    /* 0082712e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x827133u); f_0079317c();
    /* 00827133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00827134: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x827139u); f_00816cb8();
    /* 00827139: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0082713c:; BB(0x0082713c);
    /* 0082713c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0082713f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00827141: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x827144u); call_ind(t); }
    /* 00827144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00827145: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x82714au); f_00816cb8();
    /* 0082714a: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 0082714f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x827154u); f_0079317c();
    /* 00827154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00827155: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x82715au); f_00816cb8();
    /* 0082715a: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0082715f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00827162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00827163: ret  */ FN_RET(0x00827098); r_esp += 4; return;
L_00827164:; BB(0x00827164);
    /* 00827164: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x827169u); f_00816d30();
    /* 00827169: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082716d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082716e: call 0x816cf0 */ r_esp -= 4; W32(r_esp, 0x827173u); f_00816cf0();
    /* 00827173: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 00827178: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x82717du); f_0079317c();
    /* 0082717d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082717e: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x827183u); f_00816cb8();
    /* 00827183: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 00827188: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082718b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082718c: ret  */ FN_RET(0x00827098); r_esp += 4; return;
L_0082718d:; BB(0x0082718d);
    /* 0082718d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00827191: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827197: jne 0x8271a6 */ if (!fZ) goto L_008271a6;
L_00827199:; BB(0x00827199);
    /* 00827199: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 0082719e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x8271a3u); f_0079317c();
    /* 008271a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008271a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008271a5: ret  */ FN_RET(0x00827098); r_esp += 4; return;
L_008271a6:; BB(0x008271a6);
    /* 008271a6: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x8271abu); f_00816d30();
    /* 008271ab: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008271af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008271b0: call 0x816cf0 */ r_esp -= 4; W32(r_esp, 0x8271b5u); f_00816cf0();
    /* 008271b5: push 0x109 */ { u32 v = 0x109u; r_esp -= 4; W32(r_esp, v); }
    /* 008271ba: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x8271bfu); f_0079317c();
    /* 008271bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008271c0: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x8271c5u); f_00816cb8();
    /* 008271c5: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 008271ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008271cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008271ce: ret  */ FN_RET(0x00827098); r_esp += 4; return;
}

void f_008271d0(void) /* sub_8271D0 */
{
    FN_ENTER(0x008271d0);
    /* 008271d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008271d2: mov word ptr [0xaca908], ax */ W16((u32)(0xaca908u), (u16)r_eax);
    /* 008271d8: call 0x717da4 */ r_esp -= 4; W32(r_esp, 0x8271ddu); f_00717da4();
    /* 008271dd: ret  */ FN_RET(0x008271d0); r_esp += 4; return;
}

void f_008271e0(void) /* sub_8271E0 */
{
    FN_ENTER(0x008271e0);
    /* 008271e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008271e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008271e3: mov byte ptr [0xaca900], al */ W8((u32)(0xaca900u), (u8)r_eax);
    /* 008271e8: mov byte ptr [0xaca904], 4 */ W8((u32)(0xaca904u), 0x4u);
    /* 008271ef: mov dword ptr [0xaca8fc], eax */ W32((u32)(0xaca8fcu), r_eax);
    /* 008271f4: mov dword ptr [0xaca8f8], eax */ W32((u32)(0xaca8f8u), r_eax);
    /* 008271f9: mov dword ptr [0xaca8f4], eax */ W32((u32)(0xaca8f4u), r_eax);
    /* 008271fe: mov dword ptr [0xaca8f0], eax */ W32((u32)(0xaca8f0u), r_eax);
    /* 00827203: mov dword ptr [0xaca8ec], eax */ W32((u32)(0xaca8ecu), r_eax);
    /* 00827208: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082720a: mov ebx, eax */ r_ebx = r_eax;
L_0082720c:; BB(0x0082720c);
    /* 0082720c: lea ecx, [ebx + 0xaca500] */ r_ecx = (u32)(r_ebx+0xaca500u);
    /* 00827212: call 0x82722c */ r_esp -= 4; W32(r_esp, 0x827217u); f_0082722c();
    /* 00827217: add ebx, 0x1f0 */ {  u32 a = r_ebx; u32 b = 0x1f0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082721d: cmp ebx, 0x3e0 */ {  u32 a = r_ebx; u32 b = 0x3e0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00827223: jl 0x82720c */ if ((fS!=fO)) goto L_0082720c;
L_00827225:; BB(0x00827225);
    /* 00827225: call 0x8271d0 */ r_esp -= 4; W32(r_esp, 0x82722au); f_008271d0();
    /* 0082722a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082722b: ret  */ FN_RET(0x008271e0); r_esp += 4; return;
}

void f_0082722c(void) /* sub_82722C */
{
    FN_ENTER(0x0082722c);
    /* 0082722c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082722d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0082722f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00827231: call 0x827248 */ r_esp -= 4; W32(r_esp, 0x827236u); f_00827248();
    /* 00827236: add ebx, 0xf8 */ {  u32 a = r_ebx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082723c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0082723e: call 0x827248 */ r_esp -= 4; W32(r_esp, 0x827243u); f_00827248();
    /* 00827243: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00827244: ret  */ FN_RET(0x0082722c); r_esp += 4; return;
}

void f_00827248(void) /* sub_827248 */
{
    FN_ENTER(0x00827248);
    /* 00827248: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0082724d: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0082724f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00827251: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00827254: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00827257: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0082725a: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0082725d: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00827260: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 00827263: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00827266: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00827269: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0082726c: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0082726f: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00827272: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00827275: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00827278: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0082727b: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0082727e: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00827281: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 00827284: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 00827287: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0082728a: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 0082728d: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00827290: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 00827293: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00827296: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00827299: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0082729c: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0082729f: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 008272a2: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 008272a5: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 008272a8: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 008272ab: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 008272ae: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 008272b4: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 008272ba: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 008272c0: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 008272c6: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 008272cc: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 008272d2: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 008272d8: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 008272de: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 008272e4: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 008272ea: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 008272f0: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 008272f6: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 008272fc: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 00827302: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00827308: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 0082730e: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 00827314: mov dword ptr [ecx + 0xc4], edx */ W32((u32)(r_ecx+0xc4u), r_edx);
    /* 0082731a: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 00827320: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00827326: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 0082732c: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
    /* 00827332: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 00827338: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0082733e: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 00827344: mov dword ptr [ecx + 0xe4], edx */ W32((u32)(r_ecx+0xe4u), r_edx);
    /* 0082734a: mov dword ptr [ecx + 0xe8], eax */ W32((u32)(r_ecx+0xe8u), r_eax);
    /* 00827350: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 00827356: mov dword ptr [ecx + 0xf0], eax */ W32((u32)(r_ecx+0xf0u), r_eax);
    /* 0082735c: mov dword ptr [ecx + 0xf4], edx */ W32((u32)(r_ecx+0xf4u), r_edx);
    /* 00827362: ret  */ FN_RET(0x00827248); r_esp += 4; return;
}

void f_00827364(void) /* sub_827364 */
{
    FN_ENTER(0x00827364);
    /* 00827364: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00827369: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 0082736d: ret  */ FN_RET(0x00827364); r_esp += 4; return;
}

void f_00827370(void) /* sub_827370 */
{
    FN_ENTER(0x00827370);
    /* 00827370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00827372: ret  */ FN_RET(0x00827370); r_esp += 4; return;
}

void f_00827374(void) /* sub_827374 */
{
    FN_ENTER(0x00827374);
    /* 00827374: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00827377: ret  */ FN_RET(0x00827374); r_esp += 4; return;
}

void f_00827378(void) /* sub_827378 */
{
    FN_ENTER(0x00827378);
    /* 00827378: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082737b: mov eax, ecx */ r_eax = r_ecx;
    /* 0082737d: ret  */ FN_RET(0x00827378); r_esp += 4; return;
}

void f_00827380(void) /* sub_827380 */
{
    FN_ENTER(0x00827380);
    /* 00827380: add ecx, 0x2a */ {  u32 a = r_ecx; u32 b = 0x2au; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00827383: mov eax, ecx */ r_eax = r_ecx;
    /* 00827385: ret  */ FN_RET(0x00827380); r_esp += 4; return;
}

void f_00827388(void) /* sub_827388 */
{
    FN_ENTER(0x00827388);
    /* 00827388: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082738b: mov eax, ecx */ r_eax = r_ecx;
    /* 0082738d: ret  */ FN_RET(0x00827388); r_esp += 4; return;
}

void f_00827390(void) /* sub_827390 */
{
    FN_ENTER(0x00827390);
    /* 00827390: add ecx, 0x6e */ {  u32 a = r_ecx; u32 b = 0x6eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00827393: mov eax, ecx */ r_eax = r_ecx;
    /* 00827395: ret  */ FN_RET(0x00827390); r_esp += 4; return;
}

void f_00827398(void) /* sub_827398 */
{
    FN_ENTER(0x00827398);
    /* 00827398: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082739e: mov eax, ecx */ r_eax = r_ecx;
    /* 008273a0: ret  */ FN_RET(0x00827398); r_esp += 4; return;
}

void f_008273a4(void) /* sub_8273A4 */
{
    FN_ENTER(0x008273a4);
    /* 008273a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008273a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008273a7: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 008273ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008273ae: je 0x827406 */ if (fZ) goto L_00827406;
L_008273b0:; BB(0x008273b0);
    /* 008273b0: mov edx, 0xaab2ec */ r_edx = 0xaab2ecu;
    /* 008273b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008273b7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008273b9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 008273bc: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 008273bf: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 008273c2: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 008273c5: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 008273c8: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 008273cb: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 008273ce: mov word ptr [edx + 0x20], ax */ W16((u32)(r_edx+0x20u), (u16)r_eax);
    /* 008273d2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008273d4: lea eax, [ebx + 0x2a] */ r_eax = (u32)(r_ebx+0x2au);
    /* 008273d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008273d8: push 0xaab2ec */ { u32 v = 0xaab2ecu; r_esp -= 4; W32(r_esp, v); }
    /* 008273dd: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x8273e2u); f_00857dec();
    /* 008273e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008273e5: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 008273eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008273ed: mov word ptr [0xaab30c], ax */ W16((u32)(0xaab30cu), (u16)r_eax);
    /* 008273f3: lea edx, [ebx + 0x90] */ r_edx = (u32)(r_ebx+0x90u);
    /* 008273f9: add ebx, 0xa0 */ {  u32 a = r_ebx; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008273ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00827400: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00827401: call 0x7d7640 */ r_esp -= 4; W32(r_esp, 0x827406u); f_007d7640();
L_00827406:; BB(0x00827406);
    /* 00827406: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00827407: ret  */ FN_RET(0x008273a4); r_esp += 4; return;
}

void f_00827408(void) /* sub_827408 */
{
    FN_ENTER(0x00827408);
    /* 00827408: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00827409: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082740a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082740b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082740d: mov edx, dword ptr [0xacb364] */ r_edx = R32((u32)(0xacb364u));
    /* 00827413: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00827415: jle 0x827446 */ if ((fZ||fS!=fO)) goto L_00827446;
L_00827417:; BB(0x00827417);
    /* 00827417: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0082741a: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 0082741d: lea ecx, [eax + ecx*8] */ r_ecx = (u32)(r_eax+r_ecx*8);
    /* 00827420: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00827422: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00827424:; BB(0x00827424);
    /* 00827424: mov ebx, dword ptr [ecx + 0xaca924] */ r_ebx = R32((u32)(r_ecx+0xaca924u));
    /* 0082742a: cmp ebx, dword ptr [esp + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082742e: lea esi, [ecx + 0xaca920] */ r_esi = (u32)(r_ecx+0xaca920u);
    /* 00827434: je 0x82744a */ if (fZ) goto L_0082744a;
L_00827436:; BB(0x00827436);
    /* 00827436: add ecx, 0x124 */ {  u32 a = r_ecx; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082743c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082743f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00827441: jl 0x827424 */ if ((fS!=fO)) goto L_00827424;
L_00827443:; BB(0x00827443);
    /* 00827443: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00827446:; BB(0x00827446);
    /* 00827446: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00827447: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00827448: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00827449: ret  */ FN_RET(0x00827408); r_esp += 4; return;
L_0082744a:; BB(0x0082744a);
    /* 0082744a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0082744d: mov edi, 0xacb240 */ r_edi = 0xacb240u;
    /* 00827452: mov ecx, 0x124 */ r_ecx = 0x124u;
    /* 00827457: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00827458: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082745b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0082745d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082745e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00827461: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00827463: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00827464: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00827465: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00827466: ret  */ FN_RET(0x00827408); r_esp += 4; return;
}

void f_00827468(void) /* sub_827468 */
{
    FN_ENTER(0x00827468);
    /* 00827468: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00827469: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082746a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082746b: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082746e: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00827472: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00827474: mov dword ptr [0xacb240], eax */ W32((u32)(0xacb240u), r_eax);
    /* 00827479: mov ecx, 0xacb248 */ r_ecx = 0xacb248u;
    /* 0082747e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00827480: mov dword ptr [0xacb244], 0 */ W32((u32)(0xacb244u), 0x0u);
    /* 0082748a: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0082748c: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0082748f: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00827492: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00827495: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00827498: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0082749b: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0082749e: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 008274a1: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 008274a5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008274a7: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 008274aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008274ab: push 0xacb248 */ { u32 v = 0xacb248u; r_esp -= 4; W32(r_esp, v); }
    /* 008274b0: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x8274b5u); f_00857dec();
    /* 008274b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008274b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008274ba: mov word ptr [0xacb268], ax */ W16((u32)(0xacb268u), (u16)r_eax);
    /* 008274c0: lea edi, [esi + 0x64] */ r_edi = (u32)(r_esi+0x64u);
    /* 008274c3: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x8274c8u); f_00816d30();
    /* 008274c8: movzx ecx, word ptr [esi + 0x64] */ r_ecx = (u32)R16((u32)(r_esi+0x64u));
    /* 008274cc: mov eax, edi */ r_eax = r_edi;
    /* 008274ce: mov edx, 1 */ r_edx = 0x1u;
    /* 008274d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008274d5: je 0x8274ee */ if (fZ) goto L_008274ee;
L_008274d7:; BB(0x008274d7);
    /* 008274d7: mov ecx, eax */ r_ecx = r_eax;
    /* 008274d9: movzx ebp, word ptr [ecx] */ r_ebp = (u32)R16((u32)(r_ecx));
    /* 008274dc: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008274df: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008274e2: jne 0x8274e7 */ if (!fZ) goto L_008274e7;
L_008274e4:; BB(0x008274e4);
    /* 008274e4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008274e7:; BB(0x008274e7);
    /* 008274e7: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 008274ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008274ec: jne 0x8274d7 */ if (!fZ) goto L_008274d7;
L_008274ee:; BB(0x008274ee);
    /* 008274ee: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008274f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008274f2: jle 0x827565 */ if ((fZ||fS!=fO)) goto L_00827565;
L_008274f4:; BB(0x008274f4);
    /* 008274f4: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 008274f8: mov ebx, edi */ r_ebx = r_edi;
    /* 008274fa: mov edi, edx */ r_edi = r_edx;
L_008274fc:; BB(0x008274fc);
    /* 008274fc: call 0x8169c0 */ r_esp -= 4; W32(r_esp, 0x827501u); f_008169c0();
    /* 00827501: mov edx, ebx */ r_edx = r_ebx;
    /* 00827503: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00827506: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00827508: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082750a: jge 0x827f09 */ if ((fS==fO)) goto L_00827f09;
L_00827510:; BB(0x00827510);
    /* 00827510: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00827513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827515: je 0x82752e */ if (fZ) goto L_0082752e;
L_00827517:; BB(0x00827517);
    /* 00827517: mov eax, edx */ r_eax = r_edx;
    /* 00827519: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0082751c: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082751f: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827522: jne 0x827510 */ if (!fZ) goto L_00827510;
L_00827524:; BB(0x00827524);
    /* 00827524: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00827527: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00827529: jl 0x827510 */ if ((fS!=fO)) goto L_00827510;
L_0082752b:; BB(0x0082752b);
    /* 0082752b: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
L_0082752e:; BB(0x0082752e);
    /* 0082752e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00827531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827533: je 0x82754e */ if (fZ) goto L_0082754e;
L_00827535:; BB(0x00827535);
    /* 00827535: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
L_00827538:; BB(0x00827538);
    /* 00827538: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082753b: je 0x82754e */ if (fZ) goto L_0082754e;
L_0082753d:; BB(0x0082753d);
    /* 0082753d: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00827540: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 00827544: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827547: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082754a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082754c: jne 0x827538 */ if (!fZ) goto L_00827538;
L_0082754e:; BB(0x0082754e);
    /* 0082754e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00827550: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00827553: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00827556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00827557: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x82755cu); f_00816cb8();
    /* 0082755c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082755d: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082755f: jl 0x8274fc */ if ((fS!=fO)) goto L_008274fc;
L_00827561:; BB(0x00827561);
    /* 00827561: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
L_00827565:; BB(0x00827565);
    /* 00827565: mov edx, 0xac9d80 */ r_edx = 0xac9d80u;
    /* 0082756a: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0082756d: mov eax, 0xacb26a */ r_eax = 0xacb26au;
    /* 00827572: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827574: je 0x827f01 */ if (fZ) goto L_00827f01;
L_0082757a:; BB(0x0082757a);
    /* 0082757a: mov edx, 0xac9d82 */ r_edx = 0xac9d82u;
    /* 0082757f: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827582: je 0x827ef9 */ if (fZ) goto L_00827ef9;
L_00827588:; BB(0x00827588);
    /* 00827588: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0082758b: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 0082758e: mov eax, 0xacb26c */ r_eax = 0xacb26cu;
    /* 00827593: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827595: je 0x827774 */ if (fZ) goto L_00827774;
L_0082759b:; BB(0x0082759b);
    /* 0082759b: mov edx, 0xac9d84 */ r_edx = 0xac9d84u;
    /* 008275a0: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008275a3: je 0x827ee9 */ if (fZ) goto L_00827ee9;
L_008275a9:; BB(0x008275a9);
    /* 008275a9: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008275ac: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008275af: mov eax, 0xacb26e */ r_eax = 0xacb26eu;
    /* 008275b4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008275b6: je 0x827774 */ if (fZ) goto L_00827774;
L_008275bc:; BB(0x008275bc);
    /* 008275bc: mov edx, 0xac9d86 */ r_edx = 0xac9d86u;
    /* 008275c1: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008275c4: je 0x827ed9 */ if (fZ) goto L_00827ed9;
L_008275ca:; BB(0x008275ca);
    /* 008275ca: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008275cd: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008275d0: mov eax, 0xacb270 */ r_eax = 0xacb270u;
    /* 008275d5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008275d7: je 0x827774 */ if (fZ) goto L_00827774;
L_008275dd:; BB(0x008275dd);
    /* 008275dd: mov edx, 0xac9d88 */ r_edx = 0xac9d88u;
    /* 008275e2: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008275e5: je 0x827ec9 */ if (fZ) goto L_00827ec9;
L_008275eb:; BB(0x008275eb);
    /* 008275eb: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008275ee: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008275f1: mov eax, 0xacb272 */ r_eax = 0xacb272u;
    /* 008275f6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008275f8: je 0x827774 */ if (fZ) goto L_00827774;
L_008275fe:; BB(0x008275fe);
    /* 008275fe: mov edx, 0xac9d8a */ r_edx = 0xac9d8au;
    /* 00827603: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827606: je 0x827eb9 */ if (fZ) goto L_00827eb9;
L_0082760c:; BB(0x0082760c);
    /* 0082760c: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 0082760f: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827612: mov eax, 0xacb274 */ r_eax = 0xacb274u;
    /* 00827617: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827619: je 0x827774 */ if (fZ) goto L_00827774;
L_0082761f:; BB(0x0082761f);
    /* 0082761f: mov edx, 0xac9d8c */ r_edx = 0xac9d8cu;
    /* 00827624: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827627: je 0x827ea9 */ if (fZ) goto L_00827ea9;
L_0082762d:; BB(0x0082762d);
    /* 0082762d: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827630: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827633: mov eax, 0xacb276 */ r_eax = 0xacb276u;
    /* 00827638: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082763a: je 0x827774 */ if (fZ) goto L_00827774;
L_00827640:; BB(0x00827640);
    /* 00827640: mov edx, 0xac9d8e */ r_edx = 0xac9d8eu;
    /* 00827645: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827648: je 0x827e99 */ if (fZ) goto L_00827e99;
L_0082764e:; BB(0x0082764e);
    /* 0082764e: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827651: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827654: mov eax, 0xacb278 */ r_eax = 0xacb278u;
    /* 00827659: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082765b: je 0x827774 */ if (fZ) goto L_00827774;
L_00827661:; BB(0x00827661);
    /* 00827661: mov edx, 0xac9d90 */ r_edx = 0xac9d90u;
    /* 00827666: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827669: je 0x827e89 */ if (fZ) goto L_00827e89;
L_0082766f:; BB(0x0082766f);
    /* 0082766f: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827672: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827675: mov eax, 0xacb27a */ r_eax = 0xacb27au;
    /* 0082767a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082767c: je 0x827774 */ if (fZ) goto L_00827774;
L_00827682:; BB(0x00827682);
    /* 00827682: mov edx, 0xac9d92 */ r_edx = 0xac9d92u;
    /* 00827687: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082768a: je 0x827ee1 */ if (fZ) goto L_00827ee1;
L_00827690:; BB(0x00827690);
    /* 00827690: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827693: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827696: mov eax, 0xacb27c */ r_eax = 0xacb27cu;
    /* 0082769b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082769d: je 0x827774 */ if (fZ) goto L_00827774;
L_008276a3:; BB(0x008276a3);
    /* 008276a3: mov edx, 0xac9d94 */ r_edx = 0xac9d94u;
    /* 008276a8: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008276ab: je 0x827ec1 */ if (fZ) goto L_00827ec1;
L_008276b1:; BB(0x008276b1);
    /* 008276b1: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008276b4: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008276b7: mov eax, 0xacb27e */ r_eax = 0xacb27eu;
    /* 008276bc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008276be: je 0x827774 */ if (fZ) goto L_00827774;
L_008276c4:; BB(0x008276c4);
    /* 008276c4: mov edx, 0xac9d96 */ r_edx = 0xac9d96u;
    /* 008276c9: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008276cc: je 0x827ea1 */ if (fZ) goto L_00827ea1;
L_008276d2:; BB(0x008276d2);
    /* 008276d2: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008276d5: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008276d8: mov eax, 0xacb280 */ r_eax = 0xacb280u;
    /* 008276dd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008276df: je 0x827774 */ if (fZ) goto L_00827774;
L_008276e5:; BB(0x008276e5);
    /* 008276e5: mov edx, 0xac9d98 */ r_edx = 0xac9d98u;
    /* 008276ea: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008276ed: je 0x827ef1 */ if (fZ) goto L_00827ef1;
L_008276f3:; BB(0x008276f3);
    /* 008276f3: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008276f6: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008276f9: mov eax, 0xacb282 */ r_eax = 0xacb282u;
    /* 008276fe: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827700: je 0x827774 */ if (fZ) goto L_00827774;
L_00827702:; BB(0x00827702);
    /* 00827702: mov edx, 0xac9d9a */ r_edx = 0xac9d9au;
    /* 00827707: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082770a: je 0x827eb1 */ if (fZ) goto L_00827eb1;
L_00827710:; BB(0x00827710);
    /* 00827710: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827713: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827716: mov eax, 0xacb284 */ r_eax = 0xacb284u;
    /* 0082771b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082771d: je 0x827774 */ if (fZ) goto L_00827774;
L_0082771f:; BB(0x0082771f);
    /* 0082771f: mov edx, 0xac9d9c */ r_edx = 0xac9d9cu;
    /* 00827724: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827727: je 0x827ed1 */ if (fZ) goto L_00827ed1;
L_0082772d:; BB(0x0082772d);
    /* 0082772d: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827730: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827733: mov eax, 0xacb286 */ r_eax = 0xacb286u;
    /* 00827738: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082773a: je 0x827774 */ if (fZ) goto L_00827774;
L_0082773c:; BB(0x0082773c);
    /* 0082773c: mov edx, 0xac9d9e */ r_edx = 0xac9d9eu;
    /* 00827741: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827744: je 0x827e91 */ if (fZ) goto L_00827e91;
L_0082774a:; BB(0x0082774a);
    /* 0082774a: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 0082774d: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827750: mov eax, 0xacb288 */ r_eax = 0xacb288u;
    /* 00827755: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827757: je 0x827774 */ if (fZ) goto L_00827774;
L_00827759:; BB(0x00827759);
    /* 00827759: mov edx, 0xac9da0 */ r_edx = 0xac9da0u;
    /* 0082775e: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827761: je 0x827e81 */ if (fZ) goto L_00827e81;
L_00827767:; BB(0x00827767);
    /* 00827767: mov ecx, eax */ r_ecx = r_eax;
    /* 00827769: mov eax, 0xacb28a */ r_eax = 0xacb28au;
    /* 0082776e: mov word ptr [ecx], bp */ W16((u32)(r_ecx), (u16)r_ebp);
    /* 00827771: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
L_00827774:; BB(0x00827774);
    /* 00827774: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827777: jne 0x82777c */ if (!fZ) goto L_0082777c;
L_00827779:; BB(0x00827779);
    /* 00827779: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0082777c:; BB(0x0082777c);
    /* 0082777c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082777e: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827781: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 00827784: mov eax, 0xacb28c */ r_eax = 0xacb28cu;
    /* 00827789: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082778b: je 0x827e79 */ if (fZ) goto L_00827e79;
L_00827791:; BB(0x00827791);
    /* 00827791: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827794: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827797: je 0x827e71 */ if (fZ) goto L_00827e71;
L_0082779d:; BB(0x0082779d);
    /* 0082779d: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 008277a0: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008277a3: mov eax, 0xacb28e */ r_eax = 0xacb28eu;
    /* 008277a8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008277aa: je 0x82796b */ if (fZ) goto L_0082796b;
L_008277b0:; BB(0x008277b0);
    /* 008277b0: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008277b3: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008277b6: je 0x827e61 */ if (fZ) goto L_00827e61;
L_008277bc:; BB(0x008277bc);
    /* 008277bc: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008277bf: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008277c2: mov eax, 0xacb290 */ r_eax = 0xacb290u;
    /* 008277c7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008277c9: je 0x82796b */ if (fZ) goto L_0082796b;
L_008277cf:; BB(0x008277cf);
    /* 008277cf: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008277d2: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008277d5: je 0x827e51 */ if (fZ) goto L_00827e51;
L_008277db:; BB(0x008277db);
    /* 008277db: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008277de: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008277e1: mov eax, 0xacb292 */ r_eax = 0xacb292u;
    /* 008277e6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008277e8: je 0x82796b */ if (fZ) goto L_0082796b;
L_008277ee:; BB(0x008277ee);
    /* 008277ee: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008277f1: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008277f4: je 0x827e41 */ if (fZ) goto L_00827e41;
L_008277fa:; BB(0x008277fa);
    /* 008277fa: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008277fd: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827800: mov eax, 0xacb294 */ r_eax = 0xacb294u;
    /* 00827805: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827807: je 0x82796b */ if (fZ) goto L_0082796b;
L_0082780d:; BB(0x0082780d);
    /* 0082780d: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827810: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827813: je 0x827e31 */ if (fZ) goto L_00827e31;
L_00827819:; BB(0x00827819);
    /* 00827819: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 0082781c: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 0082781f: mov eax, 0xacb296 */ r_eax = 0xacb296u;
    /* 00827824: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827826: je 0x82796b */ if (fZ) goto L_0082796b;
L_0082782c:; BB(0x0082782c);
    /* 0082782c: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082782f: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827832: je 0x827e21 */ if (fZ) goto L_00827e21;
L_00827838:; BB(0x00827838);
    /* 00827838: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 0082783b: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 0082783e: mov eax, 0xacb298 */ r_eax = 0xacb298u;
    /* 00827843: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827845: je 0x82796b */ if (fZ) goto L_0082796b;
L_0082784b:; BB(0x0082784b);
    /* 0082784b: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082784e: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827851: je 0x827e11 */ if (fZ) goto L_00827e11;
L_00827857:; BB(0x00827857);
    /* 00827857: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 0082785a: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 0082785d: mov eax, 0xacb29a */ r_eax = 0xacb29au;
    /* 00827862: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827864: je 0x82796b */ if (fZ) goto L_0082796b;
L_0082786a:; BB(0x0082786a);
    /* 0082786a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082786d: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827870: je 0x827e01 */ if (fZ) goto L_00827e01;
L_00827876:; BB(0x00827876);
    /* 00827876: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827879: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 0082787c: mov eax, 0xacb29c */ r_eax = 0xacb29cu;
    /* 00827881: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827883: je 0x82796b */ if (fZ) goto L_0082796b;
L_00827889:; BB(0x00827889);
    /* 00827889: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082788c: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082788f: je 0x827e59 */ if (fZ) goto L_00827e59;
L_00827895:; BB(0x00827895);
    /* 00827895: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827898: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 0082789b: mov eax, 0xacb29e */ r_eax = 0xacb29eu;
    /* 008278a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008278a2: je 0x82796b */ if (fZ) goto L_0082796b;
L_008278a8:; BB(0x008278a8);
    /* 008278a8: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008278ab: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008278ae: je 0x827e39 */ if (fZ) goto L_00827e39;
L_008278b4:; BB(0x008278b4);
    /* 008278b4: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008278b7: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008278ba: mov eax, 0xacb2a0 */ r_eax = 0xacb2a0u;
    /* 008278bf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008278c1: je 0x82796b */ if (fZ) goto L_0082796b;
L_008278c7:; BB(0x008278c7);
    /* 008278c7: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008278ca: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008278cd: je 0x827e19 */ if (fZ) goto L_00827e19;
L_008278d3:; BB(0x008278d3);
    /* 008278d3: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008278d6: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008278d9: mov eax, 0xacb2a2 */ r_eax = 0xacb2a2u;
    /* 008278de: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008278e0: je 0x82796b */ if (fZ) goto L_0082796b;
L_008278e6:; BB(0x008278e6);
    /* 008278e6: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008278e9: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008278ec: je 0x827e69 */ if (fZ) goto L_00827e69;
L_008278f2:; BB(0x008278f2);
    /* 008278f2: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008278f5: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008278f8: mov eax, 0xacb2a4 */ r_eax = 0xacb2a4u;
    /* 008278fd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008278ff: je 0x82796b */ if (fZ) goto L_0082796b;
L_00827901:; BB(0x00827901);
    /* 00827901: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827904: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827907: je 0x827e29 */ if (fZ) goto L_00827e29;
L_0082790d:; BB(0x0082790d);
    /* 0082790d: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827910: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827913: mov eax, 0xacb2a6 */ r_eax = 0xacb2a6u;
    /* 00827918: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082791a: je 0x82796b */ if (fZ) goto L_0082796b;
L_0082791c:; BB(0x0082791c);
    /* 0082791c: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082791f: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827922: je 0x827e49 */ if (fZ) goto L_00827e49;
L_00827928:; BB(0x00827928);
    /* 00827928: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 0082792b: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 0082792e: mov eax, 0xacb2a8 */ r_eax = 0xacb2a8u;
    /* 00827933: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827935: je 0x82796b */ if (fZ) goto L_0082796b;
L_00827937:; BB(0x00827937);
    /* 00827937: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082793a: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082793d: je 0x827e09 */ if (fZ) goto L_00827e09;
L_00827943:; BB(0x00827943);
    /* 00827943: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827946: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827949: mov eax, 0xacb2aa */ r_eax = 0xacb2aau;
    /* 0082794e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827950: je 0x82796b */ if (fZ) goto L_0082796b;
L_00827952:; BB(0x00827952);
    /* 00827952: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827955: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827958: je 0x827df9 */ if (fZ) goto L_00827df9;
L_0082795e:; BB(0x0082795e);
    /* 0082795e: mov ecx, eax */ r_ecx = r_eax;
    /* 00827960: mov eax, 0xacb2ac */ r_eax = 0xacb2acu;
    /* 00827965: mov word ptr [ecx], bp */ W16((u32)(r_ecx), (u16)r_ebp);
    /* 00827968: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
L_0082796b:; BB(0x0082796b);
    /* 0082796b: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082796e: jne 0x827973 */ if (!fZ) goto L_00827973;
L_00827970:; BB(0x00827970);
    /* 00827970: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00827973:; BB(0x00827973);
    /* 00827973: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00827975: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827978: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0082797b: mov eax, 0xacb28c */ r_eax = 0xacb28cu;
    /* 00827980: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827982: je 0x827df1 */ if (fZ) goto L_00827df1;
L_00827988:; BB(0x00827988);
    /* 00827988: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082798b: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082798e: je 0x827de9 */ if (fZ) goto L_00827de9;
L_00827994:; BB(0x00827994);
    /* 00827994: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827997: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 0082799a: mov eax, 0xacb28e */ r_eax = 0xacb28eu;
    /* 0082799f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008279a1: je 0x827b62 */ if (fZ) goto L_00827b62;
L_008279a7:; BB(0x008279a7);
    /* 008279a7: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008279aa: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008279ad: je 0x827dd9 */ if (fZ) goto L_00827dd9;
L_008279b3:; BB(0x008279b3);
    /* 008279b3: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008279b6: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008279b9: mov eax, 0xacb290 */ r_eax = 0xacb290u;
    /* 008279be: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008279c0: je 0x827b62 */ if (fZ) goto L_00827b62;
L_008279c6:; BB(0x008279c6);
    /* 008279c6: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008279c9: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008279cc: je 0x827dc9 */ if (fZ) goto L_00827dc9;
L_008279d2:; BB(0x008279d2);
    /* 008279d2: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008279d5: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008279d8: mov eax, 0xacb292 */ r_eax = 0xacb292u;
    /* 008279dd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008279df: je 0x827b62 */ if (fZ) goto L_00827b62;
L_008279e5:; BB(0x008279e5);
    /* 008279e5: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008279e8: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008279eb: je 0x827db9 */ if (fZ) goto L_00827db9;
L_008279f1:; BB(0x008279f1);
    /* 008279f1: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008279f4: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 008279f7: mov eax, 0xacb294 */ r_eax = 0xacb294u;
    /* 008279fc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008279fe: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827a04:; BB(0x00827a04);
    /* 00827a04: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827a07: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827a0a: je 0x827da9 */ if (fZ) goto L_00827da9;
L_00827a10:; BB(0x00827a10);
    /* 00827a10: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827a13: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827a16: mov eax, 0xacb296 */ r_eax = 0xacb296u;
    /* 00827a1b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827a1d: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827a23:; BB(0x00827a23);
    /* 00827a23: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827a26: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827a29: je 0x827d99 */ if (fZ) goto L_00827d99;
L_00827a2f:; BB(0x00827a2f);
    /* 00827a2f: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827a32: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827a35: mov eax, 0xacb298 */ r_eax = 0xacb298u;
    /* 00827a3a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827a3c: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827a42:; BB(0x00827a42);
    /* 00827a42: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827a45: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827a48: je 0x827d89 */ if (fZ) goto L_00827d89;
L_00827a4e:; BB(0x00827a4e);
    /* 00827a4e: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827a51: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827a54: mov eax, 0xacb29a */ r_eax = 0xacb29au;
    /* 00827a59: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827a5b: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827a61:; BB(0x00827a61);
    /* 00827a61: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827a64: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827a67: je 0x827d79 */ if (fZ) goto L_00827d79;
L_00827a6d:; BB(0x00827a6d);
    /* 00827a6d: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827a70: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827a73: mov eax, 0xacb29c */ r_eax = 0xacb29cu;
    /* 00827a78: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827a7a: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827a80:; BB(0x00827a80);
    /* 00827a80: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827a83: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827a86: je 0x827dd1 */ if (fZ) goto L_00827dd1;
L_00827a8c:; BB(0x00827a8c);
    /* 00827a8c: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827a8f: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827a92: mov eax, 0xacb29e */ r_eax = 0xacb29eu;
    /* 00827a97: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827a99: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827a9f:; BB(0x00827a9f);
    /* 00827a9f: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827aa2: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827aa5: je 0x827db1 */ if (fZ) goto L_00827db1;
L_00827aab:; BB(0x00827aab);
    /* 00827aab: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827aae: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827ab1: mov eax, 0xacb2a0 */ r_eax = 0xacb2a0u;
    /* 00827ab6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827ab8: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827abe:; BB(0x00827abe);
    /* 00827abe: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827ac1: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827ac4: je 0x827d91 */ if (fZ) goto L_00827d91;
L_00827aca:; BB(0x00827aca);
    /* 00827aca: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827acd: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827ad0: mov eax, 0xacb2a2 */ r_eax = 0xacb2a2u;
    /* 00827ad5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827ad7: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827add:; BB(0x00827add);
    /* 00827add: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827ae0: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827ae3: je 0x827de1 */ if (fZ) goto L_00827de1;
L_00827ae9:; BB(0x00827ae9);
    /* 00827ae9: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827aec: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827aef: mov eax, 0xacb2a4 */ r_eax = 0xacb2a4u;
    /* 00827af4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827af6: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827af8:; BB(0x00827af8);
    /* 00827af8: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827afb: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827afe: je 0x827da1 */ if (fZ) goto L_00827da1;
L_00827b04:; BB(0x00827b04);
    /* 00827b04: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827b07: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827b0a: mov eax, 0xacb2a6 */ r_eax = 0xacb2a6u;
    /* 00827b0f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827b11: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827b13:; BB(0x00827b13);
    /* 00827b13: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827b16: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827b19: je 0x827dc1 */ if (fZ) goto L_00827dc1;
L_00827b1f:; BB(0x00827b1f);
    /* 00827b1f: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827b22: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827b25: mov eax, 0xacb2a8 */ r_eax = 0xacb2a8u;
    /* 00827b2a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827b2c: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827b2e:; BB(0x00827b2e);
    /* 00827b2e: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827b31: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827b34: je 0x827d81 */ if (fZ) goto L_00827d81;
L_00827b3a:; BB(0x00827b3a);
    /* 00827b3a: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00827b3d: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827b40: mov eax, 0xacb2aa */ r_eax = 0xacb2aau;
    /* 00827b45: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827b47: je 0x827b62 */ if (fZ) goto L_00827b62;
L_00827b49:; BB(0x00827b49);
    /* 00827b49: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827b4c: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827b4f: je 0x827d71 */ if (fZ) goto L_00827d71;
L_00827b55:; BB(0x00827b55);
    /* 00827b55: mov ecx, eax */ r_ecx = r_eax;
    /* 00827b57: mov eax, 0xacb2ac */ r_eax = 0xacb2acu;
    /* 00827b5c: mov word ptr [ecx], bp */ W16((u32)(r_ecx), (u16)r_ebp);
    /* 00827b5f: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
L_00827b62:; BB(0x00827b62);
    /* 00827b62: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827b65: jne 0x827b6a */ if (!fZ) goto L_00827b6a;
L_00827b67:; BB(0x00827b67);
    /* 00827b67: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00827b6a:; BB(0x00827b6a);
    /* 00827b6a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00827b6c: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827b6f: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 00827b72: mov eax, 0xacb2ae */ r_eax = 0xacb2aeu;
    /* 00827b77: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827b79: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827b7f:; BB(0x00827b7f);
    /* 00827b7f: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00827b82: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827b85: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827b8b:; BB(0x00827b8b);
    /* 00827b8b: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827b8e: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 00827b91: mov eax, 0xacb2b0 */ r_eax = 0xacb2b0u;
    /* 00827b96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827b98: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827b9e:; BB(0x00827b9e);
    /* 00827b9e: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827ba1: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827ba7:; BB(0x00827ba7);
    /* 00827ba7: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827baa: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00827bae: mov eax, 0xacb2b2 */ r_eax = 0xacb2b2u;
    /* 00827bb3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827bb5: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827bbb:; BB(0x00827bbb);
    /* 00827bbb: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827bbe: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827bc4:; BB(0x00827bc4);
    /* 00827bc4: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827bc7: movzx ecx, word ptr [edx + 4] */ r_ecx = (u32)R16((u32)(r_edx+0x4u));
    /* 00827bcb: mov eax, 0xacb2b4 */ r_eax = 0xacb2b4u;
    /* 00827bd0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827bd2: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827bd8:; BB(0x00827bd8);
    /* 00827bd8: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827bdb: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827be1:; BB(0x00827be1);
    /* 00827be1: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827be4: movzx ecx, word ptr [edx + 6] */ r_ecx = (u32)R16((u32)(r_edx+0x6u));
    /* 00827be8: mov eax, 0xacb2b6 */ r_eax = 0xacb2b6u;
    /* 00827bed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827bef: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827bf5:; BB(0x00827bf5);
    /* 00827bf5: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827bf8: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827bfe:; BB(0x00827bfe);
    /* 00827bfe: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827c01: movzx ecx, word ptr [edx + 8] */ r_ecx = (u32)R16((u32)(r_edx+0x8u));
    /* 00827c05: mov eax, 0xacb2b8 */ r_eax = 0xacb2b8u;
    /* 00827c0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c0c: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827c12:; BB(0x00827c12);
    /* 00827c12: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c15: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827c1b:; BB(0x00827c1b);
    /* 00827c1b: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827c1e: movzx ecx, word ptr [edx + 0xa] */ r_ecx = (u32)R16((u32)(r_edx+0xau));
    /* 00827c22: mov eax, 0xacb2ba */ r_eax = 0xacb2bau;
    /* 00827c27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c29: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827c2f:; BB(0x00827c2f);
    /* 00827c2f: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c32: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827c38:; BB(0x00827c38);
    /* 00827c38: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827c3b: movzx ecx, word ptr [edx + 0xc] */ r_ecx = (u32)R16((u32)(r_edx+0xcu));
    /* 00827c3f: mov eax, 0xacb2bc */ r_eax = 0xacb2bcu;
    /* 00827c44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c46: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827c4c:; BB(0x00827c4c);
    /* 00827c4c: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c4f: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827c55:; BB(0x00827c55);
    /* 00827c55: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827c58: movzx ecx, word ptr [edx + 0xe] */ r_ecx = (u32)R16((u32)(r_edx+0xeu));
    /* 00827c5c: mov eax, 0xacb2be */ r_eax = 0xacb2beu;
    /* 00827c61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c63: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827c69:; BB(0x00827c69);
    /* 00827c69: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c6c: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827c72:; BB(0x00827c72);
    /* 00827c72: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827c75: movzx ecx, word ptr [edx + 0x10] */ r_ecx = (u32)R16((u32)(r_edx+0x10u));
    /* 00827c79: mov eax, 0xacb2c0 */ r_eax = 0xacb2c0u;
    /* 00827c7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c80: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827c86:; BB(0x00827c86);
    /* 00827c86: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c89: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827c8f:; BB(0x00827c8f);
    /* 00827c8f: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827c92: movzx ecx, word ptr [edx + 0x12] */ r_ecx = (u32)R16((u32)(r_edx+0x12u));
    /* 00827c96: mov eax, 0xacb2c2 */ r_eax = 0xacb2c2u;
    /* 00827c9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827c9d: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827ca3:; BB(0x00827ca3);
    /* 00827ca3: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827ca6: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827ca8:; BB(0x00827ca8);
    /* 00827ca8: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827cab: movzx ecx, word ptr [edx + 0x14] */ r_ecx = (u32)R16((u32)(r_edx+0x14u));
    /* 00827caf: mov eax, 0xacb2c4 */ r_eax = 0xacb2c4u;
    /* 00827cb4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827cb6: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827cb8:; BB(0x00827cb8);
    /* 00827cb8: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827cbb: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827cbd:; BB(0x00827cbd);
    /* 00827cbd: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827cc0: movzx ecx, word ptr [edx + 0x16] */ r_ecx = (u32)R16((u32)(r_edx+0x16u));
    /* 00827cc4: mov eax, 0xacb2c6 */ r_eax = 0xacb2c6u;
    /* 00827cc9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827ccb: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827ccd:; BB(0x00827ccd);
    /* 00827ccd: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827cd0: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827cd2:; BB(0x00827cd2);
    /* 00827cd2: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827cd5: movzx ecx, word ptr [edx + 0x18] */ r_ecx = (u32)R16((u32)(r_edx+0x18u));
    /* 00827cd9: mov eax, 0xacb2c8 */ r_eax = 0xacb2c8u;
    /* 00827cde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827ce0: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827ce2:; BB(0x00827ce2);
    /* 00827ce2: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827ce5: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827ce7:; BB(0x00827ce7);
    /* 00827ce7: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827cea: movzx ecx, word ptr [edx + 0x1a] */ r_ecx = (u32)R16((u32)(r_edx+0x1au));
    /* 00827cee: mov eax, 0xacb2ca */ r_eax = 0xacb2cau;
    /* 00827cf3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827cf5: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827cf7:; BB(0x00827cf7);
    /* 00827cf7: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827cfa: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827cfc:; BB(0x00827cfc);
    /* 00827cfc: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00827cff: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00827d03: mov eax, 0xacb2cc */ r_eax = 0xacb2ccu;
    /* 00827d08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827d0a: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827d0c:; BB(0x00827d0c);
    /* 00827d0c: cmp edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827d0f: je 0x827d1b */ if (fZ) goto L_00827d1b;
L_00827d11:; BB(0x00827d11);
    /* 00827d11: mov ecx, eax */ r_ecx = r_eax;
    /* 00827d13: mov eax, 0xacb2ce */ r_eax = 0xacb2ceu;
    /* 00827d18: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
L_00827d1b:; BB(0x00827d1b);
    /* 00827d1b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00827d1d: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00827d20: mov eax, dword ptr [esi + 0xc4] */ r_eax = R32((u32)(r_esi+0xc4u));
    /* 00827d26: mov dword ptr [0xacb2d0], eax */ W32((u32)(0xacb2d0u), r_eax);
    /* 00827d2b: mov ebp, dword ptr [esi + 0xc8] */ r_ebp = R32((u32)(r_esi+0xc8u));
    /* 00827d31: mov edi, 0xacb2e0 */ r_edi = 0xacb2e0u;
    /* 00827d36: mov dword ptr [0xacb2d4], ebp */ W32((u32)(0xacb2d4u), r_ebp);
    /* 00827d3c: mov ecx, dword ptr [esi + 0xcc] */ r_ecx = R32((u32)(r_esi+0xccu));
    /* 00827d42: mov dword ptr [0xacb2d8], ecx */ W32((u32)(0xacb2d8u), r_ecx);
    /* 00827d48: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 00827d4e: mov dword ptr [0xacb2dc], eax */ W32((u32)(0xacb2dcu), r_eax);
    /* 00827d53: add esi, 0xd4 */ {  u32 a = r_esi; u32 b = 0xd4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00827d59: mov ecx, 0x84 */ r_ecx = 0x84u;
    /* 00827d5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00827d5f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00827d62: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00827d64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00827d65: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00827d68: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00827d6a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00827d6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00827d6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00827d6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00827d70: ret  */ FN_RET(0x00827468); r_esp += 4; return;
L_00827d71:; BB(0x00827d71);
    /* 00827d71: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827d74: jmp 0x827b62 */ goto L_00827b62;
L_00827d79:; BB(0x00827d79);
    /* 00827d79: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827d7c: jmp 0x827b62 */ goto L_00827b62;
L_00827d81:; BB(0x00827d81);
    /* 00827d81: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827d84: jmp 0x827b62 */ goto L_00827b62;
L_00827d89:; BB(0x00827d89);
    /* 00827d89: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827d8c: jmp 0x827b62 */ goto L_00827b62;
L_00827d91:; BB(0x00827d91);
    /* 00827d91: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827d94: jmp 0x827b62 */ goto L_00827b62;
L_00827d99:; BB(0x00827d99);
    /* 00827d99: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827d9c: jmp 0x827b62 */ goto L_00827b62;
L_00827da1:; BB(0x00827da1);
    /* 00827da1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827da4: jmp 0x827b62 */ goto L_00827b62;
L_00827da9:; BB(0x00827da9);
    /* 00827da9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827dac: jmp 0x827b62 */ goto L_00827b62;
L_00827db1:; BB(0x00827db1);
    /* 00827db1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827db4: jmp 0x827b62 */ goto L_00827b62;
L_00827db9:; BB(0x00827db9);
    /* 00827db9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827dbc: jmp 0x827b62 */ goto L_00827b62;
L_00827dc1:; BB(0x00827dc1);
    /* 00827dc1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827dc4: jmp 0x827b62 */ goto L_00827b62;
L_00827dc9:; BB(0x00827dc9);
    /* 00827dc9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827dcc: jmp 0x827b62 */ goto L_00827b62;
L_00827dd1:; BB(0x00827dd1);
    /* 00827dd1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827dd4: jmp 0x827b62 */ goto L_00827b62;
L_00827dd9:; BB(0x00827dd9);
    /* 00827dd9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827ddc: jmp 0x827b62 */ goto L_00827b62;
L_00827de1:; BB(0x00827de1);
    /* 00827de1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827de4: jmp 0x827b62 */ goto L_00827b62;
L_00827de9:; BB(0x00827de9);
    /* 00827de9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827dec: jmp 0x827b62 */ goto L_00827b62;
L_00827df1:; BB(0x00827df1);
    /* 00827df1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827df4: jmp 0x827b62 */ goto L_00827b62;
L_00827df9:; BB(0x00827df9);
    /* 00827df9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827dfc: jmp 0x82796b */ goto L_0082796b;
L_00827e01:; BB(0x00827e01);
    /* 00827e01: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e04: jmp 0x82796b */ goto L_0082796b;
L_00827e09:; BB(0x00827e09);
    /* 00827e09: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e0c: jmp 0x82796b */ goto L_0082796b;
L_00827e11:; BB(0x00827e11);
    /* 00827e11: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e14: jmp 0x82796b */ goto L_0082796b;
L_00827e19:; BB(0x00827e19);
    /* 00827e19: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e1c: jmp 0x82796b */ goto L_0082796b;
L_00827e21:; BB(0x00827e21);
    /* 00827e21: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e24: jmp 0x82796b */ goto L_0082796b;
L_00827e29:; BB(0x00827e29);
    /* 00827e29: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e2c: jmp 0x82796b */ goto L_0082796b;
L_00827e31:; BB(0x00827e31);
    /* 00827e31: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e34: jmp 0x82796b */ goto L_0082796b;
L_00827e39:; BB(0x00827e39);
    /* 00827e39: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e3c: jmp 0x82796b */ goto L_0082796b;
L_00827e41:; BB(0x00827e41);
    /* 00827e41: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e44: jmp 0x82796b */ goto L_0082796b;
L_00827e49:; BB(0x00827e49);
    /* 00827e49: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e4c: jmp 0x82796b */ goto L_0082796b;
L_00827e51:; BB(0x00827e51);
    /* 00827e51: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e54: jmp 0x82796b */ goto L_0082796b;
L_00827e59:; BB(0x00827e59);
    /* 00827e59: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e5c: jmp 0x82796b */ goto L_0082796b;
L_00827e61:; BB(0x00827e61);
    /* 00827e61: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e64: jmp 0x82796b */ goto L_0082796b;
L_00827e69:; BB(0x00827e69);
    /* 00827e69: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e6c: jmp 0x82796b */ goto L_0082796b;
L_00827e71:; BB(0x00827e71);
    /* 00827e71: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e74: jmp 0x82796b */ goto L_0082796b;
L_00827e79:; BB(0x00827e79);
    /* 00827e79: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e7c: jmp 0x82796b */ goto L_0082796b;
L_00827e81:; BB(0x00827e81);
    /* 00827e81: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e84: jmp 0x827774 */ goto L_00827774;
L_00827e89:; BB(0x00827e89);
    /* 00827e89: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e8c: jmp 0x827774 */ goto L_00827774;
L_00827e91:; BB(0x00827e91);
    /* 00827e91: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e94: jmp 0x827774 */ goto L_00827774;
L_00827e99:; BB(0x00827e99);
    /* 00827e99: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827e9c: jmp 0x827774 */ goto L_00827774;
L_00827ea1:; BB(0x00827ea1);
    /* 00827ea1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827ea4: jmp 0x827774 */ goto L_00827774;
L_00827ea9:; BB(0x00827ea9);
    /* 00827ea9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827eac: jmp 0x827774 */ goto L_00827774;
L_00827eb1:; BB(0x00827eb1);
    /* 00827eb1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827eb4: jmp 0x827774 */ goto L_00827774;
L_00827eb9:; BB(0x00827eb9);
    /* 00827eb9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827ebc: jmp 0x827774 */ goto L_00827774;
L_00827ec1:; BB(0x00827ec1);
    /* 00827ec1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827ec4: jmp 0x827774 */ goto L_00827774;
L_00827ec9:; BB(0x00827ec9);
    /* 00827ec9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827ecc: jmp 0x827774 */ goto L_00827774;
L_00827ed1:; BB(0x00827ed1);
    /* 00827ed1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827ed4: jmp 0x827774 */ goto L_00827774;
L_00827ed9:; BB(0x00827ed9);
    /* 00827ed9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827edc: jmp 0x827774 */ goto L_00827774;
L_00827ee1:; BB(0x00827ee1);
    /* 00827ee1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827ee4: jmp 0x827774 */ goto L_00827774;
L_00827ee9:; BB(0x00827ee9);
    /* 00827ee9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827eec: jmp 0x827774 */ goto L_00827774;
L_00827ef1:; BB(0x00827ef1);
    /* 00827ef1: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827ef4: jmp 0x827774 */ goto L_00827774;
L_00827ef9:; BB(0x00827ef9);
    /* 00827ef9: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827efc: jmp 0x827774 */ goto L_00827774;
L_00827f01:; BB(0x00827f01);
    /* 00827f01: movzx ebp, word ptr [edx] */ r_ebp = (u32)R16((u32)(r_edx));
    /* 00827f04: jmp 0x827774 */ goto L_00827774;
L_00827f09:; BB(0x00827f09);
    /* 00827f09: movzx eax, word ptr [esi + 0x64] */ r_eax = (u32)R16((u32)(r_esi+0x64u));
    /* 00827f0d: jmp 0x82752e */ goto L_0082752e;
}

void f_00827f14(void) /* sub_827F14 */
{
    FN_ENTER(0x00827f14);
    /* 00827f14: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00827f18: lea ecx, [edx + edx*8] */ r_ecx = (u32)(r_edx+r_edx*8);
    /* 00827f1b: lea eax, [edx + ecx*8] */ r_eax = (u32)(r_edx+r_ecx*8);
    /* 00827f1e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00827f20: lea eax, [eax + eax + 0xaca920] */ r_eax = (u32)(r_eax+r_eax+0xaca920u);
    /* 00827f27: ret  */ FN_RET(0x00827f14); r_esp += 4; return;
}

void f_00827f28(void) /* sub_827F28 */
{
    FN_ENTER(0x00827f28);
    /* 00827f28: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00827f2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00827f30: je 0x827f47 */ if (fZ) goto L_00827f47;
L_00827f32:; BB(0x00827f32);
    /* 00827f32: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00827f36: push dword ptr [ecx + 0x12124] */ { u32 v = R32((u32)(r_ecx+0x12124u)); r_esp -= 4; W32(r_esp, v); }
    /* 00827f3c: push dword ptr [ecx + 0x12120] */ { u32 v = R32((u32)(r_ecx+0x12120u)); r_esp -= 4; W32(r_esp, v); }
    /* 00827f42: call 0x7d40c4 */ r_esp -= 4; W32(r_esp, 0x827f47u); f_007d40c4();
L_00827f47:; BB(0x00827f47);
    /* 00827f47: ret  */ FN_RET(0x00827f28); r_esp += 4; return;
}

void f_00827f48(void) /* sub_827F48 */
{
    FN_ENTER(0x00827f48);
    /* 00827f48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00827f49: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00827f4d: call 0x827f58 */ r_esp -= 4; W32(r_esp, 0x827f52u); f_00827f58();
    /* 00827f52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00827f53: ret  */ FN_RET(0x00827f48); r_esp += 4; return;
}

void f_00827f58(void) /* sub_827F58 */
{
    FN_ENTER(0x00827f58);
    /* 00827f58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00827f59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00827f5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00827f5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00827f5c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00827f5f: mov edi, eax */ r_edi = r_eax;
    /* 00827f61: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00827f64: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00827f66: mov eax, dword ptr [0xacb364] */ r_eax = R32((u32)(0xacb364u));
    /* 00827f6b: mov esi, eax */ r_esi = r_eax;
    /* 00827f6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00827f6f: jle 0x827fe3 */ if ((fZ||fS!=fO)) goto L_00827fe3;
L_00827f71:; BB(0x00827f71);
    /* 00827f71: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00827f75: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00827f78: lea ebx, [edx + edx*8] */ r_ebx = (u32)(r_edx+r_edx*8);
    /* 00827f7b: lea ebp, [edx + ebx*8] */ r_ebp = (u32)(r_edx+r_ebx*8);
    /* 00827f7e: imul ebx, edx, 0xfffffedc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xfffffedcu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00827f84: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00827f86: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00827f88: add ebx, 0x7fc */ {  u32 a = r_ebx; u32 b = 0x7fcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00827f8e: mov edi, edx */ r_edi = r_edx;
L_00827f90:; BB(0x00827f90);
    /* 00827f90: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00827f94: cmp ecx, dword ptr [ebp + 0xaca920] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xaca920u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00827f9a: jne 0x827fcd */ if (!fZ) goto L_00827fcd;
L_00827f9c:; BB(0x00827f9c);
    /* 00827f9c: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00827f9f: jge 0x827fc2 */ if ((fS==fO)) goto L_00827fc2;
L_00827fa1:; BB(0x00827fa1);
    /* 00827fa1: lea edx, [ebp + 0xaca920] */ r_edx = (u32)(r_ebp+0xaca920u);
    /* 00827fa7: lea ecx, [edx + 0x124] */ r_ecx = (u32)(r_edx+0x124u);
    /* 00827fad: mov eax, ebx */ r_eax = r_ebx;
    /* 00827faf: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00827fb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00827fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00827fb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00827fb5: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x827fbau); f_0086b6b8();
    /* 00827fba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00827fbd: mov eax, dword ptr [0xacb364] */ r_eax = R32((u32)(0xacb364u));
L_00827fc2:; BB(0x00827fc2);
    /* 00827fc2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00827fc5: mov dword ptr [0xacb364], eax */ W32((u32)(0xacb364u), r_eax);
    /* 00827fca: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00827fcd:; BB(0x00827fcd);
    /* 00827fcd: add ebp, 0x124 */ {  u32 a = r_ebp; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00827fd3: add ebx, 0xfffffedc */ {  u32 a = r_ebx; u32 b = 0xfffffedcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00827fd9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00827fdc: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00827fde: jl 0x827f90 */ if ((fS!=fO)) goto L_00827f90;
L_00827fe0:; BB(0x00827fe0);
    /* 00827fe0: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00827fe3:; BB(0x00827fe3);
    /* 00827fe3: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00827fe6: jl 0x82800e */ if ((fS!=fO)) goto L_0082800e;
L_00827fe8:; BB(0x00827fe8);
    /* 00827fe8: push 0x7fc */ { u32 v = 0x7fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00827fed: mov ecx, 0xaca920 */ r_ecx = 0xaca920u;
    /* 00827ff2: lea edx, [ecx + 0x124] */ r_edx = (u32)(r_ecx+0x124u);
    /* 00827ff8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00827ff9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00827ffa: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x827fffu); f_0086b6b8();
    /* 00827fff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00828002: add dword ptr [0xacb364], -1 */ { u32 ad = (u32)(0xacb364u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00828009: mov esi, 7 */ r_esi = 0x7u;
L_0082800e:; BB(0x0082800e);
    /* 0082800e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082800f: lea edx, [esi + esi*8] */ r_edx = (u32)(r_esi+r_esi*8);
    /* 00828012: lea ebx, [esi + edx*8] */ r_ebx = (u32)(r_esi+r_edx*8);
    /* 00828015: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00828017: lea ecx, [ebx + ebx + 0xaca920] */ r_ecx = (u32)(r_ebx+r_ebx+0xaca920u);
    /* 0082801e: call 0x828044 */ r_esp -= 4; W32(r_esp, 0x828023u); f_00828044();
    /* 00828023: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0082802a: add dword ptr [0xacb364], 1 */ { u32 ad = (u32)(0xacb364u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00828031: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00828036: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0082803c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082803f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00828040: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00828041: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00828042: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00828043: ret  */ FN_RET(0x00827f58); r_esp += 4; return;
}

