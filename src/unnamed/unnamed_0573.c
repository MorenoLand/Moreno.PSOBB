#include "protos.h"

void f_00573050(void) /* sub_573050 */
{
    FN_ENTER(0x00573050);
    /* 00573050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573051: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00573053: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x573058u); f_004f7c84();
    /* 00573058: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057305a: jne 0x5730f3 */ if (!fZ) goto L_005730f3;
L_00573060:; BB(0x00573060);
    /* 00573060: mov edx, dword ptr [ebp + 0x440] */ r_edx = R32((u32)(r_ebp+0x440u));
    /* 00573066: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00573069: je 0x573080 */ if (fZ) goto L_00573080;
L_0057306b:; BB(0x0057306b);
    /* 0057306b: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00573071: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573073: jne 0x573093 */ if (!fZ) goto L_00573093;
L_00573075:; BB(0x00573075);
    /* 00573075: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00573078: mov dword ptr [ebp + 0x440], edx */ W32((u32)(r_ebp+0x440u), r_edx);
    /* 0057307e: jmp 0x573093 */ goto L_00573093;
L_00573080:; BB(0x00573080);
    /* 00573080: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00573086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573088: je 0x573093 */ if (fZ) goto L_00573093;
L_0057308a:; BB(0x0057308a);
    /* 0057308a: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0057308d: mov dword ptr [ebp + 0x440], edx */ W32((u32)(r_ebp+0x440u), r_edx);
L_00573093:; BB(0x00573093);
    /* 00573093: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00573096: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00573098: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x57309eu); call_ind(t); }
    /* 0057309e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005730a1: je 0x5730b0 */ if (fZ) goto L_005730b0;
L_005730a3:; BB(0x005730a3);
    /* 005730a3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005730a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005730a8: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x5730aeu); call_ind(t); }
    /* 005730ae: jmp 0x5730d8 */ goto L_005730d8;
L_005730b0:; BB(0x005730b0);
    /* 005730b0: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005730b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005730b9: je 0x5730c0 */ if (fZ) goto L_005730c0;
L_005730bb:; BB(0x005730bb);
    /* 005730bb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005730be: jne 0x5730d8 */ if (!fZ) goto L_005730d8;
L_005730c0:; BB(0x005730c0);
    /* 005730c0: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 005730c6: lea ecx, [ebp + 0x474] */ r_ecx = (u32)(r_ebp+0x474u);
    /* 005730cc: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5730cfu); call_ind(t); }
    /* 005730cf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005730d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005730d3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5730d8u); f_0051f62c();
L_005730d8:; BB(0x005730d8);
    /* 005730d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005730da: call 0x572068 */ r_esp -= 4; W32(r_esp, 0x5730dfu); f_00572068();
    /* 005730df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005730e1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x5730e6u); f_006401f0();
    /* 005730e6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005730e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005730eb: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x5730f1u); call_ind(t); }
    /* 005730f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005730f2: ret  */ FN_RET(0x00573050); r_esp += 4; return;
L_005730f3:; BB(0x005730f3);
    /* 005730f3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005730f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005730f8: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x5730feu); call_ind(t); }
    /* 005730fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005730ff: ret  */ FN_RET(0x00573050); r_esp += 4; return;
}

