#include "protos.h"

void f_005570f0(void) /* sub_5570F0 */
{
    FN_ENTER(0x005570f0);
    /* 005570f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005570f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005570f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005570f5: push 0x8d6324 */ { u32 v = 0x8d6324u; r_esp -= 4; W32(r_esp, v); }
    /* 005570fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00557100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557101: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00557108: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055710b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055710e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00557111: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00557114: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00557117: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055711a: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 00557120: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00557123: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00557126: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00557129: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0055712c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0055712f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00557132: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00557135: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00557138: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x55713du); f_008193cc();
    /* 0055713d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00557144: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00557147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055714a: mov dword ptr [edx], 0xb04910 */ W32((u32)(r_edx), 0xb04910u);
    /* 00557150: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00557152: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 00557155: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00557158: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 0055715b: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0055715e: mov dword ptr [edx + 0x24], edi */ W32((u32)(r_edx+0x24u), r_edi);
    /* 00557161: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00557163: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 00557166: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00557169: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0055716c: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0055716f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00557172: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00557177: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 0055717e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x557183u); f_0082d990();
    /* 00557183: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00557186: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055718d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055718f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00557196: mov dword ptr [ebp - 0x40], 0x40e00000 */ W32((u32)(r_ebp+0xffffffc0u), 0x40e00000u);
    /* 0055719d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5571a2u); f_0082d8bc();
    /* 005571a2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005571a5: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 005571a8: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005571ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005571ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005571ae: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5571b3u); f_0082eab8();
    /* 005571b3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5571b8u); f_0082da80();
    /* 005571b8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005571bb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005571be: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005571c1: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005571c4: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 005571c7: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005571cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005571d4: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005571d7: lea ebx, [ebp - 0x3c] */ r_ebx = (u32)(r_ebp+0xffffffc4u);
    /* 005571da: mov dword ptr [ebp - 0x34], 0x4000 */ W32((u32)(r_ebp+0xffffffccu), 0x4000u);
    /* 005571e1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005571e3: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 005571e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005571e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005571e7: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5571ecu); f_00509dc4();
    /* 005571ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005571ef: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005571f2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005571f5: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005571f8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005571fb: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005571fe: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 00557205: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 00557208: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 0055720b: mov eax, ecx */ r_eax = r_ecx;
    /* 0055720d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557210: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00557217: mov esp, ebp */ r_esp = r_ebp;
    /* 00557219: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055721a: ret 0x10 */ FN_RET(0x005570f0); r_esp += 20; return;
}

void f_0055724c(void) /* sub_55724C */
{
    FN_ENTER(0x0055724c);
    /* 0055724c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055724d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055724f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00557251: call 0x557270 */ r_esp -= 4; W32(r_esp, 0x557256u); f_00557270();
    /* 00557256: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055725a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055725c: jne 0x557262 */ if (!fZ) goto L_00557262;
L_0055725e:; BB(0x0055725e);
    /* 0055725e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055725f: ret 4 */ FN_RET(0x0055724c); r_esp += 8; return;
L_00557262:; BB(0x00557262);
    /* 00557262: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00557263: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x557268u); f_005c2f74();
    /* 00557268: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00557269: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055726a: ret 4 */ FN_RET(0x0055724c); r_esp += 8; return;
}

void f_00557270(void) /* sub_557270 */
{
    FN_ENTER(0x00557270);
    /* 00557270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557271: mov ebp, esp */ r_ebp = r_esp;
    /* 00557273: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00557275: push 0x8d6340 */ { u32 v = 0x8d6340u; r_esp -= 4; W32(r_esp, v); }
    /* 0055727a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00557280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557281: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00557288: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055728b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055728e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00557291: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00557294: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00557297: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0055729a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055729d: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 005572a3: mov dword ptr [ecx], 0xb04978 */ W32((u32)(r_ecx), 0xb04978u);
    /* 005572a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005572ab: je 0x5572c7 */ if (fZ) goto L_005572c7;
L_005572ad:; BB(0x005572ad);
    /* 005572ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005572b0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005572b4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005572b9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005572bd: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
L_005572c7:; BB(0x005572c7);
    /* 005572c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005572ce: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x5572d3u); f_007b4aec();
    /* 005572d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005572d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005572dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005572df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005572e0: ret  */ FN_RET(0x00557270); r_esp += 4; return;
}

