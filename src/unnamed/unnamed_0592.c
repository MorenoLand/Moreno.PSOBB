#include "protos.h"

void f_00592002(void)
{
    FN_ENTER(0x00592002);
    /* 00592002: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00592006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592007: call 0x5946d8 */ r_esp -= 4; W32(r_esp, 0x59200cu); f_005946d8();
    /* 0059200c: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00592002); r_esp += 12; return;
}

void f_0059200e(void)
{
    FN_ENTER(0x0059200e);
    /* 0059200e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00592012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592013: call 0x594794 */ r_esp -= 4; W32(r_esp, 0x592018u); f_00594794();
    /* 00592018: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x0059200e); r_esp += 12; return;
}

void f_0059201a(void)
{
    FN_ENTER(0x0059201a);
    /* 0059201a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059201e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059201f: call 0x594934 */ r_esp -= 4; W32(r_esp, 0x592024u); f_00594934();
    /* 00592024: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x0059201a); r_esp += 12; return;
}

void f_00592026(void)
{
    FN_ENTER(0x00592026);
    /* 00592026: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0059202a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059202b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0059202d: call dword ptr [eax + 0x1cc] */ { u32 t = R32((u32)(r_eax+0x1ccu)); r_esp -= 4; W32(r_esp, 0x592033u); call_ind(t); }
    /* 00592033: ret 8 */ FN_RET(0x00592026); r_esp += 12; return;
}