void f_00573100(void) /* sub_573100 */
{
    FN_ENTER(0x00573100);
    /* 00573100: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00573101: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00573102: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573103: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00573104: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00573107: mov edi, ecx */ r_edi = r_ecx;
    /* 00573109: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x57310eu); f_004f7c84();
    /* 0057310e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573110: je 0x573124 */ if (fZ) goto L_00573124;
L_00573112:; BB(0x00573112);
    /* 00573112: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00573114: mov ecx, edi */ r_ecx = r_edi;
    /* 00573116: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x57311cu); call_ind(t); }
    /* 0057311c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057311f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00573120: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573121: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00573122: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00573123: ret  */ FN_RET(0x00573100); r_esp += 4; return;
L_00573124:; BB(0x00573124);
    /* 00573124: lea esi, [edi + 0x3d0] */ r_esi = (u32)(r_edi+0x3d0u);
    /* 0057312a: mov ecx, esi */ r_ecx = r_esi;
    /* 0057312c: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x573131u); f_005771a4();
    /* 00573131: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00573137: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573138: mov ecx, esi */ r_ecx = r_esi;
    /* 0057313a: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x57313fu); f_0057725c();
    /* 0057313f: mov ebp, eax */ r_ebp = r_eax;
    /* 00573141: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00573148: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057314b: je 0x573409 */ if (fZ) goto L_00573409;
L_00573151:; BB(0x00573151);
    /* 00573151: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x573156u); f_00694cc8();
    /* 00573156: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573158: je 0x57318c */ if (fZ) goto L_0057318c;
L_0057315a:; BB(0x0057315a);
    /* 0057315a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x57315fu); f_00807ac0();
    /* 0057315f: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573162: je 0x573411 */ if (fZ) goto L_00573411;
L_00573168:; BB(0x00573168);
    /* 00573168: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057316d: mov ecx, edi */ r_ecx = r_edi;
    /* 0057316f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00573171: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573177: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057317d: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x573180u); call_ind(t); }
    /* 00573180: mov ebx, eax */ r_ebx = r_eax;
L_00573182:; BB(0x00573182);
    /* 00573182: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573184: je 0x573409 */ if (fZ) goto L_00573409;
L_0057318a:; BB(0x0057318a);
    /* 0057318a: jmp 0x5731aa */ goto L_005731aa;
L_0057318c:; BB(0x0057318c);
    /* 0057318c: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00573191: mov ecx, edi */ r_ecx = r_edi;
    /* 00573193: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00573195: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057319a: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x57319du); call_ind(t); }
    /* 0057319d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057319f: je 0x573409 */ if (fZ) goto L_00573409;
L_005731a5:; BB(0x005731a5);
    /* 005731a5: mov ebx, 1 */ r_ebx = 0x1u;
L_005731aa:; BB(0x005731aa);
    /* 005731aa: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005731b1: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005731b4: je 0x5731dc */ if (fZ) goto L_005731dc;
L_005731b6:; BB(0x005731b6);
    /* 005731b6: mov dword ptr [esp + 0x10], 0x40000000 */ W32((u32)(r_esp+0x10u), 0x40000000u);
    /* 005731be: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005731c2: mov ecx, edi */ r_ecx = r_edi;
    /* 005731c4: mov dword ptr [esp + 0x14], 0x3f800000 */ W32((u32)(r_esp+0x14u), 0x3f800000u);
    /* 005731cc: mov dword ptr [esp + 0x18], 0x40000000 */ W32((u32)(r_esp+0x18u), 0x40000000u);
    /* 005731d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005731d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005731d7: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x5731dcu); f_00520cf8();
L_005731dc:; BB(0x005731dc);
    /* 005731dc: mov ecx, edi */ r_ecx = r_edi;
    /* 005731de: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x5731e3u); f_00520608();
    /* 005731e3: mov edx, dword ptr [edi + 0x464] */ r_edx = R32((u32)(r_edi+0x464u));
    /* 005731e9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005731ec: jne 0x573225 */ if (!fZ) goto L_00573225;
L_005731ee:; BB(0x005731ee);
    /* 005731ee: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 005731f1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005731f3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005731f6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005731fa: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005731fd: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00573201: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00573204: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00573207: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0057320a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0057320d: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00573210: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00573212: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00573215: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00573218: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 0057321b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057321d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00573220: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00573223: jmp 0x57326a */ goto L_0057326a;
L_00573225:; BB(0x00573225);
    /* 00573225: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573228: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057322b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0057322f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00573233: jne 0x57326a */ if (!fZ) goto L_0057326a;
L_00573235:; BB(0x00573235);
    /* 00573235: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00573238: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057323a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0057323d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00573241: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00573244: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00573248: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0057324b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057324e: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00573251: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00573254: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00573257: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00573259: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0057325c: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0057325f: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00573262: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00573264: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00573267: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
L_0057326a:; BB(0x0057326a);
    /* 0057326a: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00573270: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00573273: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00573279: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x57327eu); f_00829cc8();
    /* 0057327e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x573283u); f_0082d7b0();
    /* 00573283: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00573286: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x57328bu); f_0082d838();
    /* 0057328b: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0057328e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00573290: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x573295u); f_0082d8bc();
    /* 00573295: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573297: call 0x7a9404 */ r_esp -= 4; W32(r_esp, 0x57329cu); f_007a9404();
    /* 0057329c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057329d: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x5732a2u); f_00520d08();
    /* 005732a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005732a4: push dword ptr [edi + 0x444] */ { u32 v = R32((u32)(r_edi+0x444u)); r_esp -= 4; W32(r_esp, v); }
    /* 005732aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005732ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005732ae: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5732b3u); f_00830b74();
    /* 005732b3: mov dword ptr [0xa73f90], 0 */ W32((u32)(0xa73f90u), 0x0u);
    /* 005732bd: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5732c2u); f_00578b38();
    /* 005732c2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005732c6: mov edx, dword ptr [edi + 0x440] */ r_edx = R32((u32)(r_edi+0x440u));
    /* 005732cc: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005732cf: jne 0x573305 */ if (!fZ) goto L_00573305;
L_005732d1:; BB(0x005732d1);
    /* 005732d1: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 005732d4: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 005732d7: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 005732da: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 005732dd: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 005732e0: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 005732e3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005732e6: movsx edx, word ptr [eax + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 005732ea: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005732ee: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 005732f1: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 005732f5: mov ecx, 0x571090 */ r_ecx = 0x571090u;
    /* 005732fa: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5732ffu); f_0082fac4();
    /* 005732ff: mov edx, dword ptr [edi + 0x440] */ r_edx = R32((u32)(r_edi+0x440u));
L_00573305:; BB(0x00573305);
    /* 00573305: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00573308: jne 0x573353 */ if (!fZ) goto L_00573353;
L_0057330a:; BB(0x0057330a);
    /* 0057330a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057330c: jne 0x573320 */ if (!fZ) goto L_00573320;
L_0057330e:; BB(0x0057330e);
    /* 0057330e: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573311: je 0x57342e */ if (fZ) goto L_0057342e;
L_00573317:; BB(0x00573317);
    /* 00573317: mov ecx, edi */ r_ecx = r_edi;
    /* 00573319: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x57331eu); f_007aa7b8();
    /* 0057331e: jmp 0x573390 */ goto L_00573390;
L_00573320:; BB(0x00573320);
    /* 00573320: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 00573326: mov ecx, esi */ r_ecx = r_esi;
    /* 00573328: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x57332bu); call_ind(t); }
    /* 0057332b: mov ecx, edi */ r_ecx = r_edi;
    /* 0057332d: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x573332u); f_008173d0();
    /* 00573332: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573334: jne 0x573346 */ if (!fZ) goto L_00573346;
L_00573336:; BB(0x00573336);
    /* 00573336: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573339: je 0x57343a */ if (fZ) goto L_0057343a;
L_0057333f:; BB(0x0057333f);
    /* 0057333f: mov ecx, edi */ r_ecx = r_edi;
    /* 00573341: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x573346u); f_007aa7b8();
L_00573346:; BB(0x00573346);
    /* 00573346: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0057334c: mov ecx, esi */ r_ecx = r_esi;
    /* 0057334e: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x573351u); call_ind(t); }
    /* 00573351: jmp 0x573390 */ goto L_00573390;
L_00573353:; BB(0x00573353);
    /* 00573353: mov eax, dword ptr [edi + 0x474] */ r_eax = R32((u32)(r_edi+0x474u));
    /* 00573359: lea ebx, [edi + 0x474] */ r_ebx = (u32)(r_edi+0x474u);
    /* 0057335f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00573361: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x573364u); call_ind(t); }
    /* 00573364: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573366: je 0x573390 */ if (fZ) goto L_00573390;
L_00573368:; BB(0x00573368);
    /* 00573368: mov eax, dword ptr [edi + 0x474] */ r_eax = R32((u32)(r_edi+0x474u));
    /* 0057336e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00573370: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x573373u); call_ind(t); }
    /* 00573373: mov ecx, edi */ r_ecx = r_edi;
    /* 00573375: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x57337au); f_008173d0();
    /* 0057337a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057337c: jne 0x573385 */ if (!fZ) goto L_00573385;
L_0057337e:; BB(0x0057337e);
    /* 0057337e: mov ecx, edi */ r_ecx = r_edi;
    /* 00573380: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x573385u); f_007aa668();
L_00573385:; BB(0x00573385);
    /* 00573385: mov eax, dword ptr [edi + 0x474] */ r_eax = R32((u32)(r_edi+0x474u));
    /* 0057338b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057338d: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x573390u); call_ind(t); }
L_00573390:; BB(0x00573390);
    /* 00573390: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 00573396: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00573398: jne 0x5733bb */ if (!fZ) goto L_005733bb;
L_0057339a:; BB(0x0057339a);
    /* 0057339a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057339c: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5733a1u); f_0082fac4();
    /* 005733a1: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 005733a4: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005733a7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005733ab: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 005733ae: mov ebp, dword ptr [ebx + 0x30] */ r_ebp = R32((u32)(r_ebx+0x30u));
    /* 005733b1: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 005733b4: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 005733b7: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
L_005733bb:; BB(0x005733bb);
    /* 005733bb: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5733c0u); f_0082dab0();
    /* 005733c0: call 0x7a9424 */ r_esp -= 4; W32(r_esp, 0x5733c5u); f_007a9424();
    /* 005733c5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5733cau); f_0082da80();
    /* 005733ca: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005733cf: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005733d4: mov ecx, edi */ r_ecx = r_edi;
    /* 005733d6: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x5733dbu); f_00520610();
    /* 005733db: mov eax, dword ptr [edi + 0x464] */ r_eax = R32((u32)(r_edi+0x464u));
    /* 005733e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005733e3: je 0x573409 */ if (fZ) goto L_00573409;
L_005733e5:; BB(0x005733e5);
    /* 005733e5: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005733e9: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005733ed: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005733f0: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 005733f2: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 005733f5: mov ebp, dword ptr [edi + 0x24] */ r_ebp = R32((u32)(r_edi+0x24u));
    /* 005733f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005733fb: mov dword ptr [eax + 0x14], esi */ W32((u32)(r_eax+0x14u), r_esi);
    /* 005733fe: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00573401: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00573404: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00573406: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
L_00573409:; BB(0x00573409);
    /* 00573409: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057340c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057340d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057340e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057340f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00573410: ret  */ FN_RET(0x00573100); r_esp += 4; return;
L_00573411:; BB(0x00573411);
    /* 00573411: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00573416: mov ecx, edi */ r_ecx = r_edi;
    /* 00573418: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0057341a: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057341f: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 00573424: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x573427u); call_ind(t); }
    /* 00573427: mov ebx, eax */ r_ebx = r_eax;
    /* 00573429: jmp 0x573182 */ goto L_00573182;
L_0057342e:; BB(0x0057342e);
    /* 0057342e: mov ecx, edi */ r_ecx = r_edi;
    /* 00573430: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x573435u); f_007aa668();
    /* 00573435: jmp 0x573390 */ goto L_00573390;
L_0057343a:; BB(0x0057343a);
    /* 0057343a: mov ecx, edi */ r_ecx = r_edi;
    /* 0057343c: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x573441u); f_007aa668();
    /* 00573441: jmp 0x573346 */ goto L_00573346;
}

