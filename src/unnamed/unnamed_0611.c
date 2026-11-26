#include "protos.h"

void f_00611010(void) /* sub_611010 */
{
    FN_ENTER(0x00611010);
    /* 00611010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611011: mov ebp, esp */ r_ebp = r_esp;
    /* 00611013: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611015: push 0x8e0d00 */ { u32 v = 0x8e0d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0061101a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00611020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611021: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00611028: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061102b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061102e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00611031: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00611034: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00611037: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061103a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061103d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00611040: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00611043: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x611048u); f_0060c858();
    /* 00611048: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061104f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611052: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00611055: mov dword ptr [ecx], 0xb24780 */ W32((u32)(r_ecx), 0xb24780u);
    /* 0061105b: mov eax, dword ptr [0x9c47ac] */ r_eax = R32((u32)(0x9c47acu));
    /* 00611060: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611061: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00611064: call dword ptr [0xb248cc] */ { u32 t = R32((u32)(0xb248ccu)); r_esp -= 4; W32(r_esp, 0x61106au); call_ind(t); }
    /* 0061106a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061106d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061106f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00611072: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00611075: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00611078: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0061107e: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00611084: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611087: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0061108d: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00611093: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00611099: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0061109f: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 006110a5: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 006110ab: mov ecx, dword ptr [0xa8ea00] */ r_ecx = R32((u32)(0xa8ea00u));
    /* 006110b1: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 006110b7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006110ba: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 006110c0: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006110c3: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 006110c9: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006110cc: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 006110d2: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 006110d5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6110dau); f_005b8610();
    /* 006110da: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006110dd: mov ecx, dword ptr [0xa8ea00] */ r_ecx = R32((u32)(0xa8ea00u));
    /* 006110e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006110e5: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006110e8: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6110edu); f_005b8624();
    /* 006110ed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006110f0: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006110f3: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x6110f8u); f_00606bc8();
    /* 006110f8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006110fb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006110fe: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00611101: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00611104: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611107: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061110e: mov esp, ebp */ r_esp = r_ebp;
    /* 00611110: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611111: ret 8 */ FN_RET(0x00611010); r_esp += 12; return;
}

void f_00611114(void) /* sub_611114 */
{
    FN_ENTER(0x00611114);
    /* 00611114: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611115: mov ebp, esp */ r_ebp = r_esp;
    /* 00611117: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611119: push 0x8e0d28 */ { u32 v = 0x8e0d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0061111e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00611124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611125: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061112c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061112f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00611132: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00611135: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00611138: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061113b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00611140: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00611147: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61114cu); f_008581c5();
    /* 0061114c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061114d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00611150: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611152: je 0x611193 */ if (fZ) goto L_00611193;
L_00611154:; BB(0x00611154);
    /* 00611154: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061115b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00611162: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611165: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00611167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611169: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061116a: push 0x9c479c */ { u32 v = 0x9c479cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061116f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00611171: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x611176u); f_005b7a84();
    /* 00611176: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611179: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00611180:; BB(0x00611180);
    /* 00611180: mov dword ptr [0xa8ea00], eax */ W32((u32)(0xa8ea00u), r_eax);
    /* 00611185: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611188: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061118f: mov esp, ebp */ r_esp = r_ebp;
    /* 00611191: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611192: ret  */ FN_RET(0x00611114); r_esp += 4; return;
L_00611193:; BB(0x00611193);
    /* 00611193: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00611195: jmp 0x611180 */ goto L_00611180;
}

void f_00611198(void) /* sub_611198 */
{
    FN_ENTER(0x00611198);
    /* 00611198: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00611199: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061119b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061119d: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x6111a2u); f_006111bc();
    /* 006111a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006111a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006111a8: jne 0x6111ae */ if (!fZ) goto L_006111ae;
L_006111aa:; BB(0x006111aa);
    /* 006111aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006111ab: ret 4 */ FN_RET(0x00611198); r_esp += 8; return;
L_006111ae:; BB(0x006111ae);
    /* 006111ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006111af: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6111b4u); f_00857e98();
    /* 006111b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006111b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006111b6: ret 4 */ FN_RET(0x00611198); r_esp += 8; return;
}

void f_006111bc(void) /* sub_6111BC */
{
    FN_ENTER(0x006111bc);
    /* 006111bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006111bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006111bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006111c1: push 0x8e0d44 */ { u32 v = 0x8e0d44u; r_esp -= 4; W32(r_esp, v); }
    /* 006111c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006111cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006111cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006111d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006111d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006111da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006111dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006111e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006111e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006111e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006111e9: mov dword ptr [ecx], 0xb24950 */ W32((u32)(r_ecx), 0xb24950u);
    /* 006111ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006111f6: call 0x579464 */ r_esp -= 4; W32(r_esp, 0x6111fbu); f_00579464();
    /* 006111fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006111fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00611205: mov esp, ebp */ r_esp = r_ebp;
    /* 00611207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611208: ret  */ FN_RET(0x006111bc); r_esp += 4; return;
}

void f_0061120c(void) /* sub_61120C */
{
    FN_ENTER(0x0061120c);
    /* 0061120c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061120d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061120f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611211: push 0x8e0d60 */ { u32 v = 0x8e0d60u; r_esp -= 4; W32(r_esp, v); }
    /* 00611216: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061121c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061121d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00611224: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00611227: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061122a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061122d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00611230: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00611233: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00611236: call 0x57946c */ r_esp -= 4; W32(r_esp, 0x61123bu); f_0057946c();
    /* 0061123b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00611242: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611245: mov dword ptr [ecx], 0xb24950 */ W32((u32)(r_ecx), 0xb24950u);
    /* 0061124b: call 0x611408 */ r_esp -= 4; W32(r_esp, 0x611250u); f_00611408();
    /* 00611250: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611253: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611256: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061125d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061125f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611260: ret  */ FN_RET(0x0061120c); r_esp += 4; return;
}

void f_00611264(void) /* sub_611264 */
{
    FN_ENTER(0x00611264);
    /* 00611264: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00611269: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 0061126f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00611272: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00611277: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611278: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 0061127e: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00611284: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 0061128a: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00611290: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00611296: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 0061129c: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 006112a2: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 006112a8: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 006112ae: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 006112b4: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 006112ba: or eax, 0x8021 */ {  u32 a = r_eax; u32 b = 0x8021u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006112bf: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006112c4: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6112c9u); f_0082d710();
    /* 006112c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006112ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006112cc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006112ce: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006112d3: mov edx, 4 */ r_edx = 0x4u;
    /* 006112d8: call 0x836248 */ r_esp -= 4; W32(r_esp, 0x6112ddu); f_00836248();
    /* 006112dd: ret  */ FN_RET(0x00611264); r_esp += 4; return;
}

void f_00611297(void)
{
    FN_ENTER(0x00611297);
    /* 00611297: adc eax, 0xaf0374 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xaf0374u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0061129c: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 006112a2: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 006112a8: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 006112ae: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 006112b4: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 006112ba: or eax, 0x8021 */ {  u32 a = r_eax; u32 b = 0x8021u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006112bf: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006112c4: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6112c9u); f_0082d710();
    /* 006112c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006112ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006112cc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006112ce: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006112d3: mov edx, 4 */ r_edx = 0x4u;
    /* 006112d8: call 0x836248 */ r_esp -= 4; W32(r_esp, 0x6112ddu); f_00836248();
    /* 006112dd: ret  */ FN_RET(0x00611297); r_esp += 4; return;
}

