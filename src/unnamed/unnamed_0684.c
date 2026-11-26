#include "protos.h"

void f_00684090(void) /* sub_684090 */
{
    FN_ENTER(0x00684090);
    /* 00684090: mov dword ptr [0xa9054c], 0x3f800000 */ W32((u32)(0xa9054cu), 0x3f800000u);
    /* 0068409a: mov dword ptr [0xa90550], 0x41000000 */ W32((u32)(0xa90550u), 0x41000000u);
    /* 006840a4: mov dword ptr [0xa90554], 0x3fc00000 */ W32((u32)(0xa90554u), 0x3fc00000u);
    /* 006840ae: ret  */ FN_RET(0x00684090); r_esp += 4; return;
}

void f_006840b0(void) /* sub_6840B0 */
{
    FN_ENTER(0x006840b0);
    /* 006840b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006840b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006840b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006840b5: call 0x6840d4 */ r_esp -= 4; W32(r_esp, 0x6840bau); f_006840d4();
    /* 006840ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006840be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006840c0: jne 0x6840c6 */ if (!fZ) goto L_006840c6;
L_006840c2:; BB(0x006840c2);
    /* 006840c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006840c3: ret 4 */ FN_RET(0x006840b0); r_esp += 8; return;
L_006840c6:; BB(0x006840c6);
    /* 006840c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006840c7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6840ccu); f_005c2f74();
    /* 006840cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006840cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006840ce: ret 4 */ FN_RET(0x006840b0); r_esp += 8; return;
}

