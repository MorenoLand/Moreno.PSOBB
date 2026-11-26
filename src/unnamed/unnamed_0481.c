#include "protos.h"

void f_00481ff0(void) /* sub_481FF0 */
{
    FN_ENTER(0x00481ff0);
    /* 00481ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00481ff3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00481ff5: push 0x8cf764 */ { u32 v = 0x8cf764u; r_esp -= 4; W32(r_esp, v); }
    /* 00481ffa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00482000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482001: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00482008: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048200b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048200e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00482011: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00482014: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00482017: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048201a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048201d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00482020: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00482023: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00482026: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00482029: call 0x77f55c */ r_esp -= 4; W32(r_esp, 0x48202eu); f_0077f55c();
    /* 0048202e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00482031: mov dword ptr [edx], 0xaf8320 */ W32((u32)(r_edx), 0xaf8320u);
    /* 00482037: mov eax, dword ptr [0x9f84f0] */ r_eax = R32((u32)(0x9f84f0u));
    /* 0048203c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0048203f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482046: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00482049: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048204c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048204f: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00482052: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00482054: mov dword ptr [eax], 0xaf8348 */ W32((u32)(r_eax), 0xaf8348u);
    /* 0048205a: mov esi, dword ptr [0x9a6878] */ r_esi = R32((u32)(0x9a6878u));
    /* 00482060: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00482063: mov dword ptr [0xa46c38], eax */ W32((u32)(0xa46c38u), r_eax);
    /* 00482068: mov dword ptr [eax + 0x12130], 0xf */ W32((u32)(r_eax+0x12130u), 0xfu);
    /* 00482072: mov dword ptr [eax + 0x12120], edi */ W32((u32)(r_eax+0x12120u), r_edi);
    /* 00482078: mov dword ptr [eax + 0x12124], edx */ W32((u32)(r_eax+0x12124u), r_edx);
    /* 0048207e: mov dword ptr [eax + 0x1212c], edi */ W32((u32)(r_eax+0x1212cu), r_edi);
    /* 00482084: mov dword ptr [eax + 0x12134], ecx */ W32((u32)(r_eax+0x12134u), r_ecx);
    /* 0048208a: mov dword ptr [eax + 0x12138], edi */ W32((u32)(r_eax+0x12138u), r_edi);
    /* 00482090: mov dword ptr [0xa46c34], edi */ W32((u32)(0xa46c34u), r_edi);
    /* 00482096: mov dword ptr [eax + 0x1213c], edi */ W32((u32)(r_eax+0x1213cu), r_edi);
    /* 0048209c: mov dword ptr [eax + 0x12140], edi */ W32((u32)(r_eax+0x12140u), r_edi);
    /* 004820a2: mov byte ptr [ecx + 0x16], dl */ W8((u32)(r_ecx+0x16u), (u8)r_edx);
    /* 004820a5: mov eax, dword ptr [ebx + 0x1212c] */ r_eax = R32((u32)(r_ebx+0x1212cu));
    /* 004820ab: mov edx, dword ptr [ebx + 0x12134] */ r_edx = R32((u32)(r_ebx+0x12134u));
    /* 004820b1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004820b4: mov byte ptr [edx + 0x15], al */ W8((u32)(r_edx+0x15u), (u8)r_eax);
    /* 004820b7: mov eax, dword ptr [ecx + 0x12124] */ r_eax = R32((u32)(r_ecx+0x12124u));
    /* 004820bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004820bf: jne 0x4820d6 */ if (!fZ) goto L_004820d6;
L_004820c1:; BB(0x004820c1);
    /* 004820c1: push dword ptr [ecx + 0x12134] */ { u32 v = R32((u32)(r_ecx+0x12134u)); r_esp -= 4; W32(r_esp, v); }
    /* 004820c7: call 0x482490 */ r_esp -= 4; W32(r_esp, 0x4820ccu); f_00482490();
    /* 004820cc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004820cf: call 0x48242c */ r_esp -= 4; W32(r_esp, 0x4820d4u); f_0048242c();
    /* 004820d4: jmp 0x4820f4 */ goto L_004820f4;
L_004820d6:; BB(0x004820d6);
    /* 004820d6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004820d9: jl 0x4820f4 */ if ((fS!=fO)) goto L_004820f4;
L_004820db:; BB(0x004820db);
    /* 004820db: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004820de: jg 0x4820f4 */ if ((!fZ&&fS==fO)) goto L_004820f4;
L_004820e0:; BB(0x004820e0);
    /* 004820e0: mov eax, dword ptr [0xa95e48] */ r_eax = R32((u32)(0xa95e48u));
    /* 004820e5: mov edx, dword ptr [ecx + 0x12134] */ r_edx = R32((u32)(r_ecx+0x12134u));
    /* 004820eb: mov dword ptr [ecx + 0x1212c], eax */ W32((u32)(r_ecx+0x1212cu), r_eax);
    /* 004820f1: mov byte ptr [edx + 0x15], al */ W8((u32)(r_edx+0x15u), (u8)r_eax);
L_004820f4:; BB(0x004820f4);
    /* 004820f4: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x4820f9u); f_0082d2f8();
    /* 004820f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004820fb: je 0x482125 */ if (fZ) goto L_00482125;
L_004820fd:; BB(0x004820fd);
    /* 004820fd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00482100: mov eax, dword ptr [ecx + 0x12134] */ r_eax = R32((u32)(r_ecx+0x12134u));
    /* 00482106: movzx edx, byte ptr [eax + 0x17] */ r_edx = (u32)R8((u32)(r_eax+0x17u));
    /* 0048210a: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048210d: je 0x482128 */ if (fZ) goto L_00482128;
L_0048210f:; BB(0x0048210f);
    /* 0048210f: mov dword ptr [ecx + 0x12130], 3 */ W32((u32)(r_ecx+0x12130u), 0x3u);
    /* 00482119: mov dword ptr [ecx + 0x12120], 2 */ W32((u32)(r_ecx+0x12120u), 0x2u);
    /* 00482123: jmp 0x482145 */ goto L_00482145;
L_00482125:; BB(0x00482125);
    /* 00482125: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
L_00482128:; BB(0x00482128);
    /* 00482128: call 0x4821b0 */ r_esp -= 4; W32(r_esp, 0x48212du); f_004821b0();
    /* 0048212d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00482130: mov dword ptr [ecx + 0x12130], eax */ W32((u32)(r_ecx+0x12130u), r_eax);
    /* 00482136: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00482139: je 0x482145 */ if (fZ) goto L_00482145;
L_0048213b:; BB(0x0048213b);
    /* 0048213b: mov dword ptr [ecx + 0x12120], 2 */ W32((u32)(r_ecx+0x12120u), 0x2u);
L_00482145:; BB(0x00482145);
    /* 00482145: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00482148: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048214b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048214e: mov eax, ecx */ r_eax = r_ecx;
    /* 00482150: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482153: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048215a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048215c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048215d: ret 0xc */ FN_RET(0x00481ff0); r_esp += 16; return;
}

