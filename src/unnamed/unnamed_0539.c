#include "protos.h"

void f_005394d0(void) /* sub_5394D0 */
{
    FN_ENTER(0x005394d0);
    /* 005394d0: mov eax, dword ptr [ecx + 0x3dc] */ r_eax = R32((u32)(r_ecx+0x3dcu));
    /* 005394d6: shl eax, 0xf */ { u32 c = (15u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 005394d9: mov dword ptr [ecx + 0x4c0], eax */ W32((u32)(r_ecx+0x4c0u), r_eax);
    /* 005394df: mov dword ptr [ecx + 0x4c4], 0 */ W32((u32)(r_ecx+0x4c4u), 0x0u);
    /* 005394e9: ret  */ FN_RET(0x005394d0); r_esp += 4; return;
}

void f_005394ec(void) /* sub_5394EC */
{
    FN_ENTER(0x005394ec);
    /* 005394ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005394ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005394ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005394ef: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005394f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005394f3: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x5394f8u); f_00521840();
    /* 005394f8: mov edi, dword ptr [0xa735a8] */ r_edi = R32((u32)(0xa735a8u));
    /* 005394fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00539500: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00539506: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00539509: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 0053950c: push 0x9bcb84 */ { u32 v = 0x9bcb84u; r_esp -= 4; W32(r_esp, v); }
    /* 00539511: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00539517: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0053951a: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0053951d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053951f: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x539524u); f_0051ff3c();
    /* 00539524: mov eax, dword ptr [0xa735a8] */ r_eax = R32((u32)(0xa735a8u));
    /* 00539529: mov dword ptr [ebp + 0xd8], 0x9bcaa0 */ W32((u32)(r_ebp+0xd8u), 0x9bcaa0u);
    /* 00539533: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00539539: mov dword ptr [ebp + 0xdc], edx */ W32((u32)(r_ebp+0xdcu), r_edx);
    /* 0053953f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00539541: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00539542: mov word ptr [ebp + 0xb8], di */ W16((u32)(r_ebp+0xb8u), (u16)r_edi);
    /* 00539549: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053954b: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x539550u); f_007aa4c8();
    /* 00539550: push dword ptr [0xa735b0] */ { u32 v = R32((u32)(0xa735b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539556: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00539558: movzx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)R16((u32)(r_ebp+0xb8u));
    /* 0053955f: push dword ptr [0xa735b4] */ { u32 v = R32((u32)(0xa735b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539565: push dword ptr [0xa735bc] */ { u32 v = R32((u32)(0xa735bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053956b: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00539572: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x539577u); f_00520c70();
    /* 00539577: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00539579: call 0x520380 */ r_esp -= 4; W32(r_esp, 0x53957eu); f_00520380();
    /* 0053957e: mov dword ptr [ebp + 0x358], 0x9bcb68 */ W32((u32)(r_ebp+0x358u), 0x9bcb68u);
    /* 00539588: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0053958a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053958c: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x539591u); f_00520390();
    /* 00539591: mov dword ptr [ebp + 0x384], 0x41200000 */ W32((u32)(r_ebp+0x384u), 0x41200000u);
    /* 0053959b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053959d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053959f: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5395a4u); f_00521820();
    /* 005395a4: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005395a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005395a8: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5395adu); f_005217fc();
    /* 005395ad: mov edx, dword ptr [ebp + 0x3e0] */ r_edx = R32((u32)(r_ebp+0x3e0u));
    /* 005395b3: mov dword ptr [ebp + 0x3cc], 0xffffffff */ W32((u32)(r_ebp+0x3ccu), 0xffffffffu);
    /* 005395bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005395bf: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005395c5: mov dword ptr [ebp + 0x3d0], 0xff000000 */ W32((u32)(r_ebp+0x3d0u), 0xff000000u);
    /* 005395cf: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 005395d5: mov dword ptr [ebp + 0x3d8], eax */ W32((u32)(r_ebp+0x3d8u), r_eax);
    /* 005395db: lea ecx, [ebp + 0x3e0] */ r_ecx = (u32)(r_ebp+0x3e0u);
    /* 005395e1: mov dword ptr [ebp + 0x3dc], 1 */ W32((u32)(r_ebp+0x3dcu), 0x1u);
    /* 005395eb: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5395eeu); call_ind(t); }
    /* 005395ee: mov dword ptr [ebp + 0x3fc], 1 */ W32((u32)(r_ebp+0x3fcu), 0x1u);
    /* 005395f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005395f9: call 0x539838 */ r_esp -= 4; W32(r_esp, 0x5395feu); f_00539838();
    /* 005395fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005395ff: mov dword ptr [ebp + 0x400], eax */ W32((u32)(r_ebp+0x400u), r_eax);
    /* 00539605: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 0053960b: lea edi, [ebp + 0x404] */ r_edi = (u32)(r_ebp+0x404u);
    /* 00539611: mov ecx, edi */ r_ecx = r_edi;
    /* 00539613: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x539616u); call_ind(t); }
    /* 00539616: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x53961bu); f_00520e6c();
    /* 0053961b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053961d: je 0x53962c */ if (fZ) goto L_0053962c;
L_0053961f:; BB(0x0053961f);
    /* 0053961f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00539621: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 00539627: mov ecx, edi */ r_ecx = r_edi;
    /* 00539629: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x53962cu); call_ind(t); }
L_0053962c:; BB(0x0053962c);
    /* 0053962c: push 0xa0703030 */ { u32 v = 0xa0703030u; r_esp -= 4; W32(r_esp, v); }
    /* 00539631: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00539636: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00539639: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0053963c: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
    /* 0053963f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00539641: mov dword ptr [ebp + 0x420], ecx */ W32((u32)(r_ebp+0x420u), r_ecx);
    /* 00539647: mov dword ptr [ebp + 0x428], eax */ W32((u32)(r_ebp+0x428u), r_eax);
    /* 0053964d: mov dword ptr [ebp + 0x42c], edx */ W32((u32)(r_ebp+0x42cu), r_edx);
    /* 00539653: mov dword ptr [ebp + 0x430], edi */ W32((u32)(r_ebp+0x430u), r_edi);
    /* 00539659: mov dword ptr [ebp + 0x440], ecx */ W32((u32)(r_ebp+0x440u), r_ecx);
    /* 0053965f: mov dword ptr [ebp + 0x424], ecx */ W32((u32)(r_ebp+0x424u), r_ecx);
    /* 00539665: mov dword ptr [ebp + 0x434], eax */ W32((u32)(r_ebp+0x434u), r_eax);
    /* 0053966b: mov dword ptr [ebp + 0x438], edx */ W32((u32)(r_ebp+0x438u), r_edx);
    /* 00539671: mov dword ptr [ebp + 0x43c], edi */ W32((u32)(r_ebp+0x43cu), r_edi);
    /* 00539677: mov dword ptr [ebp + 0x444], ecx */ W32((u32)(r_ebp+0x444u), r_ecx);
    /* 0053967d: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x539682u); f_00578cc4();
    /* 00539682: push 0xa0703030 */ { u32 v = 0xa0703030u; r_esp -= 4; W32(r_esp, v); }
    /* 00539687: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0053968c: mov dword ptr [ebp + 0x448], eax */ W32((u32)(r_ebp+0x448u), r_eax);
    /* 00539692: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x539697u); f_00578cc4();
    /* 00539697: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053969a: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 005396a0: lea ecx, [ebp + 0x450] */ r_ecx = (u32)(r_ebp+0x450u);
    /* 005396a6: lea edi, [ebp + 0x4c0] */ r_edi = (u32)(r_ebp+0x4c0u);
    /* 005396ac: mov esi, ecx */ r_esi = r_ecx;
L_005396ae:; BB(0x005396ae);
    /* 005396ae: mov ecx, esi */ r_ecx = r_esi;
    /* 005396b0: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5396b5u); f_0057739c();
    /* 005396b5: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005396b8: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005396ba: jg 0x5396ae */ if ((!fZ&&fS==fO)) goto L_005396ae;
L_005396bc:; BB(0x005396bc);
    /* 005396bc: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005396bf: mov dword ptr [ebp + 0x4d8], 0 */ W32((u32)(r_ebp+0x4d8u), 0x0u);
    /* 005396c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005396cb: mov dword ptr [ebp + 0x4c0], eax */ W32((u32)(r_ebp+0x4c0u), r_eax);
    /* 005396d1: mov dword ptr [ebp + 0x4dc], 0 */ W32((u32)(r_ebp+0x4dcu), 0x0u);
    /* 005396db: mov dword ptr [ebp + 0x4c4], eax */ W32((u32)(r_ebp+0x4c4u), r_eax);
    /* 005396e1: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 005396e7: mov dword ptr [ebp + 0x4cc], eax */ W32((u32)(r_ebp+0x4ccu), r_eax);
    /* 005396ed: mov dword ptr [ebp + 0x4e0], 0 */ W32((u32)(r_ebp+0x4e0u), 0x0u);
    /* 005396f7: mov dword ptr [ebp + 0x4d0], eax */ W32((u32)(r_ebp+0x4d0u), r_eax);
    /* 005396fd: mov dword ptr [ebp + 0x4d4], eax */ W32((u32)(r_ebp+0x4d4u), r_eax);
    /* 00539703: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00539705: mov dword ptr [ebp + 0x4e4], 0 */ W32((u32)(r_ebp+0x4e4u), 0x0u);
    /* 0053970f: mov dword ptr [ebp + 0x4e8], 0 */ W32((u32)(r_ebp+0x4e8u), 0x0u);
    /* 00539719: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x53971fu); call_ind(t); }
    /* 0053971f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00539721: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00539724: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00539726: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0053972d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053972f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539730: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x539736u); call_ind(t); }
    /* 00539736: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539737: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539738: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00539739: ret  */ FN_RET(0x005394ec); r_esp += 4; return;
}

void f_0053973c(void) /* sub_53973C */
{
    FN_ENTER(0x0053973c);
    /* 0053973c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053973d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053973f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00539741: call 0x539760 */ r_esp -= 4; W32(r_esp, 0x539746u); f_00539760();
    /* 00539746: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053974a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053974c: jne 0x539752 */ if (!fZ) goto L_00539752;
L_0053974e:; BB(0x0053974e);
    /* 0053974e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053974f: ret 4 */ FN_RET(0x0053973c); r_esp += 8; return;
L_00539752:; BB(0x00539752);
    /* 00539752: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00539753: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x539758u); f_005c2f74();
    /* 00539758: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00539759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053975a: ret 4 */ FN_RET(0x0053973c); r_esp += 8; return;
}

void f_00539760(void) /* sub_539760 */
{
    FN_ENTER(0x00539760);
    /* 00539760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539761: mov ebp, esp */ r_ebp = r_esp;
    /* 00539763: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00539765: push 0x8d514c */ { u32 v = 0x8d514cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053976a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00539770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539771: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00539778: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053977b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053977e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00539781: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00539784: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00539787: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053978a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00539791: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00539794: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0053979a: mov dword ptr [eax], 0xb02500 */ W32((u32)(r_eax), 0xb02500u);
    /* 005397a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005397a2: je 0x5397be */ if (fZ) goto L_005397be;
L_005397a4:; BB(0x005397a4);
    /* 005397a4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005397a8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005397ad: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005397b1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005397b4: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
L_005397be:; BB(0x005397be);
    /* 005397be: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 005397c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005397c6: je 0x5397e2 */ if (fZ) goto L_005397e2;
L_005397c8:; BB(0x005397c8);
    /* 005397c8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005397cc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005397d1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005397d5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005397d8: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
L_005397e2:; BB(0x005397e2);
    /* 005397e2: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 005397e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005397ea: je 0x539806 */ if (fZ) goto L_00539806;
L_005397f0:; BB(0x005397f0);
    /* 005397f0: je 0x5397fc */ if (fZ) goto L_005397fc;
L_005397f2:; BB(0x005397f2);
    /* 005397f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005397f4: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x5397f9u); f_00418aa8();
    /* 005397f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_005397fc:; BB(0x005397fc);
    /* 005397fc: mov dword ptr [eax + 0xd8], 0 */ W32((u32)(r_eax+0xd8u), 0x0u);
L_00539806:; BB(0x00539806);
    /* 00539806: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053980d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00539810: add ecx, 0xf8 */ {  u32 a = r_ecx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00539816: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x53981bu); f_005122a8();
    /* 0053981b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00539822: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00539825: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x53982au); f_005219f0();
    /* 0053982a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053982d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00539834: mov esp, ebp */ r_esp = r_ebp;
    /* 00539836: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539837: ret  */ FN_RET(0x00539760); r_esp += 4; return;
}

void f_00539838(void) /* sub_539838 */
{
    FN_ENTER(0x00539838);
    /* 00539838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539839: mov ebp, esp */ r_ebp = r_esp;
    /* 0053983b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053983d: push 0x8d5174 */ { u32 v = 0x8d5174u; r_esp -= 4; W32(r_esp, v); }
    /* 00539842: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00539848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539849: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00539850: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00539853: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00539856: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00539859: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0053985c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053985f: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 00539864: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0053986b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x539870u); f_005caba4();
    /* 00539870: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00539871: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00539874: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539876: je 0x5398ab */ if (fZ) goto L_005398ab;
L_00539878:; BB(0x00539878);
    /* 00539878: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0053987f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00539886: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00539889: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053988c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053988d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053988e: call 0x5398b0 */ r_esp -= 4; W32(r_esp, 0x539893u); f_005398b0();
    /* 00539893: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00539896: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0053989d:; BB(0x0053989d);
    /* 0053989d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005398a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005398a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005398a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005398aa: ret  */ FN_RET(0x00539838); r_esp += 4; return;
L_005398ab:; BB(0x005398ab);
    /* 005398ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005398ad: jmp 0x53989d */ goto L_0053989d;
}

void f_005398b0(void) /* sub_5398B0 */
{
    FN_ENTER(0x005398b0);
    /* 005398b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005398b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005398b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005398b5: push 0x8d51a4 */ { u32 v = 0x8d51a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005398ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005398c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005398c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005398c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005398cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005398ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005398d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005398d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005398d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005398da: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005398dd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005398e0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005398e2: push 0x9bcbc0 */ { u32 v = 0x9bcbc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005398e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005398e8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005398eb: call 0x521c5c */ r_esp -= 4; W32(r_esp, 0x5398f0u); f_00521c5c();
    /* 005398f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005398f7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005398fa: mov dword ptr [ecx], 0xb02500 */ W32((u32)(r_ecx), 0xb02500u);
    /* 00539900: add ecx, 0xf8 */ {  u32 a = r_ecx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00539906: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x53990bu); f_005122f8();
    /* 0053990b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00539912: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00539915: mov eax, dword ptr [0x9bcc18] */ r_eax = R32((u32)(0x9bcc18u));
    /* 0053991a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053991d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00539920: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00539924: mov word ptr [ecx + 0xb0], bx */ W16((u32)(r_ecx+0xb0u), (u16)r_ebx);
    /* 0053992b: call 0x53a0cc */ r_esp -= 4; W32(r_esp, 0x539930u); f_0053a0cc();
    /* 00539930: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00539933: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00539936: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539939: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00539940: mov esp, ebp */ r_esp = r_ebp;
    /* 00539942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539943: ret 8 */ FN_RET(0x005398b0); r_esp += 12; return;
}

void f_00539948(void) /* sub_539948 */
{
    FN_ENTER(0x00539948);
    /* 00539948: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00539949: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053994c: mov esi, ecx */ r_esi = r_ecx;
    /* 0053994e: movzx eax, word ptr [esi + 0xb0] */ r_eax = (u32)R16((u32)(r_esi+0xb0u));
    /* 00539955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539956: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x53995bu); f_007b4d18();
    /* 0053995b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053995c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053995e: je 0x539b3f */ if (fZ) goto L_00539b3f;
L_00539964:; BB(0x00539964);
    /* 00539964: mov ecx, eax */ r_ecx = r_eax;
    /* 00539966: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x53996bu); f_008173b4();
    /* 0053996b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053996d: je 0x5399c2 */ if (fZ) goto L_005399c2;
L_0053996f:; BB(0x0053996f);
    /* 0053996f: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00539975: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539977: je 0x53999f */ if (fZ) goto L_0053999f;
L_00539979:; BB(0x00539979);
    /* 00539979: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053997c: jne 0x53998d */ if (!fZ) goto L_0053998d;
L_0053997e:; BB(0x0053997e);
    /* 0053997e: mov ecx, esi */ r_ecx = r_esi;
    /* 00539980: call 0x539c7c */ r_esp -= 4; W32(r_esp, 0x539985u); f_00539c7c();
    /* 00539985: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 0053998b: jmp 0x53999f */ goto L_0053999f;
L_0053998d:; BB(0x0053998d);
    /* 0053998d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539990: jne 0x53999f */ if (!fZ) goto L_0053999f;
L_00539992:; BB(0x00539992);
    /* 00539992: mov ecx, esi */ r_ecx = r_esi;
    /* 00539994: call 0x539b54 */ r_esp -= 4; W32(r_esp, 0x539999u); f_00539b54();
    /* 00539999: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
L_0053999f:; BB(0x0053999f);
    /* 0053999f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005399a2: je 0x5399c7 */ if (fZ) goto L_005399c7;
L_005399a4:; BB(0x005399a4);
    /* 005399a4: mov ecx, dword ptr [esi + 0xd0] */ r_ecx = R32((u32)(r_esi+0xd0u));
    /* 005399aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005399ac: je 0x5399b3 */ if (fZ) goto L_005399b3;
L_005399ae:; BB(0x005399ae);
    /* 005399ae: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5399b3u); f_00508f48();
L_005399b3:; BB(0x005399b3);
    /* 005399b3: mov ecx, dword ptr [esi + 0xd4] */ r_ecx = R32((u32)(r_esi+0xd4u));
    /* 005399b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005399bb: je 0x5399c2 */ if (fZ) goto L_005399c2;
L_005399bd:; BB(0x005399bd);
    /* 005399bd: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5399c2u); f_00508f48();
L_005399c2:; BB(0x005399c2);
    /* 005399c2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005399c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005399c6: ret  */ FN_RET(0x00539948); r_esp += 4; return;
L_005399c7:; BB(0x005399c7);
    /* 005399c7: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005399ca: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005399d2: lea eax, [ecx + 0x4000] */ r_eax = (u32)(r_ecx+0x4000u);
    /* 005399d8: mov dword ptr [esp + 0x10], 0xffffc000 */ W32((u32)(r_esp+0x10u), 0xffffc000u);
    /* 005399e0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005399e4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5399e9u); f_0082dcbc();
    /* 005399e9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005399ed: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005399f1: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005399f4: fchs  */ ST(0) = -ST(0);
    /* 005399f6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005399fa: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5399ffu); f_0082ddd8();
    /* 005399ff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00539a02: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00539a05: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 00539a0b: fchs  */ ST(0) = -ST(0);
    /* 00539a0d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00539a10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539a12: je 0x539b07 */ if (fZ) goto L_00539b07;
L_00539a18:; BB(0x00539a18);
    /* 00539a18: fld dword ptr [0x9230d0] */ FPUSH(R_F32((u32)(0x9230d0u)));
    /* 00539a1e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00539a22: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00539a24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539a26: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00539a29: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539a2b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00539a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00539a33: mov dword ptr [esp + 0x18], 0x40400000 */ W32((u32)(r_esp+0x18u), 0x40400000u);
    /* 00539a3b: lea edx, [esi + 0xdc] */ r_edx = (u32)(r_esi+0xdcu);
    /* 00539a41: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00539a45: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x539a4au); f_0082ebac();
    /* 00539a4a: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00539a4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539a4f: mov ecx, dword ptr [esi + 0xd0] */ r_ecx = R32((u32)(r_esi+0xd0u));
    /* 00539a55: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x539a5au); f_00508db8();
    /* 00539a5a: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00539a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539a5f: mov ecx, dword ptr [esi + 0xd0] */ r_ecx = R32((u32)(r_esi+0xd0u));
    /* 00539a65: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x539a6au); f_00508dd0();
L_00539a6a:; BB(0x00539a6a);
    /* 00539a6a: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 00539a70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539a72: je 0x539acf */ if (fZ) goto L_00539acf;
L_00539a74:; BB(0x00539a74);
    /* 00539a74: fld dword ptr [0x9230c8] */ FPUSH(R_F32((u32)(0x9230c8u)));
    /* 00539a7a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00539a7e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00539a81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539a83: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00539a85: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00539a87: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00539a89: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539a8b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00539a8f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00539a93: mov dword ptr [esp + 0x18], 0x40a00000 */ W32((u32)(r_esp+0x18u), 0x40a00000u);
    /* 00539a9b: lea edx, [esi + 0xdc] */ r_edx = (u32)(r_esi+0xdcu);
    /* 00539aa1: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00539aa5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x539aaau); f_0082ebac();
    /* 00539aaa: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00539aae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539aaf: mov ecx, dword ptr [esi + 0xd4] */ r_ecx = R32((u32)(r_esi+0xd4u));
    /* 00539ab5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x539abau); f_00508db8();
    /* 00539aba: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00539abe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539abf: mov ecx, dword ptr [esi + 0xd4] */ r_ecx = R32((u32)(r_esi+0xd4u));
    /* 00539ac5: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x539acau); f_00508dd0();
    /* 00539aca: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00539acd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539ace: ret  */ FN_RET(0x00539948); r_esp += 4; return;
L_00539acf:; BB(0x00539acf);
    /* 00539acf: push 0x150 */ { u32 v = 0x150u; r_esp -= 4; W32(r_esp, v); }
    /* 00539ad4: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00539ad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539ad8: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x539addu); f_00509590();
    /* 00539add: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539ae0: mov dword ptr [esi + 0xd4], eax */ W32((u32)(r_esi+0xd4u), r_eax);
    /* 00539ae6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539ae8: je 0x5399c2 */ if (fZ) goto L_005399c2;
L_00539aee:; BB(0x00539aee);
    /* 00539aee: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00539af0: mov ecx, eax */ r_ecx = r_eax;
    /* 00539af2: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x539af7u); f_00508efc();
    /* 00539af7: mov ecx, dword ptr [esi + 0xd4] */ r_ecx = R32((u32)(r_esi+0xd4u));
    /* 00539afd: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x539b02u); f_00508f48();
    /* 00539b02: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00539b05: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539b06: ret  */ FN_RET(0x00539948); r_esp += 4; return;
L_00539b07:; BB(0x00539b07);
    /* 00539b07: push 0xdd */ { u32 v = 0xddu; r_esp -= 4; W32(r_esp, v); }
    /* 00539b0c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00539b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539b10: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x539b15u); f_00509590();
    /* 00539b15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539b18: mov dword ptr [esi + 0xd0], eax */ W32((u32)(r_esi+0xd0u), r_eax);
    /* 00539b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539b20: je 0x539a6a */ if (fZ) goto L_00539a6a;
L_00539b26:; BB(0x00539b26);
    /* 00539b26: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00539b28: mov ecx, eax */ r_ecx = r_eax;
    /* 00539b2a: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x539b2fu); f_00508efc();
    /* 00539b2f: mov ecx, dword ptr [esi + 0xd0] */ r_ecx = R32((u32)(r_esi+0xd0u));
    /* 00539b35: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x539b3au); f_00508f48();
    /* 00539b3a: jmp 0x539a6a */ goto L_00539a6a;
L_00539b3f:; BB(0x00539b3f);
    /* 00539b3f: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00539b44: mov edx, 0x9230d4 */ r_edx = 0x9230d4u;
    /* 00539b49: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x539b4eu); f_0083bf84();
    /* 00539b4e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00539b51: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539b52: ret  */ FN_RET(0x00539948); r_esp += 4; return;
}

void f_00539b54(void) /* sub_539B54 */
{
    FN_ENTER(0x00539b54);
    /* 00539b54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00539b55: mov edi, ecx */ r_edi = r_ecx;
    /* 00539b57: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 00539b5d: lea ecx, [edi + 0xf8] */ r_ecx = (u32)(r_edi+0xf8u);
    /* 00539b63: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x539b66u); call_ind(t); }
    /* 00539b66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539b68: je 0x539b74 */ if (fZ) goto L_00539b74;
L_00539b6a:; BB(0x00539b6a);
    /* 00539b6a: mov dword ptr [edi + 0xb4], 0 */ W32((u32)(r_edi+0xb4u), 0x0u);
L_00539b74:; BB(0x00539b74);
    /* 00539b74: fld dword ptr [0x9230bc] */ FPUSH(R_F32((u32)(0x9230bcu)));
    /* 00539b7a: fld dword ptr [0x9230c0] */ FPUSH(R_F32((u32)(0x9230c0u)));
    /* 00539b80: fld dword ptr [edi + 0xbc] */ FPUSH(R_F32((u32)(r_edi+0xbcu)));
    /* 00539b86: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00539b88: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00539b8a: fadd dword ptr [edi + 0xdc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xdcu));
    /* 00539b90: fld dword ptr [edi + 0xc4] */ FPUSH(R_F32((u32)(r_edi+0xc4u)));
    /* 00539b96: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00539b98: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539b9a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00539b9c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539b9e: fadd dword ptr [edi + 0xe4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xe4u));
    /* 00539ba4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539ba6: fstp dword ptr [edi + 0xdc] */ W_F32((u32)(r_edi+0xdcu), ST(0)); FPOP();
    /* 00539bac: fstp dword ptr [edi + 0xe4] */ W_F32((u32)(r_edi+0xe4u), ST(0)); FPOP();
    /* 00539bb2: mov ecx, edi */ r_ecx = r_edi;
    /* 00539bb4: call 0x539bbc */ r_esp -= 4; W32(r_esp, 0x539bb9u); f_00539bbc();
    /* 00539bb9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00539bba: ret  */ FN_RET(0x00539b54); r_esp += 4; return;
}

void f_00539bbc(void) /* sub_539BBC */
{
    FN_ENTER(0x00539bbc);
    /* 00539bbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539bbd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00539bc0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00539bc2: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 00539bc8: mov edx, dword ptr [ebp + 0xe4] */ r_edx = R32((u32)(r_ebp+0xe4u));
    /* 00539bce: mov dword ptr [esp + 4], 0x41a00000 */ W32((u32)(r_esp+0x4u), 0x41a00000u);
    /* 00539bd6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00539bd9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00539bdd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00539be0: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00539be5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539be6: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x539bebu); f_00780630();
    /* 00539beb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539bee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539bf0: je 0x539c65 */ if (fZ) goto L_00539c65;
L_00539bf2:; BB(0x00539bf2);
    /* 00539bf2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00539bf5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00539bf7: mov dword ptr [ebp + 0x38], ecx */ W32((u32)(r_ebp+0x38u), r_ecx);
    /* 00539bfa: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00539bfd: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00539c00: mov dword ptr [ebp + 0x3c], ecx */ W32((u32)(r_ebp+0x3cu), r_ecx);
    /* 00539c03: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00539c06: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 00539c09: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00539c0c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00539c0f: mov dword ptr [ebp + 0xe8], eax */ W32((u32)(r_ebp+0xe8u), r_eax);
    /* 00539c15: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00539c18: mov dword ptr [ebp + 0xec], eax */ W32((u32)(r_ebp+0xecu), r_eax);
    /* 00539c1e: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00539c21: mov dword ptr [ebp + 0xf0], eax */ W32((u32)(r_ebp+0xf0u), r_eax);
L_00539c27:; BB(0x00539c27);
    /* 00539c27: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00539c29: fsubr dword ptr [ebp + 0xe0] */ ST(0) = R_F32((u32)(r_ebp+0xe0u)) - ST(0);
    /* 00539c2f: fld dword ptr [0x9230b4] */ FPUSH(R_F32((u32)(0x9230b4u)));
    /* 00539c35: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00539c37: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00539c39: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00539c3a: jbe 0x539c56 */ if ((fC||fZ)) goto L_00539c56;
L_00539c3c:; BB(0x00539c3c);
    /* 00539c3c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00539c3e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00539c40: fstp dword ptr [ebp + 0xe0] */ W_F32((u32)(r_ebp+0xe0u), ST(0)); FPOP();
    /* 00539c46: mov eax, 0x41200000 */ r_eax = 0x41200000u;
    /* 00539c4b: mov dword ptr [ebp + 0xcc], eax */ W32((u32)(r_ebp+0xccu), r_eax);
    /* 00539c51: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00539c54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539c55: ret  */ FN_RET(0x00539bbc); r_esp += 4; return;
L_00539c56:; BB(0x00539c56);
    /* 00539c56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00539c58: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00539c5a: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 00539c60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00539c63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539c64: ret  */ FN_RET(0x00539bbc); r_esp += 4; return;
L_00539c65:; BB(0x00539c65);
    /* 00539c65: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 00539c6b: mov edx, dword ptr [ebp + 0xe4] */ r_edx = R32((u32)(r_ebp+0xe4u));
    /* 00539c71: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00539c74: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 00539c77: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 00539c7a: jmp 0x539c27 */ goto L_00539c27;
}

void f_00539c7c(void) /* sub_539C7C */
{
    FN_ENTER(0x00539c7c);
    /* 00539c7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00539c7d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00539c7e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00539c81: mov esi, ecx */ r_esi = r_ecx;
    /* 00539c83: fld dword ptr [0x9230b0] */ FPUSH(R_F32((u32)(0x9230b0u)));
    /* 00539c89: fadd dword ptr [esi + 0xf4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xf4u));
    /* 00539c8f: fld dword ptr [0x9230ac] */ FPUSH(R_F32((u32)(0x9230acu)));
    /* 00539c95: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00539c97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00539c99: fld dword ptr [esi + 0x114] */ FPUSH(R_F32((u32)(r_esi+0x114u)));
    /* 00539c9f: fld dword ptr [esi + 0xbc] */ FPUSH(R_F32((u32)(r_esi+0xbcu)));
    /* 00539ca5: fld dword ptr [0x9230bc] */ FPUSH(R_F32((u32)(0x9230bcu)));
    /* 00539cab: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00539cad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539caf: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00539cb2: mov edx, dword ptr [esi + 0xe0] */ r_edx = R32((u32)(r_esi+0xe0u));
    /* 00539cb8: fld dword ptr [esi + 0xc4] */ FPUSH(R_F32((u32)(r_esi+0xc4u)));
    /* 00539cbe: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00539cc0: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00539cc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539cc5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00539cc8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00539ccc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00539cce: fstp dword ptr [esi + 0x114] */ W_F32((u32)(r_esi+0x114u), ST(0)); FPOP();
    /* 00539cd4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00539cd5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00539cd9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00539cdc: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00539ce1: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00539ce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539ce7: lea edx, [esi + 0xdc] */ r_edx = (u32)(r_esi+0xdcu);
    /* 00539ced: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539cee: ja 0x539cf2 */ if ((!fC&&!fZ)) goto L_00539cf2;
L_00539cf0:; BB(0x00539cf0);
    /* 00539cf0: fst st(1) */ ST(1) = ST(0);
L_00539cf2:; BB(0x00539cf2);
    /* 00539cf2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00539cf4: fstp dword ptr [esi + 0xf4] */ W_F32((u32)(r_esi+0xf4u), ST(0)); FPOP();
    /* 00539cfa: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x539cffu); f_0077fffc();
    /* 00539cff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539d02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539d04: je 0x539d72 */ if (fZ) goto L_00539d72;
L_00539d06:; BB(0x00539d06);
    /* 00539d06: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00539d09: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00539d0b: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00539d10: mov dword ptr [esi + 0xdc], edx */ W32((u32)(r_esi+0xdcu), r_edx);
    /* 00539d16: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00539d19: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00539d1c: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
L_00539d22:; BB(0x00539d22);
    /* 00539d22: mov ecx, esi */ r_ecx = r_esi;
    /* 00539d24: call 0x539bbc */ r_esp -= 4; W32(r_esp, 0x539d29u); f_00539bbc();
    /* 00539d29: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539d2b: jne 0x539d49 */ if (!fZ) goto L_00539d49;
L_00539d2d:; BB(0x00539d2d);
    /* 00539d2d: mov ecx, esi */ r_ecx = r_esi;
    /* 00539d2f: call 0x539d88 */ r_esp -= 4; W32(r_esp, 0x539d34u); f_00539d88();
    /* 00539d34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539d36: jne 0x539d49 */ if (!fZ) goto L_00539d49;
L_00539d38:; BB(0x00539d38);
    /* 00539d38: fld dword ptr [esi + 0x114] */ FPUSH(R_F32((u32)(r_esi+0x114u)));
    /* 00539d3e: fcomp dword ptr [esi + 0xc8] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xc8u))); FPOP();
    /* 00539d44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00539d46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00539d47: jbe 0x539d6c */ if ((fC||fZ)) goto L_00539d6c;
L_00539d49:; BB(0x00539d49);
    /* 00539d49: movzx eax, word ptr [esi + 0xb0] */ r_eax = (u32)R16((u32)(r_esi+0xb0u));
    /* 00539d50: mov dword ptr [esi + 0xb4], 2 */ W32((u32)(r_esi+0xb4u), 0x2u);
    /* 00539d5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539d5b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x539d60u); f_007b4d18();
    /* 00539d60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00539d61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539d63: je 0x539d6c */ if (fZ) goto L_00539d6c;
L_00539d65:; BB(0x00539d65);
    /* 00539d65: mov ecx, eax */ r_ecx = r_eax;
    /* 00539d67: call 0x538e64 */ r_esp -= 4; W32(r_esp, 0x539d6cu); f_00538e64();
L_00539d6c:; BB(0x00539d6c);
    /* 00539d6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00539d6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00539d70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539d71: ret  */ FN_RET(0x00539c7c); r_esp += 4; return;
L_00539d72:; BB(0x00539d72);
    /* 00539d72: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00539d75: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00539d79: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 00539d7f: mov dword ptr [esi + 0xe4], edx */ W32((u32)(r_esi+0xe4u), r_edx);
    /* 00539d85: jmp 0x539d22 */ goto L_00539d22;
}

void f_00539d88(void) /* sub_539D88 */
{
    FN_ENTER(0x00539d88);
    /* 00539d88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00539d89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539d8a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00539d8d: mov esi, ecx */ r_esi = r_ecx;
    /* 00539d8f: movzx eax, word ptr [esi + 0xb0] */ r_eax = (u32)R16((u32)(r_esi+0xb0u));
    /* 00539d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539d97: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x539d9cu); f_007b4d18();
    /* 00539d9c: mov ebp, eax */ r_ebp = r_eax;
    /* 00539d9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00539d9f: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00539da5: mov edx, dword ptr [esi + 0xcc] */ r_edx = R32((u32)(r_esi+0xccu));
    /* 00539dab: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00539dae: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00539db4: mov edx, dword ptr [esi + 0xcc] */ r_edx = R32((u32)(r_esi+0xccu));
    /* 00539dba: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00539dbd: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00539dc3: fld dword ptr [esi + 0xf4] */ FPUSH(R_F32((u32)(r_esi+0xf4u)));
    /* 00539dc9: fmul dword ptr [0x9230a4] */ ST(0) = ST(0) * R_F32((u32)(0x9230a4u));
    /* 00539dcf: fmul dword ptr [0x9230a8] */ ST(0) = ST(0) * R_F32((u32)(0x9230a8u));
    /* 00539dd5: fstp dword ptr [edx + 0x34] */ W_F32((u32)(r_edx+0x34u), ST(0)); FPOP();
    /* 00539dd8: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x539dddu); f_007b999c();
    /* 00539ddd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539de0: mov ecx, esi */ r_ecx = r_esi;
    /* 00539de2: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x539de7u); f_007b7e9c();
    /* 00539de7: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00539ded: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00539df0: or eax, dword ptr [edx + 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x44u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00539df3: test eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539df8: jne 0x539e4e */ if (!fZ) goto L_00539e4e;
L_00539dfa:; BB(0x00539dfa);
    /* 00539dfa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539dfc: je 0x539e05 */ if (fZ) goto L_00539e05;
L_00539dfe:; BB(0x00539dfe);
    /* 00539dfe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00539e00: call 0x538e7c */ r_esp -= 4; W32(r_esp, 0x539e05u); f_00538e7c();
L_00539e05:; BB(0x00539e05);
    /* 00539e05: mov edx, dword ptr [0x92307c] */ r_edx = R32((u32)(0x92307cu));
    /* 00539e0b: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00539e12: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00539e16: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x539e1bu); f_00520e6c();
    /* 00539e1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539e1d: je 0x539e2a */ if (fZ) goto L_00539e2a;
L_00539e1f:; BB(0x00539e1f);
    /* 00539e1f: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00539e23: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00539e26: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00539e2a:; BB(0x00539e2a);
    /* 00539e2a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00539e2d: push dword ptr [esi + 0xd8] */ { u32 v = R32((u32)(r_esi+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539e33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539e34: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00539e36: mov ecx, esi */ r_ecx = r_esi;
    /* 00539e38: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x539e3bu); call_ind(t); }
    /* 00539e3b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539e3d: je 0x539e46 */ if (fZ) goto L_00539e46;
L_00539e3f:; BB(0x00539e3f);
    /* 00539e3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00539e41: call 0x538e94 */ r_esp -= 4; W32(r_esp, 0x539e46u); f_00538e94();
L_00539e46:; BB(0x00539e46);
    /* 00539e46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00539e48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00539e4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539e4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539e4d: ret  */ FN_RET(0x00539d88); r_esp += 4; return;
L_00539e4e:; BB(0x00539e4e);
    /* 00539e4e: mov eax, 1 */ r_eax = 0x1u;
    /* 00539e53: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00539e56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539e57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539e58: ret  */ FN_RET(0x00539d88); r_esp += 4; return;
}

void f_00539e5c(void) /* sub_539E5C */
{
    FN_ENTER(0x00539e5c);
    /* 00539e5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00539e5d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539e5e: mov esi, ecx */ r_esi = r_ecx;
    /* 00539e60: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00539e66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00539e68: jne 0x539e6d */ if (!fZ) goto L_00539e6d;
L_00539e6a:; BB(0x00539e6a);
    /* 00539e6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539e6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539e6c: ret  */ FN_RET(0x00539e5c); r_esp += 4; return;
L_00539e6d:; BB(0x00539e6d);
    /* 00539e6d: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00539e72: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00539e77: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x539e7cu); f_00520d08();
    /* 00539e7c: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00539e82: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539e85: je 0x539f21 */ if (fZ) goto L_00539f21;
L_00539e8b:; BB(0x00539e8b);
    /* 00539e8b: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00539e8e: lea edx, [esi + 0xe8] */ r_edx = (u32)(r_esi+0xe8u);
    /* 00539e94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00539e96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539e97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539e98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539e99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539e9a: call 0x520d18 */ r_esp -= 4; W32(r_esp, 0x539e9fu); f_00520d18();
    /* 00539e9f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539ea2: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x539ea7u); f_00578b38();
    /* 00539ea7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x539eacu); f_0082d7b0();
    /* 00539eac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00539eae: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x539eb3u); f_0082d838();
    /* 00539eb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00539eb5: push dword ptr [esi + 0xcc] */ { u32 v = R32((u32)(r_esi+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00539ebb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00539ebd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00539ebf: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x539ec4u); f_00830b74();
    /* 00539ec4: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00539ec7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00539ec9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x539eceu); f_0082d8bc();
    /* 00539ece: mov eax, dword ptr [esi + 0xf4] */ r_eax = R32((u32)(r_esi+0xf4u));
    /* 00539ed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539ed5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00539ed7: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00539edc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539edd: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x539ee2u); f_0082fa0c();
    /* 00539ee2: push dword ptr [esi + 0xb8] */ { u32 v = R32((u32)(r_esi+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539ee8: call 0x538e28 */ r_esp -= 4; W32(r_esp, 0x539eedu); f_00538e28();
    /* 00539eed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00539eee: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x539ef3u); f_0082da80();
    /* 00539ef3: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00539ef9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539efc: je 0x539f10 */ if (fZ) goto L_00539f10;
L_00539efe:; BB(0x00539efe);
    /* 00539efe: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x539f03u); f_0082dab0();
    /* 00539f03: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00539f08: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00539f0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539f0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539f0f: ret  */ FN_RET(0x00539e5c); r_esp += 4; return;
L_00539f10:; BB(0x00539f10);
    /* 00539f10: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 00539f16: lea ecx, [esi + 0xf8] */ r_ecx = (u32)(r_esi+0xf8u);
    /* 00539f1c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x539f1fu); call_ind(t); }
    /* 00539f1f: jmp 0x539efe */ goto L_00539efe;
L_00539f21:; BB(0x00539f21);
    /* 00539f21: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 00539f27: lea ecx, [esi + 0xf8] */ r_ecx = (u32)(r_esi+0xf8u);
    /* 00539f2d: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x539f30u); call_ind(t); }
    /* 00539f30: mov ecx, esi */ r_ecx = r_esi;
    /* 00539f32: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x539f37u); f_008173d0();
    /* 00539f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00539f39: je 0x539e8b */ if (fZ) goto L_00539e8b;
L_00539f3f:; BB(0x00539f3f);
    /* 00539f3f: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00539f44: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00539f49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539f4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539f4b: ret  */ FN_RET(0x00539e5c); r_esp += 4; return;
}

void f_00539f4c(void) /* sub_539F4C */
{
    FN_ENTER(0x00539f4c);
    /* 00539f4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00539f4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00539f4e: mov edi, ecx */ r_edi = r_ecx;
    /* 00539f50: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00539f54: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539f58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00539f59: mov ecx, edi */ r_ecx = r_edi;
    /* 00539f5b: call 0x522260 */ r_esp -= 4; W32(r_esp, 0x539f60u); f_00522260();
    /* 00539f60: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x539f65u); f_00520e6c();
    /* 00539f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00539f67: je 0x539fa8 */ if (fZ) goto L_00539fa8;
L_00539f69:; BB(0x00539f69);
    /* 00539f69: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00539f6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539f6e: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x539f73u); f_0051f8d8();
    /* 00539f73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00539f74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00539f76: je 0x539fa8 */ if (fZ) goto L_00539fa8;
L_00539f78:; BB(0x00539f78);
    /* 00539f78: movzx eax, word ptr [edi + 0xb0] */ r_eax = (u32)R16((u32)(r_edi+0xb0u));
    /* 00539f7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539f80: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x539f85u); f_007b4d18();
    /* 00539f85: mov edi, eax */ r_edi = r_eax;
    /* 00539f87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539f8a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00539f8c: je 0x539fa8 */ if (fZ) goto L_00539fa8;
L_00539f8e:; BB(0x00539f8e);
    /* 00539f8e: mov ecx, edi */ r_ecx = r_edi;
    /* 00539f90: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x539f95u); f_007751b0();
    /* 00539f95: fcomp dword ptr [0x923098] */ fx_compare(ST(0), R_F32((u32)(0x923098u))); FPOP();
    /* 00539f9b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00539f9d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00539f9e: jae 0x539fa8 */ if (!fC) goto L_00539fa8;
L_00539fa0:; BB(0x00539fa0);
    /* 00539fa0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00539fa1: mov ecx, edi */ r_ecx = r_edi;
    /* 00539fa3: call 0x51fe4c */ r_esp -= 4; W32(r_esp, 0x539fa8u); f_0051fe4c();
L_00539fa8:; BB(0x00539fa8);
    /* 00539fa8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00539fa9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00539faa: ret 8 */ FN_RET(0x00539f4c); r_esp += 12; return;
}

void f_00539fb0(void) /* sub_539FB0 */
{
    FN_ENTER(0x00539fb0);
    /* 00539fb0: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 00539fba: ret  */ FN_RET(0x00539fb0); r_esp += 4; return;
}

void f_00539fbc(void) /* sub_539FBC */
{
    FN_ENTER(0x00539fbc);
    /* 00539fbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539fbd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00539fbf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00539fc1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00539fc5: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00539fc9: mov dword ptr [ebp + 0xb8], edx */ W32((u32)(r_ebp+0xb8u), r_edx);
    /* 00539fcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00539fd1: mov dword ptr [ebp + 0xdc], edx */ W32((u32)(r_ebp+0xdcu), r_edx);
    /* 00539fd7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00539fda: mov dword ptr [ebp + 0xe0], edx */ W32((u32)(r_ebp+0xe0u), r_edx);
    /* 00539fe0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00539fe3: mov dword ptr [ebp + 0xe4], eax */ W32((u32)(r_ebp+0xe4u), r_eax);
    /* 00539fe9: call 0x539bbc */ r_esp -= 4; W32(r_esp, 0x539feeu); f_00539bbc();
    /* 00539fee: movzx eax, word ptr [ebp + 0xb0] */ r_eax = (u32)R16((u32)(r_ebp+0xb0u));
    /* 00539ff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539ff6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x539ffbu); f_007b4d18();
    /* 00539ffb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00539ffc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539ffe: je 0x53a048 */ if (fZ) goto L_0053a048;
L_0053a000:; BB(0x0053a000);
    /* 0053a000: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0053a003: mov dword ptr [ebp + 0x60], ecx */ W32((u32)(r_ebp+0x60u), r_ecx);
L_0053a006:; BB(0x0053a006);
    /* 0053a006: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x53a00bu); f_0082dcbc();
    /* 0053a00b: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0053a00e: fstp dword ptr [ebp + 0xbc] */ W_F32((u32)(r_ebp+0xbcu), ST(0)); FPOP();
    /* 0053a014: mov dword ptr [ebp + 0xc0], 0 */ W32((u32)(r_ebp+0xc0u), 0x0u);
    /* 0053a01e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53a023u); f_0082ddd8();
    /* 0053a023: fstp dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0)); FPOP();
    /* 0053a029: mov dword ptr [ebp + 0xc8], 0x43960000 */ W32((u32)(r_ebp+0xc8u), 0x43960000u);
    /* 0053a033: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053a035: call 0x53a06c */ r_esp -= 4; W32(r_esp, 0x53a03au); f_0053a06c();
    /* 0053a03a: mov dword ptr [ebp + 0xb4], 1 */ W32((u32)(r_ebp+0xb4u), 0x1u);
    /* 0053a044: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a045: ret 0xc */ FN_RET(0x00539fbc); r_esp += 16; return;
L_0053a048:; BB(0x0053a048);
    /* 0053a048: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 0053a04f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a051: jmp 0x53a006 */ goto L_0053a006;
}

void f_00539ff7(void)
{
    FN_ENTER(0x00539ff7);
    /* 00539ff7: sbb eax, 0x590027ad */ { u32 c = fC; u32 a = r_eax; u32 b = 0x590027adu; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00539ffc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539ffe: je 0x53a048 */ if (fZ) goto L_0053a048;
L_0053a000:; BB(0x0053a000);
    /* 0053a000: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0053a003: mov dword ptr [ebp + 0x60], ecx */ W32((u32)(r_ebp+0x60u), r_ecx);
L_0053a006:; BB(0x0053a006);
    /* 0053a006: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x53a00bu); f_0082dcbc();
    /* 0053a00b: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0053a00e: fstp dword ptr [ebp + 0xbc] */ W_F32((u32)(r_ebp+0xbcu), ST(0)); FPOP();
    /* 0053a014: mov dword ptr [ebp + 0xc0], 0 */ W32((u32)(r_ebp+0xc0u), 0x0u);
    /* 0053a01e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53a023u); f_0082ddd8();
    /* 0053a023: fstp dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0)); FPOP();
    /* 0053a029: mov dword ptr [ebp + 0xc8], 0x43960000 */ W32((u32)(r_ebp+0xc8u), 0x43960000u);
    /* 0053a033: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053a035: call 0x53a06c */ r_esp -= 4; W32(r_esp, 0x53a03au); f_0053a06c();
    /* 0053a03a: mov dword ptr [ebp + 0xb4], 1 */ W32((u32)(r_ebp+0xb4u), 0x1u);
    /* 0053a044: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a045: ret 0xc */ FN_RET(0x00539ff7); r_esp += 16; return;
L_0053a048:; BB(0x0053a048);
    /* 0053a048: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 0053a04f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a051: jmp 0x53a006 */ goto L_0053a006;
}