void f_006112e0(void) /* sub_6112E0 */
{
    FN_ENTER(0x006112e0);
    /* 006112e0: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 006112e5: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 006112eb: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 006112f0: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 006112f5: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 006112fb: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 00611300: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00611305: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 0061130a: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0061130f: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00611314: mov eax, dword ptr [0xaab500] */ r_eax = R32((u32)(0xaab500u));
    /* 00611319: mov dword ptr [0xaf0364], eax */ W32((u32)(0xaf0364u), r_eax);
    /* 0061131e: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00611323: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00611328: ret  */ FN_RET(0x006112e0); r_esp += 4; return;
}

void f_0061132c(void) /* sub_61132C */
{
    FN_ENTER(0x0061132c);
    /* 0061132c: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0061132f: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00611332: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00611334: jne 0x611353 */ if (!fZ) goto L_00611353;
L_00611336:; BB(0x00611336);
    /* 00611336: fld dword ptr [0x92fd30] */ FPUSH(R_F32((u32)(0x92fd30u)));
    /* 0061133c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0061133e: fcom dword ptr [0x92fd34] */ fx_compare(ST(0), R_F32((u32)(0x92fd34u))); 
    /* 00611344: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00611346: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00611347: jbe 0x61136e */ if ((fC||fZ)) goto L_0061136e;
L_00611349:; BB(0x00611349);
    /* 00611349: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0061134b: fld dword ptr [0x92fd34] */ FPUSH(R_F32((u32)(0x92fd34u)));
    /* 00611351: jmp 0x61136e */ goto L_0061136e;
L_00611353:; BB(0x00611353);
    /* 00611353: fld dword ptr [0x92fd30] */ FPUSH(R_F32((u32)(0x92fd30u)));
    /* 00611359: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0061135b: fcom dword ptr [0x92fd38] */ fx_compare(ST(0), R_F32((u32)(0x92fd38u))); 
    /* 00611361: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00611363: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00611364: jae 0x61136e */ if (!fC) goto L_0061136e;
L_00611366:; BB(0x00611366);
    /* 00611366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00611368: fld dword ptr [0x92fd38] */ FPUSH(R_F32((u32)(0x92fd38u)));
L_0061136e:; BB(0x0061136e);
    /* 0061136e: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00611371: ret  */ FN_RET(0x0061132c); r_esp += 4; return;
}

void f_00611374(void) /* sub_611374 */
{
    FN_ENTER(0x00611374);
    /* 00611374: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611375: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00611377: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x61137cu); f_006dc358();
    /* 0061137c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061137f: je 0x61139a */ if (fZ) goto L_0061139a;
L_00611381:; BB(0x00611381);
    /* 00611381: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00611384: fcomp dword ptr [0x92fd28] */ fx_compare(ST(0), R_F32((u32)(0x92fd28u))); FPOP();
    /* 0061138a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061138c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 0061138e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061138f: mov eax, 1 */ r_eax = 0x1u;
    /* 00611394: jb 0x611398 */ if (fC) goto L_00611398;
L_00611396:; BB(0x00611396);
    /* 00611396: mov eax, edx */ r_eax = r_edx;
L_00611398:; BB(0x00611398);
    /* 00611398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611399: ret  */ FN_RET(0x00611374); r_esp += 4; return;
L_0061139a:; BB(0x0061139a);
    /* 0061139a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061139c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061139d: ret  */ FN_RET(0x00611374); r_esp += 4; return;
}

void f_006113a0(void) /* sub_6113A0 */
{
    FN_ENTER(0x006113a0);
    /* 006113a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006113a1: mov edi, ecx */ r_edi = r_ecx;
    /* 006113a3: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6113a8u); f_006dc358();
    /* 006113a8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006113ab: je 0x6113fd */ if (fZ) goto L_006113fd;
L_006113ad:; BB(0x006113ad);
    /* 006113ad: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006113b1: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006113b6: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006113bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006113bc: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x6113c1u); f_0078ea50();
    /* 006113c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006113c4: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 006113c7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006113c9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006113cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006113cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006113ce: jbe 0x6113d9 */ if ((fC||fZ)) goto L_006113d9;
L_006113d0:; BB(0x006113d0);
    /* 006113d0: mov dword ptr [edi + 0x18], 0 */ W32((u32)(r_edi+0x18u), 0x0u);
    /* 006113d7: jmp 0x6113e0 */ goto L_006113e0;
L_006113d9:; BB(0x006113d9);
    /* 006113d9: mov dword ptr [edi + 0x18], 1 */ W32((u32)(r_edi+0x18u), 0x1u);
L_006113e0:; BB(0x006113e0);
    /* 006113e0: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 006113e3: fcomp dword ptr [0x92fd24] */ fx_compare(ST(0), R_F32((u32)(0x92fd24u))); FPOP();
    /* 006113e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006113eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006113ec: jbe 0x6113f7 */ if ((fC||fZ)) goto L_006113f7;
L_006113ee:; BB(0x006113ee);
    /* 006113ee: mov eax, 1 */ r_eax = 0x1u;
    /* 006113f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006113f4: ret 4 */ FN_RET(0x006113a0); r_esp += 8; return;
L_006113f7:; BB(0x006113f7);
    /* 006113f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006113f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006113fa: ret 4 */ FN_RET(0x006113a0); r_esp += 8; return;
L_006113fd:; BB(0x006113fd);
    /* 006113fd: mov eax, 1 */ r_eax = 0x1u;
    /* 00611402: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00611403: ret 4 */ FN_RET(0x006113a0); r_esp += 8; return;
}

void f_00611408(void) /* sub_611408 */
{
    FN_ENTER(0x00611408);
    /* 00611408: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061140a: mov dword ptr [ecx + 0x18], 1 */ W32((u32)(r_ecx+0x18u), 0x1u);
    /* 00611411: mov dword ptr [ecx + 0x1c], 0x43960000 */ W32((u32)(r_ecx+0x1cu), 0x43960000u);
    /* 00611418: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x61141bu); call_ind(t); }
    /* 0061141b: ret  */ FN_RET(0x00611408); r_esp += 4; return;
}

void f_0061141c(void) /* sub_61141C */
{
    FN_ENTER(0x0061141c);
    /* 0061141c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061141d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061141f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00611421: call 0x611440 */ r_esp -= 4; W32(r_esp, 0x611426u); f_00611440();
    /* 00611426: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061142a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061142c: jne 0x611432 */ if (!fZ) goto L_00611432;
L_0061142e:; BB(0x0061142e);
    /* 0061142e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061142f: ret 4 */ FN_RET(0x0061141c); r_esp += 8; return;
L_00611432:; BB(0x00611432);
    /* 00611432: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00611433: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x611438u); f_005c2f74();
    /* 00611438: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00611439: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061143a: ret 4 */ FN_RET(0x0061141c); r_esp += 8; return;
}

