#include "protos.h"

void f_005a7080(void) /* sub_5A7080 */
{
    FN_ENTER(0x005a7080);
    /* 005a7080: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005a7084: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a7087: ja 0x5a7136 */ if ((!fC&&!fZ)) goto L_005a7136;
L_005a708d:; BB(0x005a708d);
    /* 005a708d: mov eax, dword ptr [eax*4 + 0x92a230] */ r_eax = R32((u32)(r_eax*4+0x92a230u));
    /* 005a7094: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a7080); r_esp += 12; return;
}

void f_005a7096(void)
{
    FN_ENTER(0x005a7096);
    /* 005a7096: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a709a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a709b: call 0x5a713c */ r_esp -= 4; W32(r_esp, 0x5a70a0u); f_005a713c();
    /* 005a70a0: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a7096); r_esp += 12; return;
}

void f_005a70a5(void)
{
    FN_ENTER(0x005a70a5);
    /* 005a70a5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a70a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a70aa: call 0x5a72d8 */ r_esp -= 4; W32(r_esp, 0x5a70afu); f_005a72d8();
    /* 005a70af: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a70a5); r_esp += 12; return;
}

void f_005a70b4(void)
{
    FN_ENTER(0x005a70b4);
    /* 005a70b4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a70b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a70b9: call 0x5a7498 */ r_esp -= 4; W32(r_esp, 0x5a70beu); f_005a7498();
    /* 005a70be: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a70b4); r_esp += 12; return;
}

void f_005a70c0(void)
{
    FN_ENTER(0x005a70c0);
    /* 005a70c0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a70c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a70c5: call 0x5a75b4 */ r_esp -= 4; W32(r_esp, 0x5a70cau); f_005a75b4();
    /* 005a70ca: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a70c0); r_esp += 12; return;
}

void f_005a70cc(void)
{
    FN_ENTER(0x005a70cc);
    /* 005a70cc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a70d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a70d1: call 0x5a7c78 */ r_esp -= 4; W32(r_esp, 0x5a70d6u); f_005a7c78();
    /* 005a70d6: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a70cc); r_esp += 12; return;
}

void f_005a70d8(void)
{
    FN_ENTER(0x005a70d8);
    /* 005a70d8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a70dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a70dd: call 0x5a7f24 */ r_esp -= 4; W32(r_esp, 0x5a70e2u); f_005a7f24();
    /* 005a70e2: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a70d8); r_esp += 12; return;
}

void f_005a70e4(void)
{
    FN_ENTER(0x005a70e4);
    /* 005a70e4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a70e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a70e9: call 0x5a8290 */ r_esp -= 4; W32(r_esp, 0x5a70eeu); f_005a8290();
    /* 005a70ee: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a70e4); r_esp += 12; return;
}

void f_005a70f0(void)
{
    FN_ENTER(0x005a70f0);
    /* 005a70f0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a70f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a70f5: call 0x5a8d98 */ r_esp -= 4; W32(r_esp, 0x5a70fau); f_005a8d98();
    /* 005a70fa: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a70f0); r_esp += 12; return;
}

void f_005a70fc(void)
{
    FN_ENTER(0x005a70fc);
    /* 005a70fc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a7100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7101: call 0x5a900c */ r_esp -= 4; W32(r_esp, 0x5a7106u); f_005a900c();
    /* 005a7106: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a70fc); r_esp += 12; return;
}

void f_005a7108(void)
{
    FN_ENTER(0x005a7108);
    /* 005a7108: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a710c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a710d: call 0x5a90c4 */ r_esp -= 4; W32(r_esp, 0x5a7112u); f_005a90c4();
    /* 005a7112: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a7108); r_esp += 12; return;
}

void f_005a7114(void)
{
    FN_ENTER(0x005a7114);
    /* 005a7114: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a7118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7119: call 0x5a971c */ r_esp -= 4; W32(r_esp, 0x5a711eu); f_005a971c();
    /* 005a711e: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a7114); r_esp += 12; return;
}

void f_005a7120(void)
{
    FN_ENTER(0x005a7120);
    /* 005a7120: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a7124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7125: call 0x5a9908 */ r_esp -= 4; W32(r_esp, 0x5a712au); f_005a9908();
    /* 005a712a: jmp 0x5a7136 */ goto L_005a7136;
L_005a7136:; BB(0x005a7136);
    /* 005a7136: ret 8 */ FN_RET(0x005a7120); r_esp += 12; return;
}

void f_005a712c(void)
{
    FN_ENTER(0x005a712c);
    /* 005a712c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a7130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7131: call 0x5a9bf8 */ r_esp -= 4; W32(r_esp, 0x5a7136u); f_005a9bf8();
    /* 005a7136: ret 8 */ FN_RET(0x005a712c); r_esp += 12; return;
}

