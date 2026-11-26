#include "protos.h"

void f_00631078(void) /* sub_631078 */
{
    FN_ENTER(0x00631078);
    /* 00631078: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631079: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063107b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063107d: call 0x63109c */ r_esp -= 4; W32(r_esp, 0x631082u); f_0063109c();
    /* 00631082: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00631086: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631088: jne 0x63108e */ if (!fZ) goto L_0063108e;
L_0063108a:; BB(0x0063108a);
    /* 0063108a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063108b: ret 4 */ FN_RET(0x00631078); r_esp += 8; return;
L_0063108e:; BB(0x0063108e);
    /* 0063108e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063108f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x631094u); f_005c2f74();
    /* 00631094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631096: ret 4 */ FN_RET(0x00631078); r_esp += 8; return;
}

void f_0063109c(void) /* sub_63109C */
{
    FN_ENTER(0x0063109c);
    /* 0063109c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063109d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063109f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006310a1: push 0x8e388c */ { u32 v = 0x8e388cu; r_esp -= 4; W32(r_esp, v); }
    /* 006310a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006310ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006310ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006310b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006310b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006310ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006310bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006310c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006310c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006310c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006310c9: mov dword ptr [ecx], 0xb2b040 */ W32((u32)(r_ecx), 0xb2b040u);
    /* 006310cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006310d6: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x6310dbu); f_006131f4();
    /* 006310db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006310de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006310e5: mov esp, ebp */ r_esp = r_ebp;
    /* 006310e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006310e8: ret  */ FN_RET(0x0063109c); r_esp += 4; return;
}