void f_006840d4(void) /* sub_6840D4 */
{
    FN_ENTER(0x006840d4);
    /* 006840d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006840d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006840d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006840d9: push 0x8ea9f0 */ { u32 v = 0x8ea9f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006840de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006840e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006840e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006840ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006840ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006840f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006840f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006840f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006840fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006840fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00684105: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00684108: mov dword ptr [ecx], 0xb38cf0 */ W32((u32)(r_ecx), 0xb38cf0u);
    /* 0068410e: call dword ptr [0xb38d24] */ { u32 t = R32((u32)(0xb38d24u)); r_esp -= 4; W32(r_esp, 0x684114u); call_ind(t); }
    /* 00684114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00684117: call 0x67cc20 */ r_esp -= 4; W32(r_esp, 0x68411cu); f_0067cc20();
    /* 0068411c: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068411f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x684124u); f_007b4e84();
    /* 00684124: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00684125: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00684128: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x68412du); f_007b9c8c();
    /* 0068412d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00684134: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00684137: call 0x67c61c */ r_esp -= 4; W32(r_esp, 0x68413cu); f_0067c61c();
    /* 0068413c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068413f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00684146: mov esp, ebp */ r_esp = r_ebp;
    /* 00684148: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684149: ret  */ FN_RET(0x006840d4); r_esp += 4; return;
}

void f_0068414c(void) /* sub_68414C */
{
    FN_ENTER(0x0068414c);
    /* 0068414c: mov ecx, dword ptr [0xa9056c] */ r_ecx = R32((u32)(0xa9056cu));
    /* 00684152: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00684154: je 0x68415f */ if (fZ) goto L_0068415f;
L_00684156:; BB(0x00684156);
    /* 00684156: je 0x68415f */ if (fZ) goto L_0068415f;
L_00684158:; BB(0x00684158);
    /* 00684158: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068415a: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x68415fu); f_0044bbac();
L_0068415f:; BB(0x0068415f);
    /* 0068415f: mov dword ptr [0xa9056c], 0 */ W32((u32)(0xa9056cu), 0x0u);
    /* 00684169: ret  */ FN_RET(0x0068414c); r_esp += 4; return;
}

void f_0068416c(void) /* sub_68416C */
{
    FN_ENTER(0x0068416c);
    /* 0068416c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068416d: mov ebp, esp */ r_ebp = r_esp;
    /* 0068416f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684171: push 0x8eaa5c */ { u32 v = 0x8eaa5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00684176: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068417c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068417d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00684184: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684187: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068418a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0068418d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00684190: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00684193: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00684196: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00684199: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068419c: call 0x67c674 */ r_esp -= 4; W32(r_esp, 0x6841a1u); f_0067c674();
    /* 006841a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006841a8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006841ab: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006841ae: mov dword ptr [ecx], 0xb38cf0 */ W32((u32)(r_ecx), 0xb38cf0u);
    /* 006841b4: mov eax, dword ptr [0x9cb928] */ r_eax = R32((u32)(0x9cb928u));
    /* 006841b9: mov dword ptr [ecx + 0x138], 3 */ W32((u32)(r_ecx+0x138u), 0x3u);
    /* 006841c3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006841c6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006841c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006841ca: push 0x9cb94c */ { u32 v = 0x9cb94cu; r_esp -= 4; W32(r_esp, v); }
    /* 006841cf: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 006841d2: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 006841d5: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 006841d8: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 006841db: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 006841de: movzx eax, word ptr [edi + 0xc] */ r_eax = (u32)R16((u32)(r_edi+0xcu));
    /* 006841e2: mov word ptr [ecx + 0x17c], ax */ W16((u32)(r_ecx+0x17cu), (u16)r_eax);
    /* 006841e9: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6841eeu); f_007b9a88();
    /* 006841ee: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006841f1: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6841f6u); f_007b999c();
    /* 006841f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006841f7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006841fa: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6841ffu); f_007b4f54();
    /* 006841ff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684202: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 00684209: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068420a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68420fu); f_007b4d18();
    /* 0068420f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00684210: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684213: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 00684219: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068421b: je 0x684223 */ if (fZ) goto L_00684223;
L_0068421d:; BB(0x0068421d);
    /* 0068421d: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 00684220: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_00684223:; BB(0x00684223);
    /* 00684223: mov edi, dword ptr [0xa9049c] */ r_edi = R32((u32)(0xa9049cu));
    /* 00684229: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0068422f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00684232: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00684235: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 0068423b: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0068423e: mov dword ptr [ecx + 0xd8], 0x9cb92c */ W32((u32)(r_ecx+0xd8u), 0x9cb92cu);
    /* 00684248: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0068424b: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 00684251: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00684257: mov eax, 1 */ r_eax = 0x1u;
    /* 0068425c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068425d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00684264: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x684269u); f_007aa4c8();
    /* 00684269: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068426c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0068426f: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00684276: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0068427d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068427f: mov edx, 1 */ r_edx = 0x1u;
    /* 00684284: mov word ptr [ecx + 0x198], dx */ W16((u32)(r_ecx+0x198u), (u16)r_edx);
    /* 0068428b: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 0068428e: mov dword ptr [ecx + 0x19c], ebx */ W32((u32)(r_ecx+0x19cu), r_ebx);
    /* 00684294: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00684297: mov dword ptr [ecx + 0x1a0], edi */ W32((u32)(r_ecx+0x1a0u), r_edi);
    /* 0068429d: mov dword ptr [ecx + 0x1a4], 0 */ W32((u32)(r_ecx+0x1a4u), 0x0u);
    /* 006842a7: mov dword ptr [ecx + 0x134], 4 */ W32((u32)(r_ecx+0x134u), 0x4u);
    /* 006842b1: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x6842b4u); call_ind(t); }
    /* 006842b4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006842b7: mov dword ptr [eax + 0x1a8], 0 */ W32((u32)(r_eax+0x1a8u), 0x0u);
    /* 006842c1: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6842c6u); f_00807ac0();
    /* 006842c6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006842c9: jl 0x684319 */ if ((fS!=fO)) goto L_00684319;
L_006842cb:; BB(0x006842cb);
    /* 006842cb: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006842ce: jg 0x684319 */ if ((!fZ&&fS==fO)) goto L_00684319;
L_006842d0:; BB(0x006842d0);
    /* 006842d0: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006842d7: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006842dc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6842e1u); f_005caba4();
    /* 006842e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006842e2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006842e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006842e7: je 0x684310 */ if (fZ) goto L_00684310;
L_006842e9:; BB(0x006842e9);
    /* 006842e9: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006842f0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006842f7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006842fa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006842fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006842ff: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00684302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684303: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684304: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x684309u); f_00684ab0();
    /* 00684309: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00684310:; BB(0x00684310);
    /* 00684310: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00684317: jmp 0x684360 */ goto L_00684360;
L_00684319:; BB(0x00684319);
    /* 00684319: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00684320: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00684325: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x68432au); f_005caba4();
    /* 0068432a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068432b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0068432e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684330: je 0x684359 */ if (fZ) goto L_00684359;
L_00684332:; BB(0x00684332);
    /* 00684332: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00684339: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00684340: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684343: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00684346: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684348: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 0068434b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068434c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068434d: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x684352u); f_00684ab0();
    /* 00684352: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00684359:; BB(0x00684359);
    /* 00684359: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00684360:; BB(0x00684360);
    /* 00684360: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684363: mov eax, esi */ r_eax = r_esi;
    /* 00684365: mov dword ptr [ecx + 0x194], 0 */ W32((u32)(r_ecx+0x194u), 0x0u);
    /* 0068436f: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00684373: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684374: call 0x6805c0 */ r_esp -= 4; W32(r_esp, 0x684379u); f_006805c0();
    /* 00684379: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068437c: mov eax, dword ptr [ecx + 0x1a0] */ r_eax = R32((u32)(r_ecx+0x1a0u));
    /* 00684382: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684385: jne 0x684396 */ if (!fZ) goto L_00684396;
L_00684387:; BB(0x00684387);
    /* 00684387: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 0068438d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00684390: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00684396:; BB(0x00684396);
    /* 00684396: mov eax, esi */ r_eax = r_esi;
    /* 00684398: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0068439b: mov ebx, dword ptr [ecx + 0x19c] */ r_ebx = R32((u32)(r_ecx+0x19cu));
    /* 006843a1: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 006843a7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006843a9: jne 0x68445c */ if (!fZ) goto L_0068445c;
L_006843af:; BB(0x006843af);
    /* 006843af: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006843b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006843b3: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006843ba: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x6843bfu); f_0067c75c();
    /* 006843bf: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006843c2: fld dword ptr [0x93c4e8] */ FPUSH(R_F32((u32)(0x93c4e8u)));
    /* 006843c8: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006843cd: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 006843d0: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 006843d3: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 006843d6: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006843d9: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006843dc: fadd dword ptr [ebp - 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffccu));
    /* 006843df: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 006843e2: mov eax, 1 */ r_eax = 0x1u;
    /* 006843e7: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 006843ea: mov dword ptr [ebx + 0x19c], eax */ W32((u32)(r_ebx+0x19cu), r_eax);
    /* 006843f0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006843f2: mov word ptr [ebx + 0x198], di */ W16((u32)(r_ebx+0x198u), (u16)r_edi);
    /* 006843f9: mov dword ptr [ebx + 0x1a4], eax */ W32((u32)(r_ebx+0x1a4u), r_eax);
    /* 006843ff: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00684402: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x684407u); f_005caba4();
    /* 00684407: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00684408: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0068440b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068440d: je 0x68443e */ if (fZ) goto L_0068443e;
L_0068440f:; BB(0x0068440f);
    /* 0068440f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00684416: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0068441d: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00684422: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00684425: mov ecx, eax */ r_ecx = r_eax;
    /* 00684427: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0068442c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068442d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068442f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00684432: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x684437u); f_00683398();
    /* 00684437: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0068443e:; BB(0x0068443e);
    /* 0068443e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00684445: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684448: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068444a: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x68444fu); f_0067d660();
    /* 0068444f: push 0x93c4ec */ { u32 v = 0x93c4ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00684454: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x684459u); f_00814f0c();
    /* 00684459: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068445a: jmp 0x684478 */ goto L_00684478;
L_0068445c:; BB(0x0068445c);
    /* 0068445c: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00684463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684464: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00684466: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x68446bu); f_0067cd64();
    /* 0068446b: push 0x93c4f8 */ { u32 v = 0x93c4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00684470: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x684475u); f_00814f0c();
    /* 00684475: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00684478:; BB(0x00684478);
    /* 00684478: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068447b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068447e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00684481: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00684484: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00684487: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068448e: mov esp, ebp */ r_esp = r_ebp;
    /* 00684490: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684491: ret 4 */ FN_RET(0x0068416c); r_esp += 8; return;
}

void f_0068424e(void)
{
    FN_ENTER(0x0068424e);
    /* 0068424e: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00684250: add byte ptr [ecx + 0xdc81], cl */ { u32 ad = (u32)(r_ecx+0xdc81u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00684256: add byte ptr [eax + 1], bh */ { u32 ad = (u32)(r_eax+0x1u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0068425c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068425d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00684264: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x684269u); f_007aa4c8();
    /* 00684269: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068426c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0068426f: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00684276: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0068427d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068427f: mov edx, 1 */ r_edx = 0x1u;
    /* 00684284: mov word ptr [ecx + 0x198], dx */ W16((u32)(r_ecx+0x198u), (u16)r_edx);
    /* 0068428b: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 0068428e: mov dword ptr [ecx + 0x19c], ebx */ W32((u32)(r_ecx+0x19cu), r_ebx);
    /* 00684294: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00684297: mov dword ptr [ecx + 0x1a0], edi */ W32((u32)(r_ecx+0x1a0u), r_edi);
    /* 0068429d: mov dword ptr [ecx + 0x1a4], 0 */ W32((u32)(r_ecx+0x1a4u), 0x0u);
    /* 006842a7: mov dword ptr [ecx + 0x134], 4 */ W32((u32)(r_ecx+0x134u), 0x4u);
    /* 006842b1: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x6842b4u); call_ind(t); }
    /* 006842b4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006842b7: mov dword ptr [eax + 0x1a8], 0 */ W32((u32)(r_eax+0x1a8u), 0x0u);
    /* 006842c1: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6842c6u); f_00807ac0();
    /* 006842c6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006842c9: jl 0x684319 */ if ((fS!=fO)) goto L_00684319;
L_006842cb:; BB(0x006842cb);
    /* 006842cb: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006842ce: jg 0x684319 */ if ((!fZ&&fS==fO)) goto L_00684319;
L_006842d0:; BB(0x006842d0);
    /* 006842d0: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006842d7: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006842dc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6842e1u); f_005caba4();
    /* 006842e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006842e2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006842e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006842e7: je 0x684310 */ if (fZ) goto L_00684310;
L_006842e9:; BB(0x006842e9);
    /* 006842e9: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006842f0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006842f7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006842fa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006842fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006842ff: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00684302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684303: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684304: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x684309u); f_00684ab0();
    /* 00684309: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00684310:; BB(0x00684310);
    /* 00684310: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00684317: jmp 0x684360 */ goto L_00684360;
L_00684319:; BB(0x00684319);
    /* 00684319: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00684320: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00684325: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x68432au); f_005caba4();
    /* 0068432a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068432b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0068432e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684330: je 0x684359 */ if (fZ) goto L_00684359;
L_00684332:; BB(0x00684332);
    /* 00684332: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00684339: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00684340: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684343: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00684346: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684348: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 0068434b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068434c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068434d: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x684352u); f_00684ab0();
    /* 00684352: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00684359:; BB(0x00684359);
    /* 00684359: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00684360:; BB(0x00684360);
    /* 00684360: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684363: mov eax, esi */ r_eax = r_esi;
    /* 00684365: mov dword ptr [ecx + 0x194], 0 */ W32((u32)(r_ecx+0x194u), 0x0u);
    /* 0068436f: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00684373: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684374: call 0x6805c0 */ r_esp -= 4; W32(r_esp, 0x684379u); f_006805c0();
    /* 00684379: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068437c: mov eax, dword ptr [ecx + 0x1a0] */ r_eax = R32((u32)(r_ecx+0x1a0u));
    /* 00684382: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684385: jne 0x684396 */ if (!fZ) goto L_00684396;
L_00684387:; BB(0x00684387);
    /* 00684387: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 0068438d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00684390: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00684396:; BB(0x00684396);
    /* 00684396: mov eax, esi */ r_eax = r_esi;
    /* 00684398: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0068439b: mov ebx, dword ptr [ecx + 0x19c] */ r_ebx = R32((u32)(r_ecx+0x19cu));
    /* 006843a1: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 006843a7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006843a9: jne 0x68445c */ if (!fZ) goto L_0068445c;
L_006843af:; BB(0x006843af);
    /* 006843af: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006843b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006843b3: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006843ba: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x6843bfu); f_0067c75c();
    /* 006843bf: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006843c2: fld dword ptr [0x93c4e8] */ FPUSH(R_F32((u32)(0x93c4e8u)));
    /* 006843c8: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006843cd: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 006843d0: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 006843d3: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 006843d6: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006843d9: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006843dc: fadd dword ptr [ebp - 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffccu));
    /* 006843df: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 006843e2: mov eax, 1 */ r_eax = 0x1u;
    /* 006843e7: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 006843ea: mov dword ptr [ebx + 0x19c], eax */ W32((u32)(r_ebx+0x19cu), r_eax);
    /* 006843f0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006843f2: mov word ptr [ebx + 0x198], di */ W16((u32)(r_ebx+0x198u), (u16)r_edi);
    /* 006843f9: mov dword ptr [ebx + 0x1a4], eax */ W32((u32)(r_ebx+0x1a4u), r_eax);
    /* 006843ff: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00684402: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x684407u); f_005caba4();
    /* 00684407: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00684408: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0068440b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068440d: je 0x68443e */ if (fZ) goto L_0068443e;
L_0068440f:; BB(0x0068440f);
    /* 0068440f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00684416: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0068441d: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00684422: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00684425: mov ecx, eax */ r_ecx = r_eax;
    /* 00684427: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0068442c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068442d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068442f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00684432: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x684437u); f_00683398();
    /* 00684437: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0068443e:; BB(0x0068443e);
    /* 0068443e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00684445: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684448: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068444a: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x68444fu); f_0067d660();
    /* 0068444f: push 0x93c4ec */ { u32 v = 0x93c4ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00684454: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x684459u); f_00814f0c();
    /* 00684459: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068445a: jmp 0x684478 */ goto L_00684478;
L_0068445c:; BB(0x0068445c);
    /* 0068445c: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00684463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684464: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00684466: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x68446bu); f_0067cd64();
    /* 0068446b: push 0x93c4f8 */ { u32 v = 0x93c4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00684470: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x684475u); f_00814f0c();
    /* 00684475: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00684478:; BB(0x00684478);
    /* 00684478: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068447b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068447e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00684481: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00684484: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00684487: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068448e: mov esp, ebp */ r_esp = r_ebp;
    /* 00684490: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684491: ret 4 */ FN_RET(0x0068424e); r_esp += 8; return;
}

void f_00684494(void) /* sub_684494 */
{
    FN_ENTER(0x00684494);
    /* 00684494: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684495: mov ebp, esp */ r_ebp = r_esp;
    /* 00684497: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684499: push 0x8eaa84 */ { u32 v = 0x8eaa84u; r_esp -= 4; W32(r_esp, v); }
    /* 0068449e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006844a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006844a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006844ac: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006844af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006844b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006844b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006844b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006844bb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006844be: mov ecx, dword ptr [ecx + 0x1a8] */ r_ecx = R32((u32)(r_ecx+0x1a8u));
    /* 006844c4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006844c7: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006844ca: je 0x68468e */ if (fZ) goto L_0068468e;
L_006844d0:; BB(0x006844d0);
    /* 006844d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006844d3: mov dword ptr [eax + 0x1a8], ecx */ W32((u32)(r_eax+0x1a8u), r_ecx);
L_006844d9:; BB(0x006844d9);
    /* 006844d9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006844dc: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 006844df: fcomp dword ptr [0x93c4d4] */ fx_compare(ST(0), R_F32((u32)(0x93c4d4u))); FPOP();
    /* 006844e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006844e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006844e8: je 0x68463b */ if (fZ) goto L_0068463b;
L_006844ee:; BB(0x006844ee);
    /* 006844ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006844f1: movsx ebx, word ptr [eax + 0xb8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
L_006844f8:; BB(0x006844f8);
    /* 006844f8: mov ecx, eax */ r_ecx = r_eax;
    /* 006844fa: mov word ptr [ecx + 0x198], bx */ W16((u32)(r_ecx+0x198u), (u16)r_ebx);
    /* 00684501: call 0x67c7d8 */ r_esp -= 4; W32(r_esp, 0x684506u); f_0067c7d8();
    /* 00684506: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00684509: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x68450eu); f_007aa094();
    /* 0068450e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00684511: call 0x67cc34 */ r_esp -= 4; W32(r_esp, 0x684516u); f_0067cc34();
    /* 00684516: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00684519: fild dword ptr [ecx + 0x1a8] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x1a8u)));
    /* 0068451f: fcom dword ptr [0x93c4bc] */ fx_compare(ST(0), R_F32((u32)(0x93c4bcu))); 
    /* 00684525: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00684527: movzx edx, word ptr [ecx + 0x14c] */ r_edx = (u32)R16((u32)(r_ecx+0x14cu));
    /* 0068452e: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00684531: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00684534: mov word ptr [ecx + 0x14c], dx */ W16((u32)(r_ecx+0x14cu), (u16)r_edx);
    /* 0068453b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068453c: je 0x684626 */ if (fZ) goto L_00684626;
L_00684542:; BB(0x00684542);
    /* 00684542: fcom dword ptr [0x93c4d0] */ fx_compare(ST(0), R_F32((u32)(0x93c4d0u))); 
    /* 00684548: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068454a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068454b: je 0x684626 */ if (fZ) goto L_00684626;
L_00684551:; BB(0x00684551);
    /* 00684551: fcom dword ptr [0x93c4cc] */ fx_compare(ST(0), R_F32((u32)(0x93c4ccu))); 
    /* 00684557: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00684559: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068455a: je 0x684626 */ if (fZ) goto L_00684626;
L_00684560:; BB(0x00684560);
    /* 00684560: fcom dword ptr [0x93c4c8] */ fx_compare(ST(0), R_F32((u32)(0x93c4c8u))); 
    /* 00684566: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00684568: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00684569: je 0x684626 */ if (fZ) goto L_00684626;
L_0068456f:; BB(0x0068456f);
    /* 0068456f: fcom dword ptr [0x93c4c4] */ fx_compare(ST(0), R_F32((u32)(0x93c4c4u))); 
    /* 00684575: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00684577: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00684578: je 0x684626 */ if (fZ) goto L_00684626;
L_0068457e:; BB(0x0068457e);
    /* 0068457e: fcom dword ptr [0x93c4c0] */ fx_compare(ST(0), R_F32((u32)(0x93c4c0u))); 
    /* 00684584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00684586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00684587: je 0x684626 */ if (fZ) goto L_00684626;
L_0068458d:; BB(0x0068458d);
    /* 0068458d: fcomp dword ptr [0x93c4b8] */ fx_compare(ST(0), R_F32((u32)(0x93c4b8u))); FPOP();
    /* 00684593: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00684595: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00684596: je 0x6845d1 */ if (fZ) goto L_006845d1;
L_00684598:; BB(0x00684598);
    /* 00684598: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068459b: mov edx, dword ptr [eax + 0x1a4] */ r_edx = R32((u32)(r_eax+0x1a4u));
    /* 006845a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006845a3: je 0x6845ba */ if (fZ) goto L_006845ba;
L_006845a5:; BB(0x006845a5);
    /* 006845a5: mov edx, eax */ r_edx = r_eax;
    /* 006845a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006845a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006845aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006845ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006845ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006845ad: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 006845b2: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6845b7u); f_008144b0();
    /* 006845b7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006845ba:; BB(0x006845ba);
    /* 006845ba: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006845bd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006845c0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006845c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006845c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006845cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006845cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006845d0: ret  */ FN_RET(0x00684494); r_esp += 4; return;
L_006845d1:; BB(0x006845d1);
    /* 006845d1: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x6845d6u); f_007b51c4();
    /* 006845d6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006845d9: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x6845deu); f_007b8980();
    /* 006845de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006845e1: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 006845e7: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 006845ea: test ecx, 0x100000 */ {  u32 a = r_ecx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006845f0: je 0x684598 */ if (fZ) goto L_00684598;
L_006845f2:; BB(0x006845f2);
    /* 006845f2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006845f4:; BB(0x006845f4);
    /* 006845f4: mov eax, dword ptr [ebx*4 + 0xaad6e0] */ r_eax = R32((u32)(r_ebx*4+0xaad6e0u));
    /* 006845fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006845fd: je 0x684619 */ if (fZ) goto L_00684619;
L_006845ff:; BB(0x006845ff);
    /* 006845ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684601: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00684605: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00684608: push dword ptr [eax + 0x150] */ { u32 v = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068460e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00684610: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684611: call 0x67d488 */ r_esp -= 4; W32(r_esp, 0x684616u); f_0067d488();
    /* 00684616: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00684619:; BB(0x00684619);
    /* 00684619: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068461c: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068461f: jl 0x6845f4 */ if ((fS!=fO)) goto L_006845f4;
L_00684621:; BB(0x00684621);
    /* 00684621: jmp 0x684598 */ goto L_00684598;
L_00684626:; BB(0x00684626);
    /* 00684626: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00684628: call 0x684748 */ r_esp -= 4; W32(r_esp, 0x68462du); f_00684748();
    /* 0068462d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00684630: fild dword ptr [eax + 0x1a8] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1a8u)));
    /* 00684636: jmp 0x68458d */ goto L_0068458d;
L_0068463b:; BB(0x0068463b);
    /* 0068463b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068463e: movsx ebx, word ptr [eax + 0xb8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00684645: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684648: jne 0x6844f8 */ if (!fZ) goto L_006844f8;
L_0068464e:; BB(0x0068464e);
    /* 0068464e: mov edx, dword ptr [eax + 0x1a4] */ r_edx = R32((u32)(r_eax+0x1a4u));
    /* 00684654: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684657: jne 0x6844f8 */ if (!fZ) goto L_006844f8;
L_0068465d:; BB(0x0068465d);
    /* 0068465d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068465f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00684661: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x684666u); f_0067c75c();
    /* 00684666: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00684669: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068466b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068466d: mov dword ptr [ecx + 0x1a8], eax */ W32((u32)(r_ecx+0x1a8u), r_eax);
    /* 00684673: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0068467a: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x68467fu); f_0067d660();
    /* 0068467f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00684682: movsx ebx, word ptr [eax + 0xb8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00684689: jmp 0x6844f8 */ goto L_006844f8;
L_0068468e:; BB(0x0068468e);
    /* 0068468e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00684691: mov edx, dword ptr [eax + 0x1a4] */ r_edx = R32((u32)(r_eax+0x1a4u));
    /* 00684697: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684699: je 0x6846a6 */ if (fZ) goto L_006846a6;
L_0068469b:; BB(0x0068469b);
    /* 0068469b: mov dword ptr [eax + 0x1a8], ecx */ W32((u32)(r_eax+0x1a8u), r_ecx);
    /* 006846a1: jmp 0x6844d9 */ goto L_006844d9;
L_006846a6:; BB(0x006846a6);
    /* 006846a6: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 006846ad: mov dword ptr [eax + 0x1a4], 1 */ W32((u32)(r_eax+0x1a4u), 0x1u);
    /* 006846b7: mov dword ptr [eax + 0x1a8], 0 */ W32((u32)(r_eax+0x1a8u), 0x0u);
    /* 006846c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006846c2: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6846c7u); f_007b4d18();
    /* 006846c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006846c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006846ca: je 0x6846de */ if (fZ) goto L_006846de;
L_006846cc:; BB(0x006846cc);
    /* 006846cc: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006846cf: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006846d2: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006846d5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006846d8: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006846db: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_006846de:; BB(0x006846de);
    /* 006846de: fld dword ptr [0x93c4dc] */ FPUSH(R_F32((u32)(0x93c4dcu)));
    /* 006846e4: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 006846e7: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 006846ea: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006846f1: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006846f6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6846fbu); f_005caba4();
    /* 006846fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006846fc: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006846ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684701: je 0x684733 */ if (fZ) goto L_00684733;
L_00684703:; BB(0x00684703);
    /* 00684703: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0068470a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00684711: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00684716: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00684719: mov ecx, eax */ r_ecx = r_eax;
    /* 0068471b: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0068471e: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00684723: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684724: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00684726: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684727: call 0x683398 */ r_esp -= 4; W32(r_esp, 0x68472cu); f_00683398();
    /* 0068472c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00684733:; BB(0x00684733);
    /* 00684733: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068473a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068473d: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 00684743: jmp 0x6844d9 */ goto L_006844d9;
}

void f_006845e9(void)
{
    FN_ENTER(0x006845e9);
    goto L_006845e9;
L_00684598:; BB(0x00684598);
    /* 00684598: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068459b: mov edx, dword ptr [eax + 0x1a4] */ r_edx = R32((u32)(r_eax+0x1a4u));
    /* 006845a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006845a3: je 0x6845ba */ if (fZ) goto L_006845ba;
L_006845a5:; BB(0x006845a5);
    /* 006845a5: mov edx, eax */ r_edx = r_eax;
    /* 006845a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006845a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006845aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006845ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006845ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006845ad: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 006845b2: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6845b7u); f_008144b0();
    /* 006845b7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006845ba:; BB(0x006845ba);
    /* 006845ba: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006845bd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006845c0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006845c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006845c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006845cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006845cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006845d0: ret  */ FN_RET(0x006845e9); r_esp += 4; return;
L_006845e9:; BB(0x006845e9);
    /* 006845e9: sbb bh, dh */ { u32 c = fC; u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a - b - c) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = ((u64)a < (u64)b + c); }
    /* 006845eb: rol dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax); u32 c = (0u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } W32(ad, r); fC = r & 1; } }
    /* 006845ee: adc byte ptr [eax], al */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b + c) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 006845f0: je 0x684598 */ if (fZ) goto L_00684598;
L_006845f2:; BB(0x006845f2);
    /* 006845f2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006845f4:; BB(0x006845f4);
    /* 006845f4: mov eax, dword ptr [ebx*4 + 0xaad6e0] */ r_eax = R32((u32)(r_ebx*4+0xaad6e0u));
    /* 006845fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006845fd: je 0x684619 */ if (fZ) goto L_00684619;
L_006845ff:; BB(0x006845ff);
    /* 006845ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684601: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00684605: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00684608: push dword ptr [eax + 0x150] */ { u32 v = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068460e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00684610: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684611: call 0x67d488 */ r_esp -= 4; W32(r_esp, 0x684616u); f_0067d488();
    /* 00684616: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00684619:; BB(0x00684619);
    /* 00684619: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068461c: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068461f: jl 0x6845f4 */ if ((fS!=fO)) goto L_006845f4;
L_00684621:; BB(0x00684621);
    /* 00684621: jmp 0x684598 */ goto L_00684598;
}

void f_00684748(void) /* sub_684748 */
{
    FN_ENTER(0x00684748);
    /* 00684748: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684749: mov ebp, esp */ r_ebp = r_esp;
    /* 0068474b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068474d: push 0x8eaaac */ { u32 v = 0x8eaaacu; r_esp -= 4; W32(r_esp, v); }
    /* 00684752: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00684758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684759: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00684760: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684763: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00684766: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00684769: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0068476c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0068476f: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00684772: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00684775: mov dword ptr [ebp - 0x60], 0x43960000 */ W32((u32)(r_ebp+0xffffffa0u), 0x43960000u);
    /* 0068477c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068477f: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00684782: mov eax, dword ptr [ecx + 0x194] */ r_eax = R32((u32)(r_ecx+0x194u));
    /* 00684788: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0068478b: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0068478e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00684790: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00684792: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00684795: lea edx, [eax + edx + 0x9cb8e0] */ r_edx = (u32)(r_eax+r_edx+0x9cb8e0u);
    /* 0068479c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x6847a1u); f_0082ebac();
    /* 006847a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006847a4: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006847a7: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 006847aa: mov ebx, dword ptr [ebp - 0x5c] */ r_ebx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006847ad: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 006847b0: add dword ptr [eax + 0x194], 1 */ { u32 ad = (u32)(r_eax+0x194u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006847b7: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 006847ba: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006847c1: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 006847c4: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006847cb: push 0x388 */ { u32 v = 0x388u; r_esp -= 4; W32(r_esp, v); }
    /* 006847d0: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006847d7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006847de: mov dword ptr [ebp - 0x3c], 0xbf800000 */ W32((u32)(r_ebp+0xffffffc4u), 0xbf800000u);
    /* 006847e5: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006847ec: mov dword ptr [ebp - 0x34], 0x43960000 */ W32((u32)(r_ebp+0xffffffccu), 0x43960000u);
    /* 006847f3: mov dword ptr [ebp - 0x30], 0x41f00000 */ W32((u32)(r_ebp+0xffffffd0u), 0x41f00000u);
    /* 006847fa: mov dword ptr [ebp - 0x2c], 0x41f00000 */ W32((u32)(r_ebp+0xffffffd4u), 0x41f00000u);
    /* 00684801: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00684808: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x68480du); f_005caba4();
    /* 0068480d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068480e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00684811: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00684813: je 0x684842 */ if (fZ) goto L_00684842;
L_00684815:; BB(0x00684815);
    /* 00684815: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0068481c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00684823: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00684826: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684829: lea ebx, [ebp - 0x58] */ r_ebx = (u32)(r_ebp+0xffffffa8u);
    /* 0068482c: movzx eax, word ptr [edx + 0x17c] */ r_eax = (u32)R16((u32)(r_edx+0x17cu));
    /* 00684833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684834: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684835: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684836: call 0x6821f8 */ r_esp -= 4; W32(r_esp, 0x68483bu); f_006821f8();
    /* 0068483b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00684842:; BB(0x00684842);
    /* 00684842: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00684845: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00684848: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068484f: mov esp, ebp */ r_esp = r_ebp;
    /* 00684851: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684852: ret  */ FN_RET(0x00684748); r_esp += 4; return;
}

void f_00684854(void) /* sub_684854 */
{
    FN_ENTER(0x00684854);
    /* 00684854: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684855: mov edi, ecx */ r_edi = r_ecx;
    /* 00684857: mov eax, dword ptr [edi + 0x1a4] */ r_eax = R32((u32)(r_edi+0x1a4u));
    /* 0068485d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068485f: jne 0x684863 */ if (!fZ) goto L_00684863;
L_00684861:; BB(0x00684861);
    /* 00684861: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684862: ret  */ FN_RET(0x00684854); r_esp += 4; return;
L_00684863:; BB(0x00684863);
    /* 00684863: mov ecx, dword ptr [0xa9056c] */ r_ecx = R32((u32)(0xa9056cu));
    /* 00684869: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068486b: movsx eax, word ptr [edi + 0x14c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x14cu));
    /* 00684872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684873: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x684878u); f_0052ddac();
    /* 00684878: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x68487du); f_0082dbac();
    /* 0068487d: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00684880: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x684885u); f_00829cc8();
    /* 00684885: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x68488au); f_0082d7b0();
    /* 0068488a: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068488d: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00684890: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00684892: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00684895: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x68489au); f_00830b74();
    /* 0068489a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0068489d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068489f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6848a4u); f_0082d8bc();
    /* 006848a4: mov ecx, edi */ r_ecx = r_edi;
    /* 006848a6: call 0x67d5e0 */ r_esp -= 4; W32(r_esp, 0x6848abu); f_0067d5e0();
    /* 006848ab: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006848b0: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 006848b6: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 006848bb: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 006848c1: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 006848c7: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 006848cd: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 006848d3: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 006848d9: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 006848df: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 006848e5: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 006848eb: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 006848f1: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 006848f7: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 006848fd: or eax, 0x200820 */ {  u32 a = r_eax; u32 b = 0x200820u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00684902: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00684907: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x68490cu); f_0082fa9c();
    /* 0068490c: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00684911: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684913: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x684918u); f_0082d6fc();
    /* 00684918: lea eax, [edi + 0x180] */ r_eax = (u32)(r_edi+0x180u);
    /* 0068491e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068491f: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x684924u); f_0082d710();
    /* 00684924: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00684927: mov ecx, edi */ r_ecx = r_edi;
    /* 00684929: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x68492eu); f_007aa668();
    /* 0068492e: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x684933u); f_0082faac();
    /* 00684933: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00684938: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0068493e: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00684943: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 00684948: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0068494e: mov ecx, edi */ r_ecx = r_edi;
    /* 00684950: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 00684955: mov eax, dword ptr [0xaab50c] */ r_eax = R32((u32)(0xaab50cu));
    /* 0068495a: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 0068495f: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 00684964: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 00684969: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 0068496e: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 00684973: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00684978: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0068497d: call 0x67ccc8 */ r_esp -= 4; W32(r_esp, 0x684982u); f_0067ccc8();
    /* 00684982: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x684987u); f_0082da80();
    /* 00684987: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x68498cu); f_0082dab0();
    /* 0068498c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068498d: ret  */ FN_RET(0x00684854); r_esp += 4; return;
}

void f_00684990(void) /* sub_684990 */
{
    FN_ENTER(0x00684990);
    /* 00684990: mov dword ptr [0xa90560], 0x3f800000 */ W32((u32)(0xa90560u), 0x3f800000u);
    /* 0068499a: mov dword ptr [0xa90564], 0x41000000 */ W32((u32)(0xa90564u), 0x41000000u);
    /* 006849a4: mov dword ptr [0xa90568], 0x3fc00000 */ W32((u32)(0xa90568u), 0x3fc00000u);
    /* 006849ae: ret  */ FN_RET(0x00684990); r_esp += 4; return;
}

void f_006849b0(void) /* sub_6849B0 */
{
    FN_ENTER(0x006849b0);
    /* 006849b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006849b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006849b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006849b5: push 0x8eaad4 */ { u32 v = 0x8eaad4u; r_esp -= 4; W32(r_esp, v); }
    /* 006849ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006849c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006849c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006849c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006849cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006849ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006849d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006849d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006849d7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006849d9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006849e0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6849e5u); f_008581c5();
    /* 006849e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006849e6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006849e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006849eb: je 0x684a36 */ if (fZ) goto L_00684a36;
L_006849ed:; BB(0x006849ed);
    /* 006849ed: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006849f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006849fb: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 00684a00: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00684a03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684a05: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00684a0b: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00684a0e: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00684a11: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x684a16u); f_0052d584();
    /* 00684a16: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00684a19: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00684a20:; BB(0x00684a20);
    /* 00684a20: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00684a23: mov dword ptr [0xa9056c], eax */ W32((u32)(0xa9056cu), r_eax);
    /* 00684a28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00684a2b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00684a32: mov esp, ebp */ r_esp = r_ebp;
    /* 00684a34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684a35: ret  */ FN_RET(0x006849b0); r_esp += 4; return;
L_00684a36:; BB(0x00684a36);
    /* 00684a36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00684a38: jmp 0x684a20 */ goto L_00684a20;
}

void f_00684a38(void)
{
    FN_ENTER(0x00684a38);
    goto L_00684a38;
L_00684a20:; BB(0x00684a20);
    /* 00684a20: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00684a23: mov dword ptr [0xa9056c], eax */ W32((u32)(0xa9056cu), r_eax);
    /* 00684a28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00684a2b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00684a32: mov esp, ebp */ r_esp = r_ebp;
    /* 00684a34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684a35: ret  */ FN_RET(0x00684a38); r_esp += 4; return;
L_00684a38:; BB(0x00684a38);
    /* 00684a38: jmp 0x684a20 */ goto L_00684a20;
}

void f_00684a3c(void) /* sub_684A3C */
{
    FN_ENTER(0x00684a3c);
    /* 00684a3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684a3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00684a3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00684a41: call 0x684a60 */ r_esp -= 4; W32(r_esp, 0x684a46u); f_00684a60();
    /* 00684a46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00684a4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00684a4c: jne 0x684a52 */ if (!fZ) goto L_00684a52;
L_00684a4e:; BB(0x00684a4e);
    /* 00684a4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684a4f: ret 4 */ FN_RET(0x00684a3c); r_esp += 8; return;
L_00684a52:; BB(0x00684a52);
    /* 00684a52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684a53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x684a58u); f_005c2f74();
    /* 00684a58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00684a59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684a5a: ret 4 */ FN_RET(0x00684a3c); r_esp += 8; return;
}

void f_00684a60(void) /* sub_684A60 */
{
    FN_ENTER(0x00684a60);
    /* 00684a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00684a63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684a65: push 0x8eaaf0 */ { u32 v = 0x8eaaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00684a6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00684a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684a71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00684a78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684a7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00684a7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00684a81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00684a84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00684a87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00684a8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00684a8d: mov dword ptr [ecx], 0xb38d50 */ W32((u32)(r_ecx), 0xb38d50u);
    /* 00684a93: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00684a9a: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x684a9fu); f_007ba1f0();
    /* 00684a9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00684aa2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00684aa9: mov esp, ebp */ r_esp = r_ebp;
    /* 00684aab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684aac: ret  */ FN_RET(0x00684a60); r_esp += 4; return;
}

void f_00684ab0(void) /* sub_684AB0 */
{
    FN_ENTER(0x00684ab0);
    /* 00684ab0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684ab1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684ab2: mov edi, ecx */ r_edi = r_ecx;
    /* 00684ab4: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00684ab8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00684abc: mov ecx, edi */ r_ecx = r_edi;
    /* 00684abe: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x684ac3u); f_007ba278();
    /* 00684ac3: mov edx, dword ptr [edi + 0xa8] */ r_edx = R32((u32)(r_edi+0xa8u));
    /* 00684ac9: mov dword ptr [edi], 0xb38d50 */ W32((u32)(r_edi), 0xb38d50u);
    /* 00684acf: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00684ad2: mov eax, dword ptr [0x9cb980] */ r_eax = R32((u32)(0x9cb980u));
    /* 00684ad7: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00684ada: je 0x684b45 */ if (fZ) goto L_00684b45;
L_00684adc:; BB(0x00684adc);
    /* 00684adc: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 00684ae1: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00684ae7: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00684aea: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 00684af0: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 00684af5: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00684afb: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 00684afe: mov dword ptr [edi + 0x94], eax */ W32((u32)(r_edi+0x94u), r_eax);
    /* 00684b04: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 00684b09: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00684b0f: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 00684b12: mov dword ptr [edi + 0x98], eax */ W32((u32)(r_edi+0x98u), r_eax);
    /* 00684b18: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 00684b1d: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00684b23: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 00684b26: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
L_00684b2c:; BB(0x00684b2c);
    /* 00684b2c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00684b2f: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00684b32: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00684b35: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 00684b38: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00684b3b: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 00684b3e: mov eax, edi */ r_eax = r_edi;
    /* 00684b40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684b41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684b42: ret 0xc */ FN_RET(0x00684ab0); r_esp += 16; return;
L_00684b45:; BB(0x00684b45);
    /* 00684b45: mov edx, dword ptr [0xa9049c] */ r_edx = R32((u32)(0xa9049cu));
    /* 00684b4b: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00684b51: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 00684b54: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
    /* 00684b5a: mov edx, dword ptr [0xa9049c] */ r_edx = R32((u32)(0xa9049cu));
    /* 00684b60: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00684b66: mov edx, dword ptr [edx + 0x8c] */ r_edx = R32((u32)(r_edx+0x8cu));
    /* 00684b6c: mov dword ptr [edi + 0x94], edx */ W32((u32)(r_edi+0x94u), r_edx);
    /* 00684b72: mov edx, dword ptr [0xa9049c] */ r_edx = R32((u32)(0xa9049cu));
    /* 00684b78: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00684b7e: mov edx, dword ptr [edx + 0x68] */ r_edx = R32((u32)(r_edx+0x68u));
    /* 00684b81: mov dword ptr [edi + 0x98], edx */ W32((u32)(r_edi+0x98u), r_edx);
    /* 00684b87: mov edx, dword ptr [0xa9049c] */ r_edx = R32((u32)(0xa9049cu));
    /* 00684b8d: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00684b93: mov edx, dword ptr [edx + 0x88] */ r_edx = R32((u32)(r_edx+0x88u));
    /* 00684b99: mov dword ptr [edi + 0x9c], edx */ W32((u32)(r_edi+0x9cu), r_edx);
    /* 00684b9f: jmp 0x684b2c */ goto L_00684b2c;
}

void f_00684b60(void)
{
    FN_ENTER(0x00684b60);
    goto L_00684b60;
L_00684b2c:; BB(0x00684b2c);
    /* 00684b2c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00684b2f: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00684b32: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00684b35: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 00684b38: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00684b3b: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 00684b3e: mov eax, edi */ r_eax = r_edi;
    /* 00684b40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684b41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684b42: ret 0xc */ FN_RET(0x00684b60); r_esp += 16; return;
L_00684b60:; BB(0x00684b60);
    /* 00684b60: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00684b66: mov edx, dword ptr [edx + 0x8c] */ r_edx = R32((u32)(r_edx+0x8cu));
    /* 00684b6c: mov dword ptr [edi + 0x94], edx */ W32((u32)(r_edi+0x94u), r_edx);
    /* 00684b72: mov edx, dword ptr [0xa9049c] */ r_edx = R32((u32)(0xa9049cu));
    /* 00684b78: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00684b7e: mov edx, dword ptr [edx + 0x68] */ r_edx = R32((u32)(r_edx+0x68u));
    /* 00684b81: mov dword ptr [edi + 0x98], edx */ W32((u32)(r_edi+0x98u), r_edx);
    /* 00684b87: mov edx, dword ptr [0xa9049c] */ r_edx = R32((u32)(0xa9049cu));
    /* 00684b8d: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00684b93: mov edx, dword ptr [edx + 0x88] */ r_edx = R32((u32)(r_edx+0x88u));
    /* 00684b99: mov dword ptr [edi + 0x9c], edx */ W32((u32)(r_edi+0x9cu), r_edx);
    /* 00684b9f: jmp 0x684b2c */ goto L_00684b2c;
}

void f_00684ba4(void) /* sub_684BA4 */
{
    FN_ENTER(0x00684ba4);
    /* 00684ba4: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00684ba7: add eax, 0xb6 */ {  u32 a = r_eax; u32 b = 0xb6u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00684bac: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00684baf: ret  */ FN_RET(0x00684ba4); r_esp += 4; return;
}

void f_00684bb0(void) /* sub_684BB0 */
{
    FN_ENTER(0x00684bb0);
    /* 00684bb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684bb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00684bb2: mov edi, ecx */ r_edi = r_ecx;
    /* 00684bb4: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00684bba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684bbc: je 0x684bd0 */ if (fZ) goto L_00684bd0;
L_00684bbe:; BB(0x00684bbe);
    /* 00684bbe: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 00684bc4: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00684bc7: mov edx, dword ptr [edx + 0x180] */ r_edx = R32((u32)(r_edx+0x180u));
    /* 00684bcd: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
L_00684bd0:; BB(0x00684bd0);
    /* 00684bd0: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x684bd5u); f_0082dbac();
    /* 00684bd5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x684bdau); f_0082d7b0();
    /* 00684bda: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 00684be0: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00684be3: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00684be6: mov ecx, esi */ r_ecx = r_esi;
    /* 00684be8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x684bedu); f_0082d838();
    /* 00684bed: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00684bf0: mov eax, edx */ r_eax = r_edx;
    /* 00684bf2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00684bf5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00684bf7: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00684bf9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00684bfb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x684c00u); f_0082d8bc();
    /* 00684c00: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00684c03: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x684c08u); f_00829cc8();
    /* 00684c08: push dword ptr [edi + 0x98] */ { u32 v = R32((u32)(r_edi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00684c0e: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x684c13u); f_0082e1e8();
    /* 00684c13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00684c14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x684c19u); f_0082da80();
    /* 00684c19: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x684c1eu); f_0082d7b0();
    /* 00684c1e: mov eax, dword ptr [edi + 0x94] */ r_eax = R32((u32)(r_edi+0x94u));
    /* 00684c24: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00684c27: mov ecx, esi */ r_ecx = r_esi;
    /* 00684c29: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x684c2eu); f_0082d838();
    /* 00684c2e: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00684c31: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00684c33: add edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00684c39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00684c3b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x684c40u); f_0082d8bc();
    /* 00684c40: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00684c43: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x684c48u); f_00829cc8();
    /* 00684c48: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00684c4e: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x684c53u); f_0082e1e8();
    /* 00684c53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00684c54: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x684c59u); f_0082da80();
    /* 00684c59: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x684c5eu); f_0082dab0();
    /* 00684c5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00684c5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684c60: ret  */ FN_RET(0x00684bb0); r_esp += 4; return;
}

void f_00684c64(void) /* sub_684C64 */
{
    FN_ENTER(0x00684c64);
    /* 00684c64: mov dword ptr [0xa90574], 0x3f800000 */ W32((u32)(0xa90574u), 0x3f800000u);
    /* 00684c6e: mov dword ptr [0xa90578], 0x41000000 */ W32((u32)(0xa90578u), 0x41000000u);
    /* 00684c78: mov dword ptr [0xa9057c], 0x3fc00000 */ W32((u32)(0xa9057cu), 0x3fc00000u);
    /* 00684c82: ret  */ FN_RET(0x00684c64); r_esp += 4; return;
}

void f_00684c84(void) /* sub_684C84 */
{
    FN_ENTER(0x00684c84);
    /* 00684c84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00684c87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00684c89: call 0x684ca8 */ r_esp -= 4; W32(r_esp, 0x684c8eu); f_00684ca8();
    /* 00684c8e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00684c92: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00684c94: jne 0x684c9a */ if (!fZ) goto L_00684c9a;
L_00684c96:; BB(0x00684c96);
    /* 00684c96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684c97: ret 4 */ FN_RET(0x00684c84); r_esp += 8; return;
L_00684c9a:; BB(0x00684c9a);
    /* 00684c9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00684c9b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x684ca0u); f_005c2f74();
    /* 00684ca0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00684ca1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00684ca2: ret 4 */ FN_RET(0x00684c84); r_esp += 8; return;
}

void f_00684ca8(void) /* sub_684CA8 */
{
    FN_ENTER(0x00684ca8);
    /* 00684ca8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684ca9: mov ebp, esp */ r_ebp = r_esp;
    /* 00684cab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684cad: push 0x8eab0c */ { u32 v = 0x8eab0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00684cb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00684cb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684cb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00684cc0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684cc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00684cc6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00684cc9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00684ccc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00684ccf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00684cd2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00684cd9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00684cdc: mov dword ptr [ecx], 0xb38dd0 */ W32((u32)(r_ecx), 0xb38dd0u);
    /* 00684ce2: call 0x67cc20 */ r_esp -= 4; W32(r_esp, 0x684ce7u); f_0067cc20();
    /* 00684ce7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00684cee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00684cf1: call 0x67c61c */ r_esp -= 4; W32(r_esp, 0x684cf6u); f_0067c61c();
    /* 00684cf6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00684cf9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00684d00: mov esp, ebp */ r_esp = r_ebp;
    /* 00684d02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684d03: ret  */ FN_RET(0x00684ca8); r_esp += 4; return;
}

void f_00684d04(void) /* sub_684D04 */
{
    FN_ENTER(0x00684d04);
    /* 00684d04: mov dword ptr [0xa90584], 0 */ W32((u32)(0xa90584u), 0x0u);
    /* 00684d0e: ret  */ FN_RET(0x00684d04); r_esp += 4; return;
}

void f_00684d10(void) /* sub_684D10 */
{
    FN_ENTER(0x00684d10);
    /* 00684d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00684d13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00684d15: push 0x8eab28 */ { u32 v = 0x8eab28u; r_esp -= 4; W32(r_esp, v); }
    /* 00684d1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00684d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684d21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00684d28: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684d2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00684d2e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00684d31: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00684d34: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00684d37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00684d3a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00684d3d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00684d40: call 0x67c674 */ r_esp -= 4; W32(r_esp, 0x684d45u); f_0067c674();
    /* 00684d45: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00684d4c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684d4f: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00684d52: mov dword ptr [eax], 0xb38dd0 */ W32((u32)(r_eax), 0xb38dd0u);
    /* 00684d58: mov edx, dword ptr [0x9cb984] */ r_edx = R32((u32)(0x9cb984u));
    /* 00684d5e: mov dword ptr [eax + 0x138], 5 */ W32((u32)(r_eax+0x138u), 0x5u);
    /* 00684d68: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00684d6b: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00684d6d: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00684d70: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00684d73: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 00684d76: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 00684d79: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 00684d7c: movzx edx, word ptr [edi + 0xc] */ r_edx = (u32)R16((u32)(r_edi+0xcu));
    /* 00684d80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00684d81: mov word ptr [eax + 0x17c], dx */ W16((u32)(r_eax+0x17cu), (u16)r_edx);
    /* 00684d88: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x684d8du); f_007b4d18();
    /* 00684d8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00684d8e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684d91: mov dword ptr [ecx + 0x180], eax */ W32((u32)(r_ecx+0x180u), r_eax);
    /* 00684d97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684d99: je 0x684da1 */ if (fZ) goto L_00684da1;
L_00684d9b:; BB(0x00684d9b);
    /* 00684d9b: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 00684d9e: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_00684da1:; BB(0x00684da1);
    /* 00684da1: mov edi, dword ptr [0xa9049c] */ r_edi = R32((u32)(0xa9049cu));
    /* 00684da7: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00684dad: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00684db3: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00684db6: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 00684dbc: mov esi, dword ptr [ebx + 0xbc] */ r_esi = R32((u32)(r_ebx+0xbcu));
    /* 00684dc2: mov dword ptr [ecx + 0xd8], 0x9cb988 */ W32((u32)(r_ecx+0xd8u), 0x9cb988u);
    /* 00684dcc: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 00684dcf: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 00684dd5: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00684ddb: mov eax, 1 */ r_eax = 0x1u;
    /* 00684de0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684de1: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00684de8: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x684dedu); f_007aa4c8();
    /* 00684ded: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684df0: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00684df3: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00684dfa: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00684e01: mov edx, 1 */ r_edx = 0x1u;
    /* 00684e06: mov word ptr [ecx + 0x194], dx */ W16((u32)(r_ecx+0x194u), (u16)r_edx);
    /* 00684e0d: mov ebx, dword ptr [edi + 0x10] */ r_ebx = R32((u32)(r_edi+0x10u));
    /* 00684e10: mov dword ptr [ecx + 0x198], ebx */ W32((u32)(r_ecx+0x198u), r_ebx);
    /* 00684e16: mov esi, dword ptr [edi + 0x14] */ r_esi = R32((u32)(r_edi+0x14u));
    /* 00684e19: mov dword ptr [ecx + 0x19c], esi */ W32((u32)(r_ecx+0x19cu), r_esi);
    /* 00684e1f: mov dword ptr [ecx + 0x1a0], 0 */ W32((u32)(r_ecx+0x1a0u), 0x0u);
    /* 00684e29: movzx eax, byte ptr [edi + 0x1c] */ r_eax = (u32)R8((u32)(r_edi+0x1cu));
    /* 00684e2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684e2e: call 0x680ed0 */ r_esp -= 4; W32(r_esp, 0x684e33u); f_00680ed0();
    /* 00684e33: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684e36: mov eax, dword ptr [ecx + 0x198] */ r_eax = R32((u32)(r_ecx+0x198u));
    /* 00684e3c: mov dword ptr [ecx + 0x1a4], 0 */ W32((u32)(r_ecx+0x1a4u), 0x0u);
    /* 00684e46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684e48: jne 0x684e74 */ if (!fZ) goto L_00684e74;
L_00684e4a:; BB(0x00684e4a);
    /* 00684e4a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00684e4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00684e4e: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00684e55: mov edx, 1 */ r_edx = 0x1u;
    /* 00684e5a: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 00684e60: mov word ptr [ecx + 0x194], ax */ W16((u32)(r_ecx+0x194u), (u16)r_eax);
    /* 00684e67: mov dword ptr [ecx + 0x1a0], edx */ W32((u32)(r_ecx+0x1a0u), r_edx);
    /* 00684e6d: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x684e72u); f_0067d660();
    /* 00684e72: jmp 0x684e86 */ goto L_00684e86;
L_00684e74:; BB(0x00684e74);
    /* 00684e74: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00684e7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00684e7c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00684e7e: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x684e83u); f_0067cd64();
    /* 00684e83: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00684e86:; BB(0x00684e86);
    /* 00684e86: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00684e89: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00684e8c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00684e8f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00684e92: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00684e95: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00684e9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00684e9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684e9f: ret 4 */ FN_RET(0x00684d10); r_esp += 8; return;
}

void f_00684ea4(void) /* sub_684EA4 */
{
    FN_ENTER(0x00684ea4);
    /* 00684ea4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00684ea5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00684ea8: mov edi, ecx */ r_edi = r_ecx;
    /* 00684eaa: mov eax, dword ptr [edi + 0x1a4] */ r_eax = R32((u32)(r_edi+0x1a4u));
    /* 00684eb0: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684eb3: je 0x684f7e */ if (fZ) goto L_00684f7e;
L_00684eb9:; BB(0x00684eb9);
    /* 00684eb9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00684ebc: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00684ebf: fcomp dword ptr [0x93c520] */ fx_compare(ST(0), R_F32((u32)(0x93c520u))); FPOP();
    /* 00684ec5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00684ec7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00684ec8: je 0x684f4f */ if (fZ) goto L_00684f4f;
L_00684ece:; BB(0x00684ece);
    /* 00684ece: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
L_00684ed5:; BB(0x00684ed5);
    /* 00684ed5: mov word ptr [edi + 0x194], ax */ W16((u32)(r_edi+0x194u), (u16)r_eax);
    /* 00684edc: mov ecx, edi */ r_ecx = r_edi;
    /* 00684ede: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x684ee3u); f_007aa094();
    /* 00684ee3: mov ecx, edi */ r_ecx = r_edi;
    /* 00684ee5: call 0x67cc34 */ r_esp -= 4; W32(r_esp, 0x684eeau); f_0067cc34();
    /* 00684eea: movzx edx, word ptr [edi + 0x14c] */ r_edx = (u32)R16((u32)(r_edi+0x14cu));
    /* 00684ef1: mov eax, dword ptr [edi + 0x1a4] */ r_eax = R32((u32)(r_edi+0x1a4u));
    /* 00684ef7: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00684efa: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00684efd: mov word ptr [edi + 0x14c], dx */ W16((u32)(r_edi+0x14cu), (u16)r_edx);
    /* 00684f04: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00684f07: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00684f0b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00684f0f: mov dword ptr [edi + 0x1a4], eax */ W32((u32)(r_edi+0x1a4u), r_eax);
    /* 00684f15: fcom dword ptr [0x93c514] */ fx_compare(ST(0), R_F32((u32)(0x93c514u))); 
    /* 00684f1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00684f1d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00684f1e: jbe 0x684f3f */ if ((fC||fZ)) goto L_00684f3f;
L_00684f20:; BB(0x00684f20);
    /* 00684f20: fld dword ptr [edi + 0x184] */ FPUSH(R_F32((u32)(r_edi+0x184u)));
    /* 00684f26: fcom dword ptr [0x93c51c] */ fx_compare(ST(0), R_F32((u32)(0x93c51cu))); 
    /* 00684f2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00684f2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00684f2f: jbe 0x684fad */ if ((fC||fZ)) goto L_00684fad;
L_00684f31:; BB(0x00684f31);
    /* 00684f31: fld dword ptr [0x93c518] */ FPUSH(R_F32((u32)(0x93c518u)));
    /* 00684f37: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00684f39: fstp dword ptr [edi + 0x184] */ W_F32((u32)(r_edi+0x184u), ST(0)); FPOP();
L_00684f3f:; BB(0x00684f3f);
    /* 00684f3f: fcomp dword ptr [0x93c510] */ fx_compare(ST(0), R_F32((u32)(0x93c510u))); FPOP();
    /* 00684f45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00684f47: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00684f48: je 0x684f9b */ if (fZ) goto L_00684f9b;
L_00684f4a:; BB(0x00684f4a);
    /* 00684f4a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00684f4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684f4e: ret  */ FN_RET(0x00684ea4); r_esp += 4; return;
L_00684f4f:; BB(0x00684f4f);
    /* 00684f4f: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 00684f56: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684f59: jne 0x684ed5 */ if (!fZ) goto L_00684ed5;
L_00684f5f:; BB(0x00684f5f);
    /* 00684f5f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00684f61: mov ecx, edi */ r_ecx = r_edi;
    /* 00684f63: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x684f68u); f_0067d660();
    /* 00684f68: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00684f6a: mov dword ptr [edi + 0x1a4], edx */ W32((u32)(r_edi+0x1a4u), r_edx);
    /* 00684f70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00684f72: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00684f79: jmp 0x684ed5 */ goto L_00684ed5;
L_00684f7e:; BB(0x00684f7e);
    /* 00684f7e: mov edx, dword ptr [edi + 0x1a0] */ r_edx = R32((u32)(r_edi+0x1a0u));
    /* 00684f84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684f86: jne 0x684eb9 */ if (!fZ) goto L_00684eb9;
L_00684f8c:; BB(0x00684f8c);
    /* 00684f8c: mov dword ptr [edi + 0x1a0], 1 */ W32((u32)(r_edi+0x1a0u), 0x1u);
    /* 00684f96: jmp 0x684eb9 */ goto L_00684eb9;
L_00684f9b:; BB(0x00684f9b);
    /* 00684f9b: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00684f9f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00684fa4: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00684fa8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00684fab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684fac: ret  */ FN_RET(0x00684ea4); r_esp += 4; return;
L_00684fad:; BB(0x00684fad);
    /* 00684fad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00684faf: jmp 0x684f3f */ goto L_00684f3f;
}

void f_00684fb4(void) /* sub_684FB4 */
{
    FN_ENTER(0x00684fb4);
    /* 00684fb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00684fb5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00684fb7: mov eax, dword ptr [ebp + 0x1a0] */ r_eax = R32((u32)(r_ebp+0x1a0u));
    /* 00684fbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00684fbf: jne 0x684fc3 */ if (!fZ) goto L_00684fc3;
L_00684fc1:; BB(0x00684fc1);
    /* 00684fc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00684fc2: ret  */ FN_RET(0x00684fb4); r_esp += 4; return;
L_00684fc3:; BB(0x00684fc3);
    /* 00684fc3: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x684fc8u); f_0082dbac();
    /* 00684fc8: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00684fcb: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x684fd0u); f_00829cc8();
    /* 00684fd0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x684fd5u); f_0082d7b0();
    /* 00684fd5: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00684fd8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x684fddu); f_0082d838();
    /* 00684fdd: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00684fe0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00684fe2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x684fe7u); f_0082d8bc();
    /* 00684fe7: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00684fec: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00684ff2: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00684ff7: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00684ffd: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 00685003: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 00685009: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 0068500f: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 00685015: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 0068501b: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00685021: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00685027: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 0068502d: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00685033: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00685039: or eax, 0x200820 */ {  u32 a = r_eax; u32 b = 0x200820u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068503e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00685043: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x685048u); f_0082fa9c();
    /* 00685048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068504a: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x68504fu); f_00830b08();
    /* 0068504f: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00685054: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00685056: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x68505bu); f_0082d6fc();
    /* 0068505b: lea eax, [ebp + 0x184] */ r_eax = (u32)(r_ebp+0x184u);
    /* 00685061: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685062: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x685067u); f_0082d710();
    /* 00685067: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068506a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068506c: call 0x67d5e0 */ r_esp -= 4; W32(r_esp, 0x685071u); f_0067d5e0();
    /* 00685071: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00685073: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x685078u); f_007aa668();
    /* 00685078: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x68507du); f_0082faac();
    /* 0068507d: push 0xbf */ { u32 v = 0xbfu; r_esp -= 4; W32(r_esp, v); }
    /* 00685082: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x685087u); f_00830b08();
    /* 00685087: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00685088: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068508a: call 0x67ccc8 */ r_esp -= 4; W32(r_esp, 0x68508fu); f_0067ccc8();
    /* 0068508f: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00685094: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0068509a: mov ecx, dword ptr [0xaab508] */ r_ecx = R32((u32)(0xaab508u));
    /* 006850a0: mov ebp, dword ptr [0xaab50c] */ r_ebp = R32((u32)(0xaab50cu));
    /* 006850a6: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 006850ab: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 006850b0: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 006850b6: mov dword ptr [0xaf0370], ecx */ W32((u32)(0xaf0370u), r_ecx);
    /* 006850bc: mov dword ptr [0xaf0374], ebp */ W32((u32)(0xaf0374u), r_ebp);
    /* 006850c2: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 006850c7: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 006850cc: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 006850d1: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 006850d6: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006850db: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6850e0u); f_0082da80();
    /* 006850e0: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6850e5u); f_0082dab0();
    /* 006850e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006850e6: ret  */ FN_RET(0x00684fb4); r_esp += 4; return;
}

