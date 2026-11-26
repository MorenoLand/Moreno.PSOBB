#include "protos.h"

void f_004a109c(void) /* sub_4A109C */
{
    FN_ENTER(0x004a109c);
    /* 004a109c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a109d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a109e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a10a1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a10a3: mov eax, dword ptr [0x903828] */ r_eax = R32((u32)(0x903828u));
    /* 004a10a8: mov edx, dword ptr [0x903838] */ r_edx = R32((u32)(0x903838u));
    /* 004a10ae: mov dword ptr [esp + 8], 0x41200000 */ W32((u32)(r_esp+0x8u), 0x41200000u);
    /* 004a10b6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a10ba: mov dword ptr [esp + 0xc], 0x41700000 */ W32((u32)(r_esp+0xcu), 0x41700000u);
    /* 004a10c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a10c4: mov dword ptr [esp + 0x10], 0x41000000 */ W32((u32)(r_esp+0x10u), 0x41000000u);
    /* 004a10cc: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004a10d0: mov edx, dword ptr [ebp + 0x580] */ r_edx = R32((u32)(r_ebp+0x580u));
    /* 004a10d6: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004a10d9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a10db: jle 0x4a10ed */ if ((fZ||fS!=fO)) goto L_004a10ed;
L_004a10dd:; BB(0x004a10dd);
    /* 004a10dd: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004a10df: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004a10e2: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 004a10e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a10e8: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a10eb: jl 0x4a10dd */ if ((fS!=fO)) goto L_004a10dd;
L_004a10ed:; BB(0x004a10ed);
    /* 004a10ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a10ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a10f0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a10f3: lea edi, [ebp + 0x458] */ r_edi = (u32)(r_ebp+0x458u);
    /* 004a10f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a10fb: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1101: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1102: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a1107u); f_00520c70();
    /* 004a1107: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004a110b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a110c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a110d: call 0x4ab96c */ r_esp -= 4; W32(r_esp, 0x4a1112u); f_004ab96c();
    /* 004a1112: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a1115: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004a1119: push dword ptr [ebp + 0x580] */ { u32 v = R32((u32)(r_ebp+0x580u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a111f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1120: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1122: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1123: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a1128u); f_0051fdf8();
    /* 004a1128: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a112a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a112b: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1132: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1134: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a1139u); f_00520c70();
    /* 004a1139: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a113b: mov eax, dword ptr [ebp + 0x5f8] */ r_eax = R32((u32)(r_ebp+0x5f8u));
    /* 004a1141: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1144: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1145: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a114au); f_0050b7a4();
    /* 004a114a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a114d: mov eax, edi */ r_eax = r_edi;
    /* 004a114f: call 0x4a0d3c */ r_esp -= 4; W32(r_esp, 0x4a1154u); f_004a0d3c();
    /* 004a1154: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1157: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a1159: ret  */ FN_RET(0x004a109c); r_esp += 4; return;
}

void f_004a115c(void) /* sub_4A115C */
{
    FN_ENTER(0x004a115c);
    /* 004a115c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a115d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a115e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a1161: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a1163: mov eax, dword ptr [0x90383c] */ r_eax = R32((u32)(0x90383cu));
    /* 004a1168: mov edx, dword ptr [0x90384c] */ r_edx = R32((u32)(0x90384cu));
    /* 004a116e: mov dword ptr [esp + 8], 0x41200000 */ W32((u32)(r_esp+0x8u), 0x41200000u);
    /* 004a1176: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a117a: mov dword ptr [esp + 0xc], 0x41700000 */ W32((u32)(r_esp+0xcu), 0x41700000u);
    /* 004a1182: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a1184: mov dword ptr [esp + 0x10], 0x41000000 */ W32((u32)(r_esp+0x10u), 0x41000000u);
    /* 004a118c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004a1190: mov edx, dword ptr [ebp + 0x580] */ r_edx = R32((u32)(r_ebp+0x580u));
    /* 004a1196: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004a1199: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a119b: jle 0x4a11ad */ if ((fZ||fS!=fO)) goto L_004a11ad;
L_004a119d:; BB(0x004a119d);
    /* 004a119d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004a119f: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004a11a2: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 004a11a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a11a8: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a11ab: jl 0x4a119d */ if ((fS!=fO)) goto L_004a119d;
L_004a11ad:; BB(0x004a11ad);
    /* 004a11ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a11af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a11b0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a11b3: lea edi, [ebp + 0x3e0] */ r_edi = (u32)(r_ebp+0x3e0u);
    /* 004a11b9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a11bb: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a11c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a11c2: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a11c7u); f_00520c70();
    /* 004a11c7: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004a11cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a11cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a11cd: call 0x4ab96c */ r_esp -= 4; W32(r_esp, 0x4a11d2u); f_004ab96c();
    /* 004a11d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a11d5: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004a11d9: push dword ptr [ebp + 0x580] */ { u32 v = R32((u32)(r_ebp+0x580u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a11df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a11e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a11e2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a11e3: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a11e8u); f_0051fdf8();
    /* 004a11e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a11ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a11eb: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a11f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a11f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a11f4: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a11f9u); f_00520c70();
    /* 004a11f9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a11fb: mov eax, dword ptr [ebp + 0x5f8] */ r_eax = R32((u32)(r_ebp+0x5f8u));
    /* 004a1201: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1204: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1205: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a120au); f_0050b7a4();
    /* 004a120a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a120d: mov eax, edi */ r_eax = r_edi;
    /* 004a120f: call 0x4a0d3c */ r_esp -= 4; W32(r_esp, 0x4a1214u); f_004a0d3c();
    /* 004a1214: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1217: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1218: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a1219: ret  */ FN_RET(0x004a115c); r_esp += 4; return;
}

void f_004a121c(void) /* sub_4A121C */
{
    FN_ENTER(0x004a121c);
    /* 004a121c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a121d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a121e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a1221: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a1223: mov eax, dword ptr [0x903850] */ r_eax = R32((u32)(0x903850u));
    /* 004a1228: mov edx, dword ptr [0x903860] */ r_edx = R32((u32)(0x903860u));
    /* 004a122e: mov dword ptr [esp + 8], 0x41200000 */ W32((u32)(r_esp+0x8u), 0x41200000u);
    /* 004a1236: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a123a: mov dword ptr [esp + 0xc], 0x41700000 */ W32((u32)(r_esp+0xcu), 0x41700000u);
    /* 004a1242: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a1244: mov dword ptr [esp + 0x10], 0x41000000 */ W32((u32)(r_esp+0x10u), 0x41000000u);
    /* 004a124c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004a1250: mov edx, dword ptr [ebp + 0x580] */ r_edx = R32((u32)(r_ebp+0x580u));
    /* 004a1256: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004a1259: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a125b: jle 0x4a126d */ if ((fZ||fS!=fO)) goto L_004a126d;
L_004a125d:; BB(0x004a125d);
    /* 004a125d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004a125f: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004a1262: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 004a1265: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a1268: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a126b: jl 0x4a125d */ if ((fS!=fO)) goto L_004a125d;
L_004a126d:; BB(0x004a126d);
    /* 004a126d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a126f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1270: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a1273: lea edi, [ebp + 0x3d4] */ r_edi = (u32)(r_ebp+0x3d4u);
    /* 004a1279: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a127b: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1282: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a1287u); f_00520c70();
    /* 004a1287: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004a128b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a128c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a128d: call 0x4ab96c */ r_esp -= 4; W32(r_esp, 0x4a1292u); f_004ab96c();
    /* 004a1292: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a1295: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004a1299: push dword ptr [ebp + 0x580] */ { u32 v = R32((u32)(r_ebp+0x580u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a129f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a12a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a12a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a12a3: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a12a8u); f_0051fdf8();
    /* 004a12a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a12aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a12ab: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a12b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a12b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a12b4: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a12b9u); f_00520c70();
    /* 004a12b9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a12bb: mov eax, dword ptr [ebp + 0x5f8] */ r_eax = R32((u32)(r_ebp+0x5f8u));
    /* 004a12c1: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a12c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a12c5: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a12cau); f_0050b7a4();
    /* 004a12ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a12cd: mov eax, edi */ r_eax = r_edi;
    /* 004a12cf: call 0x4a0d3c */ r_esp -= 4; W32(r_esp, 0x4a12d4u); f_004a0d3c();
    /* 004a12d4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a12d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a12d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a12d9: ret  */ FN_RET(0x004a121c); r_esp += 4; return;
}

void f_004a12dc(void) /* sub_4A12DC */
{
    FN_ENTER(0x004a12dc);
    /* 004a12dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a12dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a12df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a12e1: call 0x4c0b50 */ r_esp -= 4; W32(r_esp, 0x4a12e6u); f_004c0b50();
    /* 004a12e6: mov eax, dword ptr [ebx + 0x498] */ r_eax = R32((u32)(r_ebx+0x498u));
    /* 004a12ec: test al, 0x1f */ {  u32 a = (u8)r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a12ee: jne 0x4a131d */ if (!fZ) goto L_004a131d;
L_004a12f0:; BB(0x004a12f0);
    /* 004a12f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a12f2: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x4a12f7u); f_0052126c();
    /* 004a12f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a12f9: je 0x4a1304 */ if (fZ) goto L_004a1304;
L_004a12fb:; BB(0x004a12fb);
    /* 004a12fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a12fd: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4a1302u); f_005213d8();
    /* 004a1302: jmp 0x4a1310 */ goto L_004a1310;
L_004a1304:; BB(0x004a1304);
    /* 004a1304: push 0x903f9c */ { u32 v = 0x903f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a1309: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a130b: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x4a1310u); f_005213ec();
L_004a1310:; BB(0x004a1310);
    /* 004a1310: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a1312: call 0x4a1328 */ r_esp -= 4; W32(r_esp, 0x4a1317u); f_004a1328();
    /* 004a1317: mov eax, dword ptr [ebx + 0x498] */ r_eax = R32((u32)(r_ebx+0x498u));
L_004a131d:; BB(0x004a131d);
    /* 004a131d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1320: mov dword ptr [ebx + 0x498], eax */ W32((u32)(r_ebx+0x498u), r_eax);
    /* 004a1326: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a1327: ret  */ FN_RET(0x004a12dc); r_esp += 4; return;
}

void f_004a1328(void) /* sub_4A1328 */
{
    FN_ENTER(0x004a1328);
    /* 004a1328: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a132b: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 004a132f: movzx edx, word ptr [ecx + 0x394] */ r_edx = (u32)R16((u32)(r_ecx+0x394u));
    /* 004a1336: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004a133b: mov eax, dword ptr [ecx + 0x39c] */ r_eax = R32((u32)(r_ecx+0x39cu));
    /* 004a1341: mov byte ptr [esp], 0x9f */ W8((u32)(r_esp), 0x9fu);
    /* 004a1345: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 004a134a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004a134e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a1352: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 004a1358: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004a135c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004a135f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4a1364u); f_008003e0();
    /* 004a1364: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1367: ret  */ FN_RET(0x004a1328); r_esp += 4; return;
}

void f_004a1368(void) /* sub_4A1368 */
{
    FN_ENTER(0x004a1368);
    /* 004a1368: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1369: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a136b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a136f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1372: je 0x4a1579 */ if (fZ) goto L_004a1579;
L_004a1378:; BB(0x004a1378);
    /* 004a1378: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a137b: je 0x4a1503 */ if (fZ) goto L_004a1503;
L_004a1381:; BB(0x004a1381);
    /* 004a1381: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a1384: je 0x4a1503 */ if (fZ) goto L_004a1503;
L_004a138a:; BB(0x004a138a);
    /* 004a138a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a138d: je 0x4a1503 */ if (fZ) goto L_004a1503;
L_004a1393:; BB(0x004a1393);
    /* 004a1393: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a1396: je 0x4a1503 */ if (fZ) goto L_004a1503;
L_004a139c:; BB(0x004a139c);
    /* 004a139c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a139e: jne 0x4a14de */ if (!fZ) goto L_004a14de;
L_004a13a4:; BB(0x004a13a4);
    /* 004a13a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a13a6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a13abu); f_007aa094();
    /* 004a13ab: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 004a13b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a13b3: je 0x4a1507 */ if (fZ) goto L_004a1507;
L_004a13b9:; BB(0x004a13b9);
    /* 004a13b9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a13bc: je 0x4a1464 */ if (fZ) goto L_004a1464;
L_004a13c2:; BB(0x004a13c2);
    /* 004a13c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a13c5: jne 0x4a1436 */ if (!fZ) goto L_004a1436;
L_004a13c7:; BB(0x004a13c7);
    /* 004a13c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a13c9: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a13ceu); f_007aabd8();
    /* 004a13ce: fld dword ptr [0x903f64] */ FPUSH(R_F32((u32)(0x903f64u)));
    /* 004a13d4: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004a13d6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a13d8: fld dword ptr [0x903fd8] */ FPUSH(R_F32((u32)(0x903fd8u)));
    /* 004a13de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a13e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a13e2: fchs  */ ST(0) = -ST(0);
    /* 004a13e4: fld dword ptr [0x903f60] */ FPUSH(R_F32((u32)(0x903f60u)));
    /* 004a13ea: fadd dword ptr [0xa47564] */ ST(0) = ST(0) + R_F32((u32)(0xa47564u));
    /* 004a13f0: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 004a13f2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a13f4: fdiv dword ptr [0x903f8c] */ ST(0) = ST(0) / R_F32((u32)(0x903f8cu));
    /* 004a13fa: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a13fd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a13ff: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004a1402: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1407: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a140cu); f_004a15ac();
    /* 004a140c: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1411: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a1413: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a1418u); f_007aaa30();
    /* 004a1418: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a141a: je 0x4a14b3 */ if (fZ) goto L_004a14b3;
L_004a1420:; BB(0x004a1420);
    /* 004a1420: mov dword ptr [ebx + 0x3c], 0x43340000 */ W32((u32)(r_ebx+0x3cu), 0x43340000u);
    /* 004a1427: mov dword ptr [ebx + 0x6e8], 3 */ W32((u32)(r_ebx+0x6e8u), 0x3u);
    /* 004a1431: jmp 0x4a14b3 */ goto L_004a14b3;
L_004a1436:; BB(0x004a1436);
    /* 004a1436: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1439: jne 0x4a14b3 */ if (!fZ) goto L_004a14b3;
L_004a143b:; BB(0x004a143b);
    /* 004a143b: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a143e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1443: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a1445: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a144au); f_004a15ac();
    /* 004a144a: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 004a1450: fcomp dword ptr [0x903f90] */ fx_compare(ST(0), R_F32((u32)(0x903f90u))); FPOP();
    /* 004a1456: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a1458: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a1459: ja 0x4a14b3 */ if ((!fC&&!fZ)) goto L_004a14b3;
L_004a145b:; BB(0x004a145b);
    /* 004a145b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a145d: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a1462u); f_004a7e20();
    /* 004a1462: jmp 0x4a14b3 */ goto L_004a14b3;
L_004a1464:; BB(0x004a1464);
    /* 004a1464: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a1466: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a146bu); f_007aabd8();
    /* 004a146b: fld dword ptr [0x903f5c] */ FPUSH(R_F32((u32)(0x903f5cu)));
    /* 004a1471: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004a1473: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a1475: fmul dword ptr [0x903f84] */ ST(0) = ST(0) * R_F32((u32)(0x903f84u));
    /* 004a147b: fdiv dword ptr [0x903f80] */ ST(0) = ST(0) / R_F32((u32)(0x903f80u));
    /* 004a1481: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1484: fadd dword ptr [0xa47564] */ ST(0) = ST(0) + R_F32((u32)(0xa47564u));
    /* 004a148a: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004a148d: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1492: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a1494: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a1499u); f_004a15ac();
    /* 004a1499: push 0x41d80000 */ { u32 v = 0x41d80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a149e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a14a0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a14a5u); f_007aaa30();
    /* 004a14a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a14a7: je 0x4a14b3 */ if (fZ) goto L_004a14b3;
L_004a14a9:; BB(0x004a14a9);
    /* 004a14a9: mov dword ptr [ebx + 0x6e8], 2 */ W32((u32)(r_ebx+0x6e8u), 0x2u);
L_004a14b3:; BB(0x004a14b3);
    /* 004a14b3: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a14b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a14ba: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a14bfu); f_007aaa30();
    /* 004a14bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a14c1: jne 0x4a14d3 */ if (!fZ) goto L_004a14d3;
L_004a14c3:; BB(0x004a14c3);
    /* 004a14c3: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a14c8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a14ca: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a14cfu); f_007aaa30();
    /* 004a14cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a14d1: je 0x4a1503 */ if (fZ) goto L_004a1503;
L_004a14d3:; BB(0x004a14d3);
    /* 004a14d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a14d5: call 0x4a15fc */ r_esp -= 4; W32(r_esp, 0x4a14dau); f_004a15fc();
    /* 004a14da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a14db: ret 4 */ FN_RET(0x004a1368); r_esp += 8; return;
L_004a14de:; BB(0x004a14de);
    /* 004a14de: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a14e1: jne 0x4a1503 */ if (!fZ) goto L_004a1503;
L_004a14e3:; BB(0x004a14e3);
    /* 004a14e3: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a14e9: mov dword ptr [ebx + 0x4ec], 1 */ W32((u32)(r_ebx+0x4ecu), 0x1u);
    /* 004a14f3: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a14f6: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 004a14fc: mov dword ptr [ebx + 0x3c], 0x43340000 */ W32((u32)(r_ebx+0x3cu), 0x43340000u);
L_004a1503:; BB(0x004a1503);
    /* 004a1503: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a1504: ret 4 */ FN_RET(0x004a1368); r_esp += 8; return;
L_004a1507:; BB(0x004a1507);
    /* 004a1507: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a150c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a150e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a1513u); f_007aaa30();
    /* 004a1513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1515: je 0x4a14b3 */ if (fZ) goto L_004a14b3;
L_004a1517:; BB(0x004a1517);
    /* 004a1517: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a151a: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a151f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a1521: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a1526u); f_004a15ac();
    /* 004a1526: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a152c: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a152f: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 004a1535: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a1537: call 0x4a15e8 */ r_esp -= 4; W32(r_esp, 0x4a153cu); f_004a15e8();
    /* 004a153c: mov dword ptr [ebx + 0x4ec], 1 */ W32((u32)(r_ebx+0x4ecu), 0x1u);
    /* 004a1546: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1548: push 0x3e19999a */ { u32 v = 0x3e19999au; r_esp -= 4; W32(r_esp, v); }
    /* 004a154d: call 0x4d430c */ r_esp -= 4; W32(r_esp, 0x4a1552u); f_004d430c();
    /* 004a1552: lea edx, [ebx + 0x568] */ r_edx = (u32)(r_ebx+0x568u);
    /* 004a1558: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a155a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a155b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a155c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a155d: push 0x3a3 */ { u32 v = 0x3a3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1562: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a1567u); f_00814298();
    /* 004a1567: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a156a: mov dword ptr [ebx + 0x6e8], 1 */ W32((u32)(r_ebx+0x6e8u), 0x1u);
    /* 004a1574: jmp 0x4a14b3 */ goto L_004a14b3;
L_004a1579:; BB(0x004a1579);
    /* 004a1579: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a157b: mov eax, 3 */ r_eax = 0x3u;
    /* 004a1580: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a1587: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a1589: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a158fu); call_ind(t); }
    /* 004a158f: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a1594: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a1596: mov dword ptr [ebx + 0x4ec], edx */ W32((u32)(r_ebx+0x4ecu), r_edx);
    /* 004a159c: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 004a159f: mov dword ptr [ebx + 0x6e8], edx */ W32((u32)(r_ebx+0x6e8u), r_edx);
    /* 004a15a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a15a6: ret 4 */ FN_RET(0x004a1368); r_esp += 8; return;
}

void f_004a15ac(void) /* sub_4A15AC */
{
    FN_ENTER(0x004a15ac);
    /* 004a15ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a15ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a15af: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004a15b3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a15b8u); f_0082dcbc();
    /* 004a15b8: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 004a15bc: fadd dword ptr [ebx + 0x47c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x47cu));
    /* 004a15c2: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004a15c6: fstp dword ptr [ebx + 0x47c] */ W_F32((u32)(r_ebx+0x47cu), ST(0)); FPOP();
    /* 004a15cc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a15d1u); f_0082ddd8();
    /* 004a15d1: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 004a15d5: fadd dword ptr [ebx + 0x484] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x484u));
    /* 004a15db: fstp dword ptr [ebx + 0x484] */ W_F32((u32)(r_ebx+0x484u), ST(0)); FPOP();
    /* 004a15e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a15e2: ret 8 */ FN_RET(0x004a15ac); r_esp += 12; return;
}

void f_004a15e8(void) /* sub_4A15E8 */
{
    FN_ENTER(0x004a15e8);
    /* 004a15e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a15e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a15eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a15ed: call 0x4a121c */ r_esp -= 4; W32(r_esp, 0x4a15f2u); f_004a121c();
    /* 004a15f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a15f4: call 0x4a115c */ r_esp -= 4; W32(r_esp, 0x4a15f9u); f_004a115c();
    /* 004a15f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a15fa: ret  */ FN_RET(0x004a15e8); r_esp += 4; return;
}

void f_004a15fc(void) /* sub_4A15FC */
{
    FN_ENTER(0x004a15fc);
    /* 004a15fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a15fd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a1600: mov esi, ecx */ r_esi = r_ecx;
    /* 004a1602: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004a1605: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004a1608: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a160b: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 004a160e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004a1612: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a1616: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a1619: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004a161e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a161f: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4a1624u); f_00780630();
    /* 004a1624: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a1627: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1629: je 0x4a1673 */ if (fZ) goto L_004a1673;
L_004a162b:; BB(0x004a162b);
    /* 004a162b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a162e: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004a1631: fcomp dword ptr [0x903ae0] */ fx_compare(ST(0), R_F32((u32)(0x903ae0u))); FPOP();
    /* 004a1637: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a1639: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004a163c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a163d: jbe 0x4a1644 */ if ((fC||fZ)) goto L_004a1644;
L_004a163f:; BB(0x004a163f);
    /* 004a163f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1642: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a1643: ret  */ FN_RET(0x004a15fc); r_esp += 4; return;
L_004a1644:; BB(0x004a1644);
    /* 004a1644: mov eax, dword ptr [esi + 0x5f8] */ r_eax = R32((u32)(r_esi+0x5f8u));
    /* 004a164a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004a164e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004a1651: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1653: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1655: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1656: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a165bu); f_0050b7a4();
    /* 004a165b: add esi, 0x568 */ {  u32 a = r_esi; u32 b = 0x568u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a1661: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a1663: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1665: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1666: push 0x39b */ { u32 v = 0x39bu; r_esp -= 4; W32(r_esp, v); }
    /* 004a166b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a1670u); f_00814298();
    /* 004a1670: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a1673:; BB(0x004a1673);
    /* 004a1673: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1676: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a1677: ret  */ FN_RET(0x004a15fc); r_esp += 4; return;
}

void f_004a1678(void) /* sub_4A1678 */
{
    FN_ENTER(0x004a1678);
    /* 004a1678: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a1679: mov ebp, esp */ r_ebp = r_esp;
    /* 004a167b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a167d: push 0x8d0446 */ { u32 v = 0x8d0446u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1682: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a1688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1689: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a1690: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a1693: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a1696: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004a1699: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004a169c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004a169f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004a16a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a16a5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a16a8: je 0x4a1981 */ if (fZ) goto L_004a1981;
L_004a16ae:; BB(0x004a16ae);
    /* 004a16ae: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a16b1: je 0x4a1912 */ if (fZ) goto L_004a1912;
L_004a16b7:; BB(0x004a16b7);
    /* 004a16b7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a16ba: je 0x4a1912 */ if (fZ) goto L_004a1912;
L_004a16c0:; BB(0x004a16c0);
    /* 004a16c0: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a16c3: je 0x4a1912 */ if (fZ) goto L_004a1912;
L_004a16c9:; BB(0x004a16c9);
    /* 004a16c9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a16cc: je 0x4a190d */ if (fZ) goto L_004a190d;
L_004a16d2:; BB(0x004a16d2);
    /* 004a16d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a16d4: jne 0x4a18e1 */ if (!fZ) goto L_004a18e1;
L_004a16da:; BB(0x004a16da);
    /* 004a16da: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a16dfu); f_007aa094();
    /* 004a16df: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a16e2: mov eax, dword ptr [eax + 0x6e4] */ r_eax = R32((u32)(r_eax+0x6e4u));
    /* 004a16e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a16ea: je 0x4a171e */ if (fZ) goto L_004a171e;
L_004a16ec:; BB(0x004a16ec);
    /* 004a16ec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a16ef: je 0x4a172b */ if (fZ) goto L_004a172b;
L_004a16f1:; BB(0x004a16f1);
    /* 004a16f1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a16f4: jne 0x4a1912 */ if (!fZ) goto L_004a1912;
L_004a16fa:; BB(0x004a16fa);
    /* 004a16fa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a16fd: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 004a1703: fcomp dword ptr [0x903f58] */ fx_compare(ST(0), R_F32((u32)(0x903f58u))); FPOP();
    /* 004a1709: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a170b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a170c: ja 0x4a1912 */ if ((!fC&&!fZ)) goto L_004a1912;
L_004a1712:; BB(0x004a1712);
    /* 004a1712: mov ecx, edx */ r_ecx = r_edx;
    /* 004a1714: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a1719u); f_004a7e20();
    /* 004a1719: jmp 0x4a1912 */ goto L_004a1912;
L_004a171e:; BB(0x004a171e);
    /* 004a171e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a1721: mov dword ptr [eax + 0x6e4], 1 */ W32((u32)(r_eax+0x6e4u), 0x1u);
L_004a172b:; BB(0x004a172b);
    /* 004a172b: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1730: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a1733: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a1738u); f_007aaa30();
    /* 004a1738: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a173a: je 0x4a1757 */ if (fZ) goto L_004a1757;
L_004a173c:; BB(0x004a173c);
    /* 004a173c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a173f: lea ecx, [eax + 0x568] */ r_ecx = (u32)(r_eax+0x568u);
    /* 004a1745: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a1747: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1748: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1749: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a174a: push 0x39d */ { u32 v = 0x39du; r_esp -= 4; W32(r_esp, v); }
    /* 004a174f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a1754u); f_00814298();
    /* 004a1754: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a1757:; BB(0x004a1757);
    /* 004a1757: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a175c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a175f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a1764u); f_007aaa30();
    /* 004a1764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1766: je 0x4a1783 */ if (fZ) goto L_004a1783;
L_004a1768:; BB(0x004a1768);
    /* 004a1768: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a176b: lea ecx, [eax + 0x568] */ r_ecx = (u32)(r_eax+0x568u);
    /* 004a1771: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a1773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1774: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1775: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1776: push 0x39e */ { u32 v = 0x39eu; r_esp -= 4; W32(r_esp, v); }
    /* 004a177b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a1780u); f_00814298();
    /* 004a1780: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a1783:; BB(0x004a1783);
    /* 004a1783: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1788: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a178b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a1790u); f_007aaa30();
    /* 004a1790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1792: je 0x4a179c */ if (fZ) goto L_004a179c;
L_004a1794:; BB(0x004a1794);
    /* 004a1794: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a1797: call 0x4a15fc */ r_esp -= 4; W32(r_esp, 0x4a179cu); f_004a15fc();
L_004a179c:; BB(0x004a179c);
    /* 004a179c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a179f: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a17a4u); f_007aabd8();
    /* 004a17a4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a17a7: mov ecx, dword ptr [eax + 0x72c] */ r_ecx = R32((u32)(r_eax+0x72cu));
    /* 004a17ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a17af: je 0x4a1938 */ if (fZ) goto L_004a1938;
L_004a17b5:; BB(0x004a17b5);
    /* 004a17b5: fcomp dword ptr [0x903f40] */ fx_compare(ST(0), R_F32((u32)(0x903f40u))); FPOP();
    /* 004a17bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a17bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a17be: ja 0x4a17d1 */ if ((!fC&&!fZ)) goto L_004a17d1;
L_004a17c0:; BB(0x004a17c0);
    /* 004a17c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a17c3: lea edx, [eax + 0x44c] */ r_edx = (u32)(r_eax+0x44cu);
    /* 004a17c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a17ca: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a17cfu); f_00508db8();
    /* 004a17cf: jmp 0x4a17eb */ goto L_004a17eb;
L_004a17d1:; BB(0x004a17d1);
    /* 004a17d1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a17d4: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004a17d8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a17dd: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004a17e1: mov dword ptr [edx + 0x72c], 0 */ W32((u32)(r_edx+0x72cu), 0x0u);
L_004a17eb:; BB(0x004a17eb);
    /* 004a17eb: push 0x41a40000 */ { u32 v = 0x41a40000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a17f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a17f3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a17f8u); f_007aaa30();
    /* 004a17f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a17fa: je 0x4a1912 */ if (fZ) goto L_004a1912;
L_004a1800:; BB(0x004a1800);
    /* 004a1800: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a1803: mov eax, dword ptr [ebx + 0x39c] */ r_eax = R32((u32)(r_ebx+0x39cu));
    /* 004a1809: mov edx, dword ptr [ebx + 0x3a4] */ r_edx = R32((u32)(r_ebx+0x3a4u));
    /* 004a180f: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004a1812: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004a1815: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004a181c: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004a181f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a1824u); f_0082dcbc();
    /* 004a1824: fmul dword ptr [0x903f38] */ ST(0) = ST(0) * R_F32((u32)(0x903f38u));
    /* 004a182a: mov eax, ebx */ r_eax = r_ebx;
    /* 004a182c: fld dword ptr [eax + 0x450] */ FPUSH(R_F32((u32)(r_eax+0x450u)));
    /* 004a1832: fsub dword ptr [0x903fa0] */ ST(0) = ST(0) - R_F32((u32)(0x903fa0u));
    /* 004a1838: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 004a183b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a183d: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004a1840: fchs  */ ST(0) = -ST(0);
    /* 004a1842: fmul dword ptr [0x903f44] */ ST(0) = ST(0) * R_F32((u32)(0x903f44u));
    /* 004a1848: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004a184b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a1850u); f_0082ddd8();
    /* 004a1850: fld dword ptr [0x903f38] */ FPUSH(R_F32((u32)(0x903f38u)));
    /* 004a1856: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a1858: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004a185b: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 004a185d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004a1864: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4a1869u); f_005caba4();
    /* 004a1869: mov ecx, eax */ r_ecx = r_eax;
    /* 004a186b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a186e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004a1871: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1873: je 0x4a192b */ if (fZ) goto L_004a192b;
L_004a1879:; BB(0x004a1879);
    /* 004a1879: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004a1880: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a1887: mov eax, ebx */ r_eax = r_ebx;
    /* 004a1889: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004a188c: movzx esi, word ptr [eax + 0x394] */ r_esi = (u32)R16((u32)(r_eax+0x394u));
    /* 004a1893: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1894: lea ebx, [eax + 0x44c] */ r_ebx = (u32)(r_eax+0x44cu);
    /* 004a189a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a189b: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
    /* 004a189e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a189f: lea edx, [eax + 0x4cc] */ r_edx = (u32)(r_eax+0x4ccu);
    /* 004a18a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a18a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a18a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a18a8: call 0x4aa808 */ r_esp -= 4; W32(r_esp, 0x4a18adu); f_004aa808();
    /* 004a18ad: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004a18b4:; BB(0x004a18b4);
    /* 004a18b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a18bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a18be: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a18c0: mov edx, dword ptr [eax + 0x5f8] */ r_edx = R32((u32)(r_eax+0x5f8u));
    /* 004a18c6: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a18c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a18ca: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a18cfu); f_0050b7a4();
    /* 004a18cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a18d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a18d5: mov dword ptr [eax + 0x6e4], 2 */ W32((u32)(r_eax+0x6e4u), 0x2u);
    /* 004a18df: jmp 0x4a1912 */ goto L_004a1912;
L_004a18e1:; BB(0x004a18e1);
    /* 004a18e1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a18e4: jne 0x4a1912 */ if (!fZ) goto L_004a1912;
L_004a18e6:; BB(0x004a18e6);
    /* 004a18e6: mov eax, ecx */ r_eax = r_ecx;
    /* 004a18e8: mov edx, dword ptr [eax + 0x72c] */ r_edx = R32((u32)(r_eax+0x72cu));
    /* 004a18ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a18f0: je 0x4a1912 */ if (fZ) goto L_004a1912;
L_004a18f2:; BB(0x004a18f2);
    /* 004a18f2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a18f6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a18fb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a18ff: mov edx, ecx */ r_edx = r_ecx;
    /* 004a1901: mov dword ptr [edx + 0x72c], 0 */ W32((u32)(r_edx+0x72cu), 0x0u);
    /* 004a190b: jmp 0x4a1912 */ goto L_004a1912;
L_004a190d:; BB(0x004a190d);
    /* 004a190d: call 0x4a12dc */ r_esp -= 4; W32(r_esp, 0x4a1912u); f_004a12dc();
L_004a1912:; BB(0x004a1912);
    /* 004a1912: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a1915: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a1918: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a191b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a191e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a1925: mov esp, ebp */ r_esp = r_ebp;
    /* 004a1927: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1928: ret 4 */ FN_RET(0x004a1678); r_esp += 8; return;
L_004a192b:; BB(0x004a192b);
    /* 004a192b: mov eax, ebx */ r_eax = r_ebx;
    /* 004a192d: lea ebx, [eax + 0x44c] */ r_ebx = (u32)(r_eax+0x44cu);
    /* 004a1933: jmp 0x4a18b4 */ goto L_004a18b4;
L_004a1938:; BB(0x004a1938);
    /* 004a1938: fcom dword ptr [0x903f3c] */ fx_compare(ST(0), R_F32((u32)(0x903f3cu))); 
    /* 004a193e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a1940: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a1941: jb 0x8d043f */ if (fC) goto L_008d043f;
L_004a1947:; BB(0x004a1947);
    /* 004a1947: fcomp dword ptr [0x903f40] */ fx_compare(ST(0), R_F32((u32)(0x903f40u))); FPOP();
    /* 004a194d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a194f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a1950: ja 0x4a17eb */ if ((!fC&&!fZ)) goto L_004a17eb;
L_004a1956:; BB(0x004a1956);
    /* 004a1956: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a1959: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a195b: mov edx, dword ptr [eax + 0x5f8] */ r_edx = R32((u32)(r_eax+0x5f8u));
    /* 004a1961: lea ecx, [eax + 0x44c] */ r_ecx = (u32)(r_eax+0x44cu);
    /* 004a1967: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a196a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a196b: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4a1970u); f_0050981c();
    /* 004a1970: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a1973: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a1976: mov dword ptr [edx + 0x72c], eax */ W32((u32)(r_edx+0x72cu), r_eax);
    /* 004a197c: jmp 0x4a17eb */ goto L_004a17eb;
L_004a1981:; BB(0x004a1981);
    /* 004a1981: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004a1983: mov eax, 0x18 */ r_eax = 0x18u;
    /* 004a1988: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004a198f: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a1995u); call_ind(t); }
    /* 004a1995: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a1998: mov dword ptr [edx + 0x4ec], 1 */ W32((u32)(r_edx+0x4ecu), 0x1u);
    /* 004a19a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a19a4: mov dword ptr [edx + 0x6e4], eax */ W32((u32)(r_edx+0x6e4u), r_eax);
    /* 004a19aa: mov dword ptr [edx + 0x3c], 0x43340000 */ W32((u32)(r_edx+0x3cu), 0x43340000u);
    /* 004a19b1: mov dword ptr [edx + 0x6e8], eax */ W32((u32)(r_edx+0x6e8u), r_eax);
    /* 004a19b7: mov dword ptr [edx + 0x72c], eax */ W32((u32)(r_edx+0x72cu), r_eax);
    /* 004a19bd: mov dword ptr [edx + 0x498], eax */ W32((u32)(r_edx+0x498u), r_eax);
    /* 004a19c3: jmp 0x4a1912 */ goto L_004a1912;
L_008d043f:; BB(0x008d043f);
    /* 008d043f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d0441: jmp 0x4a17eb */ goto L_004a17eb;
}

void f_004a19c8(void) /* sub_4A19C8 */
{
    FN_ENTER(0x004a19c8);
    /* 004a19c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a19c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a19cb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a19cf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a19d2: je 0x4a1a1b */ if (fZ) goto L_004a1a1b;
L_004a19d4:; BB(0x004a19d4);
    /* 004a19d4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a19d7: je 0x4a1a17 */ if (fZ) goto L_004a1a17;
L_004a19d9:; BB(0x004a19d9);
    /* 004a19d9: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a19dc: je 0x4a1a17 */ if (fZ) goto L_004a1a17;
L_004a19de:; BB(0x004a19de);
    /* 004a19de: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a19e1: je 0x4a1a17 */ if (fZ) goto L_004a1a17;
L_004a19e3:; BB(0x004a19e3);
    /* 004a19e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a19e5: jne 0x4a1a17 */ if (!fZ) goto L_004a1a17;
L_004a19e7:; BB(0x004a19e7);
    /* 004a19e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a19e9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a19eeu); f_007aa094();
    /* 004a19ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a19f0: call 0x4a1a48 */ r_esp -= 4; W32(r_esp, 0x4a19f5u); f_004a1a48();
    /* 004a19f5: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a19f8: mov eax, dword ptr [ebx + 0x4c4] */ r_eax = R32((u32)(r_ebx+0x4c4u));
    /* 004a19fe: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1a01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a1a03: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a1a08u); f_004a15ac();
    /* 004a1a08: mov eax, dword ptr [ebx + 0x4c4] */ r_eax = R32((u32)(r_ebx+0x4c4u));
    /* 004a1a0e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a1a11: add dword ptr [ebx + 0x488], edx */ { u32 ad = (u32)(r_ebx+0x488u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004a1a17:; BB(0x004a1a17);
    /* 004a1a17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a1a18: ret 4 */ FN_RET(0x004a19c8); r_esp += 8; return;
L_004a1a1b:; BB(0x004a1a1b);
    /* 004a1a1b: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a1a1d: mov eax, 4 */ r_eax = 0x4u;
    /* 004a1a22: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a1a29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a1a2b: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a1a31u); call_ind(t); }
    /* 004a1a31: mov dword ptr [ebx + 0x4ec], 1 */ W32((u32)(r_ebx+0x4ecu), 0x1u);
    /* 004a1a3b: mov dword ptr [ebx + 0x3c], 0x43340000 */ W32((u32)(r_ebx+0x3cu), 0x43340000u);
    /* 004a1a42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a1a43: ret 4 */ FN_RET(0x004a19c8); r_esp += 8; return;
}

void f_004a1a48(void) /* sub_4A1A48 */
{
    FN_ENTER(0x004a1a48);
    /* 004a1a48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1a49: mov edi, ecx */ r_edi = r_ecx;
    /* 004a1a4b: mov ecx, edi */ r_ecx = r_edi;
    /* 004a1a4d: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1a52: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a1a57u); f_007aaa30();
    /* 004a1a57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a1a59: je 0x4a1a62 */ if (fZ) goto L_004a1a62;
L_004a1a5b:; BB(0x004a1a5b);
    /* 004a1a5b: mov ecx, edi */ r_ecx = r_edi;
    /* 004a1a5d: call 0x4a15fc */ r_esp -= 4; W32(r_esp, 0x4a1a62u); f_004a15fc();
L_004a1a62:; BB(0x004a1a62);
    /* 004a1a62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a1a63: ret  */ FN_RET(0x004a1a48); r_esp += 4; return;
}

void f_004a1a64(void) /* sub_4A1A64 */
{
    FN_ENTER(0x004a1a64);
    /* 004a1a64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1a65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1a66: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a1a69: mov esi, ecx */ r_esi = r_ecx;
    /* 004a1a6b: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004a1a6f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1a72: je 0x4a1b49 */ if (fZ) goto L_004a1b49;
L_004a1a78:; BB(0x004a1a78);
    /* 004a1a78: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1a7b: je 0x4a1b3b */ if (fZ) goto L_004a1b3b;
L_004a1a81:; BB(0x004a1a81);
    /* 004a1a81: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1a84: je 0x4a1b3b */ if (fZ) goto L_004a1b3b;
L_004a1a8a:; BB(0x004a1a8a);
    /* 004a1a8a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1a8d: je 0x4a1b34 */ if (fZ) goto L_004a1b34;
L_004a1a93:; BB(0x004a1a93);
    /* 004a1a93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1a95: jne 0x4a1b3b */ if (!fZ) goto L_004a1b3b;
L_004a1a9b:; BB(0x004a1a9b);
    /* 004a1a9b: mov ecx, esi */ r_ecx = r_esi;
    /* 004a1a9d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a1aa2u); f_007aa094();
    /* 004a1aa2: mov ecx, esi */ r_ecx = r_esi;
    /* 004a1aa4: call 0x4a1a48 */ r_esp -= 4; W32(r_esp, 0x4a1aa9u); f_004a1a48();
    /* 004a1aa9: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004a1aac: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004a1aaf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a1ab1: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004a1ab4: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004a1ab7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a1ab9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004a1abb: mov edx, dword ptr [esi + 0x4c4] */ r_edx = R32((u32)(r_esi+0x4c4u));
    /* 004a1ac1: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 004a1ac4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a1ac6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004a1ac8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a1aca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a1acc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a1ace: mov edi, 0x4000 */ r_edi = 0x4000u;
    /* 004a1ad3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a1ad4: jae 0x4a1adb */ if (!fC) goto L_004a1adb;
L_004a1ad6:; BB(0x004a1ad6);
    /* 004a1ad6: mov edi, 0x5000 */ r_edi = 0x5000u;
L_004a1adb:; BB(0x004a1adb);
    /* 004a1adb: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a1add: fmul qword ptr [0x903ad8] */ ST(0) = ST(0) * R_F64((u32)(0x903ad8u));
    /* 004a1ae3: fdiv qword ptr [0x903ad0] */ ST(0) = ST(0) / R_F64((u32)(0x903ad0u));
    /* 004a1ae9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a1aec: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a1af0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a1af5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a1af9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a1afd: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a1b01: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a1b04: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004a1b07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a1b09: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a1b0d: jle 0x4a1b43 */ if ((fZ||fS!=fO)) goto L_004a1b43;
L_004a1b0f:; BB(0x004a1b0f);
    /* 004a1b0f: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004a1b11:; BB(0x004a1b11);
    /* 004a1b11: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1b12: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1b15: mov ecx, esi */ r_ecx = r_esi;
    /* 004a1b17: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a1b1cu); f_004a15ac();
    /* 004a1b1c: mov eax, dword ptr [esi + 0x4c4] */ r_eax = R32((u32)(r_esi+0x4c4u));
    /* 004a1b22: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1b25: mov ecx, esi */ r_ecx = r_esi;
    /* 004a1b27: call 0x4a1b84 */ r_esp -= 4; W32(r_esp, 0x4a1b2cu); f_004a1b84();
    /* 004a1b2c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1b2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a1b30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a1b31: ret 4 */ FN_RET(0x004a1a64); r_esp += 8; return;
L_004a1b34:; BB(0x004a1b34);
    /* 004a1b34: mov ecx, esi */ r_ecx = r_esi;
    /* 004a1b36: call 0x4a12dc */ r_esp -= 4; W32(r_esp, 0x4a1b3bu); f_004a12dc();
L_004a1b3b:; BB(0x004a1b3b);
    /* 004a1b3b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1b3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a1b3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a1b40: ret 4 */ FN_RET(0x004a1a64); r_esp += 8; return;
L_004a1b43:; BB(0x004a1b43);
    /* 004a1b43: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004a1b45: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a1b47: jmp 0x4a1b11 */ goto L_004a1b11;
L_004a1b49:; BB(0x004a1b49);
    /* 004a1b49: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004a1b4b: mov eax, 4 */ r_eax = 0x4u;
    /* 004a1b50: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004a1b57: mov ecx, esi */ r_ecx = r_esi;
    /* 004a1b59: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a1b5fu); call_ind(t); }
    /* 004a1b5f: mov dword ptr [esi + 0x4ec], 1 */ W32((u32)(r_esi+0x4ecu), 0x1u);
    /* 004a1b69: mov dword ptr [esi + 0x3c], 0x43340000 */ W32((u32)(r_esi+0x3cu), 0x43340000u);
    /* 004a1b70: mov dword ptr [esi + 0x498], 0 */ W32((u32)(r_esi+0x498u), 0x0u);
    /* 004a1b7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1b7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a1b7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a1b7f: ret 4 */ FN_RET(0x004a1a64); r_esp += 8; return;
}

void f_004a1b84(void) /* sub_4A1B84 */
{
    FN_ENTER(0x004a1b84);
    /* 004a1b84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a1b85: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a1b88: mov edi, ecx */ r_edi = r_ecx;
    /* 004a1b8a: mov ecx, edi */ r_ecx = r_edi;
    /* 004a1b8c: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4a1b91u); f_00521410();
    /* 004a1b91: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 004a1b97: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 004a1b9d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a1b9f: fmul qword ptr [0x903ac8] */ ST(0) = ST(0) * R_F64((u32)(0x903ac8u));
    /* 004a1ba5: fdiv qword ptr [0x903ac0] */ ST(0) = ST(0) / R_F64((u32)(0x903ac0u));
    /* 004a1bab: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a1bae: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a1bb2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a1bb7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a1bbb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a1bbf: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a1bc3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a1bc6: mov ecx, edi */ r_ecx = r_edi;
    /* 004a1bc8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004a1bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1bcd: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1bd1: call 0x4a5e10 */ r_esp -= 4; W32(r_esp, 0x4a1bd6u); f_004a5e10();
    /* 004a1bd6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1bd9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a1bda: ret 4 */ FN_RET(0x004a1b84); r_esp += 8; return;
}

void f_004a1be0(void) /* sub_4A1BE0 */
{
    FN_ENTER(0x004a1be0);
    /* 004a1be0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1be1: mov ebx, esp */ r_ebx = r_esp;
    /* 004a1be3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 004a1be6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a1be7: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a1bea: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a1bec: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 004a1bef: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1bf2: je 0x4a1ccb */ if (fZ) goto L_004a1ccb;
L_004a1bf8:; BB(0x004a1bf8);
    /* 004a1bf8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1bfb: je 0x4a1cc1 */ if (fZ) goto L_004a1cc1;
L_004a1c01:; BB(0x004a1c01);
    /* 004a1c01: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1c04: je 0x4a1cc1 */ if (fZ) goto L_004a1cc1;
L_004a1c0a:; BB(0x004a1c0a);
    /* 004a1c0a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1c0d: je 0x4a1cc1 */ if (fZ) goto L_004a1cc1;
L_004a1c13:; BB(0x004a1c13);
    /* 004a1c13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1c15: jne 0x4a1cc1 */ if (!fZ) goto L_004a1cc1;
L_004a1c1b:; BB(0x004a1c1b);
    /* 004a1c1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1c1d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a1c22u); f_007aa094();
    /* 004a1c22: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1c24: call 0x4a1a48 */ r_esp -= 4; W32(r_esp, 0x4a1c29u); f_004a1a48();
    /* 004a1c29: mov eax, dword ptr [ebp + 0x4c4] */ r_eax = R32((u32)(r_ebp+0x4c4u));
    /* 004a1c2f: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 004a1c32: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 004a1c35: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004a1c38: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 004a1c3b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a1c3d: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004a1c41: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a1c43: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 004a1c47: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a1c49: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a1c4b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a1c4d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a1c4f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a1c51: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a1c55: push dword ptr [ebp + 0x6f4] */ { u32 v = R32((u32)(r_ebp+0x6f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1c5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1c5d: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1c60: call 0x4a5e10 */ r_esp -= 4; W32(r_esp, 0x4a1c65u); f_004a5e10();
    /* 004a1c65: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004a1c69: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 004a1c6d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a1c6f: fmul qword ptr [0x903ab8] */ ST(0) = ST(0) * R_F64((u32)(0x903ab8u));
    /* 004a1c75: fdiv qword ptr [0x903ab0] */ ST(0) = ST(0) / R_F64((u32)(0x903ab0u));
    /* 004a1c7b: mov edx, dword ptr [ebp + 0x4c4] */ r_edx = R32((u32)(r_ebp+0x4c4u));
    /* 004a1c81: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a1c84: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a1c88: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a1c8d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a1c91: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a1c95: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a1c99: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a1c9c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004a1ca0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1ca2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1ca3: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1ca6: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a1cabu); f_004a15ac();
    /* 004a1cab: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a1caf: fcomp dword ptr [0x903f30] */ fx_compare(ST(0), R_F32((u32)(0x903f30u))); FPOP();
    /* 004a1cb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a1cb7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a1cb8: jae 0x4a1cc1 */ if (!fC) goto L_004a1cc1;
L_004a1cba:; BB(0x004a1cba);
    /* 004a1cba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1cbc: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a1cc1u); f_004a7e20();
L_004a1cc1:; BB(0x004a1cc1);
    /* 004a1cc1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1cc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1cc5: mov esp, ebx */ r_esp = r_ebx;
    /* 004a1cc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a1cc8: ret 4 */ FN_RET(0x004a1be0); r_esp += 8; return;
L_004a1ccb:; BB(0x004a1ccb);
    /* 004a1ccb: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004a1cce: mov eax, 4 */ r_eax = 0x4u;
    /* 004a1cd3: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a1cda: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1cdc: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a1ce2u); call_ind(t); }
    /* 004a1ce2: mov eax, dword ptr [ebp + 0x4c4] */ r_eax = R32((u32)(r_ebp+0x4c4u));
    /* 004a1ce8: mov dword ptr [ebp + 0x4ec], 1 */ W32((u32)(r_ebp+0x4ecu), 0x1u);
    /* 004a1cf2: mov dword ptr [ebp + 0x3c], 0x43340000 */ W32((u32)(r_ebp+0x3cu), 0x43340000u);
    /* 004a1cf9: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 004a1cfc: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 004a1cff: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004a1d02: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 004a1d05: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a1d07: fmul qword ptr [0x903ab8] */ ST(0) = ST(0) * R_F64((u32)(0x903ab8u));
    /* 004a1d0d: fdiv qword ptr [0x903ab0] */ ST(0) = ST(0) / R_F64((u32)(0x903ab0u));
    /* 004a1d13: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a1d16: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a1d1a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a1d1f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a1d23: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a1d27: fistp dword ptr [ebp + 0x6f4] */ W32((u32)(r_ebp+0x6f4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a1d2d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a1d30: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1d33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1d34: mov esp, ebx */ r_esp = r_ebx;
    /* 004a1d36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a1d37: ret 4 */ FN_RET(0x004a1be0); r_esp += 8; return;
}

void f_004a1d3c(void) /* sub_4A1D3C */
{
    FN_ENTER(0x004a1d3c);
    /* 004a1d3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a1d3d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a1d40: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a1d42: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004a1d46: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1d49: je 0x4a1eea */ if (fZ) goto L_004a1eea;
L_004a1d4f:; BB(0x004a1d4f);
    /* 004a1d4f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1d52: je 0x4a1ee3 */ if (fZ) goto L_004a1ee3;
L_004a1d58:; BB(0x004a1d58);
    /* 004a1d58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1d5b: je 0x4a1ee3 */ if (fZ) goto L_004a1ee3;
L_004a1d61:; BB(0x004a1d61);
    /* 004a1d61: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1d64: je 0x4a1ee3 */ if (fZ) goto L_004a1ee3;
L_004a1d6a:; BB(0x004a1d6a);
    /* 004a1d6a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1d6d: je 0x4a1ee3 */ if (fZ) goto L_004a1ee3;
L_004a1d73:; BB(0x004a1d73);
    /* 004a1d73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1d75: jne 0x4a1ebd */ if (!fZ) goto L_004a1ebd;
L_004a1d7b:; BB(0x004a1d7b);
    /* 004a1d7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1d7d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a1d82u); f_007aa094();
    /* 004a1d82: mov eax, dword ptr [ebp + 0x6e4] */ r_eax = R32((u32)(r_ebp+0x6e4u));
    /* 004a1d88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1d8a: je 0x4a1e76 */ if (fZ) goto L_004a1e76;
L_004a1d90:; BB(0x004a1d90);
    /* 004a1d90: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1d93: jne 0x4a1e57 */ if (!fZ) goto L_004a1e57;
L_004a1d99:; BB(0x004a1d99);
    /* 004a1d99: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1d9b: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a1da0u); f_007aabd8();
    /* 004a1da0: fld dword ptr [0x903f14] */ FPUSH(R_F32((u32)(0x903f14u)));
    /* 004a1da6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004a1da8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a1daa: fld dword ptr [0x903fd8] */ FPUSH(R_F32((u32)(0x903fd8u)));
    /* 004a1db0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1db2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a1db4: fchs  */ ST(0) = -ST(0);
    /* 004a1db6: fld dword ptr [0xa47564] */ FPUSH(R_F32((u32)(0xa47564u)));
    /* 004a1dbc: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 004a1dbe: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a1dc0: fdiv dword ptr [0x903f28] */ ST(0) = ST(0) / R_F32((u32)(0x903f28u));
    /* 004a1dc6: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1dc9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a1dcb: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004a1dce: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1dd3: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a1dd8u); f_004a15ac();
    /* 004a1dd8: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1ddd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1ddf: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a1de4u); f_007aaa30();
    /* 004a1de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1de6: je 0x4a1e9f */ if (fZ) goto L_004a1e9f;
L_004a1dec:; BB(0x004a1dec);
    /* 004a1dec: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a1df1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a1df3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1df4: mov dword ptr [ebp + 0x4ec], edx */ W32((u32)(r_ebp+0x4ecu), r_edx);
    /* 004a1dfa: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004a1dfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1dfe: lea eax, [ebp + 0x568] */ r_eax = (u32)(r_ebp+0x568u);
    /* 004a1e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1e05: push 0x3a7 */ { u32 v = 0x3a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1e0a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a1e0fu); f_00814298();
    /* 004a1e0f: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004a1e12: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 004a1e15: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004a1e1d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a1e21: mov eax, dword ptr [ebp + 0x5f8] */ r_eax = R32((u32)(r_ebp+0x5f8u));
    /* 004a1e27: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004a1e2b: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004a1e2f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1e31: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1e34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1e35: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a1e3au); f_0050b7a4();
    /* 004a1e3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1e3c: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x4a1e41u); f_004d4288();
    /* 004a1e41: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a1e44: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1e46: call 0x4a1f34 */ r_esp -= 4; W32(r_esp, 0x4a1e4bu); f_004a1f34();
    /* 004a1e4b: mov dword ptr [ebp + 0x6e4], 2 */ W32((u32)(r_ebp+0x6e4u), 0x2u);
    /* 004a1e55: jmp 0x4a1e9f */ goto L_004a1e9f;
L_004a1e57:; BB(0x004a1e57);
    /* 004a1e57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1e5a: jne 0x4a1e9f */ if (!fZ) goto L_004a1e9f;
L_004a1e5c:; BB(0x004a1e5c);
    /* 004a1e5c: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 004a1e62: fcomp dword ptr [0x903f2c] */ fx_compare(ST(0), R_F32((u32)(0x903f2cu))); FPOP();
    /* 004a1e68: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a1e6a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a1e6b: ja 0x4a1e9f */ if ((!fC&&!fZ)) goto L_004a1e9f;
L_004a1e6d:; BB(0x004a1e6d);
    /* 004a1e6d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1e6f: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a1e74u); f_004a7e20();
    /* 004a1e74: jmp 0x4a1e9f */ goto L_004a1e9f;
L_004a1e76:; BB(0x004a1e76);
    /* 004a1e76: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1e79: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1e7e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1e80: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a1e85u); f_004a15ac();
    /* 004a1e85: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1e8a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1e8c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a1e91u); f_007aaa30();
    /* 004a1e91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1e93: je 0x4a1e9f */ if (fZ) goto L_004a1e9f;
L_004a1e95:; BB(0x004a1e95);
    /* 004a1e95: mov dword ptr [ebp + 0x6e4], 1 */ W32((u32)(r_ebp+0x6e4u), 0x1u);
L_004a1e9f:; BB(0x004a1e9f);
    /* 004a1e9f: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1ea4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1ea6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a1eabu); f_007aaa30();
    /* 004a1eab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1ead: je 0x4a1ee3 */ if (fZ) goto L_004a1ee3;
L_004a1eaf:; BB(0x004a1eaf);
    /* 004a1eaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1eb1: call 0x4a15fc */ r_esp -= 4; W32(r_esp, 0x4a1eb6u); f_004a15fc();
    /* 004a1eb6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1eb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1eba: ret 4 */ FN_RET(0x004a1d3c); r_esp += 8; return;
L_004a1ebd:; BB(0x004a1ebd);
    /* 004a1ebd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1ec0: jne 0x4a1ee3 */ if (!fZ) goto L_004a1ee3;
L_004a1ec2:; BB(0x004a1ec2);
    /* 004a1ec2: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a1ec7: mov edx, dword ptr [ebp + 0x4c8] */ r_edx = R32((u32)(r_ebp+0x4c8u));
    /* 004a1ecd: mov dword ptr [ebp + 0x4ec], 0 */ W32((u32)(r_ebp+0x4ecu), 0x0u);
    /* 004a1ed7: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004a1eda: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004a1edd: mov dword ptr [ebp + 0x4c8], edx */ W32((u32)(r_ebp+0x4c8u), r_edx);
L_004a1ee3:; BB(0x004a1ee3);
    /* 004a1ee3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1ee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1ee7: ret 4 */ FN_RET(0x004a1d3c); r_esp += 8; return;
L_004a1eea:; BB(0x004a1eea);
    /* 004a1eea: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004a1eed: mov eax, 5 */ r_eax = 0x5u;
    /* 004a1ef2: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a1ef9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1efb: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a1f01u); call_ind(t); }
    /* 004a1f01: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 004a1f07: mov dword ptr [ebp + 0x4ec], 1 */ W32((u32)(r_ebp+0x4ecu), 0x1u);
    /* 004a1f11: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a1f14: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 004a1f1a: mov dword ptr [ebp + 0x3c], 0x43340000 */ W32((u32)(r_ebp+0x3cu), 0x43340000u);
    /* 004a1f21: mov dword ptr [ebp + 0x6e4], 0 */ W32((u32)(r_ebp+0x6e4u), 0x0u);
    /* 004a1f2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1f2f: ret 4 */ FN_RET(0x004a1d3c); r_esp += 8; return;
}

void f_004a1f34(void) /* sub_4A1F34 */
{
    FN_ENTER(0x004a1f34);
    /* 004a1f34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f36: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a1f39: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a1f3b: mov eax, dword ptr [0x9a8148] */ r_eax = R32((u32)(0x9a8148u));
    /* 004a1f40: mov edx, dword ptr [0x9a814c] */ r_edx = R32((u32)(0x9a814cu));
    /* 004a1f46: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a1f49: mov eax, dword ptr [0x9a8150] */ r_eax = R32((u32)(0x9a8150u));
    /* 004a1f4e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004a1f52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1f54: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a1f58: mov eax, dword ptr [0x9a8154] */ r_eax = R32((u32)(0x9a8154u));
    /* 004a1f5d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004a1f61: mov eax, dword ptr [0x9a8158] */ r_eax = R32((u32)(0x9a8158u));
    /* 004a1f66: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a1f6a: mov eax, dword ptr [0xa47640] */ r_eax = R32((u32)(0xa47640u));
    /* 004a1f6f: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 004a1f72: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a1f76: call 0x4a1fa8 */ r_esp -= 4; W32(r_esp, 0x4a1f7bu); f_004a1fa8();
    /* 004a1f7b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a1f7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f7f: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 004a1f82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f83: call 0x4ab96c */ r_esp -= 4; W32(r_esp, 0x4a1f88u); f_004ab96c();
    /* 004a1f88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a1f8b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a1f8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f91: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1f93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f94: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a1f99u); f_0051fdf8();
    /* 004a1f99: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a1f9b: call 0x4a1fd8 */ r_esp -= 4; W32(r_esp, 0x4a1fa0u); f_004a1fd8();
    /* 004a1fa0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a1fa3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a1fa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1fa5: ret  */ FN_RET(0x004a1f34); r_esp += 4; return;
}

void f_004a1fa8(void) /* sub_4A1FA8 */
{
    FN_ENTER(0x004a1fa8);
    /* 004a1fa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a1fa9: mov ebp, dword ptr [0xa4758c] */ r_ebp = R32((u32)(0xa4758cu));
    /* 004a1faf: mov edx, dword ptr [0x9a8144] */ r_edx = R32((u32)(0x9a8144u));
    /* 004a1fb5: mov eax, dword ptr [0xa47580] */ r_eax = R32((u32)(0xa47580u));
    /* 004a1fba: push dword ptr [eax*4 + 0xa47644] */ { u32 v = R32((u32)(r_eax*4+0xa47644u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1fc1: push dword ptr [edx*4 + 0xa47648] */ { u32 v = R32((u32)(r_edx*4+0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1fc8: push dword ptr [ebp*4 + 0xa4765c] */ { u32 v = R32((u32)(r_ebp*4+0xa4765cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1fcf: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x4a1fd4u); f_00520c98();
    /* 004a1fd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1fd5: ret  */ FN_RET(0x004a1fa8); r_esp += 4; return;
}

void f_004a1fd8(void) /* sub_4A1FD8 */
{
    FN_ENTER(0x004a1fd8);
    /* 004a1fd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a1fd9: mov ebp, dword ptr [0xa47584] */ r_ebp = R32((u32)(0xa47584u));
    /* 004a1fdf: mov edx, dword ptr [0x9a813c] */ r_edx = R32((u32)(0x9a813cu));
    /* 004a1fe5: mov eax, dword ptr [0xa47578] */ r_eax = R32((u32)(0xa47578u));
    /* 004a1fea: push dword ptr [eax*4 + 0xa47644] */ { u32 v = R32((u32)(r_eax*4+0xa47644u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1ff1: push dword ptr [edx*4 + 0xa47648] */ { u32 v = R32((u32)(r_edx*4+0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1ff8: push dword ptr [ebp*4 + 0xa4765c] */ { u32 v = R32((u32)(r_ebp*4+0xa4765cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a1fff: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x4a2004u); f_00520c98();
    /* 004a2004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a2005: ret  */ FN_RET(0x004a1fd8); r_esp += 4; return;
}