void f_006310ec(void) /* sub_6310EC */
{
    FN_ENTER(0x006310ec);
    /* 006310ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006310ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006310ee: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006310f0: push dword ptr [ebp + 0xc4] */ { u32 v = R32((u32)(r_ebp+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006310f6: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006310fc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006310ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00631101: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x631104u); call_ind(t); }
    /* 00631104: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631106: je 0x63123d */ if (fZ) goto L_0063123d;
L_0063110c:; BB(0x0063110c);
    /* 0063110c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063110e: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x631113u); f_00835f78();
    /* 00631113: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x631118u); f_0082d7b0();
    /* 00631118: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0063111b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x631120u); f_0082d838();
    /* 00631120: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00631123: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00631125: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63112au); f_0082d8bc();
    /* 0063112a: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0063112d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x631132u); f_00829cc8();
    /* 00631132: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00631135: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 00631138: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63113du); f_0082d7b0();
    /* 0063113d: fld dword ptr [ebp + 0xcc] */ FPUSH(R_F32((u32)(r_ebp+0xccu)));
    /* 00631143: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631146: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0063114e: fchs  */ ST(0) = -ST(0);
    /* 00631150: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00631153: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0063115b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063115d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x631162u); f_00830b74();
    /* 00631162: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631165: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63116au); f_008321d8();
    /* 0063116a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063116b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x631170u); f_0082da80();
    /* 00631170: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x631175u); f_0082dbac();
    /* 00631175: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00631178: mov eax, dword ptr [ebp + 0x84] */ r_eax = R32((u32)(r_ebp+0x84u));
    /* 0063117e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631181: je 0x6312b9 */ if (fZ) goto L_006312b9;
L_00631187:; BB(0x00631187);
    /* 00631187: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0063118a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063118d: je 0x631269 */ if (fZ) goto L_00631269;
L_00631193:; BB(0x00631193);
    /* 00631193: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x631198u); f_0082dab0();
    /* 00631198: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0063119b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6311a0u); f_0082d7b0();
    /* 006311a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006311a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006311a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006311a6: push dword ptr [ebp + 0xcc] */ { u32 v = R32((u32)(r_ebp+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006311ac: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6311b1u); f_00830b74();
    /* 006311b1: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006311b4: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6311b9u); f_008321d8();
    /* 006311b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006311ba: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6311bfu); f_0082da80();
    /* 006311bf: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6311c4u); f_0082dbac();
    /* 006311c4: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 006311c7: mov eax, dword ptr [ebp + 0x84] */ r_eax = R32((u32)(r_ebp+0x84u));
    /* 006311cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006311cf: jne 0x631226 */ if (!fZ) goto L_00631226;
L_006311d1:; BB(0x006311d1);
    /* 006311d1: mov ecx, dword ptr [0xa8efd8] */ r_ecx = R32((u32)(0xa8efd8u));
    /* 006311d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006311d9: je 0x6311e2 */ if (fZ) goto L_006311e2;
L_006311db:; BB(0x006311db);
    /* 006311db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006311dd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006311df: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6311e2u); call_ind(t); }
L_006311e2:; BB(0x006311e2);
    /* 006311e2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6311e7u); f_0082d7b0();
    /* 006311e7: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006311ec: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 006311f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006311f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006311f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006311f6: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x6311fbu); f_0082fa0c();
    /* 006311fb: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006311fe: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x631203u); f_008321d8();
    /* 00631203: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631204: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x631209u); f_0082da80();
    /* 00631209: mov ecx, dword ptr [0xa8efd8] */ r_ecx = R32((u32)(0xa8efd8u));
    /* 0063120f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631211: je 0x631220 */ if (fZ) goto L_00631220;
L_00631213:; BB(0x00631213);
    /* 00631213: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00631215: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x631218u); call_ind(t); }
    /* 00631218: mov eax, dword ptr [ebp + 0x84] */ r_eax = R32((u32)(r_ebp+0x84u));
    /* 0063121e: jmp 0x631226 */ goto L_00631226;
L_00631220:; BB(0x00631220);
    /* 00631220: mov eax, dword ptr [ebp + 0x84] */ r_eax = R32((u32)(r_ebp+0x84u));
L_00631226:; BB(0x00631226);
    /* 00631226: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00631229: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063122c: je 0x631240 */ if (fZ) goto L_00631240;
L_0063122e:; BB(0x0063122e);
    /* 0063122e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x631233u); f_0082dab0();
    /* 00631233: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x631238u); f_0082da80();
    /* 00631238: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x63123du); f_0083603c();
L_0063123d:; BB(0x0063123d);
    /* 0063123d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063123e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063123f: ret  */ FN_RET(0x006310ec); r_esp += 4; return;
L_00631240:; BB(0x00631240);
    /* 00631240: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x631245u); f_0082d7b0();
    /* 00631245: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063124a: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 00631250: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00631252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631254: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x631259u); f_0082fa0c();
    /* 00631259: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063125c: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x631261u); f_008321d8();
    /* 00631261: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631262: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x631267u); f_0082da80();
    /* 00631267: jmp 0x63122e */ goto L_0063122e;
L_00631269:; BB(0x00631269);
    /* 00631269: mov ecx, dword ptr [0xa8efdc] */ r_ecx = R32((u32)(0xa8efdcu));
    /* 0063126f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631271: je 0x63127a */ if (fZ) goto L_0063127a;
L_00631273:; BB(0x00631273);
    /* 00631273: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631275: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00631277: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x63127au); call_ind(t); }
L_0063127a:; BB(0x0063127a);
    /* 0063127a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63127fu); f_0082d7b0();
    /* 0063127f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00631284: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0063128a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063128c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063128d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063128e: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x631293u); f_0082fa0c();
    /* 00631293: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631296: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63129bu); f_008321d8();
    /* 0063129b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063129c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6312a1u); f_0082da80();
    /* 006312a1: mov ecx, dword ptr [0xa8efdc] */ r_ecx = R32((u32)(0xa8efdcu));
    /* 006312a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006312a9: je 0x631193 */ if (fZ) goto L_00631193;
L_006312af:; BB(0x006312af);
    /* 006312af: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006312b1: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6312b4u); call_ind(t); }
    /* 006312b4: jmp 0x631193 */ goto L_00631193;
L_006312b9:; BB(0x006312b9);
    /* 006312b9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6312beu); f_0082d7b0();
    /* 006312be: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006312c3: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 006312c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006312cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006312cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006312cd: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x6312d2u); f_0082fa0c();
    /* 006312d2: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006312d5: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6312dau); f_008321d8();
    /* 006312da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006312db: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6312e0u); f_0082da80();
    /* 006312e0: mov eax, dword ptr [ebp + 0x84] */ r_eax = R32((u32)(r_ebp+0x84u));
    /* 006312e6: jmp 0x631187 */ goto L_00631187;
}

void f_006312ec(void) /* sub_6312EC */
{
    FN_ENTER(0x006312ec);
    /* 006312ec: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006312ef: mov edx, ecx */ r_edx = r_ecx;
    /* 006312f1: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 006312f6: cmp eax, dword ptr [0xa8efe8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8efe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006312fc: je 0x631334 */ if (fZ) goto L_00631334;
L_006312fe:; BB(0x006312fe);
    /* 006312fe: mov dword ptr [0xa8efe8], eax */ W32((u32)(0xa8efe8u), r_eax);
    /* 00631303: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00631306: mov edi, edx */ r_edi = r_edx;
    /* 00631308: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063130a: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0063130e: mov ebp, eax */ r_ebp = r_eax;
L_00631310:; BB(0x00631310);
    /* 00631310: mov ecx, dword ptr [ebp + 0xa8efd8] */ r_ecx = R32((u32)(r_ebp+0xa8efd8u));
    /* 00631316: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00631319: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063131b: je 0x631326 */ if (fZ) goto L_00631326;
L_0063131d:; BB(0x0063131d);
    /* 0063131d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063131f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631321: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00631323: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x631326u); call_ind(t); }
L_00631326:; BB(0x00631326);
    /* 00631326: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631329: jl 0x631310 */ if ((fS!=fO)) goto L_00631310;
L_0063132b:; BB(0x0063132b);
    /* 0063132b: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0063132f: mov edx, edi */ r_edx = r_edi;
    /* 00631331: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00631334:; BB(0x00631334);
    /* 00631334: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0063133a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063133d: je 0x631438 */ if (fZ) goto L_00631438;
L_00631343:; BB(0x00631343);
    /* 00631343: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631346: jne 0x631385 */ if (!fZ) goto L_00631385;
L_00631348:; BB(0x00631348);
    /* 00631348: fld dword ptr [0x932e24] */ FPUSH(R_F32((u32)(0x932e24u)));
    /* 0063134e: fadd dword ptr [edx + 0xd4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xd4u));
    /* 00631354: fcom dword ptr [0x932e18] */ fx_compare(ST(0), R_F32((u32)(0x932e18u))); 
    /* 0063135a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063135c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063135d: jb 0x63137a */ if (fC) goto L_0063137a;
L_0063135f:; BB(0x0063135f);
    /* 0063135f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00631361: mov dword ptr [edx + 0xac], 3 */ W32((u32)(r_edx+0xacu), 0x3u);
    /* 0063136b: mov dword ptr [edx + 0xd4], 0 */ W32((u32)(r_edx+0xd4u), 0x0u);
    /* 00631375: jmp 0x63148c */ goto L_0063148c;
L_0063137a:; BB(0x0063137a);
    /* 0063137a: fstp dword ptr [edx + 0xd4] */ W_F32((u32)(r_edx+0xd4u), ST(0)); FPOP();
    /* 00631380: jmp 0x63148c */ goto L_0063148c;
L_00631385:; BB(0x00631385);
    /* 00631385: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631388: jne 0x6313e1 */ if (!fZ) goto L_006313e1;
L_0063138a:; BB(0x0063138a);
    /* 0063138a: fld dword ptr [edx + 0xcc] */ FPUSH(R_F32((u32)(r_edx+0xccu)));
    /* 00631390: fsub dword ptr [0xa8efd0] */ ST(0) = ST(0) - R_F32((u32)(0xa8efd0u));
    /* 00631396: fcom dword ptr [0x932e20] */ fx_compare(ST(0), R_F32((u32)(0x932e20u))); 
    /* 0063139c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063139e: fld dword ptr [edx + 0xd0] */ FPUSH(R_F32((u32)(r_edx+0xd0u)));
    /* 006313a4: fsub dword ptr [0xa8efd4] */ ST(0) = ST(0) - R_F32((u32)(0xa8efd4u));
    /* 006313aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006313ab: ja 0x6313d0 */ if ((!fC&&!fZ)) goto L_006313d0;
L_006313ad:; BB(0x006313ad);
    /* 006313ad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006313af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006313b1: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 006313bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006313bd: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 006313c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006313c5: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 006313cb: jmp 0x63148c */ goto L_0063148c;
L_006313d0:; BB(0x006313d0);
    /* 006313d0: fstp dword ptr [edx + 0xd0] */ W_F32((u32)(r_edx+0xd0u), ST(0)); FPOP();
    /* 006313d6: fstp dword ptr [edx + 0xcc] */ W_F32((u32)(r_edx+0xccu), ST(0)); FPOP();
    /* 006313dc: jmp 0x63148c */ goto L_0063148c;
L_006313e1:; BB(0x006313e1);
    /* 006313e1: fld dword ptr [0x932e24] */ FPUSH(R_F32((u32)(0x932e24u)));
    /* 006313e7: fadd dword ptr [edx + 0xd4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xd4u));
    /* 006313ed: fcom dword ptr [0x932e1c] */ fx_compare(ST(0), R_F32((u32)(0x932e1cu))); 
    /* 006313f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006313f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006313f6: jb 0x631430 */ if (fC) goto L_00631430;
L_006313f8:; BB(0x006313f8);
    /* 006313f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006313fa: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00631400: mov dword ptr [edx + 0xac], 1 */ W32((u32)(r_edx+0xacu), 0x1u);
    /* 0063140a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063140d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631410: mov dword ptr [edx + 0xd4], 0 */ W32((u32)(r_edx+0xd4u), 0x0u);
    /* 0063141a: jge 0x631424 */ if ((fS==fO)) goto L_00631424;
L_0063141c:; BB(0x0063141c);
    /* 0063141c: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 00631422: jmp 0x63148c */ goto L_0063148c;
L_00631424:; BB(0x00631424);
    /* 00631424: mov dword ptr [edx + 0x84], 0 */ W32((u32)(r_edx+0x84u), 0x0u);
    /* 0063142e: jmp 0x63148c */ goto L_0063148c;
L_00631430:; BB(0x00631430);
    /* 00631430: fstp dword ptr [edx + 0xd4] */ W_F32((u32)(r_edx+0xd4u), ST(0)); FPOP();
    /* 00631436: jmp 0x63148c */ goto L_0063148c;
L_00631438:; BB(0x00631438);
    /* 00631438: fld dword ptr [0xa8efd0] */ FPUSH(R_F32((u32)(0xa8efd0u)));
    /* 0063143e: fadd dword ptr [edx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xccu));
    /* 00631444: fcom dword ptr [0x932e14] */ fx_compare(ST(0), R_F32((u32)(0x932e14u))); 
    /* 0063144a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063144c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063144d: fld dword ptr [0xa8efd4] */ FPUSH(R_F32((u32)(0xa8efd4u)));
    /* 00631453: fadd dword ptr [edx + 0xd0] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xd0u));
    /* 00631459: jb 0x631480 */ if (fC) goto L_00631480;
L_0063145b:; BB(0x0063145b);
    /* 0063145b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063145d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063145f: mov dword ptr [edx + 0xac], 2 */ W32((u32)(r_edx+0xacu), 0x2u);
    /* 00631469: mov eax, 0x41200000 */ r_eax = 0x41200000u;
    /* 0063146e: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 00631474: mov dword ptr [edx + 0xd0], 0x3f800000 */ W32((u32)(r_edx+0xd0u), 0x3f800000u);
    /* 0063147e: jmp 0x63148c */ goto L_0063148c;
L_00631480:; BB(0x00631480);
    /* 00631480: fstp dword ptr [edx + 0xd0] */ W_F32((u32)(r_edx+0xd0u), ST(0)); FPOP();
    /* 00631486: fstp dword ptr [edx + 0xcc] */ W_F32((u32)(r_edx+0xccu), ST(0)); FPOP();
L_0063148c:; BB(0x0063148c);
    /* 0063148c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063148f: ret  */ FN_RET(0x006312ec); r_esp += 4; return;
}

void f_00631490(void) /* sub_631490 */
{
    FN_ENTER(0x00631490);
    /* 00631490: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631491: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631493: mov ebx, eax */ r_ebx = r_eax;
L_00631495:; BB(0x00631495);
    /* 00631495: mov ecx, dword ptr [ebx + 0xa8efd8] */ r_ecx = R32((u32)(r_ebx+0xa8efd8u));
    /* 0063149b: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063149e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006314a0: je 0x6314b4 */ if (fZ) goto L_006314b4;
L_006314a2:; BB(0x006314a2);
    /* 006314a2: je 0x6314aa */ if (fZ) goto L_006314aa;
L_006314a4:; BB(0x006314a4);
    /* 006314a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006314a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006314a8: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6314aau); call_ind(t); }
L_006314aa:; BB(0x006314aa);
    /* 006314aa: mov dword ptr [ebx + 0xa8efd4], 0 */ W32((u32)(r_ebx+0xa8efd4u), 0x0u);
L_006314b4:; BB(0x006314b4);
    /* 006314b4: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006314b7: jl 0x631495 */ if ((fS!=fO)) goto L_00631495;
L_006314b9:; BB(0x006314b9);
    /* 006314b9: mov ecx, dword ptr [0xa8efec] */ r_ecx = R32((u32)(0xa8efecu));
    /* 006314bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006314c1: mov dword ptr [0xa8efe8], eax */ W32((u32)(0xa8efe8u), r_eax);
    /* 006314c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006314c8: mov dword ptr [0xa8efe0], eax */ W32((u32)(0xa8efe0u), r_eax);
    /* 006314cd: mov dword ptr [0xa8efe4], eax */ W32((u32)(0xa8efe4u), r_eax);
    /* 006314d2: je 0x6314e7 */ if (fZ) goto L_006314e7;
L_006314d4:; BB(0x006314d4);
    /* 006314d4: je 0x6314dd */ if (fZ) goto L_006314dd;
L_006314d6:; BB(0x006314d6);
    /* 006314d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006314d8: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6314ddu); f_004066a8();
L_006314dd:; BB(0x006314dd);
    /* 006314dd: mov dword ptr [0xa8efec], 0 */ W32((u32)(0xa8efecu), 0x0u);
L_006314e7:; BB(0x006314e7);
    /* 006314e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006314e8: ret  */ FN_RET(0x00631490); r_esp += 4; return;
}

void f_006314ec(void)
{
    FN_ENTER(0x006314ec);
    /* 006314ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006314ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006314ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006314f1: push 0x8e38b4 */ { u32 v = 0x8e38b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006314f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006314fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006314fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00631504: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631507: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063150a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063150d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00631510: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00631513: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631518: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063151f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x631524u); f_005caba4();
    /* 00631524: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631525: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00631528: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063152a: je 0x63155d */ if (fZ) goto L_0063155d;
L_0063152c:; BB(0x0063152c);
    /* 0063152c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00631533: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063153a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063153d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631540: call 0x631564 */ r_esp -= 4; W32(r_esp, 0x631545u); f_00631564();
    /* 00631545: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631548: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063154f:; BB(0x0063154f);
    /* 0063154f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631552: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631559: mov esp, ebp */ r_esp = r_ebp;
    /* 0063155b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063155c: ret  */ FN_RET(0x006314ec); r_esp += 4; return;
L_0063155d:; BB(0x0063155d);
    /* 0063155d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063155f: jmp 0x63154f */ goto L_0063154f;
}

void f_00631564(void) /* sub_631564 */
{
    FN_ENTER(0x00631564);
    /* 00631564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631565: mov ebp, esp */ r_ebp = r_esp;
    /* 00631567: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631569: push 0x8e38d0 */ { u32 v = 0x8e38d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063156e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00631574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631575: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063157c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063157f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00631582: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00631585: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00631588: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063158b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063158e: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631594: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00631597: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063159a: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x63159fu); f_006132e4();
    /* 0063159f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006315a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006315a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006315ac: mov dword ptr [ecx], 0xb2b040 */ W32((u32)(r_ecx), 0xb2b040u);
    /* 006315b2: mov eax, dword ptr [0x9c60c0] */ r_eax = R32((u32)(0x9c60c0u));
    /* 006315b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006315b8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006315bb: call dword ptr [0xb2b054] */ { u32 t = R32((u32)(0xb2b054u)); r_esp -= 4; W32(r_esp, 0x6315c1u); call_ind(t); }
    /* 006315c1: mov ecx, dword ptr [0xa8efec] */ r_ecx = R32((u32)(0xa8efecu));
    /* 006315c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006315c9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6315ceu); f_005b8610();
    /* 006315ce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006315d1: mov ecx, dword ptr [0xa8efec] */ r_ecx = R32((u32)(0xa8efecu));
    /* 006315d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006315d9: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006315dc: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6315e1u); f_005b8624();
    /* 006315e1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006315e4: mov dword ptr [edx + 0xc0], 0x43fa0000 */ W32((u32)(r_edx+0xc0u), 0x43fa0000u);
    /* 006315ee: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006315f1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 006315f4: mov dword ptr [edx + 0xc4], 0x41700000 */ W32((u32)(r_edx+0xc4u), 0x41700000u);
    /* 006315fe: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00631603: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00631606: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0063160c: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 00631616: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631618: mov dword ptr [edx + 0xcc], 0 */ W32((u32)(r_edx+0xccu), 0x0u);
    /* 00631622: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
    /* 0063162c: mov dword ptr [edx + 0xd4], 0 */ W32((u32)(r_edx+0xd4u), 0x0u);
    /* 00631636: jl 0x631659 */ if ((fS!=fO)) goto L_00631659;
L_00631638:; BB(0x00631638);
    /* 00631638: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063163b: jl 0x631647 */ if ((fS!=fO)) goto L_00631647;
L_0063163d:; BB(0x0063163d);
    /* 0063163d: mov dword ptr [edx + 0x84], 3 */ W32((u32)(r_edx+0x84u), 0x3u);
L_00631647:; BB(0x00631647);
    /* 00631647: mov eax, edx */ r_eax = r_edx;
    /* 00631649: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063164c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631653: mov esp, ebp */ r_esp = r_ebp;
    /* 00631655: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631656: ret 4 */ FN_RET(0x00631564); r_esp += 8; return;
L_00631659:; BB(0x00631659);
    /* 00631659: mov dword ptr [edx + 0x84], 0 */ W32((u32)(r_edx+0x84u), 0x0u);
    /* 00631663: jmp 0x631647 */ goto L_00631647;
}

void f_00631668(void) /* sub_631668 */
{
    FN_ENTER(0x00631668);
    /* 00631668: mov dword ptr [0xa8efd0], 0x3f2aaaab */ W32((u32)(0xa8efd0u), 0x3f2aaaabu);
    /* 00631672: mov dword ptr [0xa8efd4], 0x3d888889 */ W32((u32)(0xa8efd4u), 0x3d888889u);
    /* 0063167c: ret  */ FN_RET(0x00631668); r_esp += 4; return;
}

void f_00631680(void) /* sub_631680 */
{
    FN_ENTER(0x00631680);
    /* 00631680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631681: mov ebp, esp */ r_ebp = r_esp;
    /* 00631683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631685: push 0x8e38f8 */ { u32 v = 0x8e38f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063168a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00631690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631691: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00631698: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063169b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063169e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006316a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006316a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006316a7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006316ac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006316b3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6316b8u); f_008581c5();
    /* 006316b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006316b9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006316bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006316be: je 0x631784 */ if (fZ) goto L_00631784;
L_006316c4:; BB(0x006316c4);
    /* 006316c4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006316cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006316d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006316d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006316d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006316d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006316d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006316da: push 0x9c60b0 */ { u32 v = 0x9c60b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006316df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006316e1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6316e6u); f_005b7a84();
    /* 006316e6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006316e9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006316f0:; BB(0x006316f0);
    /* 006316f0: mov dword ptr [0xa8efec], eax */ W32((u32)(0xa8efecu), r_eax);
    /* 006316f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006316fc: mov ebx, dword ptr [0xa8efec] */ r_ebx = R32((u32)(0xa8efecu));
    /* 00631702: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00631708: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0063170b: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0063170e: mov esi, dword ptr [ecx + 0x30] */ r_esi = R32((u32)(r_ecx+0x30u));
    /* 00631711: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 00631714: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 00631717: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0063171a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0063171d: mov dword ptr [0xa8efe4], edi */ W32((u32)(0xa8efe4u), r_edi);
    /* 00631723: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00631726: mov dword ptr [0xa8efe0], eax */ W32((u32)(0xa8efe0u), r_eax);
    /* 0063172b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063172d: mov dword ptr [0xa8efd8], eax */ W32((u32)(0xa8efd8u), r_eax);
    /* 00631732: mov dword ptr [0xa8efdc], eax */ W32((u32)(0xa8efdcu), r_eax);
    /* 00631737: mov eax, 1 */ r_eax = 0x1u;
    /* 0063173c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063173d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063173e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063173f: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x631744u); f_0066f3d4();
    /* 00631744: mov dword ptr [0xa8efdc], eax */ W32((u32)(0xa8efdcu), r_eax);
    /* 00631749: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0063174c: mov edx, 1 */ r_edx = 0x1u;
    /* 00631751: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631752: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631755: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631756: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x63175bu); f_0066f3d4();
    /* 0063175b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063175e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00631761: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00631764: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00631767: mov dword ptr [0xa8efd8], eax */ W32((u32)(0xa8efd8u), r_eax);
    /* 0063176c: mov dword ptr [0xa8efe8], 0 */ W32((u32)(0xa8efe8u), 0x0u);
    /* 00631776: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631779: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631780: mov esp, ebp */ r_esp = r_ebp;
    /* 00631782: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631783: ret  */ FN_RET(0x00631680); r_esp += 4; return;
L_00631784:; BB(0x00631784);
    /* 00631784: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631786: jmp 0x6316f0 */ goto L_006316f0;
}

void f_0063178c(void) /* sub_63178C */
{
    FN_ENTER(0x0063178c);
    /* 0063178c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063178d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063178f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00631791: call 0x6317b0 */ r_esp -= 4; W32(r_esp, 0x631796u); f_006317b0();
    /* 00631796: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063179a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063179c: jne 0x6317a2 */ if (!fZ) goto L_006317a2;
L_0063179e:; BB(0x0063179e);
    /* 0063179e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063179f: ret 4 */ FN_RET(0x0063178c); r_esp += 8; return;
L_006317a2:; BB(0x006317a2);
    /* 006317a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006317a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6317a8u); f_005c2f74();
    /* 006317a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006317a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006317aa: ret 4 */ FN_RET(0x0063178c); r_esp += 8; return;
}

void f_006317b0(void) /* sub_6317B0 */
{
    FN_ENTER(0x006317b0);
    /* 006317b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006317b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006317b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006317b5: push 0x8e3914 */ { u32 v = 0x8e3914u; r_esp -= 4; W32(r_esp, v); }
    /* 006317ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006317c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006317c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006317c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006317cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006317ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006317d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006317d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006317d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006317da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006317e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006317e4: mov dword ptr [eax], 0xb2b110 */ W32((u32)(r_eax), 0xb2b110u);
    /* 006317ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006317eb: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6317f0u); f_007b4e84();
    /* 006317f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006317f1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006317f4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6317f9u); f_007b9c8c();
    /* 006317f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00631800: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631803: call 0x628d94 */ r_esp -= 4; W32(r_esp, 0x631808u); f_00628d94();
    /* 00631808: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063180b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631812: mov esp, ebp */ r_esp = r_ebp;
    /* 00631814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631815: ret  */ FN_RET(0x006317b0); r_esp += 4; return;
}

void f_00631818(void) /* sub_631818 */
{
    FN_ENTER(0x00631818);
    /* 00631818: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00631819: mov edi, ecx */ r_edi = r_ecx;
    /* 0063181b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063181d: mov ecx, edi */ r_ecx = r_edi;
    /* 0063181f: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631825: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063182b: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63182eu); call_ind(t); }
    /* 0063182e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00631831: je 0x631835 */ if (fZ) goto L_00631835;
L_00631833:; BB(0x00631833);
    /* 00631833: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00631834: ret  */ FN_RET(0x00631818); r_esp += 4; return;
L_00631835:; BB(0x00631835);
    /* 00631835: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00631838: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63183du); f_00829cc8();
    /* 0063183d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x631842u); f_0082d7b0();
    /* 00631842: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00631845: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63184au); f_0082d838();
    /* 0063184a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0063184d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063184f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x631854u); f_0082d8bc();
    /* 00631854: mov ecx, dword ptr [0xa8eff8] */ r_ecx = R32((u32)(0xa8eff8u));
    /* 0063185a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063185c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x631861u); f_005b8610();
    /* 00631861: mov ecx, eax */ r_ecx = r_eax;
    /* 00631863: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x631868u); f_00831758();
    /* 00631868: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63186du); f_0082dbac();
    /* 0063186d: mov ecx, dword ptr [0xa8eff8] */ r_ecx = R32((u32)(0xa8eff8u));
    /* 00631873: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631875: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63187au); f_005b8610();
    /* 0063187a: mov ecx, eax */ r_ecx = r_eax;
    /* 0063187c: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x631881u); f_00831758();
    /* 00631881: mov ecx, dword ptr [0xa8eff8] */ r_ecx = R32((u32)(0xa8eff8u));
    /* 00631887: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631889: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63188eu); f_005b8610();
    /* 0063188e: mov ecx, eax */ r_ecx = r_eax;
    /* 00631890: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x631895u); f_00831758();
    /* 00631895: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x63189au); f_0082dab0();
    /* 0063189a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63189fu); f_0082da80();
    /* 0063189f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006318a0: ret  */ FN_RET(0x00631818); r_esp += 4; return;
}

void f_006318a4(void) /* sub_6318A4 */
{
    FN_ENTER(0x006318a4);
    /* 006318a4: mov ecx, dword ptr [0xa8eff8] */ r_ecx = R32((u32)(0xa8eff8u));
    /* 006318aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006318ac: je 0x6318c1 */ if (fZ) goto L_006318c1;
L_006318ae:; BB(0x006318ae);
    /* 006318ae: je 0x6318b7 */ if (fZ) goto L_006318b7;
L_006318b0:; BB(0x006318b0);
    /* 006318b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006318b2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6318b7u); f_004066a8();
L_006318b7:; BB(0x006318b7);
    /* 006318b7: mov dword ptr [0xa8eff8], 0 */ W32((u32)(0xa8eff8u), 0x0u);
L_006318c1:; BB(0x006318c1);
    /* 006318c1: ret  */ FN_RET(0x006318a4); r_esp += 4; return;
}

void f_006318c4(void)
{
    FN_ENTER(0x006318c4);
    /* 006318c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006318c5: mov ebp, esp */ r_ebp = r_esp;
    /* 006318c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006318c9: push 0x8e393c */ { u32 v = 0x8e393cu; r_esp -= 4; W32(r_esp, v); }
    /* 006318ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006318d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006318d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006318dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006318df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006318e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006318e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006318e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006318eb: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 006318f0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006318f7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6318fcu); f_005caba4();
    /* 006318fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006318fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00631900: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631902: je 0x63193b */ if (fZ) goto L_0063193b;
L_00631904:; BB(0x00631904);
    /* 00631904: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063190b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00631912: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631915: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063191b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063191e: call 0x631940 */ r_esp -= 4; W32(r_esp, 0x631923u); f_00631940();
    /* 00631923: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631926: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063192d:; BB(0x0063192d);
    /* 0063192d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631930: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631937: mov esp, ebp */ r_esp = r_ebp;
    /* 00631939: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063193a: ret  */ FN_RET(0x006318c4); r_esp += 4; return;
L_0063193b:; BB(0x0063193b);
    /* 0063193b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063193d: jmp 0x63192d */ goto L_0063192d;
}

void f_00631940(void) /* sub_631940 */
{
    FN_ENTER(0x00631940);
    /* 00631940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631941: mov ebp, esp */ r_ebp = r_esp;
    /* 00631943: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631945: push 0x8e3958 */ { u32 v = 0x8e3958u; r_esp -= 4; W32(r_esp, v); }
    /* 0063194a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00631950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631951: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00631958: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063195b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063195e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00631961: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00631964: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00631967: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063196a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063196d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00631970: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00631973: call 0x628ef4 */ r_esp -= 4; W32(r_esp, 0x631978u); f_00628ef4();
    /* 00631978: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063197f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00631982: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00631985: mov dword ptr [ecx], 0xb2b110 */ W32((u32)(r_ecx), 0xb2b110u);
    /* 0063198b: mov eax, dword ptr [0x9c60e4] */ r_eax = R32((u32)(0x9c60e4u));
    /* 00631990: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631991: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00631994: call dword ptr [0xb2b124] */ { u32 t = R32((u32)(0xb2b124u)); r_esp -= 4; W32(r_esp, 0x63199au); call_ind(t); }
    /* 0063199a: mov ecx, dword ptr [0xa8eff8] */ r_ecx = R32((u32)(0xa8eff8u));
    /* 006319a0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006319a2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6319a7u); f_005b8610();
    /* 006319a7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006319aa: mov ecx, dword ptr [0xa8eff8] */ r_ecx = R32((u32)(0xa8eff8u));
    /* 006319b0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006319b2: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006319b5: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6319bau); f_005b8624();
    /* 006319ba: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006319bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006319bf: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006319c2: push 0x9c60e8 */ { u32 v = 0x9c60e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006319c7: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6319ccu); f_007b9a88();
    /* 006319cc: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006319cf: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6319d4u); f_007b999c();
    /* 006319d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006319d5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006319d8: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6319ddu); f_007b4f54();
    /* 006319dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006319e0: call 0x628de4 */ r_esp -= 4; W32(r_esp, 0x6319e5u); f_00628de4();
    /* 006319e5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006319e8: mov dword ptr [eax + 0xc0], 0x43fa0000 */ W32((u32)(r_eax+0xc0u), 0x43fa0000u);
    /* 006319f2: mov dword ptr [eax + 0xc4], 0x42480000 */ W32((u32)(r_eax+0xc4u), 0x42480000u);
    /* 006319fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006319ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631a06: mov esp, ebp */ r_esp = r_ebp;
    /* 00631a08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631a09: ret 8 */ FN_RET(0x00631940); r_esp += 12; return;
}

void f_00631a0c(void) /* sub_631A0C */
{
    FN_ENTER(0x00631a0c);
    /* 00631a0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631a0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00631a0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631a11: push 0x8e3980 */ { u32 v = 0x8e3980u; r_esp -= 4; W32(r_esp, v); }
    /* 00631a16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00631a1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631a1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00631a24: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631a27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00631a2a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00631a2d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00631a30: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00631a33: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00631a38: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00631a3f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x631a44u); f_008581c5();
    /* 00631a44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631a45: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00631a48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631a4a: je 0x631a8b */ if (fZ) goto L_00631a8b;
L_00631a4c:; BB(0x00631a4c);
    /* 00631a4c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00631a53: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00631a5a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631a5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631a5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631a61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631a62: push 0x9c60d4 */ { u32 v = 0x9c60d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00631a67: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00631a69: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x631a6eu); f_005b7a84();
    /* 00631a6e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631a71: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00631a78:; BB(0x00631a78);
    /* 00631a78: mov dword ptr [0xa8eff8], eax */ W32((u32)(0xa8eff8u), r_eax);
    /* 00631a7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631a80: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631a87: mov esp, ebp */ r_esp = r_ebp;
    /* 00631a89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631a8a: ret  */ FN_RET(0x00631a0c); r_esp += 4; return;
L_00631a8b:; BB(0x00631a8b);
    /* 00631a8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631a8d: jmp 0x631a78 */ goto L_00631a78;
}

void f_00631a90(void) /* sub_631A90 */
{
    FN_ENTER(0x00631a90);
    /* 00631a90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631a91: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00631a93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00631a95: call 0x631ab4 */ r_esp -= 4; W32(r_esp, 0x631a9au); f_00631ab4();
    /* 00631a9a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00631a9e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631aa0: jne 0x631aa6 */ if (!fZ) goto L_00631aa6;
L_00631aa2:; BB(0x00631aa2);
    /* 00631aa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631aa3: ret 4 */ FN_RET(0x00631a90); r_esp += 8; return;
L_00631aa6:; BB(0x00631aa6);
    /* 00631aa6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631aa7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x631aacu); f_005c2f74();
    /* 00631aac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631aad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631aae: ret 4 */ FN_RET(0x00631a90); r_esp += 8; return;
}

void f_00631ab4(void) /* sub_631AB4 */
{
    FN_ENTER(0x00631ab4);
    /* 00631ab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631ab5: mov ebp, esp */ r_ebp = r_esp;
    /* 00631ab7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631ab9: push 0x8e399c */ { u32 v = 0x8e399cu; r_esp -= 4; W32(r_esp, v); }
    /* 00631abe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00631ac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631ac5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00631acc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631acf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00631ad2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00631ad5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00631ad8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00631adb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00631ade: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00631ae5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631ae8: push dword ptr [eax + 0xe8] */ { u32 v = R32((u32)(r_eax+0xe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631aee: mov dword ptr [eax], 0xb2b200 */ W32((u32)(r_eax), 0xb2b200u);
    /* 00631af4: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x631af9u); f_005cdcc0();
    /* 00631af9: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631afc: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x631b01u); f_007b4e84();
    /* 00631b01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631b04: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631b07: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x631b0cu); f_007b9c8c();
    /* 00631b0c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00631b13: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631b16: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x631b1bu); f_006131f4();
    /* 00631b1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631b1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631b25: mov esp, ebp */ r_esp = r_ebp;
    /* 00631b27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631b28: ret  */ FN_RET(0x00631ab4); r_esp += 4; return;
}

void f_00631b2c(void) /* sub_631B2C */
{
    FN_ENTER(0x00631b2c);
    /* 00631b2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631b2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631b2e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631b31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00631b33: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631b39: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631b3f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00631b41: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00631b43: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x631b46u); call_ind(t); }
    /* 00631b46: mov dword ptr [ebx + 0xec], eax */ W32((u32)(r_ebx+0xecu), r_eax);
    /* 00631b4c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631b4f: je 0x631b57 */ if (fZ) goto L_00631b57;
L_00631b51:; BB(0x00631b51);
    /* 00631b51: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00631b54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631b55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631b56: ret  */ FN_RET(0x00631b2c); r_esp += 4; return;
L_00631b57:; BB(0x00631b57);
    /* 00631b57: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x631b5cu); f_0082d7b0();
    /* 00631b5c: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 00631b62: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631b65: je 0x631c8d */ if (fZ) goto L_00631c8d;
L_00631b6b:; BB(0x00631b6b);
    /* 00631b6b: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00631b6e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x631b73u); f_0082d838();
    /* 00631b73: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00631b76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00631b78: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x631b7du); f_0082d8bc();
    /* 00631b7d: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00631b80: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x631b85u); f_00829cc8();
    /* 00631b85: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 00631b88: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00631b8b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x631b90u); f_0082d838();
    /* 00631b90: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631b93: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x631b98u); f_008321d8();
    /* 00631b98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631b99: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 00631b9f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631ba2: je 0x631baf */ if (fZ) goto L_00631baf;
L_00631ba4:; BB(0x00631ba4);
    /* 00631ba4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x631ba9u); f_0082da80();
    /* 00631ba9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00631bac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00631bad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631bae: ret  */ FN_RET(0x00631b2c); r_esp += 4; return;
L_00631baf:; BB(0x00631baf);
    /* 00631baf: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 00631bb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631bb7: je 0x631bee */ if (fZ) goto L_00631bee;
L_00631bb9:; BB(0x00631bb9);
    /* 00631bb9: fld dword ptr [0x932eec] */ FPUSH(R_F32((u32)(0x932eecu)));
    /* 00631bbf: fadd dword ptr [ebx + 0xd8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xd8u));
    /* 00631bc5: fcom dword ptr [0x932ef0] */ fx_compare(ST(0), R_F32((u32)(0x932ef0u))); 
    /* 00631bcb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00631bcd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00631bce: jb 0x631be6 */ if (fC) goto L_00631be6;
L_00631bd0:; BB(0x00631bd0);
    /* 00631bd0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00631bd2: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
    /* 00631bdc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631bde: mov dword ptr [ebx + 0xd8], eax */ W32((u32)(r_ebx+0xd8u), r_eax);
    /* 00631be4: jmp 0x631c24 */ goto L_00631c24;
L_00631be6:; BB(0x00631be6);
    /* 00631be6: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 00631bec: jmp 0x631c24 */ goto L_00631c24;
L_00631bee:; BB(0x00631bee);
    /* 00631bee: fld dword ptr [ebx + 0xd8] */ FPUSH(R_F32((u32)(r_ebx+0xd8u)));
    /* 00631bf4: fsub dword ptr [0x932eec] */ ST(0) = ST(0) - R_F32((u32)(0x932eecu));
    /* 00631bfa: fcom dword ptr [0x932ef4] */ fx_compare(ST(0), R_F32((u32)(0x932ef4u))); 
    /* 00631c00: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00631c02: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00631c03: ja 0x631c1e */ if ((!fC&&!fZ)) goto L_00631c1e;
L_00631c05:; BB(0x00631c05);
    /* 00631c05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00631c07: mov dword ptr [ebx + 0xcc], 1 */ W32((u32)(r_ebx+0xccu), 0x1u);
    /* 00631c11: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
    /* 00631c16: mov dword ptr [ebx + 0xd8], eax */ W32((u32)(r_ebx+0xd8u), r_eax);
    /* 00631c1c: jmp 0x631c24 */ goto L_00631c24;
L_00631c1e:; BB(0x00631c1e);
    /* 00631c1e: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
L_00631c24:; BB(0x00631c24);
    /* 00631c24: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 00631c27: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x631c2cu); f_0082d7b0();
    /* 00631c2c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631c2f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00631c32: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00631c34: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631c37: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x631c3cu); f_00830b74();
    /* 00631c3c: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x631c41u); f_0082dbac();
    /* 00631c41: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00631c46: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00631c4b: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00631c4e: add ebx, 0xd8 */ {  u32 a = r_ebx; u32 b = 0xd8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00631c54: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00631c59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00631c5a: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x631c5fu); f_0082d710();
    /* 00631c5f: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631c62: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x631c67u); f_008321d8();
    /* 00631c67: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631c6c: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x631c71u); f_0082d710();
    /* 00631c71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631c74: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00631c79: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00631c7e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x631c83u); f_0082dab0();
    /* 00631c83: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x631c88u); f_0082da80();
    /* 00631c88: jmp 0x631ba4 */ goto L_00631ba4;
L_00631c8d:; BB(0x00631c8d);
    /* 00631c8d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x631c92u); f_008587a5();
    /* 00631c92: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00631c95: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00631c98: fdiv dword ptr [0x932efc] */ ST(0) = ST(0) / R_F32((u32)(0x932efcu));
    /* 00631c9e: fmul dword ptr [0x932ef8] */ ST(0) = ST(0) * R_F32((u32)(0x932ef8u));
    /* 00631ca4: fadd dword ptr [0x932f00] */ ST(0) = ST(0) + R_F32((u32)(0x932f00u));
    /* 00631caa: fstp dword ptr [ebx + 0x68] */ W_F32((u32)(r_ebx+0x68u), ST(0)); FPOP();
    /* 00631cad: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x631cb2u); f_008587a5();
    /* 00631cb2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00631cb6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00631cba: fdiv dword ptr [0x932efc] */ ST(0) = ST(0) / R_F32((u32)(0x932efcu));
    /* 00631cc0: fmul dword ptr [0x932ef8] */ ST(0) = ST(0) * R_F32((u32)(0x932ef8u));
    /* 00631cc6: lea ecx, [ebx + 0x68] */ r_ecx = (u32)(r_ebx+0x68u);
    /* 00631cc9: fadd dword ptr [0x932f00] */ ST(0) = ST(0) + R_F32((u32)(0x932f00u));
    /* 00631ccf: fstp dword ptr [ebx + 0x70] */ W_F32((u32)(r_ebx+0x70u), ST(0)); FPOP();
    /* 00631cd2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x631cd7u); f_0082d838();
    /* 00631cd7: jmp 0x631b6b */ goto L_00631b6b;
}

void f_00631cdc(void) /* sub_631CDC */
{
    FN_ENTER(0x00631cdc);
    /* 00631cdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631cdd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00631cdf: mov eax, dword ptr [ebp + 0xac] */ r_eax = R32((u32)(r_ebp+0xacu));
    /* 00631ce5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631ce8: jne 0x631d10 */ if (!fZ) goto L_00631d10;
L_00631cea:; BB(0x00631cea);
    /* 00631cea: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x631cefu); f_006dc358();
    /* 00631cef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631cf2: je 0x631cff */ if (fZ) goto L_00631cff;
L_00631cf4:; BB(0x00631cf4);
    /* 00631cf4: mov eax, dword ptr [ebp + 0xec] */ r_eax = R32((u32)(r_ebp+0xecu));
    /* 00631cfa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631cfd: je 0x631d49 */ if (fZ) goto L_00631d49;
L_00631cff:; BB(0x00631cff);
    /* 00631cff: mov ecx, dword ptr [ebp + 0xe8] */ r_ecx = R32((u32)(r_ebp+0xe8u));
    /* 00631d05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631d07: je 0x631d47 */ if (fZ) goto L_00631d47;
L_00631d09:; BB(0x00631d09);
    /* 00631d09: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x631d0eu); f_00508f48();
    /* 00631d0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631d0f: ret  */ FN_RET(0x00631cdc); r_esp += 4; return;
L_00631d10:; BB(0x00631d10);
    /* 00631d10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d13: jne 0x631d2e */ if (!fZ) goto L_00631d2e;
L_00631d15:; BB(0x00631d15);
    /* 00631d15: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00631d18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631d1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631d1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631d1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631d1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631d1e: push dword ptr [ebp + 0xd4] */ { u32 v = R32((u32)(r_ebp+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631d24: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x631d29u); f_008144b0();
    /* 00631d29: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00631d2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631d2d: ret  */ FN_RET(0x00631cdc); r_esp += 4; return;
L_00631d2e:; BB(0x00631d2e);
    /* 00631d2e: mov ecx, dword ptr [ebp + 0xe8] */ r_ecx = R32((u32)(r_ebp+0xe8u));
    /* 00631d34: mov dword ptr [ebp + 0xac], 1 */ W32((u32)(r_ebp+0xacu), 0x1u);
    /* 00631d3e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631d40: je 0x631d47 */ if (fZ) goto L_00631d47;
L_00631d42:; BB(0x00631d42);
    /* 00631d42: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x631d47u); f_00508f48();
L_00631d47:; BB(0x00631d47);
    /* 00631d47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631d48: ret  */ FN_RET(0x00631cdc); r_esp += 4; return;
L_00631d49:; BB(0x00631d49);
    /* 00631d49: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631d4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631d4c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x631d51u); f_006946a8();
    /* 00631d51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631d54: jmp 0x631cff */ goto L_00631cff;
}

void f_00631d58(void) /* sub_631D58 */
{
    FN_ENTER(0x00631d58);
    /* 00631d58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631d59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631d5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00631d5b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00631d5d: mov eax, dword ptr [ebp + 0xac] */ r_eax = R32((u32)(r_ebp+0xacu));
    /* 00631d63: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00631d66: jne 0x631e11 */ if (!fZ) goto L_00631e11;
L_00631d6c:; BB(0x00631d6c);
    /* 00631d6c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00631d71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631d72: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x631d77u); f_0068d5a8();
    /* 00631d77: mov esi, eax */ r_esi = r_eax;
    /* 00631d79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631d7c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631d7e: je 0x631e11 */ if (fZ) goto L_00631e11;
L_00631d84:; BB(0x00631d84);
    /* 00631d84: mov dword ptr [ebp + 0xac], 2 */ W32((u32)(r_ebp+0xacu), 0x2u);
    /* 00631d8e: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00631d91: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00631d94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631d95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631d96: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x631d9bu); f_007a90a8();
    /* 00631d9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631d9f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00631da1: mov ecx, esi */ r_ecx = r_esi;
    /* 00631da3: call 0x694430 */ r_esp -= 4; W32(r_esp, 0x631da8u); f_00694430();
    /* 00631da8: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 00631dae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631db0: je 0x631e11 */ if (fZ) goto L_00631e11;
L_00631db2:; BB(0x00631db2);
    /* 00631db2: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00631db6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631db8: jl 0x631e11 */ if ((fS!=fO)) goto L_00631e11;
L_00631dba:; BB(0x00631dba);
    /* 00631dba: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00631dc0: jg 0x631e11 */ if ((!fZ&&fS==fO)) goto L_00631e11;
L_00631dc2:; BB(0x00631dc2);
    /* 00631dc2: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 00631dc8: movzx esi, word ptr [edx + ecx*4] */ r_esi = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 00631dcc: mov word ptr [esp], si */ W16((u32)(r_esp), (u16)r_esi);
    /* 00631dd0: movzx esi, word ptr [edx + ecx*4 + 2] */ r_esi = (u32)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 00631dd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631dd7: mov word ptr [esp + 2], si */ W16((u32)(r_esp+0x2u), (u16)r_esi);
    /* 00631ddc: mov esi, dword ptr [ebp + 0xac] */ r_esi = R32((u32)(r_ebp+0xacu));
    /* 00631de2: mov word ptr [esp], si */ W16((u32)(r_esp), (u16)r_esi);
    /* 00631de6: je 0x631e06 */ if (fZ) goto L_00631e06;
L_00631de8:; BB(0x00631de8);
    /* 00631de8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00631dea: jl 0x631e06 */ if ((fS!=fO)) goto L_00631e06;
L_00631dec:; BB(0x00631dec);
    /* 00631dec: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631df2: jg 0x631e06 */ if ((!fZ&&fS==fO)) goto L_00631e06;
L_00631df4:; BB(0x00631df4);
    /* 00631df4: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00631df8: mov word ptr [edx + ecx*4], ax */ W16((u32)(r_edx+r_ecx*4), (u16)r_eax);
    /* 00631dfc: movzx esi, word ptr [esp + 2] */ r_esi = (u32)R16((u32)(r_esp+0x2u));
    /* 00631e01: mov word ptr [edx + ecx*4 + 2], si */ W16((u32)(r_edx+r_ecx*4+0x2u), (u16)r_esi);
L_00631e06:; BB(0x00631e06);
    /* 00631e06: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00631e09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631e0a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00631e0c: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x631e11u); f_007b5038();
L_00631e11:; BB(0x00631e11);
    /* 00631e11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631e12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631e13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00631e14: ret 4 */ FN_RET(0x00631d58); r_esp += 8; return;
}

void f_00631e18(void) /* sub_631E18 */
{
    FN_ENTER(0x00631e18);
    /* 00631e18: mov ecx, dword ptr [0xa8f010] */ r_ecx = R32((u32)(0xa8f010u));
    /* 00631e1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631e20: je 0x631e35 */ if (fZ) goto L_00631e35;
L_00631e22:; BB(0x00631e22);
    /* 00631e22: je 0x631e2b */ if (fZ) goto L_00631e2b;
L_00631e24:; BB(0x00631e24);
    /* 00631e24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631e26: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x631e2bu); f_004066a8();
L_00631e2b:; BB(0x00631e2b);
    /* 00631e2b: mov dword ptr [0xa8f010], 0 */ W32((u32)(0xa8f010u), 0x0u);
L_00631e35:; BB(0x00631e35);
    /* 00631e35: ret  */ FN_RET(0x00631e18); r_esp += 4; return;
}

void f_00631e38(void)
{
    FN_ENTER(0x00631e38);
    /* 00631e38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631e39: mov ebp, esp */ r_ebp = r_esp;
    /* 00631e3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631e3d: push 0x8e39c4 */ { u32 v = 0x8e39c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00631e42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00631e48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631e49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00631e50: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631e53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00631e56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00631e59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00631e5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00631e5f: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631e64: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00631e6b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x631e70u); f_005caba4();
    /* 00631e70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631e71: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00631e74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631e76: je 0x631eaf */ if (fZ) goto L_00631eaf;
L_00631e78:; BB(0x00631e78);
    /* 00631e78: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00631e7f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00631e86: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631e89: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631e8f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e92: call 0x631eb4 */ r_esp -= 4; W32(r_esp, 0x631e97u); f_00631eb4();
    /* 00631e97: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e9a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00631ea1:; BB(0x00631ea1);
    /* 00631ea1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631ea4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631eab: mov esp, ebp */ r_esp = r_ebp;
    /* 00631ead: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631eae: ret  */ FN_RET(0x00631e38); r_esp += 4; return;
L_00631eaf:; BB(0x00631eaf);
    /* 00631eaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00631eb1: jmp 0x631ea1 */ goto L_00631ea1;
}

void f_00631eb4(void) /* sub_631EB4 */
{
    FN_ENTER(0x00631eb4);
    /* 00631eb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631eb5: mov ebp, esp */ r_ebp = r_esp;
    /* 00631eb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631eb9: push 0x8e39e0 */ { u32 v = 0x8e39e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631ebe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00631ec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631ec5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00631ecc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631ecf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00631ed2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00631ed5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00631ed8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00631edb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00631ede: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00631ee1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00631ee4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00631ee7: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x631eecu); f_006132e4();
    /* 00631eec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00631ef3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00631ef6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00631ef9: mov dword ptr [ecx], 0xb2b200 */ W32((u32)(r_ecx), 0xb2b200u);
    /* 00631eff: mov eax, dword ptr [0x9c615c] */ r_eax = R32((u32)(0x9c615cu));
    /* 00631f04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631f05: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00631f08: call dword ptr [0xb2b214] */ { u32 t = R32((u32)(0xb2b214u)); r_esp -= 4; W32(r_esp, 0x631f0eu); call_ind(t); }
    /* 00631f0e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00631f11: mov ebx, dword ptr [0xa8f010] */ r_ebx = R32((u32)(0xa8f010u));
    /* 00631f17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631f19: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00631f1f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00631f22: push 0x9c6160 */ { u32 v = 0x9c6160u; r_esp -= 4; W32(r_esp, v); }
    /* 00631f27: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00631f2a: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 00631f30: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00631f33: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00631f36: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x631f3bu); f_007b9a88();
    /* 00631f3b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00631f3e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x631f43u); f_007b999c();
    /* 00631f43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631f44: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00631f47: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x631f4cu); f_007b4f54();
    /* 00631f4c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x631f51u); f_00807ac0();
    /* 00631f51: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631f54: jne 0x631f6f */ if (!fZ) goto L_00631f6f;
L_00631f56:; BB(0x00631f56);
    /* 00631f56: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00631f59: mov dword ptr [edx + 0xd0], 0x2d */ W32((u32)(r_edx+0xd0u), 0x2du);
    /* 00631f63: mov dword ptr [edx + 0xd4], 0x451 */ W32((u32)(r_edx+0xd4u), 0x451u);
    /* 00631f6d: jmp 0x631fa1 */ goto L_00631fa1;
L_00631f6f:; BB(0x00631f6f);
    /* 00631f6f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00631f72: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631f75: jne 0x631f8d */ if (!fZ) goto L_00631f8d;
L_00631f77:; BB(0x00631f77);
    /* 00631f77: mov dword ptr [edx + 0xd0], 0x2e */ W32((u32)(r_edx+0xd0u), 0x2eu);
    /* 00631f81: mov dword ptr [edx + 0xd4], 0x468 */ W32((u32)(r_edx+0xd4u), 0x468u);
    /* 00631f8b: jmp 0x631fa1 */ goto L_00631fa1;
L_00631f8d:; BB(0x00631f8d);
    /* 00631f8d: mov dword ptr [edx + 0xd0], 0x2c */ W32((u32)(r_edx+0xd0u), 0x2cu);
    /* 00631f97: mov dword ptr [edx + 0xd4], 0x43a */ W32((u32)(r_edx+0xd4u), 0x43au);
L_00631fa1:; BB(0x00631fa1);
    /* 00631fa1: mov dword ptr [edx + 0x98], 3 */ W32((u32)(r_edx+0x98u), 0x3u);
    /* 00631fab: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 00631fad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631faf: mov dword ptr [edx + 0xc0], 0x43fa0000 */ W32((u32)(r_edx+0xc0u), 0x43fa0000u);
    /* 00631fb9: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00631fbf: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 00631fc5: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 00631fcb: mov dword ptr [edx + 0xc4], 0x42480000 */ W32((u32)(r_edx+0xc4u), 0x42480000u);
    /* 00631fd5: mov dword ptr [edx + 0xd8], 0 */ W32((u32)(r_edx+0xd8u), 0x0u);
    /* 00631fdf: mov dword ptr [edx + 0xdc], 0 */ W32((u32)(r_edx+0xdcu), 0x0u);
    /* 00631fe9: mov dword ptr [edx + 0xe0], 0 */ W32((u32)(r_edx+0xe0u), 0x0u);
    /* 00631ff3: mov dword ptr [edx + 0xe4], 0 */ W32((u32)(r_edx+0xe4u), 0x0u);
    /* 00631ffd: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00632000: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00632001: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x632006u); f_00509590();
    /* 00632006: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632009: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063200c: mov dword ptr [ecx + 0xec], 1 */ W32((u32)(r_ecx+0xecu), 0x1u);
    /* 00632016: mov dword ptr [ecx + 0xe8], eax */ W32((u32)(r_ecx+0xe8u), r_eax);
    /* 0063201c: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00632021: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00632024: je 0x632041 */ if (fZ) goto L_00632041;
L_00632026:; BB(0x00632026);
    /* 00632026: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632029: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063202c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063202f: mov eax, ecx */ r_eax = r_ecx;
    /* 00632031: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632034: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063203b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063203d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063203e: ret 8 */ FN_RET(0x00631eb4); r_esp += 12; return;
L_00632041:; BB(0x00632041);
    /* 00632041: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x632046u); f_0078b1c4();
    /* 00632046: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00632049: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063204c: jne 0x632026 */ if (!fZ) goto L_00632026;
L_0063204e:; BB(0x0063204e);
    /* 0063204e: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00632052: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632058: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0063205c: jmp 0x632026 */ goto L_00632026;
}

