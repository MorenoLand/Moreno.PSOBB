#include "protos.h"

void f_0064905c(void) /* sub_64905C */
{
    FN_ENTER(0x0064905c);
    /* 0064905c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064905d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064905e: mov edi, ecx */ r_edi = r_ecx;
    /* 00649060: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00649064: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00649068: mov ecx, edi */ r_ecx = r_edi;
    /* 0064906a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x64906fu); f_008193cc();
    /* 0064906f: mov dword ptr [edi], 0xb30000 */ W32((u32)(r_edi), 0xb30000u);
    /* 00649075: mov edx, dword ptr [0x9c7158] */ r_edx = R32((u32)(0x9c7158u));
    /* 0064907b: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0064907e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00649080: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00649083: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00649086: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00649089: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0064908d: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 00649090: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 00649093: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 0064909a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064909c: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0064909f: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 006490a2: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006490a5: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 006490a8: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 006490ab: mov eax, edi */ r_eax = r_edi;
    /* 006490ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006490ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006490af: ret 0xc */ FN_RET(0x0064905c); r_esp += 16; return;
}

void f_006490b4(void) /* sub_6490B4 */
{
    FN_ENTER(0x006490b4);
    /* 006490b4: call 0x6490fc */ r_esp -= 4; W32(r_esp, 0x6490b9u); f_006490fc();
    /* 006490b9: push 0x935c6c */ { u32 v = 0x935c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006490be: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 006490c3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6490c8u); f_0061cdb0();
    /* 006490c8: push 0x935c7c */ { u32 v = 0x935c7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006490cd: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 006490d2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6490d7u); f_0061cdb0();
    /* 006490d7: push 0x935c8c */ { u32 v = 0x935c8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006490dc: push 0x13001e */ { u32 v = 0x13001eu; r_esp -= 4; W32(r_esp, v); }
    /* 006490e1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6490e6u); f_0061cdb0();
    /* 006490e6: push 0x935c9c */ { u32 v = 0x935c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006490eb: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 006490f0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6490f5u); f_0061cdb0();
    /* 006490f5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006490f8: ret  */ FN_RET(0x006490b4); r_esp += 4; return;
}

void f_006490fc(void) /* sub_6490FC */
{
    FN_ENTER(0x006490fc);
    /* 006490fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006490fd: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00649100: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00649102: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00649105: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00649107: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064910c: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00649111: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x649114u); call_ind(t); }
    /* 00649114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649116: je 0x64916e */ if (fZ) goto L_0064916e;
L_00649118:; BB(0x00649118);
    /* 00649118: mov edx, dword ptr [ebp + 0x68] */ r_edx = R32((u32)(r_ebp+0x68u));
    /* 0064911b: mov dword ptr [esp], 0x3f4ccccd */ W32((u32)(r_esp), 0x3f4ccccdu);
    /* 00649122: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649124: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 00649127: mov dword ptr [esp + 4], 0x3e4ccccd */ W32((u32)(r_esp+0x4u), 0x3e4ccccdu);
    /* 0064912f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00649133: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 00649136: mov eax, dword ptr [ebp + 0x70] */ r_eax = R32((u32)(r_ebp+0x70u));
    /* 00649139: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00649141: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00649144: add ebp, 0x5c */ {  u32 a = r_ebp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00649147: mov dword ptr [esp + 0xc], 0x3f666666 */ W32((u32)(r_esp+0xcu), 0x3f666666u);
    /* 0064914f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00649153: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00649157: mov dword ptr [esp + 0x14], 0x40400000 */ W32((u32)(r_esp+0x14u), 0x40400000u);
    /* 0064915f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00649162: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649163: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00649164: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00649165: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649166: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64916bu); f_0061cdb0();
    /* 0064916b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064916e:; BB(0x0064916e);
    /* 0064916e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00649171: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00649172: ret  */ FN_RET(0x006490fc); r_esp += 4; return;
}

void f_00649174(void) /* sub_649174 */
{
    FN_ENTER(0x00649174);
    /* 00649174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00649175: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00649176: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00649179: mov esi, ecx */ r_esi = r_ecx;
    /* 0064917b: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0064917e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649180: je 0x64936c */ if (fZ) goto L_0064936c;
L_00649186:; BB(0x00649186);
    /* 00649186: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649189: je 0x6492ca */ if (fZ) goto L_006492ca;
L_0064918f:; BB(0x0064918f);
    /* 0064918f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649192: je 0x649281 */ if (fZ) goto L_00649281;
L_00649198:; BB(0x00649198);
    /* 00649198: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064919b: jne 0x649269 */ if (!fZ) goto L_00649269;
L_006491a1:; BB(0x006491a1);
    /* 006491a1: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006491a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006491a6: je 0x6491b6 */ if (fZ) goto L_006491b6;
L_006491a8:; BB(0x006491a8);
    /* 006491a8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006491ab: je 0x6491b6 */ if (fZ) goto L_006491b6;
L_006491ad:; BB(0x006491ad);
    /* 006491ad: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006491b0: jne 0x649245 */ if (!fZ) goto L_00649245;
L_006491b6:; BB(0x006491b6);
    /* 006491b6: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006491bd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6491c2u); f_008587a5();
    /* 006491c2: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006491c6: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006491ca: fdiv dword ptr [0x935b68] */ ST(0) = ST(0) / R_F32((u32)(0x935b68u));
    /* 006491d0: fmul dword ptr [0x935b64] */ ST(0) = ST(0) * R_F32((u32)(0x935b64u));
    /* 006491d6: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006491da: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006491df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006491e4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006491e8: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006491ec: fistp dword ptr [esp + 4] */ W32((u32)(r_esp+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 006491f0: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006491f4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6491f9u); f_008587a5();
    /* 006491f9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006491fd: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00649201: fdiv dword ptr [0x935b68] */ ST(0) = ST(0) / R_F32((u32)(0x935b68u));
    /* 00649207: fmul dword ptr [0x935b64] */ ST(0) = ST(0) * R_F32((u32)(0x935b64u));
    /* 0064920d: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 00649210: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00649214: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00649219: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064921e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00649222: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00649226: fistp dword ptr [esp + 8] */ W32((u32)(r_esp+0x8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0064922a: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0064922e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00649231: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00649233: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 00649238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649239: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064923a: call 0x50bd5c */ r_esp -= 4; W32(r_esp, 0x64923fu); f_0050bd5c();
    /* 0064923f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649242: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
L_00649245:; BB(0x00649245);
    /* 00649245: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00649248: fsub dword ptr [0x935b54] */ ST(0) = ST(0) - R_F32((u32)(0x935b54u));
    /* 0064924e: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 00649251: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00649254: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00649257: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064925a: jle 0x6492c4 */ if ((fZ||fS!=fO)) goto L_006492c4;
L_0064925c:; BB(0x0064925c);
    /* 0064925c: mov dword ptr [esi + 0x28], 4 */ W32((u32)(r_esi+0x28u), 0x4u);
    /* 00649263: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00649266: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00649267: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00649268: ret  */ FN_RET(0x00649174); r_esp += 4; return;
L_00649269:; BB(0x00649269);
    /* 00649269: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064926c: jne 0x6492c4 */ if (!fZ) goto L_006492c4;
L_0064926e:; BB(0x0064926e);
    /* 0064926e: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00649272: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00649277: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0064927b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064927e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064927f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00649280: ret  */ FN_RET(0x00649174); r_esp += 4; return;
L_00649281:; BB(0x00649281);
    /* 00649281: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00649284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649286: je 0x649292 */ if (fZ) goto L_00649292;
L_00649288:; BB(0x00649288);
    /* 00649288: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064928b: je 0x649292 */ if (fZ) goto L_00649292;
L_0064928d:; BB(0x0064928d);
    /* 0064928d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649290: jne 0x6492a6 */ if (!fZ) goto L_006492a6;
L_00649292:; BB(0x00649292);
    /* 00649292: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00649294: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00649297: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 0064929a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064929b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6492a0u); f_0050b7a4();
    /* 006492a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006492a3: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
L_006492a6:; BB(0x006492a6);
    /* 006492a6: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 006492a9: fsub dword ptr [0x935b54] */ ST(0) = ST(0) - R_F32((u32)(0x935b54u));
    /* 006492af: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 006492b2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006492b5: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006492b8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006492bb: jle 0x6492c4 */ if ((fZ||fS!=fO)) goto L_006492c4;
L_006492bd:; BB(0x006492bd);
    /* 006492bd: mov dword ptr [esi + 0x28], 4 */ W32((u32)(r_esi+0x28u), 0x4u);
L_006492c4:; BB(0x006492c4);
    /* 006492c4: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006492c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006492c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006492c9: ret  */ FN_RET(0x00649174); r_esp += 4; return;
L_006492ca:; BB(0x006492ca);
    /* 006492ca: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006492cd: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006492d0: je 0x649344 */ if (fZ) goto L_00649344;
L_006492d2:; BB(0x006492d2);
    /* 006492d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006492d5: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006492d8: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006492db: jl 0x6492c4 */ if ((fS!=fO)) goto L_006492c4;
L_006492dd:; BB(0x006492dd);
    /* 006492dd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6492e2u); f_008587a5();
    /* 006492e2: mov dword ptr [esi + 0x34], 0 */ W32((u32)(r_esi+0x34u), 0x0u);
    /* 006492e9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006492ed: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 006492f1: fdiv dword ptr [0x935b68] */ ST(0) = ST(0) / R_F32((u32)(0x935b68u));
    /* 006492f7: fcom dword ptr [0x935b60] */ fx_compare(ST(0), R_F32((u32)(0x935b60u))); 
    /* 006492fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006492ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00649300: jae 0x649318 */ if (!fC) goto L_00649318;
L_00649302:; BB(0x00649302);
    /* 00649302: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00649304: mov dword ptr [esi + 0x38], 0x87 */ W32((u32)(r_esi+0x38u), 0x87u);
    /* 0064930b: mov dword ptr [esi + 0x28], 2 */ W32((u32)(r_esi+0x28u), 0x2u);
    /* 00649312: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00649315: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00649316: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00649317: ret  */ FN_RET(0x00649174); r_esp += 4; return;
L_00649318:; BB(0x00649318);
    /* 00649318: fcomp dword ptr [0x935b5c] */ fx_compare(ST(0), R_F32((u32)(0x935b5cu))); FPOP();
    /* 0064931e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00649320: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00649321: jae 0x649337 */ if (!fC) goto L_00649337;
L_00649323:; BB(0x00649323);
    /* 00649323: mov dword ptr [esi + 0x38], 0x88 */ W32((u32)(r_esi+0x38u), 0x88u);
    /* 0064932a: mov dword ptr [esi + 0x28], 2 */ W32((u32)(r_esi+0x28u), 0x2u);
    /* 00649331: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00649334: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00649335: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00649336: ret  */ FN_RET(0x00649174); r_esp += 4; return;
L_00649337:; BB(0x00649337);
    /* 00649337: mov dword ptr [esi + 0x28], 3 */ W32((u32)(r_esi+0x28u), 0x3u);
    /* 0064933e: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00649341: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00649342: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00649343: ret  */ FN_RET(0x00649174); r_esp += 4; return;
L_00649344:; BB(0x00649344);
    /* 00649344: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00649346: push 0x85 */ { u32 v = 0x85u; r_esp -= 4; W32(r_esp, v); }
    /* 0064934b: lea edi, [esi + 0x1c] */ r_edi = (u32)(r_esi+0x1cu);
    /* 0064934e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064934f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x649354u); f_0050b7a4();
    /* 00649354: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00649356: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 0064935b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064935c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x649361u); f_0050b7a4();
    /* 00649361: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649364: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00649367: jmp 0x6492d2 */ goto L_006492d2;
L_0064936c:; BB(0x0064936c);
    /* 0064936c: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 0064936f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649371: je 0x6493d6 */ if (fZ) goto L_006493d6;
L_00649373:; BB(0x00649373);
    /* 00649373: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649375: je 0x6492c4 */ if (fZ) goto L_006492c4;
L_0064937b:; BB(0x0064937b);
    /* 0064937b: fld dword ptr [0x935b50] */ FPUSH(R_F32((u32)(0x935b50u)));
    /* 00649381: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00649384: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00649386: fcom dword ptr [esi + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x30u))); 
    /* 00649389: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064938b: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 0064938e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00649390: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00649392: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 00649395: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00649396: jb 0x6493c4 */ if (fC) goto L_006493c4;
L_00649398:; BB(0x00649398);
    /* 00649398: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064939a: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 006493a1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006493a3: mov dword ptr [esi + 0x34], edi */ W32((u32)(r_esi+0x34u), r_edi);
    /* 006493a6: mov dword ptr [esi + 0x28], 1 */ W32((u32)(r_esi+0x28u), 0x1u);
    /* 006493ad: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 006493b1: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006493b7: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 006493bb: mov dword ptr [esi + 0x2c], edi */ W32((u32)(r_esi+0x2cu), r_edi);
    /* 006493be: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006493c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006493c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006493c3: ret  */ FN_RET(0x00649174); r_esp += 4; return;
L_006493c4:; BB(0x006493c4);
    /* 006493c4: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 006493c7: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006493ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006493cb: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x6493d0u); f_00508db8();
    /* 006493d0: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006493d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006493d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006493d5: ret  */ FN_RET(0x00649174); r_esp += 4; return;
L_006493d6:; BB(0x006493d6);
    /* 006493d6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006493d8: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 006493dd: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 006493e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006493e1: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6493e6u); f_0050981c();
    /* 006493e6: mov ecx, eax */ r_ecx = r_eax;
    /* 006493e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006493eb: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 006493ee: jmp 0x649373 */ goto L_00649373;
}

void f_006493f0(void) /* sub_6493F0 */
{
    FN_ENTER(0x006493f0);
    /* 006493f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006493f1: mov ecx, dword ptr [0xa8f484] */ r_ecx = R32((u32)(0xa8f484u));
    /* 006493f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006493f9: je 0x64940e */ if (fZ) goto L_0064940e;
L_006493fb:; BB(0x006493fb);
    /* 006493fb: je 0x649404 */ if (fZ) goto L_00649404;
L_006493fd:; BB(0x006493fd);
    /* 006493fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006493ff: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x649404u); f_0044bbac();
L_00649404:; BB(0x00649404);
    /* 00649404: mov dword ptr [0xa8f484], 0 */ W32((u32)(0xa8f484u), 0x0u);
L_0064940e:; BB(0x0064940e);
    /* 0064940e: mov ecx, dword ptr [0xa8f494] */ r_ecx = R32((u32)(0xa8f494u));
    /* 00649414: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649416: je 0x64942b */ if (fZ) goto L_0064942b;
L_00649418:; BB(0x00649418);
    /* 00649418: je 0x649421 */ if (fZ) goto L_00649421;
L_0064941a:; BB(0x0064941a);
    /* 0064941a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064941c: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x649421u); f_004066a8();
L_00649421:; BB(0x00649421);
    /* 00649421: mov dword ptr [0xa8f494], 0 */ W32((u32)(0xa8f494u), 0x0u);
L_0064942b:; BB(0x0064942b);
    /* 0064942b: mov ecx, dword ptr [0xa8f498] */ r_ecx = R32((u32)(0xa8f498u));
    /* 00649431: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649433: mov dword ptr [0xa8f488], eax */ W32((u32)(0xa8f488u), r_eax);
    /* 00649438: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064943a: mov dword ptr [0xa8f490], eax */ W32((u32)(0xa8f490u), r_eax);
    /* 0064943f: mov dword ptr [0xa8f48c], eax */ W32((u32)(0xa8f48cu), r_eax);
    /* 00649444: je 0x649459 */ if (fZ) goto L_00649459;
L_00649446:; BB(0x00649446);
    /* 00649446: je 0x64944f */ if (fZ) goto L_0064944f;
L_00649448:; BB(0x00649448);
    /* 00649448: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064944a: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x64944fu); f_0044bbac();
L_0064944f:; BB(0x0064944f);
    /* 0064944f: mov dword ptr [0xa8f498], 0 */ W32((u32)(0xa8f498u), 0x0u);
L_00649459:; BB(0x00649459);
    /* 00649459: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0064945e: mov ebx, eax */ r_ebx = r_eax;
L_00649460:; BB(0x00649460);
    /* 00649460: mov ecx, dword ptr [ebx + 0xa8f4b4] */ r_ecx = R32((u32)(r_ebx+0xa8f4b4u));
    /* 00649466: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649468: je 0x649473 */ if (fZ) goto L_00649473;
L_0064946a:; BB(0x0064946a);
    /* 0064946a: je 0x649473 */ if (fZ) goto L_00649473;
L_0064946c:; BB(0x0064946c);
    /* 0064946c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064946e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x649473u); f_004066a8();
L_00649473:; BB(0x00649473);
    /* 00649473: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00649475: mov dword ptr [ebx + 0xa8f4b4], edx */ W32((u32)(r_ebx+0xa8f4b4u), r_edx);
    /* 0064947b: mov dword ptr [ebx + 0xa8f49c], edx */ W32((u32)(r_ebx+0xa8f49cu), r_edx);
    /* 00649481: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00649484: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649486: jge 0x649460 */ if ((fS==fO)) goto L_00649460;
L_00649488:; BB(0x00649488);
    /* 00649488: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00649489: ret  */ FN_RET(0x006493f0); r_esp += 4; return;
}

void f_0064948c(void) /* sub_64948C */
{
    FN_ENTER(0x0064948c);
    /* 0064948c: mov edx, dword ptr [0xa8f4cc] */ r_edx = R32((u32)(0xa8f4ccu));
    /* 00649492: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00649495: mov eax, 0 */ r_eax = 0x0u;
    /* 0064949a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0064949d: ret  */ FN_RET(0x0064948c); r_esp += 4; return;
}

void f_006494a0(void) /* sub_6494A0 */
{
    FN_ENTER(0x006494a0);
    /* 006494a0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006494a4: mov eax, dword ptr [edx*4 + 0xa8f4b4] */ r_eax = R32((u32)(r_edx*4+0xa8f4b4u));
    /* 006494ab: ret  */ FN_RET(0x006494a0); r_esp += 4; return;
}

void f_006494ac(void) /* sub_6494AC */
{
    FN_ENTER(0x006494ac);
    /* 006494ac: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006494b0: mov eax, dword ptr [edx*4 + 0xa8f49c] */ r_eax = R32((u32)(r_edx*4+0xa8f49cu));
    /* 006494b7: ret  */ FN_RET(0x006494ac); r_esp += 4; return;
}

void f_006494b8(void) /* sub_6494B8 */
{
    FN_ENTER(0x006494b8);
    /* 006494b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006494ba: mov dword ptr [0xa8f4d0], eax */ W32((u32)(0xa8f4d0u), r_eax);
    /* 006494bf: mov dword ptr [0xa8f4d4], eax */ W32((u32)(0xa8f4d4u), r_eax);
    /* 006494c4: mov dword ptr [0xa8f4d8], eax */ W32((u32)(0xa8f4d8u), r_eax);
    /* 006494c9: mov dword ptr [0xa8f4dc], eax */ W32((u32)(0xa8f4dcu), r_eax);
    /* 006494ce: mov dword ptr [0xa8f4e0], eax */ W32((u32)(0xa8f4e0u), r_eax);
    /* 006494d3: mov dword ptr [0xa8f4e4], eax */ W32((u32)(0xa8f4e4u), r_eax);
    /* 006494d8: ret  */ FN_RET(0x006494b8); r_esp += 4; return;
}

void f_006494dc(void) /* sub_6494DC */
{
    FN_ENTER(0x006494dc);
    /* 006494dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006494dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006494df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006494e1: push 0x8e6112 */ { u32 v = 0x8e6112u; r_esp -= 4; W32(r_esp, v); }
    /* 006494e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006494ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006494ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006494f4: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006494f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006494fa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006494fd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00649500: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00649503: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649505: mov dword ptr [0xa8f4d0], eax */ W32((u32)(0xa8f4d0u), r_eax);
    /* 0064950a: mov dword ptr [0xa8f4d4], eax */ W32((u32)(0xa8f4d4u), r_eax);
    /* 0064950f: mov dword ptr [0xa8f4d8], eax */ W32((u32)(0xa8f4d8u), r_eax);
    /* 00649514: mov dword ptr [0xa8f4dc], eax */ W32((u32)(0xa8f4dcu), r_eax);
    /* 00649519: mov dword ptr [0xa8f4e0], eax */ W32((u32)(0xa8f4e0u), r_eax);
    /* 0064951e: mov dword ptr [0xa8f4e4], eax */ W32((u32)(0xa8f4e4u), r_eax);
    /* 00649523: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x649528u); f_007a61a4();
    /* 00649528: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064952b: je 0x649ac6 */ if (fZ) goto L_00649ac6;
L_00649531:; BB(0x00649531);
    /* 00649531: call 0x6494b8 */ r_esp -= 4; W32(r_esp, 0x649536u); f_006494b8();
    /* 00649536: mov ecx, dword ptr [0xa8f4d0] */ r_ecx = R32((u32)(0xa8f4d0u));
L_0064953c:; BB(0x0064953c);
    /* 0064953c: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00649541: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649543: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649545: jne 0x649aba */ if (!fZ) goto L_00649aba;
L_0064954b:; BB(0x0064954b);
    /* 0064954b: mov edx, dword ptr [0xa8f4d4] */ r_edx = R32((u32)(0xa8f4d4u));
    /* 00649551: mov eax, 1 */ r_eax = 0x1u;
    /* 00649556: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649558: jne 0x649aba */ if (!fZ) goto L_00649aba;
L_0064955e:; BB(0x0064955e);
    /* 0064955e: mov edx, dword ptr [0xa8f4d8] */ r_edx = R32((u32)(0xa8f4d8u));
    /* 00649564: mov eax, 2 */ r_eax = 0x2u;
    /* 00649569: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064956b: jne 0x649aba */ if (!fZ) goto L_00649aba;
L_00649571:; BB(0x00649571);
    /* 00649571: mov edx, dword ptr [0xa8f4dc] */ r_edx = R32((u32)(0xa8f4dcu));
    /* 00649577: mov eax, 3 */ r_eax = 0x3u;
    /* 0064957c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064957e: jne 0x649aba */ if (!fZ) goto L_00649aba;
L_00649584:; BB(0x00649584);
    /* 00649584: mov edx, dword ptr [0xa8f4e0] */ r_edx = R32((u32)(0xa8f4e0u));
    /* 0064958a: mov eax, 4 */ r_eax = 0x4u;
    /* 0064958f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649591: jne 0x649aba */ if (!fZ) goto L_00649aba;
L_00649597:; BB(0x00649597);
    /* 00649597: mov edx, dword ptr [0xa8f4e4] */ r_edx = R32((u32)(0xa8f4e4u));
    /* 0064959d: mov eax, 5 */ r_eax = 0x5u;
    /* 006495a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006495a4: jne 0x649aba */ if (!fZ) goto L_00649aba;
L_006495aa:; BB(0x006495aa);
    /* 006495aa: mov dword ptr [0xa8f4cc], 0xffffffff */ W32((u32)(0xa8f4ccu), 0xffffffffu);
L_006495b4:; BB(0x006495b4);
    /* 006495b4: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006495b7: je 0x649760 */ if (fZ) goto L_00649760;
L_006495bd:; BB(0x006495bd);
    /* 006495bd: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006495c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006495c4: mov dword ptr [0xa8f4b4], eax */ W32((u32)(0xa8f4b4u), r_eax);
    /* 006495c9: mov dword ptr [0xa8f49c], eax */ W32((u32)(0xa8f49cu), r_eax);
    /* 006495ce: mov dword ptr [0xa8f4b8], eax */ W32((u32)(0xa8f4b8u), r_eax);
    /* 006495d3: mov dword ptr [0xa8f4a0], eax */ W32((u32)(0xa8f4a0u), r_eax);
    /* 006495d8: mov dword ptr [0xa8f4bc], eax */ W32((u32)(0xa8f4bcu), r_eax);
    /* 006495dd: mov dword ptr [0xa8f4a4], eax */ W32((u32)(0xa8f4a4u), r_eax);
    /* 006495e2: mov dword ptr [0xa8f4c0], eax */ W32((u32)(0xa8f4c0u), r_eax);
    /* 006495e7: mov dword ptr [0xa8f4a8], eax */ W32((u32)(0xa8f4a8u), r_eax);
    /* 006495ec: mov dword ptr [0xa8f4c4], eax */ W32((u32)(0xa8f4c4u), r_eax);
    /* 006495f1: mov dword ptr [0xa8f4ac], eax */ W32((u32)(0xa8f4acu), r_eax);
    /* 006495f6: mov dword ptr [0xa8f4c8], eax */ W32((u32)(0xa8f4c8u), r_eax);
    /* 006495fb: mov dword ptr [0xa8f4b0], eax */ W32((u32)(0xa8f4b0u), r_eax);
    /* 00649600: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00649603: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x649608u); f_008581c5();
    /* 00649608: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064960b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064960e: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00649611: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649613: je 0x649ab0 */ if (fZ) goto L_00649ab0;
L_00649619:; BB(0x00649619);
    /* 00649619: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00649620: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00649627: mov edx, dword ptr [0xa8f4cc] */ r_edx = R32((u32)(0xa8f4ccu));
    /* 0064962d: mov ecx, eax */ r_ecx = r_eax;
    /* 0064962f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649632: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649634: push dword ptr [edx*4 + 0x9c72b8] */ { u32 v = R32((u32)(r_edx*4+0x9c72b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064963b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064963d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x649642u); f_005b7a84();
    /* 00649642: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00649649:; BB(0x00649649);
    /* 00649649: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00649650: mov esi, dword ptr [0xa8f4cc] */ r_esi = R32((u32)(0xa8f4ccu));
    /* 00649656: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00649659: mov ecx, dword ptr [eax + 0x434] */ r_ecx = R32((u32)(r_eax+0x434u));
    /* 0064965f: mov dword ptr [esi*4 + 0xa8f4b4], eax */ W32((u32)(r_esi*4+0xa8f4b4u), r_eax);
    /* 00649666: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00649668: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064966a: jle 0x6496c4 */ if ((fZ||fS!=fO)) goto L_006496c4;
L_0064966c:; BB(0x0064966c);
    /* 0064966c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064966f: jl 0x649a1d */ if ((fS!=fO)) goto L_00649a1d;
L_00649675:; BB(0x00649675);
    /* 00649675: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
L_0064967b:; BB(0x0064967b);
    /* 0064967b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0064967e: mov edi, dword ptr [edx + eax*8 + 0xc] */ r_edi = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 00649682: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649684: jne 0x6496bd */ if (!fZ) goto L_006496bd;
L_00649686:; BB(0x00649686);
    /* 00649686: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 00649689: lea ebx, [ebx + ebx + 2] */ r_ebx = (u32)(r_ebx+r_ebx+0x2u);
    /* 0064968d: mov edi, dword ptr [edx + ebx*8 + 0xc] */ r_edi = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 00649691: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649693: jne 0x6496bd */ if (!fZ) goto L_006496bd;
L_00649695:; BB(0x00649695);
    /* 00649695: lea ebx, [eax + eax + 2] */ r_ebx = (u32)(r_eax+r_eax+0x2u);
    /* 00649699: mov edi, dword ptr [edx + ebx*8 + 0xc] */ r_edi = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 0064969d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064969f: jne 0x6496bd */ if (!fZ) goto L_006496bd;
L_006496a1:; BB(0x006496a1);
    /* 006496a1: lea ebx, [eax + eax + 4] */ r_ebx = (u32)(r_eax+r_eax+0x4u);
    /* 006496a5: mov edi, dword ptr [edx + ebx*8 + 0xc] */ r_edi = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 006496a9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006496ab: jne 0x6496bd */ if (!fZ) goto L_006496bd;
L_006496ad:; BB(0x006496ad);
    /* 006496ad: lea ebx, [eax + eax + 6] */ r_ebx = (u32)(r_eax+r_eax+0x6u);
    /* 006496b1: mov edi, dword ptr [edx + ebx*8 + 0xc] */ r_edi = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 006496b5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006496b7: je 0x6498d0 */ if (fZ) goto L_006498d0;
L_006496bd:; BB(0x006496bd);
    /* 006496bd: mov dword ptr [esi*4 + 0xa8f49c], edi */ W32((u32)(r_esi*4+0xa8f49cu), r_edi);
L_006496c4:; BB(0x006496c4);
    /* 006496c4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006496c6: je 0x6496e0 */ if (fZ) goto L_006496e0;
L_006496c8:; BB(0x006496c8);
    /* 006496c8: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006496cb: je 0x649a28 */ if (fZ) goto L_00649a28;
L_006496d1:; BB(0x006496d1);
    /* 006496d1: mov dword ptr [0xa8f498], 0 */ W32((u32)(0xa8f498u), 0x0u);
    /* 006496db: jmp 0x649760 */ goto L_00649760;
L_006496e0:; BB(0x006496e0);
    /* 006496e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006496e3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 006496e9: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 006496ec: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006496ef: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006496f1: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006496f8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6496fdu); f_008581c5();
    /* 006496fd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00649700: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649703: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00649706: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649708: je 0x649a13 */ if (fZ) goto L_00649a13;
L_0064970e:; BB(0x0064970e);
    /* 0064970e: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00649715: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0064971c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064971f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00649722: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00649724: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649725: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x64972au); f_0052d584();
    /* 0064972a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00649731:; BB(0x00649731);
    /* 00649731: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00649734: mov dword ptr [0xa8f498], eax */ W32((u32)(0xa8f498u), r_eax);
    /* 00649739: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00649740: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00649743: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00649746: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00649749: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 0064974c: movzx ebx, word ptr [esi + 0xc] */ r_ebx = (u32)R16((u32)(r_esi+0xcu));
    /* 00649750: and ebx, 0xefff */ {  u32 a = r_ebx; u32 b = 0xefffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00649756: mov word ptr [esi + 0xc], bx */ W16((u32)(r_esi+0xcu), (u16)r_ebx);
    /* 0064975a: mov esi, dword ptr [0xa8f4cc] */ r_esi = R32((u32)(0xa8f4ccu));
L_00649760:; BB(0x00649760);
    /* 00649760: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649763: je 0x64999f */ if (fZ) goto L_0064999f;
L_00649769:; BB(0x00649769);
    /* 00649769: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064976c: je 0x64992b */ if (fZ) goto L_0064992b;
L_00649772:; BB(0x00649772);
    /* 00649772: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00649779: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064977e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x649783u); f_008581c5();
    /* 00649783: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00649786: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649789: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0064978c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064978e: je 0x649921 */ if (fZ) goto L_00649921;
L_00649794:; BB(0x00649794);
    /* 00649794: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0064979b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006497a2: mov ecx, eax */ r_ecx = r_eax;
    /* 006497a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006497a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006497a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006497a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006497a9: push 0x9c7270 */ { u32 v = 0x9c7270u; r_esp -= 4; W32(r_esp, v); }
    /* 006497ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006497b0: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6497b5u); f_005b7a84();
    /* 006497b5: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006497bc:; BB(0x006497bc);
    /* 006497bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006497c3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006497c6: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 006497cc: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006497cf: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 006497d2: mov dword ptr [0xa8f490], edx */ W32((u32)(0xa8f490u), r_edx);
    /* 006497d8: mov dword ptr [0xa8f48c], ebx */ W32((u32)(0xa8f48cu), r_ebx);
L_006497de:; BB(0x006497de);
    /* 006497de: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006497e5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006497e7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6497ecu); f_008581c5();
    /* 006497ec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006497ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006497f2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006497f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006497f7: je 0x649917 */ if (fZ) goto L_00649917;
L_006497fd:; BB(0x006497fd);
    /* 006497fd: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00649804: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0064980b: mov ecx, eax */ r_ecx = r_eax;
    /* 0064980d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064980f: push dword ptr [0xa8f490] */ { u32 v = R32((u32)(0xa8f490u)); r_esp -= 4; W32(r_esp, v); }
    /* 00649815: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x64981au); f_0052d584();
    /* 0064981a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00649821:; BB(0x00649821);
    /* 00649821: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00649824: mov eax, dword ptr [0xa8f490] */ r_eax = R32((u32)(0xa8f490u));
    /* 00649829: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064982c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0064982f: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00649832: mov dword ptr [0xa8f484], ebx */ W32((u32)(0xa8f484u), r_ebx);
    /* 00649838: movzx ecx, word ptr [esi + 0xc] */ r_ecx = (u32)R16((u32)(r_esi+0xcu));
    /* 0064983c: and ecx, 0xdfff */ {  u32 a = r_ecx; u32 b = 0xdfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00649842: mov word ptr [esi + 0xc], cx */ W16((u32)(r_esi+0xcu), (u16)r_ecx);
    /* 00649846: mov ecx, dword ptr [edi + 0x434] */ r_ecx = R32((u32)(r_edi+0x434u));
    /* 0064984c: mov dword ptr [0xa8f494], edi */ W32((u32)(0xa8f494u), r_edi);
    /* 00649852: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00649854: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649856: jle 0x6498ad */ if ((fZ||fS!=fO)) goto L_006498ad;
L_00649858:; BB(0x00649858);
    /* 00649858: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064985b: jl 0x64990d */ if ((fS!=fO)) goto L_0064990d;
L_00649861:; BB(0x00649861);
    /* 00649861: mov eax, edi */ r_eax = r_edi;
    /* 00649863: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
L_00649869:; BB(0x00649869);
    /* 00649869: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0064986c: mov esi, dword ptr [edx + eax*8 + 0xc] */ r_esi = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 00649870: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649872: jne 0x6498a7 */ if (!fZ) goto L_006498a7;
L_00649874:; BB(0x00649874);
    /* 00649874: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 00649877: lea ebx, [ebx + ebx + 2] */ r_ebx = (u32)(r_ebx+r_ebx+0x2u);
    /* 0064987b: mov esi, dword ptr [edx + ebx*8 + 0xc] */ r_esi = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 0064987f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649881: jne 0x6498a7 */ if (!fZ) goto L_006498a7;
L_00649883:; BB(0x00649883);
    /* 00649883: lea ebx, [eax + eax + 2] */ r_ebx = (u32)(r_eax+r_eax+0x2u);
    /* 00649887: mov esi, dword ptr [edx + ebx*8 + 0xc] */ r_esi = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 0064988b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064988d: jne 0x6498a7 */ if (!fZ) goto L_006498a7;
L_0064988f:; BB(0x0064988f);
    /* 0064988f: lea ebx, [eax + eax + 4] */ r_ebx = (u32)(r_eax+r_eax+0x4u);
    /* 00649893: mov esi, dword ptr [edx + ebx*8 + 0xc] */ r_esi = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 00649897: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649899: jne 0x6498a7 */ if (!fZ) goto L_006498a7;
L_0064989b:; BB(0x0064989b);
    /* 0064989b: lea ebx, [eax + eax + 6] */ r_ebx = (u32)(r_eax+r_eax+0x6u);
    /* 0064989f: mov esi, dword ptr [edx + ebx*8 + 0xc] */ r_esi = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 006498a3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006498a5: je 0x6498c4 */ if (fZ) goto L_006498c4;
L_006498a7:; BB(0x006498a7);
    /* 006498a7: mov dword ptr [0xa8f488], esi */ W32((u32)(0xa8f488u), r_esi);
L_006498ad:; BB(0x006498ad);
    /* 006498ad: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006498b0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006498b3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006498b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006498b9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006498c0: mov esp, ebp */ r_esp = r_ebp;
    /* 006498c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006498c3: ret  */ FN_RET(0x006494dc); r_esp += 4; return;
L_006498c4:; BB(0x006498c4);
    /* 006498c4: lea ebx, [eax + 4] */ r_ebx = (u32)(r_eax+0x4u);
    /* 006498c7: lea eax, [ecx - 6] */ r_eax = (u32)(r_ecx+0xfffffffau);
    /* 006498ca: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006498cc: jle 0x649869 */ if ((fZ||fS!=fO)) goto L_00649869;
L_006498ce:; BB(0x006498ce);
    /* 006498ce: jmp 0x6498f9 */ goto L_006498f9;
L_006498d0:; BB(0x006498d0);
    /* 006498d0: lea ebx, [eax + 4] */ r_ebx = (u32)(r_eax+0x4u);
    /* 006498d3: lea eax, [ecx - 6] */ r_eax = (u32)(r_ecx+0xfffffffau);
    /* 006498d6: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006498d8: jle 0x64967b */ if ((fZ||fS!=fO)) goto L_0064967b;
L_006498de:; BB(0x006498de);
    /* 006498de: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006498e1: mov edi, dword ptr [edx + eax*8 + 0xc] */ r_edi = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 006498e5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006498e7: jne 0x6496bd */ if (!fZ) goto L_006496bd;
L_006498ed:; BB(0x006498ed);
    /* 006498ed: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006498f0: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006498f2: jl 0x6498de */ if ((fS!=fO)) goto L_006498de;
L_006498f4:; BB(0x006498f4);
    /* 006498f4: jmp 0x6496c4 */ goto L_006496c4;
L_006498f9:; BB(0x006498f9);
    /* 006498f9: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006498fc: mov esi, dword ptr [edx + eax*8 + 0xc] */ r_esi = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 00649900: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649902: jne 0x6498a7 */ if (!fZ) goto L_006498a7;
L_00649904:; BB(0x00649904);
    /* 00649904: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00649907: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00649909: jl 0x6498f9 */ if ((fS!=fO)) goto L_006498f9;
L_0064990b:; BB(0x0064990b);
    /* 0064990b: jmp 0x6498ad */ goto L_006498ad;
L_0064990d:; BB(0x0064990d);
    /* 0064990d: mov eax, edi */ r_eax = r_edi;
    /* 0064990f: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00649915: jmp 0x6498f9 */ goto L_006498f9;
L_00649917:; BB(0x00649917);
    /* 00649917: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649919: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064991c: jmp 0x649821 */ goto L_00649821;
L_00649921:; BB(0x00649921);
    /* 00649921: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649923: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00649926: jmp 0x6497bc */ goto L_006497bc;
L_0064992b:; BB(0x0064992b);
    /* 0064992b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00649932: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00649937: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64993cu); f_008581c5();
    /* 0064993c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064993f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649942: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00649945: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649947: je 0x649998 */ if (fZ) goto L_00649998;
L_00649949:; BB(0x00649949);
    /* 00649949: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00649950: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00649957: mov ecx, eax */ r_ecx = r_eax;
    /* 00649959: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064995b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064995c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064995d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064995e: push 0x9c72a8 */ { u32 v = 0x9c72a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00649963: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00649965: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64996au); f_005b7a84();
    /* 0064996a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00649971:; BB(0x00649971);
    /* 00649971: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00649978: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064997b: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00649981: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00649984: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 00649987: mov dword ptr [0xa8f490], edx */ W32((u32)(0xa8f490u), r_edx);
    /* 0064998d: mov dword ptr [0xa8f48c], ebx */ W32((u32)(0xa8f48cu), r_ebx);
    /* 00649993: jmp 0x6497de */ goto L_006497de;
L_00649998:; BB(0x00649998);
    /* 00649998: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064999a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064999d: jmp 0x649971 */ goto L_00649971;
L_0064999f:; BB(0x0064999f);
    /* 0064999f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006499a6: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006499ab: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6499b0u); f_008581c5();
    /* 006499b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006499b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006499b6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006499b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006499bb: je 0x649a0c */ if (fZ) goto L_00649a0c;
L_006499bd:; BB(0x006499bd);
    /* 006499bd: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006499c4: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006499cb: mov ecx, eax */ r_ecx = r_eax;
    /* 006499cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006499cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006499d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006499d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006499d2: push 0x9c728c */ { u32 v = 0x9c728cu; r_esp -= 4; W32(r_esp, v); }
    /* 006499d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006499d9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6499deu); f_005b7a84();
    /* 006499de: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006499e5:; BB(0x006499e5);
    /* 006499e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006499ec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006499ef: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 006499f5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006499f8: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 006499fb: mov dword ptr [0xa8f490], edx */ W32((u32)(0xa8f490u), r_edx);
    /* 00649a01: mov dword ptr [0xa8f48c], ebx */ W32((u32)(0xa8f48cu), r_ebx);
    /* 00649a07: jmp 0x6497de */ goto L_006497de;
L_00649a0c:; BB(0x00649a0c);
    /* 00649a0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649a0e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00649a11: jmp 0x6499e5 */ goto L_006499e5;
L_00649a13:; BB(0x00649a13);
    /* 00649a13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649a15: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00649a18: jmp 0x649731 */ goto L_00649731;
L_00649a1d:; BB(0x00649a1d);
    /* 00649a1d: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00649a23: jmp 0x6498de */ goto L_006498de;
L_00649a28:; BB(0x00649a28);
    /* 00649a28: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00649a2b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00649a31: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00649a34: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00649a37: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00649a39: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00649a40: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x649a45u); f_008581c5();
    /* 00649a45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00649a48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649a4b: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00649a4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649a50: je 0x649aa9 */ if (fZ) goto L_00649aa9;
L_00649a52:; BB(0x00649a52);
    /* 00649a52: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00649a59: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00649a60: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00649a63: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00649a66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649a69: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x649a6eu); f_0052d584();
    /* 00649a6e: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00649a75:; BB(0x00649a75);
    /* 00649a75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00649a78: mov dword ptr [0xa8f498], eax */ W32((u32)(0xa8f498u), r_eax);
    /* 00649a7d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00649a84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00649a87: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00649a8a: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00649a8d: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00649a90: movzx ebx, word ptr [esi + 0xc] */ r_ebx = (u32)R16((u32)(r_esi+0xcu));
    /* 00649a94: and ebx, 0xefff */ {  u32 a = r_ebx; u32 b = 0xefffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00649a9a: mov word ptr [esi + 0xc], bx */ W16((u32)(r_esi+0xcu), (u16)r_ebx);
    /* 00649a9e: mov esi, dword ptr [0xa8f4cc] */ r_esi = R32((u32)(0xa8f4ccu));
    /* 00649aa4: jmp 0x649760 */ goto L_00649760;
L_00649aa9:; BB(0x00649aa9);
    /* 00649aa9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649aab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00649aae: jmp 0x649a75 */ goto L_00649a75;
L_00649ab0:; BB(0x00649ab0);
    /* 00649ab0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649ab2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00649ab5: jmp 0x649649 */ goto L_00649649;
L_00649aba:; BB(0x00649aba);
    /* 00649aba: mov dword ptr [0xa8f4cc], eax */ W32((u32)(0xa8f4ccu), r_eax);
    /* 00649abf: mov esi, eax */ r_esi = r_eax;
    /* 00649ac1: jmp 0x6495b4 */ goto L_006495b4;
L_00649ac6:; BB(0x00649ac6);
    /* 00649ac6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00649ac8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649aca: mov dword ptr [0xa8f4d0], eax */ W32((u32)(0xa8f4d0u), r_eax);
    /* 00649acf: mov dword ptr [0xa8f4d4], eax */ W32((u32)(0xa8f4d4u), r_eax);
    /* 00649ad4: mov dword ptr [0xa8f4d8], eax */ W32((u32)(0xa8f4d8u), r_eax);
    /* 00649ad9: mov dword ptr [0xa8f4dc], eax */ W32((u32)(0xa8f4dcu), r_eax);
    /* 00649ade: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00649ae0: mov dword ptr [0xa8f4e0], eax */ W32((u32)(0xa8f4e0u), r_eax);
    /* 00649ae5: mov dword ptr [0xa8f4e4], eax */ W32((u32)(0xa8f4e4u), r_eax);
    /* 00649aea: mov eax, dword ptr [0xaab210] */ r_eax = R32((u32)(0xaab210u));
L_00649aef:; BB(0x00649aef);
    /* 00649aef: cmp eax, dword ptr [edx*4 + 0x935ca4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0x935ca4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649af6: je 0x649b05 */ if (fZ) goto L_00649b05;
L_00649af8:; BB(0x00649af8);
    /* 00649af8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00649afb: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00649afe: jl 0x649aef */ if ((fS!=fO)) goto L_00649aef;
L_00649b00:; BB(0x00649b00);
    /* 00649b00: jmp 0x64953c */ goto L_0064953c;
L_00649b05:; BB(0x00649b05);
    /* 00649b05: mov dword ptr [edx*4 + 0xa8f4d0], 1 */ W32((u32)(r_edx*4+0xa8f4d0u), 0x1u);
    /* 00649b10: mov ecx, dword ptr [0xa8f4d0] */ r_ecx = R32((u32)(0xa8f4d0u));
    /* 00649b16: jmp 0x64953c */ goto L_0064953c;
}

void f_00649b1c(void) /* sub_649B1C */
{
    FN_ENTER(0x00649b1c);
    /* 00649b1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00649b1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00649b1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00649b21: call 0x649b40 */ r_esp -= 4; W32(r_esp, 0x649b26u); f_00649b40();
    /* 00649b26: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00649b2a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649b2c: jne 0x649b32 */ if (!fZ) goto L_00649b32;
L_00649b2e:; BB(0x00649b2e);
    /* 00649b2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00649b2f: ret 4 */ FN_RET(0x00649b1c); r_esp += 8; return;
L_00649b32:; BB(0x00649b32);
    /* 00649b32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00649b33: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x649b38u); f_005c2f74();
    /* 00649b38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00649b39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00649b3a: ret 4 */ FN_RET(0x00649b1c); r_esp += 8; return;
}

void f_00649b40(void) /* sub_649B40 */
{
    FN_ENTER(0x00649b40);
    /* 00649b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00649b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00649b43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00649b45: push 0x8e612c */ { u32 v = 0x8e612cu; r_esp -= 4; W32(r_esp, v); }
    /* 00649b4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00649b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649b51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00649b58: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00649b5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00649b5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00649b61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00649b64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00649b67: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00649b6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00649b6d: mov dword ptr [ecx], 0xb301e0 */ W32((u32)(r_ecx), 0xb301e0u);
    /* 00649b73: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00649b7a: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x649b7fu); f_0066873c();
    /* 00649b7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00649b82: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00649b89: mov esp, ebp */ r_esp = r_ebp;
    /* 00649b8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00649b8c: ret  */ FN_RET(0x00649b40); r_esp += 4; return;
}

void f_00649b90(void) /* sub_649B90 */
{
    FN_ENTER(0x00649b90);
    /* 00649b90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00649b91: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00649b93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00649b95: call 0x649bb4 */ r_esp -= 4; W32(r_esp, 0x649b9au); f_00649bb4();
    /* 00649b9a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00649b9e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649ba0: jne 0x649ba6 */ if (!fZ) goto L_00649ba6;
L_00649ba2:; BB(0x00649ba2);
    /* 00649ba2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00649ba3: ret 4 */ FN_RET(0x00649b90); r_esp += 8; return;
L_00649ba6:; BB(0x00649ba6);
    /* 00649ba6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00649ba7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x649bacu); f_005c2f74();
    /* 00649bac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00649bad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00649bae: ret 4 */ FN_RET(0x00649b90); r_esp += 8; return;
}

void f_00649bb4(void) /* sub_649BB4 */
{
    FN_ENTER(0x00649bb4);
    /* 00649bb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00649bb5: mov ebp, esp */ r_ebp = r_esp;
    /* 00649bb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00649bb9: push 0x8e6148 */ { u32 v = 0x8e6148u; r_esp -= 4; W32(r_esp, v); }
    /* 00649bbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00649bc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649bc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00649bcc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00649bcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00649bd2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00649bd5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00649bd8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00649bdb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00649bde: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00649be1: mov dword ptr [ecx], 0xb30240 */ W32((u32)(r_ecx), 0xb30240u);
    /* 00649be7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00649bee: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x649bf3u); f_0066873c();
    /* 00649bf3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00649bf6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00649bfd: mov esp, ebp */ r_esp = r_ebp;
    /* 00649bff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00649c00: ret  */ FN_RET(0x00649bb4); r_esp += 4; return;
}

void f_00649c04(void) /* sub_649C04 */
{
    FN_ENTER(0x00649c04);
    /* 00649c04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00649c05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00649c07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00649c09: call 0x649c28 */ r_esp -= 4; W32(r_esp, 0x649c0eu); f_00649c28();
    /* 00649c0e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00649c12: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649c14: jne 0x649c1a */ if (!fZ) goto L_00649c1a;
L_00649c16:; BB(0x00649c16);
    /* 00649c16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00649c17: ret 4 */ FN_RET(0x00649c04); r_esp += 8; return;
L_00649c1a:; BB(0x00649c1a);
    /* 00649c1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00649c1b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x649c20u); f_005c2f74();
    /* 00649c20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00649c21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00649c22: ret 4 */ FN_RET(0x00649c04); r_esp += 8; return;
}

void f_00649c28(void) /* sub_649C28 */
{
    FN_ENTER(0x00649c28);
    /* 00649c28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00649c29: mov ebp, esp */ r_ebp = r_esp;
    /* 00649c2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00649c2d: push 0x8e6164 */ { u32 v = 0x8e6164u; r_esp -= 4; W32(r_esp, v); }
    /* 00649c32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00649c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649c39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00649c40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00649c43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00649c46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00649c49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00649c4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00649c4f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00649c52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00649c55: mov dword ptr [ecx], 0xb302a0 */ W32((u32)(r_ecx), 0xb302a0u);
    /* 00649c5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00649c62: call 0x668560 */ r_esp -= 4; W32(r_esp, 0x649c67u); f_00668560();
    /* 00649c67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00649c6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00649c71: mov esp, ebp */ r_esp = r_ebp;
    /* 00649c73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00649c74: ret  */ FN_RET(0x00649c28); r_esp += 4; return;
}

void f_00649c78(void) /* sub_649C78 */
{
    FN_ENTER(0x00649c78);
    /* 00649c78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00649c79: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00649c7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00649c7d: call 0x649c9c */ r_esp -= 4; W32(r_esp, 0x649c82u); f_00649c9c();
    /* 00649c82: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00649c86: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649c88: jne 0x649c8e */ if (!fZ) goto L_00649c8e;
L_00649c8a:; BB(0x00649c8a);
    /* 00649c8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00649c8b: ret 4 */ FN_RET(0x00649c78); r_esp += 8; return;
L_00649c8e:; BB(0x00649c8e);
    /* 00649c8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00649c8f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x649c94u); f_005c2f74();
    /* 00649c94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00649c95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00649c96: ret 4 */ FN_RET(0x00649c78); r_esp += 8; return;
}

void f_00649c9c(void) /* sub_649C9C */
{
    FN_ENTER(0x00649c9c);
    /* 00649c9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00649c9d: mov ebp, esp */ r_ebp = r_esp;
    /* 00649c9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00649ca1: push 0x8e6180 */ { u32 v = 0x8e6180u; r_esp -= 4; W32(r_esp, v); }
    /* 00649ca6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00649cac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649cad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00649cb4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00649cb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00649cba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00649cbd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00649cc0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00649cc3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00649cc6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00649cc9: mov dword ptr [ecx], 0xb30300 */ W32((u32)(r_ecx), 0xb30300u);
    /* 00649ccf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00649cd6: call 0x668560 */ r_esp -= 4; W32(r_esp, 0x649cdbu); f_00668560();
    /* 00649cdb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00649cde: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00649ce5: mov esp, ebp */ r_esp = r_ebp;
    /* 00649ce7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00649ce8: ret  */ FN_RET(0x00649c9c); r_esp += 4; return;
}

void f_00649cec(void) /* sub_649CEC */
{
    FN_ENTER(0x00649cec);
    /* 00649cec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00649ced: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00649cee: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00649cf1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00649cf3: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00649cf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649cfb: je 0x649d05 */ if (fZ) goto L_00649d05;
L_00649cfd:; BB(0x00649cfd);
    /* 00649cfd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00649d00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00649d01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00649d02: ret 4 */ FN_RET(0x00649cec); r_esp += 8; return;
L_00649d05:; BB(0x00649d05);
    /* 00649d05: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00649d0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649d0c: je 0x649d1a */ if (fZ) goto L_00649d1a;
L_00649d0e:; BB(0x00649d0e);
    /* 00649d0e: mov eax, dword ptr [0xa8f500] */ r_eax = R32((u32)(0xa8f500u));
    /* 00649d13: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
    /* 00649d18: jmp 0x649d25 */ goto L_00649d25;
L_00649d1a:; BB(0x00649d1a);
    /* 00649d1a: mov eax, dword ptr [ebx + 0x154] */ r_eax = R32((u32)(r_ebx+0x154u));
    /* 00649d20: call 0x64a428 */ r_esp -= 4; W32(r_esp, 0x649d25u); f_0064a428();
L_00649d25:; BB(0x00649d25);
    /* 00649d25: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 00649d2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649d2c: je 0x64a025 */ if (fZ) goto L_0064a025;
L_00649d32:; BB(0x00649d32);
    /* 00649d32: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649d35: jne 0x649f0a */ if (!fZ) goto L_00649f0a;
L_00649d3b:; BB(0x00649d3b);
    /* 00649d3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649d3d: mov dword ptr [ebx + 0x114], eax */ W32((u32)(r_ebx+0x114u), r_eax);
    /* 00649d43: mov dword ptr [ebx + 0x118], eax */ W32((u32)(r_ebx+0x118u), r_eax);
    /* 00649d49: mov dword ptr [ebx + 0x11c], eax */ W32((u32)(r_ebx+0x11cu), r_eax);
    /* 00649d4f: mov dword ptr [ebx + 0x120], eax */ W32((u32)(r_ebx+0x120u), r_eax);
    /* 00649d55: mov dword ptr [ebx + 0x124], eax */ W32((u32)(r_ebx+0x124u), r_eax);
    /* 00649d5b: mov dword ptr [ebx + 0x128], eax */ W32((u32)(r_ebx+0x128u), r_eax);
    /* 00649d61: mov dword ptr [ebx + 0x12c], eax */ W32((u32)(r_ebx+0x12cu), r_eax);
    /* 00649d67: mov dword ptr [ebx + 0x130], eax */ W32((u32)(r_ebx+0x130u), r_eax);
    /* 00649d6d: mov dword ptr [ebx + 0x134], eax */ W32((u32)(r_ebx+0x134u), r_eax);
    /* 00649d73: mov dword ptr [ebx + 0x138], eax */ W32((u32)(r_ebx+0x138u), r_eax);
    /* 00649d79: mov dword ptr [ebx + 0x13c], eax */ W32((u32)(r_ebx+0x13cu), r_eax);
    /* 00649d7f: mov dword ptr [ebx + 0x140], eax */ W32((u32)(r_ebx+0x140u), r_eax);
    /* 00649d85: mov dword ptr [ebx + 0x144], eax */ W32((u32)(r_ebx+0x144u), r_eax);
    /* 00649d8b: mov dword ptr [ebx + 0x148], eax */ W32((u32)(r_ebx+0x148u), r_eax);
    /* 00649d91: mov dword ptr [ebx + 0x14c], eax */ W32((u32)(r_ebx+0x14cu), r_eax);
    /* 00649d97: mov dword ptr [ebx + 0x150], eax */ W32((u32)(r_ebx+0x150u), r_eax);
    /* 00649d9d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00649d9f: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 00649da4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649da6: je 0x649db9 */ if (fZ) goto L_00649db9;
L_00649da8:; BB(0x00649da8);
    /* 00649da8: mov dword ptr [ebx + 0x110], 0 */ W32((u32)(r_ebx+0x110u), 0x0u);
    /* 00649db2: mov esi, 1 */ r_esi = 0x1u;
    /* 00649db7: jmp 0x649dc3 */ goto L_00649dc3;
L_00649db9:; BB(0x00649db9);
    /* 00649db9: mov dword ptr [ebx + 0x110], 0 */ W32((u32)(r_ebx+0x110u), 0x0u);
L_00649dc3:; BB(0x00649dc3);
    /* 00649dc3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649dc5: je 0x649dd5 */ if (fZ) goto L_00649dd5;
L_00649dc7:; BB(0x00649dc7);
    /* 00649dc7: mov dword ptr [ebx + esi*4 + 0x110], 1 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x1u);
    /* 00649dd2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649dd5:; BB(0x00649dd5);
    /* 00649dd5: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649dd7: je 0x649de7 */ if (fZ) goto L_00649de7;
L_00649dd9:; BB(0x00649dd9);
    /* 00649dd9: mov dword ptr [ebx + esi*4 + 0x110], 2 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x2u);
    /* 00649de4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649de7:; BB(0x00649de7);
    /* 00649de7: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649de9: je 0x649df9 */ if (fZ) goto L_00649df9;
L_00649deb:; BB(0x00649deb);
    /* 00649deb: mov dword ptr [ebx + esi*4 + 0x110], 3 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x3u);
    /* 00649df6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649df9:; BB(0x00649df9);
    /* 00649df9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649dfb: je 0x649e0b */ if (fZ) goto L_00649e0b;
L_00649dfd:; BB(0x00649dfd);
    /* 00649dfd: mov dword ptr [ebx + esi*4 + 0x110], 4 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x4u);
    /* 00649e08: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649e0b:; BB(0x00649e0b);
    /* 00649e0b: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649e0d: je 0x649e1d */ if (fZ) goto L_00649e1d;
L_00649e0f:; BB(0x00649e0f);
    /* 00649e0f: mov dword ptr [ebx + esi*4 + 0x110], 5 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x5u);
    /* 00649e1a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649e1d:; BB(0x00649e1d);
    /* 00649e1d: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649e1f: je 0x649e2f */ if (fZ) goto L_00649e2f;
L_00649e21:; BB(0x00649e21);
    /* 00649e21: mov dword ptr [ebx + esi*4 + 0x110], 6 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x6u);
    /* 00649e2c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649e2f:; BB(0x00649e2f);
    /* 00649e2f: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649e34: je 0x649e44 */ if (fZ) goto L_00649e44;
L_00649e36:; BB(0x00649e36);
    /* 00649e36: mov dword ptr [ebx + esi*4 + 0x110], 7 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x7u);
    /* 00649e41: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649e44:; BB(0x00649e44);
    /* 00649e44: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649e49: je 0x649e59 */ if (fZ) goto L_00649e59;
L_00649e4b:; BB(0x00649e4b);
    /* 00649e4b: mov dword ptr [ebx + esi*4 + 0x110], 8 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x8u);
    /* 00649e56: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649e59:; BB(0x00649e59);
    /* 00649e59: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649e5e: je 0x649e6e */ if (fZ) goto L_00649e6e;
L_00649e60:; BB(0x00649e60);
    /* 00649e60: mov dword ptr [ebx + esi*4 + 0x110], 9 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x9u);
    /* 00649e6b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649e6e:; BB(0x00649e6e);
    /* 00649e6e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649e73: je 0x649e83 */ if (fZ) goto L_00649e83;
L_00649e75:; BB(0x00649e75);
    /* 00649e75: mov dword ptr [ebx + esi*4 + 0x110], 0xa */ W32((u32)(r_ebx+r_esi*4+0x110u), 0xau);
    /* 00649e80: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649e83:; BB(0x00649e83);
    /* 00649e83: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649e88: je 0x649e98 */ if (fZ) goto L_00649e98;
L_00649e8a:; BB(0x00649e8a);
    /* 00649e8a: mov dword ptr [ebx + esi*4 + 0x110], 0xb */ W32((u32)(r_ebx+r_esi*4+0x110u), 0xbu);
    /* 00649e95: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649e98:; BB(0x00649e98);
    /* 00649e98: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649e9d: je 0x649ead */ if (fZ) goto L_00649ead;
L_00649e9f:; BB(0x00649e9f);
    /* 00649e9f: mov dword ptr [ebx + esi*4 + 0x110], 0xc */ W32((u32)(r_ebx+r_esi*4+0x110u), 0xcu);
    /* 00649eaa: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649ead:; BB(0x00649ead);
    /* 00649ead: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649eb2: je 0x649ec2 */ if (fZ) goto L_00649ec2;
L_00649eb4:; BB(0x00649eb4);
    /* 00649eb4: mov dword ptr [ebx + esi*4 + 0x110], 0xd */ W32((u32)(r_ebx+r_esi*4+0x110u), 0xdu);
    /* 00649ebf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649ec2:; BB(0x00649ec2);
    /* 00649ec2: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649ec7: je 0x649ed7 */ if (fZ) goto L_00649ed7;
L_00649ec9:; BB(0x00649ec9);
    /* 00649ec9: mov dword ptr [ebx + esi*4 + 0x110], 0xe */ W32((u32)(r_ebx+r_esi*4+0x110u), 0xeu);
    /* 00649ed4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649ed7:; BB(0x00649ed7);
    /* 00649ed7: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649edc: je 0x649eec */ if (fZ) goto L_00649eec;
L_00649ede:; BB(0x00649ede);
    /* 00649ede: mov dword ptr [ebx + esi*4 + 0x110], 0xf */ W32((u32)(r_ebx+r_esi*4+0x110u), 0xfu);
    /* 00649ee9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649eec:; BB(0x00649eec);
    /* 00649eec: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649ef1: je 0x64a1eb */ if (fZ) goto L_0064a1eb;
L_00649ef7:; BB(0x00649ef7);
    /* 00649ef7: mov dword ptr [ebx + esi*4 + 0x110], 0x10 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x10u);
    /* 00649f02: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00649f05: jmp 0x64a1eb */ goto L_0064a1eb;
L_00649f0a:; BB(0x00649f0a);
    /* 00649f0a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649f0d: jne 0x64a3c7 */ if (!fZ) goto L_0064a3c7;
L_00649f13:; BB(0x00649f13);
    /* 00649f13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00649f15: mov dword ptr [ebx + 0x114], eax */ W32((u32)(r_ebx+0x114u), r_eax);
    /* 00649f1b: mov dword ptr [ebx + 0x118], eax */ W32((u32)(r_ebx+0x118u), r_eax);
    /* 00649f21: mov dword ptr [ebx + 0x11c], eax */ W32((u32)(r_ebx+0x11cu), r_eax);
    /* 00649f27: mov dword ptr [ebx + 0x120], eax */ W32((u32)(r_ebx+0x120u), r_eax);
    /* 00649f2d: mov dword ptr [ebx + 0x124], eax */ W32((u32)(r_ebx+0x124u), r_eax);
    /* 00649f33: mov dword ptr [ebx + 0x128], eax */ W32((u32)(r_ebx+0x128u), r_eax);
    /* 00649f39: mov dword ptr [ebx + 0x12c], eax */ W32((u32)(r_ebx+0x12cu), r_eax);
    /* 00649f3f: mov dword ptr [ebx + 0x130], eax */ W32((u32)(r_ebx+0x130u), r_eax);
    /* 00649f45: mov dword ptr [ebx + 0x134], eax */ W32((u32)(r_ebx+0x134u), r_eax);
    /* 00649f4b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00649f4d: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 00649f52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649f54: je 0x649f67 */ if (fZ) goto L_00649f67;
L_00649f56:; BB(0x00649f56);
    /* 00649f56: mov dword ptr [ebx + 0x110], 0 */ W32((u32)(r_ebx+0x110u), 0x0u);
    /* 00649f60: mov esi, 1 */ r_esi = 0x1u;
    /* 00649f65: jmp 0x649f71 */ goto L_00649f71;
L_00649f67:; BB(0x00649f67);
    /* 00649f67: mov dword ptr [ebx + 0x110], 0 */ W32((u32)(r_ebx+0x110u), 0x0u);
L_00649f71:; BB(0x00649f71);
    /* 00649f71: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649f73: je 0x649f83 */ if (fZ) goto L_00649f83;
L_00649f75:; BB(0x00649f75);
    /* 00649f75: mov dword ptr [ebx + esi*4 + 0x110], 1 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x1u);
    /* 00649f80: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649f83:; BB(0x00649f83);
    /* 00649f83: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649f85: je 0x649f95 */ if (fZ) goto L_00649f95;
L_00649f87:; BB(0x00649f87);
    /* 00649f87: mov dword ptr [ebx + esi*4 + 0x110], 2 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x2u);
    /* 00649f92: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649f95:; BB(0x00649f95);
    /* 00649f95: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649f97: je 0x649fa7 */ if (fZ) goto L_00649fa7;
L_00649f99:; BB(0x00649f99);
    /* 00649f99: mov dword ptr [ebx + esi*4 + 0x110], 3 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x3u);
    /* 00649fa4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649fa7:; BB(0x00649fa7);
    /* 00649fa7: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649fa9: je 0x649fb9 */ if (fZ) goto L_00649fb9;
L_00649fab:; BB(0x00649fab);
    /* 00649fab: mov dword ptr [ebx + esi*4 + 0x110], 4 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x4u);
    /* 00649fb6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649fb9:; BB(0x00649fb9);
    /* 00649fb9: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649fbb: je 0x649fcb */ if (fZ) goto L_00649fcb;
L_00649fbd:; BB(0x00649fbd);
    /* 00649fbd: mov dword ptr [ebx + esi*4 + 0x110], 5 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x5u);
    /* 00649fc8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649fcb:; BB(0x00649fcb);
    /* 00649fcb: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00649fcd: je 0x649fdd */ if (fZ) goto L_00649fdd;
L_00649fcf:; BB(0x00649fcf);
    /* 00649fcf: mov dword ptr [ebx + esi*4 + 0x110], 6 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x6u);
    /* 00649fda: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649fdd:; BB(0x00649fdd);
    /* 00649fdd: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649fe2: je 0x649ff2 */ if (fZ) goto L_00649ff2;
L_00649fe4:; BB(0x00649fe4);
    /* 00649fe4: mov dword ptr [ebx + esi*4 + 0x110], 7 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x7u);
    /* 00649fef: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00649ff2:; BB(0x00649ff2);
    /* 00649ff2: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649ff7: je 0x64a007 */ if (fZ) goto L_0064a007;
L_00649ff9:; BB(0x00649ff9);
    /* 00649ff9: mov dword ptr [ebx + esi*4 + 0x110], 8 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x8u);
    /* 0064a004: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a007:; BB(0x0064a007);
    /* 0064a007: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a00c: je 0x64a1eb */ if (fZ) goto L_0064a1eb;
L_0064a012:; BB(0x0064a012);
    /* 0064a012: mov dword ptr [ebx + esi*4 + 0x110], 9 */ W32((u32)(r_ebx+r_esi*4+0x110u), 0x9u);
    /* 0064a01d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064a020: jmp 0x64a1eb */ goto L_0064a1eb;
L_0064a025:; BB(0x0064a025);
    /* 0064a025: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064a027: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0064a02d: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 0064a033: mov dword ptr [ebx + 0xd8], eax */ W32((u32)(r_ebx+0xd8u), r_eax);
    /* 0064a039: mov dword ptr [ebx + 0xdc], eax */ W32((u32)(r_ebx+0xdcu), r_eax);
    /* 0064a03f: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 0064a045: mov dword ptr [ebx + 0xe4], eax */ W32((u32)(r_ebx+0xe4u), r_eax);
    /* 0064a04b: mov dword ptr [ebx + 0xe8], eax */ W32((u32)(r_ebx+0xe8u), r_eax);
    /* 0064a051: mov dword ptr [ebx + 0xec], eax */ W32((u32)(r_ebx+0xecu), r_eax);
    /* 0064a057: mov dword ptr [ebx + 0xf0], eax */ W32((u32)(r_ebx+0xf0u), r_eax);
    /* 0064a05d: mov dword ptr [ebx + 0xf4], eax */ W32((u32)(r_ebx+0xf4u), r_eax);
    /* 0064a063: mov dword ptr [ebx + 0xf8], eax */ W32((u32)(r_ebx+0xf8u), r_eax);
    /* 0064a069: mov dword ptr [ebx + 0xfc], eax */ W32((u32)(r_ebx+0xfcu), r_eax);
    /* 0064a06f: mov dword ptr [ebx + 0x100], eax */ W32((u32)(r_ebx+0x100u), r_eax);
    /* 0064a075: mov dword ptr [ebx + 0x104], eax */ W32((u32)(r_ebx+0x104u), r_eax);
    /* 0064a07b: mov dword ptr [ebx + 0x108], eax */ W32((u32)(r_ebx+0x108u), r_eax);
    /* 0064a081: mov dword ptr [ebx + 0x10c], eax */ W32((u32)(r_ebx+0x10cu), r_eax);
    /* 0064a087: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0064a089: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a08e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a090: je 0x64a0a3 */ if (fZ) goto L_0064a0a3;
L_0064a092:; BB(0x0064a092);
    /* 0064a092: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
    /* 0064a09c: mov esi, 1 */ r_esi = 0x1u;
    /* 0064a0a1: jmp 0x64a0ad */ goto L_0064a0ad;
L_0064a0a3:; BB(0x0064a0a3);
    /* 0064a0a3: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
L_0064a0ad:; BB(0x0064a0ad);
    /* 0064a0ad: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a0af: je 0x64a0bf */ if (fZ) goto L_0064a0bf;
L_0064a0b1:; BB(0x0064a0b1);
    /* 0064a0b1: mov dword ptr [ebx + esi*4 + 0xcc], 1 */ W32((u32)(r_ebx+r_esi*4+0xccu), 0x1u);
    /* 0064a0bc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a0bf:; BB(0x0064a0bf);
    /* 0064a0bf: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a0c1: je 0x64a0d1 */ if (fZ) goto L_0064a0d1;
L_0064a0c3:; BB(0x0064a0c3);
    /* 0064a0c3: mov dword ptr [ebx + esi*4 + 0xcc], 2 */ W32((u32)(r_ebx+r_esi*4+0xccu), 0x2u);
    /* 0064a0ce: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a0d1:; BB(0x0064a0d1);
    /* 0064a0d1: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a0d3: je 0x64a0e3 */ if (fZ) goto L_0064a0e3;
L_0064a0d5:; BB(0x0064a0d5);
    /* 0064a0d5: mov dword ptr [ebx + esi*4 + 0xcc], 3 */ W32((u32)(r_ebx+r_esi*4+0xccu), 0x3u);
    /* 0064a0e0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a0e3:; BB(0x0064a0e3);
    /* 0064a0e3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a0e5: je 0x64a0f5 */ if (fZ) goto L_0064a0f5;
L_0064a0e7:; BB(0x0064a0e7);
    /* 0064a0e7: mov dword ptr [ebx + esi*4 + 0xcc], 4 */ W32((u32)(r_ebx+r_esi*4+0xccu), 0x4u);
    /* 0064a0f2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a0f5:; BB(0x0064a0f5);
    /* 0064a0f5: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a0f7: je 0x64a107 */ if (fZ) goto L_0064a107;
L_0064a0f9:; BB(0x0064a0f9);
    /* 0064a0f9: mov dword ptr [ebx + esi*4 + 0xcc], 5 */ W32((u32)(r_ebx+r_esi*4+0xccu), 0x5u);
    /* 0064a104: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a107:; BB(0x0064a107);
    /* 0064a107: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a109: je 0x64a119 */ if (fZ) goto L_0064a119;
L_0064a10b:; BB(0x0064a10b);
    /* 0064a10b: mov dword ptr [ebx + esi*4 + 0xcc], 6 */ W32((u32)(r_ebx+r_esi*4+0xccu), 0x6u);
    /* 0064a116: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a119:; BB(0x0064a119);
    /* 0064a119: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a11e: je 0x64a12e */ if (fZ) goto L_0064a12e;
L_0064a120:; BB(0x0064a120);
    /* 0064a120: mov dword ptr [ebx + esi*4 + 0xcc], 7 */ W32((u32)(r_ebx+r_esi*4+0xccu), 0x7u);
    /* 0064a12b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a12e:; BB(0x0064a12e);
    /* 0064a12e: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a133: je 0x64a143 */ if (fZ) goto L_0064a143;
L_0064a135:; BB(0x0064a135);
    /* 0064a135: mov dword ptr [ebx + esi*4 + 0xcc], 8 */ W32((u32)(r_ebx+r_esi*4+0xccu), 0x8u);
    /* 0064a140: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a143:; BB(0x0064a143);
    /* 0064a143: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a148: je 0x64a158 */ if (fZ) goto L_0064a158;
L_0064a14a:; BB(0x0064a14a);
    /* 0064a14a: mov dword ptr [ebx + esi*4 + 0xcc], 9 */ W32((u32)(r_ebx+r_esi*4+0xccu), 0x9u);
    /* 0064a155: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a158:; BB(0x0064a158);
    /* 0064a158: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a15d: je 0x64a16d */ if (fZ) goto L_0064a16d;
L_0064a15f:; BB(0x0064a15f);
    /* 0064a15f: mov dword ptr [ebx + esi*4 + 0xcc], 0xa */ W32((u32)(r_ebx+r_esi*4+0xccu), 0xau);
    /* 0064a16a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a16d:; BB(0x0064a16d);
    /* 0064a16d: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a172: je 0x64a182 */ if (fZ) goto L_0064a182;
L_0064a174:; BB(0x0064a174);
    /* 0064a174: mov dword ptr [ebx + esi*4 + 0xcc], 0xb */ W32((u32)(r_ebx+r_esi*4+0xccu), 0xbu);
    /* 0064a17f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a182:; BB(0x0064a182);
    /* 0064a182: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a187: je 0x64a197 */ if (fZ) goto L_0064a197;
L_0064a189:; BB(0x0064a189);
    /* 0064a189: mov dword ptr [ebx + esi*4 + 0xcc], 0xc */ W32((u32)(r_ebx+r_esi*4+0xccu), 0xcu);
    /* 0064a194: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a197:; BB(0x0064a197);
    /* 0064a197: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a19c: je 0x64a1ac */ if (fZ) goto L_0064a1ac;
L_0064a19e:; BB(0x0064a19e);
    /* 0064a19e: mov dword ptr [ebx + esi*4 + 0xcc], 0xd */ W32((u32)(r_ebx+r_esi*4+0xccu), 0xdu);
    /* 0064a1a9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a1ac:; BB(0x0064a1ac);
    /* 0064a1ac: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a1b1: je 0x64a1c1 */ if (fZ) goto L_0064a1c1;
L_0064a1b3:; BB(0x0064a1b3);
    /* 0064a1b3: mov dword ptr [ebx + esi*4 + 0xcc], 0xe */ W32((u32)(r_ebx+r_esi*4+0xccu), 0xeu);
    /* 0064a1be: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a1c1:; BB(0x0064a1c1);
    /* 0064a1c1: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a1c6: je 0x64a1d6 */ if (fZ) goto L_0064a1d6;
L_0064a1c8:; BB(0x0064a1c8);
    /* 0064a1c8: mov dword ptr [ebx + esi*4 + 0xcc], 0xf */ W32((u32)(r_ebx+r_esi*4+0xccu), 0xfu);
    /* 0064a1d3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a1d6:; BB(0x0064a1d6);
    /* 0064a1d6: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a1db: je 0x64a1eb */ if (fZ) goto L_0064a1eb;
L_0064a1dd:; BB(0x0064a1dd);
    /* 0064a1dd: mov dword ptr [ebx + esi*4 + 0xcc], 0x10 */ W32((u32)(r_ebx+r_esi*4+0xccu), 0x10u);
    /* 0064a1e8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a1eb:; BB(0x0064a1eb);
    /* 0064a1eb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064a1ed: jle 0x64a3c7 */ if ((fZ||fS!=fO)) goto L_0064a3c7;
L_0064a1f3:; BB(0x0064a1f3);
    /* 0064a1f3: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a1f5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64a1fau); f_0073ec50();
    /* 0064a1fa: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0064a1fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a1ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a201: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x64a206u); f_007354fc();
    /* 0064a206: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a209: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 0064a20f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a211: je 0x64a3bf */ if (fZ) goto L_0064a3bf;
L_0064a217:; BB(0x0064a217);
    /* 0064a217: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 0064a21d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a21f: je 0x64a2f6 */ if (fZ) goto L_0064a2f6;
L_0064a225:; BB(0x0064a225);
    /* 0064a225: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a228: je 0x64a296 */ if (fZ) goto L_0064a296;
L_0064a22a:; BB(0x0064a22a);
    /* 0064a22a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a22d: jne 0x64a354 */ if (!fZ) goto L_0064a354;
L_0064a233:; BB(0x0064a233);
    /* 0064a233: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0064a237: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a239: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0064a23b: mov edi, ecx */ r_edi = r_ecx;
L_0064a23d:; BB(0x0064a23d);
    /* 0064a23d: mov ecx, edi */ r_ecx = r_edi;
    /* 0064a23f: mov eax, 1 */ r_eax = 0x1u;
    /* 0064a244: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0064a246: test dword ptr [0xa8f4fc], eax */ {  u32 a = R32((u32)(0xa8f4fcu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a24c: je 0x64a27f */ if (fZ) goto L_0064a27f;
L_0064a24e:; BB(0x0064a24e);
    /* 0064a24e: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x64a253u); f_0078b1c4();
    /* 0064a253: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a256: je 0x64a3dc */ if (fZ) goto L_0064a3dc;
L_0064a25c:; BB(0x0064a25c);
    /* 0064a25c: push dword ptr [edi*4 + 0x936430] */ { u32 v = R32((u32)(r_edi*4+0x936430u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064a263: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0064a265: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x64a26au); f_00792fe8();
    /* 0064a26a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a26d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a26e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a270: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0064a276: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a277: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x64a27cu); f_00735c90();
L_0064a27c:; BB(0x0064a27c);
    /* 0064a27c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a27f:; BB(0x0064a27f);
    /* 0064a27f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064a282: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064a285: jb 0x64a23d */ if (fC) goto L_0064a23d;
L_0064a287:; BB(0x0064a287);
    /* 0064a287: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0064a28b: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0064a291: jmp 0x64a354 */ goto L_0064a354;
L_0064a296:; BB(0x0064a296);
    /* 0064a296: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0064a29a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a29c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0064a29e: mov edi, ecx */ r_edi = r_ecx;
L_0064a2a0:; BB(0x0064a2a0);
    /* 0064a2a0: mov ecx, edi */ r_ecx = r_edi;
    /* 0064a2a2: mov eax, 1 */ r_eax = 0x1u;
    /* 0064a2a7: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0064a2a9: test dword ptr [0xa8f4fc], eax */ {  u32 a = R32((u32)(0xa8f4fcu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a2af: je 0x64a2e2 */ if (fZ) goto L_0064a2e2;
L_0064a2b1:; BB(0x0064a2b1);
    /* 0064a2b1: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x64a2b6u); f_0078b1c4();
    /* 0064a2b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a2b9: je 0x64a3f4 */ if (fZ) goto L_0064a3f4;
L_0064a2bf:; BB(0x0064a2bf);
    /* 0064a2bf: push dword ptr [edi*4 + 0x936340] */ { u32 v = R32((u32)(r_edi*4+0x936340u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064a2c6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0064a2c8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x64a2cdu); f_00792fe8();
    /* 0064a2cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a2d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a2d1: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a2d3: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0064a2d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a2da: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x64a2dfu); f_00735c90();
L_0064a2df:; BB(0x0064a2df);
    /* 0064a2df: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a2e2:; BB(0x0064a2e2);
    /* 0064a2e2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064a2e5: cmp edi, 0x11 */ {  u32 a = r_edi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064a2e8: jl 0x64a2a0 */ if ((fS!=fO)) goto L_0064a2a0;
L_0064a2ea:; BB(0x0064a2ea);
    /* 0064a2ea: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0064a2ee: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0064a2f4: jmp 0x64a354 */ goto L_0064a354;
L_0064a2f6:; BB(0x0064a2f6);
    /* 0064a2f6: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0064a2fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a2fc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0064a2fe: mov edi, ecx */ r_edi = r_ecx;
L_0064a300:; BB(0x0064a300);
    /* 0064a300: mov ecx, edi */ r_ecx = r_edi;
    /* 0064a302: mov eax, 1 */ r_eax = 0x1u;
    /* 0064a307: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0064a309: test dword ptr [0xa8f4fc], eax */ {  u32 a = R32((u32)(0xa8f4fcu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a30f: je 0x64a342 */ if (fZ) goto L_0064a342;
L_0064a311:; BB(0x0064a311);
    /* 0064a311: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x64a316u); f_0078b1c4();
    /* 0064a316: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a319: je 0x64a40c */ if (fZ) goto L_0064a40c;
L_0064a31f:; BB(0x0064a31f);
    /* 0064a31f: push dword ptr [edi*4 + 0x936300] */ { u32 v = R32((u32)(r_edi*4+0x936300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064a326: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0064a328: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x64a32du); f_00792fe8();
    /* 0064a32d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a330: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a331: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a333: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0064a339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a33a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x64a33fu); f_00735c90();
L_0064a33f:; BB(0x0064a33f);
    /* 0064a33f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0064a342:; BB(0x0064a342);
    /* 0064a342: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064a345: cmp edi, 0x11 */ {  u32 a = r_edi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064a348: jl 0x64a300 */ if ((fS!=fO)) goto L_0064a300;
L_0064a34a:; BB(0x0064a34a);
    /* 0064a34a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0064a34e: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
L_0064a354:; BB(0x0064a354);
    /* 0064a354: push 0x43900000 */ { u32 v = 0x43900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a359: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0064a360: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0064a366: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0064a36d: mov esi, dword ptr [ebx + 0xb0] */ r_esi = R32((u32)(r_ebx+0xb0u));
    /* 0064a373: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0064a37a: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a37f: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 0064a386: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0064a38c: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x64a391u); f_00736138();
    /* 0064a391: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0064a397: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0064a39a: fcomp dword ptr [0x93642c] */ fx_compare(ST(0), R_F32((u32)(0x93642cu))); FPOP();
    /* 0064a3a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064a3a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064a3a3: jbe 0x64a3ba */ if ((fC||fZ)) goto L_0064a3ba;
L_0064a3a5:; BB(0x0064a3a5);
    /* 0064a3a5: push 0x43200000 */ { u32 v = 0x43200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a3aa: push 0x43900000 */ { u32 v = 0x43900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a3af: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x64a3b4u); f_007361d0();
    /* 0064a3b4: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
L_0064a3ba:; BB(0x0064a3ba);
    /* 0064a3ba: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x64a3bfu); f_00736458();
L_0064a3bf:; BB(0x0064a3bf);
    /* 0064a3bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a3c1: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x64a3c6u); f_00791748();
    /* 0064a3c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0064a3c7:; BB(0x0064a3c7);
    /* 0064a3c7: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x64a3ccu); f_00717d68();
    /* 0064a3cc: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0064a3d0: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0064a3d7: jmp 0x649cfd */ goto L_00649cfd;
L_0064a3dc:; BB(0x0064a3dc);
    /* 0064a3dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a3dd: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a3df: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0064a3e5: push 0xa48ba0 */ { u32 v = 0xa48ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a3ea: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x64a3efu); f_00735c90();
    /* 0064a3ef: jmp 0x64a27c */ goto L_0064a27c;
L_0064a3f4:; BB(0x0064a3f4);
    /* 0064a3f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a3f5: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a3f7: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0064a3fd: push 0xa48ba0 */ { u32 v = 0xa48ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a402: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x64a407u); f_00735c90();
    /* 0064a407: jmp 0x64a2df */ goto L_0064a2df;
L_0064a40c:; BB(0x0064a40c);
    /* 0064a40c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a40d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a40f: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0064a415: push 0xa48ba0 */ { u32 v = 0xa48ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a41a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x64a41fu); f_00735c90();
    /* 0064a41f: jmp 0x64a33f */ goto L_0064a33f;
}