void f_005572e4(void) /* sub_5572E4 */
{
    FN_ENTER(0x005572e4);
    /* 005572e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005572e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005572e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005572e9: push 0x8d6376 */ { u32 v = 0x8d6376u; r_esp -= 4; W32(r_esp, v); }
    /* 005572ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005572f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005572f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005572fc: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005572ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00557302: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00557305: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00557308: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0055730b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055730e: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 00557314: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00557317: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0055731a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055731d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00557320: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00557323: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00557326: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00557329: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0055732c: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x557331u); f_007b4b48();
    /* 00557331: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00557338: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0055733b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055733e: push dword ptr [eax*4 + 0x924eac] */ { u32 v = R32((u32)(r_eax*4+0x924eacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00557345: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00557348: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055734b: mov dword ptr [edi], 0xb04978 */ W32((u32)(r_edi), 0xb04978u);
    /* 00557351: mov word ptr [edi + 0xac], ax */ W16((u32)(r_edi+0xacu), (u16)r_eax);
    /* 00557358: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0055735c: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00557362: mov word ptr [edi + 0xd4], cx */ W16((u32)(r_edi+0xd4u), (u16)r_ecx);
    /* 00557369: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0055736b: mov word ptr [edi + 0xae], bx */ W16((u32)(r_edi+0xaeu), (u16)r_ebx);
    /* 00557372: mov dword ptr [edi + 0xd8], esi */ W32((u32)(r_edi+0xd8u), r_esi);
    /* 00557378: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0055737e: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00557381: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x557386u); f_0078e934();
    /* 00557386: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557389: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0055738c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055738f: fld dword ptr [0x924f00] */ FPUSH(R_F32((u32)(0x924f00u)));
    /* 00557395: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 0055739b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0055739e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005573a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005573a3: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 005573a6: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005573a8: lea ecx, [edi + eax + 0x3dc] */ r_ecx = (u32)(r_edi+r_eax+0x3dcu);
    /* 005573af: mov dword ptr [edx + 0xcc], ecx */ W32((u32)(r_edx+0xccu), r_ecx);
    /* 005573b5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005573b8: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005573ba: mov dword ptr [edx + 0xdc], ebx */ W32((u32)(r_edx+0xdcu), r_ebx);
    /* 005573c0: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 005573c3: mov dword ptr [edx + 0xe0], esi */ W32((u32)(r_edx+0xe0u), r_esi);
    /* 005573c9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005573cc: mov dword ptr [edx + 0xe4], ecx */ W32((u32)(r_edx+0xe4u), r_ecx);
    /* 005573d2: mov dword ptr [edx + 0xf0], ebx */ W32((u32)(r_edx+0xf0u), r_ebx);
    /* 005573d8: mov dword ptr [edx + 0xf4], esi */ W32((u32)(r_edx+0xf4u), r_esi);
    /* 005573de: mov dword ptr [edx + 0xf8], ecx */ W32((u32)(r_edx+0xf8u), r_ecx);
    /* 005573e4: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 005573e7: fstp dword ptr [edx + 0xe8] */ W_F32((u32)(r_edx+0xe8u), ST(0)); FPOP();
    /* 005573ed: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005573f2: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5573f7u); f_0082d990();
    /* 005573f7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005573fa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005573fd: mov esi, dword ptr [eax + 0x60] */ r_esi = R32((u32)(r_eax+0x60u));
    /* 00557400: shl ebx, 0xd */ { u32 c = (13u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00557403: lea edx, [ebx + esi - 0x2000] */ r_edx = (u32)(r_ebx+r_esi+0xffffe000u);
    /* 0055740a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055740c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00557413: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0055741a: mov dword ptr [ebp - 0x48], 0xc0000000 */ W32((u32)(r_ebp+0xffffffb8u), 0xc0000000u);
    /* 00557421: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x557426u); f_0082d8bc();
    /* 00557426: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00557429: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0055742c: add eax, 0xb0 */ {  u32 a = r_eax; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557432: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00557434: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x557439u); f_0082eab8();
    /* 00557439: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0055743c: mov dword ptr [eax + 0xec], 0x41f00000 */ W32((u32)(r_eax+0xecu), 0x41f00000u);
    /* 00557446: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00557448: mov dword ptr [ebp - 0x48], 0x41f00000 */ W32((u32)(r_ebp+0xffffffb8u), 0x41f00000u);
    /* 0055744f: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 00557452: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00557453: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 00557456: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x55745bu); f_0082eab8();
    /* 0055745b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0055745e: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 00557461: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00557467: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x55746cu); f_0082ebac();
    /* 0055746c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0055746f: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00557472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557473: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00557479: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055747a: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x55747fu); f_00780d3c();
    /* 0055747f: mov ebx, eax */ r_ebx = r_eax;
    /* 00557481: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557484: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557486: je 0x5574de */ if (fZ) goto L_005574de;
L_00557488:; BB(0x00557488);
    /* 00557488: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0055748b: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055748e: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00557494: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557495: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x55749au); f_0078ea6c();
    /* 0055749a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055749d: fld dword ptr [0x924ef0] */ FPUSH(R_F32((u32)(0x924ef0u)));
    /* 005574a3: fld dword ptr [0x924eec] */ FPUSH(R_F32((u32)(0x924eecu)));
    /* 005574a9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005574ab: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005574ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005574af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005574b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005574b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005574b4: ja 0x5574d5 */ if ((!fC&&!fZ)) goto L_005574d5;
L_005574b6:; BB(0x005574b6);
    /* 005574b6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005574b8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005574bb: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005574be: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005574c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005574c5: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5574cau); f_0078ea6c();
    /* 005574ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005574cd: fld dword ptr [0x924eec] */ FPUSH(R_F32((u32)(0x924eecu)));
    /* 005574d3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_005574d5:; BB(0x005574d5);
    /* 005574d5: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005574d8: fstp dword ptr [eax + 0xec] */ W_F32((u32)(r_eax+0xecu), ST(0)); FPOP();
L_005574de:; BB(0x005574de);
    /* 005574de: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5574e3u); f_0082da80();
    /* 005574e3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005574e6: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 005574f0: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 005574f5: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005574fc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x557501u); f_005caba4();
    /* 00557501: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00557504: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557507: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055750a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055750c: je 0x557575 */ if (fZ) goto L_00557575;
L_0055750e:; BB(0x0055750e);
    /* 0055750e: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00557515: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055751c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0055751f: mov ecx, eax */ r_ecx = r_eax;
    /* 00557521: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00557523: lea eax, [edx + 0xf0] */ r_eax = (u32)(r_edx+0xf0u);
    /* 00557529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055752a: push dword ptr [edx + 0xcc] */ { u32 v = R32((u32)(r_edx+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00557530: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557531: call 0x546bbc */ r_esp -= 4; W32(r_esp, 0x557536u); f_00546bbc();
    /* 00557536: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0055753d:; BB(0x0055753d);
    /* 0055753d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00557540: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00557543: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 00557549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055754b: je 0x55755a */ if (fZ) goto L_0055755a;
L_0055754d:; BB(0x0055754d);
    /* 0055754d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00557550: mov dword ptr [eax + 0x340], 0 */ W32((u32)(r_eax+0x340u), 0x0u);
L_0055755a:; BB(0x0055755a);
    /* 0055755a: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0055755d: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00557560: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00557563: mov eax, edx */ r_eax = r_edx;
    /* 00557565: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557568: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055756f: mov esp, ebp */ r_esp = r_ebp;
    /* 00557571: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557572: ret 0x10 */ FN_RET(0x005572e4); r_esp += 20; return;
L_00557575:; BB(0x00557575);
    /* 00557575: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00557577: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0055757a: jmp 0x55753d */ goto L_0055753d;
}

void f_0055757c(void) /* sub_55757C */
{
    FN_ENTER(0x0055757c);
    /* 0055757c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055757d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557580: mov esi, ecx */ r_esi = r_ecx;
    /* 00557582: movsx eax, word ptr [esi + 0xae] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xaeu));
    /* 00557589: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055758b: je 0x557709 */ if (fZ) goto L_00557709;
L_00557591:; BB(0x00557591);
    /* 00557591: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557594: je 0x5576b6 */ if (fZ) goto L_005576b6;
L_0055759a:; BB(0x0055759a);
    /* 0055759a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055759d: jne 0x55768c */ if (!fZ) goto L_0055768c;
L_005575a3:; BB(0x005575a3);
    /* 005575a3: mov edx, dword ptr [esi + 0xcc] */ r_edx = R32((u32)(r_esi+0xccu));
    /* 005575a9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005575ab: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 005575b1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005575b4: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 005575ba: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005575bd: mov dword ptr [esi + 0xb8], eax */ W32((u32)(r_esi+0xb8u), r_eax);
    /* 005575c3: lea ecx, [esi + 0xb0] */ r_ecx = (u32)(r_esi+0xb0u);
    /* 005575c9: lea edx, [esi + 0xf0] */ r_edx = (u32)(r_esi+0xf0u);
    /* 005575cf: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5575d4u); f_0082f9c4();
    /* 005575d4: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 005575da: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005575dc: fld dword ptr [esi + 0xb8] */ FPUSH(R_F32((u32)(r_esi+0xb8u)));
    /* 005575e2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005575e4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005575e6: fcom dword ptr [0x924ee8] */ fx_compare(ST(0), R_F32((u32)(0x924ee8u))); 
    /* 005575ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005575ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005575ef: jbe 0x557633 */ if ((fC||fZ)) goto L_00557633;
L_005575f1:; BB(0x005575f1);
    /* 005575f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005575f2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005575f5: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x5575fau); f_0082dc9c();
    /* 005575fa: fld dword ptr [0x924ed0] */ FPUSH(R_F32((u32)(0x924ed0u)));
    /* 00557600: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00557602: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 00557608: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0055760a: fadd dword ptr [esi + 0xf0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xf0u));
    /* 00557610: fld dword ptr [esi + 0xb8] */ FPUSH(R_F32((u32)(r_esi+0xb8u)));
    /* 00557616: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00557618: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055761a: fadd dword ptr [esi + 0xf8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xf8u));
    /* 00557620: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00557622: fstp dword ptr [esi + 0xf0] */ W_F32((u32)(r_esi+0xf0u), ST(0)); FPOP();
    /* 00557628: fstp dword ptr [esi + 0xf8] */ W_F32((u32)(r_esi+0xf8u), ST(0)); FPOP();
    /* 0055762e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00557631: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00557632: ret  */ FN_RET(0x0055757c); r_esp += 4; return;
L_00557633:; BB(0x00557633);
    /* 00557633: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00557635: push dword ptr [esi + 0xb4] */ { u32 v = R32((u32)(r_esi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055763b: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x557640u); f_0082e900();
    /* 00557640: fcomp dword ptr [0x924ee4] */ fx_compare(ST(0), R_F32((u32)(0x924ee4u))); FPOP();
    /* 00557646: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00557648: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00557649: jbe 0x55767b */ if ((fC||fZ)) goto L_0055767b;
L_0055764b:; BB(0x0055764b);
    /* 0055764b: fld dword ptr [esi + 0xb4] */ FPUSH(R_F32((u32)(r_esi+0xb4u)));
    /* 00557651: fcomp dword ptr [0x924ee0] */ fx_compare(ST(0), R_F32((u32)(0x924ee0u))); FPOP();
    /* 00557657: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00557659: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055765a: jbe 0x557664 */ if ((fC||fZ)) goto L_00557664;
L_0055765c:; BB(0x0055765c);
    /* 0055765c: fld dword ptr [0x924ed8] */ FPUSH(R_F32((u32)(0x924ed8u)));
    /* 00557662: jmp 0x55766a */ goto L_0055766a;
L_00557664:; BB(0x00557664);
    /* 00557664: fld dword ptr [0x924edc] */ FPUSH(R_F32((u32)(0x924edcu)));
L_0055766a:; BB(0x0055766a);
    /* 0055766a: fadd dword ptr [esi + 0xf4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xf4u));
    /* 00557670: fstp dword ptr [esi + 0xf4] */ W_F32((u32)(r_esi+0xf4u), ST(0)); FPOP();
    /* 00557676: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00557679: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055767a: ret  */ FN_RET(0x0055757c); r_esp += 4; return;
L_0055767b:; BB(0x0055767b);
    /* 0055767b: mov eax, 3 */ r_eax = 0x3u;
    /* 00557680: mov word ptr [esi + 0xae], ax */ W16((u32)(r_esi+0xaeu), (u16)r_eax);
    /* 00557687: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055768a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055768b: ret  */ FN_RET(0x0055757c); r_esp += 4; return;
L_0055768c:; BB(0x0055768c);
    /* 0055768c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055768f: jne 0x557704 */ if (!fZ) goto L_00557704;
L_00557691:; BB(0x00557691);
    /* 00557691: mov ecx, dword ptr [esi + 0xcc] */ r_ecx = R32((u32)(r_esi+0xccu));
    /* 00557697: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00557699: mov dword ptr [esi + 0xf0], eax */ W32((u32)(r_esi+0xf0u), r_eax);
    /* 0055769f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005576a2: mov dword ptr [esi + 0xf4], edx */ W32((u32)(r_esi+0xf4u), r_edx);
    /* 005576a8: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005576ab: mov dword ptr [esi + 0xf8], eax */ W32((u32)(r_esi+0xf8u), r_eax);
    /* 005576b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005576b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005576b5: ret  */ FN_RET(0x0055757c); r_esp += 4; return;
L_005576b6:; BB(0x005576b6);
    /* 005576b6: fld dword ptr [0x924ed4] */ FPUSH(R_F32((u32)(0x924ed4u)));
    /* 005576bc: fld dword ptr [esi + 0xb4] */ FPUSH(R_F32((u32)(r_esi+0xb4u)));
    /* 005576c2: fld dword ptr [esi + 0xf4] */ FPUSH(R_F32((u32)(r_esi+0xf4u)));
    /* 005576c8: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005576ca: fcom dword ptr [esi + 0xe8] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xe8u))); 
    /* 005576d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005576d2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005576d4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005576d6: mov edx, dword ptr [esi + 0xe8] */ r_edx = R32((u32)(r_esi+0xe8u));
    /* 005576dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005576dd: jae 0x5576f8 */ if (!fC) goto L_005576f8;
L_005576df:; BB(0x005576df);
    /* 005576df: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005576e1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005576e3: mov dword ptr [esi + 0xb4], 0 */ W32((u32)(r_esi+0xb4u), 0x0u);
    /* 005576ed: mov dword ptr [esi + 0xf4], edx */ W32((u32)(r_esi+0xf4u), r_edx);
    /* 005576f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005576f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005576f7: ret  */ FN_RET(0x0055757c); r_esp += 4; return;
L_005576f8:; BB(0x005576f8);
    /* 005576f8: fstp dword ptr [esi + 0xb4] */ W_F32((u32)(r_esi+0xb4u), ST(0)); FPOP();
    /* 005576fe: fstp dword ptr [esi + 0xf4] */ W_F32((u32)(r_esi+0xf4u), ST(0)); FPOP();
L_00557704:; BB(0x00557704);
    /* 00557704: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00557707: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00557708: ret  */ FN_RET(0x0055757c); r_esp += 4; return;
L_00557709:; BB(0x00557709);
    /* 00557709: fld dword ptr [0x924ee4] */ FPUSH(R_F32((u32)(0x924ee4u)));
    /* 0055770f: fadd dword ptr [esi + 0xf4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xf4u));
    /* 00557715: fld dword ptr [esi + 0xf0] */ FPUSH(R_F32((u32)(r_esi+0xf0u)));
    /* 0055771b: fadd dword ptr [esi + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xb0u));
    /* 00557721: fld dword ptr [esi + 0xf8] */ FPUSH(R_F32((u32)(r_esi+0xf8u)));
    /* 00557727: fadd dword ptr [esi + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xb8u));
    /* 0055772d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055772f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557732: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00557734: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00557738: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0055773c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0055773f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557742: mov ecx, esi */ r_ecx = r_esi;
    /* 00557744: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x557749u); f_007b4c58();
    /* 00557749: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055774c: je 0x557788 */ if (fZ) goto L_00557788;
L_0055774e:; BB(0x0055774e);
    /* 0055774e: lea edx, [esi + 0xf0] */ r_edx = (u32)(r_esi+0xf0u);
    /* 00557754: lea eax, [esi + 0xdc] */ r_eax = (u32)(r_esi+0xdcu);
    /* 0055775a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055775b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055775c: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x557761u); f_0078ea50();
    /* 00557761: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557764: fld dword ptr [esi + 0xec] */ FPUSH(R_F32((u32)(r_esi+0xecu)));
    /* 0055776a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0055776c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0055776e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00557770: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00557771: ja 0x5576b6 */ if ((!fC&&!fZ)) goto L_005576b6;
L_00557777:; BB(0x00557777);
    /* 00557777: mov eax, 1 */ r_eax = 0x1u;
    /* 0055777c: mov word ptr [esi + 0xae], ax */ W16((u32)(r_esi+0xaeu), (u16)r_eax);
    /* 00557783: jmp 0x5576b6 */ goto L_005576b6;
L_00557788:; BB(0x00557788);
    /* 00557788: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0055778b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055778f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00557793: mov dword ptr [esi + 0xf0], edx */ W32((u32)(r_esi+0xf0u), r_edx);
    /* 00557799: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0055779d: mov dword ptr [esi + 0xf8], eax */ W32((u32)(r_esi+0xf8u), r_eax);
    /* 005577a3: fcom dword ptr [esi + 0xf4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xf4u))); 
    /* 005577a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005577ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005577ac: jbe 0x5577d5 */ if ((fC||fZ)) goto L_005577d5;
L_005577ae:; BB(0x005577ae);
    /* 005577ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005577b0: push dword ptr [esi + 0xb4] */ { u32 v = R32((u32)(r_esi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005577b6: mov dword ptr [esi + 0xf4], edx */ W32((u32)(r_esi+0xf4u), r_edx);
    /* 005577bc: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x5577c1u); f_0082e900();
    /* 005577c1: fld dword ptr [0x924ecc] */ FPUSH(R_F32((u32)(0x924eccu)));
    /* 005577c7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005577c9: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005577cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005577cf: fstp dword ptr [esi + 0xb4] */ W_F32((u32)(r_esi+0xb4u), ST(0)); FPOP();
L_005577d5:; BB(0x005577d5);
    /* 005577d5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005577d7: fsub dword ptr [esi + 0xe8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xe8u));
    /* 005577dd: fcomp dword ptr [0x924ec8] */ fx_compare(ST(0), R_F32((u32)(0x924ec8u))); FPOP();
    /* 005577e3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005577e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005577e6: jbe 0x5577fb */ if ((fC||fZ)) goto L_005577fb;
L_005577e8:; BB(0x005577e8);
    /* 005577e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005577ea: mov eax, 1 */ r_eax = 0x1u;
    /* 005577ef: mov word ptr [esi + 0xae], ax */ W16((u32)(r_esi+0xaeu), (u16)r_eax);
    /* 005577f6: jmp 0x55774e */ goto L_0055774e;
L_005577fb:; BB(0x005577fb);
    /* 005577fb: fstp dword ptr [esi + 0xe8] */ W_F32((u32)(r_esi+0xe8u), ST(0)); FPOP();
    /* 00557801: jmp 0x55774e */ goto L_0055774e;
}

void f_00557808(void) /* sub_557808 */
{
    FN_ENTER(0x00557808);
    /* 00557808: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00557809: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055780b: mov ecx, dword ptr [0xa73b14] */ r_ecx = R32((u32)(0xa73b14u));
    /* 00557811: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x557816u); f_00829cc8();
    /* 00557816: mov ecx, dword ptr [ebx + 0xd8] */ r_ecx = R32((u32)(r_ebx+0xd8u));
    /* 0055781c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x557821u); f_00829cc8();
    /* 00557821: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x557826u); f_0082d7b0();
    /* 00557826: lea ecx, [ebx + 0xf0] */ r_ecx = (u32)(r_ebx+0xf0u);
    /* 0055782c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x557831u); f_0082d838();
    /* 00557831: mov edx, dword ptr [ebx + 0xc0] */ r_edx = R32((u32)(r_ebx+0xc0u));
    /* 00557837: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00557839: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55783eu); f_0082d8bc();
    /* 0055783e: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00557843: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00557848: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0055784d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055784f: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x557854u); f_0082fa0c();
    /* 00557854: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00557859: push dword ptr [ebx + 0xc8] */ { u32 v = R32((u32)(r_ebx+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055785f: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00557864: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00557869: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x55786eu); f_0082e1e8();
    /* 0055786e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055786f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x557874u); f_0082da80();
    /* 00557874: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00557875: ret  */ FN_RET(0x00557808); r_esp += 4; return;
}

void f_00557878(void) /* sub_557878 */
{
    FN_ENTER(0x00557878);
    /* 00557878: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00557879: mov edi, ecx */ r_edi = r_ecx;
    /* 0055787b: mov ecx, edi */ r_ecx = r_edi;
    /* 0055787d: call 0x5578ac */ r_esp -= 4; W32(r_esp, 0x557882u); f_005578ac();
    /* 00557882: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00557885: je 0x5578a7 */ if (fZ) goto L_005578a7;
L_00557887:; BB(0x00557887);
    /* 00557887: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0055788d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055788f: je 0x55789b */ if (fZ) goto L_0055789b;
L_00557891:; BB(0x00557891);
    /* 00557891: mov dword ptr [eax + 0x340], 1 */ W32((u32)(r_eax+0x340u), 0x1u);
L_0055789b:; BB(0x0055789b);
    /* 0055789b: mov eax, 2 */ r_eax = 0x2u;
    /* 005578a0: mov word ptr [edi + 0xae], ax */ W16((u32)(r_edi+0xaeu), (u16)r_eax);
L_005578a7:; BB(0x005578a7);
    /* 005578a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005578a8: ret  */ FN_RET(0x00557878); r_esp += 4; return;
}

void f_005578ac(void) /* sub_5578AC */
{
    FN_ENTER(0x005578ac);
    /* 005578ac: movsx eax, word ptr [ecx + 0xae] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xaeu));
    /* 005578b3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005578b6: je 0x5578bb */ if (fZ) goto L_005578bb;
L_005578b8:; BB(0x005578b8);
    /* 005578b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005578ba: ret  */ FN_RET(0x005578ac); r_esp += 4; return;
L_005578bb:; BB(0x005578bb);
    /* 005578bb: mov eax, 1 */ r_eax = 0x1u;
    /* 005578c0: ret  */ FN_RET(0x005578ac); r_esp += 4; return;
}

void f_005578c4(void) /* sub_5578C4 */
{
    FN_ENTER(0x005578c4);
    /* 005578c4: mov dword ptr [0xa73b3c], 0x3f800000 */ W32((u32)(0xa73b3cu), 0x3f800000u);
    /* 005578ce: mov dword ptr [0xa73b40], 0x41000000 */ W32((u32)(0xa73b40u), 0x41000000u);
    /* 005578d8: mov dword ptr [0xa73b44], 0x3fc00000 */ W32((u32)(0xa73b44u), 0x3fc00000u);
    /* 005578e2: ret  */ FN_RET(0x005578c4); r_esp += 4; return;
}

void f_005578e4(void) /* sub_5578E4 */
{
    FN_ENTER(0x005578e4);
    /* 005578e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005578e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005578e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005578e9: call 0x557908 */ r_esp -= 4; W32(r_esp, 0x5578eeu); f_00557908();
    /* 005578ee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005578f2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005578f4: jne 0x5578fa */ if (!fZ) goto L_005578fa;
L_005578f6:; BB(0x005578f6);
    /* 005578f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005578f7: ret 4 */ FN_RET(0x005578e4); r_esp += 8; return;
L_005578fa:; BB(0x005578fa);
    /* 005578fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005578fb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x557900u); f_005c2f74();
    /* 00557900: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00557901: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00557902: ret 4 */ FN_RET(0x005578e4); r_esp += 8; return;
}

void f_00557908(void) /* sub_557908 */
{
    FN_ENTER(0x00557908);
    /* 00557908: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557909: mov ebp, esp */ r_ebp = r_esp;
    /* 0055790b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055790d: push 0x8d6390 */ { u32 v = 0x8d6390u; r_esp -= 4; W32(r_esp, v); }
    /* 00557912: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00557918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557919: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00557920: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557923: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00557926: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00557929: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0055792c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0055792f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00557932: mov dword ptr [ecx], 0xb04a40 */ W32((u32)(r_ecx), 0xb04a40u);
    /* 00557938: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055793f: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00557944: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00557947: add eax, 0x3c8 */ {  u32 a = r_eax; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055794c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055794e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00557950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557951: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x557956u); f_008586d6();
    /* 00557956: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055795d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00557960: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x557965u); f_0051f4fc();
    /* 00557965: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557968: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055796f: mov esp, ebp */ r_esp = r_ebp;
    /* 00557971: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557972: ret  */ FN_RET(0x00557908); r_esp += 4; return;
}

void f_00557974(void) /* sub_557974 */
{
    FN_ENTER(0x00557974);
    /* 00557974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557975: mov ebp, esp */ r_ebp = r_esp;
    /* 00557977: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00557979: push 0x8d63ca */ { u32 v = 0x8d63cau; r_esp -= 4; W32(r_esp, v); }
    /* 0055797e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00557984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557985: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055798c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055798f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00557992: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00557995: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00557998: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0055799b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055799e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005579a1: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x5579a6u); f_005216f4();
    /* 005579a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005579ad: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005579b2: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 005579b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005579ba: mov dword ptr [eax], 0xb04a40 */ W32((u32)(r_eax), 0xb04a40u);
    /* 005579c0: add eax, 0x3c8 */ {  u32 a = r_eax; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005579c5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005579c7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005579c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005579ca: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5579cfu); f_00858736();
    /* 005579cf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005579d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005579d9: mov eax, dword ptr [0x9bde0c] */ r_eax = R32((u32)(0x9bde0cu));
    /* 005579de: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005579e1: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x5579e6u); f_00520370();
    /* 005579e6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005579e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005579ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005579f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005579f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005579f6: ret 4 */ FN_RET(0x00557974); r_esp += 8; return;
}

void f_005579fc(void) /* sub_5579FC */
{
    FN_ENTER(0x005579fc);
    /* 005579fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005579fd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557a00: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00557a02: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00557a07: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00557a0e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00557a16: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00557a1e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x557a23u); f_0082d990();
    /* 00557a23: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00557a26: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x557a2bu); f_0082d838();
    /* 00557a2b: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00557a2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00557a30: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x557a35u); f_0082d8bc();
    /* 00557a35: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00557a3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00557a3d: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x557a42u); f_007aaab8();
    /* 00557a42: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x557a47u); f_0082da80();
    /* 00557a47: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00557a4b: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00557a4e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00557a50: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00557a52: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00557a54: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00557a56: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00557a58: add ecx, dword ptr [0xaab540] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaab540u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00557a5e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x557a63u); f_0082d990();
    /* 00557a63: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00557a67: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00557a6b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00557a6d: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x557a72u); f_00830aa0();
    /* 00557a72: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x557a77u); f_0082da80();
    /* 00557a77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00557a7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557a7b: ret 8 */ FN_RET(0x005579fc); r_esp += 12; return;
}

void f_00557a80(void) /* sub_557A80 */
{
    FN_ENTER(0x00557a80);
    /* 00557a80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557a83: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00557a87: mov ecx, dword ptr [0xa73b4c] */ r_ecx = R32((u32)(0xa73b4cu));
    /* 00557a8d: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00557a90: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557a93: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557a97: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557a9c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557aa0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557aa4: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557aa8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557aab: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557aaf: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00557ab2: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00557ab5: mov ecx, dword ptr [0xa73b4c] */ r_ecx = R32((u32)(0xa73b4cu));
    /* 00557abb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557abe: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557ac2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557ac7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557acb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557acf: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557ad3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557ad6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557ada: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00557add: mov ecx, dword ptr [0xa73b4c] */ r_ecx = R32((u32)(0xa73b4cu));
    /* 00557ae3: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00557ae6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557ae9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557aed: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557af2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557af6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557afa: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557afe: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557b01: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557b05: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00557b08: mov ecx, dword ptr [0xa73b50] */ r_ecx = R32((u32)(0xa73b50u));
    /* 00557b0e: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00557b11: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557b14: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557b18: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557b1d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557b21: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557b25: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557b29: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557b2c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557b30: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00557b33: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00557b36: mov ecx, dword ptr [0xa73b50] */ r_ecx = R32((u32)(0xa73b50u));
    /* 00557b3c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557b3f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557b43: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557b48: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557b4c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557b50: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557b54: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557b57: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557b5b: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00557b5e: mov ecx, dword ptr [0xa73b50] */ r_ecx = R32((u32)(0xa73b50u));
    /* 00557b64: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00557b67: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557b6a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557b6e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557b73: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557b77: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557b7b: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557b7f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557b82: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557b86: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00557b89: mov ecx, dword ptr [0xa73b54] */ r_ecx = R32((u32)(0xa73b54u));
    /* 00557b8f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00557b92: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557b95: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557b99: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557b9e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557ba2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557ba6: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557baa: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557bad: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557bb1: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00557bb4: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00557bb7: mov ecx, dword ptr [0xa73b54] */ r_ecx = R32((u32)(0xa73b54u));
    /* 00557bbd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557bc0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557bc4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557bc9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557bcd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557bd1: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557bd5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557bd8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557bdc: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00557bdf: mov ecx, dword ptr [0xa73b54] */ r_ecx = R32((u32)(0xa73b54u));
    /* 00557be5: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00557be8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557beb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557bef: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557bf4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557bf8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557bfc: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557c00: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557c03: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557c07: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00557c0a: mov ecx, dword ptr [0xa73b58] */ r_ecx = R32((u32)(0xa73b58u));
    /* 00557c10: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00557c13: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557c16: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557c1a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557c1f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557c23: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557c27: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557c2b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557c2e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557c32: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00557c35: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00557c38: mov ecx, dword ptr [0xa73b58] */ r_ecx = R32((u32)(0xa73b58u));
    /* 00557c3e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557c41: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557c45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557c4a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557c4e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557c52: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557c56: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557c59: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557c5d: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00557c60: mov ecx, dword ptr [0xa73b58] */ r_ecx = R32((u32)(0xa73b58u));
    /* 00557c66: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00557c69: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557c6c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557c70: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557c75: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557c79: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557c7d: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557c81: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557c84: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557c88: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00557c8b: mov ecx, dword ptr [0xa73b5c] */ r_ecx = R32((u32)(0xa73b5cu));
    /* 00557c91: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00557c94: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557c97: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557c9b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557ca0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557ca4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557ca8: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557cac: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557caf: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557cb3: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00557cb6: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00557cb9: mov ecx, dword ptr [0xa73b5c] */ r_ecx = R32((u32)(0xa73b5cu));
    /* 00557cbf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557cc2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557cc6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557ccb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557ccf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557cd3: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557cd7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557cda: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557cde: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00557ce1: mov ecx, dword ptr [0xa73b5c] */ r_ecx = R32((u32)(0xa73b5cu));
    /* 00557ce7: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00557cea: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557ced: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557cf1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557cf6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557cfa: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557cfe: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557d02: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557d05: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557d09: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00557d0c: mov ecx, dword ptr [0xa73b60] */ r_ecx = R32((u32)(0xa73b60u));
    /* 00557d12: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00557d15: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557d18: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557d1c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557d21: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557d25: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557d29: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557d2d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557d30: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557d34: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00557d37: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00557d3a: mov ecx, dword ptr [0xa73b60] */ r_ecx = R32((u32)(0xa73b60u));
    /* 00557d40: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557d43: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557d47: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557d4c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557d50: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557d54: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557d58: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557d5b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557d5f: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00557d62: mov ecx, dword ptr [0xa73b60] */ r_ecx = R32((u32)(0xa73b60u));
    /* 00557d68: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00557d6b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557d6e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557d72: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557d77: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557d7b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557d7f: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557d83: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557d86: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557d8a: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00557d8d: mov ecx, dword ptr [0xa73b64] */ r_ecx = R32((u32)(0xa73b64u));
    /* 00557d93: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00557d96: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557d99: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557d9d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557da2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557da6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557daa: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557dae: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557db1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557db5: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00557db8: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00557dbb: mov ecx, dword ptr [0xa73b64] */ r_ecx = R32((u32)(0xa73b64u));
    /* 00557dc1: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557dc4: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557dc8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557dcd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557dd1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557dd5: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557dd9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557ddc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557de0: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00557de3: mov ecx, dword ptr [0xa73b64] */ r_ecx = R32((u32)(0xa73b64u));
    /* 00557de9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00557dec: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557def: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557df3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557df8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557dfc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557e00: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557e04: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557e07: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557e0b: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00557e0e: mov ecx, dword ptr [0xa73b68] */ r_ecx = R32((u32)(0xa73b68u));
    /* 00557e14: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00557e17: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557e1a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557e1e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557e23: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557e27: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557e2b: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557e2f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557e32: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557e36: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00557e39: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00557e3c: mov ecx, dword ptr [0xa73b68] */ r_ecx = R32((u32)(0xa73b68u));
    /* 00557e42: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557e45: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557e49: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557e4e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557e52: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557e56: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557e5a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557e5d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557e61: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00557e64: mov ecx, dword ptr [0xa73b68] */ r_ecx = R32((u32)(0xa73b68u));
    /* 00557e6a: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00557e6d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557e70: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557e74: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557e79: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557e7d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557e81: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557e85: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557e88: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557e8c: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00557e8f: mov ecx, dword ptr [0xa73b6c] */ r_ecx = R32((u32)(0xa73b6cu));
    /* 00557e95: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00557e98: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557e9b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557e9f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557ea4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557ea8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557eac: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557eb0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557eb3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557eb7: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00557eba: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00557ebd: mov ecx, dword ptr [0xa73b6c] */ r_ecx = R32((u32)(0xa73b6cu));
    /* 00557ec3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557ec6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557eca: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557ecf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557ed3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557ed7: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557edb: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557ede: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557ee2: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00557ee5: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00557ee8: mov edx, dword ptr [0xa73b6c] */ r_edx = R32((u32)(0xa73b6cu));
    /* 00557eee: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00557ef1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00557ef5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557efa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00557efe: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00557f02: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00557f06: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00557f09: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00557f0d: mov byte ptr [edx + 4], al */ W8((u32)(r_edx+0x4u), (u8)r_eax);
    /* 00557f10: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00557f13: ret 4 */ FN_RET(0x00557a80); r_esp += 8; return;
}

void f_00557f18(void)
{
    FN_ENTER(0x00557f18);
    /* 00557f18: mov ecx, dword ptr [0xa73b8c] */ r_ecx = R32((u32)(0xa73b8cu));
    /* 00557f1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557f20: je 0x557f34 */ if (fZ) goto L_00557f34;
L_00557f22:; BB(0x00557f22);
    /* 00557f22: je 0x557f2a */ if (fZ) goto L_00557f2a;
L_00557f24:; BB(0x00557f24);
    /* 00557f24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557f26: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00557f28: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x557f2au); call_ind(t); }
L_00557f2a:; BB(0x00557f2a);
    /* 00557f2a: mov dword ptr [0xa73b8c], 0 */ W32((u32)(0xa73b8cu), 0x0u);
L_00557f34:; BB(0x00557f34);
    /* 00557f34: mov ecx, dword ptr [0xa73b88] */ r_ecx = R32((u32)(0xa73b88u));
    /* 00557f3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557f3c: je 0x557f50 */ if (fZ) goto L_00557f50;
L_00557f3e:; BB(0x00557f3e);
    /* 00557f3e: je 0x557f46 */ if (fZ) goto L_00557f46;
L_00557f40:; BB(0x00557f40);
    /* 00557f40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557f42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00557f44: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x557f46u); call_ind(t); }
L_00557f46:; BB(0x00557f46);
    /* 00557f46: mov dword ptr [0xa73b88], 0 */ W32((u32)(0xa73b88u), 0x0u);
L_00557f50:; BB(0x00557f50);
    /* 00557f50: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00557f56: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00557f58: je 0x557f6d */ if (fZ) goto L_00557f6d;
L_00557f5a:; BB(0x00557f5a);
    /* 00557f5a: je 0x557f63 */ if (fZ) goto L_00557f63;
L_00557f5c:; BB(0x00557f5c);
    /* 00557f5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557f5e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x557f63u); f_004066a8();
L_00557f63:; BB(0x00557f63);
    /* 00557f63: mov dword ptr [0xa73b90], 0 */ W32((u32)(0xa73b90u), 0x0u);
L_00557f6d:; BB(0x00557f6d);
    /* 00557f6d: ret  */ FN_RET(0x00557f18); r_esp += 4; return;
}

void f_00557f70(void) /* sub_557F70 */
{
    FN_ENTER(0x00557f70);
    /* 00557f70: mov dword ptr [0xa73b70], 0x3f800000 */ W32((u32)(0xa73b70u), 0x3f800000u);
    /* 00557f7a: mov dword ptr [0xa73b74], 0x41000000 */ W32((u32)(0xa73b74u), 0x41000000u);
    /* 00557f84: mov dword ptr [0xa73b78], 0x3fc00000 */ W32((u32)(0xa73b78u), 0x3fc00000u);
    /* 00557f8e: ret  */ FN_RET(0x00557f70); r_esp += 4; return;
}

void f_00557f90(void)
{
    FN_ENTER(0x00557f90);
    /* 00557f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00557f93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00557f95: push 0x8d6426 */ { u32 v = 0x8d6426u; r_esp -= 4; W32(r_esp, v); }
    /* 00557f9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00557fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557fa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00557fa8: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557fab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00557fae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00557fb1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00557fb4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00557fb7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00557fbc: mov dword ptr [0xa73b7c], 0 */ W32((u32)(0xa73b7cu), 0x0u);
    /* 00557fc6: mov dword ptr [0xa73b80], 0 */ W32((u32)(0xa73b80u), 0x0u);
    /* 00557fd0: mov dword ptr [0xa73b84], 0 */ W32((u32)(0xa73b84u), 0x0u);
    /* 00557fda: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00557fe1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x557fe6u); f_008581c5();
    /* 00557fe6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00557fe7: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00557fea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557fec: je 0x55832b */ if (fZ) goto L_0055832b;
L_00557ff2:; BB(0x00557ff2);
    /* 00557ff2: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00557ff9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00558000: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558003: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558005: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558007: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558008: push 0x9bddfc */ { u32 v = 0x9bddfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055800d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055800f: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x558014u); f_005b7a84();
    /* 00558014: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00558017: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0055801e: mov dword ptr [0xa73b90], eax */ W32((u32)(0xa73b90u), r_eax);
    /* 00558023: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055802a: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00558031: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00558033: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x558038u); f_008581c5();
    /* 00558038: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00558039: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055803c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055803e: je 0x558324 */ if (fZ) goto L_00558324;
L_00558044:; BB(0x00558044);
    /* 00558044: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0055804b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00558052: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558058: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055805a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55805fu); f_005b8610();
    /* 0055805f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558062: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558063: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x558068u); f_00511b74();
    /* 00558068: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0055806b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00558072: mov dword ptr [0xa73b8c], eax */ W32((u32)(0xa73b8cu), r_eax);
    /* 00558077: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055807e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00558085: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00558087: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55808cu); f_008581c5();
    /* 0055808c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055808d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00558090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558092: je 0x55831d */ if (fZ) goto L_0055831d;
L_00558098:; BB(0x00558098);
    /* 00558098: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0055809f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005580a6: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005580ac: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005580ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5580b3u); f_005b8610();
    /* 005580b3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005580b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005580b7: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x5580bcu); f_00511b74();
    /* 005580bc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005580bf: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005580c6: mov dword ptr [0xa73b88], eax */ W32((u32)(0xa73b88u), r_eax);
    /* 005580cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005580d2: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580d4: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5580d9u); f_0077a684();
    /* 005580d9: mov dword ptr [0xa73bd8], eax */ W32((u32)(0xa73bd8u), r_eax);
    /* 005580de: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580e0: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5580e5u); f_0077a698();
    /* 005580e5: mov dword ptr [0xa73bd4], eax */ W32((u32)(0xa73bd4u), r_eax);
    /* 005580ea: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580ec: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5580f1u); f_0077a6b4();
    /* 005580f1: mov dword ptr [0xa73bd0], eax */ W32((u32)(0xa73bd0u), r_eax);
    /* 005580f6: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580f8: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5580fdu); f_0077a6cc();
    /* 005580fd: mov dword ptr [0xa73bcc], eax */ W32((u32)(0xa73bccu), r_eax);
    /* 00558102: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558104: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x558109u); f_0077a684();
    /* 00558109: mov dword ptr [0xa73c14], eax */ W32((u32)(0xa73c14u), r_eax);
    /* 0055810e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558110: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x558115u); f_0077a698();
    /* 00558115: mov dword ptr [0xa73c10], eax */ W32((u32)(0xa73c10u), r_eax);
    /* 0055811a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0055811c: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x558121u); f_0077a6b4();
    /* 00558121: mov dword ptr [0xa73c0c], eax */ W32((u32)(0xa73c0cu), r_eax);
    /* 00558126: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558128: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55812du); f_0077a6cc();
    /* 0055812d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558130: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558136: mov dword ptr [0xa73c08], eax */ W32((u32)(0xa73c08u), r_eax);
    /* 0055813b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055813d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558142u); f_005b8610();
    /* 00558142: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558148: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055814a: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055814d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558150: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558153: mov dword ptr [0xa73b4c], ebx */ W32((u32)(0xa73b4cu), r_ebx);
    /* 00558159: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55815eu); f_005b8610();
    /* 0055815e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558160: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558163: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00558166: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00558169: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 0055816c: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0055816f: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00558172: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00558175: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055817b: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055817e: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558181: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558184: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00558187: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055818a: mov dword ptr [0xa73b50], eax */ W32((u32)(0xa73b50u), r_eax);
    /* 0055818f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558194u); f_005b8610();
    /* 00558194: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558196: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558199: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0055819c: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 0055819f: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 005581a2: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 005581a5: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 005581a8: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 005581ab: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005581b1: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581b4: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581ba: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581bd: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581c0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581c3: mov dword ptr [0xa73b54], eax */ W32((u32)(0xa73b54u), r_eax);
    /* 005581c8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5581cdu); f_005b8610();
    /* 005581cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005581cf: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581d2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005581d5: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 005581d8: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 005581db: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 005581de: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 005581e1: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 005581e4: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005581ea: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581ed: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f0: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f3: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f6: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581f9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581fc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581ff: mov dword ptr [0xa73b58], eax */ W32((u32)(0xa73b58u), r_eax);
    /* 00558204: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558209u); f_005b8610();
    /* 00558209: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055820b: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055820e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00558211: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00558214: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00558217: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0055821a: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0055821d: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00558220: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558226: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558229: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055822c: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055822f: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558232: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558235: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558238: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055823b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055823e: mov dword ptr [0xa73b5c], eax */ W32((u32)(0xa73b5cu), r_eax);
    /* 00558243: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558248u); f_005b8610();
    /* 00558248: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055824e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00558250: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558253: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558256: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558259: mov dword ptr [0xa73b60], ebx */ W32((u32)(0xa73b60u), r_ebx);
    /* 0055825f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558264u); f_005b8610();
    /* 00558264: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055826a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055826c: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055826f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558272: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558275: mov dword ptr [0xa73b64], ebx */ W32((u32)(0xa73b64u), r_ebx);
    /* 0055827b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558280u); f_005b8610();
    /* 00558280: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558286: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558288: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055828b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055828e: mov dword ptr [0xa73b6c], edx */ W32((u32)(0xa73b6cu), r_edx);
    /* 00558294: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558299u); f_005b8610();
    /* 00558299: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055829c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055829f: mov dword ptr [0xa73b68], edx */ W32((u32)(0xa73b68u), r_edx);
    /* 005582a5: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x5582aau); f_0052d360();
    /* 005582aa: mov eax, dword ptr [0x924f14] */ r_eax = R32((u32)(0x924f14u));
    /* 005582af: movzx edx, word ptr [0x924f18] */ r_edx = (u32)R16((u32)(0x924f18u));
    /* 005582b6: movzx ecx, word ptr [0x924f1a] */ r_ecx = (u32)R16((u32)(0x924f1au));
    /* 005582bd: movzx ebx, word ptr [0x924f1c] */ r_ebx = (u32)R16((u32)(0x924f1cu));
    /* 005582c4: mov edi, dword ptr [0xa73b90] */ r_edi = R32((u32)(0xa73b90u));
    /* 005582ca: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005582d0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005582d3: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005582d7: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005582dd: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005582e1: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005582e5: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005582e8: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005582eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005582ec: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005582f1: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005582f6: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005582f9: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005582fc: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 005582fe: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x558303u); f_00608470();
    /* 00558303: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00558306: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00558309: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055830c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055830f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00558312: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00558319: mov esp, ebp */ r_esp = r_ebp;
    /* 0055831b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055831c: ret  */ FN_RET(0x00557f90); r_esp += 4; return;
L_0055831d:; BB(0x0055831d);
    /* 0055831d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055831f: jmp 0x5580c6 */ f_005580c6(); return;
L_00558324:; BB(0x00558324);
    /* 00558324: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558326: jmp 0x558072 */ f_00558072(); return;
L_0055832b:; BB(0x0055832b);
    /* 0055832b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055832d: jmp 0x55801e */ f_0055801e(); return;
}