void f_00573448(void) /* sub_573448 */
{
    FN_ENTER(0x00573448);
    /* 00573448: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00573449: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057344a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057344b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057344c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057344f: mov edi, ecx */ r_edi = r_ecx;
    /* 00573451: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00573453: mov ecx, edi */ r_ecx = r_edi;
    /* 00573455: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057345a: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057345f: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x573462u); call_ind(t); }
    /* 00573462: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573464: je 0x573566 */ if (fZ) goto L_00573566;
L_0057346a:; BB(0x0057346a);
    /* 0057346a: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 00573471: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00573474: mov ecx, edi */ r_ecx = r_edi;
    /* 00573476: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0057347e: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 00573486: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573489: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x57348eu); f_00520cf8();
    /* 0057348e: mov eax, dword ptr [edi + 0x370] */ r_eax = R32((u32)(r_edi+0x370u));
    /* 00573494: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573497: jne 0x5734c5 */ if (!fZ) goto L_005734c5;
L_00573499:; BB(0x00573499);
    /* 00573499: mov ebx, dword ptr [edi + 0x24] */ r_ebx = R32((u32)(r_edi+0x24u));
    /* 0057349c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0057349e: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 005734a1: mov ebp, dword ptr [edx + 0x14] */ r_ebp = R32((u32)(r_edx+0x14u));
    /* 005734a4: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 005734a7: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005734aa: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005734ad: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005734b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005734b2: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005734b5: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005734b8: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005734bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005734bd: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005734c0: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005734c3: jmp 0x5734f4 */ goto L_005734f4;
L_005734c5:; BB(0x005734c5);
    /* 005734c5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005734c8: jne 0x5734f4 */ if (!fZ) goto L_005734f4;
L_005734ca:; BB(0x005734ca);
    /* 005734ca: mov ebx, dword ptr [edi + 0x24] */ r_ebx = R32((u32)(r_edi+0x24u));
    /* 005734cd: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005734cf: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 005734d2: mov ebp, dword ptr [edx + 0x14] */ r_ebp = R32((u32)(r_edx+0x14u));
    /* 005734d5: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 005734d8: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005734db: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005734de: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005734e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005734e3: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005734e6: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005734e9: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005734ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005734ee: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005734f1: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
L_005734f4:; BB(0x005734f4);
    /* 005734f4: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005734f7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5734fcu); f_00829cc8();
    /* 005734fc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x573501u); f_0082d7b0();
    /* 00573501: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00573504: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x573509u); f_0082d838();
    /* 00573509: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0057350c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057350e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x573513u); f_0082d8bc();
    /* 00573513: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x573518u); f_00520d08();
    /* 00573518: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x57351du); f_00578b38();
    /* 0057351d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057351f: call 0x7a9404 */ r_esp -= 4; W32(r_esp, 0x573524u); f_007a9404();
    /* 00573524: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573527: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x57352cu); f_0082e1e8();
    /* 0057352c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057352f: call 0x7a9424 */ r_esp -= 4; W32(r_esp, 0x573534u); f_007a9424();
    /* 00573534: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x573539u); f_0082dab0();
    /* 00573539: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57353eu); f_0082da80();
    /* 0057353e: mov eax, dword ptr [edi + 0x370] */ r_eax = R32((u32)(r_edi+0x370u));
    /* 00573544: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573547: je 0x57354e */ if (fZ) goto L_0057354e;
L_00573549:; BB(0x00573549);
    /* 00573549: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057354c: jne 0x573566 */ if (!fZ) goto L_00573566;
L_0057354e:; BB(0x0057354e);
    /* 0057354e: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00573551: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573553: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 00573556: mov ebx, dword ptr [edi + 0x24] */ r_ebx = R32((u32)(r_edi+0x24u));
    /* 00573559: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057355b: mov dword ptr [eax + 0x14], ebp */ W32((u32)(r_eax+0x14u), r_ebp);
    /* 0057355e: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00573561: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00573563: mov dword ptr [ebp + 0x20], esi */ W32((u32)(r_ebp+0x20u), r_esi);
L_00573566:; BB(0x00573566);
    /* 00573566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00573569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057356a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057356b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057356c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057356d: ret  */ FN_RET(0x00573448); r_esp += 4; return;
}

void f_00573570(void) /* sub_573570 */
{
    FN_ENTER(0x00573570);
    /* 00573570: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00573577: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057357a: je 0x573588 */ if (fZ) goto L_00573588;
L_0057357c:; BB(0x0057357c);
    /* 0057357c: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057357f: je 0x573588 */ if (fZ) goto L_00573588;
L_00573581:; BB(0x00573581);
    /* 00573581: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00573583: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x573588u); f_0051f62c();
L_00573588:; BB(0x00573588);
    /* 00573588: ret  */ FN_RET(0x00573570); r_esp += 4; return;
}

void f_0057358c(void) /* sub_57358C */
{
    FN_ENTER(0x0057358c);
    /* 0057358c: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00573593: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00573596: je 0x5735af */ if (fZ) goto L_005735af;
L_00573598:; BB(0x00573598);
    /* 00573598: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 0057359e: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005735a0: je 0x5735a8 */ if (fZ) goto L_005735a8;
L_005735a2:; BB(0x005735a2);
    /* 005735a2: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5735a7u); f_0051f81c();
    /* 005735a7: ret  */ FN_RET(0x0057358c); r_esp += 4; return;
L_005735a8:; BB(0x005735a8);
    /* 005735a8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005735aa: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5735afu); f_0051f62c();
L_005735af:; BB(0x005735af);
    /* 005735af: ret  */ FN_RET(0x0057358c); r_esp += 4; return;
}

void f_005735b0(void) /* sub_5735B0 */
{
    FN_ENTER(0x005735b0);
    /* 005735b0: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 005735b6: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005735b9: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
    /* 005735bf: ret  */ FN_RET(0x005735b0); r_esp += 4; return;
}

void f_005735c0(void) /* sub_5735C0 */
{
    FN_ENTER(0x005735c0);
    /* 005735c0: mov eax, dword ptr [ecx + 0x464] */ r_eax = R32((u32)(r_ecx+0x464u));
    /* 005735c6: ret  */ FN_RET(0x005735c0); r_esp += 4; return;
}