void f_00592038(void) /* sub_592038 */
{
    FN_ENTER(0x00592038);
    /* 00592038: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592039: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059203b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059203f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592042: je 0x5920c0 */ if (fZ) goto L_005920c0;
L_00592044:; BB(0x00592044);
    /* 00592044: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592047: je 0x592082 */ if (fZ) goto L_00592082;
L_00592049:; BB(0x00592049);
    /* 00592049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059204b: jne 0x59208d */ if (!fZ) goto L_0059208d;
L_0059204d:; BB(0x0059204d);
    /* 0059204d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059204f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x592054u); f_007aa094();
    /* 00592054: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0059205a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059205c: je 0x592068 */ if (fZ) goto L_00592068;
L_0059205e:; BB(0x0059205e);
    /* 0059205e: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
L_00592068:; BB(0x00592068);
    /* 00592068: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059206b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059206d: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x592073u); call_ind(t); }
    /* 00592073: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00592076: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592078: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59207eu); call_ind(t); }
    /* 0059207e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059207f: ret 4 */ FN_RET(0x00592038); r_esp += 8; return;
L_00592082:; BB(0x00592082);
    /* 00592082: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 00592088: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059208b: je 0x592091 */ if (fZ) goto L_00592091;
L_0059208d:; BB(0x0059208d);
    /* 0059208d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059208e: ret 4 */ FN_RET(0x00592038); r_esp += 8; return;
L_00592091:; BB(0x00592091);
    /* 00592091: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 00592097: lea ecx, [ebp + 0x41c] */ r_ecx = (u32)(r_ebp+0x41cu);
    /* 0059209d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5920a0u); call_ind(t); }
    /* 005920a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005920a2: je 0x59208d */ if (fZ) goto L_0059208d;
L_005920a4:; BB(0x005920a4);
    /* 005920a4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005920a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005920a8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5920adu); f_0051f62c();
    /* 005920ad: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005920b3: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005920b6: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 005920bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005920bd: ret 4 */ FN_RET(0x00592038); r_esp += 8; return;
L_005920c0:; BB(0x005920c0);
    /* 005920c0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005920c2: mov eax, 0xb */ r_eax = 0xbu;
    /* 005920c7: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005920ce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005920d0: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5920d5u); f_0051f664();
    /* 005920d5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005920d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005920da: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5920e0u); call_ind(t); }
    /* 005920e0: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005920e2: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005920e8: mov edx, dword ptr [ebp + 0x41c] */ r_edx = R32((u32)(r_ebp+0x41cu));
    /* 005920ee: and eax, 0xffeffffd */ {  u32 a = r_eax; u32 b = 0xffeffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005920f3: or eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005920f6: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 005920fc: lea ecx, [ebp + 0x41c] */ r_ecx = (u32)(r_ebp+0x41cu);
    /* 00592102: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x592105u); call_ind(t); }
    /* 00592105: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059210a: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00592110: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00592112: mov dword ptr [ebp + 0x3c8], edx */ W32((u32)(r_ebp+0x3c8u), r_edx);
    /* 00592118: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059211d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059211e: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00592124: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592126: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x59212bu); f_007b52ec();
    /* 0059212b: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 00592135: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592136: ret 4 */ FN_RET(0x00592038); r_esp += 8; return;
}

void f_0059213c(void) /* sub_59213C */
{
    FN_ENTER(0x0059213c);
    /* 0059213c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059213d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059213f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00592143: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592146: je 0x5921e5 */ if (fZ) goto L_005921e5;
L_0059214c:; BB(0x0059214c);
    /* 0059214c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059214f: je 0x59218a */ if (fZ) goto L_0059218a;
L_00592151:; BB(0x00592151);
    /* 00592151: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00592153: jne 0x592195 */ if (!fZ) goto L_00592195;
L_00592155:; BB(0x00592155);
    /* 00592155: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592157: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59215cu); f_007aa094();
    /* 0059215c: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00592162: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00592164: je 0x592170 */ if (fZ) goto L_00592170;
L_00592166:; BB(0x00592166);
    /* 00592166: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
L_00592170:; BB(0x00592170);
    /* 00592170: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00592173: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592175: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59217bu); call_ind(t); }
    /* 0059217b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059217e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592180: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x592186u); call_ind(t); }
    /* 00592186: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592187: ret 4 */ FN_RET(0x0059213c); r_esp += 8; return;
L_0059218a:; BB(0x0059218a);
    /* 0059218a: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 00592190: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00592193: je 0x592199 */ if (fZ) goto L_00592199;
L_00592195:; BB(0x00592195);
    /* 00592195: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592196: ret 4 */ FN_RET(0x0059213c); r_esp += 8; return;
L_00592199:; BB(0x00592199);
    /* 00592199: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 0059219f: lea ecx, [ebp + 0x41c] */ r_ecx = (u32)(r_ebp+0x41cu);
    /* 005921a5: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5921a8u); call_ind(t); }
    /* 005921a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005921aa: je 0x592195 */ if (fZ) goto L_00592195;
L_005921ac:; BB(0x005921ac);
    /* 005921ac: mov dword ptr [ebp + 0x3c8], 1 */ W32((u32)(r_ebp+0x3c8u), 0x1u);
    /* 005921b6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005921b8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005921ba: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5921bfu); f_0051f62c();
    /* 005921bf: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005921c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005921c6: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005921cc: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005921cf: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005921d4: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 005921da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005921dc: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5921e1u); f_007b52c4();
    /* 005921e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005921e2: ret 4 */ FN_RET(0x0059213c); r_esp += 8; return;
L_005921e5:; BB(0x005921e5);
    /* 005921e5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005921e7: mov eax, 0xc */ r_eax = 0xcu;
    /* 005921ec: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005921f3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005921f5: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5921fau); f_0051f664();
    /* 005921fa: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005921fd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005921ff: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x592205u); call_ind(t); }
    /* 00592205: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00592207: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059220d: mov edx, dword ptr [ebp + 0x41c] */ r_edx = R32((u32)(r_ebp+0x41cu));
    /* 00592213: and eax, 0xffeffffd */ {  u32 a = r_eax; u32 b = 0xffeffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00592218: or eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059221b: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00592221: lea ecx, [ebp + 0x41c] */ r_ecx = (u32)(r_ebp+0x41cu);
    /* 00592227: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x59222au); call_ind(t); }
    /* 0059222a: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0059222d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059222f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592232: push 0x284 */ { u32 v = 0x284u; r_esp -= 4; W32(r_esp, v); }
    /* 00592237: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59223cu); f_00814298();
    /* 0059223c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059223f: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 00592249: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059224a: ret 4 */ FN_RET(0x0059213c); r_esp += 8; return;
}

void f_00592250(void) /* sub_592250 */
{
    FN_ENTER(0x00592250);
    /* 00592250: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00592251: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00592252: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00592255: mov esi, ecx */ r_esi = r_ecx;
    /* 00592257: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0059225b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059225e: je 0x592676 */ if (fZ) goto L_00592676;
L_00592264:; BB(0x00592264);
    /* 00592264: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592267: je 0x5925f1 */ if (fZ) goto L_005925f1;
L_0059226d:; BB(0x0059226d);
    /* 0059226d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059226f: jne 0x5925fc */ if (!fZ) goto L_005925fc;
L_00592275:; BB(0x00592275);
    /* 00592275: mov eax, dword ptr [esi + 0x43c] */ r_eax = R32((u32)(r_esi+0x43cu));
    /* 0059227b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059227e: je 0x59263d */ if (fZ) goto L_0059263d;
L_00592284:; BB(0x00592284);
    /* 00592284: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592287: je 0x59246c */ if (fZ) goto L_0059246c;
L_0059228d:; BB(0x0059228d);
    /* 0059228d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592290: jne 0x5922d5 */ if (!fZ) goto L_005922d5;
L_00592292:; BB(0x00592292);
    /* 00592292: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 00592298: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059229b: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 005922a1: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005922a4: jl 0x5925fc */ if ((fS!=fO)) goto L_005925fc;
L_005922aa:; BB(0x005922aa);
    /* 005922aa: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 005922b0: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005922b5: je 0x5922c6 */ if (fZ) goto L_005922c6;
L_005922b7:; BB(0x005922b7);
    /* 005922b7: mov dword ptr [esi + 0x43c], 4 */ W32((u32)(r_esi+0x43cu), 0x4u);
    /* 005922c1: jmp 0x5925fc */ goto L_005925fc;
L_005922c6:; BB(0x005922c6);
    /* 005922c6: mov dword ptr [esi + 0x43c], 5 */ W32((u32)(r_esi+0x43cu), 0x5u);
    /* 005922d0: jmp 0x5925fc */ goto L_005925fc;
L_005922d5:; BB(0x005922d5);
    /* 005922d5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005922d8: jne 0x59231f */ if (!fZ) goto L_0059231f;
L_005922da:; BB(0x005922da);
    /* 005922da: mov eax, dword ptr [esi + 0x41c] */ r_eax = R32((u32)(r_esi+0x41cu));
    /* 005922e0: lea ecx, [esi + 0x41c] */ r_ecx = (u32)(r_esi+0x41cu);
    /* 005922e6: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5922e9u); call_ind(t); }
    /* 005922e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005922eb: je 0x5925fc */ if (fZ) goto L_005925fc;
L_005922f1:; BB(0x005922f1);
    /* 005922f1: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 005922f7: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005922fc: mov ecx, esi */ r_ecx = r_esi;
    /* 005922fe: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00592303: mov dword ptr [esi + 0x43c], 5 */ W32((u32)(r_esi+0x43cu), 0x5u);
    /* 0059230d: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 00592313: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592315: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x59231au); f_007b52c4();
    /* 0059231a: jmp 0x5925fc */ goto L_005925fc;
L_0059231f:; BB(0x0059231f);
    /* 0059231f: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00592325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592327: je 0x59260b */ if (fZ) goto L_0059260b;
L_0059232d:; BB(0x0059232d);
    /* 0059232d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059232f: push dword ptr [esi + 0x3a4] */ { u32 v = R32((u32)(r_esi+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592335: mov ecx, esi */ r_ecx = r_esi;
    /* 00592337: push dword ptr [esi + 0x3a0] */ { u32 v = R32((u32)(r_esi+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059233d: push dword ptr [esi + 0x39c] */ { u32 v = R32((u32)(r_esi+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00592343: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x592348u); f_00771c8c();
    /* 00592348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059234a: je 0x5923a5 */ if (fZ) goto L_005923a5;
L_0059234c:; BB(0x0059234c);
    /* 0059234c: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592352: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592358: mov ecx, esi */ r_ecx = r_esi;
    /* 0059235a: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592360: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x592365u); f_00771f1c();
    /* 00592365: fld dword ptr [0x92910c] */ FPUSH(R_F32((u32)(0x92910cu)));
    /* 0059236b: fadd dword ptr [esi + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x304u));
    /* 00592371: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00592377: fstp dword ptr [esi + 0x304] */ W_F32((u32)(r_esi+0x304u), ST(0)); FPOP();
    /* 0059237d: mov ecx, esi */ r_ecx = r_esi;
    /* 0059237f: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592382: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x592387u); f_00772358();
    /* 00592387: mov ebx, eax */ r_ebx = r_eax;
    /* 00592389: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059238c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059238e: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00592394: mov ecx, esi */ r_ecx = r_esi;
    /* 00592396: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592399: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x59239cu); call_ind(t); }
    /* 0059239c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0059239e: mov ecx, esi */ r_ecx = r_esi;
    /* 005923a0: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5923a3u); call_ind(t); }
    /* 005923a3: jmp 0x5923e6 */ goto L_005923e6;
L_005923a5:; BB(0x005923a5);
    /* 005923a5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005923a8: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 005923ae: mov ebx, dword ptr [esi + 0x3a0] */ r_ebx = R32((u32)(r_esi+0x3a0u));
    /* 005923b4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005923b7: mov eax, dword ptr [esi + 0x3a4] */ r_eax = R32((u32)(r_esi+0x3a4u));
    /* 005923bd: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005923c1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005923c5: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005923cb: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5923d0u); f_0082f9c4();
    /* 005923d0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005923d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005923d4: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005923da: mov ecx, esi */ r_ecx = r_esi;
    /* 005923dc: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005923df: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x5923e4u); f_00771858();
    /* 005923e4: mov ebx, eax */ r_ebx = r_eax;
L_005923e6:; BB(0x005923e6);
    /* 005923e6: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005923ec: jge 0x59245b */ if ((fS==fO)) goto L_0059245b;
L_005923ee:; BB(0x005923ee);
    /* 005923ee: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 005923f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005923f6: jne 0x592404 */ if (!fZ) goto L_00592404;
L_005923f8:; BB(0x005923f8);
    /* 005923f8: mov dword ptr [esi + 0x43c], 2 */ W32((u32)(r_esi+0x43cu), 0x2u);
    /* 00592402: jmp 0x59244a */ goto L_0059244a;
L_00592404:; BB(0x00592404);
    /* 00592404: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00592409: lea ebx, [esi + 0x41c] */ r_ebx = (u32)(r_esi+0x41cu);
    /* 0059240f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00592411: call 0x708120 */ r_esp -= 4; W32(r_esp, 0x592416u); f_00708120();
    /* 00592416: mov eax, dword ptr [esi + 0x41c] */ r_eax = R32((u32)(r_esi+0x41cu));
    /* 0059241c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059241e: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x592421u); call_ind(t); }
    /* 00592421: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00592426: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592428: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059242e: or eax, 0x140000 */ {  u32 a = r_eax; u32 b = 0x140000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00592433: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 00592439: mov ecx, esi */ r_ecx = r_esi;
    /* 0059243b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x592440u); f_007b52ec();
    /* 00592440: mov dword ptr [esi + 0x43c], 1 */ W32((u32)(r_esi+0x43cu), 0x1u);
L_0059244a:; BB(0x0059244a);
    /* 0059244a: mov eax, 8 */ r_eax = 0x8u;
    /* 0059244f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00592456: jmp 0x5925fc */ goto L_005925fc;
L_0059245b:; BB(0x0059245b);
    /* 0059245b: mov eax, 0xa */ r_eax = 0xau;
    /* 00592460: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00592467: jmp 0x5925fc */ goto L_005925fc;
L_0059246c:; BB(0x0059246c);
    /* 0059246c: mov ecx, esi */ r_ecx = r_esi;
    /* 0059246e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x592473u); f_007aa094();
    /* 00592473: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00592479: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059247b: je 0x592491 */ if (fZ) goto L_00592491;
L_0059247d:; BB(0x0059247d);
    /* 0059247d: mov dword ptr [esi + 0x440], 0 */ W32((u32)(r_esi+0x440u), 0x0u);
    /* 00592487: mov dword ptr [esi + 0x43c], 3 */ W32((u32)(r_esi+0x43cu), 0x3u);
L_00592491:; BB(0x00592491);
    /* 00592491: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00592496: mov ecx, esi */ r_ecx = r_esi;
    /* 00592498: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59249du); f_007aaa30();
    /* 0059249d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059249f: je 0x5925fc */ if (fZ) goto L_005925fc;
L_005924a5:; BB(0x005924a5);
    /* 005924a5: mov ecx, esi */ r_ecx = r_esi;
    /* 005924a7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5924acu); f_007aa094();
    /* 005924ac: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005924b1: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5924b6u); f_0082d990();
    /* 005924b6: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005924b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005924bb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5924c0u); f_0082d838();
    /* 005924c0: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005924c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005924c5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5924cau); f_0082d8bc();
    /* 005924ca: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5924cfu); f_0082fa9c();
    /* 005924cf: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005924d4: mov ecx, esi */ r_ecx = r_esi;
    /* 005924d6: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x5924dbu); f_007aaab8();
    /* 005924db: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5924e0u); f_0082faac();
    /* 005924e0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5924e5u); f_0082da80();
    /* 005924e5: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 005924eb: add ecx, 0xc0 */ {  u32 a = r_ecx; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005924f1: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5924f6u); f_0082d990();
    /* 005924f6: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005924fe: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00592502: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00592504: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0059250c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00592514: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592515: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00592519: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x59251eu); f_00830aa0();
    /* 0059251e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x592523u); f_0082da80();
    /* 00592523: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00592529: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059252b: je 0x592577 */ if (fZ) goto L_00592577;
L_0059252d:; BB(0x0059252d);
    /* 0059252d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00592530: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 00592536: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00592539: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 0059253f: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00592545: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00592549: mov eax, dword ptr [esi + 0x3a4] */ r_eax = R32((u32)(r_esi+0x3a4u));
    /* 0059254f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00592553: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x592558u); f_0082f9c4();
    /* 00592558: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059255b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059255c: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00592562: mov ecx, esi */ r_ecx = r_esi;
    /* 00592564: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592567: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x59256cu); f_00771858();
    /* 0059256c: mov edx, dword ptr [esi + 0x31c] */ r_edx = R32((u32)(r_esi+0x31cu));
    /* 00592572: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00592575: jmp 0x592582 */ goto L_00592582;
L_00592577:; BB(0x00592577);
    /* 00592577: mov eax, dword ptr [esi + 0x31c] */ r_eax = R32((u32)(r_esi+0x31cu));
    /* 0059257d: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00592580: mov eax, ecx */ r_eax = r_ecx;
L_00592582:; BB(0x00592582);
    /* 00592582: mov edx, ecx */ r_edx = r_ecx;
    /* 00592584: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00592587: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00592589: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0059258b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059258d: jge 0x5925cc */ if ((fS==fO)) goto L_005925cc;
L_0059258f:; BB(0x0059258f);
    /* 0059258f: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00592595: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592597: je 0x5925cc */ if (fZ) goto L_005925cc;
L_00592599:; BB(0x00592599);
    /* 00592599: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0059259e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005925a1: je 0x592616 */ if (fZ) goto L_00592616;
L_005925a3:; BB(0x005925a3);
    /* 005925a3: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 005925a9: mov edx, dword ptr [eax*4 + 0xa744e0] */ r_edx = R32((u32)(r_eax*4+0xa744e0u));
    /* 005925b0: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005925b3: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x5925b8u); f_00520e3c();
    /* 005925b8: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 005925bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005925bd: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005925c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005925c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005925c2: call 0x6e38e0 */ r_esp -= 4; W32(r_esp, 0x5925c7u); f_006e38e0();
    /* 005925c7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005925ca: jmp 0x5925fc */ goto L_005925fc;
L_005925cc:; BB(0x005925cc);
    /* 005925cc: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 005925d2: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005925d7: je 0x5925e5 */ if (fZ) goto L_005925e5;
L_005925d9:; BB(0x005925d9);
    /* 005925d9: mov dword ptr [esi + 0x43c], 4 */ W32((u32)(r_esi+0x43cu), 0x4u);
    /* 005925e3: jmp 0x5925fc */ goto L_005925fc;
L_005925e5:; BB(0x005925e5);
    /* 005925e5: mov dword ptr [esi + 0x43c], 5 */ W32((u32)(r_esi+0x43cu), 0x5u);
    /* 005925ef: jmp 0x5925fc */ goto L_005925fc;
L_005925f1:; BB(0x005925f1);
    /* 005925f1: mov eax, dword ptr [esi + 0x43c] */ r_eax = R32((u32)(r_esi+0x43cu));
    /* 005925f7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005925fa: je 0x59266b */ if (fZ) goto L_0059266b;
L_005925fc:; BB(0x005925fc);
    /* 005925fc: mov ecx, esi */ r_ecx = r_esi;
    /* 005925fe: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x592603u); f_007b6880();
    /* 00592603: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00592606: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00592607: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00592608: ret 4 */ FN_RET(0x00592250); r_esp += 8; return;
L_0059260b:; BB(0x0059260b);
    /* 0059260b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059260d: mov ecx, esi */ r_ecx = r_esi;
    /* 0059260f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x592614u); f_0051f62c();
    /* 00592614: jmp 0x5925fc */ goto L_005925fc;
L_00592616:; BB(0x00592616);
    /* 00592616: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 0059261c: mov edx, dword ptr [eax*4 + 0xa744e0] */ r_edx = R32((u32)(r_eax*4+0xa744e0u));
    /* 00592623: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592626: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59262bu); f_00520e3c();
    /* 0059262b: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0059262f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592630: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00592631: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592632: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00592633: call 0x6ec8ec */ r_esp -= 4; W32(r_esp, 0x592638u); f_006ec8ec();
    /* 00592638: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059263b: jmp 0x5925fc */ goto L_005925fc;
L_0059263d:; BB(0x0059263d);
    /* 0059263d: mov ecx, esi */ r_ecx = r_esi;
    /* 0059263f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x592644u); f_007aa094();
    /* 00592644: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00592649: lea ecx, [esi + 0x41c] */ r_ecx = (u32)(r_esi+0x41cu);
    /* 0059264f: call 0x576bb8 */ r_esp -= 4; W32(r_esp, 0x592654u); f_00576bb8();
    /* 00592654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592656: je 0x59246c */ if (fZ) goto L_0059246c;
L_0059265c:; BB(0x0059265c);
    /* 0059265c: mov dword ptr [esi + 0x43c], 2 */ W32((u32)(r_esi+0x43cu), 0x2u);
    /* 00592666: jmp 0x59246c */ goto L_0059246c;
L_0059266b:; BB(0x0059266b);
    /* 0059266b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059266d: mov ecx, esi */ r_ecx = r_esi;
    /* 0059266f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x592674u); f_0051f62c();
    /* 00592674: jmp 0x5925fc */ goto L_005925fc;
L_00592676:; BB(0x00592676);
    /* 00592676: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00592678: mov eax, 0xa */ r_eax = 0xau;
    /* 0059267d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00592684: mov ecx, esi */ r_ecx = r_esi;
    /* 00592686: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59268bu); f_0051f664();
    /* 0059268b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059268d: mov ecx, esi */ r_ecx = r_esi;
    /* 0059268f: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x592695u); call_ind(t); }
    /* 00592695: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059269b: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005926a0: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005926a5: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 005926ab: mov ecx, esi */ r_ecx = r_esi;
    /* 005926ad: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5926b2u); f_005213d8();
    /* 005926b2: mov dword ptr [esi + 0x43c], 0 */ W32((u32)(r_esi+0x43cu), 0x0u);
    /* 005926bc: jmp 0x5925fc */ goto L_005925fc;
}

void f_005926c4(void) /* sub_5926C4 */
{
    FN_ENTER(0x005926c4);
    /* 005926c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005926c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005926c6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005926c9: mov esi, ecx */ r_esi = r_ecx;
    /* 005926cb: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005926cf: mov dword ptr [esi + 0x3c8], 0 */ W32((u32)(r_esi+0x3c8u), 0x0u);
    /* 005926d9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005926dc: je 0x59287f */ if (fZ) goto L_0059287f;
L_005926e2:; BB(0x005926e2);
    /* 005926e2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005926e5: je 0x592877 */ if (fZ) goto L_00592877;
L_005926eb:; BB(0x005926eb);
    /* 005926eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005926ed: jne 0x592877 */ if (!fZ) goto L_00592877;
L_005926f3:; BB(0x005926f3);
    /* 005926f3: mov eax, dword ptr [esi + 0x43c] */ r_eax = R32((u32)(r_esi+0x43cu));
    /* 005926f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005926fb: je 0x5927e5 */ if (fZ) goto L_005927e5;
L_00592701:; BB(0x00592701);
    /* 00592701: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592704: jne 0x5927c7 */ if (!fZ) goto L_005927c7;
L_0059270a:; BB(0x0059270a);
    /* 0059270a: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 00592710: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00592713: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 00592719: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059271c: jl 0x5927b5 */ if ((fS!=fO)) goto L_005927b5;
L_00592722:; BB(0x00592722);
    /* 00592722: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592725: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059272b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059272e: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 00592734: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00592737: mov dword ptr [esi + 0x43c], 2 */ W32((u32)(r_esi+0x43cu), 0x2u);
    /* 00592741: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00592742: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592745: push 0x9290d4 */ { u32 v = 0x9290d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059274a: push dword ptr [0xa74500] */ { u32 v = R32((u32)(0xa74500u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592750: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x592755u); f_00578aa0();
    /* 00592755: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592758: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0059275b: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0059275e: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00592761: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00592764: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00592767: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059276b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059276f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x592774u); f_0082dcbc();
    /* 00592774: fld dword ptr [0x9290fc] */ FPUSH(R_F32((u32)(0x9290fcu)));
    /* 0059277a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059277c: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0059277f: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00592782: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00592785: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x59278au); f_0082ddd8();
    /* 0059278a: fld dword ptr [0x9290fc] */ FPUSH(R_F32((u32)(0x9290fcu)));
    /* 00592790: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00592792: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00592796: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0059279a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059279d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059279e: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x5927a3u); f_005787d0();
    /* 005927a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005927a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005927a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005927a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005927a8: push 0x283 */ { u32 v = 0x283u; r_esp -= 4; W32(r_esp, v); }
    /* 005927ad: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5927b2u); f_00814298();
    /* 005927b2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005927b5:; BB(0x005927b5);
    /* 005927b5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005927b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005927b9: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5927bfu); call_ind(t); }
    /* 005927bf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005927c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005927c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005927c4: ret 4 */ FN_RET(0x005926c4); r_esp += 8; return;
L_005927c7:; BB(0x005927c7);
    /* 005927c7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005927ca: jne 0x592877 */ if (!fZ) goto L_00592877;
L_005927d0:; BB(0x005927d0);
    /* 005927d0: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005927d4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005927d9: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005927dd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005927e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005927e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005927e2: ret 4 */ FN_RET(0x005926c4); r_esp += 8; return;
L_005927e5:; BB(0x005927e5);
    /* 005927e5: mov ecx, esi */ r_ecx = r_esi;
    /* 005927e7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5927ecu); f_007aa094();
    /* 005927ec: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 005927f1: mov ecx, esi */ r_ecx = r_esi;
    /* 005927f3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5927f8u); f_007aaa30();
    /* 005927f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005927fa: jne 0x59280c */ if (!fZ) goto L_0059280c;
L_005927fc:; BB(0x005927fc);
    /* 005927fc: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00592801: mov ecx, esi */ r_ecx = r_esi;
    /* 00592803: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x592808u); f_007aaa30();
    /* 00592808: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059280a: je 0x592821 */ if (fZ) goto L_00592821;
L_0059280c:; BB(0x0059280c);
    /* 0059280c: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0059280f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00592811: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592812: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592813: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592814: push 0x27f */ { u32 v = 0x27fu; r_esp -= 4; W32(r_esp, v); }
    /* 00592819: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59281eu); f_00814298();
    /* 0059281e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00592821:; BB(0x00592821);
    /* 00592821: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00592827: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00592829: je 0x592877 */ if (fZ) goto L_00592877;
L_0059282b:; BB(0x0059282b);
    /* 0059282b: mov dword ptr [esi + 0x43c], 1 */ W32((u32)(r_esi+0x43cu), 0x1u);
    /* 00592835: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00592839: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0059283c: mov dword ptr [esi + 0x440], 0 */ W32((u32)(r_esi+0x440u), 0x0u);
    /* 00592846: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0059284e: mov dword ptr [esp + 0x10], 0x41200000 */ W32((u32)(r_esp+0x10u), 0x41200000u);
    /* 00592856: mov dword ptr [esp + 0x14], 0x41a00000 */ W32((u32)(r_esp+0x14u), 0x41a00000u);
    /* 0059285e: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592862: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592863: call 0x782b3c */ r_esp -= 4; W32(r_esp, 0x592868u); f_00782b3c();
    /* 00592868: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0059286c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0059286e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059286f: call 0x5788b8 */ r_esp -= 4; W32(r_esp, 0x592874u); f_005788b8();
    /* 00592874: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00592877:; BB(0x00592877);
    /* 00592877: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059287a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059287b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059287c: ret 4 */ FN_RET(0x005926c4); r_esp += 8; return;
L_0059287f:; BB(0x0059287f);
    /* 0059287f: mov eax, 5 */ r_eax = 0x5u;
    /* 00592884: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0059288b: mov ecx, esi */ r_ecx = r_esi;
    /* 0059288d: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x592892u); f_0051f894();
    /* 00592892: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00592894: mov ecx, esi */ r_ecx = r_esi;
    /* 00592896: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x59289cu); call_ind(t); }
    /* 0059289c: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 005928a2: mov dword ptr [esi + 0x43c], 0 */ W32((u32)(r_esi+0x43cu), 0x0u);
    /* 005928ac: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005928b1: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 005928b7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005928ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005928bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005928bc: ret 4 */ FN_RET(0x005926c4); r_esp += 8; return;
}

void f_005928c0(void) /* sub_5928C0 */
{
    FN_ENTER(0x005928c0);
    /* 005928c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005928c1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005928c4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005928c6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005928ca: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005928cd: je 0x5929c8 */ if (fZ) goto L_005929c8;
L_005928d3:; BB(0x005928d3);
    /* 005928d3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005928d6: je 0x59297d */ if (fZ) goto L_0059297d;
L_005928dc:; BB(0x005928dc);
    /* 005928dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005928de: jne 0x592963 */ if (!fZ) goto L_00592963;
L_005928e4:; BB(0x005928e4);
    /* 005928e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005928e6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5928ebu); f_007aa094();
    /* 005928eb: mov eax, dword ptr [ebp + 0x30c] */ r_eax = R32((u32)(r_ebp+0x30cu));
    /* 005928f1: mov edx, dword ptr [ebp + 0x310] */ r_edx = R32((u32)(r_ebp+0x310u));
    /* 005928f7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005928fa: mov eax, dword ptr [ebp + 0x314] */ r_eax = R32((u32)(r_ebp+0x314u));
    /* 00592900: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00592904: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00592908: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059290b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059290c: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x592911u); f_007828e4();
    /* 00592911: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00592912: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592915: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00592919: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0059291d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00592921: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592923: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00592926: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059292a: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x59292fu); f_005209d4();
    /* 0059292f: fld dword ptr [0x9290c8] */ FPUSH(R_F32((u32)(0x9290c8u)));
    /* 00592935: fld dword ptr [ebp + 0x30c] */ FPUSH(R_F32((u32)(r_ebp+0x30cu)));
    /* 0059293b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0059293d: fld dword ptr [ebp + 0x314] */ FPUSH(R_F32((u32)(r_ebp+0x314u)));
    /* 00592943: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00592946: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00592948: fstp dword ptr [ebp + 0x30c] */ W_F32((u32)(r_ebp+0x30cu), ST(0)); FPOP();
    /* 0059294e: fstp dword ptr [ebp + 0x314] */ W_F32((u32)(r_ebp+0x314u), ST(0)); FPOP();
    /* 00592954: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592956: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59295cu); call_ind(t); }
    /* 0059295c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059295f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592960: ret 4 */ FN_RET(0x005928c0); r_esp += 8; return;
L_00592963:; BB(0x00592963);
    /* 00592963: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592966: jne 0x59299f */ if (!fZ) goto L_0059299f;
L_00592968:; BB(0x00592968);
    /* 00592968: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059296a: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x59296fu); f_0051f81c();
    /* 0059296f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592971: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x592976u); f_00520be8();
    /* 00592976: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00592979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059297a: ret 4 */ FN_RET(0x005928c0); r_esp += 8; return;
L_0059297d:; BB(0x0059297d);
    /* 0059297d: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00592983: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00592985: je 0x59299f */ if (fZ) goto L_0059299f;
L_00592987:; BB(0x00592987);
    /* 00592987: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0059298d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592990: je 0x5929a6 */ if (fZ) goto L_005929a6;
L_00592992:; BB(0x00592992);
    /* 00592992: push dword ptr [ebp + 0x380] */ { u32 v = R32((u32)(r_ebp+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00592998: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059299a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59299fu); f_0051f62c();
L_0059299f:; BB(0x0059299f);
    /* 0059299f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005929a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005929a3: ret 4 */ FN_RET(0x005928c0); r_esp += 8; return;
L_005929a6:; BB(0x005929a6);
    /* 005929a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005929a8: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5929adu); f_007751b0();
    /* 005929ad: fcomp dword ptr [ebp + 0x3f8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3f8u))); FPOP();
    /* 005929b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005929b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005929b6: ja 0x592992 */ if ((!fC&&!fZ)) goto L_00592992;
L_005929b8:; BB(0x005929b8);
    /* 005929b8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005929ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005929bc: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5929c1u); f_0051f62c();
    /* 005929c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005929c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005929c5: ret 4 */ FN_RET(0x005928c0); r_esp += 8; return;
L_005929c8:; BB(0x005929c8);
    /* 005929c8: mov eax, 4 */ r_eax = 0x4u;
    /* 005929cd: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005929d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005929d6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5929dbu); f_007aa094();
    /* 005929db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005929dd: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5929e2u); f_00520bdc();
    /* 005929e2: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 005929e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005929e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005929e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005929e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005929ea: push 0x282 */ { u32 v = 0x282u; r_esp -= 4; W32(r_esp, v); }
    /* 005929ef: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5929f4u); f_00814298();
    /* 005929f4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005929f7: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005929fd: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00592a02: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00592a08: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00592a0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592a0c: ret 4 */ FN_RET(0x005928c0); r_esp += 8; return;
}

void f_00592a10(void) /* sub_592A10 */
{
    FN_ENTER(0x00592a10);
    /* 00592a10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00592a11: mov esi, ecx */ r_esi = r_ecx;
    /* 00592a13: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00592a17: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592a1a: je 0x592a80 */ if (fZ) goto L_00592a80;
L_00592a1c:; BB(0x00592a1c);
    /* 00592a1c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592a1f: je 0x592a4b */ if (fZ) goto L_00592a4b;
L_00592a21:; BB(0x00592a21);
    /* 00592a21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00592a23: jne 0x592a7c */ if (!fZ) goto L_00592a7c;
L_00592a25:; BB(0x00592a25);
    /* 00592a25: add dword ptr [esi + 0x43c], 1 */ { u32 ad = (u32)(r_esi+0x43cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00592a2c: mov ecx, esi */ r_ecx = r_esi;
    /* 00592a2e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x592a33u); f_007aa094();
    /* 00592a33: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00592a35: mov ecx, esi */ r_ecx = r_esi;
    /* 00592a37: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x592a3du); call_ind(t); }
    /* 00592a3d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00592a3f: mov ecx, esi */ r_ecx = r_esi;
    /* 00592a41: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x592a47u); call_ind(t); }
    /* 00592a47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00592a48: ret 4 */ FN_RET(0x00592a10); r_esp += 8; return;
L_00592a4b:; BB(0x00592a4b);
    /* 00592a4b: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00592a50: mov ecx, esi */ r_ecx = r_esi;
    /* 00592a52: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x592a57u); f_00520ea0();
    /* 00592a57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592a59: jne 0x592a73 */ if (!fZ) goto L_00592a73;
L_00592a5b:; BB(0x00592a5b);
    /* 00592a5b: mov eax, dword ptr [esi + 0x43c] */ r_eax = R32((u32)(r_esi+0x43cu));
    /* 00592a61: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00592a64: jl 0x592a7c */ if ((fS!=fO)) goto L_00592a7c;
L_00592a66:; BB(0x00592a66);
    /* 00592a66: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00592a68: mov ecx, esi */ r_ecx = r_esi;
    /* 00592a6a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x592a6fu); f_0051f62c();
    /* 00592a6f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00592a70: ret 4 */ FN_RET(0x00592a10); r_esp += 8; return;
L_00592a73:; BB(0x00592a73);
    /* 00592a73: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00592a75: mov ecx, esi */ r_ecx = r_esi;
    /* 00592a77: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x592a7cu); f_0051f62c();
L_00592a7c:; BB(0x00592a7c);
    /* 00592a7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00592a7d: ret 4 */ FN_RET(0x00592a10); r_esp += 8; return;
L_00592a80:; BB(0x00592a80);
    /* 00592a80: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00592a82: mov eax, 9 */ r_eax = 0x9u;
    /* 00592a87: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00592a8e: mov ecx, esi */ r_ecx = r_esi;
    /* 00592a90: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x592a95u); f_0051f664();
    /* 00592a95: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 00592a9b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00592a9d: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00592aa2: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 00592aa8: mov ecx, esi */ r_ecx = r_esi;
    /* 00592aaa: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x592ab0u); call_ind(t); }
    /* 00592ab0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00592ab2: mov dword ptr [esi + 0x404], eax */ W32((u32)(r_esi+0x404u), r_eax);
    /* 00592ab8: mov dword ptr [esi + 0x43c], eax */ W32((u32)(r_esi+0x43cu), r_eax);
    /* 00592abe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00592abf: ret 4 */ FN_RET(0x00592a10); r_esp += 8; return;
}

void f_00592ac4(void) /* sub_592AC4 */
{
    FN_ENTER(0x00592ac4);
    /* 00592ac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592ac5: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00592ac8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00592aca: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00592ace: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592ad1: je 0x592f99 */ if (fZ) goto L_00592f99;
L_00592ad7:; BB(0x00592ad7);
    /* 00592ad7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592ada: je 0x592e55 */ if (fZ) goto L_00592e55;
L_00592ae0:; BB(0x00592ae0);
    /* 00592ae0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592ae2: jne 0x592e3f */ if (!fZ) goto L_00592e3f;
L_00592ae8:; BB(0x00592ae8);
    /* 00592ae8: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 00592aee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592af0: jne 0x592b5d */ if (!fZ) goto L_00592b5d;
L_00592af2:; BB(0x00592af2);
    /* 00592af2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592af4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x592af9u); f_007aa094();
    /* 00592af9: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00592aff: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00592b01: je 0x592b42 */ if (fZ) goto L_00592b42;
L_00592b03:; BB(0x00592b03);
    /* 00592b03: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00592b09: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00592b0c: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00592b12: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00592b15: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00592b17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592b18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592b1a: push 0x284 */ { u32 v = 0x284u; r_esp -= 4; W32(r_esp, v); }
    /* 00592b1f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x592b24u); f_00814298();
    /* 00592b24: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592b27: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00592b29: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 00592b2f: lea ecx, [ebp + 0x41c] */ r_ecx = (u32)(r_ebp+0x41cu);
    /* 00592b35: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x592b38u); call_ind(t); }
    /* 00592b38: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
L_00592b42:; BB(0x00592b42);
    /* 00592b42: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00592b45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592b47: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x592b4du); call_ind(t); }
    /* 00592b4d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00592b50: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592b52: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x592b58u); call_ind(t); }
    /* 00592b58: jmp 0x592e64 */ goto L_00592e64;
L_00592b5d:; BB(0x00592b5d);
    /* 00592b5d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592b60: jne 0x592e64 */ if (!fZ) goto L_00592e64;
L_00592b66:; BB(0x00592b66);
    /* 00592b66: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 00592b6c: lea ecx, [ebp + 0x41c] */ r_ecx = (u32)(r_ebp+0x41cu);
    /* 00592b72: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x592b75u); call_ind(t); }
    /* 00592b75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592b77: je 0x592e64 */ if (fZ) goto L_00592e64;
L_00592b7d:; BB(0x00592b7d);
    /* 00592b7d: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00592b82: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00592b88: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00592b8b: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00592b91: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592b93: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x592b98u); f_00520ea0();
    /* 00592b98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592b9a: je 0x592e33 */ if (fZ) goto L_00592e33;
L_00592ba0:; BB(0x00592ba0);
    /* 00592ba0: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00592ba6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592ba8: je 0x592e64 */ if (fZ) goto L_00592e64;
L_00592bae:; BB(0x00592bae);
    /* 00592bae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592bb0: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x592bb5u); f_007751b0();
    /* 00592bb5: fld dword ptr [0x9290bc] */ FPUSH(R_F32((u32)(0x9290bcu)));
    /* 00592bbb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00592bbd: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00592bc1: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00592bc6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00592bcb: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00592bcf: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00592bd3: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00592bd7: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00592bdb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592bdd: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00592be1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00592be4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00592be7: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x592becu); f_007751b0();
    /* 00592bec: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00592bee: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00592bf1: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00592bf5: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00592bfa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00592bff: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00592c03: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00592c07: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00592c0b: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00592c0f: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00592c13: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00592c16: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00592c18: jg 0x592c22 */ if ((!fZ&&fS==fO)) goto L_00592c22;
L_00592c1a:; BB(0x00592c1a);
    /* 00592c1a: mov edx, eax */ r_edx = r_eax;
    /* 00592c1c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00592c20: jmp 0x592c26 */ goto L_00592c26;
L_00592c22:; BB(0x00592c22);
    /* 00592c22: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00592c26:; BB(0x00592c26);
    /* 00592c26: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 00592c2a: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00592c2c: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00592c30: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 00592c34: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00592c36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00592c38: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00592c3c: mov edi, eax */ r_edi = r_eax;
L_00592c3e:; BB(0x00592c3e);
    /* 00592c3e: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00592c44: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00592c47: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 00592c4a: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 00592c4d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00592c51: mov edx, dword ptr [esp + edi*4] */ r_edx = R32((u32)(r_esp+r_edi*4));
    /* 00592c54: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00592c58: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 00592c5b: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00592c5e: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00592c62: lea ecx, [edx + ebx + 0x4000] */ r_ecx = (u32)(r_edx+r_ebx+0x4000u);
    /* 00592c69: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00592c6d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x592c72u); f_0082ddd8();
    /* 00592c72: fmul dword ptr [0x9290b0] */ ST(0) = ST(0) * R_F32((u32)(0x9290b0u));
    /* 00592c78: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00592c7c: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00592c80: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00592c84: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x592c89u); f_0082dcbc();
    /* 00592c89: fmul dword ptr [0x9290b8] */ ST(0) = ST(0) * R_F32((u32)(0x9290b8u));
    /* 00592c8f: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 00592c93: fld dword ptr [0x9290b4] */ FPUSH(R_F32((u32)(0x9290b4u)));
    /* 00592c99: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 00592c9d: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00592ca1: mov esi, dword ptr [ebp + 0x398] */ r_esi = R32((u32)(r_ebp+0x398u));
    /* 00592ca7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00592ca9: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00592cad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00592caf: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 00592cb3: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00592cb7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00592cb9: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00592cbb: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 00592cbe: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 00592cc2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00592cc4: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00592cc6: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 00592cc9: mov esi, dword ptr [ebp + 0xa4] */ r_esi = R32((u32)(r_ebp+0xa4u));
    /* 00592ccf: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00592cd2: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00592cd6: mov dword ptr [esi + 0x18], 0x9d01 */ W32((u32)(r_esi+0x18u), 0x9d01u);
    /* 00592cdd: mov ebx, dword ptr [ebp + 0x38] */ r_ebx = R32((u32)(r_ebp+0x38u));
    /* 00592ce0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00592ce2: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00592ce5: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00592ce9: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00592cec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00592cee: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00592cf1: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00592cf5: mov ebx, dword ptr [ebp + 0x40] */ r_ebx = R32((u32)(r_ebp+0x40u));
    /* 00592cf8: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 00592cfb: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00592cff: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x592d04u); f_007b51c4();
    /* 00592d04: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00592d07: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592d09: call dword ptr [edx + 0x16c] */ { u32 t = R32((u32)(r_edx+0x16cu)); r_esp -= 4; W32(r_esp, 0x592d0fu); call_ind(t); }
    /* 00592d0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592d11: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x592d16u); f_007b7e9c();
    /* 00592d16: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00592d19: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592d1f: je 0x592d3d */ if (fZ) goto L_00592d3d;
L_00592d21:; BB(0x00592d21);
    /* 00592d21: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 00592d27: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00592d2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592d2c: call 0x578c98 */ r_esp -= 4; W32(r_esp, 0x592d31u); f_00578c98();
    /* 00592d31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00592d32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592d34: je 0x592ee5 */ if (fZ) goto L_00592ee5;
L_00592d3a:; BB(0x00592d3a);
    /* 00592d3a: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
L_00592d3d:; BB(0x00592d3d);
    /* 00592d3d: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592d43: je 0x592d5b */ if (fZ) goto L_00592d5b;
L_00592d45:; BB(0x00592d45);
    /* 00592d45: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00592d49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592d4a: call 0x578c98 */ r_esp -= 4; W32(r_esp, 0x592d4fu); f_00578c98();
    /* 00592d4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00592d50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592d52: je 0x592eca */ if (fZ) goto L_00592eca;
L_00592d58:; BB(0x00592d58);
    /* 00592d58: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
L_00592d5b:; BB(0x00592d5b);
    /* 00592d5b: test edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592d61: je 0x592d6e */ if (fZ) goto L_00592d6e;
L_00592d63:; BB(0x00592d63);
    /* 00592d63: mov edx, 1 */ r_edx = 0x1u;
    /* 00592d68: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00592d6c: jmp 0x592d74 */ goto L_00592d74;
L_00592d6e:; BB(0x00592d6e);
    /* 00592d6e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00592d70: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
L_00592d74:; BB(0x00592d74);
    /* 00592d74: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00592d78: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 00592d7b: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00592d7f: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 00592d82: mov dword ptr [ebp + 0x40], ebx */ W32((u32)(r_ebp+0x40u), r_ebx);
    /* 00592d85: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x592d8au); f_007b51c4();
    /* 00592d8a: mov edx, dword ptr [0x9bfb84] */ r_edx = R32((u32)(0x9bfb84u));
    /* 00592d90: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00592d92: mov ebx, dword ptr [0x9bfb88] */ r_ebx = R32((u32)(0x9bfb88u));
    /* 00592d98: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00592d9b: mov edx, dword ptr [0x9bfb8c] */ r_edx = R32((u32)(0x9bfb8cu));
    /* 00592da1: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00592da4: mov edx, dword ptr [0x9bfb90] */ r_edx = R32((u32)(0x9bfb90u));
    /* 00592daa: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00592dad: mov edx, dword ptr [0x9bfb94] */ r_edx = R32((u32)(0x9bfb94u));
    /* 00592db3: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 00592db6: mov edx, dword ptr [0x9bfb98] */ r_edx = R32((u32)(0x9bfb98u));
    /* 00592dbc: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 00592dbf: mov edx, dword ptr [0x9bfb9c] */ r_edx = R32((u32)(0x9bfb9cu));
    /* 00592dc5: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 00592dc8: mov edx, dword ptr [0x9bfba0] */ r_edx = R32((u32)(0x9bfba0u));
    /* 00592dce: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 00592dd1: mov edx, dword ptr [0x9bfba4] */ r_edx = R32((u32)(0x9bfba4u));
    /* 00592dd7: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 00592dda: mov edx, dword ptr [0x9bfba8] */ r_edx = R32((u32)(0x9bfba8u));
    /* 00592de0: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 00592de3: mov edx, dword ptr [0x9bfbac] */ r_edx = R32((u32)(0x9bfbacu));
    /* 00592de9: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00592dec: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00592df0: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 00592df3: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 00592df7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592df9: jne 0x592e1b */ if (!fZ) goto L_00592e1b;
L_00592dfb:; BB(0x00592dfb);
    /* 00592dfb: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00592dff: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592e04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592e05: mov ebx, dword ptr [ebp + 0x398] */ r_ebx = R32((u32)(r_ebp+0x398u));
    /* 00592e0b: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00592e0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00592e0f: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x592e14u); f_0077fffc();
    /* 00592e14: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592e19: je 0x592e6b */ if (fZ) goto L_00592e6b;
L_00592e1b:; BB(0x00592e1b);
    /* 00592e1b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00592e1e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00592e21: jl 0x592c3e */ if ((fS!=fO)) goto L_00592c3e;
L_00592e27:; BB(0x00592e27);
    /* 00592e27: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 00592e2b: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 00592e2f: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
L_00592e33:; BB(0x00592e33);
    /* 00592e33: mov dword ptr [ebp + 0x43c], 2 */ W32((u32)(r_ebp+0x43cu), 0x2u);
    /* 00592e3d: jmp 0x592e64 */ goto L_00592e64;
L_00592e3f:; BB(0x00592e3f);
    /* 00592e3f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592e42: jne 0x592e64 */ if (!fZ) goto L_00592e64;
L_00592e44:; BB(0x00592e44);
    /* 00592e44: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00592e4a: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00592e4d: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00592e53: jmp 0x592e64 */ goto L_00592e64;
L_00592e55:; BB(0x00592e55);
    /* 00592e55: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 00592e5b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592e5e: je 0x592f00 */ if (fZ) goto L_00592f00;
L_00592e64:; BB(0x00592e64);
    /* 00592e64: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00592e67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592e68: ret 4 */ FN_RET(0x00592ac4); r_esp += 8; return;
L_00592e6b:; BB(0x00592e6b);
    /* 00592e6b: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 00592e6f: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00592e71: lea edx, [ebp + 0x128] */ r_edx = (u32)(r_ebp+0x128u);
    /* 00592e77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592e78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00592e79: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x592e7eu); f_007806dc();
    /* 00592e7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592e81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592e83: je 0x592e1b */ if (fZ) goto L_00592e1b;
L_00592e85:; BB(0x00592e85);
    /* 00592e85: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00592e89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592e8a: call 0x807cac */ r_esp -= 4; W32(r_esp, 0x592e8fu); f_00807cac();
    /* 00592e8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00592e90: movsx edx, word ptr [ebp + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x28u));
    /* 00592e94: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592e96: jne 0x592e1b */ if (!fZ) goto L_00592e1b;
L_00592e98:; BB(0x00592e98);
    /* 00592e98: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00592e9c: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 00592ea0: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 00592ea4: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00592ea8: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00592eac: add eax, 0xc000 */ {  u32 a = r_eax; u32 b = 0xc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00592eb1: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 00592eb4: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00592eb8: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 00592ebb: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00592ebf: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 00592ec2: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00592ec5: jmp 0x592e33 */ goto L_00592e33;
L_00592eca:; BB(0x00592eca);
    /* 00592eca: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00592ece: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 00592ed2: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 00592ed5: mov dword ptr [ebp + 0x3c], esi */ W32((u32)(r_ebp+0x3cu), r_esi);
    /* 00592ed8: mov dword ptr [ebp + 0x40], ebx */ W32((u32)(r_ebp+0x40u), r_ebx);
    /* 00592edb: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x592ee0u); f_007b51c4();
    /* 00592ee0: jmp 0x592e1b */ goto L_00592e1b;
L_00592ee5:; BB(0x00592ee5);
    /* 00592ee5: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00592ee9: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 00592eed: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 00592ef0: mov dword ptr [ebp + 0x3c], esi */ W32((u32)(r_ebp+0x3cu), r_esi);
    /* 00592ef3: mov dword ptr [ebp + 0x40], ebx */ W32((u32)(r_ebp+0x40u), r_ebx);
    /* 00592ef6: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x592efbu); f_007b51c4();
    /* 00592efb: jmp 0x592e1b */ goto L_00592e1b;
L_00592f00:; BB(0x00592f00);
    /* 00592f00: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00592f06: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00592f0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592f0d: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00592f12: mov dword ptr [ebp + 0x3c8], 1 */ W32((u32)(r_ebp+0x3c8u), 0x1u);
    /* 00592f1c: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00592f22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592f24: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x592f29u); f_007b52c4();
    /* 00592f29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592f2b: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x592f30u); f_007751b0();
    /* 00592f30: fcomp dword ptr [ebp + 0x3f0] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3f0u))); FPOP();
    /* 00592f36: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00592f38: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00592f39: ja 0x592f8b */ if ((!fC&&!fZ)) goto L_00592f8b;
L_00592f3b:; BB(0x00592f3b);
    /* 00592f3b: mov eax, dword ptr [ebp + 0x408] */ r_eax = R32((u32)(r_ebp+0x408u));
    /* 00592f41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00592f43: jle 0x592f7d */ if ((fZ||fS!=fO)) goto L_00592f7d;
L_00592f45:; BB(0x00592f45);
    /* 00592f45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592f47: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x592f4cu); f_007751b0();
    /* 00592f4c: mov edx, dword ptr [ebp + 0x3d0] */ r_edx = R32((u32)(r_ebp+0x3d0u));
    /* 00592f52: mov edx, dword ptr [edx*4 + 0xa744e0] */ r_edx = R32((u32)(r_edx*4+0xa744e0u));
    /* 00592f59: fcomp dword ptr [edx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x14u))); FPOP();
    /* 00592f5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00592f5e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00592f5f: jbe 0x592f6f */ if ((fC||fZ)) goto L_00592f6f;
L_00592f61:; BB(0x00592f61);
    /* 00592f61: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00592f63: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592f65: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x592f6au); f_0051f62c();
    /* 00592f6a: jmp 0x592e64 */ goto L_00592e64;
L_00592f6f:; BB(0x00592f6f);
    /* 00592f6f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00592f71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592f73: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x592f78u); f_0051f62c();
    /* 00592f78: jmp 0x592e64 */ goto L_00592e64;
L_00592f7d:; BB(0x00592f7d);
    /* 00592f7d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00592f7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592f81: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x592f86u); f_0051f62c();
    /* 00592f86: jmp 0x592e64 */ goto L_00592e64;
L_00592f8b:; BB(0x00592f8b);
    /* 00592f8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00592f8d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592f8f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x592f94u); f_0051f62c();
    /* 00592f94: jmp 0x592e64 */ goto L_00592e64;
L_00592f99:; BB(0x00592f99);
    /* 00592f99: mov eax, 0xc */ r_eax = 0xcu;
    /* 00592f9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592f9f: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00592fa6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592fa8: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x592fadu); f_0051f664();
    /* 00592fad: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00592fb0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00592fb2: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x592fb8u); call_ind(t); }
    /* 00592fb8: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00592fbe: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 00592fc8: and eax, 0xffeffff9 */ {  u32 a = r_eax; u32 b = 0xffeffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00592fcd: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00592fd0: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00592fd6: jmp 0x592e64 */ goto L_00592e64;
}

void f_00592fdc(void) /* sub_592FDC */
{
    FN_ENTER(0x00592fdc);
    /* 00592fdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00592fdd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00592fde: mov edi, ecx */ r_edi = r_ecx;
    /* 00592fe0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00592fe4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592fe7: je 0x5931cb */ if (fZ) goto L_005931cb;
L_00592fed:; BB(0x00592fed);
    /* 00592fed: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592ff0: je 0x5930a2 */ if (fZ) goto L_005930a2;
L_00592ff6:; BB(0x00592ff6);
    /* 00592ff6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00592ff8: jne 0x5930c3 */ if (!fZ) goto L_005930c3;
L_00592ffe:; BB(0x00592ffe);
    /* 00592ffe: mov ecx, edi */ r_ecx = r_edi;
    /* 00593000: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x593005u); f_007aa094();
    /* 00593005: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 0059300b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059300d: je 0x5931a1 */ if (fZ) goto L_005931a1;
L_00593013:; BB(0x00593013);
    /* 00593013: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593016: je 0x593145 */ if (fZ) goto L_00593145;
L_0059301c:; BB(0x0059301c);
    /* 0059301c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059301f: je 0x59308c */ if (fZ) goto L_0059308c;
L_00593021:; BB(0x00593021);
    /* 00593021: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593024: jne 0x593049 */ if (!fZ) goto L_00593049;
L_00593026:; BB(0x00593026);
    /* 00593026: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 0059302c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059302f: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00593035: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593038: je 0x59311d */ if (fZ) goto L_0059311d;
L_0059303e:; BB(0x0059303e);
    /* 0059303e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593041: je 0x5930c8 */ if (fZ) goto L_005930c8;
L_00593047:; BB(0x00593047);
    /* 00593047: jmp 0x593093 */ goto L_00593093;
L_00593049:; BB(0x00593049);
    /* 00593049: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059304c: jne 0x593093 */ if (!fZ) goto L_00593093;
L_0059304e:; BB(0x0059304e);
    /* 0059304e: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00593054: lea ecx, [edi + 0x41c] */ r_ecx = (u32)(r_edi+0x41cu);
    /* 0059305a: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x59305du); call_ind(t); }
    /* 0059305d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059305f: je 0x593093 */ if (fZ) goto L_00593093;
L_00593061:; BB(0x00593061);
    /* 00593061: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00593067: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059306c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059306e: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00593073: mov dword ptr [edi + 0x43c], 2 */ W32((u32)(r_edi+0x43cu), 0x2u);
    /* 0059307d: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 00593083: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00593085: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x59308au); f_007b52c4();
    /* 0059308a: jmp 0x593093 */ goto L_00593093;
L_0059308c:; BB(0x0059308c);
    /* 0059308c: add dword ptr [edi + 0x440], 1 */ { u32 ad = (u32)(r_edi+0x440u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00593093:; BB(0x00593093);
    /* 00593093: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593095: mov ecx, edi */ r_ecx = r_edi;
    /* 00593097: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59309du); call_ind(t); }
    /* 0059309d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059309e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059309f: ret 4 */ FN_RET(0x00592fdc); r_esp += 8; return;
L_005930a2:; BB(0x005930a2);
    /* 005930a2: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 005930a8: mov esi, dword ptr [eax*4 + 0xa744e0] */ r_esi = R32((u32)(r_eax*4+0xa744e0u));
    /* 005930af: mov edx, dword ptr [edi + 0x440] */ r_edx = R32((u32)(r_edi+0x440u));
    /* 005930b5: cmp edx, dword ptr [esi + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005930b8: jle 0x5930c3 */ if ((fZ||fS!=fO)) goto L_005930c3;
L_005930ba:; BB(0x005930ba);
    /* 005930ba: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005930bc: mov ecx, edi */ r_ecx = r_edi;
    /* 005930be: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5930c3u); f_0051f62c();
L_005930c3:; BB(0x005930c3);
    /* 005930c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005930c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005930c5: ret 4 */ FN_RET(0x00592fdc); r_esp += 8; return;
L_005930c8:; BB(0x005930c8);
    /* 005930c8: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 005930ce: mov edx, dword ptr [eax*4 + 0xa744e0] */ r_edx = R32((u32)(r_eax*4+0xa744e0u));
    /* 005930d5: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005930d8: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x5930ddu); f_00520e3c();
    /* 005930dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005930de: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005930e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005930e2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005930e3: call 0x6e2634 */ r_esp -= 4; W32(r_esp, 0x5930e8u); f_006e2634();
    /* 005930e8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005930eb: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005930f1: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005930f6: je 0x593104 */ if (fZ) goto L_00593104;
L_005930f8:; BB(0x005930f8);
    /* 005930f8: mov dword ptr [edi + 0x43c], 4 */ W32((u32)(r_edi+0x43cu), 0x4u);
    /* 00593102: jmp 0x59310e */ goto L_0059310e;
L_00593104:; BB(0x00593104);
    /* 00593104: mov dword ptr [edi + 0x43c], 2 */ W32((u32)(r_edi+0x43cu), 0x2u);
L_0059310e:; BB(0x0059310e);
    /* 0059310e: mov dword ptr [edi + 0x440], 0 */ W32((u32)(r_edi+0x440u), 0x0u);
    /* 00593118: jmp 0x593093 */ goto L_00593093;
L_0059311d:; BB(0x0059311d);
    /* 0059311d: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 00593123: mov edx, dword ptr [eax*4 + 0xa744e0] */ r_edx = R32((u32)(r_eax*4+0xa744e0u));
    /* 0059312a: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059312d: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x593132u); f_00520e3c();
    /* 00593132: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593133: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00593136: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00593137: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00593138: call 0x6f0984 */ r_esp -= 4; W32(r_esp, 0x59313du); f_006f0984();
    /* 0059313d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593140: jmp 0x593093 */ goto L_00593093;
L_00593145:; BB(0x00593145);
    /* 00593145: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0059314b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059314d: je 0x593093 */ if (fZ) goto L_00593093;
L_00593153:; BB(0x00593153);
    /* 00593153: mov ecx, edi */ r_ecx = r_edi;
    /* 00593155: call 0x593268 */ r_esp -= 4; W32(r_esp, 0x59315au); f_00593268();
    /* 0059315a: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x59315fu); f_00520e6c();
    /* 0059315f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593161: je 0x59316f */ if (fZ) goto L_0059316f;
L_00593163:; BB(0x00593163);
    /* 00593163: mov dword ptr [edi + 0x43c], 3 */ W32((u32)(r_edi+0x43cu), 0x3u);
    /* 0059316d: jmp 0x593192 */ goto L_00593192;
L_0059316f:; BB(0x0059316f);
    /* 0059316f: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00593175: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059317a: je 0x593188 */ if (fZ) goto L_00593188;
L_0059317c:; BB(0x0059317c);
    /* 0059317c: mov dword ptr [edi + 0x43c], 4 */ W32((u32)(r_edi+0x43cu), 0x4u);
    /* 00593186: jmp 0x593192 */ goto L_00593192;
L_00593188:; BB(0x00593188);
    /* 00593188: mov dword ptr [edi + 0x43c], 2 */ W32((u32)(r_edi+0x43cu), 0x2u);
L_00593192:; BB(0x00593192);
    /* 00593192: mov dword ptr [edi + 0x440], 0 */ W32((u32)(r_edi+0x440u), 0x0u);
    /* 0059319c: jmp 0x593093 */ goto L_00593093;
L_005931a1:; BB(0x005931a1);
    /* 005931a1: mov ecx, edi */ r_ecx = r_edi;
    /* 005931a3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5931a8u); f_007aa094();
    /* 005931a8: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005931ad: lea ecx, [edi + 0x41c] */ r_ecx = (u32)(r_edi+0x41cu);
    /* 005931b3: call 0x576bb8 */ r_esp -= 4; W32(r_esp, 0x5931b8u); f_00576bb8();
    /* 005931b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005931ba: je 0x593145 */ if (fZ) goto L_00593145;
L_005931bc:; BB(0x005931bc);
    /* 005931bc: mov dword ptr [edi + 0x43c], 1 */ W32((u32)(r_edi+0x43cu), 0x1u);
    /* 005931c6: jmp 0x593145 */ goto L_00593145;
L_005931cb:; BB(0x005931cb);
    /* 005931cb: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005931cd: mov eax, 8 */ r_eax = 0x8u;
    /* 005931d2: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005931d9: mov ecx, edi */ r_ecx = r_edi;
    /* 005931db: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5931e0u); f_0051f664();
    /* 005931e0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005931e2: mov ecx, edi */ r_ecx = r_edi;
    /* 005931e4: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5931eau); call_ind(t); }
    /* 005931ea: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005931f0: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 005931f6: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005931fb: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 00593201: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00593203: jne 0x593211 */ if (!fZ) goto L_00593211;
L_00593205:; BB(0x00593205);
    /* 00593205: mov dword ptr [edi + 0x43c], 1 */ W32((u32)(r_edi+0x43cu), 0x1u);
    /* 0059320f: jmp 0x593257 */ goto L_00593257;
L_00593211:; BB(0x00593211);
    /* 00593211: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00593216: lea esi, [edi + 0x41c] */ r_esi = (u32)(r_edi+0x41cu);
    /* 0059321c: mov ecx, esi */ r_ecx = r_esi;
    /* 0059321e: call 0x708120 */ r_esp -= 4; W32(r_esp, 0x593223u); f_00708120();
    /* 00593223: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00593229: mov ecx, esi */ r_ecx = r_esi;
    /* 0059322b: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x59322eu); call_ind(t); }
    /* 0059322e: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593233: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00593235: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059323b: or eax, 0x140000 */ {  u32 a = r_eax; u32 b = 0x140000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00593240: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 00593246: mov ecx, edi */ r_ecx = r_edi;
    /* 00593248: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x59324du); f_007b52ec();
    /* 0059324d: mov dword ptr [edi + 0x43c], 0 */ W32((u32)(r_edi+0x43cu), 0x0u);
L_00593257:; BB(0x00593257);
    /* 00593257: mov dword ptr [edi + 0x440], 0 */ W32((u32)(r_edi+0x440u), 0x0u);
    /* 00593261: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00593262: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00593263: ret 4 */ FN_RET(0x00592fdc); r_esp += 8; return;
}