void f_00611440(void) /* sub_611440 */
{
    FN_ENTER(0x00611440);
    /* 00611440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611441: mov ebp, esp */ r_ebp = r_esp;
    /* 00611443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611445: push 0x8e0d7c */ { u32 v = 0x8e0d7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061144a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00611450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611451: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00611458: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061145b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061145e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00611461: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00611464: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00611467: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061146a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061146d: mov dword ptr [ecx], 0xb24a18 */ W32((u32)(r_ecx), 0xb24a18u);
    /* 00611473: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061147a: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x61147fu); f_006131f4();
    /* 0061147f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611482: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00611489: mov esp, ebp */ r_esp = r_ebp;
    /* 0061148b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061148c: ret  */ FN_RET(0x00611440); r_esp += 4; return;
}

void f_00611490(void) /* sub_611490 */
{
    FN_ENTER(0x00611490);
    /* 00611490: mov ecx, dword ptr [0xa8ea10] */ r_ecx = R32((u32)(0xa8ea10u));
    /* 00611496: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00611498: je 0x6114ad */ if (fZ) goto L_006114ad;
L_0061149a:; BB(0x0061149a);
    /* 0061149a: je 0x6114a3 */ if (fZ) goto L_006114a3;
L_0061149c:; BB(0x0061149c);
    /* 0061149c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061149e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6114a3u); f_004066a8();
L_006114a3:; BB(0x006114a3);
    /* 006114a3: mov dword ptr [0xa8ea10], 0 */ W32((u32)(0xa8ea10u), 0x0u);
L_006114ad:; BB(0x006114ad);
    /* 006114ad: ret  */ FN_RET(0x00611490); r_esp += 4; return;
}

void f_006114b0(void)
{
    FN_ENTER(0x006114b0);
    /* 006114b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006114b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006114b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006114b5: push 0x8e0da4 */ { u32 v = 0x8e0da4u; r_esp -= 4; W32(r_esp, v); }
    /* 006114ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006114c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006114c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006114c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006114cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006114ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006114d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006114d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006114d7: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006114dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006114e3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6114e8u); f_005caba4();
    /* 006114e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006114e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006114ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006114ee: je 0x611527 */ if (fZ) goto L_00611527;
L_006114f0:; BB(0x006114f0);
    /* 006114f0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006114f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006114fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00611501: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00611507: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061150a: call 0x61152c */ r_esp -= 4; W32(r_esp, 0x61150fu); f_0061152c();
    /* 0061150f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611512: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00611519:; BB(0x00611519);
    /* 00611519: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061151c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00611523: mov esp, ebp */ r_esp = r_ebp;
    /* 00611525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611526: ret  */ FN_RET(0x006114b0); r_esp += 4; return;
L_00611527:; BB(0x00611527);
    /* 00611527: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00611529: jmp 0x611519 */ goto L_00611519;
}

void f_0061152c(void) /* sub_61152C */
{
    FN_ENTER(0x0061152c);
    /* 0061152c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061152d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061152f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611531: push 0x8e0dc0 */ { u32 v = 0x8e0dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00611536: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061153c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061153d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00611544: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00611547: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061154a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061154d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00611550: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00611553: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00611556: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00611559: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061155c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061155f: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x611564u); f_006132e4();
    /* 00611564: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061156b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061156e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00611571: mov dword ptr [ecx], 0xb24a18 */ W32((u32)(r_ecx), 0xb24a18u);
    /* 00611577: mov eax, dword ptr [0x9c47cc] */ r_eax = R32((u32)(0x9c47ccu));
    /* 0061157c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061157d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00611580: call dword ptr [0xb24a2c] */ { u32 t = R32((u32)(0xb24a2cu)); r_esp -= 4; W32(r_esp, 0x611586u); call_ind(t); }
    /* 00611586: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611589: mov eax, dword ptr [0xa8ea10] */ r_eax = R32((u32)(0xa8ea10u));
    /* 0061158e: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00611594: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00611597: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 0061159a: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 006115a0: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 006115a3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006115a6: mov dword ptr [ebx + 0xc0], 0x43fa0000 */ W32((u32)(r_ebx+0xc0u), 0x43fa0000u);
    /* 006115b0: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 006115b3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006115b6: mov dword ptr [ebx + 0xc4], 0x42200000 */ W32((u32)(r_ebx+0xc4u), 0x42200000u);
    /* 006115c0: mov eax, ebx */ r_eax = r_ebx;
    /* 006115c2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006115c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006115c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006115cf: mov esp, ebp */ r_esp = r_ebp;
    /* 006115d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006115d2: ret 8 */ FN_RET(0x0061152c); r_esp += 12; return;
}

void f_006115d8(void) /* sub_6115D8 */
{
    FN_ENTER(0x006115d8);
    /* 006115d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006115d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006115da: mov edi, ecx */ r_edi = r_ecx;
    /* 006115dc: mov eax, dword ptr [0xa8ea10] */ r_eax = R32((u32)(0xa8ea10u));
    /* 006115e1: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006115e7: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006115ed: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 006115f3: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 006115f6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006115f8: mov ecx, edi */ r_ecx = r_edi;
    /* 006115fa: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6115fdu); call_ind(t); }
    /* 006115fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006115ff: je 0x611639 */ if (fZ) goto L_00611639;
L_00611601:; BB(0x00611601);
    /* 00611601: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 00611604: add eax, 0x106 */ {  u32 a = r_eax; u32 b = 0x106u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611609: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 0061160c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x611611u); f_0082d7b0();
    /* 00611611: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00611614: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x611619u); f_0082d838();
    /* 00611619: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0061161c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061161e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x611623u); f_0082d8bc();
    /* 00611623: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00611626: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61162bu); f_00829cc8();
    /* 0061162b: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061162e: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x611633u); f_008321d8();
    /* 00611633: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00611634: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x611639u); f_0082da80();
L_00611639:; BB(0x00611639);
    /* 00611639: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061163a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061163b: ret  */ FN_RET(0x006115d8); r_esp += 4; return;
}

void f_0061163c(void) /* sub_61163C */
{
    FN_ENTER(0x0061163c);
    /* 0061163c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061163d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061163f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611641: push 0x8e0de8 */ { u32 v = 0x8e0de8u; r_esp -= 4; W32(r_esp, v); }
    /* 00611646: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061164c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061164d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00611654: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00611657: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061165a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061165d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00611660: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00611663: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00611668: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061166f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x611674u); f_008581c5();
    /* 00611674: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00611675: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00611678: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061167a: je 0x6116bb */ if (fZ) goto L_006116bb;
L_0061167c:; BB(0x0061167c);
    /* 0061167c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00611683: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061168a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061168d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061168f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611692: push 0x9c47bc */ { u32 v = 0x9c47bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00611697: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00611699: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61169eu); f_005b7a84();
    /* 0061169e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006116a1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006116a8:; BB(0x006116a8);
    /* 006116a8: mov dword ptr [0xa8ea10], eax */ W32((u32)(0xa8ea10u), r_eax);
    /* 006116ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006116b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006116b7: mov esp, ebp */ r_esp = r_ebp;
    /* 006116b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006116ba: ret  */ FN_RET(0x0061163c); r_esp += 4; return;
L_006116bb:; BB(0x006116bb);
    /* 006116bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006116bd: jmp 0x6116a8 */ goto L_006116a8;
}

void f_006116c0(void) /* sub_6116C0 */
{
    FN_ENTER(0x006116c0);
    /* 006116c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006116c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006116c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006116c5: call 0x6116e4 */ r_esp -= 4; W32(r_esp, 0x6116cau); f_006116e4();
    /* 006116ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006116ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006116d0: jne 0x6116d6 */ if (!fZ) goto L_006116d6;
L_006116d2:; BB(0x006116d2);
    /* 006116d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006116d3: ret 4 */ FN_RET(0x006116c0); r_esp += 8; return;
L_006116d6:; BB(0x006116d6);
    /* 006116d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006116d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6116dcu); f_005c2f74();
    /* 006116dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006116dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006116de: ret 4 */ FN_RET(0x006116c0); r_esp += 8; return;
}

void f_006116e4(void) /* sub_6116E4 */
{
    FN_ENTER(0x006116e4);
    /* 006116e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006116e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006116e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006116e9: push 0x8e0e04 */ { u32 v = 0x8e0e04u; r_esp -= 4; W32(r_esp, v); }
    /* 006116ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006116f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006116f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006116fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006116ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00611702: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00611705: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00611708: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061170b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061170e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611711: mov dword ptr [ecx], 0xb24ae8 */ W32((u32)(r_ecx), 0xb24ae8u);
    /* 00611717: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061171e: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x611723u); f_006131f4();
    /* 00611723: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611726: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061172d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061172f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611730: ret  */ FN_RET(0x006116e4); r_esp += 4; return;
}

void f_00611734(void) /* sub_611734 */
{
    FN_ENTER(0x00611734);
    /* 00611734: mov ecx, dword ptr [0xa8ea1c] */ r_ecx = R32((u32)(0xa8ea1cu));
    /* 0061173a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061173c: je 0x611751 */ if (fZ) goto L_00611751;
L_0061173e:; BB(0x0061173e);
    /* 0061173e: je 0x611747 */ if (fZ) goto L_00611747;
L_00611740:; BB(0x00611740);
    /* 00611740: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00611742: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x611747u); f_004066a8();
L_00611747:; BB(0x00611747);
    /* 00611747: mov dword ptr [0xa8ea1c], 0 */ W32((u32)(0xa8ea1cu), 0x0u);
L_00611751:; BB(0x00611751);
    /* 00611751: ret  */ FN_RET(0x00611734); r_esp += 4; return;
}

void f_00611754(void)
{
    FN_ENTER(0x00611754);
    /* 00611754: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611755: mov ebp, esp */ r_ebp = r_esp;
    /* 00611757: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611759: push 0x8e0e2c */ { u32 v = 0x8e0e2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061175e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00611764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611765: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061176c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061176f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00611772: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00611775: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00611778: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061177b: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00611780: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00611787: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61178cu); f_005caba4();
    /* 0061178c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061178d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00611790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611792: je 0x6117cb */ if (fZ) goto L_006117cb;
L_00611794:; BB(0x00611794);
    /* 00611794: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061179b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006117a2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006117a5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006117ab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006117ae: call 0x6117d0 */ r_esp -= 4; W32(r_esp, 0x6117b3u); f_006117d0();
    /* 006117b3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006117b6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006117bd:; BB(0x006117bd);
    /* 006117bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006117c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006117c7: mov esp, ebp */ r_esp = r_ebp;
    /* 006117c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006117ca: ret  */ FN_RET(0x00611754); r_esp += 4; return;
L_006117cb:; BB(0x006117cb);
    /* 006117cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006117cd: jmp 0x6117bd */ goto L_006117bd;
}

void f_006117d0(void) /* sub_6117D0 */
{
    FN_ENTER(0x006117d0);
    /* 006117d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006117d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006117d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006117d5: push 0x8e0e48 */ { u32 v = 0x8e0e48u; r_esp -= 4; W32(r_esp, v); }
    /* 006117da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006117e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006117e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006117e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006117eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006117ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006117f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006117f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006117f7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006117fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006117fd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00611800: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00611803: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x611808u); f_006132e4();
    /* 00611808: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061180f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611812: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00611815: mov dword ptr [ecx], 0xb24ae8 */ W32((u32)(r_ecx), 0xb24ae8u);
    /* 0061181b: mov eax, dword ptr [0x9c47e8] */ r_eax = R32((u32)(0x9c47e8u));
    /* 00611820: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611821: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00611824: call dword ptr [0xb24afc] */ { u32 t = R32((u32)(0xb24afcu)); r_esp -= 4; W32(r_esp, 0x61182au); call_ind(t); }
    /* 0061182a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061182d: mov eax, dword ptr [0xa8ea1c] */ r_eax = R32((u32)(0xa8ea1cu));
    /* 00611832: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00611838: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061183b: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 0061183e: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 00611844: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 00611847: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061184a: mov dword ptr [ebx + 0xc0], 0x43fa0000 */ W32((u32)(r_ebx+0xc0u), 0x43fa0000u);
    /* 00611854: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 00611857: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061185a: mov dword ptr [ebx + 0xc4], 0x42200000 */ W32((u32)(r_ebx+0xc4u), 0x42200000u);
    /* 00611864: mov eax, ebx */ r_eax = r_ebx;
    /* 00611866: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00611869: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061186c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00611873: mov esp, ebp */ r_esp = r_ebp;
    /* 00611875: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611876: ret 8 */ FN_RET(0x006117d0); r_esp += 12; return;
}

void f_0061187c(void) /* sub_61187C */
{
    FN_ENTER(0x0061187c);
    /* 0061187c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061187d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061187e: mov esi, ecx */ r_esi = r_ecx;
    /* 00611880: mov eax, dword ptr [0xa8ea1c] */ r_eax = R32((u32)(0xa8ea1cu));
    /* 00611885: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061188b: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00611891: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00611897: mov ebp, dword ptr [edx + 8] */ r_ebp = R32((u32)(r_edx+0x8u));
    /* 0061189a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0061189c: mov ecx, esi */ r_ecx = r_esi;
    /* 0061189e: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6118a1u); call_ind(t); }
    /* 006118a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006118a3: je 0x6118d0 */ if (fZ) goto L_006118d0;
L_006118a5:; BB(0x006118a5);
    /* 006118a5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6118aau); f_0082d7b0();
    /* 006118aa: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006118ad: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6118b2u); f_0082d838();
    /* 006118b2: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006118b5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006118b7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6118bcu); f_0082d8bc();
    /* 006118bc: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006118bf: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6118c4u); f_00829cc8();
    /* 006118c4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006118c6: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6118cbu); f_00831758();
    /* 006118cb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6118d0u); f_0082da80();
L_006118d0:; BB(0x006118d0);
    /* 006118d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006118d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006118d2: ret  */ FN_RET(0x0061187c); r_esp += 4; return;
}

void f_006118d4(void) /* sub_6118D4 */
{
    FN_ENTER(0x006118d4);
    /* 006118d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006118d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006118d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006118d9: push 0x8e0e70 */ { u32 v = 0x8e0e70u; r_esp -= 4; W32(r_esp, v); }
    /* 006118de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006118e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006118e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006118ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006118ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006118f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006118f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006118f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006118fb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00611900: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00611907: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61190cu); f_008581c5();
    /* 0061190c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061190d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00611910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611912: je 0x611953 */ if (fZ) goto L_00611953;
L_00611914:; BB(0x00611914);
    /* 00611914: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061191b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00611922: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611925: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00611927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061192a: push 0x9c47d8 */ { u32 v = 0x9c47d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061192f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00611931: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x611936u); f_005b7a84();
    /* 00611936: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611939: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00611940:; BB(0x00611940);
    /* 00611940: mov dword ptr [0xa8ea1c], eax */ W32((u32)(0xa8ea1cu), r_eax);
    /* 00611945: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611948: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061194f: mov esp, ebp */ r_esp = r_ebp;
    /* 00611951: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611952: ret  */ FN_RET(0x006118d4); r_esp += 4; return;
L_00611953:; BB(0x00611953);
    /* 00611953: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00611955: jmp 0x611940 */ goto L_00611940;
}

void f_00611958(void) /* sub_611958 */
{
    FN_ENTER(0x00611958);
    /* 00611958: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00611959: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061195b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061195d: call 0x61197c */ r_esp -= 4; W32(r_esp, 0x611962u); f_0061197c();
    /* 00611962: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00611966: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00611968: jne 0x61196e */ if (!fZ) goto L_0061196e;
L_0061196a:; BB(0x0061196a);
    /* 0061196a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061196b: ret 4 */ FN_RET(0x00611958); r_esp += 8; return;
L_0061196e:; BB(0x0061196e);
    /* 0061196e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061196f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x611974u); f_005c2f74();
    /* 00611974: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00611975: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00611976: ret 4 */ FN_RET(0x00611958); r_esp += 8; return;
}

void f_0061197c(void) /* sub_61197C */
{
    FN_ENTER(0x0061197c);
    /* 0061197c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061197d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061197f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611981: push 0x8e0e8c */ { u32 v = 0x8e0e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00611986: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061198c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061198d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00611994: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00611997: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061199a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061199d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006119a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006119a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006119a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006119ad: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006119b0: mov dword ptr [eax], 0xb24ba0 */ W32((u32)(r_eax), 0xb24ba0u);
    /* 006119b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006119b7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6119bcu); f_007b4e84();
    /* 006119bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006119bd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006119c0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6119c5u); f_007b9c8c();
    /* 006119c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006119cc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006119cf: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6119d4u); f_00770660();
    /* 006119d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006119d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006119de: mov esp, ebp */ r_esp = r_ebp;
    /* 006119e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006119e1: ret  */ FN_RET(0x0061197c); r_esp += 4; return;
}

void f_006119e4(void)
{
    FN_ENTER(0x006119e4);
    /* 006119e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006119e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006119e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006119e9: push 0x8e0eb4 */ { u32 v = 0x8e0eb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006119ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006119f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006119f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006119fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006119ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00611a02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00611a05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00611a08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00611a0b: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 00611a10: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00611a17: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x611a1cu); f_005caba4();
    /* 00611a1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00611a1d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00611a20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611a22: je 0x611a5b */ if (fZ) goto L_00611a5b;
L_00611a24:; BB(0x00611a24);
    /* 00611a24: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00611a2b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00611a32: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00611a35: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00611a3b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611a3e: call 0x611a60 */ r_esp -= 4; W32(r_esp, 0x611a43u); f_00611a60();
    /* 00611a43: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611a46: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00611a4d:; BB(0x00611a4d);
    /* 00611a4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611a50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00611a57: mov esp, ebp */ r_esp = r_ebp;
    /* 00611a59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611a5a: ret  */ FN_RET(0x006119e4); r_esp += 4; return;
L_00611a5b:; BB(0x00611a5b);
    /* 00611a5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00611a5d: jmp 0x611a4d */ goto L_00611a4d;
}

void f_00611a60(void) /* sub_611A60 */
{
    FN_ENTER(0x00611a60);
    /* 00611a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00611a63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611a65: push 0x8e0ed0 */ { u32 v = 0x8e0ed0u; r_esp -= 4; W32(r_esp, v); }
    /* 00611a6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00611a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611a71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00611a78: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00611a7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00611a7e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00611a81: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00611a84: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00611a87: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00611a8a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00611a8d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00611a90: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00611a93: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x611a98u); f_00770748();
    /* 00611a98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00611a9f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611aa2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00611aa5: mov dword ptr [ecx], 0xb24ba0 */ W32((u32)(r_ecx), 0xb24ba0u);
    /* 00611aab: mov eax, dword ptr [0x9c47ec] */ r_eax = R32((u32)(0x9c47ecu));
    /* 00611ab0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611ab1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00611ab4: call dword ptr [0xb24bb4] */ { u32 t = R32((u32)(0xb24bb4u)); r_esp -= 4; W32(r_esp, 0x611abau); call_ind(t); }
    /* 00611aba: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611abd: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00611ac0: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00611ac3: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00611ac6: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00611acc: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00611ad2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611ad5: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00611adb: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00611ae1: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00611ae7: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00611aed: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00611af3: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00611af9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611afc: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00611b02: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611b05: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00611b0b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00611b0e: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00611b14: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00611b17: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00611b1d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00611b20: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x611b25u); f_0077a1f4();
    /* 00611b25: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611b28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00611b2a: push 0x9c47f0 */ { u32 v = 0x9c47f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00611b2f: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x611b34u); f_007b9a88();
    /* 00611b34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611b37: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x611b3cu); f_007b4f54();
    /* 00611b3c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611b3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00611b41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00611b43: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x611b48u); f_007b52ec();
    /* 00611b48: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611b4b: fild dword ptr [eax + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x84u)));
    /* 00611b51: fild dword ptr [eax + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x88u)));
    /* 00611b57: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00611b5a: fld dword ptr [0x92fde4] */ FPUSH(R_F32((u32)(0x92fde4u)));
    /* 00611b60: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611b63: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00611b66: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00611b69: fld dword ptr [eax + 0x6c] */ FPUSH(R_F32((u32)(r_eax+0x6cu)));
    /* 00611b6c: fmul dword ptr [0x92fde0] */ ST(0) = ST(0) * R_F32((u32)(0x92fde0u));
    /* 00611b72: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00611b74: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 00611b76: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00611b78: fstp dword ptr [eax + 0x344] */ W_F32((u32)(r_eax+0x344u), ST(0)); FPOP();
    /* 00611b7e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00611b80: fstp dword ptr [eax + 0x348] */ W_F32((u32)(r_eax+0x348u), ST(0)); FPOP();
    /* 00611b86: fstp dword ptr [eax + 0x34c] */ W_F32((u32)(r_eax+0x34cu), ST(0)); FPOP();
    /* 00611b8c: mov dword ptr [eax + 0x340], edx */ W32((u32)(r_eax+0x340u), r_edx);
    /* 00611b92: mov dword ptr [eax + 0x33c], 0 */ W32((u32)(r_eax+0x33cu), 0x0u);
    /* 00611b9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611b9f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00611ba6: mov esp, ebp */ r_esp = r_ebp;
    /* 00611ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611ba9: ret 8 */ FN_RET(0x00611a60); r_esp += 12; return;
}

void f_00611bac(void) /* sub_611BAC */
{
    FN_ENTER(0x00611bac);
    /* 00611bac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00611bad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00611bae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611baf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00611bb0: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00611bb3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00611bb5: mov esi, edx */ r_esi = r_edx;
    /* 00611bb7: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00611bbc: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611bc2: mov ebp, ecx */ r_ebp = r_ecx;
L_00611bc4:; BB(0x00611bc4);
    /* 00611bc4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611bc6: jge 0x6121e4 */ if ((fS==fO)) goto L_006121e4;
L_00611bcc:; BB(0x00611bcc);
    /* 00611bcc: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 00611bd3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611bd5: je 0x6121a8 */ if (fZ) goto L_006121a8;
L_00611bdb:; BB(0x00611bdb);
    /* 00611bdb: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611bdd: je 0x6121a8 */ if (fZ) goto L_006121a8;
L_00611be3:; BB(0x00611be3);
    /* 00611be3: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00611be7: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611bed: je 0x6121a8 */ if (fZ) goto L_006121a8;
L_00611bf3:; BB(0x00611bf3);
    /* 00611bf3: cmp edi, 0x1000 */ {  u32 a = r_edi; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611bf9: jge 0x6121a8 */ if ((fS==fO)) goto L_006121a8;
L_00611bff:; BB(0x00611bff);
    /* 00611bff: mov edi, dword ptr [ebx + 0x3f0] */ r_edi = R32((u32)(r_ebx+0x3f0u));
    /* 00611c05: cmp edi, dword ptr [0xaafca0] */ {  u32 a = r_edi; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611c0b: jne 0x6121a8 */ if (!fZ) goto L_006121a8;
L_00611c11:; BB(0x00611c11);
    /* 00611c11: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00611c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00611c15: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00611c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611c19: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x611c1eu); f_007a9180();
    /* 00611c1e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00611c22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00611c25: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00611c29: fld dword ptr [ebp + 0x348] */ FPUSH(R_F32((u32)(r_ebp+0x348u)));
    /* 00611c2f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00611c31: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00611c33: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00611c35: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00611c36: jbe 0x6120db */ if ((fC||fZ)) goto L_006120db;
L_00611c3c:; BB(0x00611c3c);
    /* 00611c3c: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 00611c42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611c44: jne 0x611d58 */ if (!fZ) goto L_00611d58;
L_00611c4a:; BB(0x00611c4a);
    /* 00611c4a: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00611c51: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611c54: jne 0x611c66 */ if (!fZ) goto L_00611c66;
L_00611c56:; BB(0x00611c56);
    /* 00611c56: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00611c5b: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611c61: jmp 0x6121a8 */ goto L_006121a8;
L_00611c66:; BB(0x00611c66);
    /* 00611c66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00611c68: call 0x788f64 */ r_esp -= 4; W32(r_esp, 0x611c6du); f_00788f64();
    /* 00611c6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00611c6e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00611c73: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611c79: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00611c7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00611c7d: mov dword ptr [ebp + 0x33c], 1 */ W32((u32)(r_ebp+0x33cu), 0x1u);
    /* 00611c87: jle 0x611d37 */ if ((fZ||fS!=fO)) goto L_00611d37;
L_00611c8d:; BB(0x00611c8d);
    /* 00611c8d: mov ebx, dword ptr [edi*4 + 0xaad720] */ r_ebx = R32((u32)(r_edi*4+0xaad720u));
    /* 00611c94: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611c96: je 0x611d2c */ if (fZ) goto L_00611d2c;
L_00611c9c:; BB(0x00611c9c);
    /* 00611c9c: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611c9e: je 0x611d2c */ if (fZ) goto L_00611d2c;
L_00611ca4:; BB(0x00611ca4);
    /* 00611ca4: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00611ca8: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611cae: je 0x611d2c */ if (fZ) goto L_00611d2c;
L_00611cb4:; BB(0x00611cb4);
    /* 00611cb4: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611cba: jge 0x611d2c */ if ((fS==fO)) goto L_00611d2c;
L_00611cbc:; BB(0x00611cbc);
    /* 00611cbc: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00611cc3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611cc6: jne 0x611ccf */ if (!fZ) goto L_00611ccf;
L_00611cc8:; BB(0x00611cc8);
    /* 00611cc8: mov edx, 1 */ r_edx = 0x1u;
    /* 00611ccd: jmp 0x611cd1 */ goto L_00611cd1;
L_00611ccf:; BB(0x00611ccf);
    /* 00611ccf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00611cd1:; BB(0x00611cd1);
    /* 00611cd1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611cd3: jne 0x611d2c */ if (!fZ) goto L_00611d2c;
L_00611cd5:; BB(0x00611cd5);
    /* 00611cd5: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 00611cdb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00611cdd: je 0x611ce6 */ if (fZ) goto L_00611ce6;
L_00611cdf:; BB(0x00611cdf);
    /* 00611cdf: mov eax, 1 */ r_eax = 0x1u;
    /* 00611ce4: jmp 0x611ce8 */ goto L_00611ce8;
L_00611ce6:; BB(0x00611ce6);
    /* 00611ce6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00611ce8:; BB(0x00611ce8);
    /* 00611ce8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611cea: jne 0x611cf5 */ if (!fZ) goto L_00611cf5;
L_00611cec:; BB(0x00611cec);
    /* 00611cec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611cee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00611cf0: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x611cf5u); f_006854a8();
L_00611cf5:; BB(0x00611cf5);
    /* 00611cf5: mov eax, dword ptr [ebx + 0x720] */ r_eax = R32((u32)(r_ebx+0x720u));
    /* 00611cfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00611cfd: jle 0x6121b0 */ if ((fZ||fS!=fO)) goto L_006121b0;
L_00611d03:; BB(0x00611d03);
    /* 00611d03: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 00611d07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00611d09: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00611d0b: mov ebx, eax */ r_ebx = r_eax;
L_00611d0d:; BB(0x00611d0d);
    /* 00611d0d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00611d0e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00611d10: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x611d15u); f_00694c24();
    /* 00611d15: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00611d18: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611d1b: jl 0x611d0d */ if ((fS!=fO)) goto L_00611d0d;
L_00611d1d:; BB(0x00611d1d);
    /* 00611d1d: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00611d21: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00611d26: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00611d2c:; BB(0x00611d2c);
    /* 00611d2c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00611d2f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611d31: jl 0x611c8d */ if ((fS!=fO)) goto L_00611c8d;
L_00611d37:; BB(0x00611d37);
    /* 00611d37: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x611d3cu); f_00717d68();
    /* 00611d3c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00611d42: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x611d47u); f_00718078();
    /* 00611d47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00611d48: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00611d4d: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611d53: jmp 0x6121a8 */ goto L_006121a8;
L_00611d58:; BB(0x00611d58);
    /* 00611d58: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611d5b: jne 0x6120cb */ if (!fZ) goto L_006120cb;
L_00611d61:; BB(0x00611d61);
    /* 00611d61: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00611d65: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00611d68: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00611d6c: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00611d6f: mov edx, edi */ r_edx = r_edi;
    /* 00611d71: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00611d75: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00611d78: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00611d7c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x611d81u); f_0082f9c4();
    /* 00611d81: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00611d85: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x611d8au); f_0082df08();
    /* 00611d8a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00611d8c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00611d90: fmul dword ptr [ebp + 0x344] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x344u));
    /* 00611d96: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00611d9a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00611d9c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00611d9e: fstp dword ptr [ebx + 0x30c] */ W_F32((u32)(r_ebx+0x30cu), ST(0)); FPOP();
    /* 00611da4: fmul dword ptr [ebp + 0x344] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x344u));
    /* 00611daa: fstp dword ptr [ebx + 0x314] */ W_F32((u32)(r_ebx+0x314u), ST(0)); FPOP();
    /* 00611db0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00611db2: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x611db5u); call_ind(t); }
    /* 00611db5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00611db9: fld dword ptr [ebp + 0x348] */ FPUSH(R_F32((u32)(r_ebp+0x348u)));
    /* 00611dbf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00611dc1: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00611dc8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00611dca: fchs  */ ST(0) = -ST(0);
    /* 00611dcc: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00611dce: fadd dword ptr [0x92fdd8] */ ST(0) = ST(0) + R_F32((u32)(0x92fdd8u));
    /* 00611dd4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611dd7: fchs  */ ST(0) = -ST(0);
    /* 00611dd9: fmul dword ptr [ebp + 0x34c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x34cu));
    /* 00611ddf: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 00611de2: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00611de5: jne 0x611df7 */ if (!fZ) goto L_00611df7;
L_00611de7:; BB(0x00611de7);
    /* 00611de7: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00611dec: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611df2: jmp 0x6121a8 */ goto L_006121a8;
L_00611df7:; BB(0x00611df7);
    /* 00611df7: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00611dfc: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611e02: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00611e04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00611e06: jle 0x611eb8 */ if ((fZ||fS!=fO)) goto L_00611eb8;
L_00611e0c:; BB(0x00611e0c);
    /* 00611e0c: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
L_00611e10:; BB(0x00611e10);
    /* 00611e10: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00611e17: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611e19: je 0x611ea9 */ if (fZ) goto L_00611ea9;
L_00611e1f:; BB(0x00611e1f);
    /* 00611e1f: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611e21: je 0x611ea9 */ if (fZ) goto L_00611ea9;
L_00611e27:; BB(0x00611e27);
    /* 00611e27: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00611e2b: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611e31: je 0x611ea9 */ if (fZ) goto L_00611ea9;
L_00611e33:; BB(0x00611e33);
    /* 00611e33: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611e39: jge 0x611ea9 */ if ((fS==fO)) goto L_00611ea9;
L_00611e3b:; BB(0x00611e3b);
    /* 00611e3b: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00611e42: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611e45: jne 0x611e4e */ if (!fZ) goto L_00611e4e;
L_00611e47:; BB(0x00611e47);
    /* 00611e47: mov edx, 1 */ r_edx = 0x1u;
    /* 00611e4c: jmp 0x611e50 */ goto L_00611e50;
L_00611e4e:; BB(0x00611e4e);
    /* 00611e4e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00611e50:; BB(0x00611e50);
    /* 00611e50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611e52: jne 0x611ea9 */ if (!fZ) goto L_00611ea9;
L_00611e54:; BB(0x00611e54);
    /* 00611e54: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 00611e5a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00611e5c: je 0x611e65 */ if (fZ) goto L_00611e65;
L_00611e5e:; BB(0x00611e5e);
    /* 00611e5e: mov eax, 1 */ r_eax = 0x1u;
    /* 00611e63: jmp 0x611e67 */ goto L_00611e67;
L_00611e65:; BB(0x00611e65);
    /* 00611e65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00611e67:; BB(0x00611e67);
    /* 00611e67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611e69: jne 0x611e74 */ if (!fZ) goto L_00611e74;
L_00611e6b:; BB(0x00611e6b);
    /* 00611e6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611e6d: mov ecx, esi */ r_ecx = r_esi;
    /* 00611e6f: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x611e74u); f_006854a8();
L_00611e74:; BB(0x00611e74);
    /* 00611e74: mov eax, dword ptr [esi + 0x720] */ r_eax = R32((u32)(r_esi+0x720u));
    /* 00611e7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00611e7c: jle 0x6121ca */ if ((fZ||fS!=fO)) goto L_006121ca;
L_00611e82:; BB(0x00611e82);
    /* 00611e82: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 00611e86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00611e88: mov ebp, eax */ r_ebp = r_eax;
L_00611e8a:; BB(0x00611e8a);
    /* 00611e8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611e8b: mov ecx, esi */ r_ecx = r_esi;
    /* 00611e8d: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x611e92u); f_00694c24();
    /* 00611e92: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00611e95: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611e98: jl 0x611e8a */ if ((fS!=fO)) goto L_00611e8a;
L_00611e9a:; BB(0x00611e9a);
    /* 00611e9a: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00611e9e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00611ea3: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00611ea9:; BB(0x00611ea9);
    /* 00611ea9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00611eac: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611eae: jl 0x611e10 */ if ((fS!=fO)) goto L_00611e10;
L_00611eb4:; BB(0x00611eb4);
    /* 00611eb4: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
L_00611eb8:; BB(0x00611eb8);
    /* 00611eb8: call 0x788f90 */ r_esp -= 4; W32(r_esp, 0x611ebdu); f_00788f90();
    /* 00611ebd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611ebf: je 0x611ed1 */ if (fZ) goto L_00611ed1;
L_00611ec1:; BB(0x00611ec1);
    /* 00611ec1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00611ec6: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611ecc: jmp 0x6121a8 */ goto L_006121a8;
L_00611ed1:; BB(0x00611ed1);
    /* 00611ed1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00611ed3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611ed4: mov dword ptr [ebp + 0x33c], eax */ W32((u32)(r_ebp+0x33cu), r_eax);
    /* 00611eda: call 0x788f38 */ r_esp -= 4; W32(r_esp, 0x611edfu); f_00788f38();
    /* 00611edf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00611ee0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00611ee5: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611eeb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00611eed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00611eef: jle 0x612085 */ if ((fZ||fS!=fO)) goto L_00612085;
L_00611ef5:; BB(0x00611ef5);
    /* 00611ef5: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
L_00611ef9:; BB(0x00611ef9);
    /* 00611ef9: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00611f00: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611f02: je 0x612076 */ if (fZ) goto L_00612076;
L_00611f08:; BB(0x00611f08);
    /* 00611f08: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611f0a: je 0x612076 */ if (fZ) goto L_00612076;
L_00611f10:; BB(0x00611f10);
    /* 00611f10: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00611f14: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611f1a: je 0x612076 */ if (fZ) goto L_00612076;
L_00611f20:; BB(0x00611f20);
    /* 00611f20: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611f26: jge 0x612076 */ if ((fS==fO)) goto L_00612076;
L_00611f2c:; BB(0x00611f2c);
    /* 00611f2c: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00611f33: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611f36: jne 0x611f3f */ if (!fZ) goto L_00611f3f;
L_00611f38:; BB(0x00611f38);
    /* 00611f38: mov edx, 1 */ r_edx = 0x1u;
    /* 00611f3d: jmp 0x611f41 */ goto L_00611f41;
L_00611f3f:; BB(0x00611f3f);
    /* 00611f3f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00611f41:; BB(0x00611f41);
    /* 00611f41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611f43: jne 0x612076 */ if (!fZ) goto L_00612076;
L_00611f49:; BB(0x00611f49);
    /* 00611f49: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x611f4eu); f_008587a5();
    /* 00611f4e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x611f53u); f_008587a5();
    /* 00611f53: fild dword ptr [ebp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x5cu)));
    /* 00611f56: fld dword ptr [0x92fdd4] */ FPUSH(R_F32((u32)(0x92fdd4u)));
    /* 00611f5c: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 00611f5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00611f60: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00611f63: fild dword ptr [ebp + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x64u)));
    /* 00611f66: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00611f68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00611f6a: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 00611f6d: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 00611f74: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00611f77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611f78: mov ecx, esi */ r_ecx = r_esi;
    /* 00611f7a: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x611f7fu); f_007b4c58();
    /* 00611f7f: mov ecx, esi */ r_ecx = r_esi;
    /* 00611f81: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x611f86u); f_0077a1f4();
    /* 00611f86: mov byte ptr [esp + 0x18], 0x3f */ W8((u32)(r_esp+0x18u), 0x3fu);
    /* 00611f8b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00611f8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00611f91: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00611f96: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 00611f9b: mov word ptr [esp + 0x1c], ax */ W16((u32)(r_esp+0x1cu), (u16)r_eax);
    /* 00611fa0: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00611fa4: mov word ptr [esp + 0x20], dx */ W16((u32)(r_esp+0x20u), (u16)r_edx);
    /* 00611fa9: mov word ptr [esp + 0x22], dx */ W16((u32)(r_esp+0x22u), (u16)r_edx);
    /* 00611fae: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 00611fb3: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00611fb6: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 00611fbb: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00611fbe: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00611fc2: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00611fc5: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00611fc9: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00611fcc: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00611fd0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x611fd5u); f_008003e0();
    /* 00611fd5: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 00611fdb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00611fdd: je 0x611fe6 */ if (fZ) goto L_00611fe6;
L_00611fdf:; BB(0x00611fdf);
    /* 00611fdf: mov eax, 1 */ r_eax = 0x1u;
    /* 00611fe4: jmp 0x611fe8 */ goto L_00611fe8;
L_00611fe6:; BB(0x00611fe6);
    /* 00611fe6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00611fe8:; BB(0x00611fe8);
    /* 00611fe8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611fea: je 0x611ffa */ if (fZ) goto L_00611ffa;
L_00611fec:; BB(0x00611fec);
    /* 00611fec: mov ecx, esi */ r_ecx = r_esi;
    /* 00611fee: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x611ff3u); f_00685514();
    /* 00611ff3: mov ecx, esi */ r_ecx = r_esi;
    /* 00611ff5: call 0x688d54 */ r_esp -= 4; W32(r_esp, 0x611ffau); f_00688d54();
L_00611ffa:; BB(0x00611ffa);
    /* 00611ffa: mov eax, dword ptr [esi + 0x720] */ r_eax = R32((u32)(r_esi+0x720u));
    /* 00612000: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612003: jg 0x61201a */ if ((!fZ&&fS==fO)) goto L_0061201a;
L_00612005:; BB(0x00612005);
    /* 00612005: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00612008: mov dword ptr [esi + 0x720], 0 */ W32((u32)(r_esi+0x720u), 0x0u);
    /* 00612012: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00612017: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_0061201a:; BB(0x0061201a);
    /* 0061201a: movsx eax, word ptr [esi + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2bcu));
    /* 00612021: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00612025: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00612029: fmul dword ptr [0x92fdcc] */ ST(0) = ST(0) * R_F32((u32)(0x92fdccu));
    /* 0061202f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00612031: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00612035: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00612037: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0061203b: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00612040: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612041: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612042: mov ecx, esi */ r_ecx = r_esi;
    /* 00612044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612045: push dword ptr [esp + 0x40] */ { u32 v = R32((u32)(r_esp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061204b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061204c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x61204fu); call_ind(t); }
    /* 0061204f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00612051: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00612054: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0061205a: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061205f: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00612062: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00612065: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0061206a: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00612070: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
L_00612076:; BB(0x00612076);
    /* 00612076: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00612079: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061207b: jl 0x611ef9 */ if ((fS!=fO)) goto L_00611ef9;
L_00612081:; BB(0x00612081);
    /* 00612081: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
L_00612085:; BB(0x00612085);
    /* 00612085: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x61208au); f_00717d48();
    /* 0061208a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612090: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x612095u); f_00718048();
    /* 00612095: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 0061209d: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 006120a1: mov dword ptr [esp + 0x40], 0x42200000 */ W32((u32)(r_esp+0x40u), 0x42200000u);
    /* 006120a9: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 006120b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006120b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006120b3: call 0x4d307c */ r_esp -= 4; W32(r_esp, 0x6120b8u); f_004d307c();
    /* 006120b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006120bb: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006120c0: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006120c6: jmp 0x6121a8 */ goto L_006121a8;
L_006120cb:; BB(0x006120cb);
    /* 006120cb: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006120d0: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006120d6: jmp 0x6121a8 */ goto L_006121a8;
L_006120db:; BB(0x006120db);
    /* 006120db: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 006120df: fld dword ptr [ebp + 0x340] */ FPUSH(R_F32((u32)(r_ebp+0x340u)));
    /* 006120e5: fmul dword ptr [0x92fddc] */ ST(0) = ST(0) * R_F32((u32)(0x92fddcu));
    /* 006120eb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006120ed: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006120ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006120f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006120f2: ja 0x612104 */ if ((!fC&&!fZ)) goto L_00612104;
L_006120f4:; BB(0x006120f4);
    /* 006120f4: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006120f9: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006120ff: jmp 0x6121a8 */ goto L_006121a8;
L_00612104:; BB(0x00612104);
    /* 00612104: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0061210b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061210d: jle 0x61219d */ if ((fZ||fS!=fO)) goto L_0061219d;
L_00612113:; BB(0x00612113);
    /* 00612113: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00612116: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061211b: je 0x61212d */ if (fZ) goto L_0061212d;
L_0061211d:; BB(0x0061211d);
    /* 0061211d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00612122: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00612128: jmp 0x6121a8 */ goto L_006121a8;
L_0061212d:; BB(0x0061212d);
    /* 0061212d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061212f: call 0x68c414 */ r_esp -= 4; W32(r_esp, 0x612134u); f_0068c414();
    /* 00612134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612136: jne 0x612145 */ if (!fZ) goto L_00612145;
L_00612138:; BB(0x00612138);
    /* 00612138: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0061213d: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00612143: jmp 0x6121a8 */ goto L_006121a8;
L_00612145:; BB(0x00612145);
    /* 00612145: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00612148: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0061214b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0061214e: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00612151: mov edx, edi */ r_edx = r_edi;
    /* 00612153: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00612157: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0061215a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0061215e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x612163u); f_0082f9c4();
    /* 00612163: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00612166: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x61216bu); f_0082df08();
    /* 0061216b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0061216d: fld dword ptr [ebp + 0x344] */ FPUSH(R_F32((u32)(r_ebp+0x344u)));
    /* 00612173: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612176: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0061217a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0061217c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00612180: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00612182: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00612185: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00612189: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061218b: call 0x77a0f8 */ r_esp -= 4; W32(r_esp, 0x612190u); f_0077a0f8();
    /* 00612190: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00612195: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061219b: jmp 0x6121a8 */ goto L_006121a8;
L_0061219d:; BB(0x0061219d);
    /* 0061219d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006121a2: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006121a8:; BB(0x006121a8);
    /* 006121a8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006121ab: jmp 0x611bc4 */ goto L_00611bc4;
L_006121b0:; BB(0x006121b0);
    /* 006121b0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006121b3: mov dword ptr [ebx + 0x720], 1 */ W32((u32)(r_ebx+0x720u), 0x1u);
    /* 006121bd: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006121c2: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 006121c5: jmp 0x611d03 */ goto L_00611d03;
L_006121ca:; BB(0x006121ca);
    /* 006121ca: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006121cd: mov dword ptr [esi + 0x720], 1 */ W32((u32)(r_esi+0x720u), 0x1u);
    /* 006121d7: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006121dc: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 006121df: jmp 0x611e82 */ goto L_00611e82;
L_006121e4:; BB(0x006121e4);
    /* 006121e4: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006121e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006121e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006121e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006121ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006121eb: ret  */ FN_RET(0x00611bac); r_esp += 4; return;
}