void f_00573638(void)
{
    FN_ENTER(0x00573638);
    /* 00573638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573639: mov ebp, esp */ r_ebp = r_esp;
    /* 0057363b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057363d: push 0x8d7182 */ { u32 v = 0x8d7182u; r_esp -= 4; W32(r_esp, v); }
    /* 00573642: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00573648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573649: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00573650: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00573653: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00573656: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00573659: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057365c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057365f: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x573664u); f_00482a20();
    /* 00573664: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00573667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573669: jne 0x57367d */ if (!fZ) goto L_0057367d;
L_0057366b:; BB(0x0057366b);
    /* 0057366b: push 0x9bea98 */ { u32 v = 0x9bea98u; r_esp -= 4; W32(r_esp, v); }
    /* 00573670: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x573675u); f_0051f6b0();
    /* 00573675: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00573676: mov dword ptr [0xa73f44], eax */ W32((u32)(0xa73f44u), r_eax);
    /* 0057367b: jmp 0x57368d */ goto L_0057368d;
L_0057367d:; BB(0x0057367d);
    /* 0057367d: push 0x9bea5c */ { u32 v = 0x9bea5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00573682: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x573687u); f_0051f6b0();
    /* 00573687: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00573688: mov dword ptr [0xa73f44], eax */ W32((u32)(0xa73f44u), r_eax);
L_0057368d:; BB(0x0057368d);
    /* 0057368d: mov dword ptr [0xa73f80], 0 */ W32((u32)(0xa73f80u), 0x0u);
    /* 00573697: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00573699: mov dword ptr [0xa73f90], eax */ W32((u32)(0xa73f90u), r_eax);
    /* 0057369e: mov dword ptr [0xa73f84], 0 */ W32((u32)(0xa73f84u), 0x0u);
    /* 005736a8: mov dword ptr [0xa73f8c], eax */ W32((u32)(0xa73f8cu), r_eax);
    /* 005736ad: mov dword ptr [0xa73f88], 0 */ W32((u32)(0xa73f88u), 0x0u);
    /* 005736b7: mov dword ptr [0xa73f7c], eax */ W32((u32)(0xa73f7cu), r_eax);
    /* 005736bc: mov dword ptr [0xa73f78], eax */ W32((u32)(0xa73f78u), r_eax);
    /* 005736c1: call 0x5742ac */ r_esp -= 4; W32(r_esp, 0x5736c6u); f_005742ac();
    /* 005736c6: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x5736cbu); f_0052d360();
    /* 005736cb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005736cd:; BB(0x005736cd);
    /* 005736cd: push dword ptr [ebx*4 + 0x926b44] */ { u32 v = R32((u32)(r_ebx*4+0x926b44u)); r_esp -= 4; W32(r_esp, v); }
    /* 005736d4: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5736d9u); f_0077a684();
    /* 005736d9: push dword ptr [ebx*4 + 0x926b38] */ { u32 v = R32((u32)(r_ebx*4+0x926b38u)); r_esp -= 4; W32(r_esp, v); }
    /* 005736e0: mov dword ptr [ebx*4 + 0xa73f6c], eax */ W32((u32)(r_ebx*4+0xa73f6cu), r_eax);
    /* 005736e7: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5736ecu); f_0077a698();
    /* 005736ec: push dword ptr [ebx*4 + 0x926b2c] */ { u32 v = R32((u32)(r_ebx*4+0x926b2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005736f3: mov dword ptr [ebx*4 + 0xa73f60], eax */ W32((u32)(r_ebx*4+0xa73f60u), r_eax);
    /* 005736fa: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5736ffu); f_0077a6b4();
    /* 005736ff: push dword ptr [ebx*4 + 0x926b20] */ { u32 v = R32((u32)(r_ebx*4+0x926b20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573706: mov dword ptr [ebx*4 + 0xa73f54], eax */ W32((u32)(r_ebx*4+0xa73f54u), r_eax);
    /* 0057370d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x573712u); f_0077a6cc();
    /* 00573712: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00573715: mov dword ptr [ebx*4 + 0xa73f48], eax */ W32((u32)(r_ebx*4+0xa73f48u), r_eax);
    /* 0057371c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057371f: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00573722: jl 0x5736cd */ if ((fS!=fO)) goto L_005736cd;
L_00573724:; BB(0x00573724);
    /* 00573724: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0057372b: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0057372d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x573732u); f_008581c5();
    /* 00573732: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00573733: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00573736: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573738: je 0x5738a8 */ if (fZ) goto L_005738a8;
L_0057373e:; BB(0x0057373e);
    /* 0057373e: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00573745: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057374c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057374f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00573751: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 00573756: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057375b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057375d: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x573762u); f_005795a0();
    /* 00573762: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00573765: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0057376c: mov dword ptr [0xa73f94], eax */ W32((u32)(0xa73f94u), r_eax);
    /* 00573771: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00573778: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0057377f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00573781: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x573786u); f_008581c5();
    /* 00573786: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00573787: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057378a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057378c: je 0x5738a1 */ if (fZ) goto L_005738a1;
L_00573792:; BB(0x00573792);
    /* 00573792: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00573799: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005737a0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005737a3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005737a5: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005737aa: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005737af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005737b1: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5737b6u); f_005795a0();
    /* 005737b6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005737b9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005737c0: mov dword ptr [0xa73f98], eax */ W32((u32)(0xa73f98u), r_eax);
    /* 005737c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005737cc: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5737d1u); f_0082fa9c();
    /* 005737d1: mov eax, dword ptr [0xa73f44] */ r_eax = R32((u32)(0xa73f44u));
    /* 005737d6: mov ebx, dword ptr [0x9bea24] */ r_ebx = R32((u32)(0x9bea24u));
    /* 005737dc: mov ecx, dword ptr [0xa73f94] */ r_ecx = R32((u32)(0xa73f94u));
    /* 005737e2: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005737e4: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005737ea: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005737ec: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005737f2: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005737f6: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005737f9: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5737feu); f_00579a28();
    /* 005737fe: mov eax, dword ptr [0xa73f44] */ r_eax = R32((u32)(0xa73f44u));
    /* 00573803: mov ebx, dword ptr [0x9bea24] */ r_ebx = R32((u32)(0x9bea24u));
    /* 00573809: mov ecx, dword ptr [0xa73f98] */ r_ecx = R32((u32)(0xa73f98u));
    /* 0057380f: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00573811: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00573817: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00573819: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0057381f: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573823: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573826: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x57382bu); f_00579a28();
    /* 0057382b: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x573830u); f_0082faac();
    /* 00573830: mov eax, dword ptr [0x926ad0] */ r_eax = R32((u32)(0x926ad0u));
    /* 00573835: movzx edx, word ptr [0x926ad4] */ r_edx = (u32)R16((u32)(0x926ad4u));
    /* 0057383c: movzx ecx, word ptr [0x926ad6] */ r_ecx = (u32)R16((u32)(0x926ad6u));
    /* 00573843: movzx ebx, word ptr [0x926ad8] */ r_ebx = (u32)R16((u32)(0x926ad8u));
    /* 0057384a: mov edi, dword ptr [0xa73f44] */ r_edi = R32((u32)(0xa73f44u));
    /* 00573850: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00573856: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00573859: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0057385d: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00573863: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 00573867: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0057386b: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0057386e: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00573871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573874: push dword ptr [0x9be94c] */ { u32 v = R32((u32)(0x9be94cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057387a: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057387d: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573880: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00573882: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x573887u); f_00608470();
    /* 00573887: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057388a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057388d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00573890: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00573893: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00573896: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057389d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057389f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005738a0: ret  */ FN_RET(0x00573638); r_esp += 4; return;
L_005738a1:; BB(0x005738a1);
    /* 005738a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005738a3: jmp 0x5737c0 */ f_005737c0(); return;
L_005738a8:; BB(0x005738a8);
    /* 005738a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005738aa: jmp 0x57376c */ f_0057376c(); return;
}

void f_005738b0(void) /* sub_5738B0 */
{
    FN_ENTER(0x005738b0);
    /* 005738b0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005738b4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005738b7: je 0x5738c8 */ if (fZ) goto L_005738c8;
L_005738b9:; BB(0x005738b9);
    /* 005738b9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005738bc: jne 0x5738c5 */ if (!fZ) goto L_005738c5;
L_005738be:; BB(0x005738be);
    /* 005738be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005738c0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5738c5u); f_0051f62c();
L_005738c5:; BB(0x005738c5);
    /* 005738c5: ret 4 */ FN_RET(0x005738b0); r_esp += 8; return;
L_005738c8:; BB(0x005738c8);
    /* 005738c8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005738ca: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5738d0u); call_ind(t); }
    /* 005738d0: ret 4 */ FN_RET(0x005738b0); r_esp += 8; return;
}

void f_005738d4(void) /* sub_5738D4 */
{
    FN_ENTER(0x005738d4);
    /* 005738d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005738d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005738d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005738d9: call 0x5738f8 */ r_esp -= 4; W32(r_esp, 0x5738deu); f_005738f8();
    /* 005738de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005738e2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005738e4: jne 0x5738ea */ if (!fZ) goto L_005738ea;
L_005738e6:; BB(0x005738e6);
    /* 005738e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005738e7: ret 4 */ FN_RET(0x005738d4); r_esp += 8; return;
L_005738ea:; BB(0x005738ea);
    /* 005738ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005738eb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5738f0u); f_005c2f74();
    /* 005738f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005738f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005738f2: ret 4 */ FN_RET(0x005738d4); r_esp += 8; return;
}

void f_005738f8(void) /* sub_5738F8 */
{
    FN_ENTER(0x005738f8);
    /* 005738f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005738f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005738fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005738fd: push 0x8d719c */ { u32 v = 0x8d719cu; r_esp -= 4; W32(r_esp, v); }
    /* 00573902: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00573908: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573909: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00573910: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00573913: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00573916: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00573919: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057391c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057391f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00573922: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00573925: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 0057392b: mov dword ptr [ecx], 0xb06540 */ W32((u32)(r_ecx), 0xb06540u);
    /* 00573931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573933: je 0x57394f */ if (fZ) goto L_0057394f;
L_00573935:; BB(0x00573935);
    /* 00573935: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00573938: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0057393c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00573941: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00573945: mov dword ptr [ecx + 0x110], 0 */ W32((u32)(r_ecx+0x110u), 0x0u);
L_0057394f:; BB(0x0057394f);
    /* 0057394f: mov edx, dword ptr [ecx + 0x114] */ r_edx = R32((u32)(r_ecx+0x114u));
    /* 00573955: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573957: je 0x573973 */ if (fZ) goto L_00573973;
L_00573959:; BB(0x00573959);
    /* 00573959: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057395c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00573960: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00573965: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00573969: mov dword ptr [ecx + 0x114], 0 */ W32((u32)(r_ecx+0x114u), 0x0u);
L_00573973:; BB(0x00573973);
    /* 00573973: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057397a: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x57397fu); f_005219f0();
    /* 0057397f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00573982: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00573989: mov esp, ebp */ r_esp = r_ebp;
    /* 0057398b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057398c: ret  */ FN_RET(0x005738f8); r_esp += 4; return;
}

void f_00573990(void) /* sub_573990 */
{
    FN_ENTER(0x00573990);
    /* 00573990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573991: mov ebp, esp */ r_ebp = r_esp;
    /* 00573993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00573995: push 0x8d71b8 */ { u32 v = 0x8d71b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057399a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005739a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005739a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005739a8: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005739ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005739ae: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 005739b1: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 005739b4: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 005739b7: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005739ba: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005739bd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005739c0: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 005739c3: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005739c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005739c7: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005739ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005739cb: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005739ce: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005739d1: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005739d4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005739d7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005739da: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005739dd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005739e0: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x5739e5u); f_00521bbc();
    /* 005739e5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005739ec: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005739ef: mov dword ptr [edx], 0xb06540 */ W32((u32)(r_edx), 0xb06540u);
    /* 005739f5: mov eax, dword ptr [0x9beae0] */ r_eax = R32((u32)(0x9beae0u));
    /* 005739fa: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005739fd: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x573a02u); f_00520e6c();
    /* 00573a02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573a04: je 0x573a15 */ if (fZ) goto L_00573a15;
L_00573a06:; BB(0x00573a06);
    /* 00573a06: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00573a09: mov dword ptr [edx + 0xf0], 5 */ W32((u32)(r_edx+0xf0u), 0x5u);
    /* 00573a13: jmp 0x573a57 */ goto L_00573a57;
L_00573a15:; BB(0x00573a15);
    /* 00573a15: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00573a17: call 0x5735c0 */ r_esp -= 4; W32(r_esp, 0x573a1cu); f_005735c0();
    /* 00573a1c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573a1f: jne 0x573a30 */ if (!fZ) goto L_00573a30;
L_00573a21:; BB(0x00573a21);
    /* 00573a21: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00573a24: mov dword ptr [edx + 0xf0], 2 */ W32((u32)(r_edx+0xf0u), 0x2u);
    /* 00573a2e: jmp 0x573a57 */ goto L_00573a57;
L_00573a30:; BB(0x00573a30);
    /* 00573a30: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00573a33: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573a36: jne 0x573a44 */ if (!fZ) goto L_00573a44;
L_00573a38:; BB(0x00573a38);
    /* 00573a38: mov dword ptr [edx + 0xf0], 3 */ W32((u32)(r_edx+0xf0u), 0x3u);
    /* 00573a42: jmp 0x573a57 */ goto L_00573a57;
L_00573a44:; BB(0x00573a44);
    /* 00573a44: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00573a47: mov dword ptr [edx + 0xf0], 0 */ W32((u32)(r_edx+0xf0u), 0x0u);
    /* 00573a51: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
L_00573a57:; BB(0x00573a57);
    /* 00573a57: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00573a5a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00573a5c: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 00573a62: call 0x5735c0 */ r_esp -= 4; W32(r_esp, 0x573a67u); f_005735c0();
    /* 00573a67: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573a6a: jne 0x573a7b */ if (!fZ) goto L_00573a7b;
L_00573a6c:; BB(0x00573a6c);
    /* 00573a6c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00573a6f: mov dword ptr [edx + 0x104], 0x20a */ W32((u32)(r_edx+0x104u), 0x20au);
    /* 00573a79: jmp 0x573a99 */ goto L_00573a99;
L_00573a7b:; BB(0x00573a7b);
    /* 00573a7b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00573a7e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573a81: jne 0x573a8f */ if (!fZ) goto L_00573a8f;
L_00573a83:; BB(0x00573a83);
    /* 00573a83: mov dword ptr [edx + 0x104], 0x209 */ W32((u32)(r_edx+0x104u), 0x209u);
    /* 00573a8d: jmp 0x573a99 */ goto L_00573a99;
L_00573a8f:; BB(0x00573a8f);
    /* 00573a8f: mov dword ptr [edx + 0x104], 0x208 */ W32((u32)(r_edx+0x104u), 0x208u);
L_00573a99:; BB(0x00573a99);
    /* 00573a99: fld dword ptr [0x926dc0] */ FPUSH(R_F32((u32)(0x926dc0u)));
    /* 00573a9f: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00573aa5: mov edx, ebx */ r_edx = r_ebx;
    /* 00573aa7: mov dword ptr [eax + 0xc], 0x40000000 */ W32((u32)(r_eax+0xcu), 0x40000000u);
    /* 00573aae: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00573ab1: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00573ab5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00573ab8: mov word ptr [eax + 0xb0], bx */ W16((u32)(r_eax+0xb0u), (u16)r_ebx);
    /* 00573abf: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00573ac1: mov dword ptr [eax + 0xb4], esi */ W32((u32)(r_eax+0xb4u), r_esi);
    /* 00573ac7: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00573aca: mov dword ptr [eax + 0xb8], edi */ W32((u32)(r_eax+0xb8u), r_edi);
    /* 00573ad0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00573ad3: mov dword ptr [eax + 0xbc], ecx */ W32((u32)(r_eax+0xbcu), r_ecx);
    /* 00573ad9: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 00573adc: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 00573adf: mov dword ptr [eax + 0xd8], 0 */ W32((u32)(r_eax+0xd8u), 0x0u);
    /* 00573ae9: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 00573aec: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 00573aef: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
    /* 00573af9: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 00573b03: fsub dword ptr [edx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x4u));
    /* 00573b06: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00573b09: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00573b0b: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 00573b0d: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 00573b10: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 00573b13: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00573b16: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00573b19: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 00573b1c: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00573b1f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x573b24u); f_0083173c();
    /* 00573b24: fld dword ptr [0x926dc8] */ FPUSH(R_F32((u32)(0x926dc8u)));
    /* 00573b2a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00573b2c: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00573b2e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00573b30: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00573b31: je 0x573b45 */ if (fZ) goto L_00573b45;
L_00573b33:; BB(0x00573b33);
    /* 00573b33: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00573b35: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 00573b38: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x573b3du); f_0082df08();
    /* 00573b3d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00573b3f: fld dword ptr [0x926dc8] */ FPUSH(R_F32((u32)(0x926dc8u)));
L_00573b45:; BB(0x00573b45);
    /* 00573b45: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00573b48: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 00573b4b: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00573b4e: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 00573b51: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 00573b54: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00573b57: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00573b5a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00573b5d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00573b5f: fstp dword ptr [eax + 0xf8] */ W_F32((u32)(r_eax+0xf8u), ST(0)); FPOP();
    /* 00573b65: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00573b68: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00573b6a: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 00573b70: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00573b73: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00573b75: fstp dword ptr [eax + 0xc4] */ W_F32((u32)(r_eax+0xc4u), ST(0)); FPOP();
    /* 00573b7b: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00573b7e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00573b80: fadd dword ptr [0x926dbc] */ ST(0) = ST(0) + R_F32((u32)(0x926dbcu));
    /* 00573b86: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00573b88: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00573b8a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00573b8c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00573b8e: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00573b90: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00573b92: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00573b94: fstp dword ptr [eax + 0xc8] */ W_F32((u32)(r_eax+0xc8u), ST(0)); FPOP();
    /* 00573b9a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00573b9c: fstp dword ptr [eax + 0xcc] */ W_F32((u32)(r_eax+0xccu), ST(0)); FPOP();
    /* 00573ba2: fstp dword ptr [eax + 0xd0] */ W_F32((u32)(r_eax+0xd0u), ST(0)); FPOP();
    /* 00573ba8: fstp dword ptr [eax + 0xd4] */ W_F32((u32)(r_eax+0xd4u), ST(0)); FPOP();
    /* 00573bae: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00573bb3: mov dword ptr [eax + 0xe8], ecx */ W32((u32)(r_eax+0xe8u), r_ecx);
    /* 00573bb9: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 00573bc3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00573bc5: mov dword ptr [eax + 0xfc], edx */ W32((u32)(r_eax+0xfcu), r_edx);
    /* 00573bcb: mov dword ptr [eax + 0x100], edx */ W32((u32)(r_eax+0x100u), r_edx);
    /* 00573bd1: mov dword ptr [eax + 0x110], edx */ W32((u32)(r_eax+0x110u), r_edx);
    /* 00573bd7: mov dword ptr [eax + 0x114], edx */ W32((u32)(r_eax+0x114u), r_edx);
    /* 00573bdd: mov dword ptr [eax + 0x10c], ecx */ W32((u32)(r_eax+0x10cu), r_ecx);
    /* 00573be3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00573be6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00573bed: mov esp, ebp */ r_esp = r_ebp;
    /* 00573bef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573bf0: ret 0x18 */ FN_RET(0x00573990); r_esp += 28; return;
}

void f_00573bf4(void) /* sub_573BF4 */
{
    FN_ENTER(0x00573bf4);
    /* 00573bf4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00573bf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00573bf6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573bf7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00573bf8: mov edi, ecx */ r_edi = r_ecx;
    /* 00573bfa: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00573c00: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00573c02: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00573c06: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00573c08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573c0a: je 0x573cda */ if (fZ) goto L_00573cda;
L_00573c10:; BB(0x00573c10);
    /* 00573c10: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x573c15u); f_007b51c4();
    /* 00573c15: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00573c18: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00573c1a: je 0x573c2f */ if (fZ) goto L_00573c2f;
L_00573c1c:; BB(0x00573c1c);
    /* 00573c1c: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573c20: mov ecx, edi */ r_ecx = r_edi;
    /* 00573c22: call 0x7b8618 */ r_esp -= 4; W32(r_esp, 0x573c27u); f_007b8618();
    /* 00573c27: mov ebp, 0x80000 */ r_ebp = 0x80000u;
    /* 00573c2c: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
L_00573c2f:; BB(0x00573c2f);
    /* 00573c2f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00573c31: je 0x573c40 */ if (fZ) goto L_00573c40;
L_00573c33:; BB(0x00573c33);
    /* 00573c33: mov ecx, edi */ r_ecx = r_edi;
    /* 00573c35: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x573c3au); f_007b8980();
    /* 00573c3a: or ebp, 0x100000 */ {  u32 a = r_ebp; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_00573c40:; BB(0x00573c40);
    /* 00573c40: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00573c46: test dword ptr [eax + 0x18], ebp */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00573c49: je 0x573cd1 */ if (fZ) goto L_00573cd1;
L_00573c4f:; BB(0x00573c4f);
    /* 00573c4f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00573c51:; BB(0x00573c51);
    /* 00573c51: mov ebx, dword ptr [ebp + 0xaad6e0] */ r_ebx = R32((u32)(r_ebp+0xaad6e0u));
    /* 00573c57: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00573c5a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00573c5c: je 0x573cd1 */ if (fZ) goto L_00573cd1;
L_00573c5e:; BB(0x00573c5e);
    /* 00573c5e: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00573c65: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573c68: jne 0x573ccc */ if (!fZ) goto L_00573ccc;
L_00573c6a:; BB(0x00573c6a);
    /* 00573c6a: cmp ebx, dword ptr [edi + 0xac] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0xacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573c70: je 0x573ccc */ if (fZ) goto L_00573ccc;
L_00573c72:; BB(0x00573c72);
    /* 00573c72: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573c75: mov ecx, edi */ r_ecx = r_edi;
    /* 00573c77: call 0x521ba4 */ r_esp -= 4; W32(r_esp, 0x573c7cu); f_00521ba4();
    /* 00573c7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573c7e: je 0x573ccc */ if (fZ) goto L_00573ccc;
L_00573c80:; BB(0x00573c80);
    /* 00573c80: fld dword ptr [edi + 0xb8] */ FPUSH(R_F32((u32)(r_edi+0xb8u)));
    /* 00573c86: fsub dword ptr [ebx + 0x304] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x304u));
    /* 00573c8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00573c8d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00573c90: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x573c95u); f_0082e900();
    /* 00573c95: fcomp dword ptr [0x926db4] */ fx_compare(ST(0), R_F32((u32)(0x926db4u))); FPOP();
    /* 00573c9b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00573c9d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00573c9e: ja 0x573ccc */ if ((!fC&&!fZ)) goto L_00573ccc;
L_00573ca0:; BB(0x00573ca0);
    /* 00573ca0: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00573ca4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573ca6: je 0x573cb6 */ if (fZ) goto L_00573cb6;
L_00573ca8:; BB(0x00573ca8);
    /* 00573ca8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00573ca9: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00573cad: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x573cb2u); f_00521b18();
    /* 00573cb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573cb4: je 0x573ccc */ if (fZ) goto L_00573ccc;
L_00573cb6:; BB(0x00573cb6);
    /* 00573cb6: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573cba: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00573cbe: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00573cc0: mov ecx, edi */ r_ecx = r_edi;
    /* 00573cc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573cc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00573cc4: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x573cc7u); call_ind(t); }
    /* 00573cc7: mov esi, 1 */ r_esi = 0x1u;
L_00573ccc:; BB(0x00573ccc);
    /* 00573ccc: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00573ccf: jl 0x573c51 */ if ((fS!=fO)) goto L_00573c51;
L_00573cd1:; BB(0x00573cd1);
    /* 00573cd1: mov eax, esi */ r_eax = r_esi;
    /* 00573cd3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00573cd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573cd5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00573cd6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00573cd7: ret 0x10 */ FN_RET(0x00573bf4); r_esp += 20; return;
L_00573cda:; BB(0x00573cda);
    /* 00573cda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00573cdc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00573cdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573cde: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00573cdf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00573ce0: ret 0x10 */ FN_RET(0x00573bf4); r_esp += 20; return;
}

void f_00573ce4(void) /* sub_573CE4 */
{
    FN_ENTER(0x00573ce4);
    /* 00573ce4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00573ce5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00573ce6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573ce7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00573ce8: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00573ceb: mov edi, ecx */ r_edi = r_ecx;
    /* 00573ced: mov eax, dword ptr [edi + 0x100] */ r_eax = R32((u32)(r_edi+0x100u));
    /* 00573cf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573cf5: jne 0x573db8 */ if (!fZ) goto L_00573db8;
L_00573cfb:; BB(0x00573cfb);
    /* 00573cfb: mov edx, dword ptr [edi + 0xfc] */ r_edx = R32((u32)(r_edi+0xfcu));
    /* 00573d01: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00573d04: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00573d08: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00573d0c: fcomp dword ptr [0x926db0] */ fx_compare(ST(0), R_F32((u32)(0x926db0u))); FPOP();
    /* 00573d12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00573d14: mov dword ptr [edi + 0xfc], edx */ W32((u32)(r_edi+0xfcu), r_edx);
    /* 00573d1a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00573d1b: jae 0x573da3 */ if (!fC) goto L_00573da3;
L_00573d21:; BB(0x00573d21);
    /* 00573d21: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00573d24: fld dword ptr [edi + 0xf8] */ FPUSH(R_F32((u32)(r_edi+0xf8u)));
    /* 00573d2a: fsub dword ptr [0x926dac] */ ST(0) = ST(0) - R_F32((u32)(0x926dacu));
    /* 00573d30: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00573d36: mov ebx, dword ptr [edi + 0xb8] */ r_ebx = R32((u32)(r_edi+0xb8u));
    /* 00573d3c: mov ebp, dword ptr [edi + 0xbc] */ r_ebp = R32((u32)(r_edi+0xbcu));
    /* 00573d42: fstp dword ptr [edi + 0xf8] */ W_F32((u32)(r_edi+0xf8u), ST(0)); FPOP();
    /* 00573d48: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00573d4b: lea edx, [edi + 0xcc] */ r_edx = (u32)(r_edi+0xccu);
    /* 00573d51: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00573d55: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00573d59: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x573d5eu); f_0082ebac();
    /* 00573d5e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00573d62: fsub dword ptr [0x926dbc] */ ST(0) = ST(0) - R_F32((u32)(0x926dbcu));
    /* 00573d68: fadd dword ptr [edi + 0xf8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xf8u));
    /* 00573d6e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00573d72: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00573d75: lea esi, [edi + 0xb4] */ r_esi = (u32)(r_edi+0xb4u);
    /* 00573d7b: push 0x1eff */ { u32 v = 0x1effu; r_esp -= 4; W32(r_esp, v); }
    /* 00573d80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573d81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00573d82: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x573d87u); f_0077fffc();
    /* 00573d87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00573d8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573d8c: je 0x573df0 */ if (fZ) goto L_00573df0;
L_00573d8e:; BB(0x00573d8e);
    /* 00573d8e: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00573d92: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00573d97: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00573d9b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00573d9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00573d9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573da0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00573da1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00573da2: ret  */ FN_RET(0x00573ce4); r_esp += 4; return;
L_00573da3:; BB(0x00573da3);
    /* 00573da3: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00573da7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00573dac: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00573db0: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00573db3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00573db4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573db5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00573db6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00573db7: ret  */ FN_RET(0x00573ce4); r_esp += 4; return;
L_00573db8:; BB(0x00573db8);
    /* 00573db8: lea esi, [edi + 0xb4] */ r_esi = (u32)(r_edi+0xb4u);
L_00573dbe:; BB(0x00573dbe);
    /* 00573dbe: mov ecx, dword ptr [edi + 0x110] */ r_ecx = R32((u32)(r_edi+0x110u));
    /* 00573dc4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573dc6: je 0x573fa2 */ if (fZ) goto L_00573fa2;
L_00573dcc:; BB(0x00573dcc);
    /* 00573dcc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00573dcd: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x573dd2u); f_00508db8();
L_00573dd2:; BB(0x00573dd2);
    /* 00573dd2: mov eax, dword ptr [edi + 0x114] */ r_eax = R32((u32)(r_edi+0x114u));
    /* 00573dd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573dda: je 0x573f56 */ if (fZ) goto L_00573f56;
L_00573de0:; BB(0x00573de0);
    /* 00573de0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00573de1: mov ecx, eax */ r_ecx = r_eax;
    /* 00573de3: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x573de8u); f_00508db8();
L_00573de8:; BB(0x00573de8);
    /* 00573de8: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00573deb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00573dec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573ded: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00573dee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00573def: ret  */ FN_RET(0x00573ce4); r_esp += 4; return;
L_00573df0:; BB(0x00573df0);
    /* 00573df0: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00573df5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00573df6: fld dword ptr [edi + 0xb4] */ FPUSH(R_F32((u32)(r_edi+0xb4u)));
    /* 00573dfc: fadd dword ptr [edi + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc0u));
    /* 00573e02: fld dword ptr [edi + 0xb8] */ FPUSH(R_F32((u32)(r_edi+0xb8u)));
    /* 00573e08: fadd dword ptr [edi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc4u));
    /* 00573e0e: fld dword ptr [edi + 0xbc] */ FPUSH(R_F32((u32)(r_edi+0xbcu)));
    /* 00573e14: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 00573e1a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00573e1c: fstp dword ptr [edi + 0xb4] */ W_F32((u32)(r_edi+0xb4u), ST(0)); FPOP();
    /* 00573e22: fstp dword ptr [edi + 0xb8] */ W_F32((u32)(r_edi+0xb8u), ST(0)); FPOP();
    /* 00573e28: fstp dword ptr [edi + 0xbc] */ W_F32((u32)(r_edi+0xbcu), ST(0)); FPOP();
    /* 00573e2e: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x573e33u); f_00780630();
    /* 00573e33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00573e36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573e38: je 0x573f44 */ if (fZ) goto L_00573f44;
L_00573e3e:; BB(0x00573e3e);
    /* 00573e3e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00573e41: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00573e44: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00573e47: mov dword ptr [edi + 0x3c], ebx */ W32((u32)(r_edi+0x3cu), r_ebx);
    /* 00573e4a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00573e4d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00573e50: mov dword ptr [edi + 0xd8], eax */ W32((u32)(r_edi+0xd8u), r_eax);
    /* 00573e56: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 00573e59: mov dword ptr [edi + 0xdc], ebp */ W32((u32)(r_edi+0xdcu), r_ebp);
    /* 00573e5f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00573e62: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 00573e68: mov dword ptr [edi + 0x10c], 1 */ W32((u32)(r_edi+0x10cu), 0x1u);
L_00573e72:; BB(0x00573e72);
    /* 00573e72: fsubr dword ptr [edi + 0xb8] */ ST(0) = R_F32((u32)(r_edi+0xb8u)) - ST(0);
    /* 00573e78: fcom dword ptr [0x926da8] */ fx_compare(ST(0), R_F32((u32)(0x926da8u))); 
    /* 00573e7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00573e80: mov edx, dword ptr [edi + 0xb4] */ r_edx = R32((u32)(r_edi+0xb4u));
    /* 00573e86: mov ebx, dword ptr [edi + 0xbc] */ r_ebx = R32((u32)(r_edi+0xbcu));
    /* 00573e8c: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00573e8f: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00573e95: mov dword ptr [edi + 0x40], ebx */ W32((u32)(r_edi+0x40u), r_ebx);
    /* 00573e98: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00573e99: jbe 0x573eb5 */ if ((fC||fZ)) goto L_00573eb5;
L_00573e9b:; BB(0x00573e9b);
    /* 00573e9b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00573e9e: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00573ea1: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00573ea4: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
    /* 00573eaa: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00573ead: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00573eb0: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00573eb3: jmp 0x573ecd */ goto L_00573ecd;
L_00573eb5:; BB(0x00573eb5);
    /* 00573eb5: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00573eb8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00573ebb: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00573ebe: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
    /* 00573ec4: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00573ec7: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00573eca: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
L_00573ecd:; BB(0x00573ecd);
    /* 00573ecd: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
    /* 00573ed3: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 00573ed6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00573ed8: lea ebp, [edi + 0xe4] */ r_ebp = (u32)(r_edi+0xe4u);
    /* 00573ede: lea ebx, [edi + 0xf0] */ r_ebx = (u32)(r_edi+0xf0u);
    /* 00573ee4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00573ee5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573ee6: mov ecx, edi */ r_ecx = r_edi;
    /* 00573ee8: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x573eebu); call_ind(t); }
    /* 00573eeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573eed: je 0x573dbe */ if (fZ) goto L_00573dbe;
L_00573ef3:; BB(0x00573ef3);
    /* 00573ef3: movzx eax, word ptr [edi + 0xb0] */ r_eax = (u32)R16((u32)(r_edi+0xb0u));
    /* 00573efa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573efb: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x573f00u); f_007b4d18();
    /* 00573f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00573f01: mov ecx, eax */ r_ecx = r_eax;
    /* 00573f03: call 0x5735b0 */ r_esp -= 4; W32(r_esp, 0x573f08u); f_005735b0();
    /* 00573f08: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 00573f0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573f10: jne 0x573f2f */ if (!fZ) goto L_00573f2f;
L_00573f12:; BB(0x00573f12);
    /* 00573f12: mov eax, dword ptr [edi + 0x108] */ r_eax = R32((u32)(r_edi+0x108u));
    /* 00573f18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573f1a: je 0x573f2f */ if (fZ) goto L_00573f2f;
L_00573f1c:; BB(0x00573f1c);
    /* 00573f1c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00573f1e: mov dword ptr [edi + 0xf0], 0x12 */ W32((u32)(r_edi+0xf0u), 0x12u);
    /* 00573f28: mov ecx, edi */ r_ecx = r_edi;
    /* 00573f2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00573f2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573f2c: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x573f2fu); call_ind(t); }
L_00573f2f:; BB(0x00573f2f);
    /* 00573f2f: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00573f33: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00573f38: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00573f3c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00573f3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00573f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573f41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00573f42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00573f43: ret  */ FN_RET(0x00573ce4); r_esp += 4; return;
L_00573f44:; BB(0x00573f44);
    /* 00573f44: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00573f47: mov dword ptr [edi + 0x10c], 0 */ W32((u32)(r_edi+0x10cu), 0x0u);
    /* 00573f51: jmp 0x573e72 */ goto L_00573e72;
L_00573f56:; BB(0x00573f56);
    /* 00573f56: lea ebx, [esp + 0x18] */ r_ebx = (u32)(r_esp+0x18u);
    /* 00573f5a: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00573f60: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00573f62: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00573f66: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00573f6b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00573f6f: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00573f73: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00573f75: push dword ptr [edi + 0x104] */ { u32 v = R32((u32)(r_edi+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573f7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00573f7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00573f7d: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x573f82u); f_00509dc4();
    /* 00573f82: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00573f85: mov dword ptr [edi + 0x114], eax */ W32((u32)(r_edi+0x114u), r_eax);
    /* 00573f8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573f8d: je 0x573de8 */ if (fZ) goto L_00573de8;
L_00573f93:; BB(0x00573f93);
    /* 00573f93: mov ecx, eax */ r_ecx = r_eax;
    /* 00573f95: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x573f9au); f_00508f48();
    /* 00573f9a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00573f9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00573f9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573f9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00573fa0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00573fa1: ret  */ FN_RET(0x00573ce4); r_esp += 4; return;
L_00573fa2:; BB(0x00573fa2);
    /* 00573fa2: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 00573fa6: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00573fac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00573fae: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00573fb2: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00573fb7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00573fbb: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00573fbf: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00573fc1: push 0x207 */ { u32 v = 0x207u; r_esp -= 4; W32(r_esp, v); }
    /* 00573fc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00573fc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00573fc8: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x573fcdu); f_00509dc4();
    /* 00573fcd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00573fd0: mov dword ptr [edi + 0x110], eax */ W32((u32)(r_edi+0x110u), r_eax);
    /* 00573fd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573fd8: je 0x573dd2 */ if (fZ) goto L_00573dd2;
L_00573fde:; BB(0x00573fde);
    /* 00573fde: mov ecx, eax */ r_ecx = r_eax;
    /* 00573fe0: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x573fe5u); f_00508f48();
    /* 00573fe5: jmp 0x573dd2 */ goto L_00573dd2;
}

void f_00573fec(void) /* sub_573FEC */
{
    FN_ENTER(0x00573fec);
    /* 00573fec: mov eax, dword ptr [ecx + 0x10c] */ r_eax = R32((u32)(r_ecx+0x10cu));
    /* 00573ff2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00573ff4: je 0x57400d */ if (fZ) goto L_0057400d;
L_00573ff6:; BB(0x00573ff6);
    /* 00573ff6: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00573ff9: add ecx, 0xd8 */ {  u32 a = r_ecx; u32 b = 0xd8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00573fff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00574001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574002: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00574004: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00574005: call 0x520d18 */ r_esp -= 4; W32(r_esp, 0x57400au); f_00520d18();
    /* 0057400a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0057400d:; BB(0x0057400d);
    /* 0057400d: ret  */ FN_RET(0x00573fec); r_esp += 4; return;
}

