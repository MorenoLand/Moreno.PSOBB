#include "protos.h"

void f_0083e02c(void) /* sub_83E02C */
{
    FN_ENTER(0x0083e02c);
    /* 0083e02c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083e030: cmp eax, dword ptr [0xa21ba0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21ba0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e036: mov edx, 0 */ r_edx = 0x0u;
    /* 0083e03b: je 0x83e066 */ if (fZ) goto L_0083e066;
L_0083e03d:; BB(0x0083e03d);
    /* 0083e03d: cmp eax, dword ptr [0xa21ba4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21ba4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e043: mov edx, 1 */ r_edx = 0x1u;
    /* 0083e048: je 0x83e066 */ if (fZ) goto L_0083e066;
L_0083e04a:; BB(0x0083e04a);
    /* 0083e04a: cmp eax, dword ptr [0xa21ba8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21ba8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e050: mov edx, 2 */ r_edx = 0x2u;
    /* 0083e055: je 0x83e066 */ if (fZ) goto L_0083e066;
L_0083e057:; BB(0x0083e057);
    /* 0083e057: cmp eax, dword ptr [0xa21bac] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21bacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e05d: mov edx, 3 */ r_edx = 0x3u;
    /* 0083e062: je 0x83e066 */ if (fZ) goto L_0083e066;
L_0083e064:; BB(0x0083e064);
    /* 0083e064: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0083e066:; BB(0x0083e066);
    /* 0083e066: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e068: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e06a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0083e06d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083e06f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083e071: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0083e073: mov eax, dword ptr [ecx + 0xad9820] */ r_eax = R32((u32)(r_ecx+0xad9820u));
    /* 0083e079: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083e07c: jae 0x83e08b */ if (!fC) goto L_0083e08b;
L_0083e07e:; BB(0x0083e07e);
    /* 0083e07e: mov dword ptr [ecx + 0xad9820], 3 */ W32((u32)(r_ecx+0xad9820u), 0x3u);
    /* 0083e088: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e08a: ret  */ FN_RET(0x0083e02c); r_esp += 4; return;
L_0083e08b:; BB(0x0083e08b);
    /* 0083e08b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083e090: ret  */ FN_RET(0x0083e02c); r_esp += 4; return;
}