void f_005a713c(void) /* sub_5A713C */
{
    FN_ENTER(0x005a713c);
    /* 005a713c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a713d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a7140: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a7142: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005a7146: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7149: je 0x5a729e */ if (fZ) goto L_005a729e;
L_005a714f:; BB(0x005a714f);
    /* 005a714f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7152: je 0x5a720d */ if (fZ) goto L_005a720d;
L_005a7158:; BB(0x005a7158);
    /* 005a7158: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a715a: jne 0x5a7221 */ if (!fZ) goto L_005a7221;
L_005a7160:; BB(0x005a7160);
    /* 005a7160: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a7162: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a7167u); f_007aa094();
    /* 005a7167: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a716c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a716e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a7173u); f_007aaa30();
    /* 005a7173: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7175: jne 0x5a7228 */ if (!fZ) goto L_005a7228;
L_005a717b:; BB(0x005a717b);
    /* 005a717b: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7180: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a7182: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a7187u); f_007aaa30();
    /* 005a7187: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7189: je 0x5a71b1 */ if (fZ) goto L_005a71b1;
L_005a718b:; BB(0x005a718b);
    /* 005a718b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a7190u); f_00807ac0();
    /* 005a7190: push dword ptr [eax*4 + 0x9c0ae0] */ { u32 v = R32((u32)(r_eax*4+0x9c0ae0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a7197: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a7199: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a719eu); f_007879b8();
    /* 005a719e: mov ecx, eax */ r_ecx = r_eax;
    /* 005a71a0: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005a71a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a71a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a71a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a71a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a71a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a71a9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a71aeu); f_00814298();
    /* 005a71ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a71b1:; BB(0x005a71b1);
    /* 005a71b1: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 005a71b7: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a71b9: je 0x5a71f2 */ if (fZ) goto L_005a71f2;
L_005a71bb:; BB(0x005a71bb);
    /* 005a71bb: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 005a71c1: mov edx, dword ptr [ebx + 0x500] */ r_edx = R32((u32)(r_ebx+0x500u));
    /* 005a71c7: mov dword ptr [ebx + 0x4dc], 1 */ W32((u32)(r_ebx+0x4dcu), 0x1u);
    /* 005a71d1: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a71d4: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 005a71da: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005a71dd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005a71e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a71e2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a71e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a71e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a71e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a71ea: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a71ec: mov dword ptr [ebx + 0x498], edx */ W32((u32)(r_ebx+0x498u), r_edx);
L_005a71f2:; BB(0x005a71f2);
    /* 005a71f2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005a71f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a71f6: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a71fcu); call_ind(t); }
    /* 005a71fc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005a71fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a7200: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a7206u); call_ind(t); }
    /* 005a7206: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a7209: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a720a: ret 4 */ FN_RET(0x005a713c); r_esp += 8; return;
L_005a720d:; BB(0x005a720d);
    /* 005a720d: mov eax, dword ptr [ebx + 0x4dc] */ r_eax = R32((u32)(r_ebx+0x4dcu));
    /* 005a7213: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7216: jne 0x5a7221 */ if (!fZ) goto L_005a7221;
L_005a7218:; BB(0x005a7218);
    /* 005a7218: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a721a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a721c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a7221u); f_0051f62c();
L_005a7221:; BB(0x005a7221);
    /* 005a7221: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a7224: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a7225: ret 4 */ FN_RET(0x005a713c); r_esp += 8; return;
L_005a7228:; BB(0x005a7228);
    /* 005a7228: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005a722b: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005a722e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a7231: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005a7234: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005a7238: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005a723c: fadd dword ptr [0x92a3e8] */ ST(0) = ST(0) + R_F32((u32)(0x92a3e8u));
    /* 005a7242: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a7246: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a724a: mov eax, dword ptr [ebx + 0x4d8] */ r_eax = R32((u32)(r_ebx+0x4d8u));
    /* 005a7250: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7252: je 0x5a7279 */ if (fZ) goto L_005a7279;
L_005a7254:; BB(0x005a7254);
    /* 005a7254: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a7257: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 005a725c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a725d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a7262u); f_0050b510();
    /* 005a7262: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005a7266: push 0x21e */ { u32 v = 0x21eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a726b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a726c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a7271u); f_0050b510();
    /* 005a7271: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7274: jmp 0x5a717b */ goto L_005a717b;
L_005a7279:; BB(0x005a7279);
    /* 005a7279: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a727c: push 0x21b */ { u32 v = 0x21bu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7282: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a7287u); f_0050b510();
    /* 005a7287: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005a728b: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7291: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a7296u); f_0050b510();
    /* 005a7296: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7299: jmp 0x5a717b */ goto L_005a717b;
L_005a729e:; BB(0x005a729e);
    /* 005a729e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a72a0: mov eax, 8 */ r_eax = 0x8u;
    /* 005a72a5: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005a72ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a72ae: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a72b3u); f_0051f664();
    /* 005a72b3: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 005a72b9: mov dword ptr [ebx + 0x4dc], 0 */ W32((u32)(r_ebx+0x4dcu), 0x0u);
    /* 005a72c3: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a72c6: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a72c9: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 005a72cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a72d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a72d3: ret 4 */ FN_RET(0x005a713c); r_esp += 8; return;
}

void f_005a72d8(void) /* sub_5A72D8 */
{
    FN_ENTER(0x005a72d8);
    /* 005a72d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a72d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a72da: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a72dc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005a72e0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a72e3: je 0x5a7431 */ if (fZ) goto L_005a7431;
L_005a72e9:; BB(0x005a72e9);
    /* 005a72e9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a72ec: je 0x5a7414 */ if (fZ) goto L_005a7414;
L_005a72f2:; BB(0x005a72f2);
    /* 005a72f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a72f4: jne 0x5a73fd */ if (!fZ) goto L_005a73fd;
L_005a72fa:; BB(0x005a72fa);
    /* 005a72fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a72fc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a7301u); f_007aa094();
    /* 005a7301: mov eax, dword ptr [ebx + 0x4dc] */ r_eax = R32((u32)(r_ebx+0x4dcu));
    /* 005a7307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7309: jne 0x5a73bd */ if (!fZ) goto L_005a73bd;
L_005a730f:; BB(0x005a730f);
    /* 005a730f: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7314: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a7316: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a731bu); f_007aaa30();
    /* 005a731b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a731d: je 0x5a7392 */ if (fZ) goto L_005a7392;
L_005a731f:; BB(0x005a731f);
    /* 005a731f: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7321: lea edi, [ebx + 0x300] */ r_edi = (u32)(r_ebx+0x300u);
    /* 005a7327: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a7328: call 0x578778 */ r_esp -= 4; W32(r_esp, 0x5a732du); f_00578778();
    /* 005a732d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7330: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a7332: call 0x5a8d20 */ r_esp -= 4; W32(r_esp, 0x5a7337u); f_005a8d20();
    /* 005a7337: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a733cu); f_00807ac0();
    /* 005a733c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a733e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a733f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7340: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a7341: push dword ptr [eax*4 + 0x9c0b04] */ { u32 v = R32((u32)(r_eax*4+0x9c0b04u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a7348: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a734du); f_00814298();
    /* 005a734d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7350: mov edi, 1 */ r_edi = 0x1u;
    /* 005a7355: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x5a735au); f_007bb6d0();
    /* 005a735a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a735b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5a7360u); f_0068d5a8();
    /* 005a7360: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a7361: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7363: je 0x5a7392 */ if (fZ) goto L_005a7392;
L_005a7365:; BB(0x005a7365);
    /* 005a7365: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7368: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a736a: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5a736fu); f_00771458();
    /* 005a736f: fcom dword ptr [0x92a3b8] */ fx_compare(ST(0), R_F32((u32)(0x92a3b8u))); 
    /* 005a7375: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a7377: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a7378: ja 0x5a7490 */ if ((!fC&&!fZ)) goto L_005a7490;
L_005a737e:; BB(0x005a737e);
    /* 005a737e: fcomp dword ptr [0x92a3b4] */ fx_compare(ST(0), R_F32((u32)(0x92a3b4u))); FPOP();
    /* 005a7384: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a7386: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a7387: jbe 0x5a738b */ if ((fC||fZ)) goto L_005a738b;
L_005a7389:; BB(0x005a7389);
    /* 005a7389: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005a738b:; BB(0x005a738b);
    /* 005a738b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a738c: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x5a7391u); f_004d4288();
    /* 005a7391: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005a7392:; BB(0x005a7392);
    /* 005a7392: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 005a7398: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a739a: je 0x5a742c */ if (fZ) goto L_005a742c;
L_005a73a0:; BB(0x005a73a0);
    /* 005a73a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a73a2: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005a73a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a73a6: call 0x578148 */ r_esp -= 4; W32(r_esp, 0x5a73abu); f_00578148();
    /* 005a73ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a73ae: mov dword ptr [ebx + 0x4dc], 1 */ W32((u32)(r_ebx+0x4dcu), 0x1u);
    /* 005a73b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a73b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a73ba: ret 4 */ FN_RET(0x005a72d8); r_esp += 8; return;
L_005a73bd:; BB(0x005a73bd);
    /* 005a73bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a73c0: jne 0x5a73ee */ if (!fZ) goto L_005a73ee;
L_005a73c2:; BB(0x005a73c2);
    /* 005a73c2: fld dword ptr [ebx + 0x4d4] */ FPUSH(R_F32((u32)(r_ebx+0x4d4u)));
    /* 005a73c8: fsub dword ptr [0x92a3b0] */ ST(0) = ST(0) - R_F32((u32)(0x92a3b0u));
    /* 005a73ce: fcom dword ptr [0x92a3ac] */ fx_compare(ST(0), R_F32((u32)(0x92a3acu))); 
    /* 005a73d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a73d6: fstp dword ptr [ebx + 0x4d4] */ W_F32((u32)(r_ebx+0x4d4u), ST(0)); FPOP();
    /* 005a73dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a73dd: jae 0x5a742c */ if (!fC) goto L_005a742c;
L_005a73df:; BB(0x005a73df);
    /* 005a73df: mov dword ptr [ebx + 0x4dc], 2 */ W32((u32)(r_ebx+0x4dcu), 0x2u);
    /* 005a73e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a73ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a73eb: ret 4 */ FN_RET(0x005a72d8); r_esp += 8; return;
L_005a73ee:; BB(0x005a73ee);
    /* 005a73ee: mov dword ptr [ebx + 0x4dc], 2 */ W32((u32)(r_ebx+0x4dcu), 0x2u);
    /* 005a73f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a73f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a73fa: ret 4 */ FN_RET(0x005a72d8); r_esp += 8; return;
L_005a73fd:; BB(0x005a73fd);
    /* 005a73fd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a7400: jne 0x5a742c */ if (!fZ) goto L_005a742c;
L_005a7402:; BB(0x005a7402);
    /* 005a7402: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005a7406: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a740b: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005a740f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a7410: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a7411: ret 4 */ FN_RET(0x005a72d8); r_esp += 8; return;
L_005a7414:; BB(0x005a7414);
    /* 005a7414: mov eax, dword ptr [ebx + 0x4dc] */ r_eax = R32((u32)(r_ebx+0x4dcu));
    /* 005a741a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a741d: jne 0x5a742c */ if (!fZ) goto L_005a742c;
L_005a741f:; BB(0x005a741f);
    /* 005a741f: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005a7423: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a7428: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_005a742c:; BB(0x005a742c);
    /* 005a742c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a742d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a742e: ret 4 */ FN_RET(0x005a72d8); r_esp += 8; return;
L_005a7431:; BB(0x005a7431);
    /* 005a7431: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 005a7437: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 005a7439: mov eax, 9 */ r_eax = 0x9u;
    /* 005a743e: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005a7445: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a7448: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 005a744e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a7450: call dword ptr [edi + 0x180] */ { u32 t = R32((u32)(r_edi+0x180u)); r_esp -= 4; W32(r_esp, 0x5a7456u); call_ind(t); }
    /* 005a7456: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a7458: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x5a745du); f_0051f894();
    /* 005a745d: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a7462u); f_00807ac0();
    /* 005a7462: push dword ptr [eax*4 + 0x9c0b4c] */ { u32 v = R32((u32)(r_eax*4+0x9c0b4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a7469: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a746b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a7470u); f_007879b8();
    /* 005a7470: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 005a7473: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a7475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7476: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7477: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a7478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7479: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a747eu); f_00814298();
    /* 005a747e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a7481: mov dword ptr [ebx + 0x4dc], 0 */ W32((u32)(r_ebx+0x4dcu), 0x0u);
    /* 005a748b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a748c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a748d: ret 4 */ FN_RET(0x005a72d8); r_esp += 8; return;
L_005a7490:; BB(0x005a7490);
    /* 005a7490: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a7492: jmp 0x5a7392 */ goto L_005a7392;
}

void f_005a7498(void) /* sub_5A7498 */
{
    FN_ENTER(0x005a7498);
    /* 005a7498: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a7499: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a749c: mov edi, ecx */ r_edi = r_ecx;
    /* 005a749e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005a74a2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a74a5: je 0x5a7593 */ if (fZ) goto L_005a7593;
L_005a74ab:; BB(0x005a74ab);
    /* 005a74ab: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a74ae: je 0x5a7554 */ if (fZ) goto L_005a7554;
L_005a74b4:; BB(0x005a74b4);
    /* 005a74b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a74b6: jne 0x5a753a */ if (!fZ) goto L_005a753a;
L_005a74bc:; BB(0x005a74bc);
    /* 005a74bc: mov ecx, edi */ r_ecx = r_edi;
    /* 005a74be: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a74c3u); f_007aa094();
    /* 005a74c3: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 005a74c9: mov edx, dword ptr [edi + 0x310] */ r_edx = R32((u32)(r_edi+0x310u));
    /* 005a74cf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a74d2: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 005a74d8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005a74dc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a74e0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a74e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a74e4: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5a74e9u); f_007828e4();
    /* 005a74e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a74ea: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a74ed: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005a74f1: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005a74f5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005a74f9: mov ecx, edi */ r_ecx = r_edi;
    /* 005a74fb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a74fe: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005a7502: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5a7507u); f_005209d4();
    /* 005a7507: fld dword ptr [0x92a3a8] */ FPUSH(R_F32((u32)(0x92a3a8u)));
    /* 005a750d: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 005a7513: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005a7515: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 005a751b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a751d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005a751f: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 005a7525: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 005a752b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a752d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a7533u); call_ind(t); }
    /* 005a7533: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a7536: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a7537: ret 4 */ FN_RET(0x005a7498); r_esp += 8; return;
L_005a753a:; BB(0x005a753a);
    /* 005a753a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a753d: jne 0x5a758c */ if (!fZ) goto L_005a758c;
L_005a753f:; BB(0x005a753f);
    /* 005a753f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a7541: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5a7546u); f_0051f81c();
    /* 005a7546: mov ecx, edi */ r_ecx = r_edi;
    /* 005a7548: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5a754du); f_00520be8();
    /* 005a754d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a7550: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a7551: ret 4 */ FN_RET(0x005a7498); r_esp += 8; return;
L_005a7554:; BB(0x005a7554);
    /* 005a7554: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005a755a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a755c: je 0x5a758c */ if (fZ) goto L_005a758c;
L_005a755e:; BB(0x005a755e);
    /* 005a755e: mov ecx, edi */ r_ecx = r_edi;
    /* 005a7560: call 0x54b3d0 */ r_esp -= 4; W32(r_esp, 0x5a7565u); f_0054b3d0();
    /* 005a7565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7567: jne 0x5a758c */ if (!fZ) goto L_005a758c;
L_005a7569:; BB(0x005a7569);
    /* 005a7569: mov ecx, edi */ r_ecx = r_edi;
    /* 005a756b: call 0x54b420 */ r_esp -= 4; W32(r_esp, 0x5a7570u); f_0054b420();
    /* 005a7570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7572: jne 0x5a758c */ if (!fZ) goto L_005a758c;
L_005a7574:; BB(0x005a7574);
    /* 005a7574: mov ecx, edi */ r_ecx = r_edi;
    /* 005a7576: call 0x54b44c */ r_esp -= 4; W32(r_esp, 0x5a757bu); f_0054b44c();
    /* 005a757b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a757d: jne 0x5a758c */ if (!fZ) goto L_005a758c;
L_005a757f:; BB(0x005a757f);
    /* 005a757f: push dword ptr [edi + 0x380] */ { u32 v = R32((u32)(r_edi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a7585: mov ecx, edi */ r_ecx = r_edi;
    /* 005a7587: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a758cu); f_0051f62c();
L_005a758c:; BB(0x005a758c);
    /* 005a758c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a758f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a7590: ret 4 */ FN_RET(0x005a7498); r_esp += 8; return;
L_005a7593:; BB(0x005a7593);
    /* 005a7593: mov eax, 6 */ r_eax = 0x6u;
    /* 005a7598: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005a759f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a75a1: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a75a6u); f_007aa094();
    /* 005a75a6: mov ecx, edi */ r_ecx = r_edi;
    /* 005a75a8: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5a75adu); f_00520bdc();
    /* 005a75ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a75b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a75b1: ret 4 */ FN_RET(0x005a7498); r_esp += 8; return;
}

void f_005a75b4(void) /* sub_5A75B4 */
{
    FN_ENTER(0x005a75b4);
    /* 005a75b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a75b5: mov ebx, esp */ r_ebx = r_esp;
    /* 005a75b7: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005a75ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a75bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a75bc: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 005a75bf: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005a75c3: mov ebp, esp */ r_ebp = r_esp;
    /* 005a75c5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a75c7: push 0x8d8b5a */ { u32 v = 0x8d8b5au; r_esp -= 4; W32(r_esp, v); }
    /* 005a75cc: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a75d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a75d3: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a75da: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a75e0: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a75e3: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005a75e6: mov dword ptr [ebp - 0x98], edi */ W32((u32)(r_ebp+0xffffff68u), r_edi);
    /* 005a75ec: mov dword ptr [ebp - 0x94], esi */ W32((u32)(r_ebp+0xffffff6cu), r_esi);
    /* 005a75f2: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005a75f5: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005a75f8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a75fb: je 0x5a7c31 */ if (fZ) goto L_005a7c31;
L_005a7601:; BB(0x005a7601);
    /* 005a7601: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7604: je 0x5a78dd */ if (fZ) goto L_005a78dd;
L_005a760a:; BB(0x005a760a);
    /* 005a760a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a760c: jne 0x5a78c5 */ if (!fZ) goto L_005a78c5;
L_005a7612:; BB(0x005a7612);
    /* 005a7612: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a7617u); f_007aa094();
    /* 005a7617: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a761a: mov eax, dword ptr [eax + 0x4dc] */ r_eax = R32((u32)(r_eax+0x4dcu));
    /* 005a7620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7622: je 0x5a780f */ if (fZ) goto L_005a780f;
L_005a7628:; BB(0x005a7628);
    /* 005a7628: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a762b: jne 0x5a7676 */ if (!fZ) goto L_005a7676;
L_005a762d:; BB(0x005a762d);
    /* 005a762d: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7630: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7635: push dword ptr [eax + 0x4e8] */ { u32 v = R32((u32)(r_eax+0x4e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a763b: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a763e: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5a7643u); f_007a8c74();
    /* 005a7643: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7646: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7649: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 005a764c: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005a764f: cmp eax, dword ptr [edx + 0x4e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7655: jne 0x5a77f4 */ if (!fZ) goto L_005a77f4;
L_005a765b:; BB(0x005a765b);
    /* 005a765b: mov dword ptr [edx + 0x4dc], 2 */ W32((u32)(r_edx+0x4dcu), 0x2u);
    /* 005a7665: mov eax, 5 */ r_eax = 0x5u;
    /* 005a766a: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 005a7671: jmp 0x5a77f4 */ goto L_005a77f4;
L_005a7676:; BB(0x005a7676);
    /* 005a7676: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7679: jne 0x5a77f4 */ if (!fZ) goto L_005a77f4;
L_005a767f:; BB(0x005a767f);
    /* 005a767f: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7682: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005a7688: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a768b: je 0x5a7694 */ if (fZ) goto L_005a7694;
L_005a768d:; BB(0x005a768d);
    /* 005a768d: mov eax, 1 */ r_eax = 0x1u;
    /* 005a7692: jmp 0x5a7696 */ goto L_005a7696;
L_005a7694:; BB(0x005a7694);
    /* 005a7694: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a7696:; BB(0x005a7696);
    /* 005a7696: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7698: je 0x5a7782 */ if (fZ) goto L_005a7782;
L_005a769e:; BB(0x005a769e);
    /* 005a769e: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5a76a3u); f_00520e6c();
    /* 005a76a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a76a5: je 0x5a7775 */ if (fZ) goto L_005a7775;
L_005a76ab:; BB(0x005a76ab);
    /* 005a76ab: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a76ae: mov edx, dword ptr [eax + 0x4e0] */ r_edx = R32((u32)(r_eax+0x4e0u));
    /* 005a76b4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a76b7: mov dword ptr [eax + 0x4e0], edx */ W32((u32)(r_eax+0x4e0u), r_edx);
    /* 005a76bd: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a76c0: jge 0x5a7775 */ if ((fS==fO)) goto L_005a7775;
L_005a76c6:; BB(0x005a76c6);
    /* 005a76c6: fld dword ptr [0x92a3a4] */ FPUSH(R_F32((u32)(0x92a3a4u)));
    /* 005a76cc: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 005a76d1: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 005a76d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a76d9: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 005a76de: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 005a76e4: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005a76e7: mov edi, 0 */ r_edi = 0x0u;
    /* 005a76ec: jle 0x5a7928 */ if ((fZ||fS!=fO)) goto L_005a7928;
L_005a76f2:; BB(0x005a76f2);
    /* 005a76f2: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 005a76f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a76fa: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x5a76ffu); f_00520f3c();
    /* 005a76ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a7700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7702: je 0x5a7766 */ if (fZ) goto L_005a7766;
L_005a7704:; BB(0x005a7704);
    /* 005a7704: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7707: lea ecx, [eax + 0x300] */ r_ecx = (u32)(r_eax+0x300u);
    /* 005a770d: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005a7713: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005a7716: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7717: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7718: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5a771du); f_007a9180();
    /* 005a771d: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 005a7723: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7726: fld dword ptr [ebp - 0x84] */ FPUSH(R_F32((u32)(r_ebp+0xffffff7cu)));
    /* 005a772c: fcomp dword ptr [0xa74804] */ fx_compare(ST(0), R_F32((u32)(0xa74804u))); FPOP();
    /* 005a7732: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a7734: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a7735: jae 0x5a7766 */ if (!fC) goto L_005a7766;
L_005a7737:; BB(0x005a7737);
    /* 005a7737: fld dword ptr [ebp - 0x84] */ FPUSH(R_F32((u32)(r_ebp+0xffffff7cu)));
    /* 005a773d: fcomp dword ptr [ebp - 0x8c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffff74u))); FPOP();
    /* 005a7743: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a7745: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a7746: jbe 0x5a7766 */ if ((fC||fZ)) goto L_005a7766;
L_005a7748:; BB(0x005a7748);
    /* 005a7748: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a774e: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005a7754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7755: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7756: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5a775bu); f_00780d3c();
    /* 005a775b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a775e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7760: je 0x5a790d */ if (fZ) goto L_005a790d;
L_005a7766:; BB(0x005a7766);
    /* 005a7766: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005a7769: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a776c: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a776e: jl 0x5a76f2 */ if ((fS!=fO)) goto L_005a76f2;
L_005a7770:; BB(0x005a7770);
    /* 005a7770: jmp 0x5a7928 */ goto L_005a7928;
L_005a7775:; BB(0x005a7775);
    /* 005a7775: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7778: mov dword ptr [eax + 0x4dc], 4 */ W32((u32)(r_eax+0x4dcu), 0x4u);
L_005a7782:; BB(0x005a7782);
    /* 005a7782: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7787: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a778a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a778fu); f_007aaa30();
    /* 005a778f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7791: jne 0x5a79d1 */ if (!fZ) goto L_005a79d1;
L_005a7797:; BB(0x005a7797);
    /* 005a7797: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a779c: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a779f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a77a4u); f_007aaa30();
    /* 005a77a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a77a6: je 0x5a77f4 */ if (fZ) goto L_005a77f4;
L_005a77a8:; BB(0x005a77a8);
    /* 005a77a8: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a77ab: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 005a77b0: lea edx, [eax + 0x468] */ r_edx = (u32)(r_eax+0x468u);
    /* 005a77b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a77b7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a77bcu); f_0050b510();
    /* 005a77bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a77bf: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a77c2: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 005a77c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a77ca: je 0x5a77f4 */ if (fZ) goto L_005a77f4;
L_005a77cc:; BB(0x005a77cc);
    /* 005a77cc: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a77d1u); f_00807ac0();
    /* 005a77d1: push dword ptr [eax*4 + 0x9c0a08] */ { u32 v = R32((u32)(r_eax*4+0x9c0a08u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a77d8: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a77db: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a77e0u); f_007879b8();
    /* 005a77e0: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a77e3: lea esi, [edx + 0x38] */ r_esi = (u32)(r_edx+0x38u);
    /* 005a77e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a77e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a77e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a77ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a77eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a77ec: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a77f1u); f_00814298();
    /* 005a77f1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a77f4:; BB(0x005a77f4);
    /* 005a77f4: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a77f7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a77f9: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a77ffu); call_ind(t); }
    /* 005a77ff: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7802: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a7804: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a780au); call_ind(t); }
    /* 005a780a: jmp 0x5a78ee */ goto L_005a78ee;
L_005a780f:; BB(0x005a780f);
    /* 005a780f: fld dword ptr [0x92a3a4] */ FPUSH(R_F32((u32)(0x92a3a4u)));
    /* 005a7815: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 005a781a: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 005a7820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a7822: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 005a7827: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 005a782a: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005a7830: mov edi, 0 */ r_edi = 0x0u;
    /* 005a7835: jle 0x5a7b7e */ if ((fZ||fS!=fO)) goto L_005a7b7e;
L_005a783b:; BB(0x005a783b);
    /* 005a783b: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 005a7842: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a7843: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x5a7848u); f_00520f3c();
    /* 005a7848: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a7849: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a784b: je 0x5a78af */ if (fZ) goto L_005a78af;
L_005a784d:; BB(0x005a784d);
    /* 005a784d: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7850: lea ecx, [eax + 0x300] */ r_ecx = (u32)(r_eax+0x300u);
    /* 005a7856: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005a785c: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005a785f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7860: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7861: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5a7866u); f_007a9180();
    /* 005a7866: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 005a786c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a786f: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 005a7875: fcomp dword ptr [0xa74804] */ fx_compare(ST(0), R_F32((u32)(0xa74804u))); FPOP();
    /* 005a787b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a787d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a787e: jae 0x5a78af */ if (!fC) goto L_005a78af;
L_005a7880:; BB(0x005a7880);
    /* 005a7880: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 005a7886: fcomp dword ptr [ebp - 0x84] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffff7cu))); FPOP();
    /* 005a788c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a788e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a788f: jbe 0x5a78af */ if ((fC||fZ)) goto L_005a78af;
L_005a7891:; BB(0x005a7891);
    /* 005a7891: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7897: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005a789d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a789e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a789f: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5a78a4u); f_00780d3c();
    /* 005a78a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a78a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a78a9: je 0x5a7b66 */ if (fZ) goto L_005a7b66;
L_005a78af:; BB(0x005a78af);
    /* 005a78af: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005a78b5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a78b8: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a78ba: jl 0x5a783b */ if ((fS!=fO)) goto L_005a783b;
L_005a78c0:; BB(0x005a78c0);
    /* 005a78c0: jmp 0x5a7b7e */ goto L_005a7b7e;
L_005a78c5:; BB(0x005a78c5);
    /* 005a78c5: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a78c8: jne 0x5a78ee */ if (!fZ) goto L_005a78ee;
L_005a78ca:; BB(0x005a78ca);
    /* 005a78ca: mov edx, ecx */ r_edx = r_ecx;
    /* 005a78cc: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 005a78d2: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a78d5: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 005a78db: jmp 0x5a78ee */ goto L_005a78ee;
L_005a78dd:; BB(0x005a78dd);
    /* 005a78dd: mov eax, ecx */ r_eax = r_ecx;
    /* 005a78df: mov edx, dword ptr [eax + 0x4dc] */ r_edx = R32((u32)(r_eax+0x4dcu));
    /* 005a78e5: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a78e8: je 0x5a7c25 */ if (fZ) goto L_005a7c25;
L_005a78ee:; BB(0x005a78ee);
    /* 005a78ee: mov edi, dword ptr [ebp - 0x98] */ r_edi = R32((u32)(r_ebp+0xffffff68u));
    /* 005a78f4: mov esi, dword ptr [ebp - 0x94] */ r_esi = R32((u32)(r_ebp+0xffffff6cu));
    /* 005a78fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a78fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a7904: mov esp, ebp */ r_esp = r_ebp;
    /* 005a7906: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a7907: mov esp, ebx */ r_esp = r_ebx;
    /* 005a7909: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a790a: ret 4 */ FN_RET(0x005a75b4); r_esp += 8; return;
L_005a790d:; BB(0x005a790d);
    /* 005a790d: fld dword ptr [ebp - 0x84] */ FPUSH(R_F32((u32)(r_ebp+0xffffff7cu)));
    /* 005a7913: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 005a7917: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 005a791d: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005a7923: jmp 0x5a7766 */ goto L_005a7766;
L_005a7928:; BB(0x005a7928);
    /* 005a7928: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005a792e: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7933: je 0x5a79c4 */ if (fZ) goto L_005a79c4;
L_005a7939:; BB(0x005a7939);
    /* 005a7939: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a793c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a793d: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x5a7942u); f_00520fcc();
    /* 005a7942: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7945: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a794au); f_005213d8();
    /* 005a794a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a794d: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a7952u); f_00521410();
    /* 005a7952: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7955: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 005a795b: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 005a7961: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a7963: fmul qword ptr [0x92a2b8] */ ST(0) = ST(0) * R_F64((u32)(0x92a2b8u));
    /* 005a7969: fdiv qword ptr [0x92a2b0] */ ST(0) = ST(0) / R_F64((u32)(0x92a2b0u));
    /* 005a796f: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7972: fnstcw word ptr [ebp - 0xb0] */ W16((u32)(r_ebp+0xffffff50u), fcw);
    /* 005a7978: movzx eax, word ptr [ebp - 0xb0] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff50u));
    /* 005a797f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a7984: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005a798a: fldcw word ptr [ebp - 0xa8] */ fcw = R16((u32)(r_ebp+0xffffff58u));
    /* 005a7990: fistp dword ptr [ebp - 0xa0] */ W32((u32)(r_ebp+0xffffff60u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a7996: fldcw word ptr [ebp - 0xb0] */ fcw = R16((u32)(r_ebp+0xffffff50u));
    /* 005a799c: movzx eax, word ptr [ebp - 0xa0] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff60u));
    /* 005a79a3: mov dword ptr [ecx + 0x4e8], eax */ W32((u32)(r_ecx+0x4e8u), r_eax);
    /* 005a79a9: mov edx, 1 */ r_edx = 0x1u;
    /* 005a79ae: mov dword ptr [ecx + 0x4dc], 0 */ W32((u32)(r_ecx+0x4dcu), 0x0u);
    /* 005a79b8: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 005a79bf: jmp 0x5a7782 */ goto L_005a7782;
L_005a79c4:; BB(0x005a79c4);
    /* 005a79c4: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a79c7: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5a79ccu); f_00520f68();
    /* 005a79cc: jmp 0x5a7775 */ goto L_005a7775;
L_005a79d1:; BB(0x005a79d1);
    /* 005a79d1: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a79d4: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 005a79da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a79dc: jne 0x5a7a4a */ if (!fZ) goto L_005a7a4a;
L_005a79de:; BB(0x005a79de);
    /* 005a79de: mov edx, eax */ r_edx = r_eax;
    /* 005a79e0: mov eax, dword ptr [edx + 0x500] */ r_eax = R32((u32)(r_edx+0x500u));
    /* 005a79e6: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 005a79e9: mov eax, dword ptr [edx + 0x4e4] */ r_eax = R32((u32)(r_edx+0x4e4u));
    /* 005a79ef: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 005a79f5: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a79fa: jle 0x5a7a0c */ if ((fZ||fS!=fO)) goto L_005a7a0c;
L_005a79fc:; BB(0x005a79fc);
    /* 005a79fc: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 005a7a02: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005a7a04: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 005a7a0a: jmp 0x5a7a23 */ goto L_005a7a23;
L_005a7a0c:; BB(0x005a7a0c);
    /* 005a7a0c: cmp eax, 0x46 */ {  u32 a = r_eax; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7a0f: jle 0x5a7a23 */ if ((fZ||fS!=fO)) goto L_005a7a23;
L_005a7a11:; BB(0x005a7a11);
    /* 005a7a11: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 005a7a17: fmul dword ptr [0x92a39c] */ ST(0) = ST(0) * R_F32((u32)(0x92a39cu));
    /* 005a7a1d: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
L_005a7a23:; BB(0x005a7a23);
    /* 005a7a23: mov eax, edx */ r_eax = r_edx;
    /* 005a7a25: mov eax, dword ptr [eax + 0x4a8] */ r_eax = R32((u32)(r_eax+0x4a8u));
    /* 005a7a2b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005a7a2e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005a7a30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a7a32: jle 0x5a7ac7 */ if ((fZ||fS!=fO)) goto L_005a7ac7;
L_005a7a38:; BB(0x005a7a38);
    /* 005a7a38: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a7a3a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a7a3d: mov dword ptr [ecx + esi*4], edx */ W32((u32)(r_ecx+r_esi*4), r_edx);
    /* 005a7a40: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a7a43: cmp esi, dword ptr [eax + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7a46: jl 0x5a7a38 */ if ((fS!=fO)) goto L_005a7a38;
L_005a7a48:; BB(0x005a7a48);
    /* 005a7a48: jmp 0x5a7ac7 */ goto L_005a7ac7;
L_005a7a4a:; BB(0x005a7a4a);
    /* 005a7a4a: lea esi, [ebp - 0x6c] */ r_esi = (u32)(r_ebp+0xffffff94u);
    /* 005a7a4d: mov edi, 0xb */ r_edi = 0xbu;
    /* 005a7a52: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005a7a54:; BB(0x005a7a54);
    /* 005a7a54: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005a7a59: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 005a7a5c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a7a5e: mov word ptr [esi + 2], dx */ W16((u32)(r_esi+0x2u), (u16)r_edx);
    /* 005a7a62: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 005a7a65: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a7a68: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 005a7a6b: jne 0x5a7a54 */ if (!fZ) goto L_005a7a54;
L_005a7a6d:; BB(0x005a7a6d);
    /* 005a7a6d: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7a70: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 005a7a76: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 005a7a7d: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005a7a81: mov word ptr [ebp - 0x6c], dx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_edx);
    /* 005a7a85: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a7a87: mov word ptr [ebp - 0x6a], cx */ W16((u32)(r_ebp+0xffffff96u), (u16)r_ecx);
    /* 005a7a8b: mov edx, dword ptr [esi + 0x4e4] */ r_edx = R32((u32)(r_esi+0x4e4u));
    /* 005a7a91: cmp edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7a97: jle 0x5a7aa0 */ if ((fZ||fS!=fO)) goto L_005a7aa0;
L_005a7a99:; BB(0x005a7a99);
    /* 005a7a99: mov edx, 2 */ r_edx = 0x2u;
    /* 005a7a9e: jmp 0x5a7aae */ goto L_005a7aae;
L_005a7aa0:; BB(0x005a7aa0);
    /* 005a7aa0: cmp edx, 0x46 */ {  u32 a = r_edx; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7aa3: jle 0x5a7aac */ if ((fZ||fS!=fO)) goto L_005a7aac;
L_005a7aa5:; BB(0x005a7aa5);
    /* 005a7aa5: mov edx, 1 */ r_edx = 0x1u;
    /* 005a7aaa: jmp 0x5a7aae */ goto L_005a7aae;
L_005a7aac:; BB(0x005a7aac);
    /* 005a7aac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005a7aae:; BB(0x005a7aae);
    /* 005a7aae: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005a7ab1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ab2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ab3: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a7ab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ab7: mov eax, esi */ r_eax = r_esi;
    /* 005a7ab9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7aba: call 0x6e6bf4 */ r_esp -= 4; W32(r_esp, 0x5a7abfu); f_006e6bf4();
    /* 005a7abf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7ac2: jmp 0x5a7797 */ goto L_005a7797;
L_005a7ac7:; BB(0x005a7ac7);
    /* 005a7ac7: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7acc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a7ace: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 005a7ad1: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005a7ad4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a7ad9u); f_005caba4();
    /* 005a7ad9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a7ada: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005a7add: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7adf: je 0x5a7b32 */ if (fZ) goto L_005a7b32;
L_005a7ae1:; BB(0x005a7ae1);
    /* 005a7ae1: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 005a7ae8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a7aef: mov edi, dword ptr [ebp - 0x7c] */ r_edi = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7af2: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 005a7af8: mov esi, dword ptr [edi + 0x4e8] */ r_esi = R32((u32)(r_edi+0x4e8u));
    /* 005a7afe: mov ecx, dword ptr [edi + 0x4a8] */ r_ecx = R32((u32)(r_edi+0x4a8u));
    /* 005a7b04: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7b07: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005a7b0b: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005a7b0e: lea edx, [edi + 0x468] */ r_edx = (u32)(r_edi+0x468u);
    /* 005a7b14: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005a7b18: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005a7b1c: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 005a7b20: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 005a7b24: mov ecx, eax */ r_ecx = r_eax;
    /* 005a7b26: call 0x54df68 */ r_esp -= 4; W32(r_esp, 0x5a7b2bu); f_0054df68();
    /* 005a7b2b: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005a7b32:; BB(0x005a7b32);
    /* 005a7b32: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a7b39: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a7b3eu); f_00807ac0();
    /* 005a7b3e: push dword ptr [eax*4 + 0x9c0b28] */ { u32 v = R32((u32)(r_eax*4+0x9c0b28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a7b45: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7b48: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a7b4du); f_007879b8();
    /* 005a7b4d: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7b50: lea esi, [edx + 0x38] */ r_esi = (u32)(r_edx+0x38u);
    /* 005a7b53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a7b55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b59: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a7b5eu); f_00814298();
    /* 005a7b5e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7b61: jmp 0x5a7797 */ goto L_005a7797;
L_005a7b66:; BB(0x005a7b66);
    /* 005a7b66: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 005a7b6c: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 005a7b70: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 005a7b76: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005a7b79: jmp 0x5a78af */ goto L_005a78af;
L_005a7b7e:; BB(0x005a7b7e);
    /* 005a7b7e: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005a7b81: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7b86: je 0x5a7c0b */ if (fZ) goto L_005a7c0b;
L_005a7b8c:; BB(0x005a7b8c);
    /* 005a7b8c: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7b8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b90: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x5a7b95u); f_00520fcc();
    /* 005a7b95: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7b98: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a7b9du); f_005213d8();
    /* 005a7b9d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7ba0: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a7ba5u); f_00521410();
    /* 005a7ba5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7ba8: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 005a7bae: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 005a7bb4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a7bb6: fmul qword ptr [0x92a2b8] */ ST(0) = ST(0) * R_F64((u32)(0x92a2b8u));
    /* 005a7bbc: fdiv qword ptr [0x92a2b0] */ ST(0) = ST(0) / R_F64((u32)(0x92a2b0u));
    /* 005a7bc2: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7bc5: fnstcw word ptr [ebp - 0xb0] */ W16((u32)(r_ebp+0xffffff50u), fcw);
    /* 005a7bcb: movzx eax, word ptr [ebp - 0xb0] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff50u));
    /* 005a7bd2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a7bd7: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005a7bdd: fldcw word ptr [ebp - 0xa8] */ fcw = R16((u32)(r_ebp+0xffffff58u));
    /* 005a7be3: fistp dword ptr [ebp - 0xa0] */ W32((u32)(r_ebp+0xffffff60u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a7be9: fldcw word ptr [ebp - 0xb0] */ fcw = R16((u32)(r_ebp+0xffffff50u));
    /* 005a7bef: movzx eax, word ptr [ebp - 0xa0] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff60u));
    /* 005a7bf6: mov dword ptr [edx + 0x4e8], eax */ W32((u32)(r_edx+0x4e8u), r_eax);
    /* 005a7bfc: mov dword ptr [edx + 0x4dc], 1 */ W32((u32)(r_edx+0x4dcu), 0x1u);
    /* 005a7c06: jmp 0x5a77f4 */ goto L_005a77f4;
L_005a7c0b:; BB(0x005a7c0b);
    /* 005a7c0b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7c0e: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5a7c13u); f_00520f68();
    /* 005a7c13: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7c16: mov dword ptr [eax + 0x4dc], 4 */ W32((u32)(r_eax+0x4dcu), 0x4u);
    /* 005a7c20: jmp 0x5a77f4 */ goto L_005a77f4;
L_005a7c25:; BB(0x005a7c25);
    /* 005a7c25: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c27: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a7c2cu); f_0051f62c();
    /* 005a7c2c: jmp 0x5a78ee */ goto L_005a78ee;
L_005a7c31:; BB(0x005a7c31);
    /* 005a7c31: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c33: mov eax, 1 */ r_eax = 0x1u;
    /* 005a7c38: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a7c3f: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a7c44u); f_0051f664();
    /* 005a7c44: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7c47: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 005a7c4d: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a7c50: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a7c53: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 005a7c59: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a7c5b: mov dword ptr [ecx + 0x4dc], edx */ W32((u32)(r_ecx+0x4dcu), r_edx);
    /* 005a7c61: mov dword ptr [ecx + 0x4e0], edx */ W32((u32)(r_ecx+0x4e0u), r_edx);
    /* 005a7c67: mov dword ptr [ecx + 0x4e4], edx */ W32((u32)(r_ecx+0x4e4u), r_edx);
    /* 005a7c6d: mov dword ptr [ecx + 0x4e8], edx */ W32((u32)(r_ecx+0x4e8u), r_edx);
    /* 005a7c73: jmp 0x5a78ee */ goto L_005a78ee;
}

void f_005a7c78(void) /* sub_5A7C78 */
{
    FN_ENTER(0x005a7c78);
    /* 005a7c78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c79: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a7c7c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a7c7e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005a7c82: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7c85: je 0x5a7eec */ if (fZ) goto L_005a7eec;
L_005a7c8b:; BB(0x005a7c8b);
    /* 005a7c8b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7c8e: je 0x5a7e3d */ if (fZ) goto L_005a7e3d;
L_005a7c94:; BB(0x005a7c94);
    /* 005a7c94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7c96: jne 0x5a7e15 */ if (!fZ) goto L_005a7e15;
L_005a7c9c:; BB(0x005a7c9c);
    /* 005a7c9c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7c9e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a7ca3u); f_007aa094();
    /* 005a7ca3: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005a7ca9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a7cab: je 0x5a7cbc */ if (fZ) goto L_005a7cbc;
L_005a7cad:; BB(0x005a7cad);
    /* 005a7cad: mov dword ptr [ebp + 0x4dc], 1 */ W32((u32)(r_ebp+0x4dcu), 0x1u);
    /* 005a7cb7: jmp 0x5a7dfd */ goto L_005a7dfd;
L_005a7cbc:; BB(0x005a7cbc);
    /* 005a7cbc: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 005a7cc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7cc4: je 0x5a7ebc */ if (fZ) goto L_005a7ebc;
L_005a7cca:; BB(0x005a7cca);
    /* 005a7cca: push 0x42340000 */ { u32 v = 0x42340000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ccf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7cd1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a7cd6u); f_007aaa30();
    /* 005a7cd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7cd8: jne 0x5a7d29 */ if (!fZ) goto L_005a7d29;
L_005a7cda:; BB(0x005a7cda);
    /* 005a7cda: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 005a7ce0: fcom dword ptr [0x92a388] */ fx_compare(ST(0), R_F32((u32)(0x92a388u))); 
    /* 005a7ce6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a7ce8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a7ce9: jb 0x5a7d48 */ if (fC) goto L_005a7d48;
L_005a7ceb:; BB(0x005a7ceb);
    /* 005a7ceb: fcomp dword ptr [0x92a384] */ fx_compare(ST(0), R_F32((u32)(0x92a384u))); FPOP();
    /* 005a7cf1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a7cf3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a7cf4: ja 0x5a7d4a */ if ((!fC&&!fZ)) goto L_005a7d4a;
L_005a7cf6:; BB(0x005a7cf6);
    /* 005a7cf6: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005a7cf9: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 005a7cfc: mov ecx, dword ptr [ebp + 0x4c8] */ r_ecx = R32((u32)(r_ebp+0x4c8u));
    /* 005a7d02: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a7d05: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005a7d08: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005a7d0c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005a7d10: fadd dword ptr [0x92a3e8] */ ST(0) = ST(0) + R_F32((u32)(0x92a3e8u));
    /* 005a7d16: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a7d1a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a7d1e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a7d21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d22: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5a7d27u); f_00508db8();
    /* 005a7d27: jmp 0x5a7d4a */ goto L_005a7d4a;
L_005a7d29:; BB(0x005a7d29);
    /* 005a7d29: mov edx, dword ptr [ebp + 0x4c8] */ r_edx = R32((u32)(r_ebp+0x4c8u));
    /* 005a7d2f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a7d33: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a7d38: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a7d3c: mov dword ptr [ebp + 0x4c8], 0 */ W32((u32)(r_ebp+0x4c8u), 0x0u);
    /* 005a7d46: jmp 0x5a7d4a */ goto L_005a7d4a;
L_005a7d48:; BB(0x005a7d48);
    /* 005a7d48: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005a7d4a:; BB(0x005a7d4a);
    /* 005a7d4a: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d4f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7d51: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a7d56u); f_007aaa30();
    /* 005a7d56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7d58: je 0x5a7dfd */ if (fZ) goto L_005a7dfd;
L_005a7d5e:; BB(0x005a7d5e);
    /* 005a7d5e: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005a7d64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a7d66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a7d68: jle 0x5a7dd7 */ if ((fZ||fS!=fO)) goto L_005a7dd7;
L_005a7d6a:; BB(0x005a7d6a);
    /* 005a7d6a: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 005a7d6e: mov ebp, eax */ r_ebp = r_eax;
    /* 005a7d70: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 005a7d74: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 005a7d78: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 005a7d7c: mov esi, edx */ r_esi = r_edx;
L_005a7d7e:; BB(0x005a7d7e);
    /* 005a7d7e: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 005a7d85: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d86: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x5a7d8bu); f_00520f3c();
    /* 005a7d8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a7d8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7d8e: je 0x5a7dc0 */ if (fZ) goto L_005a7dc0;
L_005a7d90:; BB(0x005a7d90);
    /* 005a7d90: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 005a7d94: lea ebx, [ebx + 0x300] */ r_ebx = (u32)(r_ebx+0x300u);
    /* 005a7d9a: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005a7d9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d9e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d9f: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5a7da4u); f_007a9180();
    /* 005a7da4: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005a7da8: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 005a7dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7daf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7db0: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5a7db5u); f_00780d3c();
    /* 005a7db5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7dba: je 0x5a7e58 */ if (fZ) goto L_005a7e58;
L_005a7dc0:; BB(0x005a7dc0);
    /* 005a7dc0: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005a7dc3: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7dc5: jl 0x5a7d7e */ if ((fS!=fO)) goto L_005a7d7e;
L_005a7dc7:; BB(0x005a7dc7);
    /* 005a7dc7: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 005a7dcb: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 005a7dcf: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005a7dd3: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_005a7dd7:; BB(0x005a7dd7);
    /* 005a7dd7: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a7ddcu); f_00807ac0();
    /* 005a7ddc: push dword ptr [eax*4 + 0x9c0ae0] */ { u32 v = R32((u32)(r_eax*4+0x9c0ae0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a7de3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7de5: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a7deau); f_007879b8();
    /* 005a7dea: mov ecx, eax */ r_ecx = r_eax;
    /* 005a7dec: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005a7def: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a7df1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7df2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7df3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7df4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7df5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a7dfau); f_00814298();
    /* 005a7dfa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a7dfd:; BB(0x005a7dfd);
    /* 005a7dfd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a7e00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7e02: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a7e08u); call_ind(t); }
    /* 005a7e08: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a7e0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7e0d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a7e13u); call_ind(t); }
    /* 005a7e13: jmp 0x5a7e51 */ goto L_005a7e51;
L_005a7e15:; BB(0x005a7e15);
    /* 005a7e15: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7e18: jne 0x5a7e51 */ if (!fZ) goto L_005a7e51;
L_005a7e1a:; BB(0x005a7e1a);
    /* 005a7e1a: mov edx, dword ptr [ebp + 0x4c8] */ r_edx = R32((u32)(r_ebp+0x4c8u));
    /* 005a7e20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7e22: je 0x5a7e51 */ if (fZ) goto L_005a7e51;
L_005a7e24:; BB(0x005a7e24);
    /* 005a7e24: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a7e28: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a7e2d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a7e31: mov dword ptr [ebp + 0x4c8], 0 */ W32((u32)(r_ebp+0x4c8u), 0x0u);
    /* 005a7e3b: jmp 0x5a7e51 */ goto L_005a7e51;
L_005a7e3d:; BB(0x005a7e3d);
    /* 005a7e3d: mov eax, dword ptr [ebp + 0x4dc] */ r_eax = R32((u32)(r_ebp+0x4dcu));
    /* 005a7e43: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7e46: jne 0x5a7e51 */ if (!fZ) goto L_005a7e51;
L_005a7e48:; BB(0x005a7e48);
    /* 005a7e48: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7e4a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7e4c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a7e51u); f_0051f62c();
L_005a7e51:; BB(0x005a7e51);
    /* 005a7e51: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a7e54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a7e55: ret 4 */ FN_RET(0x005a7c78); r_esp += 8; return;
L_005a7e58:; BB(0x005a7e58);
    /* 005a7e58: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 005a7e5c: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005a7e60: fld dword ptr [ebx + 0x4b8] */ FPUSH(R_F32((u32)(r_ebx+0x4b8u)));
    /* 005a7e66: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a7e68: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a7e6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a7e6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a7e6d: jb 0x5a7dc0 */ if (fC) goto L_005a7dc0;
L_005a7e73:; BB(0x005a7e73);
    /* 005a7e73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a7e75: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a7e7au); f_007751b0();
    /* 005a7e7a: fcomp dword ptr [ebx + 0x4b4] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x4b4u))); FPOP();
    /* 005a7e80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a7e82: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a7e83: ja 0x5a7dc0 */ if ((!fC&&!fZ)) goto L_005a7dc0;
L_005a7e89:; BB(0x005a7e89);
    /* 005a7e89: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a7e8b: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 005a7e93: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 005a7e98: mov ecx, edi */ r_ecx = r_edi;
    /* 005a7e9a: mov dword ptr [esp + 0xc], 0x12 */ W32((u32)(r_esp+0xcu), 0x12u);
    /* 005a7ea2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ea3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ea4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ea6: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7eab: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ead: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 005a7eb1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7eb2: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5a7eb5u); call_ind(t); }
    /* 005a7eb5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a7eb7: jmp 0x5a7dc0 */ goto L_005a7dc0;
L_005a7ebc:; BB(0x005a7ebc);
    /* 005a7ebc: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ec1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7ec3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a7ec8u); f_007aaa30();
    /* 005a7ec8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7eca: je 0x5a7d4a */ if (fZ) goto L_005a7d4a;
L_005a7ed0:; BB(0x005a7ed0);
    /* 005a7ed0: push 0x211 */ { u32 v = 0x211u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ed5: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005a7ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ed9: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5a7edeu); f_00509590();
    /* 005a7ede: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7ee1: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 005a7ee7: jmp 0x5a7d4a */ goto L_005a7d4a;
L_005a7eec:; BB(0x005a7eec);
    /* 005a7eec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7eee: mov eax, 8 */ r_eax = 0x8u;
    /* 005a7ef3: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005a7efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7efc: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a7f01u); f_0051f664();
    /* 005a7f01: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005a7f07: mov dword ptr [ebp + 0x4dc], 0 */ W32((u32)(r_ebp+0x4dcu), 0x0u);
    /* 005a7f11: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a7f14: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a7f17: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005a7f1d: jmp 0x5a7e51 */ goto L_005a7e51;
}

void f_005a7f24(void) /* sub_5A7F24 */
{
    FN_ENTER(0x005a7f24);
    /* 005a7f24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a7f25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7f26: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a7f28: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005a7f2c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7f2f: je 0x5a8104 */ if (fZ) goto L_005a8104;
L_005a7f35:; BB(0x005a7f35);
    /* 005a7f35: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7f38: je 0x5a80ac */ if (fZ) goto L_005a80ac;
L_005a7f3e:; BB(0x005a7f3e);
    /* 005a7f3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a7f40: jne 0x5a80b7 */ if (!fZ) goto L_005a80b7;
L_005a7f46:; BB(0x005a7f46);
    /* 005a7f46: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7f48: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a7f4du); f_007aa094();
    /* 005a7f4d: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7f52: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7f57: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 005a7f5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7f5b: push dword ptr [ebp + 0x48c] */ { u32 v = R32((u32)(r_ebp+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a7f61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7f62: call 0x782ac0 */ r_esp -= 4; W32(r_esp, 0x5a7f67u); f_00782ac0();
    /* 005a7f67: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7f6a: mov dword ptr [ebp + 0x48c], eax */ W32((u32)(r_ebp+0x48cu), r_eax);
    /* 005a7f70: mov eax, dword ptr [ebp + 0x4e0] */ r_eax = R32((u32)(r_ebp+0x4e0u));
    /* 005a7f76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7f78: jne 0x5a8068 */ if (!fZ) goto L_005a8068;
L_005a7f7e:; BB(0x005a7f7e);
    /* 005a7f7e: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7f83: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7f85: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a7f8au); f_007aaa30();
    /* 005a7f8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7f8c: je 0x5a7f95 */ if (fZ) goto L_005a7f95;
L_005a7f8e:; BB(0x005a7f8e);
    /* 005a7f8e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7f90: call 0x5a8d20 */ r_esp -= 4; W32(r_esp, 0x5a7f95u); f_005a8d20();
L_005a7f95:; BB(0x005a7f95);
    /* 005a7f95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7f97: call 0x5a817c */ r_esp -= 4; W32(r_esp, 0x5a7f9cu); f_005a817c();
    /* 005a7f9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7f9e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7fa0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a7fa5u); f_007aaa30();
    /* 005a7fa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7fa7: je 0x5a7fcd */ if (fZ) goto L_005a7fcd;
L_005a7fa9:; BB(0x005a7fa9);
    /* 005a7fa9: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a7faeu); f_00807ac0();
    /* 005a7fae: push dword ptr [eax*4 + 0x9c0ae0] */ { u32 v = R32((u32)(r_eax*4+0x9c0ae0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a7fb5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7fb7: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a7fbcu); f_007879b8();
    /* 005a7fbc: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 005a7fbf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a7fc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7fc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7fc3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a7fc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7fc5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a7fcau); f_00814298();
    /* 005a7fca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a7fcd:; BB(0x005a7fcd);
    /* 005a7fcd: push 0x412ccccd */ { u32 v = 0x412ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7fd2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7fd4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a7fd9u); f_007aaa30();
    /* 005a7fd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7fdb: je 0x5a8043 */ if (fZ) goto L_005a8043;
L_005a7fdd:; BB(0x005a7fdd);
    /* 005a7fdd: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a7fe2u); f_00807ac0();
    /* 005a7fe2: push dword ptr [eax*4 + 0x9c0b04] */ { u32 v = R32((u32)(r_eax*4+0x9c0b04u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a7fe9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a7feb: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a7ff0u); f_007879b8();
    /* 005a7ff0: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 005a7ff3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a7ff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ff6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ff7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ff8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ff9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a7ffeu); f_00814298();
    /* 005a7ffe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8001: mov edi, 1 */ r_edi = 0x1u;
    /* 005a8006: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x5a800bu); f_007bb6d0();
    /* 005a800b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a800c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5a8011u); f_0068d5a8();
    /* 005a8011: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a8012: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8014: je 0x5a8043 */ if (fZ) goto L_005a8043;
L_005a8016:; BB(0x005a8016);
    /* 005a8016: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8019: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a801b: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5a8020u); f_00771458();
    /* 005a8020: fcom dword ptr [0x92a374] */ fx_compare(ST(0), R_F32((u32)(0x92a374u))); 
    /* 005a8026: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a8028: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a8029: ja 0x5a8175 */ if ((!fC&&!fZ)) goto L_005a8175;
L_005a802f:; BB(0x005a802f);
    /* 005a802f: fcomp dword ptr [0x92a370] */ fx_compare(ST(0), R_F32((u32)(0x92a370u))); FPOP();
    /* 005a8035: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a8037: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a8038: jbe 0x5a803c */ if ((fC||fZ)) goto L_005a803c;
L_005a803a:; BB(0x005a803a);
    /* 005a803a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005a803c:; BB(0x005a803c);
    /* 005a803c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a803d: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x5a8042u); f_004d4288();
    /* 005a8042: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005a8043:; BB(0x005a8043);
    /* 005a8043: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005a8049: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a804b: je 0x5a8091 */ if (fZ) goto L_005a8091;
L_005a804d:; BB(0x005a804d);
    /* 005a804d: mov dword ptr [ebp + 0x4e0], 1 */ W32((u32)(r_ebp+0x4e0u), 0x1u);
    /* 005a8057: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a8059: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005a8060: mov dword ptr [ebp + 0x4dc], eax */ W32((u32)(r_ebp+0x4dcu), r_eax);
    /* 005a8066: jmp 0x5a8091 */ goto L_005a8091;
L_005a8068:; BB(0x005a8068);
    /* 005a8068: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a806b: jne 0x5a8091 */ if (!fZ) goto L_005a8091;
L_005a806d:; BB(0x005a806d);
    /* 005a806d: mov eax, dword ptr [ebp + 0x4dc] */ r_eax = R32((u32)(r_ebp+0x4dcu));
    /* 005a8073: mov edx, dword ptr [ebp + 0x500] */ r_edx = R32((u32)(r_ebp+0x500u));
    /* 005a8079: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a807c: mov dword ptr [ebp + 0x4dc], eax */ W32((u32)(r_ebp+0x4dcu), r_eax);
    /* 005a8082: cmp eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8085: jl 0x5a8091 */ if ((fS!=fO)) goto L_005a8091;
L_005a8087:; BB(0x005a8087);
    /* 005a8087: mov dword ptr [ebp + 0x4e0], 2 */ W32((u32)(r_ebp+0x4e0u), 0x2u);
L_005a8091:; BB(0x005a8091);
    /* 005a8091: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a8094: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a8096: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a809cu); call_ind(t); }
    /* 005a809c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a809f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a80a1: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a80a7u); call_ind(t); }
    /* 005a80a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a80a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a80a9: ret 4 */ FN_RET(0x005a7f24); r_esp += 8; return;
L_005a80ac:; BB(0x005a80ac);
    /* 005a80ac: mov eax, dword ptr [ebp + 0x4e0] */ r_eax = R32((u32)(r_ebp+0x4e0u));
    /* 005a80b2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a80b5: je 0x5a80bc */ if (fZ) goto L_005a80bc;
L_005a80b7:; BB(0x005a80b7);
    /* 005a80b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a80b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a80b9: ret 4 */ FN_RET(0x005a7f24); r_esp += 8; return;
L_005a80bc:; BB(0x005a80bc);
    /* 005a80bc: mov eax, dword ptr [ebp + 0x490] */ r_eax = R32((u32)(r_ebp+0x490u));
    /* 005a80c2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a80c5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a80c8: jl 0x5a80e5 */ if ((fS!=fO)) goto L_005a80e5;
L_005a80ca:; BB(0x005a80ca);
    /* 005a80ca: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005a80d0: mov dword ptr [ebp + 0x490], 0 */ W32((u32)(r_ebp+0x490u), 0x0u);
    /* 005a80da: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a80dd: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005a80e3: jmp 0x5a80eb */ goto L_005a80eb;
L_005a80e5:; BB(0x005a80e5);
    /* 005a80e5: mov dword ptr [ebp + 0x490], eax */ W32((u32)(r_ebp+0x490u), r_eax);
L_005a80eb:; BB(0x005a80eb);
    /* 005a80eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a80ed: call 0x54b44c */ r_esp -= 4; W32(r_esp, 0x5a80f2u); f_0054b44c();
    /* 005a80f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a80f4: jne 0x5a80b7 */ if (!fZ) goto L_005a80b7;
L_005a80f6:; BB(0x005a80f6);
    /* 005a80f6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a80f8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a80fa: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a80ffu); f_0051f62c();
    /* 005a80ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8100: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a8101: ret 4 */ FN_RET(0x005a7f24); r_esp += 8; return;
L_005a8104:; BB(0x005a8104);
    /* 005a8104: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8106: mov eax, 4 */ r_eax = 0x4u;
    /* 005a810b: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005a8112: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a8114: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a8119u); f_0051f664();
    /* 005a8119: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005a811f: mov edx, dword ptr [ebp + 0x4a8] */ r_edx = R32((u32)(r_ebp+0x4a8u));
    /* 005a8125: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a8128: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a812b: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005a8131: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 005a8134: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a8136: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a8138: jle 0x5a814a */ if ((fZ||fS!=fO)) goto L_005a814a;
L_005a813a:; BB(0x005a813a);
    /* 005a813a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005a813c: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 005a813f: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 005a8142: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a8145: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8148: jl 0x5a813a */ if ((fS!=fO)) goto L_005a813a;
L_005a814a:; BB(0x005a814a);
    /* 005a814a: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 005a8151: mov ecx, dword ptr [ebp + 0x4ac] */ r_ecx = R32((u32)(r_ebp+0x4acu));
    /* 005a8157: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x5a815cu); f_007a7d3c();
    /* 005a815c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a815e: mov dword ptr [ebp + 0x4dc], eax */ W32((u32)(r_ebp+0x4dcu), r_eax);
    /* 005a8164: mov dword ptr [ebp + 0x4e0], eax */ W32((u32)(r_ebp+0x4e0u), r_eax);
    /* 005a816a: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 005a8170: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8171: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a8172: ret 4 */ FN_RET(0x005a7f24); r_esp += 8; return;
L_005a8175:; BB(0x005a8175);
    /* 005a8175: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a8177: jmp 0x5a8043 */ goto L_005a8043;
}

