#include "protos.h"

void f_00638070(void) /* sub_638070 */
{
    FN_ENTER(0x00638070);
    /* 00638070: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00638071: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00638073: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00638075: call 0x638094 */ r_esp -= 4; W32(r_esp, 0x63807au); f_00638094();
    /* 0063807a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063807e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638080: jne 0x638086 */ if (!fZ) goto L_00638086;
L_00638082:; BB(0x00638082);
    /* 00638082: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00638083: ret 4 */ FN_RET(0x00638070); r_esp += 8; return;
L_00638086:; BB(0x00638086);
    /* 00638086: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00638087: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63808cu); f_005c2f74();
    /* 0063808c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063808d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063808e: ret 4 */ FN_RET(0x00638070); r_esp += 8; return;
}

void f_00638094(void) /* sub_638094 */
{
    FN_ENTER(0x00638094);
    /* 00638094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638095: mov ebp, esp */ r_ebp = r_esp;
    /* 00638097: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00638099: push 0x8e480c */ { u32 v = 0x8e480cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063809e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006380a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006380a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006380ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006380af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006380b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006380b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006380b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006380bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006380be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006380c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006380c8: mov dword ptr [eax], 0xb2cc20 */ W32((u32)(r_eax), 0xb2cc20u);
    /* 006380ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006380cf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6380d4u); f_007b4e84();
    /* 006380d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006380d5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006380d8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6380ddu); f_007b9c8c();
    /* 006380dd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006380e0: push dword ptr [eax + 0x33c] */ { u32 v = R32((u32)(r_eax+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006380e6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6380ebu); f_00857e98();
    /* 006380eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006380ec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006380f3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006380f6: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6380fbu); f_00770660();
    /* 006380fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006380fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00638105: mov esp, ebp */ r_esp = r_ebp;
    /* 00638107: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638108: ret  */ FN_RET(0x00638094); r_esp += 4; return;
}

void f_0063810c(void)
{
    FN_ENTER(0x0063810c);
    /* 0063810c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063810d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063810f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00638111: push 0x8e4834 */ { u32 v = 0x8e4834u; r_esp -= 4; W32(r_esp, v); }
    /* 00638116: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063811c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063811d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00638124: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638127: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063812a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063812d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00638130: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00638133: push 0x340 */ { u32 v = 0x340u; r_esp -= 4; W32(r_esp, v); }
    /* 00638138: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063813f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x638144u); f_005caba4();
    /* 00638144: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638145: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00638148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063814a: je 0x638183 */ if (fZ) goto L_00638183;
L_0063814c:; BB(0x0063814c);
    /* 0063814c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00638153: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063815a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063815d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638163: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00638166: call 0x638188 */ r_esp -= 4; W32(r_esp, 0x63816bu); f_00638188();
    /* 0063816b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063816e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00638175:; BB(0x00638175);
    /* 00638175: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638178: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063817f: mov esp, ebp */ r_esp = r_ebp;
    /* 00638181: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638182: ret  */ FN_RET(0x0063810c); r_esp += 4; return;
L_00638183:; BB(0x00638183);
    /* 00638183: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638185: jmp 0x638175 */ goto L_00638175;
}

void f_00638188(void) /* sub_638188 */
{
    FN_ENTER(0x00638188);
    /* 00638188: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638189: mov ebp, esp */ r_ebp = r_esp;
    /* 0063818b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063818d: push 0x8e4850 */ { u32 v = 0x8e4850u; r_esp -= 4; W32(r_esp, v); }
    /* 00638192: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00638198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638199: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006381a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006381a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006381a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006381a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006381ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006381af: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006381b2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006381b5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006381b8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006381bb: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x6381c0u); f_00770748();
    /* 006381c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006381c7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006381ca: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006381cd: mov dword ptr [ecx], 0xb2cc20 */ W32((u32)(r_ecx), 0xb2cc20u);
    /* 006381d3: mov eax, dword ptr [0x9c673c] */ r_eax = R32((u32)(0x9c673cu));
    /* 006381d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006381d9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006381dc: call dword ptr [0xb2cc34] */ { u32 t = R32((u32)(0xb2cc34u)); r_esp -= 4; W32(r_esp, 0x6381e2u); call_ind(t); }
    /* 006381e2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006381e5: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006381e8: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006381eb: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 006381ee: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 006381f4: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 006381fa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006381fd: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00638203: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00638209: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0063820f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00638215: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0063821b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00638221: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00638224: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0063822a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063822d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00638233: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00638236: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0063823c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0063823f: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00638245: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00638248: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63824du); f_0077a1f4();
    /* 0063824d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063824f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x638254u); f_008581c5();
    /* 00638254: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638255: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00638258: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063825a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063825b: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00638261: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x638266u); f_007b9a88();
    /* 00638266: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00638269: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x63826eu); f_007b999c();
    /* 0063826e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063826f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00638272: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x638277u); f_007b4f54();
    /* 00638277: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063827a: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00638280: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00638286: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00638289: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063828c: mov ebx, dword ptr [ecx + 0x33c] */ r_ebx = R32((u32)(r_ecx+0x33cu));
    /* 00638292: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00638295: mov dword ptr [ebx + 4], 0 */ W32((u32)(r_ebx+0x4u), 0x0u);
    /* 0063829c: mov edi, dword ptr [esi + 0x33c] */ r_edi = R32((u32)(r_esi+0x33cu));
    /* 006382a2: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 006382a9: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 006382af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006382b1: jne 0x6382ba */ if (!fZ) goto L_006382ba;
L_006382b3:; BB(0x006382b3);
    /* 006382b3: call 0x638530 */ r_esp -= 4; W32(r_esp, 0x6382b8u); f_00638530();
    /* 006382b8: jmp 0x6382bf */ goto L_006382bf;
L_006382ba:; BB(0x006382ba);
    /* 006382ba: call 0x6384d8 */ r_esp -= 4; W32(r_esp, 0x6382bfu); f_006384d8();
L_006382bf:; BB(0x006382bf);
    /* 006382bf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006382c2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006382c5: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006382c8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006382cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006382ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006382d5: mov esp, ebp */ r_esp = r_ebp;
    /* 006382d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006382d8: ret 8 */ FN_RET(0x00638188); r_esp += 12; return;
}

void f_006382dc(void) /* sub_6382DC */
{
    FN_ENTER(0x006382dc);
    /* 006382dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006382dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006382de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006382df: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006382e5: mov edx, ecx */ r_edx = r_ecx;
    /* 006382e7: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 006382ed: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006382f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006382f5: mov esi, eax */ r_esi = r_eax;
    /* 006382f7: mov eax, ecx */ r_eax = r_ecx;
    /* 006382f9: mov edi, edx */ r_edi = r_edx;
L_006382fb:; BB(0x006382fb);
    /* 006382fb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006382fd: jge 0x6384ab */ if ((fS==fO)) goto L_006384ab;
L_00638303:; BB(0x00638303);
    /* 00638303: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 0063830a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063830c: je 0x6384a3 */ if (fZ) goto L_006384a3;
L_00638312:; BB(0x00638312);
    /* 00638312: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638314: je 0x6384a3 */ if (fZ) goto L_006384a3;
L_0063831a:; BB(0x0063831a);
    /* 0063831a: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0063831d: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638323: jne 0x6384a3 */ if (!fZ) goto L_006384a3;
L_00638329:; BB(0x00638329);
    /* 00638329: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0063832d: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638333: je 0x6384a3 */ if (fZ) goto L_006384a3;
L_00638339:; BB(0x00638339);
    /* 00638339: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063833f: jge 0x6384a3 */ if ((fS==fO)) goto L_006384a3;
L_00638345:; BB(0x00638345);
    /* 00638345: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 0063834b: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638351: jne 0x6384a3 */ if (!fZ) goto L_006384a3;
L_00638357:; BB(0x00638357);
    /* 00638357: mov ecx, dword ptr [edi + 0x8c] */ r_ecx = R32((u32)(r_edi+0x8cu));
    /* 0063835d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063835f: jne 0x63840d */ if (!fZ) goto L_0063840d;
L_00638365:; BB(0x00638365);
    /* 00638365: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00638369: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063836a: push dword ptr [edi + 0x33c] */ { u32 v = R32((u32)(r_edi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00638370: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638373: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638376: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00638379: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063837c: call 0x7b97d0 */ r_esp -= 4; W32(r_esp, 0x638381u); f_007b97d0();
    /* 00638381: lea ecx, [esp + 0x98] */ r_ecx = (u32)(r_esp+0x98u);
    /* 00638388: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00638389: lea eax, [ebx + 0x758] */ r_eax = (u32)(r_ebx+0x758u);
    /* 0063838f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638390: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638393: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00638396: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638399: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x63839eu); f_007b97a0();
    /* 0063839e: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 006383a2: lea ecx, [esp + 0xac] */ r_ecx = (u32)(r_esp+0xacu);
    /* 006383a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006383aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006383ab: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x6383b0u); f_0083d2fc();
    /* 006383b0: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006383b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006383b5: jne 0x6383c7 */ if (!fZ) goto L_006383c7;
L_006383b7:; BB(0x006383b7);
    /* 006383b7: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006383bc: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006383c2: jmp 0x6384a3 */ goto L_006384a3;
L_006383c7:; BB(0x006383c7);
    /* 006383c7: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006383ca: mov edx, 1 */ r_edx = 0x1u;
L_006383cf:; BB(0x006383cf);
    /* 006383cf: mov ecx, edx */ r_ecx = r_edx;
    /* 006383d1: and ecx, dword ptr [edi + 0x84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x84u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006383d7: test ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006383d9: jne 0x6383e0 */ if (!fZ) goto L_006383e0;
L_006383db:; BB(0x006383db);
    /* 006383db: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006383dd: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_006383e0:; BB(0x006383e0);
    /* 006383e0: mov ecx, edx */ r_ecx = r_edx;
    /* 006383e2: and ecx, dword ptr [edi + 0x88] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x88u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006383e8: test ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006383ea: je 0x6383f3 */ if (fZ) goto L_006383f3;
L_006383ec:; BB(0x006383ec);
    /* 006383ec: not ecx */ r_ecx = ~r_ecx;
    /* 006383ee: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006383f0: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_006383f3:; BB(0x006383f3);
    /* 006383f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006383f5: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006383fb: jl 0x6383cf */ if ((fS!=fO)) goto L_006383cf;
L_006383fd:; BB(0x006383fd);
    /* 006383fd: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00638402: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00638408: jmp 0x6384a3 */ goto L_006384a3;
L_0063840d:; BB(0x0063840d);
    /* 0063840d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00638410: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00638411: push dword ptr [edi + 0x33c] */ { u32 v = R32((u32)(r_edi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00638417: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063841a: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063841d: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638420: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x638425u); f_007b97a0();
    /* 00638425: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00638429: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063842a: lea eax, [ebx + 0x758] */ r_eax = (u32)(r_ebx+0x758u);
    /* 00638430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638431: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638434: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00638437: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063843a: call 0x7b97a0 */ r_esp -= 4; W32(r_esp, 0x63843fu); f_007b97a0();
    /* 0063843f: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00638443: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 00638447: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00638448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638449: call 0x83dbd4 */ r_esp -= 4; W32(r_esp, 0x63844eu); f_0083dbd4();
    /* 0063844e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638453: jne 0x638462 */ if (!fZ) goto L_00638462;
L_00638455:; BB(0x00638455);
    /* 00638455: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0063845a: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00638460: jmp 0x6384a3 */ goto L_006384a3;
L_00638462:; BB(0x00638462);
    /* 00638462: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00638465: mov edx, 1 */ r_edx = 0x1u;
L_0063846a:; BB(0x0063846a);
    /* 0063846a: mov ecx, edx */ r_ecx = r_edx;
    /* 0063846c: and ecx, dword ptr [edi + 0x84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x84u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00638472: test ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638474: jne 0x63847b */ if (!fZ) goto L_0063847b;
L_00638476:; BB(0x00638476);
    /* 00638476: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00638478: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_0063847b:; BB(0x0063847b);
    /* 0063847b: mov ecx, edx */ r_ecx = r_edx;
    /* 0063847d: and ecx, dword ptr [edi + 0x88] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x88u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00638483: test ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638485: je 0x63848e */ if (fZ) goto L_0063848e;
L_00638487:; BB(0x00638487);
    /* 00638487: not ecx */ r_ecx = ~r_ecx;
    /* 00638489: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0063848b: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_0063848e:; BB(0x0063848e);
    /* 0063848e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00638490: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638496: jl 0x63846a */ if ((fS!=fO)) goto L_0063846a;
L_00638498:; BB(0x00638498);
    /* 00638498: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0063849d: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006384a3:; BB(0x006384a3);
    /* 006384a3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006384a6: jmp 0x6382fb */ goto L_006382fb;
L_006384ab:; BB(0x006384ab);
    /* 006384ab: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006384b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006384b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006384b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006384b4: ret  */ FN_RET(0x006382dc); r_esp += 4; return;
}

void f_006384b8(void) /* sub_6384B8 */
{
    FN_ENTER(0x006384b8);
    /* 006384b8: mov dword ptr [0xa8f14c], 0x3f800000 */ W32((u32)(0xa8f14cu), 0x3f800000u);
    /* 006384c2: mov dword ptr [0xa8f150], 0x41000000 */ W32((u32)(0xa8f150u), 0x41000000u);
    /* 006384cc: mov dword ptr [0xa8f154], 0x3fc00000 */ W32((u32)(0xa8f154u), 0x3fc00000u);
    /* 006384d6: ret  */ FN_RET(0x006384b8); r_esp += 4; return;
}

void f_006384d8(void) /* sub_6384D8 */
{
    FN_ENTER(0x006384d8);
    /* 006384d8: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 006384de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006384e0: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 006384e3: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 006384e6: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 006384e9: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 006384ec: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 006384ef: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 006384f2: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 006384f5: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 006384f8: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 006384fb: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00638501: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 00638504: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00638507: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 0063850d: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 00638510: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00638513: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00638519: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 00638520: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00638526: mov dword ptr [eax + 0x18], 0x18002 */ W32((u32)(r_eax+0x18u), 0x18002u);
    /* 0063852d: ret  */ FN_RET(0x006384d8); r_esp += 4; return;
}

void f_00638530(void) /* sub_638530 */
{
    FN_ENTER(0x00638530);
    /* 00638530: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00638536: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638538: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0063853b: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0063853e: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00638541: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00638544: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00638547: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0063854a: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0063854d: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00638550: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00638556: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 00638559: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0063855c: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00638562: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 00638565: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00638568: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0063856e: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 00638575: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0063857b: mov dword ptr [eax + 0x18], 0x18002 */ W32((u32)(r_eax+0x18u), 0x18002u);
    /* 00638582: ret  */ FN_RET(0x00638530); r_esp += 4; return;
}

void f_00638584(void) /* sub_638584 */
{
    FN_ENTER(0x00638584);
    /* 00638584: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00638585: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00638587: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00638589: call 0x6385a8 */ r_esp -= 4; W32(r_esp, 0x63858eu); f_006385a8();
    /* 0063858e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00638592: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638594: jne 0x63859a */ if (!fZ) goto L_0063859a;
L_00638596:; BB(0x00638596);
    /* 00638596: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00638597: ret 4 */ FN_RET(0x00638584); r_esp += 8; return;
L_0063859a:; BB(0x0063859a);
    /* 0063859a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063859b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6385a0u); f_005c2f74();
    /* 006385a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006385a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006385a2: ret 4 */ FN_RET(0x00638584); r_esp += 8; return;
}

void f_006385a8(void) /* sub_6385A8 */
{
    FN_ENTER(0x006385a8);
    /* 006385a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006385a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006385ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006385ad: push 0x8e486c */ { u32 v = 0x8e486cu; r_esp -= 4; W32(r_esp, v); }
    /* 006385b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006385b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006385b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006385c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006385c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006385c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006385c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006385cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006385cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006385d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006385d5: mov dword ptr [ecx], 0xb2ce70 */ W32((u32)(r_ecx), 0xb2ce70u);
    /* 006385db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006385e2: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6385e7u); f_007ba1f0();
    /* 006385e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006385ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006385f1: mov esp, ebp */ r_esp = r_ebp;
    /* 006385f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006385f4: ret  */ FN_RET(0x006385a8); r_esp += 4; return;
}

void f_006385f8(void) /* sub_6385F8 */
{
    FN_ENTER(0x006385f8);
    /* 006385f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006385f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006385fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006385fd: call 0x63861c */ r_esp -= 4; W32(r_esp, 0x638602u); f_0063861c();
    /* 00638602: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00638606: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638608: jne 0x63860e */ if (!fZ) goto L_0063860e;
L_0063860a:; BB(0x0063860a);
    /* 0063860a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063860b: ret 4 */ FN_RET(0x006385f8); r_esp += 8; return;
L_0063860e:; BB(0x0063860e);
    /* 0063860e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063860f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x638614u); f_005c2f74();
    /* 00638614: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638615: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00638616: ret 4 */ FN_RET(0x006385f8); r_esp += 8; return;
}

void f_0063861c(void) /* sub_63861C */
{
    FN_ENTER(0x0063861c);
    /* 0063861c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063861d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063861f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00638621: push 0x8e4888 */ { u32 v = 0x8e4888u; r_esp -= 4; W32(r_esp, v); }
    /* 00638626: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063862c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063862d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00638634: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638637: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063863a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063863d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00638640: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00638643: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00638646: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00638649: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0063864c: mov dword ptr [ecx], 0xb2ce9c */ W32((u32)(r_ecx), 0xb2ce9cu);
    /* 00638652: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638654: je 0x63866d */ if (fZ) goto L_0063866d;
L_00638656:; BB(0x00638656);
    /* 00638656: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00638659: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0063865d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00638662: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00638666: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_0063866d:; BB(0x0063866d);
    /* 0063866d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00638674: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x638679u); f_008171e8();
    /* 00638679: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063867c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00638683: mov esp, ebp */ r_esp = r_ebp;
    /* 00638685: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638686: ret  */ FN_RET(0x0063861c); r_esp += 4; return;
}

void f_00638688(void)
{
    FN_ENTER(0x00638688);
    /* 00638688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638689: mov ebp, esp */ r_ebp = r_esp;
    /* 0063868b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063868d: push 0x8e48b0 */ { u32 v = 0x8e48b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00638692: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00638698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638699: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006386a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006386a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006386a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006386a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006386ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006386af: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006386b4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006386bb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6386c0u); f_005caba4();
    /* 006386c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006386c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006386c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006386c6: je 0x6386ff */ if (fZ) goto L_006386ff;
L_006386c8:; BB(0x006386c8);
    /* 006386c8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006386cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006386d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006386d9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006386df: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006386e2: call 0x638704 */ r_esp -= 4; W32(r_esp, 0x6386e7u); f_00638704();
    /* 006386e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006386ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006386f1:; BB(0x006386f1);
    /* 006386f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006386f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006386fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006386fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006386fe: ret  */ FN_RET(0x00638688); r_esp += 4; return;
L_006386ff:; BB(0x006386ff);
    /* 006386ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638701: jmp 0x6386f1 */ goto L_006386f1;
}

void f_00638704(void) /* sub_638704 */
{
    FN_ENTER(0x00638704);
    /* 00638704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638705: mov ebp, esp */ r_ebp = r_esp;
    /* 00638707: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00638709: push 0x8e48cc */ { u32 v = 0x8e48ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0063870e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00638714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638715: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063871c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063871f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00638722: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00638725: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00638728: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063872b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063872e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638731: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00638734: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00638737: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x63873cu); f_007ba278();
    /* 0063873c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00638743: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00638746: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00638749: mov dword ptr [ecx], 0xb2ce70 */ W32((u32)(r_ecx), 0xb2ce70u);
    /* 0063874f: mov eax, dword ptr [0x9c6740] */ r_eax = R32((u32)(0x9c6740u));
    /* 00638754: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00638755: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00638758: call dword ptr [0xb2ce84] */ { u32 t = R32((u32)(0xb2ce84u)); r_esp -= 4; W32(r_esp, 0x63875eu); call_ind(t); }
    /* 0063875e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00638761: call 0x638788 */ r_esp -= 4; W32(r_esp, 0x638766u); f_00638788();
    /* 00638766: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00638769: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063876b: mov byte ptr [eax + 0xa6], dl */ W8((u32)(r_eax+0xa6u), (u8)r_edx);
    /* 00638771: mov dword ptr [eax + 0xa8], edx */ W32((u32)(r_eax+0xa8u), r_edx);
    /* 00638777: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063877a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00638781: mov esp, ebp */ r_esp = r_ebp;
    /* 00638783: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638784: ret 8 */ FN_RET(0x00638704); r_esp += 12; return;
}

void f_00638788(void) /* sub_638788 */
{
    FN_ENTER(0x00638788);
    /* 00638788: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063878b: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00638791: movzx eax, byte ptr [ecx + 0x5c] */ r_eax = (u32)R8((u32)(r_ecx+0x5cu));
    /* 00638795: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 00638798: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0063879a: fstp dword ptr [ecx + 0x94] */ W_F32((u32)(r_ecx+0x94u), ST(0)); FPOP();
    /* 006387a0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006387a3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006387a6: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006387a9: fmul dword ptr [0x933b48] */ ST(0) = ST(0) * R_F32((u32)(0x933b48u));
    /* 006387af: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 006387b2: fmul dword ptr [ecx + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x6cu));
    /* 006387b5: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 006387bb: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 006387c1: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006387c4: jl 0x6387cf */ if ((fS!=fO)) goto L_006387cf;
L_006387c6:; BB(0x006387c6);
    /* 006387c6: mov byte ptr [ecx + 0xa7], 0 */ W8((u32)(r_ecx+0xa7u), 0x0u);
    /* 006387cd: jmp 0x6387d5 */ goto L_006387d5;
L_006387cf:; BB(0x006387cf);
    /* 006387cf: mov byte ptr [ecx + 0xa7], al */ W8((u32)(r_ecx+0xa7u), (u8)r_eax);
L_006387d5:; BB(0x006387d5);
    /* 006387d5: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006387dc: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 006387e6: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006387eb: jl 0x6387fb */ if ((fS!=fO)) goto L_006387fb;
L_006387ed:; BB(0x006387ed);
    /* 006387ed: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006387f2: mov word ptr [ecx + 0xa0], ax */ W16((u32)(r_ecx+0xa0u), (u16)r_eax);
    /* 006387f9: jmp 0x638802 */ goto L_00638802;
L_006387fb:; BB(0x006387fb);
    /* 006387fb: mov word ptr [ecx + 0xa0], ax */ W16((u32)(r_ecx+0xa0u), (u16)r_eax);
L_00638802:; BB(0x00638802);
    /* 00638802: movzx eax, word ptr [ecx + 0x88] */ r_eax = (u32)R16((u32)(r_ecx+0x88u));
    /* 00638809: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063880e: jl 0x63881e */ if ((fS!=fO)) goto L_0063881e;
L_00638810:; BB(0x00638810);
    /* 00638810: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00638815: mov word ptr [ecx + 0xa2], ax */ W16((u32)(r_ecx+0xa2u), (u16)r_eax);
    /* 0063881c: jmp 0x638825 */ goto L_00638825;
L_0063881e:; BB(0x0063881e);
    /* 0063881e: mov word ptr [ecx + 0xa2], ax */ W16((u32)(r_ecx+0xa2u), (u16)r_eax);
L_00638825:; BB(0x00638825);
    /* 00638825: movzx edx, word ptr [ecx + 0x8c] */ r_edx = (u32)R16((u32)(r_ecx+0x8cu));
    /* 0063882c: mov eax, 1 */ r_eax = 0x1u;
    /* 00638831: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638834: jl 0x638838 */ if ((fS!=fO)) goto L_00638838;
L_00638836:; BB(0x00638836);
    /* 00638836: mov edx, eax */ r_edx = r_eax;
L_00638838:; BB(0x00638838);
    /* 00638838: mov word ptr [ecx + 0xa4], dx */ W16((u32)(r_ecx+0xa4u), (u16)r_edx);
    /* 0063883f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00638842: ret  */ FN_RET(0x00638788); r_esp += 4; return;
}

void f_00638844(void) /* sub_638844 */
{
    FN_ENTER(0x00638844);
    /* 00638844: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00638845: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638846: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638847: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00638848: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063884b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063884d: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
    /* 00638853: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00638855: jle 0x638860 */ if ((fZ||fS!=fO)) goto L_00638860;
L_00638857:; BB(0x00638857);
    /* 00638857: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063885a: mov dword ptr [ebp + 0xa8], eax */ W32((u32)(r_ebp+0xa8u), r_eax);
L_00638860:; BB(0x00638860);
    /* 00638860: movzx eax, word ptr [ebp + 0xa4] */ r_eax = (u32)R16((u32)(r_ebp+0xa4u));
    /* 00638867: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638869: jne 0x638876 */ if (!fZ) goto L_00638876;
L_0063886b:; BB(0x0063886b);
    /* 0063886b: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 00638871: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638874: je 0x6388bc */ if (fZ) goto L_006388bc;
L_00638876:; BB(0x00638876);
    /* 00638876: movzx eax, word ptr [ebp + 0xa2] */ r_eax = (u32)R16((u32)(r_ebp+0xa2u));
    /* 0063887d: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638882: jg 0x638897 */ if ((!fZ&&fS==fO)) goto L_00638897;
L_00638884:; BB(0x00638884);
    /* 00638884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638885: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x63888au); f_00816eec();
    /* 0063888a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063888b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063888e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638891: je 0x638b3d */ if (fZ) goto L_00638b3d;
L_00638897:; BB(0x00638897);
    /* 00638897: movzx eax, word ptr [ebp + 0xa0] */ r_eax = (u32)R16((u32)(r_ebp+0xa0u));
    /* 0063889e: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006388a3: jg 0x6388bc */ if ((!fZ&&fS==fO)) goto L_006388bc;
L_006388a5:; BB(0x006388a5);
    /* 006388a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006388a6: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x6388abu); f_00816eec();
    /* 006388ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006388ac: mov ebx, eax */ r_ebx = r_eax;
    /* 006388ae: movzx edx, bl */ r_edx = (u32)(u8)r_ebx;
    /* 006388b1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006388b4: je 0x6388c4 */ if (fZ) goto L_006388c4;
L_006388b6:; BB(0x006388b6);
    /* 006388b6: mov byte ptr [ebp + 0xa6], bl */ W8((u32)(r_ebp+0xa6u), (u8)r_ebx);
L_006388bc:; BB(0x006388bc);
    /* 006388bc: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006388bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006388c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006388c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006388c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006388c3: ret  */ FN_RET(0x00638844); r_esp += 4; return;
L_006388c4:; BB(0x006388c4);
    /* 006388c4: movzx edx, byte ptr [ebp + 0xa6] */ r_edx = (u32)R8((u32)(r_ebp+0xa6u));
    /* 006388cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006388cd: jne 0x6388b6 */ if (!fZ) goto L_006388b6;
L_006388cf:; BB(0x006388cf);
    /* 006388cf: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 006388d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006388d7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006388d9: je 0x638952 */ if (fZ) goto L_00638952;
L_006388db:; BB(0x006388db);
    /* 006388db: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_006388de:; BB(0x006388de);
    /* 006388de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006388e0: movzx eax, si */ r_eax = (u32)(u16)r_esi;
    /* 006388e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006388e4: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x6388e9u); f_007b9df0();
    /* 006388e9: mov ebx, eax */ r_ebx = r_eax;
    /* 006388eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006388ee: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006388f0: je 0x638948 */ if (fZ) goto L_00638948;
L_006388f2:; BB(0x006388f2);
    /* 006388f2: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 006388f8: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006388fe: jne 0x638948 */ if (!fZ) goto L_00638948;
L_00638900:; BB(0x00638900);
    /* 00638900: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00638903: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00638906: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00638907: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638908: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x63890du); f_007a9180();
    /* 0063890d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638910: fcomp dword ptr [ebp + 0x94] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x94u))); FPOP();
    /* 00638916: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00638918: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00638919: jae 0x638948 */ if (!fC) goto L_00638948;
L_0063891b:; BB(0x0063891b);
    /* 0063891b: mov ecx, dword ptr [ebp + 0x98] */ r_ecx = R32((u32)(r_ebp+0x98u));
    /* 00638921: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00638923: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00638927: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0063892b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063892d: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00638931: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00638936: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638937: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638939: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063893a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063893c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063893e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063893f: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00638943: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x638946u); call_ind(t); }
    /* 00638946: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00638948:; BB(0x00638948);
    /* 00638948: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063894b: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063894d: jne 0x6388de */ if (!fZ) goto L_006388de;
L_0063894f:; BB(0x0063894f);
    /* 0063894f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00638952:; BB(0x00638952);
    /* 00638952: mov esi, dword ptr [0xaae164] */ r_esi = R32((u32)(0xaae164u));
    /* 00638958: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063895a: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063895c: je 0x638a44 */ if (fZ) goto L_00638a44;
L_00638962:; BB(0x00638962);
    /* 00638962: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00638965: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00638969: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0063896c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
L_00638970:; BB(0x00638970);
    /* 00638970: movzx ebp, di */ r_ebp = (u32)(u16)r_edi;
    /* 00638973: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638974: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x638979u); f_007b4d18();
    /* 00638979: mov ecx, eax */ r_ecx = r_eax;
    /* 0063897b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063897e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638980: je 0x638a32 */ if (fZ) goto L_00638a32;
L_00638986:; BB(0x00638986);
    /* 00638986: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0063898c: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 00638992: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00638994: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638996: je 0x638a32 */ if (fZ) goto L_00638a32;
L_0063899c:; BB(0x0063899c);
    /* 0063899c: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006389a0: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 006389a4: mov ebp, eax */ r_ebp = r_eax;
    /* 006389a6: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006389aa: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 006389ae: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006389b2: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_006389b6:; BB(0x006389b6);
    /* 006389b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006389b7: lea edx, [ebp + 0x1c] */ r_edx = (u32)(r_ebp+0x1cu);
    /* 006389ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006389bb: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6389c0u); f_007a9180();
    /* 006389c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006389c3: fcomp dword ptr [edi + 0x94] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x94u))); FPOP();
    /* 006389c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006389cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006389cc: jae 0x638a18 */ if (!fC) goto L_00638a18;
L_006389ce:; BB(0x006389ce);
    /* 006389ce: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 006389d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006389d2: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006389d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006389d7: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x6389dcu); f_007b9df0();
    /* 006389dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006389df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006389e1: je 0x638a18 */ if (fZ) goto L_00638a18;
L_006389e3:; BB(0x006389e3);
    /* 006389e3: mov ecx, dword ptr [edi + 0x98] */ r_ecx = R32((u32)(r_edi+0x98u));
    /* 006389e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006389eb: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 006389ef: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 006389f3: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 006389f7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006389f9: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 006389fe: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00638a02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00638a03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00638a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638a05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00638a06: mov ecx, eax */ r_ecx = r_eax;
    /* 00638a08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00638a0a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00638a0b: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00638a0f: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00638a13: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x638a16u); call_ind(t); }
    /* 00638a16: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00638a18:; BB(0x00638a18);
    /* 00638a18: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00638a1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00638a1f: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00638a22: cmp ebx, dword ptr [edx + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638a28: jne 0x6389b6 */ if (!fZ) goto L_006389b6;
L_00638a2a:; BB(0x00638a2a);
    /* 00638a2a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00638a2e: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00638a32:; BB(0x00638a32);
    /* 00638a32: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00638a35: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638a37: jne 0x638970 */ if (!fZ) goto L_00638970;
L_00638a3d:; BB(0x00638a3d);
    /* 00638a3d: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00638a40: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_00638a44:; BB(0x00638a44);
    /* 00638a44: movzx esi, byte ptr [ebp + 0xa7] */ r_esi = (u32)R8((u32)(r_ebp+0xa7u));
    /* 00638a4b: cmp esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00638a4e: ja 0x638b09 */ if ((!fC&&!fZ)) goto L_00638b09;
L_00638a54:; BB(0x00638a54);
    /* 00638a54: mov edx, dword ptr [esi*4 + 0x9339c0] */ r_edx = R32((u32)(r_esi*4+0x9339c0u));
    /* 00638a5b: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00638b09:; BB(0x00638b09);
    /* 00638b09: mov dword ptr [ebp + 0x9c], 1 */ W32((u32)(r_ebp+0x9cu), 0x1u);
    /* 00638b13: jmp 0x6388b6 */ goto L_006388b6;
L_00638b3d:; BB(0x00638b3d);
    /* 00638b3d: mov byte ptr [ebp + 0xa6], 0 */ W8((u32)(r_ebp+0xa6u), 0x0u);
    /* 00638b44: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00638b47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00638b48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638b49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00638b4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00638b4b: ret  */ FN_RET(0x00638844); r_esp += 4; return;
}

void f_00638a5d(void)
{
    FN_ENTER(0x00638a5d);
    goto L_00638a5d;
L_006388b6:; BB(0x006388b6);
    /* 006388b6: mov byte ptr [ebp + 0xa6], bl */ W8((u32)(r_ebp+0xa6u), (u8)r_ebx);
    /* 006388bc: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006388bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006388c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006388c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006388c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006388c3: ret  */ FN_RET(0x00638a5d); r_esp += 4; return;
L_00638a5d:; BB(0x00638a5d);
    /* 00638a5d: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00638a60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638a62: je 0x638b18 */ if (fZ) goto L_00638b18;
L_00638a68:; BB(0x00638a68);
    /* 00638a68: jmp 0x638b09 */ goto L_00638b09;
L_00638b09:; BB(0x00638b09);
    /* 00638b09: mov dword ptr [ebp + 0x9c], 1 */ W32((u32)(r_ebp+0x9cu), 0x1u);
    /* 00638b13: jmp 0x6388b6 */ goto L_006388b6;
L_00638b18:; BB(0x00638b18);
    /* 00638b18: push dword ptr [ebp + 0x90] */ { u32 v = R32((u32)(r_ebp+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638b1e: movzx edi, word ptr [ebp + 0xa2] */ r_edi = (u32)R16((u32)(r_ebp+0xa2u));
    /* 00638b25: movzx edx, word ptr [ebp + 0xa0] */ r_edx = (u32)R16((u32)(r_ebp+0xa0u));
    /* 00638b2c: add esi, -3 */ {  u32 a = r_esi; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00638b2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638b30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00638b31: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00638b32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638b33: call 0x638b4c */ r_esp -= 4; W32(r_esp, 0x638b38u); f_00638b4c();
    /* 00638b38: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b3b: jmp 0x638b09 */ goto L_00638b09;
}

void f_00638a6d(void)
{
    FN_ENTER(0x00638a6d);
    goto L_00638a6d;
L_006388b6:; BB(0x006388b6);
    /* 006388b6: mov byte ptr [ebp + 0xa6], bl */ W8((u32)(r_ebp+0xa6u), (u8)r_ebx);
    /* 006388bc: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006388bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006388c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006388c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006388c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006388c3: ret  */ FN_RET(0x00638a6d); r_esp += 4; return;
L_00638a6d:; BB(0x00638a6d);
    /* 00638a6d: mov edx, dword ptr [ebp + 0xa8] */ r_edx = R32((u32)(r_ebp+0xa8u));
    /* 00638a73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638a75: jne 0x638b09 */ if (!fZ) goto L_00638b09;
L_00638a7b:; BB(0x00638a7b);
    /* 00638a7b: fld dword ptr [0x933b44] */ FPUSH(R_F32((u32)(0x933b44u)));
    /* 00638a81: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00638a84: mov esi, dword ptr [ebp + 0x3c] */ r_esi = R32((u32)(r_ebp+0x3cu));
    /* 00638a87: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
    /* 00638a8a: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00638a8e: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00638a92: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 00638a96: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00638a9a: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 00638a9e: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00638aa2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00638aa4: push 0x1a6 */ { u32 v = 0x1a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00638aa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00638aaa: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x638aafu); f_0050b7a4();
    /* 00638aaf: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 00638ab3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00638ab5: push 0x1a7 */ { u32 v = 0x1a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00638aba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00638abb: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x638ac0u); f_0050b7a4();
    /* 00638ac0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638ac3: mov dword ptr [ebp + 0xa8], 0x3c */ W32((u32)(r_ebp+0xa8u), 0x3cu);
    /* 00638acd: jmp 0x638b09 */ goto L_00638b09;
L_00638b09:; BB(0x00638b09);
    /* 00638b09: mov dword ptr [ebp + 0x9c], 1 */ W32((u32)(r_ebp+0x9cu), 0x1u);
    /* 00638b13: jmp 0x6388b6 */ goto L_006388b6;
}

void f_00638acf(void)
{
    FN_ENTER(0x00638acf);
    goto L_00638acf;
L_006388b6:; BB(0x006388b6);
    /* 006388b6: mov byte ptr [ebp + 0xa6], bl */ W8((u32)(r_ebp+0xa6u), (u8)r_ebx);
    /* 006388bc: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006388bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006388c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006388c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006388c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006388c3: ret  */ FN_RET(0x00638acf); r_esp += 4; return;
L_00638acf:; BB(0x00638acf);
    /* 00638acf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00638ad1: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x638ad6u); f_004d4288();
    /* 00638ad6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638ad7: jmp 0x638b09 */ goto L_00638b09;
L_00638b09:; BB(0x00638b09);
    /* 00638b09: mov dword ptr [ebp + 0x9c], 1 */ W32((u32)(r_ebp+0x9cu), 0x1u);
    /* 00638b13: jmp 0x6388b6 */ goto L_006388b6;
}

void f_00638ad9(void)
{
    FN_ENTER(0x00638ad9);
    goto L_00638ad9;
L_006388b6:; BB(0x006388b6);
    /* 006388b6: mov byte ptr [ebp + 0xa6], bl */ W8((u32)(r_ebp+0xa6u), (u8)r_ebx);
    /* 006388bc: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006388bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006388c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006388c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006388c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006388c3: ret  */ FN_RET(0x00638ad9); r_esp += 4; return;
L_00638ad9:; BB(0x00638ad9);
    /* 00638ad9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00638adb: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00638add: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 00638ae0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638ae1: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x638ae6u); f_0050b7a4();
    /* 00638ae6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00638ae8: push 0x189 */ { u32 v = 0x189u; r_esp -= 4; W32(r_esp, v); }
    /* 00638aed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638aee: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x638af3u); f_0050b7a4();
    /* 00638af3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00638af5: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x638afau); f_004d4288();
    /* 00638afa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00638afc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00638afd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00638afe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638aff: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00638b01: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x638b06u); f_00814298();
    /* 00638b06: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b09: mov dword ptr [ebp + 0x9c], 1 */ W32((u32)(r_ebp+0x9cu), 0x1u);
    /* 00638b13: jmp 0x6388b6 */ goto L_006388b6;
}

void f_00638b4c(void) /* sub_638B4C */
{
    FN_ENTER(0x00638b4c);
    /* 00638b4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638b4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00638b4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00638b51: push 0x8e48f4 */ { u32 v = 0x8e48f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00638b56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00638b5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638b5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00638b64: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638b67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00638b6a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00638b6d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00638b70: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00638b73: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00638b75: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00638b7c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x638b81u); f_005caba4();
    /* 00638b81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638b82: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00638b85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638b87: je 0x638bb9 */ if (fZ) goto L_00638bb9;
L_00638b89:; BB(0x00638b89);
    /* 00638b89: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00638b90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00638b97: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638b9a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638b9d: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 00638ba1: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 00638ba5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00638ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638ba9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00638baa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638bad: call 0x638bc8 */ r_esp -= 4; W32(r_esp, 0x638bb2u); f_00638bc8();
    /* 00638bb2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00638bb9:; BB(0x00638bb9);
    /* 00638bb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638bbc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00638bc3: mov esp, ebp */ r_esp = r_ebp;
    /* 00638bc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638bc6: ret  */ FN_RET(0x00638b4c); r_esp += 4; return;
}

void f_00638bc8(void) /* sub_638BC8 */
{
    FN_ENTER(0x00638bc8);
    /* 00638bc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638bc9: mov ebp, esp */ r_ebp = r_esp;
    /* 00638bcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00638bcd: push 0x8e4910 */ { u32 v = 0x8e4910u; r_esp -= 4; W32(r_esp, v); }
    /* 00638bd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00638bd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638bd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00638be0: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638be6: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00638be9: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00638bec: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00638bef: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00638bf2: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00638bf5: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00638bf9: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00638bfd: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00638c00: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00638c03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00638c04: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00638c07: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00638c0a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00638c0d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00638c10: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00638c13: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00638c16: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00638c19: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00638c1c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x638c21u); f_008193cc();
    /* 00638c21: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00638c28: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00638c2b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00638c2e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00638c31: movzx ebx, word ptr [edx + 8] */ r_ebx = (u32)R16((u32)(r_edx+0x8u));
    /* 00638c35: or ebx, 0xffff0010 */ {  u32 a = r_ebx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00638c3b: mov word ptr [edx + 8], bx */ W16((u32)(r_edx+0x8u), (u16)r_ebx);
    /* 00638c3f: mov dword ptr [edx], 0xb2ce9c */ W32((u32)(r_edx), 0xb2ce9cu);
    /* 00638c45: mov ecx, dword ptr [0x9c6744] */ r_ecx = R32((u32)(0x9c6744u));
    /* 00638c4b: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00638c4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00638c51: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00638c58: mov word ptr [edx + 0x1c], si */ W16((u32)(r_edx+0x1cu), (u16)r_esi);
    /* 00638c5c: mov word ptr [edx + 0x1e], di */ W16((u32)(r_edx+0x1eu), (u16)r_edi);
    /* 00638c60: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00638c63: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00638c66: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 00638c69: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00638c6c: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00638c6f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00638c72: mov eax, 0x933a80 */ r_eax = 0x933a80u;
    /* 00638c77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00638c79: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 00638c7f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00638c82: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 00638c88: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00638c8b: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 00638c91: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00638c94: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 00638c9a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00638c9d: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 00638ca3: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00638ca6: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 00638cac: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00638caf: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 00638cb5: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00638cb8: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00638cbe: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00638cc1: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 00638cc7: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00638cca: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00638cd0: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00638cd3: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00638cd9: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00638cdc: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00638ce2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00638ce5: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00638ceb: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00638cee: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00638cf4: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00638cf7: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00638cfd: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00638d00: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00638d06: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00638d09: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 00638d0c: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00638d12: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00638d18: mov eax, 0x933a20 */ r_eax = 0x933a20u;
    /* 00638d1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00638d1f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00638d22: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00638d25: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00638d28: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00638d2b: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00638d31: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00638d34: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00638d3a: mov dword ptr [ebp - 0x84], ebx */ W32((u32)(r_ebp+0xffffff7cu), r_ebx);
    /* 00638d40: mov dword ptr [ebp - 0x80], esi */ W32((u32)(r_ebp+0xffffff80u), r_esi);
    /* 00638d43: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 00638d46: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00638d49: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00638d4c: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00638d4f: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00638d52: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00638d55: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00638d58: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00638d5b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00638d5e: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00638d61: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00638d64: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00638d67: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00638d6a: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00638d6d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00638d70: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00638d73: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00638d76: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00638d79: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00638d7c: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00638d7f: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00638d82: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00638d85: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00638d88: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 00638d8b: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00638d8e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00638d91: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00638d94: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00638d97: jb 0x638d9e */ if (fC) goto L_00638d9e;
L_00638d99:; BB(0x00638d99);
    /* 00638d99: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00638d9c: jmp 0x638dec */ goto L_00638dec;
L_00638d9e:; BB(0x00638d9e);
    /* 00638d9e: mov ecx, eax */ r_ecx = r_eax;
    /* 00638da0: mov edx, dword ptr [ebp + ecx*4 - 0x8c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff74u));
    /* 00638da7: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00638daa: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00638dad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00638daf: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00638db2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00638db5: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 00638db8: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00638dba: push dword ptr [ebp + ecx*4 - 0xd4] */ { u32 v = R32((u32)(r_ebp+r_ecx*4+0xffffff2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00638dc1: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00638dc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00638dc5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638dc6: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x638dcbu); f_00509dc4();
    /* 00638dcb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638dce: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00638dd1: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00638dd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638dd6: je 0x638dec */ if (fZ) goto L_00638dec;
L_00638dd8:; BB(0x00638dd8);
    /* 00638dd8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00638ddb: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00638dde: je 0x638e07 */ if (fZ) goto L_00638e07;
L_00638de0:; BB(0x00638de0);
    /* 00638de0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00638de3: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 00638de6: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 00638de9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
L_00638dec:; BB(0x00638dec);
    /* 00638dec: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00638def: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00638df2: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00638df5: mov eax, edx */ r_eax = r_edx;
    /* 00638df7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638dfa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00638e01: mov esp, ebp */ r_esp = r_ebp;
    /* 00638e03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638e04: ret 0x14 */ FN_RET(0x00638bc8); r_esp += 24; return;
L_00638e07:; BB(0x00638e07);
    /* 00638e07: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00638e0a: fmul dword ptr [0x933b40] */ ST(0) = ST(0) * R_F32((u32)(0x933b40u));
    /* 00638e10: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00638e13: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 00638e16: fstp dword ptr [eax + 0x48] */ W_F32((u32)(r_eax+0x48u), ST(0)); FPOP();
    /* 00638e19: jmp 0x638dec */ goto L_00638dec;
}

void f_00638e1c(void) /* sub_638E1C */
{
    FN_ENTER(0x00638e1c);
    /* 00638e1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00638e1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638e1e: mov edi, ecx */ r_edi = r_ecx;
    /* 00638e20: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00638e24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638e25: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x638e2au); f_00816eec();
    /* 00638e2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638e2b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00638e2e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638e31: je 0x638ec7 */ if (fZ) goto L_00638ec7;
L_00638e37:; BB(0x00638e37);
    /* 00638e37: movzx eax, word ptr [edi + 0x1e] */ r_eax = (u32)R16((u32)(r_edi+0x1eu));
    /* 00638e3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638e3c: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x638e41u); f_00816eec();
    /* 00638e41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638e42: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00638e45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638e47: je 0x638eb7 */ if (fZ) goto L_00638eb7;
L_00638e49:; BB(0x00638e49);
    /* 00638e49: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00638e4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638e4e: je 0x638eb4 */ if (fZ) goto L_00638eb4;
L_00638e50:; BB(0x00638e50);
    /* 00638e50: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00638e56: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x638e5bu); f_0068d5a8();
    /* 00638e5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638e5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638e5e: je 0x638eb4 */ if (fZ) goto L_00638eb4;
L_00638e60:; BB(0x00638e60);
    /* 00638e60: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00638e66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638e68: je 0x638eb4 */ if (fZ) goto L_00638eb4;
L_00638e6a:; BB(0x00638e6a);
    /* 00638e6a: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00638e6d: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00638e73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00638e74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638e75: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x638e7au); f_007a9180();
    /* 00638e7a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00638e7e: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00638e83: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 00638e86: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00638e8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638e8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00638e8d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x638e92u); f_007a9180();
    /* 00638e92: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638e95: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00638e97: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00638e9a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00638e9c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00638e9e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00638e9f: jbe 0x638eac */ if ((fC||fZ)) goto L_00638eac;
L_00638ea1:; BB(0x00638ea1);
    /* 00638ea1: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00638ea4: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x638ea9u); f_00508f48();
    /* 00638ea9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638eaa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00638eab: ret  */ FN_RET(0x00638e1c); r_esp += 4; return;
L_00638eac:; BB(0x00638eac);
    /* 00638eac: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00638eaf: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x638eb4u); f_00509580();
L_00638eb4:; BB(0x00638eb4);
    /* 00638eb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638eb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00638eb6: ret  */ FN_RET(0x00638e1c); r_esp += 4; return;
L_00638eb7:; BB(0x00638eb7);
    /* 00638eb7: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00638ebb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638ec0: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00638ec4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638ec5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00638ec6: ret  */ FN_RET(0x00638e1c); r_esp += 4; return;
L_00638ec7:; BB(0x00638ec7);
    /* 00638ec7: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00638ecb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638ed0: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00638ed4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638ed5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00638ed6: ret  */ FN_RET(0x00638e1c); r_esp += 4; return;
}

void f_00638ed8(void) /* sub_638ED8 */
{
    FN_ENTER(0x00638ed8);
    /* 00638ed8: mov dword ptr [0xa8f15c], 0x3f800000 */ W32((u32)(0xa8f15cu), 0x3f800000u);
    /* 00638ee2: mov dword ptr [0xa8f160], 0x41000000 */ W32((u32)(0xa8f160u), 0x41000000u);
    /* 00638eec: mov dword ptr [0xa8f164], 0x3fc00000 */ W32((u32)(0xa8f164u), 0x3fc00000u);
    /* 00638ef6: ret  */ FN_RET(0x00638ed8); r_esp += 4; return;
}

void f_00638ef8(void) /* sub_638EF8 */
{
    FN_ENTER(0x00638ef8);
    /* 00638ef8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00638ef9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00638efb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00638efd: call 0x638f1c */ r_esp -= 4; W32(r_esp, 0x638f02u); f_00638f1c();
    /* 00638f02: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00638f06: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00638f08: jne 0x638f0e */ if (!fZ) goto L_00638f0e;
L_00638f0a:; BB(0x00638f0a);
    /* 00638f0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00638f0b: ret 4 */ FN_RET(0x00638ef8); r_esp += 8; return;
L_00638f0e:; BB(0x00638f0e);
    /* 00638f0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00638f0f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x638f14u); f_005c2f74();
    /* 00638f14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638f15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00638f16: ret 4 */ FN_RET(0x00638ef8); r_esp += 8; return;
}

void f_00638f1c(void) /* sub_638F1C */
{
    FN_ENTER(0x00638f1c);
    /* 00638f1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638f1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00638f1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00638f21: push 0x8e492c */ { u32 v = 0x8e492cu; r_esp -= 4; W32(r_esp, v); }
    /* 00638f26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00638f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638f2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00638f34: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638f37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00638f3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00638f3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00638f40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00638f43: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00638f46: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00638f49: mov dword ptr [ecx], 0xb2cf40 */ W32((u32)(r_ecx), 0xb2cf40u);
    /* 00638f4f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00638f56: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x638f5bu); f_006296c8();
    /* 00638f5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638f5e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00638f65: mov esp, ebp */ r_esp = r_ebp;
    /* 00638f67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638f68: ret  */ FN_RET(0x00638f1c); r_esp += 4; return;
}

void f_00638f6c(void) /* sub_638F6C */
{
    FN_ENTER(0x00638f6c);
    /* 00638f6c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638f6f: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00638f73: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00638f78: mov eax, dword ptr [ecx + 0xc8] */ r_eax = R32((u32)(r_ecx+0xc8u));
    /* 00638f7e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00638f80: mov byte ptr [esp], 5 */ W8((u32)(r_esp), 0x5u);
    /* 00638f84: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 00638f89: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00638f8e: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 00638f93: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 00638f98: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 00638f9d: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 00638fa1: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 00638fa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638fa9: je 0x638fb2 */ if (fZ) goto L_00638fb2;
L_00638fab:; BB(0x00638fab);
    /* 00638fab: mov eax, 1 */ r_eax = 0x1u;
    /* 00638fb0: jmp 0x638fb4 */ goto L_00638fb4;
L_00638fb2:; BB(0x00638fb2);
    /* 00638fb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00638fb4:; BB(0x00638fb4);
    /* 00638fb4: mov byte ptr [esp + 0xb], al */ W8((u32)(r_esp+0xbu), (u8)r_eax);
    /* 00638fb8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00638fbb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x638fc0u); f_008003e0();
    /* 00638fc0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00638fc3: ret  */ FN_RET(0x00638f6c); r_esp += 4; return;
}

void f_00638fc4(void)
{
    FN_ENTER(0x00638fc4);
    /* 00638fc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638fc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00638fc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00638fc9: push 0x8e4954 */ { u32 v = 0x8e4954u; r_esp -= 4; W32(r_esp, v); }
    /* 00638fce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00638fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638fd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00638fdc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638fdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00638fe2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00638fe5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00638fe8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00638feb: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00638ff0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00638ff7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x638ffcu); f_005caba4();
    /* 00638ffc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638ffd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00639000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639002: je 0x63903b */ if (fZ) goto L_0063903b;
L_00639004:; BB(0x00639004);
    /* 00639004: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063900b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00639012: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00639015: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063901b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063901e: call 0x639040 */ r_esp -= 4; W32(r_esp, 0x639023u); f_00639040();
    /* 00639023: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00639026: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063902d:; BB(0x0063902d);
    /* 0063902d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00639030: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00639037: mov esp, ebp */ r_esp = r_ebp;
    /* 00639039: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063903a: ret  */ FN_RET(0x00638fc4); r_esp += 4; return;
L_0063903b:; BB(0x0063903b);
    /* 0063903b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063903d: jmp 0x63902d */ goto L_0063902d;
}