void f_0083e094(void) /* sub_83E094 */
{
    FN_ENTER(0x0083e094);
    /* 0083e094: push 0x83de80 */ { u32 v = 0x83de80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e099: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e09b: mov dword ptr [0xad9820], eax */ W32((u32)(0xad9820u), r_eax);
    /* 0083e0a0: mov dword ptr [0xad983c], eax */ W32((u32)(0xad983cu), r_eax);
    /* 0083e0a5: mov dword ptr [0xad9858], eax */ W32((u32)(0xad9858u), r_eax);
    /* 0083e0aa: mov dword ptr [0xad9874], eax */ W32((u32)(0xad9874u), r_eax);
    /* 0083e0af: call 0x82d73c */ r_esp -= 4; W32(r_esp, 0x83e0b4u); f_0082d73c();
    /* 0083e0b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083e0b5: ret  */ FN_RET(0x0083e094); r_esp += 4; return;
}

void f_0083e0b8(void) /* sub_83E0B8 */
{
    FN_ENTER(0x0083e0b8);
    /* 0083e0b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083e0bb: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083e0bf: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0083e0c2: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0083e0c6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083e0ca: call 0x84d224 */ r_esp -= 4; W32(r_esp, 0x83e0cfu); f_0084d224();
    /* 0083e0cf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e0d2: ret 4 */ FN_RET(0x0083e0b8); r_esp += 8; return;
}

void f_0083e0d8(void) /* sub_83E0D8 */
{
    FN_ENTER(0x0083e0d8);
    /* 0083e0d8: mov eax, dword ptr [0xad98a4] */ r_eax = R32((u32)(0xad98a4u));
    /* 0083e0dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e0df: je 0x83e0e7 */ if (fZ) goto L_0083e0e7;
L_0083e0e1:; BB(0x0083e0e1);
    /* 0083e0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e0e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083e0e4: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x83e0e7u); call_ind(t); }
L_0083e0e7:; BB(0x0083e0e7);
    /* 0083e0e7: mov eax, dword ptr [0xad98a8] */ r_eax = R32((u32)(0xad98a8u));
    /* 0083e0ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e0ee: je 0x83e100 */ if (fZ) goto L_0083e100;
L_0083e0f0:; BB(0x0083e0f0);
    /* 0083e0f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e0f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083e0f3: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x83e0f6u); call_ind(t); }
    /* 0083e0f6: mov dword ptr [0xad98a8], 0 */ W32((u32)(0xad98a8u), 0x0u);
L_0083e100:; BB(0x0083e100);
    /* 0083e100: mov eax, dword ptr [0xad98a4] */ r_eax = R32((u32)(0xad98a4u));
    /* 0083e105: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e107: je 0x83e119 */ if (fZ) goto L_0083e119;
L_0083e109:; BB(0x0083e109);
    /* 0083e109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e10a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083e10c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x83e10fu); call_ind(t); }
    /* 0083e10f: mov dword ptr [0xad98a4], 0 */ W32((u32)(0xad98a4u), 0x0u);
L_0083e119:; BB(0x0083e119);
    /* 0083e119: mov eax, dword ptr [0xad98a0] */ r_eax = R32((u32)(0xad98a0u));
    /* 0083e11e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e120: je 0x83e132 */ if (fZ) goto L_0083e132;
L_0083e122:; BB(0x0083e122);
    /* 0083e122: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e123: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083e125: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x83e128u); call_ind(t); }
    /* 0083e128: mov dword ptr [0xad98a0], 0 */ W32((u32)(0xad98a0u), 0x0u);
L_0083e132:; BB(0x0083e132);
    /* 0083e132: ret  */ FN_RET(0x0083e0d8); r_esp += 4; return;
}

void f_0083e134(void) /* sub_83E134 */
{
    FN_ENTER(0x0083e134);
    /* 0083e134: mov eax, dword ptr [0xad98a0] */ r_eax = R32((u32)(0xad98a0u));
    /* 0083e139: ret  */ FN_RET(0x0083e134); r_esp += 4; return;
}

void f_0083e13c(void) /* sub_83E13C */
{
    FN_ENTER(0x0083e13c);
    /* 0083e13c: mov eax, dword ptr [0xad98a8] */ r_eax = R32((u32)(0xad98a8u));
    /* 0083e141: ret  */ FN_RET(0x0083e13c); r_esp += 4; return;
}

void f_0083e144(void) /* sub_83E144 */
{
    FN_ENTER(0x0083e144);
    /* 0083e144: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083e147: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e149: mov dword ptr [0xad98a0], eax */ W32((u32)(0xad98a0u), r_eax);
    /* 0083e14e: mov dword ptr [0xad98a4], eax */ W32((u32)(0xad98a4u), r_eax);
    /* 0083e153: mov dword ptr [0xad98a8], eax */ W32((u32)(0xad98a8u), r_eax);
    /* 0083e158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e159: push 0xad98a0 */ { u32 v = 0xad98a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e15e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e15f: call 0x8c0b00 */ r_esp -= 4; W32(r_esp, 0x83e164u); f_008c0b00();
    /* 0083e164: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0083e166: jl 0x83e2a7 */ if ((fS!=fO)) goto L_0083e2a7;
L_0083e16c:; BB(0x0083e16c);
    /* 0083e16c: mov eax, dword ptr [0xad98a0] */ r_eax = R32((u32)(0xad98a0u));
    /* 0083e171: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e173: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083e175: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083e17b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e17c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x83e17fu); call_ind(t); }
    /* 0083e17f: mov edx, dword ptr [0xad98a0] */ r_edx = R32((u32)(0xad98a0u));
    /* 0083e185: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e187: je 0x83e1a4 */ if (fZ) goto L_0083e1a4;
L_0083e189:; BB(0x0083e189);
    /* 0083e189: mov dword ptr [0xad98ac], 0x60 */ W32((u32)(0xad98acu), 0x60u);
    /* 0083e193: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0083e195: push 0xad98ac */ { u32 v = 0xad98acu; r_esp -= 4; W32(r_esp, v); }
    /* 0083e19a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e19b: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x83e19eu); call_ind(t); }
    /* 0083e19e: mov edx, dword ptr [0xad98a0] */ r_edx = R32((u32)(0xad98a0u));
L_0083e1a4:; BB(0x0083e1a4);
    /* 0083e1a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e1a6: je 0x83e1f3 */ if (fZ) goto L_0083e1f3;
L_0083e1a8:; BB(0x0083e1a8);
    /* 0083e1a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e1aa: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083e1ad: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0083e1b1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083e1b5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0083e1b9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0083e1bd: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0083e1c1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083e1c5: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0083e1c9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0083e1cd: mov edx, dword ptr [0xad98a0] */ r_edx = R32((u32)(0xad98a0u));
    /* 0083e1d3: mov dword ptr [esp], 0x24 */ W32((u32)(r_esp), 0x24u);
    /* 0083e1da: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083e1dd: mov dword ptr [esp + 4], 0x11 */ W32((u32)(r_esp+0x4u), 0x11u);
    /* 0083e1e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e1e7: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083e1e9: push 0xad98a4 */ { u32 v = 0xad98a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e1ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e1ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e1f0: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x83e1f3u); call_ind(t); }
L_0083e1f3:; BB(0x0083e1f3);
    /* 0083e1f3: mov edx, dword ptr [0xad98a4] */ r_edx = R32((u32)(0xad98a4u));
    /* 0083e1f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e1fb: je 0x83e218 */ if (fZ) goto L_0083e218;
L_0083e1fd:; BB(0x0083e1fd);
    /* 0083e1fd: mov dword ptr [0xad990c], 0x14 */ W32((u32)(0xad990cu), 0x14u);
    /* 0083e207: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0083e209: push 0xad990c */ { u32 v = 0xad990cu; r_esp -= 4; W32(r_esp, v); }
    /* 0083e20e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e20f: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x83e212u); call_ind(t); }
    /* 0083e212: mov edx, dword ptr [0xad98a4] */ r_edx = R32((u32)(0xad98a4u));
L_0083e218:; BB(0x0083e218);
    /* 0083e218: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e21a: je 0x83e282 */ if (fZ) goto L_0083e282;
L_0083e21c:; BB(0x0083e21c);
    /* 0083e21c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e21e: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0083e222: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0083e226: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0083e22a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0083e22e: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 0083e233: mov dword ptr [esp + 0x28], 0xbb80 */ W32((u32)(r_esp+0x28u), 0xbb80u);
    /* 0083e23b: mov eax, 1 */ r_eax = 0x1u;
    /* 0083e240: mov edx, 2 */ r_edx = 0x2u;
    /* 0083e245: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 0083e24a: mov dword ptr [esp + 0x2c], 0x2ee00 */ W32((u32)(r_esp+0x2cu), 0x2ee00u);
    /* 0083e252: mov word ptr [esp + 0x24], ax */ W16((u32)(r_esp+0x24u), (u16)r_eax);
    /* 0083e257: mov eax, 4 */ r_eax = 0x4u;
    /* 0083e25c: mov word ptr [esp + 0x26], dx */ W16((u32)(r_esp+0x26u), (u16)r_edx);
    /* 0083e261: mov edx, dword ptr [0xad98a4] */ r_edx = R32((u32)(0xad98a4u));
    /* 0083e267: mov word ptr [esp + 0x32], cx */ W16((u32)(r_esp+0x32u), (u16)r_ecx);
    /* 0083e26c: mov word ptr [esp + 0x30], ax */ W16((u32)(r_esp+0x30u), (u16)r_eax);
    /* 0083e271: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0083e275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e276: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083e278: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e279: call dword ptr [ecx + 0x38] */ { u32 t = R32((u32)(r_ecx+0x38u)); r_esp -= 4; W32(r_esp, 0x83e27cu); call_ind(t); }
    /* 0083e27c: mov edx, dword ptr [0xad98a4] */ r_edx = R32((u32)(0xad98a4u));
L_0083e282:; BB(0x0083e282);
    /* 0083e282: push 0xad98a8 */ { u32 v = 0xad98a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e287: push 0x99f85c */ { u32 v = 0x99f85cu; r_esp -= 4; W32(r_esp, v); }
    /* 0083e28c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e28d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0083e28f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x83e291u); call_ind(t); }
    /* 0083e291: mov edx, dword ptr [0xad98a4] */ r_edx = R32((u32)(0xad98a4u));
    /* 0083e297: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e299: je 0x83e2a7 */ if (fZ) goto L_0083e2a7;
L_0083e29b:; BB(0x0083e29b);
    /* 0083e29b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e29d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083e29f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e2a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e2a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e2a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e2a4: call dword ptr [ecx + 0x30] */ { u32 t = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, 0x83e2a7u); call_ind(t); }
L_0083e2a7:; BB(0x0083e2a7);
    /* 0083e2a7: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e2aa: ret  */ FN_RET(0x0083e144); r_esp += 4; return;
}

void f_0083e2ac(void) /* sub_83E2AC */
{
    FN_ENTER(0x0083e2ac);
    /* 0083e2ac: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083e2af: push 0x83e65c */ { u32 v = 0x83e65cu; r_esp -= 4; W32(r_esp, v); }
    /* 0083e2b4: call 0x84a650 */ r_esp -= 4; W32(r_esp, 0x83e2b9u); f_0084a650();
    /* 0083e2b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083e2ba: mov ecx, dword ptr [0xaf0200] */ r_ecx = R32((u32)(0xaf0200u));
    /* 0083e2c0: mov eax, dword ptr [0xaf0204] */ r_eax = R32((u32)(0xaf0204u));
    /* 0083e2c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083e2c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e2c9: je 0x83e30e */ if (fZ) goto L_0083e30e;
L_0083e2cb:; BB(0x0083e2cb);
    /* 0083e2cb: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0083e2cf: mov ebx, edx */ r_ebx = r_edx;
    /* 0083e2d1: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0083e2d4: mov esi, ecx */ r_esi = r_ecx;
L_0083e2d6:; BB(0x0083e2d6);
    /* 0083e2d6: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0083e2d8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e2db: je 0x83e2f7 */ if (fZ) goto L_0083e2f7;
L_0083e2dd:; BB(0x0083e2dd);
    /* 0083e2dd: mov ecx, esi */ r_ecx = r_esi;
    /* 0083e2df: call 0x83e324 */ r_esp -= 4; W32(r_esp, 0x83e2e4u); f_0083e324();
    /* 0083e2e4: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0083e2e6: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x83e2ecu); call_ind(t); }
    /* 0083e2ec: mov dword ptr [esi], 0xffffffff */ W32((u32)(r_esi), 0xffffffffu);
    /* 0083e2f2: mov eax, dword ptr [0xaf0204] */ r_eax = R32((u32)(0xaf0204u));
L_0083e2f7:; BB(0x0083e2f7);
    /* 0083e2f7: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083e2fa: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e2fd: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e2ff: jne 0x83e2d6 */ if (!fZ) goto L_0083e2d6;
L_0083e301:; BB(0x0083e301);
    /* 0083e301: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0083e305: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0083e308: mov ecx, dword ptr [0xaf0200] */ r_ecx = R32((u32)(0xaf0200u));
L_0083e30e:; BB(0x0083e30e);
    /* 0083e30e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e30f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x83e314u); f_00858882();
    /* 0083e314: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e316: mov dword ptr [0xaf0200], eax */ W32((u32)(0xaf0200u), r_eax);
    /* 0083e31b: mov dword ptr [0xaf0204], eax */ W32((u32)(0xaf0204u), r_eax);
    /* 0083e320: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e323: ret  */ FN_RET(0x0083e2ac); r_esp += 4; return;
}

void f_0083e324(void) /* sub_83E324 */
{
    FN_ENTER(0x0083e324);
    /* 0083e324: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e326: je 0x83e32f */ if (fZ) goto L_0083e32f;
L_0083e328:; BB(0x0083e328);
    /* 0083e328: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
L_0083e32f:; BB(0x0083e32f);
    /* 0083e32f: ret  */ FN_RET(0x0083e324); r_esp += 4; return;
}

void f_0083e330(void) /* sub_83E330 */
{
    FN_ENTER(0x0083e330);
    /* 0083e330: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e331: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083e333: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0083e335: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083e338: je 0x83e34f */ if (fZ) goto L_0083e34f;
L_0083e33a:; BB(0x0083e33a);
    /* 0083e33a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083e33c: call 0x83e324 */ r_esp -= 4; W32(r_esp, 0x83e341u); f_0083e324();
    /* 0083e341: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 0083e343: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x83e349u); call_ind(t); }
    /* 0083e349: mov dword ptr [ebx], 0xffffffff */ W32((u32)(r_ebx), 0xffffffffu);
L_0083e34f:; BB(0x0083e34f);
    /* 0083e34f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083e350: ret  */ FN_RET(0x0083e330); r_esp += 4; return;
}

void f_0083e354(void) /* sub_83E354 */
{
    FN_ENTER(0x0083e354);
    /* 0083e354: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e356: je 0x83e363 */ if (fZ) goto L_0083e363;
L_0083e358:; BB(0x0083e358);
    /* 0083e358: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0083e35a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083e35d: je 0x83e363 */ if (fZ) goto L_0083e363;
L_0083e35f:; BB(0x0083e35f);
    /* 0083e35f: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0083e362: ret  */ FN_RET(0x0083e354); r_esp += 4; return;
L_0083e363:; BB(0x0083e363);
    /* 0083e363: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e365: ret  */ FN_RET(0x0083e354); r_esp += 4; return;
}

void f_0083e368(void) /* sub_83E368 */
{
    FN_ENTER(0x0083e368);
    /* 0083e368: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e369: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083e36b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083e36f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083e373: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083e375: call 0x83e3ac */ r_esp -= 4; W32(r_esp, 0x83e37au); f_0083e3ac();
    /* 0083e37a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083e37c: call 0x83e414 */ r_esp -= 4; W32(r_esp, 0x83e381u); f_0083e414();
    /* 0083e381: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083e384: jne 0x83e3a6 */ if (!fZ) goto L_0083e3a6;
L_0083e386:; BB(0x0083e386);
    /* 0083e386: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e388: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0083e38a: call dword ptr [0x8f819c] */ { u32 t = R32((u32)(0x8f819cu)); r_esp -= 4; W32(r_esp, 0x83e390u); call_ind(t); }
    /* 0083e390: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e392: je 0x83e3a6 */ if (fZ) goto L_0083e3a6;
L_0083e394:; BB(0x0083e394);
    /* 0083e394: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e396: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e398: call dword ptr [0x8f819c] */ { u32 t = R32((u32)(0x8f819cu)); r_esp -= 4; W32(r_esp, 0x83e39eu); call_ind(t); }
    /* 0083e39e: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0083e3a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083e3a4: je 0x83e386 */ if (fZ) goto L_0083e386;
L_0083e3a6:; BB(0x0083e3a6);
    /* 0083e3a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083e3a7: ret 8 */ FN_RET(0x0083e368); r_esp += 12; return;
}

void f_0083e3ac(void) /* sub_83E3AC */
{
    FN_ENTER(0x0083e3ac);
    /* 0083e3ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3b1: mov edi, edx */ r_edi = r_edx;
    /* 0083e3b3: mov esi, ecx */ r_esi = r_ecx;
    /* 0083e3b5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e3b7: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0083e3bb: je 0x83e40c */ if (fZ) goto L_0083e40c;
L_0083e3bd:; BB(0x0083e3bd);
    /* 0083e3bd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e3bf: je 0x83e40c */ if (fZ) goto L_0083e40c;
L_0083e3c1:; BB(0x0083e3c1);
    /* 0083e3c1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e3c3: je 0x83e40c */ if (fZ) goto L_0083e40c;
L_0083e3c5:; BB(0x0083e3c5);
    /* 0083e3c5: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 0083e3c7: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083e3ca: je 0x83e40c */ if (fZ) goto L_0083e40c;
L_0083e3cc:; BB(0x0083e3cc);
    /* 0083e3cc: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0083e3d0: mov dword ptr [esi + 0x18], 1 */ W32((u32)(r_esi+0x18u), 0x1u);
    /* 0083e3d7: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0083e3da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e3dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3de: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0083e3e1: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 0083e3e4: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0083e3e7: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0083e3ea: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0083e3ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3f0: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x83e3f6u); call_ind(t); }
    /* 0083e3f6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083e3f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e3ff: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x83e405u); call_ind(t); }
    /* 0083e405: mov dword ptr [esi + 0x18], 0 */ W32((u32)(r_esi+0x18u), 0x0u);
L_0083e40c:; BB(0x0083e40c);
    /* 0083e40c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083e40d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083e40e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083e40f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083e410: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083e411: ret 8 */ FN_RET(0x0083e3ac); r_esp += 12; return;
}

void f_0083e414(void) /* sub_83E414 */
{
    FN_ENTER(0x0083e414);
    /* 0083e414: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083e415: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0083e417: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e419: je 0x83e42a */ if (fZ) goto L_0083e42a;
L_0083e41b:; BB(0x0083e41b);
    /* 0083e41b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e41d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e41f: call dword ptr [0x8f819c] */ { u32 t = R32((u32)(0x8f819cu)); r_esp -= 4; W32(r_esp, 0x83e425u); call_ind(t); }
    /* 0083e425: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0083e428: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083e429: ret  */ FN_RET(0x0083e414); r_esp += 4; return;
L_0083e42a:; BB(0x0083e42a);
    /* 0083e42a: mov eax, 3 */ r_eax = 0x3u;
    /* 0083e42f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083e430: ret  */ FN_RET(0x0083e414); r_esp += 4; return;
}

void f_0083e434(void) /* sub_83E434 */
{
    FN_ENTER(0x0083e434);
    /* 0083e434: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e435: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e436: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e437: sub esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083e43d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e43f: je 0x83e5c1 */ if (fZ) goto L_0083e5c1;
L_0083e445:; BB(0x0083e445);
    /* 0083e445: mov eax, dword ptr [0xa21c64] */ r_eax = R32((u32)(0xa21c64u));
    /* 0083e44a: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0083e44d: cmp dl, byte ptr [eax + 3] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_eax+0x3u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0083e450: je 0x83e5c1 */ if (fZ) goto L_0083e5c1;
L_0083e456:; BB(0x0083e456);
    /* 0083e456: movsx ebx, byte ptr [ecx + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 0083e45a: movsx esi, byte ptr [eax + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0083e45e: lea edi, [ecx + 1] */ r_edi = (u32)(r_ecx+0x1u);
    /* 0083e461: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e463: jne 0x83e483 */ if (!fZ) goto L_0083e483;
L_0083e465:; BB(0x0083e465);
    /* 0083e465: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e467: jne 0x83e483 */ if (!fZ) goto L_0083e483;
L_0083e469:; BB(0x0083e469);
    /* 0083e469: mov eax, dword ptr [0xadac6c] */ r_eax = R32((u32)(0xadac6cu));
    /* 0083e46e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083e470: jle 0x83e518 */ if ((fZ||fS!=fO)) goto L_0083e518;
L_0083e476:; BB(0x0083e476);
    /* 0083e476: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e479: mov dword ptr [0xadac6c], eax */ W32((u32)(0xadac6cu), r_eax);
    /* 0083e47e: jmp 0x83e518 */ goto L_0083e518;
L_0083e483:; BB(0x0083e483);
    /* 0083e483: mov ebx, dword ptr [0xadac6c] */ r_ebx = R32((u32)(0xadac6cu));
    /* 0083e489: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083e48c: jge 0x83e518 */ if ((fS==fO)) goto L_0083e518;
L_0083e492:; BB(0x0083e492);
    /* 0083e492: cmp dl, byte ptr [eax + 2] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_eax+0x2u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0083e495: jne 0x83e4aa */ if (!fZ) goto L_0083e4aa;
L_0083e497:; BB(0x0083e497);
    /* 0083e497: lea esi, [esp] */ r_esi = (u32)(r_esp);
L_0083e49a:; BB(0x0083e49a);
    /* 0083e49a: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0083e49c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e49f: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0083e4a1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083e4a4: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083e4a6: jne 0x83e49a */ if (!fZ) goto L_0083e49a;
L_0083e4a8:; BB(0x0083e4a8);
    /* 0083e4a8: jmp 0x83e4bd */ goto L_0083e4bd;
L_0083e4aa:; BB(0x0083e4aa);
    /* 0083e4aa: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0083e4ad: mov edi, ecx */ r_edi = r_ecx;
L_0083e4af:; BB(0x0083e4af);
    /* 0083e4af: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0083e4b1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e4b4: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0083e4b6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083e4b9: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083e4bb: jne 0x83e4af */ if (!fZ) goto L_0083e4af;
L_0083e4bd:; BB(0x0083e4bd);
    /* 0083e4bd: lea ecx, [esp + 0x104] */ r_ecx = (u32)(r_esp+0x104u);
    /* 0083e4c4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0083e4c7: call 0x83e5cc */ r_esp -= 4; W32(r_esp, 0x83e4ccu); f_0083e5cc();
    /* 0083e4cc: lea eax, [esp + 0x104] */ r_eax = (u32)(r_esp+0x104u);
    /* 0083e4d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e4d4: call dword ptr [0x8f8150] */ { u32 t = R32((u32)(0x8f8150u)); r_esp -= 4; W32(r_esp, 0x83e4dau); call_ind(t); }
    /* 0083e4da: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e4dd: je 0x83e518 */ if (fZ) goto L_0083e518;
L_0083e4df:; BB(0x0083e4df);
    /* 0083e4df: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083e4e1: je 0x83e518 */ if (fZ) goto L_0083e518;
L_0083e4e3:; BB(0x0083e4e3);
    /* 0083e4e3: mov eax, dword ptr [0xadac6c] */ r_eax = R32((u32)(0xadac6cu));
    /* 0083e4e8: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0083e4eb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e4ed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e4ef: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0083e4f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e4f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e4f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e4f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e4fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e4fc: lea esi, [eax + edx + 0xad9c2c] */ r_esi = (u32)(r_eax+r_edx+0xad9c2cu);
L_0083e503:; BB(0x0083e503);
    /* 0083e503: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0083e505: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e508: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0083e50a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083e50d: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083e50f: jne 0x83e503 */ if (!fZ) goto L_0083e503;
L_0083e511:; BB(0x0083e511);
    /* 0083e511: add dword ptr [0xadac6c], 1 */ { u32 ad = (u32)(0xadac6cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0083e518:; BB(0x0083e518);
    /* 0083e518: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e51d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e51f: push 0xad9b28 */ { u32 v = 0xad9b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e524: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x83e529u); f_0086b688();
    /* 0083e529: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083e52c: mov eax, dword ptr [0xadac6c] */ r_eax = R32((u32)(0xadac6cu));
    /* 0083e531: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0083e533: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e535: je 0x83e5a5 */ if (fZ) goto L_0083e5a5;
L_0083e537:; BB(0x0083e537);
    /* 0083e537: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0083e53a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e53c: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0083e53f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e541: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e543: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e545: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e547: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e549: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0083e54b:; BB(0x0083e54b);
    /* 0083e54b: lea edx, [ebx + 0xad9c2c] */ r_edx = (u32)(r_ebx+0xad9c2cu);
    /* 0083e551: mov edi, 0xad9b28 */ r_edi = 0xad9b28u;
    /* 0083e556: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0083e55b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e55d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0083e55f: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0083e562:; BB(0x0083e562);
    /* 0083e562: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0083e564: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e567: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0083e569: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e56c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083e56e: jne 0x83e562 */ if (!fZ) goto L_0083e562;
L_0083e570:; BB(0x0083e570);
    /* 0083e570: mov edi, 0xad9b28 */ r_edi = 0xad9b28u;
    /* 0083e575: mov edx, 0x98b080 */ r_edx = 0x98b080u;
    /* 0083e57a: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0083e57f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e581: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0083e583: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0083e586:; BB(0x0083e586);
    /* 0083e586: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0083e588: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e58b: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0083e58d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e590: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083e592: jne 0x83e586 */ if (!fZ) goto L_0083e586;
L_0083e594:; BB(0x0083e594);
    /* 0083e594: add ebx, 0x104 */ {  u32 a = r_ebx; u32 b = 0x104u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e59a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083e59d: cmp esi, dword ptr [0xadac6c] */ {  u32 a = r_esi; u32 b = R32((u32)(0xadac6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e5a3: jne 0x83e54b */ if (!fZ) goto L_0083e54b;
L_0083e5a5:; BB(0x0083e5a5);
    /* 0083e5a5: push 0xad9b28 */ { u32 v = 0xad9b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e5aa: push 0xad9a24 */ { u32 v = 0xad9a24u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e5af: push 0x98b078 */ { u32 v = 0x98b078u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e5b4: push 0xad9920 */ { u32 v = 0xad9920u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e5b9: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x83e5beu); f_00858bf5();
    /* 0083e5be: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0083e5c1:; BB(0x0083e5c1);
    /* 0083e5c1: add esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e5c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083e5c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083e5c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083e5ca: ret  */ FN_RET(0x0083e434); r_esp += 4; return;
}

void f_0083e5cc(void) /* sub_83E5CC */
{
    FN_ENTER(0x0083e5cc);
    /* 0083e5cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e5cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e5ce: mov eax, edx */ r_eax = r_edx;
    /* 0083e5d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e5d2: je 0x83e60e */ if (fZ) goto L_0083e60e;
L_0083e5d4:; BB(0x0083e5d4);
    /* 0083e5d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e5d6: je 0x83e60e */ if (fZ) goto L_0083e60e;
L_0083e5d8:; BB(0x0083e5d8);
    /* 0083e5d8: mov edi, dword ptr [0xa21c64] */ r_edi = R32((u32)(0xa21c64u));
    /* 0083e5de: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0083e5e1: cmp dl, byte ptr [edi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_edi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0083e5e3: je 0x83e5fc */ if (fZ) goto L_0083e5fc;
L_0083e5e5:; BB(0x0083e5e5);
    /* 0083e5e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e5e6: push 0xad9920 */ { u32 v = 0xad9920u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e5eb: push 0x98b078 */ { u32 v = 0x98b078u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e5f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e5f1: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x83e5f6u); f_00858bf5();
    /* 0083e5f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e5f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083e5fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083e5fb: ret  */ FN_RET(0x0083e5cc); r_esp += 4; return;
L_0083e5fc:; BB(0x0083e5fc);
    /* 0083e5fc: mov esi, ecx */ r_esi = r_ecx;
    /* 0083e5fe: mov edi, eax */ r_edi = r_eax;
L_0083e600:; BB(0x0083e600);
    /* 0083e600: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0083e602: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e605: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0083e607: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083e60a: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e60c: jne 0x83e600 */ if (!fZ) goto L_0083e600;
L_0083e60e:; BB(0x0083e60e);
    /* 0083e60e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083e60f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083e610: ret  */ FN_RET(0x0083e5cc); r_esp += 4; return;
}

void f_0083e614(void) /* sub_83E614 */
{
    FN_ENTER(0x0083e614);
    /* 0083e614: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e615: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e616: mov eax, edx */ r_eax = r_edx;
    /* 0083e618: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e61a: je 0x83e656 */ if (fZ) goto L_0083e656;
L_0083e61c:; BB(0x0083e61c);
    /* 0083e61c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e61e: je 0x83e656 */ if (fZ) goto L_0083e656;
L_0083e620:; BB(0x0083e620);
    /* 0083e620: mov edi, dword ptr [0xa21c64] */ r_edi = R32((u32)(0xa21c64u));
    /* 0083e626: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0083e629: cmp dl, byte ptr [edi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_edi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0083e62b: je 0x83e644 */ if (fZ) goto L_0083e644;
L_0083e62d:; BB(0x0083e62d);
    /* 0083e62d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e62e: push 0xad9b28 */ { u32 v = 0xad9b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e633: push 0x98b078 */ { u32 v = 0x98b078u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e638: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e639: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x83e63eu); f_00858bf5();
    /* 0083e63e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e641: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083e642: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083e643: ret  */ FN_RET(0x0083e614); r_esp += 4; return;
L_0083e644:; BB(0x0083e644);
    /* 0083e644: mov esi, ecx */ r_esi = r_ecx;
    /* 0083e646: mov edi, eax */ r_edi = r_eax;
L_0083e648:; BB(0x0083e648);
    /* 0083e648: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0083e64a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e64d: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0083e64f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083e652: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e654: jne 0x83e648 */ if (!fZ) goto L_0083e648;
L_0083e656:; BB(0x0083e656);
    /* 0083e656: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083e657: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083e658: ret  */ FN_RET(0x0083e614); r_esp += 4; return;
}

void f_0083e65c(void) /* sub_83E65C */
{
    FN_ENTER(0x0083e65c);
    /* 0083e65c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083e65f: mov ecx, dword ptr [0xaf0200] */ r_ecx = R32((u32)(0xaf0200u));
    /* 0083e665: mov eax, dword ptr [0xaf0204] */ r_eax = R32((u32)(0xaf0204u));
    /* 0083e66a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083e66c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e66e: je 0x83e6a4 */ if (fZ) goto L_0083e6a4;
L_0083e670:; BB(0x0083e670);
    /* 0083e670: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0083e674: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083e676: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0083e67a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0083e67d: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0083e681: mov ebp, edx */ r_ebp = r_edx;
L_0083e683:; BB(0x0083e683);
    /* 0083e683: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 0083e686: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e689: je 0x83e6a8 */ if (fZ) goto L_0083e6a8;
L_0083e68b:; BB(0x0083e68b);
    /* 0083e68b: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e68e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083e691: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e693: jne 0x83e683 */ if (!fZ) goto L_0083e683;
L_0083e695:; BB(0x0083e695);
    /* 0083e695: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0083e699: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0083e69d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0083e6a0: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0083e6a4:; BB(0x0083e6a4);
    /* 0083e6a4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e6a7: ret  */ FN_RET(0x0083e65c); r_esp += 4; return;
L_0083e6a8:; BB(0x0083e6a8);
    /* 0083e6a8: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0083e6ab: add edx, dword ptr [ebx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e6ae: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 0083e6b1: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 0083e6b4: mov eax, 0x3000 */ r_eax = 0x3000u;
    /* 0083e6b9: sub esi, dword ptr [ebx + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0083e6bc: add edi, dword ptr [ebx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e6bf: cmp esi, 0x3000 */ {  u32 a = r_esi; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083e6c5: jb 0x83e6c9 */ if (fC) goto L_0083e6c9;
L_0083e6c7:; BB(0x0083e6c7);
    /* 0083e6c7: mov esi, eax */ r_esi = r_eax;
L_0083e6c9:; BB(0x0083e6c9);
    /* 0083e6c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e6cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e6cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e6cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e6ce: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 0083e6d0: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x83e6d6u); call_ind(t); }
    /* 0083e6d6: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0083e6da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e6dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e6dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e6de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e6df: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 0083e6e1: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x83e6e7u); call_ind(t); }
    /* 0083e6e7: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0083e6ea: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083e6ec: cmp esi, dword ptr [ebx + 0x20] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e6ef: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 0083e6f2: je 0x83e6fb */ if (fZ) goto L_0083e6fb;
L_0083e6f4:; BB(0x0083e6f4);
    /* 0083e6f4: mov eax, dword ptr [0xaf0204] */ r_eax = R32((u32)(0xaf0204u));
    /* 0083e6f9: jmp 0x83e68b */ goto L_0083e68b;
L_0083e6fb:; BB(0x0083e6fb);
    /* 0083e6fb: mov ecx, dword ptr [0xaf0200] */ r_ecx = R32((u32)(0xaf0200u));
    /* 0083e701: mov eax, dword ptr [0xaf0204] */ r_eax = R32((u32)(0xaf0204u));
    /* 0083e706: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0083e709: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083e70b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e70d: je 0x83e68b */ if (fZ) goto L_0083e68b;
L_0083e713:; BB(0x0083e713);
    /* 0083e713: cmp esi, dword ptr [ecx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e715: jne 0x83e71e */ if (!fZ) goto L_0083e71e;
L_0083e717:; BB(0x0083e717);
    /* 0083e717: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
L_0083e71e:; BB(0x0083e71e);
    /* 0083e71e: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083e721: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e724: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e726: jne 0x83e713 */ if (!fZ) goto L_0083e713;
L_0083e728:; BB(0x0083e728);
    /* 0083e728: jmp 0x83e68b */ goto L_0083e68b;
}

void f_0083e730(void) /* sub_83E730 */
{
    FN_ENTER(0x0083e730);
    /* 0083e730: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e731: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e732: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e733: sub esp, 0x340 */ {  u32 a = r_esp; u32 b = 0x340u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083e739: mov edi, ecx */ r_edi = r_ecx;
    /* 0083e73b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083e73e: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e743: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e746: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x83e74bu); f_0086b688();
    /* 0083e74b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0083e74f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e750: push 0x98b084 */ { u32 v = 0x98b084u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e756: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x83e75bu); f_00858bf5();
    /* 0083e75b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083e75e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0083e761: lea eax, [esp + 0x100] */ r_eax = (u32)(r_esp+0x100u);
    /* 0083e768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e769: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e76a: call dword ptr [0x8f81a8] */ { u32 t = R32((u32)(0x8f81a8u)); r_esp -= 4; W32(r_esp, 0x83e770u); call_ind(t); }
    /* 0083e770: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e773: je 0x83e85f */ if (fZ) goto L_0083e85f;
L_0083e779:; BB(0x0083e779);
    /* 0083e779: mov ebx, eax */ r_ebx = r_eax;
    /* 0083e77b: mov esi, edi */ r_esi = r_edi;
L_0083e77d:; BB(0x0083e77d);
    /* 0083e77d: lea edx, [esp + 0x100] */ r_edx = (u32)(r_esp+0x100u);
    /* 0083e784: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e785: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e786: call dword ptr [0x8f81a4] */ { u32 t = R32((u32)(0x8f81a4u)); r_esp -= 4; W32(r_esp, 0x83e78cu); call_ind(t); }
    /* 0083e78c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e78e: je 0x83e856 */ if (fZ) goto L_0083e856;
L_0083e794:; BB(0x0083e794);
    /* 0083e794: mov edx, dword ptr [esp + 0x100] */ r_edx = R32((u32)(r_esp+0x100u));
    /* 0083e79b: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e79e: je 0x83e77d */ if (fZ) goto L_0083e77d;
L_0083e7a0:; BB(0x0083e7a0);
    /* 0083e7a0: lea edx, [esp + 0x240] */ r_edx = (u32)(r_esp+0x240u);
    /* 0083e7a7: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e7ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e7ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e7af: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x83e7b4u); f_0086b688();
    /* 0083e7b4: lea ecx, [esp + 0x24c] */ r_ecx = (u32)(r_esp+0x24cu);
    /* 0083e7bb: lea edx, [esp + 0x138] */ r_edx = (u32)(r_esp+0x138u);
    /* 0083e7c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e7c3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e7c4: push 0x98b090 */ { u32 v = 0x98b090u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e7c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e7ca: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x83e7cfu); f_00858bf5();
    /* 0083e7cf: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083e7d2: mov eax, dword ptr [0xadac70] */ r_eax = R32((u32)(0xadac70u));
    /* 0083e7d7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e7dc: je 0x83e77d */ if (fZ) goto L_0083e77d;
L_0083e7de:; BB(0x0083e7de);
    /* 0083e7de: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e7e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e7e2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0083e7e5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e7e7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e7e9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e7eb: lea edx, [edi + eax] */ r_edx = (u32)(r_edi+r_eax);
    /* 0083e7ee: mov ecx, dword ptr [edx + 0xaebe40] */ r_ecx = R32((u32)(r_edx+0xaebe40u));
    /* 0083e7f4: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e7f7: jne 0x83e77d */ if (!fZ) goto L_0083e77d;
L_0083e7f9:; BB(0x0083e7f9);
    /* 0083e7f9: lea ecx, [eax + edi + 0xaebe00] */ r_ecx = (u32)(r_eax+r_edi+0xaebe00u);
    /* 0083e800: lea edx, [esp + 0x12c] */ r_edx = (u32)(r_esp+0x12cu);
    /* 0083e807: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e809: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e80a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e80b: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x83e810u); f_00858900();
    /* 0083e810: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083e813: lea ecx, [esp + 0x240] */ r_ecx = (u32)(r_esp+0x240u);
    /* 0083e81a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083e81c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e81d: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e822: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e824: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e825: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e827: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e82c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e82d: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x83e833u); call_ind(t); }
    /* 0083e833: mov edi, eax */ r_edi = r_eax;
    /* 0083e835: mov eax, dword ptr [0xadac70] */ r_eax = R32((u32)(0xadac70u));
    /* 0083e83a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0083e83d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e83f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0083e842: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e845: mov dword ptr [edx + ecx*8 + 0xaebe40], edi */ W32((u32)(r_edx+r_ecx*8+0xaebe40u), r_edi);
    /* 0083e84c: mov dword ptr [0xadac70], eax */ W32((u32)(0xadac70u), r_eax);
    /* 0083e851: jmp 0x83e77d */ goto L_0083e77d;
L_0083e856:; BB(0x0083e856);
    /* 0083e856: mov eax, ebx */ r_eax = r_ebx;
    /* 0083e858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e859: call dword ptr [0x8f81ac] */ { u32 t = R32((u32)(0x8f81acu)); r_esp -= 4; W32(r_esp, 0x83e85fu); call_ind(t); }
L_0083e85f:; BB(0x0083e85f);
    /* 0083e85f: add esp, 0x340 */ {  u32 a = r_esp; u32 b = 0x340u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e865: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083e866: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083e867: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083e868: ret  */ FN_RET(0x0083e730); r_esp += 4; return;
}

void f_0083e86c(void) /* sub_83E86C */
{
    FN_ENTER(0x0083e86c);
    /* 0083e86c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e86d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e86f: mov ebx, eax */ r_ebx = r_eax;
L_0083e871:; BB(0x0083e871);
    /* 0083e871: mov edx, dword ptr [ebx + 0xaebe40] */ r_edx = R32((u32)(r_ebx+0xaebe40u));
    /* 0083e877: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e87a: je 0x83e8c9 */ if (fZ) goto L_0083e8c9;
L_0083e87c:; BB(0x0083e87c);
    /* 0083e87c: lea ecx, [ebx + 0xaebe00] */ r_ecx = (u32)(r_ebx+0xaebe00u);
    /* 0083e882: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083e884: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0083e886: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0083e889: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0083e88c: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0083e88f: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0083e892: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0083e895: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0083e898: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0083e89b: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0083e89e: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0083e8a1: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0083e8a4: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0083e8a7: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0083e8aa: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0083e8ad: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0083e8b0: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0083e8b3: push dword ptr [ebx + 0xaebe40] */ { u32 v = R32((u32)(r_ebx+0xaebe40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083e8b9: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x83e8bfu); call_ind(t); }
    /* 0083e8bf: mov dword ptr [ebx + 0xaebe40], 0xffffffff */ W32((u32)(r_ebx+0xaebe40u), 0xffffffffu);
L_0083e8c9:; BB(0x0083e8c9);
    /* 0083e8c9: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e8cc: cmp ebx, 0x4400 */ {  u32 a = r_ebx; u32 b = 0x4400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083e8d2: jl 0x83e871 */ if ((fS!=fO)) goto L_0083e871;
L_0083e8d4:; BB(0x0083e8d4);
    /* 0083e8d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083e8d6: mov dword ptr [0xadac74], eax */ W32((u32)(0xadac74u), r_eax);
    /* 0083e8db: mov dword ptr [0xadac70], eax */ W32((u32)(0xadac70u), r_eax);
    /* 0083e8e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083e8e1: ret  */ FN_RET(0x0083e86c); r_esp += 4; return;
}

void f_0083e8e4(void) /* sub_83E8E4 */
{
    FN_ENTER(0x0083e8e4);
    /* 0083e8e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e8e5: mov edi, ecx */ r_edi = r_ecx;
    /* 0083e8e7: mov eax, dword ptr [0xadac70] */ r_eax = R32((u32)(0xadac70u));
    /* 0083e8ec: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083e8f1: je 0x83e914 */ if (fZ) goto L_0083e914;
L_0083e8f3:; BB(0x0083e8f3);
    /* 0083e8f3: mov edx, dword ptr [0xadac74] */ r_edx = R32((u32)(0xadac74u));
    /* 0083e8f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e8fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e8fd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0083e900: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e902: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e904: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e906: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 0083e909: mov ecx, dword ptr [ecx + 0xaebe40] */ r_ecx = R32((u32)(r_ecx+0xaebe40u));
    /* 0083e90f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083e912: je 0x83e916 */ if (fZ) goto L_0083e916;
L_0083e914:; BB(0x0083e914);
    /* 0083e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083e915: ret  */ FN_RET(0x0083e8e4); r_esp += 4; return;
L_0083e916:; BB(0x0083e916);
    /* 0083e916: lea eax, [edx + eax + 0xaebe00] */ r_eax = (u32)(r_edx+r_eax+0xaebe00u);
    /* 0083e91d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e91f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e921: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x83e926u); f_00858900();
    /* 0083e926: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083e929: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e92b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e92c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e931: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083e934: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e936: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0083e93b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e93c: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x83e942u); call_ind(t); }
    /* 0083e942: mov edx, dword ptr [0xadac74] */ r_edx = R32((u32)(0xadac74u));
    /* 0083e948: add dword ptr [0xadac70], 1 */ { u32 ad = (u32)(0xadac70u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083e94f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083e951: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e953: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0083e956: mov dword ptr [edx + ecx*8 + 0xaebe40], eax */ W32((u32)(r_edx+r_ecx*8+0xaebe40u), r_eax);
    /* 0083e95d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083e95e: ret  */ FN_RET(0x0083e8e4); r_esp += 4; return;
}

void f_0083e960(void) /* sub_83E960 */
{
    FN_ENTER(0x0083e960);
    /* 0083e960: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e961: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083e962: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083e963: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083e964: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083e967: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e969: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_0083e96c:; BB(0x0083e96c);
    /* 0083e96c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0083e96f: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0083e972: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083e974: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 0083e977: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0083e97b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e97d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083e97f: lea edi, [ecx + eax + 0xaebe00] */ r_edi = (u32)(r_ecx+r_eax+0xaebe00u);
    /* 0083e986: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_0083e98a:; BB(0x0083e98a);
    /* 0083e98a: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0083e98c: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0083e98e: jne 0x83e9aa */ if (!fZ) goto L_0083e9aa;
L_0083e990:; BB(0x0083e990);
    /* 0083e990: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0083e992: je 0x83e9a6 */ if (fZ) goto L_0083e9a6;
L_0083e994:; BB(0x0083e994);
    /* 0083e994: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 0083e997: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0083e99a: jne 0x83e9aa */ if (!fZ) goto L_0083e9aa;
L_0083e99c:; BB(0x0083e99c);
    /* 0083e99c: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083e99f: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083e9a2: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0083e9a4: jne 0x83e98a */ if (!fZ) goto L_0083e98a;
L_0083e9a6:; BB(0x0083e9a6);
    /* 0083e9a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e9a8: jmp 0x83e9af */ goto L_0083e9af;
L_0083e9aa:; BB(0x0083e9aa);
    /* 0083e9aa: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0083e9ac: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0083e9af:; BB(0x0083e9af);
    /* 0083e9af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e9b1: jne 0x83e9bf */ if (!fZ) goto L_0083e9bf;
L_0083e9b3:; BB(0x0083e9b3);
    /* 0083e9b3: mov eax, dword ptr [ecx + ebp*8 + 0xaebe40] */ r_eax = R32((u32)(r_ecx+r_ebp*8+0xaebe40u));
    /* 0083e9ba: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083e9bd: jne 0x83e9d2 */ if (!fZ) goto L_0083e9d2;
L_0083e9bf:; BB(0x0083e9bf);
    /* 0083e9bf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083e9c2: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083e9c8: jl 0x83e96c */ if ((fS!=fO)) goto L_0083e96c;
L_0083e9ca:; BB(0x0083e9ca);
    /* 0083e9ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e9cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083e9ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083e9cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083e9d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083e9d1: ret  */ FN_RET(0x0083e960); r_esp += 4; return;
L_0083e9d2:; BB(0x0083e9d2);
    /* 0083e9d2: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083e9d6: mov esi, ecx */ r_esi = r_ecx;
    /* 0083e9d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e9da: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0083e9dc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0083e9df: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0083e9e2: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0083e9e5: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0083e9e8: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0083e9eb: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0083e9ee: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0083e9f1: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0083e9f4: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0083e9f7: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0083e9fa: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0083e9fd: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0083ea00: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0083ea03: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0083ea06: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0083ea09: push dword ptr [esi + ebp*8 + 0xaebe40] */ { u32 v = R32((u32)(r_esi+r_ebp*8+0xaebe40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083ea10: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x83ea16u); call_ind(t); }
    /* 0083ea16: mov dword ptr [esi + ebp*8 + 0xaebe40], 0xffffffff */ W32((u32)(r_esi+r_ebp*8+0xaebe40u), 0xffffffffu);
    /* 0083ea21: mov dword ptr [0xadac74], ebx */ W32((u32)(0xadac74u), r_ebx);
    /* 0083ea27: add dword ptr [0xadac70], -1 */ { u32 ad = (u32)(0xadac70u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083ea2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083ea31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083ea32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083ea33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083ea34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083ea35: ret  */ FN_RET(0x0083e960); r_esp += 4; return;
}

void f_0083ea02(void)
{
    FN_ENTER(0x0083ea02);
    /* 0083ea02: xor al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0083ea04: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083ea05: cmp byte ptr [ecx - 0x4b00c3be], cl */ {  u32 a = R8((u32)(r_ecx+0xb4ff3c42u)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;   }
    /* 0083ea0b: out dx, al */ UNSUP(0x0083ea0b, "out dx, al");
    /* 0083ea0c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ea0d: mov esi, 0x15ff00ae */ r_esi = 0x15ff00aeu;
    /* 0083ea12: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ea13: or dword ptr [edi - 0x117b3900], 0xaebe40 */ { u32 ad = (u32)(r_edi+0xee84c700u);  u32 a = R32(ad); u32 b = 0xaebe40u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    UNSUP(0x0083ea1d, "falls out of decoded code");
}

void f_0083ea38(void) /* sub_83EA38 */
{
    FN_ENTER(0x0083ea38);
    /* 0083ea38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083ea39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083ea3a: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083ea40: mov edx, ecx */ r_edx = r_ecx;
    /* 0083ea42: mov ebp, dword ptr [0xaf0200] */ r_ebp = R32((u32)(0xaf0200u));
    /* 0083ea48: mov eax, dword ptr [0xaf0204] */ r_eax = R32((u32)(0xaf0204u));
    /* 0083ea4d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ea4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ea51: je 0x83ea65 */ if (fZ) goto L_0083ea65;
L_0083ea53:; BB(0x0083ea53);
    /* 0083ea53: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0083ea56: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ea59: je 0x83ea70 */ if (fZ) goto L_0083ea70;
L_0083ea5b:; BB(0x0083ea5b);
    /* 0083ea5b: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083ea5e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ea61: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ea63: jne 0x83ea53 */ if (!fZ) goto L_0083ea53;
L_0083ea65:; BB(0x0083ea65);
    /* 0083ea65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083ea67: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083ea6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083ea6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083ea6f: ret  */ FN_RET(0x0083ea38); r_esp += 4; return;
L_0083ea70:; BB(0x0083ea70);
    /* 0083ea70: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0083ea73: call 0x83e5cc */ r_esp -= 4; W32(r_esp, 0x83ea78u); f_0083e5cc();
    /* 0083ea78: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0083ea7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083ea7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ea7e: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ea83: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ea85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ea86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ea88: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ea8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083ea8e: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x83ea94u); call_ind(t); }
    /* 0083ea94: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0083ea97: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ea9a: je 0x83ea65 */ if (fZ) goto L_0083ea65;
L_0083ea9c:; BB(0x0083ea9c);
    /* 0083ea9c: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
    /* 0083eaa3: lea edx, [esp + 0x104] */ r_edx = (u32)(r_esp+0x104u);
    /* 0083eaaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083eaab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083eaac: call dword ptr [0x8f8138] */ { u32 t = R32((u32)(0x8f8138u)); r_esp -= 4; W32(r_esp, 0x83eab2u); call_ind(t); }
    /* 0083eab2: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0083eab5: mov eax, ebp */ r_eax = r_ebp;
    /* 0083eab7: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083eabd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083eabe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083eabf: ret  */ FN_RET(0x0083ea38); r_esp += 4; return;
}

void f_0083eac0(void) /* sub_83EAC0 */
{
    FN_ENTER(0x0083eac0);
    /* 0083eac0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083eac1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083eac2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083eac3: mov dword ptr [0xaf0204], ecx */ W32((u32)(0xaf0204u), r_ecx);
    /* 0083eac9: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0083eacc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083eace: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0083ead0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ead2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ead4: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0083ead6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ead8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083eada: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083eadb: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x83eae0u); f_00859c55();
    /* 0083eae0: mov edx, eax */ r_edx = r_eax;
    /* 0083eae2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083eae5: mov ecx, dword ptr [0xaf0204] */ r_ecx = R32((u32)(0xaf0204u));
    /* 0083eaeb: mov dword ptr [0xaf0200], edx */ W32((u32)(0xaf0200u), r_edx);
    /* 0083eaf1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083eaf3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083eaf5: je 0x83eb22 */ if (fZ) goto L_0083eb22;
L_0083eaf7:; BB(0x0083eaf7);
    /* 0083eaf7: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 0083eafd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083eaff: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0083eb02: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0083eb05: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0083eb08: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0083eb0b: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0083eb0e: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0083eb11: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0083eb14: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083eb17: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083eb1a: cmp eax, dword ptr [0xaf0204] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0204u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083eb20: jne 0x83eaf7 */ if (!fZ) goto L_0083eaf7;
L_0083eb22:; BB(0x0083eb22);
    /* 0083eb22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0083eb24:; BB(0x0083eb24);
    /* 0083eb24: lea ecx, [eax + 0xaebe00] */ r_ecx = (u32)(r_eax+0xaebe00u);
    /* 0083eb2a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083eb2c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0083eb2e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0083eb31: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0083eb34: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0083eb37: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0083eb3a: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0083eb3d: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0083eb40: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0083eb43: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0083eb46: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0083eb49: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0083eb4c: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0083eb4f: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0083eb52: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0083eb55: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0083eb58: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0083eb5b: mov dword ptr [eax + 0xaebe40], 0xffffffff */ W32((u32)(r_eax+0xaebe40u), 0xffffffffu);
    /* 0083eb65: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083eb68: cmp eax, 0x4400 */ {  u32 a = r_eax; u32 b = 0x4400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083eb6d: jl 0x83eb24 */ if ((fS!=fO)) goto L_0083eb24;
L_0083eb6f:; BB(0x0083eb6f);
    /* 0083eb6f: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0083eb74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083eb76: push 0xad9920 */ { u32 v = 0xad9920u; r_esp -= 4; W32(r_esp, v); }
    /* 0083eb7b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x83eb80u); f_0086b688();
    /* 0083eb80: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0083eb85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083eb87: push 0xad9a24 */ { u32 v = 0xad9a24u; r_esp -= 4; W32(r_esp, v); }
    /* 0083eb8c: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x83eb91u); f_0086b688();
    /* 0083eb91: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0083eb96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083eb98: push 0xad9b28 */ { u32 v = 0xad9b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0083eb9d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x83eba2u); f_0086b688();
    /* 0083eba2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083eba5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0083eba7:; BB(0x0083eba7);
    /* 0083eba7: lea eax, [esi + 0xad9c2c] */ r_eax = (u32)(r_esi+0xad9c2cu);
    /* 0083ebad: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ebb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ebb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ebb5: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x83ebbau); f_0086b688();
    /* 0083ebba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083ebbd: add esi, 0x104 */ {  u32 a = r_esi; u32 b = 0x104u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ebc3: cmp esi, 0x1040 */ {  u32 a = r_esi; u32 b = 0x1040u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083ebc9: jl 0x83eba7 */ if ((fS!=fO)) goto L_0083eba7;
L_0083ebcb:; BB(0x0083ebcb);
    /* 0083ebcb: mov dword ptr [0xadac6c], 0 */ W32((u32)(0xadac6cu), 0x0u);
    /* 0083ebd5: mov esi, 0xad9a24 */ r_esi = 0xad9a24u;
    /* 0083ebda: mov edi, 0xaf0700 */ r_edi = 0xaf0700u;
L_0083ebdf:; BB(0x0083ebdf);
    /* 0083ebdf: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0083ebe1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083ebe4: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0083ebe6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ebe9: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083ebeb: jne 0x83ebdf */ if (!fZ) goto L_0083ebdf;
L_0083ebed:; BB(0x0083ebed);
    /* 0083ebed: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ebf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ebf4: push 0xad9b28 */ { u32 v = 0xad9b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ebf9: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x83ebfeu); f_0086b688();
    /* 0083ebfe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083ec01: mov edx, dword ptr [0xadac6c] */ r_edx = R32((u32)(0xadac6cu));
    /* 0083ec07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083ec09: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ec0b: je 0x83ec83 */ if (fZ) goto L_0083ec83;
L_0083ec0d:; BB(0x0083ec0d);
    /* 0083ec0d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0083ec10: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0083ec13: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083ec15: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0083ec18: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ec1a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ec1c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ec1e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ec20: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ec22: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ec24: mov ebx, eax */ r_ebx = r_eax;
L_0083ec26:; BB(0x0083ec26);
    /* 0083ec26: lea edx, [esi + 0xad9c2c] */ r_edx = (u32)(r_esi+0xad9c2cu);
    /* 0083ec2c: mov edi, 0xad9b28 */ r_edi = 0xad9b28u;
    /* 0083ec31: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0083ec36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083ec38: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0083ec3a: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0083ec3d:; BB(0x0083ec3d);
    /* 0083ec3d: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0083ec3f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083ec42: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0083ec44: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083ec47: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083ec49: jne 0x83ec3d */ if (!fZ) goto L_0083ec3d;
L_0083ec4b:; BB(0x0083ec4b);
    /* 0083ec4b: mov edi, 0xad9b28 */ r_edi = 0xad9b28u;
    /* 0083ec50: mov edx, 0x98b080 */ r_edx = 0x98b080u;
    /* 0083ec55: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0083ec5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083ec5c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0083ec5e: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0083ec61:; BB(0x0083ec61);
    /* 0083ec61: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0083ec63: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083ec66: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0083ec68: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083ec6b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083ec6d: jne 0x83ec61 */ if (!fZ) goto L_0083ec61;
L_0083ec6f:; BB(0x0083ec6f);
    /* 0083ec6f: add esi, 0x104 */ {  u32 a = r_esi; u32 b = 0x104u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ec75: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083ec78: cmp ebx, dword ptr [0xadac6c] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xadac6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ec7e: jne 0x83ec26 */ if (!fZ) goto L_0083ec26;
L_0083ec80:; BB(0x0083ec80);
    /* 0083ec80: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0083ec83:; BB(0x0083ec83);
    /* 0083ec83: push 0xad9b28 */ { u32 v = 0xad9b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ec88: push 0xad9a24 */ { u32 v = 0xad9a24u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ec8d: push 0x98b078 */ { u32 v = 0x98b078u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ec92: push 0xad9920 */ { u32 v = 0xad9920u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ec97: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x83ec9cu); f_00858bf5();
    /* 0083ec9c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083ec9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083eca0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083eca1: ret  */ FN_RET(0x0083eac0); r_esp += 4; return;
}

void f_0083eca4(void) /* sub_83ECA4 */
{
    FN_ENTER(0x0083eca4);
    /* 0083eca4: mov eax, dword ptr [0xadb2c4] */ r_eax = R32((u32)(0xadb2c4u));
    /* 0083eca9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ecab: je 0x83ecbd */ if (fZ) goto L_0083ecbd;
L_0083ecad:; BB(0x0083ecad);
    /* 0083ecad: call dword ptr [0x8f840c] */ { u32 t = R32((u32)(0x8f840cu)); r_esp -= 4; W32(r_esp, 0x83ecb3u); call_ind(t); }
    /* 0083ecb3: mov dword ptr [0xadb2c4], 0 */ W32((u32)(0xadb2c4u), 0x0u);
L_0083ecbd:; BB(0x0083ecbd);
    /* 0083ecbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083ecbf: ret  */ FN_RET(0x0083eca4); r_esp += 4; return;
}

void f_0083ecc0(void) /* sub_83ECC0 */
{
    FN_ENTER(0x0083ecc0);
    /* 0083ecc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083ecc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083ecc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083ecc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083ecc4: sub esp, 0x120 */ {  u32 a = r_esp; u32 b = 0x120u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083ecca: mov eax, dword ptr [0xadb2c4] */ r_eax = R32((u32)(0xadb2c4u));
    /* 0083eccf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ecd1: je 0x83f362 */ if (fZ) goto L_0083f362;
L_0083ecd7:; BB(0x0083ecd7);
    /* 0083ecd7: call 0x83f484 */ r_esp -= 4; W32(r_esp, 0x83ecdcu); f_0083f484();
    /* 0083ecdc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ecde: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083ece0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0083ece2:; BB(0x0083ece2);
    /* 0083ece2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0083ece5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083ece7: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0083ece9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083eceb: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0083ecee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ecf0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ecf2: movsx ebp, word ptr [eax + 0xadac94] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0xadac94u));
    /* 0083ecf9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ecfb: je 0x83eda0 */ if (fZ) goto L_0083eda0;
L_0083ed01:; BB(0x0083ed01);
    /* 0083ed01: mov eax, dword ptr [ebx*8 + 0xadaca8] */ r_eax = R32((u32)(r_ebx*8+0xadaca8u));
    /* 0083ed08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ed0a: je 0x83eda0 */ if (fZ) goto L_0083eda0;
L_0083ed10:; BB(0x0083ed10);
    /* 0083ed10: mov esi, dword ptr [0xadaf80] */ r_esi = R32((u32)(0xadaf80u));
    /* 0083ed16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083ed18: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0083ed1a: jbe 0x83ed7f */ if ((fC||fZ)) goto L_0083ed7f;
L_0083ed1c:; BB(0x0083ed1c);
    /* 0083ed1c: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083ed1f: jb 0x83f36d */ if (fC) goto L_0083f36d;
L_0083ed25:; BB(0x0083ed25);
    /* 0083ed25: mov ebp, dword ptr [ebx*8 + 0xadac90] */ r_ebp = R32((u32)(r_ebx*8+0xadac90u));
L_0083ed2c:; BB(0x0083ed2c);
    /* 0083ed2c: cmp ebp, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ed33: je 0x83ed7f */ if (fZ) goto L_0083ed7f;
L_0083ed35:; BB(0x0083ed35);
    /* 0083ed35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ed38: cmp ebp, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ed3f: je 0x83ed7f */ if (fZ) goto L_0083ed7f;
L_0083ed41:; BB(0x0083ed41);
    /* 0083ed41: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ed44: cmp ebp, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ed4b: je 0x83ed7f */ if (fZ) goto L_0083ed7f;
L_0083ed4d:; BB(0x0083ed4d);
    /* 0083ed4d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ed50: cmp ebp, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ed57: je 0x83ed7f */ if (fZ) goto L_0083ed7f;
L_0083ed59:; BB(0x0083ed59);
    /* 0083ed59: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ed5c: cmp ebp, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ed63: je 0x83ed7f */ if (fZ) goto L_0083ed7f;
L_0083ed65:; BB(0x0083ed65);
    /* 0083ed65: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ed68: lea edi, [esi - 6] */ r_edi = (u32)(r_esi+0xfffffffau);
    /* 0083ed6b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0083ed6d: jbe 0x83ed2c */ if ((fC||fZ)) goto L_0083ed2c;
L_0083ed6f:; BB(0x0083ed6f);
    /* 0083ed6f: cmp ebp, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ed76: je 0x83ed7f */ if (fZ) goto L_0083ed7f;
L_0083ed78:; BB(0x0083ed78);
    /* 0083ed78: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ed7b: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083ed7d: jb 0x83ed6f */ if (fC) goto L_0083ed6f;
L_0083ed7f:; BB(0x0083ed7f);
    /* 0083ed7f: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ed81: jne 0x83ed9d */ if (!fZ) goto L_0083ed9d;
L_0083ed83:; BB(0x0083ed83);
    /* 0083ed83: cmp esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083ed86: jae 0x83ed9d */ if (!fC) goto L_0083ed9d;
L_0083ed88:; BB(0x0083ed88);
    /* 0083ed88: mov ebx, dword ptr [ebx*8 + 0xadac90] */ r_ebx = R32((u32)(r_ebx*8+0xadac90u));
    /* 0083ed8f: mov dword ptr [eax*4 + 0xadaf84], ebx */ W32((u32)(r_eax*4+0xadaf84u), r_ebx);
    /* 0083ed96: add dword ptr [0xadaf80], 1 */ { u32 ad = (u32)(0xadaf80u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0083ed9d:; BB(0x0083ed9d);
    /* 0083ed9d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0083eda0:; BB(0x0083eda0);
    /* 0083eda0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083eda3: mov eax, edx */ r_eax = r_edx;
    /* 0083eda5: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083eda8: jl 0x83ece2 */ if ((fS!=fO)) goto L_0083ece2;
L_0083edae:; BB(0x0083edae);
    /* 0083edae: mov eax, ecx */ r_eax = r_ecx;
    /* 0083edb0: call 0x83f498 */ r_esp -= 4; W32(r_esp, 0x83edb5u); f_0083f498();
    /* 0083edb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083edb7: jle 0x83ef0e */ if ((fZ||fS!=fO)) goto L_0083ef0e;
L_0083edbd:; BB(0x0083edbd);
    /* 0083edbd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083edbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083edc1: mov ebx, edx */ r_ebx = r_edx;
L_0083edc3:; BB(0x0083edc3);
    /* 0083edc3: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0083edc6: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083edc8: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0083edca: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083edcc: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0083edd0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083edd2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083edd4: movsx ecx, word ptr [eax + 0xadac94] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xadac94u));
    /* 0083eddb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083eddd: je 0x83ef00 */ if (fZ) goto L_0083ef00;
L_0083ede3:; BB(0x0083ede3);
    /* 0083ede3: mov esi, dword ptr [ebp*8 + 0xadac90] */ r_esi = R32((u32)(r_ebp*8+0xadac90u));
    /* 0083edea: mov eax, dword ptr [ebp*8 + 0xadac9c] */ r_eax = R32((u32)(r_ebp*8+0xadac9cu));
    /* 0083edf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083edf3: je 0x83ef00 */ if (fZ) goto L_0083ef00;
L_0083edf9:; BB(0x0083edf9);
    /* 0083edf9: mov eax, dword ptr [ebp*8 + 0xadac98] */ r_eax = R32((u32)(r_ebp*8+0xadac98u));
    /* 0083ee00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083ee02: jle 0x83ef00 */ if ((fZ||fS!=fO)) goto L_0083ef00;
L_0083ee08:; BB(0x0083ee08);
    /* 0083ee08: mov eax, dword ptr [ebp*8 + 0xadaca8] */ r_eax = R32((u32)(r_ebp*8+0xadaca8u));
    /* 0083ee0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ee11: je 0x83ef00 */ if (fZ) goto L_0083ef00;
L_0083ee17:; BB(0x0083ee17);
    /* 0083ee17: push 0xadaf80 */ { u32 v = 0xadaf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ee1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083ee1d: call 0x88f686 */ r_esp -= 4; W32(r_esp, 0x83ee22u); f_0088f686();
    /* 0083ee22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ee24: je 0x83ef00 */ if (fZ) goto L_0083ef00;
L_0083ee2a:; BB(0x0083ee2a);
    /* 0083ee2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ee2c: push dword ptr [ebp*8 + 0xadac98] */ { u32 v = R32((u32)(r_ebp*8+0xadac98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083ee33: push dword ptr [ebp*8 + 0xadac9c] */ { u32 v = R32((u32)(r_ebp*8+0xadac9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083ee3a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083ee3b: call dword ptr [0x8f8408] */ { u32 t = R32((u32)(0x8f8408u)); r_esp -= 4; W32(r_esp, 0x83ee41u); call_ind(t); }
    /* 0083ee41: mov edx, eax */ r_edx = r_eax;
    /* 0083ee43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ee45: je 0x83eee1 */ if (fZ) goto L_0083eee1;
L_0083ee4b:; BB(0x0083ee4b);
    /* 0083ee4b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ee4e: je 0x83f379 */ if (fZ) goto L_0083f379;
L_0083ee54:; BB(0x0083ee54);
    /* 0083ee54: movsx eax, word ptr [0xadb2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(0xadb2c8u));
    /* 0083ee5b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ee5d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0083ee5e: mov ecx, eax */ r_ecx = r_eax;
    /* 0083ee60: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ee62: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ee64: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ee67: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ee69: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ee6b: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0083ee6e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0083ee70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ee72: je 0x83eea9 */ if (fZ) goto L_0083eea9;
L_0083ee74:; BB(0x0083ee74);
    /* 0083ee74: mov esi, dword ptr [ebp*8 + 0xadac9c] */ r_esi = R32((u32)(r_ebp*8+0xadac9cu));
    /* 0083ee7b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ee7d: mov edi, 0xadb2cc */ r_edi = 0xadb2ccu;
    /* 0083ee82: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ee84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ee86: je 0x83eea9 */ if (fZ) goto L_0083eea9;
L_0083ee88:; BB(0x0083ee88);
    /* 0083ee88: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0083ee8c: mov ebx, edx */ r_ebx = r_edx;
L_0083ee8e:; BB(0x0083ee8e);
    /* 0083ee8e: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 0083ee91: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 0083ee93: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ee96: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083ee99: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083ee9c: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0083ee9f: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083eea1: jne 0x83ee8e */ if (!fZ) goto L_0083ee8e;
L_0083eea3:; BB(0x0083eea3);
    /* 0083eea3: mov edx, ebx */ r_edx = r_ebx;
    /* 0083eea5: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_0083eea9:; BB(0x0083eea9);
    /* 0083eea9: mov word ptr [0xadb2c8], dx */ W16((u32)(0xadb2c8u), (u16)r_edx);
    /* 0083eeb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083eeb2: jle 0x83ef00 */ if ((fZ||fS!=fO)) goto L_0083ef00;
L_0083eeb4:; BB(0x0083eeb4);
    /* 0083eeb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083eeb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083eeb6: call dword ptr [ebp*8 + 0xadaca8] */ { u32 t = R32((u32)(r_ebp*8+0xadaca8u)); r_esp -= 4; W32(r_esp, 0x83eebdu); call_ind(t); }
    /* 0083eebd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083eec0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083eec2: mov dword ptr [ebp*8 + 0xadac9c], eax */ W32((u32)(r_ebp*8+0xadac9cu), r_eax);
    /* 0083eec9: mov dword ptr [ebp*8 + 0xadac98], eax */ W32((u32)(r_ebp*8+0xadac98u), r_eax);
    /* 0083eed0: mov dword ptr [ebp*8 + 0xadaca8], eax */ W32((u32)(r_ebp*8+0xadaca8u), r_eax);
    /* 0083eed7: mov word ptr [ebp*8 + 0xadacac], ax */ W16((u32)(r_ebp*8+0xadacacu), (u16)r_eax);
    /* 0083eedf: jmp 0x83ef00 */ goto L_0083ef00;
L_0083eee1:; BB(0x0083eee1);
    /* 0083eee1: call dword ptr [0x8f83cc] */ { u32 t = R32((u32)(0x8f83ccu)); r_esp -= 4; W32(r_esp, 0x83eee7u); call_ind(t); }
    /* 0083eee7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083eee8: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083eeed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083eeee: mov word ptr [ebp*8 + 0xadacac], ax */ W16((u32)(r_ebp*8+0xadacacu), (u16)r_eax);
    /* 0083eef6: call dword ptr [ebp*8 + 0xadaca8] */ { u32 t = R32((u32)(r_ebp*8+0xadaca8u)); r_esp -= 4; W32(r_esp, 0x83eefdu); call_ind(t); }
    /* 0083eefd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0083ef00:; BB(0x0083ef00);
    /* 0083ef00: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083ef03: mov eax, ebx */ r_eax = r_ebx;
    /* 0083ef05: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083ef08: jl 0x83edc3 */ if ((fS!=fO)) goto L_0083edc3;
L_0083ef0e:; BB(0x0083ef0e);
    /* 0083ef0e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ef10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083ef12: mov dword ptr [0xadaf80], eax */ W32((u32)(0xadaf80u), r_eax);
    /* 0083ef17: mov dword ptr [0xadb0a0], eax */ W32((u32)(0xadb0a0u), r_eax);
    /* 0083ef1c: mov dword ptr [0xadb1c0], eax */ W32((u32)(0xadb1c0u), r_eax);
    /* 0083ef21: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083ef23: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083ef25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0083ef27:; BB(0x0083ef27);
    /* 0083ef27: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0083ef2a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083ef2c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0083ef2e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083ef30: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0083ef34: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ef36: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ef38: movsx esi, word ptr [eax + 0xadac94] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0xadac94u));
    /* 0083ef3f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ef41: je 0x83efe8 */ if (fZ) goto L_0083efe8;
L_0083ef47:; BB(0x0083ef47);
    /* 0083ef47: mov eax, dword ptr [ebp*8 + 0xadaca0] */ r_eax = R32((u32)(r_ebp*8+0xadaca0u));
    /* 0083ef4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ef50: je 0x83efe8 */ if (fZ) goto L_0083efe8;
L_0083ef56:; BB(0x0083ef56);
    /* 0083ef56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083ef58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0083ef5a: jbe 0x83efbf */ if ((fC||fZ)) goto L_0083efbf;
L_0083ef5c:; BB(0x0083ef5c);
    /* 0083ef5c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083ef5f: jb 0x83f39d */ if (fC) goto L_0083f39d;
L_0083ef65:; BB(0x0083ef65);
    /* 0083ef65: mov esi, dword ptr [ebp*8 + 0xadac90] */ r_esi = R32((u32)(r_ebp*8+0xadac90u));
L_0083ef6c:; BB(0x0083ef6c);
    /* 0083ef6c: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ef73: je 0x83efbf */ if (fZ) goto L_0083efbf;
L_0083ef75:; BB(0x0083ef75);
    /* 0083ef75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ef78: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ef7f: je 0x83efbf */ if (fZ) goto L_0083efbf;
L_0083ef81:; BB(0x0083ef81);
    /* 0083ef81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ef84: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ef8b: je 0x83efbf */ if (fZ) goto L_0083efbf;
L_0083ef8d:; BB(0x0083ef8d);
    /* 0083ef8d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ef90: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ef97: je 0x83efbf */ if (fZ) goto L_0083efbf;
L_0083ef99:; BB(0x0083ef99);
    /* 0083ef99: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083ef9c: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083efa3: je 0x83efbf */ if (fZ) goto L_0083efbf;
L_0083efa5:; BB(0x0083efa5);
    /* 0083efa5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083efa8: lea edi, [ecx - 6] */ r_edi = (u32)(r_ecx+0xfffffffau);
    /* 0083efab: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0083efad: jbe 0x83ef6c */ if ((fC||fZ)) goto L_0083ef6c;
L_0083efaf:; BB(0x0083efaf);
    /* 0083efaf: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083efb6: je 0x83efbf */ if (fZ) goto L_0083efbf;
L_0083efb8:; BB(0x0083efb8);
    /* 0083efb8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083efbb: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083efbd: jb 0x83efaf */ if (fC) goto L_0083efaf;
L_0083efbf:; BB(0x0083efbf);
    /* 0083efbf: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083efc1: jne 0x83efe5 */ if (!fZ) goto L_0083efe5;
L_0083efc3:; BB(0x0083efc3);
    /* 0083efc3: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083efc6: jae 0x83efe5 */ if (!fC) goto L_0083efe5;
L_0083efc8:; BB(0x0083efc8);
    /* 0083efc8: mov ecx, dword ptr [ebp*8 + 0xadac90] */ r_ecx = R32((u32)(r_ebp*8+0xadac90u));
    /* 0083efcf: mov dword ptr [eax*4 + 0xadaf84], ecx */ W32((u32)(r_eax*4+0xadaf84u), r_ecx);
    /* 0083efd6: mov ecx, dword ptr [0xadaf80] */ r_ecx = R32((u32)(0xadaf80u));
    /* 0083efdc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083efdf: mov dword ptr [0xadaf80], ecx */ W32((u32)(0xadaf80u), r_ecx);
L_0083efe5:; BB(0x0083efe5);
    /* 0083efe5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0083efe8:; BB(0x0083efe8);
    /* 0083efe8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083efeb: mov eax, edx */ r_eax = r_edx;
    /* 0083efed: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083eff0: jl 0x83ef27 */ if ((fS!=fO)) goto L_0083ef27;
L_0083eff6:; BB(0x0083eff6);
    /* 0083eff6: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 0083eff9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083effb: jne 0x83f001 */ if (!fZ) goto L_0083f001;
L_0083effd:; BB(0x0083effd);
    /* 0083effd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083efff: jmp 0x83f026 */ goto L_0083f026;
L_0083f001:; BB(0x0083f001);
    /* 0083f001: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0083f005: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083f007: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0083f00b: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0083f00f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f010: push 0xadb1c0 */ { u32 v = 0xadb1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f015: push 0xadb0a0 */ { u32 v = 0xadb0a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f01a: push 0xadaf80 */ { u32 v = 0xadaf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f01f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f020: call dword ptr [0x8f8414] */ { u32 t = R32((u32)(0x8f8414u)); r_esp -= 4; W32(r_esp, 0x83f026u); call_ind(t); }
L_0083f026:; BB(0x0083f026);
    /* 0083f026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083f028: jle 0x83f119 */ if ((fZ||fS!=fO)) goto L_0083f119;
L_0083f02e:; BB(0x0083f02e);
    /* 0083f02e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0083f032: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0083f034: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0083f036:; BB(0x0083f036);
    /* 0083f036: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0083f03a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083f03c: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0083f03e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083f040: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0083f043: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f045: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f047: movsx edx, word ptr [eax + 0xadac94] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xadac94u));
    /* 0083f04e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f050: je 0x83f107 */ if (fZ) goto L_0083f107;
L_0083f056:; BB(0x0083f056);
    /* 0083f056: mov ebx, dword ptr [edi*8 + 0xadac90] */ r_ebx = R32((u32)(r_edi*8+0xadac90u));
    /* 0083f05d: mov eax, dword ptr [edi*8 + 0xadaca0] */ r_eax = R32((u32)(r_edi*8+0xadaca0u));
    /* 0083f064: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f066: je 0x83f107 */ if (fZ) goto L_0083f107;
L_0083f06c:; BB(0x0083f06c);
    /* 0083f06c: mov eax, dword ptr [edi*8 + 0xadac9c] */ r_eax = R32((u32)(r_edi*8+0xadac9cu));
    /* 0083f073: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f075: je 0x83f3d1 */ if (fZ) goto L_0083f3d1;
L_0083f07b:; BB(0x0083f07b);
    /* 0083f07b: mov eax, dword ptr [edi*8 + 0xadac98] */ r_eax = R32((u32)(r_edi*8+0xadac98u));
    /* 0083f082: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083f084: jle 0x83f3d1 */ if ((fZ||fS!=fO)) goto L_0083f3d1;
L_0083f08a:; BB(0x0083f08a);
    /* 0083f08a: push 0xadaf80 */ { u32 v = 0xadaf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f08f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f090: call 0x88f686 */ r_esp -= 4; W32(r_esp, 0x83f095u); f_0088f686();
    /* 0083f095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f097: je 0x83f107 */ if (fZ) goto L_0083f107;
L_0083f099:; BB(0x0083f099);
    /* 0083f099: mov dword ptr [esp + 0x10], 0x10 */ W32((u32)(r_esp+0x10u), 0x10u);
    /* 0083f0a1: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0083f0a5: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0083f0a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f0aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f0ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f0ad: push dword ptr [edi*8 + 0xadac98] */ { u32 v = R32((u32)(r_edi*8+0xadac98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f0b4: push dword ptr [edi*8 + 0xadac9c] */ { u32 v = R32((u32)(r_edi*8+0xadac9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f0bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f0bc: call dword ptr [0x8f83f8] */ { u32 t = R32((u32)(0x8f83f8u)); r_esp -= 4; W32(r_esp, 0x83f0c2u); call_ind(t); }
    /* 0083f0c2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0083f0c6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f0c9: je 0x83f3a9 */ if (fZ) goto L_0083f3a9;
L_0083f0cf:; BB(0x0083f0cf);
    /* 0083f0cf: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0083f0d3: movzx edx, word ptr [esp + 0x16] */ r_edx = (u32)R16((u32)(r_esp+0x16u));
    /* 0083f0d8: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0083f0dc: mov word ptr [esp + 0x58], dx */ W16((u32)(r_esp+0x58u), (u16)r_edx);
    /* 0083f0e1: lea ebx, [esp + 0x24] */ r_ebx = (u32)(r_esp+0x24u);
    /* 0083f0e5: or ebp, 0xffff0400 */ {  u32 a = r_ebp; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0083f0eb: mov word ptr [esp + 0x24], bp */ W16((u32)(r_esp+0x24u), (u16)r_ebp);
    /* 0083f0f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f0f2: mov word ptr [edi*8 + 0xadacac], cx */ W16((u32)(r_edi*8+0xadacacu), (u16)r_ecx);
    /* 0083f0fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f0fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f0fd: call dword ptr [edi*8 + 0xadaca0] */ { u32 t = R32((u32)(r_edi*8+0xadaca0u)); r_esp -= 4; W32(r_esp, 0x83f104u); call_ind(t); }
    /* 0083f104: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0083f107:; BB(0x0083f107);
    /* 0083f107: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083f10a: mov ebp, esi */ r_ebp = r_esi;
    /* 0083f10c: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083f10f: jl 0x83f036 */ if ((fS!=fO)) goto L_0083f036;
L_0083f115:; BB(0x0083f115);
    /* 0083f115: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
L_0083f119:; BB(0x0083f119);
    /* 0083f119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083f11b: jg 0x83ef0e */ if ((!fZ&&fS==fO)) goto L_0083ef0e;
L_0083f121:; BB(0x0083f121);
    /* 0083f121: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f123: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083f125: mov dword ptr [0xadaf80], eax */ W32((u32)(0xadaf80u), r_eax);
    /* 0083f12a: mov dword ptr [0xadb0a0], eax */ W32((u32)(0xadb0a0u), r_eax);
    /* 0083f12f: mov dword ptr [0xadb1c0], eax */ W32((u32)(0xadb1c0u), r_eax);
    /* 0083f134: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083f136: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083f138: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0083f13a:; BB(0x0083f13a);
    /* 0083f13a: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0083f13d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083f13f: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0083f141: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083f143: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0083f147: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f149: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f14b: movsx esi, word ptr [eax + 0xadac94] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0xadac94u));
    /* 0083f152: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f154: je 0x83f1fb */ if (fZ) goto L_0083f1fb;
L_0083f15a:; BB(0x0083f15a);
    /* 0083f15a: mov eax, dword ptr [ebp*8 + 0xadaca4] */ r_eax = R32((u32)(r_ebp*8+0xadaca4u));
    /* 0083f161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f163: je 0x83f1fb */ if (fZ) goto L_0083f1fb;
L_0083f169:; BB(0x0083f169);
    /* 0083f169: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083f16b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0083f16d: jbe 0x83f1d2 */ if ((fC||fZ)) goto L_0083f1d2;
L_0083f16f:; BB(0x0083f16f);
    /* 0083f16f: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083f172: jb 0x83f408 */ if (fC) goto L_0083f408;
L_0083f178:; BB(0x0083f178);
    /* 0083f178: mov esi, dword ptr [ebp*8 + 0xadac90] */ r_esi = R32((u32)(r_ebp*8+0xadac90u));
L_0083f17f:; BB(0x0083f17f);
    /* 0083f17f: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f186: je 0x83f1d2 */ if (fZ) goto L_0083f1d2;
L_0083f188:; BB(0x0083f188);
    /* 0083f188: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f18b: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f192: je 0x83f1d2 */ if (fZ) goto L_0083f1d2;
L_0083f194:; BB(0x0083f194);
    /* 0083f194: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f197: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f19e: je 0x83f1d2 */ if (fZ) goto L_0083f1d2;
L_0083f1a0:; BB(0x0083f1a0);
    /* 0083f1a0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f1a3: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f1aa: je 0x83f1d2 */ if (fZ) goto L_0083f1d2;
L_0083f1ac:; BB(0x0083f1ac);
    /* 0083f1ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f1af: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f1b6: je 0x83f1d2 */ if (fZ) goto L_0083f1d2;
L_0083f1b8:; BB(0x0083f1b8);
    /* 0083f1b8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f1bb: lea edi, [ecx - 6] */ r_edi = (u32)(r_ecx+0xfffffffau);
    /* 0083f1be: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0083f1c0: jbe 0x83f17f */ if ((fC||fZ)) goto L_0083f17f;
L_0083f1c2:; BB(0x0083f1c2);
    /* 0083f1c2: cmp esi, dword ptr [eax*4 + 0xadaf84] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0xadaf84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f1c9: je 0x83f1d2 */ if (fZ) goto L_0083f1d2;
L_0083f1cb:; BB(0x0083f1cb);
    /* 0083f1cb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f1ce: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083f1d0: jb 0x83f1c2 */ if (fC) goto L_0083f1c2;
L_0083f1d2:; BB(0x0083f1d2);
    /* 0083f1d2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f1d4: jne 0x83f1f8 */ if (!fZ) goto L_0083f1f8;
L_0083f1d6:; BB(0x0083f1d6);
    /* 0083f1d6: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083f1d9: jae 0x83f1f8 */ if (!fC) goto L_0083f1f8;
L_0083f1db:; BB(0x0083f1db);
    /* 0083f1db: mov ecx, dword ptr [ebp*8 + 0xadac90] */ r_ecx = R32((u32)(r_ebp*8+0xadac90u));
    /* 0083f1e2: mov dword ptr [eax*4 + 0xadaf84], ecx */ W32((u32)(r_eax*4+0xadaf84u), r_ecx);
    /* 0083f1e9: mov ecx, dword ptr [0xadaf80] */ r_ecx = R32((u32)(0xadaf80u));
    /* 0083f1ef: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f1f2: mov dword ptr [0xadaf80], ecx */ W32((u32)(0xadaf80u), r_ecx);
L_0083f1f8:; BB(0x0083f1f8);
    /* 0083f1f8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0083f1fb:; BB(0x0083f1fb);
    /* 0083f1fb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083f1fe: mov eax, edx */ r_eax = r_edx;
    /* 0083f200: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083f203: jl 0x83f13a */ if ((fS!=fO)) goto L_0083f13a;
L_0083f209:; BB(0x0083f209);
    /* 0083f209: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 0083f20c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f20e: jne 0x83f214 */ if (!fZ) goto L_0083f214;
L_0083f210:; BB(0x0083f210);
    /* 0083f210: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083f212: jmp 0x83f242 */ goto L_0083f242;
L_0083f214:; BB(0x0083f214);
    /* 0083f214: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 0083f21b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083f21d: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 0083f224: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0083f22b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f22c: push 0xadb1c0 */ { u32 v = 0xadb1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f231: push 0xadb0a0 */ { u32 v = 0xadb0a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f236: push 0xadaf80 */ { u32 v = 0xadaf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f23b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f23c: call dword ptr [0x8f8414] */ { u32 t = R32((u32)(0x8f8414u)); r_esp -= 4; W32(r_esp, 0x83f242u); call_ind(t); }
L_0083f242:; BB(0x0083f242);
    /* 0083f242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083f244: jle 0x83f35a */ if ((fZ||fS!=fO)) goto L_0083f35a;
L_0083f24a:; BB(0x0083f24a);
    /* 0083f24a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0083f24e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0083f250: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0083f252:; BB(0x0083f252);
    /* 0083f252: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0083f256: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083f258: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0083f25a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083f25c: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0083f25f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f261: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083f263: movsx edx, word ptr [eax + 0xadac94] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xadac94u));
    /* 0083f26a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f26c: je 0x83f348 */ if (fZ) goto L_0083f348;
L_0083f272:; BB(0x0083f272);
    /* 0083f272: mov ebx, dword ptr [edi*8 + 0xadac90] */ r_ebx = R32((u32)(r_edi*8+0xadac90u));
    /* 0083f279: mov eax, dword ptr [edi*8 + 0xadaca4] */ r_eax = R32((u32)(r_edi*8+0xadaca4u));
    /* 0083f280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f282: je 0x83f348 */ if (fZ) goto L_0083f348;
L_0083f288:; BB(0x0083f288);
    /* 0083f288: mov eax, dword ptr [edi*8 + 0xadac9c] */ r_eax = R32((u32)(r_edi*8+0xadac9cu));
    /* 0083f28f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f291: je 0x83f43f */ if (fZ) goto L_0083f43f;
L_0083f297:; BB(0x0083f297);
    /* 0083f297: mov eax, dword ptr [edi*8 + 0xadac98] */ r_eax = R32((u32)(r_edi*8+0xadac98u));
    /* 0083f29e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083f2a0: jle 0x83f43f */ if ((fZ||fS!=fO)) goto L_0083f43f;
L_0083f2a6:; BB(0x0083f2a6);
    /* 0083f2a6: push 0xadaf80 */ { u32 v = 0xadaf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f2ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f2ac: call 0x88f686 */ r_esp -= 4; W32(r_esp, 0x83f2b1u); f_0088f686();
    /* 0083f2b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f2b3: je 0x83f348 */ if (fZ) goto L_0083f348;
L_0083f2b9:; BB(0x0083f2b9);
    /* 0083f2b9: mov dword ptr [esp + 0x9c], 0x10 */ W32((u32)(r_esp+0x9cu), 0x10u);
    /* 0083f2c4: lea edx, [esp + 0xa0] */ r_edx = (u32)(r_esp+0xa0u);
    /* 0083f2cb: lea eax, [esp + 0x9c] */ r_eax = (u32)(r_esp+0x9cu);
    /* 0083f2d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f2d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f2d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f2d6: push dword ptr [edi*8 + 0xadac98] */ { u32 v = R32((u32)(r_edi*8+0xadac98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f2dd: push dword ptr [edi*8 + 0xadac9c] */ { u32 v = R32((u32)(r_edi*8+0xadac9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083f2e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f2e5: call dword ptr [0x8f83f8] */ { u32 t = R32((u32)(0x8f83f8u)); r_esp -= 4; W32(r_esp, 0x83f2ebu); call_ind(t); }
    /* 0083f2eb: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0083f2ee: mov dword ptr [esp + 0xb4], eax */ W32((u32)(r_esp+0xb4u), r_eax);
    /* 0083f2f5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083f2f8: je 0x83f414 */ if (fZ) goto L_0083f414;
L_0083f2fe:; BB(0x0083f2fe);
    /* 0083f2fe: mov eax, dword ptr [esp + 0xa4] */ r_eax = R32((u32)(r_esp+0xa4u));
    /* 0083f305: movzx edx, word ptr [esp + 0xa2] */ r_edx = (u32)R16((u32)(r_esp+0xa2u));
    /* 0083f30d: mov dword ptr [esp + 0xc0], eax */ W32((u32)(r_esp+0xc0u), r_eax);
    /* 0083f314: mov word ptr [esp + 0xe4], dx */ W16((u32)(r_esp+0xe4u), (u16)r_edx);
    /* 0083f31c: lea ebx, [esp + 0xb0] */ r_ebx = (u32)(r_esp+0xb0u);
    /* 0083f323: or ebp, 0xffff0800 */ {  u32 a = r_ebp; u32 b = 0xffff0800u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0083f329: mov word ptr [esp + 0xb0], bp */ W16((u32)(r_esp+0xb0u), (u16)r_ebp);
    /* 0083f331: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083f333: mov word ptr [edi*8 + 0xadacac], cx */ W16((u32)(r_edi*8+0xadacacu), (u16)r_ecx);
    /* 0083f33b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f33c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f33e: call dword ptr [edi*8 + 0xadaca4] */ { u32 t = R32((u32)(r_edi*8+0xadaca4u)); r_esp -= 4; W32(r_esp, 0x83f345u); call_ind(t); }
    /* 0083f345: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0083f348:; BB(0x0083f348);
    /* 0083f348: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083f34b: mov ebp, esi */ r_ebp = r_esi;
    /* 0083f34d: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083f350: jl 0x83f252 */ if ((fS!=fO)) goto L_0083f252;
L_0083f356:; BB(0x0083f356);
    /* 0083f356: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
L_0083f35a:; BB(0x0083f35a);
    /* 0083f35a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0083f35c: jg 0x83f121 */ if ((!fZ&&fS==fO)) goto L_0083f121;
L_0083f362:; BB(0x0083f362);
    /* 0083f362: add esp, 0x120 */ {  u32 a = r_esp; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083f368: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083f369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083f36a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083f36b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083f36c: ret  */ FN_RET(0x0083ecc0); r_esp += 4; return;
L_0083f36d:; BB(0x0083f36d);
    /* 0083f36d: mov ebp, dword ptr [ebx*8 + 0xadac90] */ r_ebp = R32((u32)(r_ebx*8+0xadac90u));
    /* 0083f374: jmp 0x83ed6f */ goto L_0083ed6f;
L_0083f379:; BB(0x0083f379);
    /* 0083f379: call dword ptr [0x8f83cc] */ { u32 t = R32((u32)(0x8f83ccu)); r_esp -= 4; W32(r_esp, 0x83f37fu); call_ind(t); }
    /* 0083f37f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f380: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083f385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f386: mov word ptr [ebp*8 + 0xadacac], ax */ W16((u32)(r_ebp*8+0xadacacu), (u16)r_eax);
    /* 0083f38e: call dword ptr [ebp*8 + 0xadaca8] */ { u32 t = R32((u32)(r_ebp*8+0xadaca8u)); r_esp -= 4; W32(r_esp, 0x83f395u); call_ind(t); }
    /* 0083f395: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083f398: jmp 0x83ef00 */ goto L_0083ef00;
L_0083f39d:; BB(0x0083f39d);
    /* 0083f39d: mov esi, dword ptr [ebp*8 + 0xadac90] */ r_esi = R32((u32)(r_ebp*8+0xadac90u));
    /* 0083f3a4: jmp 0x83efaf */ goto L_0083efaf;
L_0083f3a9:; BB(0x0083f3a9);
    /* 0083f3a9: call dword ptr [0x8f83cc] */ { u32 t = R32((u32)(0x8f83ccu)); r_esp -= 4; W32(r_esp, 0x83f3afu); call_ind(t); }
    /* 0083f3af: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0083f3b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f3b4: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0083f3b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f3ba: mov word ptr [edi*8 + 0xadacac], dx */ W16((u32)(r_edi*8+0xadacacu), (u16)r_edx);
    /* 0083f3c2: call dword ptr [edi*8 + 0xadaca0] */ { u32 t = R32((u32)(r_edi*8+0xadaca0u)); r_esp -= 4; W32(r_esp, 0x83f3c9u); call_ind(t); }
    /* 0083f3c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083f3cc: jmp 0x83f107 */ goto L_0083f107;
L_0083f3d1:; BB(0x0083f3d1);
    /* 0083f3d1: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 0083f3d5: or ebp, 0xffff0400 */ {  u32 a = r_ebp; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0083f3db: mov word ptr [esp + 0x5c], bp */ W16((u32)(r_esp+0x5cu), (u16)r_ebp);
    /* 0083f3e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f3e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f3e3: call dword ptr [edi*8 + 0xadaca0] */ { u32 t = R32((u32)(r_edi*8+0xadaca0u)); r_esp -= 4; W32(r_esp, 0x83f3eau); call_ind(t); }
    /* 0083f3ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083f3ed: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 0083f3f1: mov dword ptr [edi*8 + 0xadac9c], eax */ W32((u32)(r_edi*8+0xadac9cu), r_eax);
    /* 0083f3f8: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 0083f3fc: mov dword ptr [edi*8 + 0xadac98], edx */ W32((u32)(r_edi*8+0xadac98u), r_edx);
    /* 0083f403: jmp 0x83f107 */ goto L_0083f107;
L_0083f408:; BB(0x0083f408);
    /* 0083f408: mov esi, dword ptr [ebp*8 + 0xadac90] */ r_esi = R32((u32)(r_ebp*8+0xadac90u));
    /* 0083f40f: jmp 0x83f1c2 */ goto L_0083f1c2;
L_0083f414:; BB(0x0083f414);
    /* 0083f414: call dword ptr [0x8f83cc] */ { u32 t = R32((u32)(0x8f83ccu)); r_esp -= 4; W32(r_esp, 0x83f41au); call_ind(t); }
    /* 0083f41a: lea eax, [esp + 0xb0] */ r_eax = (u32)(r_esp+0xb0u);
    /* 0083f421: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f422: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0083f427: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083f428: mov word ptr [edi*8 + 0xadacac], dx */ W16((u32)(r_edi*8+0xadacacu), (u16)r_edx);
    /* 0083f430: call dword ptr [edi*8 + 0xadaca4] */ { u32 t = R32((u32)(r_edi*8+0xadaca4u)); r_esp -= 4; W32(r_esp, 0x83f437u); call_ind(t); }
    /* 0083f437: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083f43a: jmp 0x83f348 */ goto L_0083f348;
L_0083f43f:; BB(0x0083f43f);
    /* 0083f43f: lea eax, [esp + 0xe8] */ r_eax = (u32)(r_esp+0xe8u);
    /* 0083f446: or ebp, 0xffff0800 */ {  u32 a = r_ebp; u32 b = 0xffff0800u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0083f44c: mov word ptr [esp + 0xe8], bp */ W16((u32)(r_esp+0xe8u), (u16)r_ebp);
    /* 0083f454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083f455: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083f457: call dword ptr [edi*8 + 0xadaca4] */ { u32 t = R32((u32)(r_edi*8+0xadaca4u)); r_esp -= 4; W32(r_esp, 0x83f45eu); call_ind(t); }
    /* 0083f45e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083f461: mov eax, dword ptr [esp + 0xf0] */ r_eax = R32((u32)(r_esp+0xf0u));
    /* 0083f468: mov dword ptr [edi*8 + 0xadac9c], eax */ W32((u32)(r_edi*8+0xadac9cu), r_eax);
    /* 0083f46f: mov edx, dword ptr [esp + 0xec] */ r_edx = R32((u32)(r_esp+0xecu));
    /* 0083f476: mov dword ptr [edi*8 + 0xadac98], edx */ W32((u32)(r_edi*8+0xadac98u), r_edx);
    /* 0083f47d: jmp 0x83f348 */ goto L_0083f348;
}

