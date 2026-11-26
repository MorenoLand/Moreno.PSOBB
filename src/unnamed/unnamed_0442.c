#include "protos.h"

void f_00442074(void) /* sub_442074 */
{
    FN_ENTER(0x00442074);
    /* 00442074: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00442075: mov eax, dword ptr [0xa447bc] */ r_eax = R32((u32)(0xa447bcu));
    /* 0044207a: mov edx, 0x9a51b4 */ r_edx = 0x9a51b4u;
    /* 0044207f: mov dword ptr [0xa449cc], eax */ W32((u32)(0xa449ccu), r_eax);
    /* 00442084: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442085: mov dword ptr [0xa449c8], edx */ W32((u32)(0xa449c8u), r_edx);
    /* 0044208b: call 0x78eae0 */ r_esp -= 4; W32(r_esp, 0x442090u); f_0078eae0();
    /* 00442090: push dword ptr [0xa449c8] */ { u32 v = R32((u32)(0xa449c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00442096: push 0x8fe474 */ { u32 v = 0x8fe474u; r_esp -= 4; W32(r_esp, v); }
    /* 0044209b: call 0x800bc0 */ r_esp -= 4; W32(r_esp, 0x4420a0u); f_00800bc0();
    /* 004420a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004420a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004420a5: mov ebx, eax */ r_ebx = r_eax;
L_004420a7:; BB(0x004420a7);
    /* 004420a7: push dword ptr [ebx + 0x9a5230] */ { u32 v = R32((u32)(r_ebx+0x9a5230u)); r_esp -= 4; W32(r_esp, v); }
    /* 004420ad: mov ecx, dword ptr [0xa449cc] */ r_ecx = R32((u32)(0xa449ccu));
    /* 004420b3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4420b8u); f_005b8610();
    /* 004420b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004420ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004420bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004420bd: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x4420c2u); f_0066f3d4();
    /* 004420c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004420c5: mov dword ptr [ebx + 0xa449b4], eax */ W32((u32)(r_ebx+0xa449b4u), r_eax);
    /* 004420cb: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004420ce: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004420d1: jl 0x4420a7 */ if ((fS!=fO)) goto L_004420a7;
L_004420d3:; BB(0x004420d3);
    /* 004420d3: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004420d5: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4420dau); f_0077a684();
    /* 004420da: mov dword ptr [0xa449b0], eax */ W32((u32)(0xa449b0u), r_eax);
    /* 004420df: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004420e1: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4420e6u); f_0077a698();
    /* 004420e6: mov dword ptr [0xa449ac], eax */ W32((u32)(0xa449acu), r_eax);
    /* 004420eb: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004420ed: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4420f2u); f_0077a6b4();
    /* 004420f2: mov dword ptr [0xa449a8], eax */ W32((u32)(0xa449a8u), r_eax);
    /* 004420f7: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004420f9: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4420feu); f_0077a6cc();
    /* 004420fe: mov dword ptr [0xa449a4], eax */ W32((u32)(0xa449a4u), r_eax);
    /* 00442103: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00442106: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00442107: ret  */ FN_RET(0x00442074); r_esp += 4; return;
}

void f_00442108(void) /* sub_442108 */
{
    FN_ENTER(0x00442108);
    /* 00442108: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00442109: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044210c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044210e: movsx eax, word ptr [ebx + 0x394] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x394u));
    /* 00442115: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442118: mov dword ptr [ebx + 0x358], 0x9a51bc */ W32((u32)(r_ebx+0x358u), 0x9a51bcu);
    /* 00442122: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442124: jne 0x44212a */ if (!fZ) goto L_0044212a;
L_00442126:; BB(0x00442126);
    /* 00442126: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00442128: jmp 0x44212f */ goto L_0044212f;
L_0044212a:; BB(0x0044212a);
    /* 0044212a: mov edx, 1 */ r_edx = 0x1u;
L_0044212f:; BB(0x0044212f);
    /* 0044212f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00442134: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00442136: mov eax, dword ptr [0xa449a4] */ r_eax = R32((u32)(0xa449a4u));
    /* 0044213b: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0044213f: mov eax, dword ptr [0xa449b0] */ r_eax = R32((u32)(0xa449b0u));
    /* 00442144: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00442149: push dword ptr [0xa449a8] */ { u32 v = R32((u32)(0xa449a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044214f: push dword ptr [0xa449ac] */ { u32 v = R32((u32)(0xa449acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00442155: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442156: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
    /* 0044215a: call 0x770da4 */ r_esp -= 4; W32(r_esp, 0x44215fu); f_00770da4();
    /* 0044215f: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00442161: movsx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 00442168: movzx eax, word ptr [ebx + 0x2be] */ r_eax = (u32)R16((u32)(r_ebx+0x2beu));
    /* 0044216f: mov word ptr [ebx + 0x334], dx */ W16((u32)(r_ebx+0x334u), (u16)r_edx);
    /* 00442176: mov word ptr [ebx + 0x336], ax */ W16((u32)(r_ebx+0x336u), (u16)r_eax);
    /* 0044217d: mov word ptr [ebx + 0x346], dx */ W16((u32)(r_ebx+0x346u), (u16)r_edx);
    /* 00442184: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00442186: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x44218bu); f_00787550();
    /* 0044218b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044218d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x442192u); f_0078730c();
    /* 00442192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00442194: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x442199u); f_007b4f54();
    /* 00442199: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x44219eu); f_008587a5();
    /* 0044219e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004421a1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004421a4: fdiv dword ptr [0x8fe1dc] */ ST(0) = ST(0) / R_F32((u32)(0x8fe1dcu));
    /* 004421aa: fmul dword ptr [0x8fe1d8] */ ST(0) = ST(0) * R_F32((u32)(0x8fe1d8u));
    /* 004421b0: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004421b4: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004421b9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004421be: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004421c2: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004421c6: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004421ca: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004421ce: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004421d2: mov word ptr [ebx + 0x396], ax */ W16((u32)(r_ebx+0x396u), (u16)r_eax);
    /* 004421d9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4421deu); f_008587a5();
    /* 004421de: mov edx, dword ptr [ebx + 0x2e8] */ r_edx = R32((u32)(r_ebx+0x2e8u));
    /* 004421e4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004421e8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004421ec: fdiv dword ptr [0x8fe1dc] */ ST(0) = ST(0) / R_F32((u32)(0x8fe1dcu));
    /* 004421f2: fmul dword ptr [0x8fe1d4] */ ST(0) = ST(0) * R_F32((u32)(0x8fe1d4u));
    /* 004421f8: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004421fb: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004421ff: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00442204: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442209: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0044220d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00442211: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00442215: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00442219: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0044221d: mov word ptr [ebx + 0x398], ax */ W16((u32)(r_ebx+0x398u), (u16)r_eax);
    /* 00442224: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 0044222b: mov byte ptr [eax + 0xa4498c], 0 */ W8((u32)(r_eax+0xa4498cu), 0x0u);
    /* 00442232: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00442235: mov dword ptr [ebx + 0x2e8], edx */ W32((u32)(r_ebx+0x2e8u), r_edx);
    /* 0044223b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044223d: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442242: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00442245: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00442247: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x44224du); call_ind(t); }
    /* 0044224d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00442250: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00442251: ret  */ FN_RET(0x00442108); r_esp += 4; return;
}

void f_00442254(void) /* sub_442254 */
{
    FN_ENTER(0x00442254);
    /* 00442254: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00442255: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00442257: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00442259: call 0x442278 */ r_esp -= 4; W32(r_esp, 0x44225eu); f_00442278();
    /* 0044225e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00442262: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00442264: jne 0x44226a */ if (!fZ) goto L_0044226a;
L_00442266:; BB(0x00442266);
    /* 00442266: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00442267: ret 4 */ FN_RET(0x00442254); r_esp += 8; return;
L_0044226a:; BB(0x0044226a);
    /* 0044226a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044226b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x442270u); f_005c2f74();
    /* 00442270: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00442271: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00442272: ret 4 */ FN_RET(0x00442254); r_esp += 8; return;
}

void f_00442278(void) /* sub_442278 */
{
    FN_ENTER(0x00442278);
    /* 00442278: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00442279: mov ebp, esp */ r_ebp = r_esp;
    /* 0044227b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044227d: push 0x8ce648 */ { u32 v = 0x8ce648u; r_esp -= 4; W32(r_esp, v); }
    /* 00442282: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00442288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442289: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00442290: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00442293: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00442296: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00442299: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044229c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044229f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004422a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004422a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004422ac: mov dword ptr [ecx], 0xaf5ee0 */ W32((u32)(r_ecx), 0xaf5ee0u);
    /* 004422b2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4422b7u); f_007b9c8c();
    /* 004422b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004422be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004422c1: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x4422c6u); f_0052bf84();
    /* 004422c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004422c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004422d0: mov esp, ebp */ r_esp = r_ebp;
    /* 004422d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004422d3: ret  */ FN_RET(0x00442278); r_esp += 4; return;
}

void f_004422d4(void) /* sub_4422D4 */
{
    FN_ENTER(0x004422d4);
    /* 004422d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004422d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004422d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004422d9: push 0x8ce67e */ { u32 v = 0x8ce67eu; r_esp -= 4; W32(r_esp, v); }
    /* 004422de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004422e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004422e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004422ec: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004422ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004422f2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004422f5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004422f8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004422fb: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 004422fe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00442301: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00442305: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00442308: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044230b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044230c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044230f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00442312: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00442315: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00442318: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x44231du); f_0052c3fc();
    /* 0044231d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00442324: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00442327: mov dword ptr [eax], 0xaf5ee0 */ W32((u32)(r_eax), 0xaf5ee0u);
    /* 0044232d: lea esi, [eax + 0x3c8] */ r_esi = (u32)(r_eax+0x3c8u);
    /* 00442333: mov edi, 0xb */ r_edi = 0xbu;
    /* 00442338: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0044233a:; BB(0x0044233a);
    /* 0044233a: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0044233f: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 00442342: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00442344: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 00442348: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0044234b: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044234e: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00442351: jne 0x44233a */ if (!fZ) goto L_0044233a;
L_00442353:; BB(0x00442353);
    /* 00442353: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00442356: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442359: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0044235b: mov dword ptr [eax + 0x3c4], esi */ W32((u32)(r_eax+0x3c4u), r_esi);
    /* 00442361: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00442364: mov eax, dword ptr [0x9a52a0] */ r_eax = R32((u32)(0x9a52a0u));
    /* 00442369: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0044236c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044236f: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 00442373: mov word ptr [ecx + 0x2c], bx */ W16((u32)(r_ecx+0x2cu), (u16)r_ebx);
    /* 00442377: mov dword ptr [ecx + 0x80], esi */ W32((u32)(r_ecx+0x80u), r_esi);
    /* 0044237d: movzx edi, word ptr [eax + 0x28] */ r_edi = (u32)R16((u32)(r_eax+0x28u));
    /* 00442381: mov word ptr [ecx + 0x28], di */ W16((u32)(r_ecx+0x28u), (u16)r_edi);
    /* 00442385: movzx eax, word ptr [eax + 0x2a] */ r_eax = (u32)R16((u32)(r_eax+0x2au));
    /* 00442389: mov word ptr [ecx + 0x2a], ax */ W16((u32)(r_ecx+0x2au), (u16)r_eax);
    /* 0044238d: call 0x443ef0 */ r_esp -= 4; W32(r_esp, 0x442392u); f_00443ef0();
    /* 00442392: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00442395: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00442398: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044239a: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0044239d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044239f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004423a1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004423a3: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004423a5: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 004423a8: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 004423ab: fmul dword ptr [0x8fe574] */ ST(0) = ST(0) * R_F32((u32)(0x8fe574u));
    /* 004423b1: fdiv dword ptr [0x8fe570] */ ST(0) = ST(0) / R_F32((u32)(0x8fe570u));
    /* 004423b7: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 004423ba: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 004423be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004423c3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004423c6: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004423c9: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 004423cc: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 004423cf: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 004423d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004423d4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4423d9u); f_0082ddd8();
    /* 004423d9: fld dword ptr [0x8fe56c] */ FPUSH(R_F32((u32)(0x8fe56cu)));
    /* 004423df: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004423e1: fadd dword ptr [0xa447b0] */ ST(0) = ST(0) + R_F32((u32)(0xa447b0u));
    /* 004423e7: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004423ea: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 004423ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004423ef: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4423f4u); f_0082dcbc();
    /* 004423f4: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004423f7: fld dword ptr [0x8fe56c] */ FPUSH(R_F32((u32)(0x8fe56cu)));
    /* 004423fd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004423ff: fadd dword ptr [0xa447b8] */ ST(0) = ST(0) + R_F32((u32)(0xa447b8u));
    /* 00442405: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 00442408: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 0044240f: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00442411: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00442413: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0044241a: add ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00442420: mov dword ptr [eax + 0x60], ebx */ W32((u32)(r_eax+0x60u), r_ebx);
    /* 00442423: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x442428u); f_005caba4();
    /* 00442428: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044242b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044242e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00442431: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442433: je 0x44247b */ if (fZ) goto L_0044247b;
L_00442435:; BB(0x00442435);
    /* 00442435: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0044243c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00442443: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00442446: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00442449: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044244a: call 0x44b84c */ r_esp -= 4; W32(r_esp, 0x44244fu); f_0044b84c();
    /* 0044244f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00442456:; BB(0x00442456);
    /* 00442456: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00442459: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044245c: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044245f: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00442462: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00442465: mov dword ptr [eax + 0x3c0], edx */ W32((u32)(r_eax+0x3c0u), r_edx);
    /* 0044246b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044246e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00442475: mov esp, ebp */ r_esp = r_ebp;
    /* 00442477: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00442478: ret 0x10 */ FN_RET(0x004422d4); r_esp += 20; return;
L_0044247b:; BB(0x0044247b);
    /* 0044247b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044247d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00442480: jmp 0x442456 */ goto L_00442456;
}

void f_004422e0(void)
{
    FN_ENTER(0x004422e0);
    /* 004422e0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004422e2: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004422e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004422e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004422ec: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004422ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004422f2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004422f5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004422f8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004422fb: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 004422fe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00442301: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00442305: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00442308: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044230b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044230c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044230f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00442312: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00442315: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00442318: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x44231du); f_0052c3fc();
    /* 0044231d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00442324: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00442327: mov dword ptr [eax], 0xaf5ee0 */ W32((u32)(r_eax), 0xaf5ee0u);
    /* 0044232d: lea esi, [eax + 0x3c8] */ r_esi = (u32)(r_eax+0x3c8u);
    /* 00442333: mov edi, 0xb */ r_edi = 0xbu;
    /* 00442338: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0044233a:; BB(0x0044233a);
    /* 0044233a: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0044233f: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 00442342: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00442344: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 00442348: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0044234b: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044234e: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00442351: jne 0x44233a */ if (!fZ) goto L_0044233a;
L_00442353:; BB(0x00442353);
    /* 00442353: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00442356: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442359: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0044235b: mov dword ptr [eax + 0x3c4], esi */ W32((u32)(r_eax+0x3c4u), r_esi);
    /* 00442361: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00442364: mov eax, dword ptr [0x9a52a0] */ r_eax = R32((u32)(0x9a52a0u));
    /* 00442369: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0044236c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044236f: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 00442373: mov word ptr [ecx + 0x2c], bx */ W16((u32)(r_ecx+0x2cu), (u16)r_ebx);
    /* 00442377: mov dword ptr [ecx + 0x80], esi */ W32((u32)(r_ecx+0x80u), r_esi);
    /* 0044237d: movzx edi, word ptr [eax + 0x28] */ r_edi = (u32)R16((u32)(r_eax+0x28u));
    /* 00442381: mov word ptr [ecx + 0x28], di */ W16((u32)(r_ecx+0x28u), (u16)r_edi);
    /* 00442385: movzx eax, word ptr [eax + 0x2a] */ r_eax = (u32)R16((u32)(r_eax+0x2au));
    /* 00442389: mov word ptr [ecx + 0x2a], ax */ W16((u32)(r_ecx+0x2au), (u16)r_eax);
    /* 0044238d: call 0x443ef0 */ r_esp -= 4; W32(r_esp, 0x442392u); f_00443ef0();
    /* 00442392: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00442395: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00442398: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044239a: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0044239d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044239f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004423a1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004423a3: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004423a5: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 004423a8: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 004423ab: fmul dword ptr [0x8fe574] */ ST(0) = ST(0) * R_F32((u32)(0x8fe574u));
    /* 004423b1: fdiv dword ptr [0x8fe570] */ ST(0) = ST(0) / R_F32((u32)(0x8fe570u));
    /* 004423b7: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 004423ba: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 004423be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004423c3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004423c6: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004423c9: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 004423cc: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 004423cf: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 004423d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004423d4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4423d9u); f_0082ddd8();
    /* 004423d9: fld dword ptr [0x8fe56c] */ FPUSH(R_F32((u32)(0x8fe56cu)));
    /* 004423df: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004423e1: fadd dword ptr [0xa447b0] */ ST(0) = ST(0) + R_F32((u32)(0xa447b0u));
    /* 004423e7: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004423ea: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 004423ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004423ef: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4423f4u); f_0082dcbc();
    /* 004423f4: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004423f7: fld dword ptr [0x8fe56c] */ FPUSH(R_F32((u32)(0x8fe56cu)));
    /* 004423fd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004423ff: fadd dword ptr [0xa447b8] */ ST(0) = ST(0) + R_F32((u32)(0xa447b8u));
    /* 00442405: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 00442408: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 0044240f: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00442411: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00442413: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0044241a: add ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00442420: mov dword ptr [eax + 0x60], ebx */ W32((u32)(r_eax+0x60u), r_ebx);
    /* 00442423: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x442428u); f_005caba4();
    /* 00442428: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044242b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044242e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00442431: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442433: je 0x44247b */ if (fZ) goto L_0044247b;
L_00442435:; BB(0x00442435);
    /* 00442435: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0044243c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00442443: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00442446: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00442449: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044244a: call 0x44b84c */ r_esp -= 4; W32(r_esp, 0x44244fu); f_0044b84c();
    /* 0044244f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00442456:; BB(0x00442456);
    /* 00442456: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00442459: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044245c: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044245f: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00442462: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00442465: mov dword ptr [eax + 0x3c0], edx */ W32((u32)(r_eax+0x3c0u), r_edx);
    /* 0044246b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044246e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00442475: mov esp, ebp */ r_esp = r_ebp;
    /* 00442477: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00442478: ret 0x10 */ FN_RET(0x004422e0); r_esp += 20; return;
L_0044247b:; BB(0x0044247b);
    /* 0044247b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044247d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00442480: jmp 0x442456 */ goto L_00442456;
}

void f_00442484(void) /* sub_442484 */
{
    FN_ENTER(0x00442484);
    /* 00442484: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00442485: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00442488: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044248a: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0044248f: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00442491: jne 0x442554 */ if (!fZ) goto L_00442554;
L_00442497:; BB(0x00442497);
    /* 00442497: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0044249a: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044249f: je 0x4424a6 */ if (fZ) goto L_004424a6;
L_004424a1:; BB(0x004424a1);
    /* 004424a1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004424a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004424a5: ret  */ FN_RET(0x00442484); r_esp += 4; return;
L_004424a6:; BB(0x004424a6);
    /* 004424a6: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004424ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004424ad: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004424b0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004424b5: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x4424b8u); call_ind(t); }
    /* 004424b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004424ba: je 0x442554 */ if (fZ) goto L_00442554;
L_004424c0:; BB(0x004424c0);
    /* 004424c0: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 004424c3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4424c8u); f_00829cc8();
    /* 004424c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004424c9: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x4424ceu); f_00794548();
    /* 004424ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004424cf: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x4424d4u); f_00578b38();
    /* 004424d4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4424d9u); f_0082d7b0();
    /* 004424d9: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4424deu); f_004f7c84();
    /* 004424de: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004424e1: je 0x4425b8 */ if (fZ) goto L_004425b8;
L_004424e7:; BB(0x004424e7);
    /* 004424e7: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004424ea: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004424ed: fadd dword ptr [ebp + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x394u));
    /* 004424f3: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 004424f6: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004424f9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004424fd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00442500: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00442502: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00442506: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x44250bu); f_00830b74();
    /* 0044250b: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0044250e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00442510: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x442515u); f_0082d8bc();
    /* 00442515: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0044251b: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442520: jne 0x4425a7 */ if (!fZ) goto L_004425a7;
L_00442526:; BB(0x00442526);
    /* 00442526: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044252b: jne 0x442559 */ if (!fZ) goto L_00442559;
L_0044252d:; BB(0x0044252d);
    /* 0044252d: mov eax, dword ptr [0xa449e0] */ r_eax = R32((u32)(0xa449e0u));
    /* 00442532: mov byte ptr [eax + 6], 0 */ W8((u32)(r_eax+0x6u), 0x0u);
    /* 00442536: mov byte ptr [eax + 5], 0xcc */ W8((u32)(r_eax+0x5u), 0xccu);
    /* 0044253a: mov byte ptr [eax + 4], 0xff */ W8((u32)(r_eax+0x4u), 0xffu);
L_0044253e:; BB(0x0044253e);
    /* 0044253e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00442540: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x442545u); f_007aa668();
L_00442545:; BB(0x00442545);
    /* 00442545: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44254au); f_0082da80();
    /* 0044254a: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x44254fu); f_00794750();
    /* 0044254f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x442554u); f_0082dab0();
L_00442554:; BB(0x00442554);
    /* 00442554: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00442557: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00442558: ret  */ FN_RET(0x00442484); r_esp += 4; return;
L_00442559:; BB(0x00442559);
    /* 00442559: mov ecx, dword ptr [ebp + 0x3bc] */ r_ecx = R32((u32)(r_ebp+0x3bcu));
    /* 0044255f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x442564u); f_0082dcbc();
    /* 00442564: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00442565: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00442568: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x44256du); f_0082e900();
    /* 0044256d: mov edx, dword ptr [0xa449e0] */ r_edx = R32((u32)(0xa449e0u));
    /* 00442573: fld dword ptr [0x8fe560] */ FPUSH(R_F32((u32)(0x8fe560u)));
    /* 00442579: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0044257b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0044257e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00442582: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442587: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0044258b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0044258f: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00442593: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00442596: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0044259a: mov byte ptr [edx + 6], al */ W8((u32)(r_edx+0x6u), (u8)r_eax);
    /* 0044259d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044259f: mov byte ptr [edx + 5], al */ W8((u32)(r_edx+0x5u), (u8)r_eax);
    /* 004425a2: mov byte ptr [edx + 4], al */ W8((u32)(r_edx+0x4u), (u8)r_eax);
    /* 004425a5: jmp 0x44253e */ goto L_0044253e;
L_004425a7:; BB(0x004425a7);
    /* 004425a7: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 004425aa: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004425ad: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004425b0: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x4425b5u); f_0082e6b0();
    /* 004425b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004425b6: jmp 0x442545 */ goto L_00442545;
L_004425b8:; BB(0x004425b8);
    /* 004425b8: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004425bb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4425c0u); f_0082d838();
    /* 004425c0: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 004425c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004425c5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4425cau); f_0082d8bc();
    /* 004425ca: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004425cd: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4425d2u); f_0082e1e8();
    /* 004425d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004425d3: jmp 0x442545 */ goto L_00442545;
}

void f_004425d8(void) /* sub_4425D8 */
{
    FN_ENTER(0x004425d8);
    /* 004425d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004425d9: mov esi, ecx */ r_esi = r_ecx;
    /* 004425db: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4425e0u); f_004f7c84();
    /* 004425e0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004425e3: je 0x4426f6 */ if (fZ) goto L_004426f6;
L_004425e9:; BB(0x004425e9);
    /* 004425e9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004425eb: mov ecx, esi */ r_ecx = r_esi;
    /* 004425ed: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x4425f3u); call_ind(t); }
    /* 004425f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004425f5: je 0x442606 */ if (fZ) goto L_00442606;
L_004425f7:; BB(0x004425f7);
    /* 004425f7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004425f9: mov ecx, esi */ r_ecx = r_esi;
    /* 004425fb: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x442601u); call_ind(t); }
    /* 00442601: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00442604: jmp 0x442631 */ goto L_00442631;
L_00442606:; BB(0x00442606);
    /* 00442606: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00442608: mov ecx, esi */ r_ecx = r_esi;
    /* 0044260a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x442610u); call_ind(t); }
    /* 00442610: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442612: je 0x44262e */ if (fZ) goto L_0044262e;
L_00442614:; BB(0x00442614);
    /* 00442614: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00442617: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044261d: jne 0x442631 */ if (!fZ) goto L_00442631;
L_0044261f:; BB(0x0044261f);
    /* 0044261f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00442621: mov ecx, esi */ r_ecx = r_esi;
    /* 00442623: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x442629u); call_ind(t); }
    /* 00442629: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0044262c: jmp 0x442631 */ goto L_00442631;
L_0044262e:; BB(0x0044262e);
    /* 0044262e: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
L_00442631:; BB(0x00442631);
    /* 00442631: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442637: jne 0x4426f8 */ if (!fZ) goto L_004426f8;
L_0044263d:; BB(0x0044263d);
    /* 0044263d: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00442644: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0044264a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044264c: je 0x442681 */ if (fZ) goto L_00442681;
L_0044264e:; BB(0x0044264e);
    /* 0044264e: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00442654: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442657: je 0x442670 */ if (fZ) goto L_00442670;
L_00442659:; BB(0x00442659);
    /* 00442659: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 00442663: mov ecx, esi */ r_ecx = r_esi;
    /* 00442665: call 0x442730 */ r_esp -= 4; W32(r_esp, 0x44266au); f_00442730();
    /* 0044266a: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
L_00442670:; BB(0x00442670);
    /* 00442670: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 0044267a: mov word ptr [esi + 0x32e], dx */ W16((u32)(r_esi+0x32eu), (u16)r_edx);
L_00442681:; BB(0x00442681);
    /* 00442681: mov ecx, esi */ r_ecx = r_esi;
    /* 00442683: call 0x442730 */ r_esp -= 4; W32(r_esp, 0x442688u); f_00442730();
    /* 00442688: fld dword ptr [0x8fe558] */ FPUSH(R_F32((u32)(0x8fe558u)));
    /* 0044268e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00442691: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00442694: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00442697: fld dword ptr [esi + 0x394] */ FPUSH(R_F32((u32)(r_esi+0x394u)));
    /* 0044269d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044269f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004426a1: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004426a3: fstp dword ptr [esi + 0x304] */ W_F32((u32)(r_esi+0x304u), ST(0)); FPOP();
    /* 004426a9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004426ab: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 004426b1: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 004426b7: mov dword ptr [esi + 0x308], edx */ W32((u32)(r_esi+0x308u), r_edx);
    /* 004426bd: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 004426c0: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 004426c6: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 004426c9: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 004426cf: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 004426d2: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 004426d8: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 004426db: mov eax, dword ptr [esi + 0x3bc] */ r_eax = R32((u32)(r_esi+0x3bcu));
    /* 004426e1: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004426e6: mov dword ptr [esi + 0x3bc], eax */ W32((u32)(r_esi+0x3bcu), r_eax);
    /* 004426ec: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004426ee: mov ecx, esi */ r_ecx = r_esi;
    /* 004426f0: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x4426f6u); call_ind(t); }
L_004426f6:; BB(0x004426f6);
    /* 004426f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004426f7: ret  */ FN_RET(0x004425d8); r_esp += 4; return;
L_004426f8:; BB(0x004426f8);
    /* 004426f8: mov eax, dword ptr [esi + 0x294] */ r_eax = R32((u32)(r_esi+0x294u));
    /* 004426fe: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00442701: mov dword ptr [esi + 0x294], eax */ W32((u32)(r_esi+0x294u), r_eax);
    /* 00442707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00442709: jle 0x44270d */ if ((fZ||fS!=fO)) goto L_0044270d;
L_0044270b:; BB(0x0044270b);
    /* 0044270b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044270c: ret  */ FN_RET(0x004425d8); r_esp += 4; return;
L_0044270d:; BB(0x0044270d);
    /* 0044270d: mov dword ptr [esi + 0x290], 0 */ W32((u32)(r_esi+0x290u), 0x0u);
    /* 00442717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00442719: mov dword ptr [esi + 0x28c], eax */ W32((u32)(r_esi+0x28cu), r_eax);
    /* 0044271f: mov dword ptr [esi + 0x294], eax */ W32((u32)(r_esi+0x294u), r_eax);
    /* 00442725: and edx, 0xffffbfff */ {  u32 a = r_edx; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044272b: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0044272e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044272f: ret  */ FN_RET(0x004425d8); r_esp += 4; return;
}

void f_00442730(void) /* sub_442730 */
{
    FN_ENTER(0x00442730);
    /* 00442730: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00442737: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442739: je 0x442767 */ if (fZ) goto L_00442767;
L_0044273b:; BB(0x0044273b);
    /* 0044273b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044273e: je 0x442761 */ if (fZ) goto L_00442761;
L_00442740:; BB(0x00442740);
    /* 00442740: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442743: je 0x44275b */ if (fZ) goto L_0044275b;
L_00442745:; BB(0x00442745);
    /* 00442745: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442748: jne 0x442750 */ if (!fZ) goto L_00442750;
L_0044274a:; BB(0x0044274a);
    /* 0044274a: call 0x4428b0 */ r_esp -= 4; W32(r_esp, 0x44274fu); f_004428b0();
    /* 0044274f: ret  */ FN_RET(0x00442730); r_esp += 4; return;
L_00442750:; BB(0x00442750);
    /* 00442750: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00442753: jne 0x442760 */ if (!fZ) goto L_00442760;
L_00442755:; BB(0x00442755);
    /* 00442755: call 0x442770 */ r_esp -= 4; W32(r_esp, 0x44275au); f_00442770();
    /* 0044275a: ret  */ FN_RET(0x00442730); r_esp += 4; return;
L_0044275b:; BB(0x0044275b);
    /* 0044275b: call 0x442c98 */ r_esp -= 4; W32(r_esp, 0x442760u); f_00442c98();
L_00442760:; BB(0x00442760);
    /* 00442760: ret  */ FN_RET(0x00442730); r_esp += 4; return;
L_00442761:; BB(0x00442761);
    /* 00442761: call 0x442ec0 */ r_esp -= 4; W32(r_esp, 0x442766u); f_00442ec0();
    /* 00442766: ret  */ FN_RET(0x00442730); r_esp += 4; return;
L_00442767:; BB(0x00442767);
    /* 00442767: call 0x443b0c */ r_esp -= 4; W32(r_esp, 0x44276cu); f_00443b0c();
    /* 0044276c: ret  */ FN_RET(0x00442730); r_esp += 4; return;
}

void f_00442770(void) /* sub_442770 */
{
    FN_ENTER(0x00442770);
    /* 00442770: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00442771: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00442772: mov esi, ecx */ r_esi = r_ecx;
    /* 00442774: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0044277a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044277c: je 0x44281d */ if (fZ) goto L_0044281d;
L_00442782:; BB(0x00442782);
    /* 00442782: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442785: je 0x442794 */ if (fZ) goto L_00442794;
L_00442787:; BB(0x00442787);
    /* 00442787: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044278a: je 0x4427b3 */ if (fZ) goto L_004427b3;
L_0044278c:; BB(0x0044278c);
    /* 0044278c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044278f: jne 0x4427b3 */ if (!fZ) goto L_004427b3;
L_00442791:; BB(0x00442791);
    /* 00442791: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00442792: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00442793: ret  */ FN_RET(0x00442770); r_esp += 4; return;
L_00442794:; BB(0x00442794);
    /* 00442794: mov ecx, esi */ r_ecx = r_esi;
    /* 00442796: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x44279bu); f_007aa094();
    /* 0044279b: movsx eax, word ptr [esi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x344u));
    /* 004427a2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004427a5: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 004427ac: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004427af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004427b1: jl 0x4427bd */ if ((fS!=fO)) goto L_004427bd;
L_004427b3:; BB(0x004427b3);
    /* 004427b3: mov ecx, esi */ r_ecx = r_esi;
    /* 004427b5: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x4427bau); f_007b6880();
    /* 004427ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004427bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004427bc: ret  */ FN_RET(0x00442770); r_esp += 4; return;
L_004427bd:; BB(0x004427bd);
    /* 004427bd: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004427c0: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
    /* 004427c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004427c7: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004427ca: push 0x9a52ec */ { u32 v = 0x9a52ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004427cf: push dword ptr [0xa44a0c] */ { u32 v = R32((u32)(0xa44a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004427d5: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x4427dau); f_00578aa0();
    /* 004427da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004427db: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x4427e0u); f_005787d0();
    /* 004427e0: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 004427e6: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004427eb: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 004427f1: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 004427f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004427f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004427f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004427f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004427f9: push 0x341 */ { u32 v = 0x341u; r_esp -= 4; W32(r_esp, v); }
    /* 004427fe: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x442803u); f_00814298();
    /* 00442803: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442806: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00442809: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
    /* 00442813: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442818: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0044281b: jmp 0x4427b3 */ goto L_004427b3;
L_0044281d:; BB(0x0044281d);
    /* 0044281d: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00442820: or eax, 0x44040000 */ {  u32 a = r_eax; u32 b = 0x44040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442825: mov edi, dword ptr [esi + 0xa4] */ r_edi = R32((u32)(r_esi+0xa4u));
    /* 0044282b: and eax, 0xdfffffff */ {  u32 a = r_eax; u32 b = 0xdfffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442830: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00442833: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00442836: or edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0044283c: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 0044283f: mov eax, 4 */ r_eax = 0x4u;
    /* 00442844: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0044284b: mov eax, 0x5a */ r_eax = 0x5au;
    /* 00442850: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 0044285a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044285b: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00442862: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00442868: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442869: call 0x5788b8 */ r_esp -= 4; W32(r_esp, 0x44286eu); f_005788b8();
    /* 0044286e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442871: mov eax, dword ptr [esi + 0x3b0] */ r_eax = R32((u32)(r_esi+0x3b0u));
    /* 00442877: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442879: je 0x4428a1 */ if (fZ) goto L_004428a1;
L_0044287b:; BB(0x0044287b);
    /* 0044287b: movzx eax, word ptr [esi + 0x2d8] */ r_eax = (u32)R16((u32)(r_esi+0x2d8u));
    /* 00442882: mov dword ptr [0xa44798], 1 */ W32((u32)(0xa44798u), 0x1u);
    /* 0044288c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044288e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044288f: call 0x43ff8c */ r_esp -= 4; W32(r_esp, 0x442894u); f_0043ff8c();
    /* 00442894: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 00442899: call 0x43ffe4 */ r_esp -= 4; W32(r_esp, 0x44289eu); f_0043ffe4();
    /* 0044289e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004428a1:; BB(0x004428a1);
    /* 004428a1: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 004428ab: jmp 0x442794 */ goto L_00442794;
}

void f_004428b0(void) /* sub_4428B0 */
{
    FN_ENTER(0x004428b0);
    /* 004428b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004428b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004428b2: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004428b5: mov edi, ecx */ r_edi = r_ecx;
    /* 004428b7: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 004428ba: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 004428c0: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004428c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004428c8: je 0x442a6b */ if (fZ) goto L_00442a6b;
L_004428ce:; BB(0x004428ce);
    /* 004428ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004428d1: je 0x442a3c */ if (fZ) goto L_00442a3c;
L_004428d7:; BB(0x004428d7);
    /* 004428d7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004428da: je 0x4429f8 */ if (fZ) goto L_004429f8;
L_004428e0:; BB(0x004428e0);
    /* 004428e0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004428e3: je 0x442940 */ if (fZ) goto L_00442940;
L_004428e5:; BB(0x004428e5);
    /* 004428e5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004428e8: jne 0x442908 */ if (!fZ) goto L_00442908;
L_004428ea:; BB(0x004428ea);
    /* 004428ea: or edx, 0x4040000 */ {  u32 a = r_edx; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004428f0: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 004428f3: mov ecx, edi */ r_ecx = r_edi;
    /* 004428f5: call 0x442bdc */ r_esp -= 4; W32(r_esp, 0x4428fau); f_00442bdc();
    /* 004428fa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004428fd: je 0x442991 */ if (fZ) goto L_00442991;
L_00442903:; BB(0x00442903);
    /* 00442903: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00442906: jmp 0x442974 */ goto L_00442974;
L_00442908:; BB(0x00442908);
    /* 00442908: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0044290b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044290e: jne 0x44293b */ if (!fZ) goto L_0044293b;
L_00442910:; BB(0x00442910);
    /* 00442910: mov edx, dword ptr [edi + 0x3b8] */ r_edx = R32((u32)(r_edi+0x3b8u));
    /* 00442916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442918: je 0x442936 */ if (fZ) goto L_00442936;
L_0044291a:; BB(0x0044291a);
    /* 0044291a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044291e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442923: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00442927: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0044292a: mov dword ptr [edi + 0x3b8], 0 */ W32((u32)(r_edi+0x3b8u), 0x0u);
    /* 00442934: jmp 0x442974 */ goto L_00442974;
L_00442936:; BB(0x00442936);
    /* 00442936: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00442939: jmp 0x442974 */ goto L_00442974;
L_0044293b:; BB(0x0044293b);
    /* 0044293b: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0044293e: jmp 0x442974 */ goto L_00442974;
L_00442940:; BB(0x00442940);
    /* 00442940: mov ecx, dword ptr [edi + 0x3b8] */ r_ecx = R32((u32)(r_edi+0x3b8u));
    /* 00442946: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
L_00442949:; BB(0x00442949);
    /* 00442949: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044294b: je 0x442959 */ if (fZ) goto L_00442959;
L_0044294d:; BB(0x0044294d);
    /* 0044294d: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00442953: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442954: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x442959u); f_00508db8();
L_00442959:; BB(0x00442959);
    /* 00442959: movsx eax, word ptr [edi + 0x3a2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3a2u));
    /* 00442960: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00442963: mov word ptr [edi + 0x3a2], ax */ W16((u32)(r_edi+0x3a2u), (u16)r_eax);
    /* 0044296a: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0044296d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044296f: jle 0x4429b4 */ if ((fZ||fS!=fO)) goto L_004429b4;
L_00442971:; BB(0x00442971);
    /* 00442971: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
L_00442974:; BB(0x00442974);
    /* 00442974: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442976: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00442977: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x44297cu); f_006946a8();
    /* 0044297c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044297e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00442980: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00442985: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00442986: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x44298bu); f_00805608();
    /* 0044298b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044298e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044298f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00442990: ret  */ FN_RET(0x004428b0); r_esp += 4; return;
L_00442991:; BB(0x00442991);
    /* 00442991: mov eax, dword ptr [edi + 0x3c0] */ r_eax = R32((u32)(r_edi+0x3c0u));
    /* 00442997: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 0044299e: mov ecx, edi */ r_ecx = r_edi;
    /* 004429a0: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 004429a7: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004429a9: call dword ptr [edx + 0xf0] */ { u32 t = R32((u32)(r_edx+0xf0u)); r_esp -= 4; W32(r_esp, 0x4429afu); call_ind(t); }
    /* 004429af: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 004429b2: jmp 0x442974 */ goto L_00442974;
L_004429b4:; BB(0x004429b4);
    /* 004429b4: mov edx, dword ptr [edi + 0x3b8] */ r_edx = R32((u32)(r_edi+0x3b8u));
    /* 004429ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004429bc: je 0x4429d5 */ if (fZ) goto L_004429d5;
L_004429be:; BB(0x004429be);
    /* 004429be: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004429c2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004429c7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004429cb: mov dword ptr [edi + 0x3b8], 0 */ W32((u32)(r_edi+0x3b8u), 0x0u);
L_004429d5:; BB(0x004429d5);
    /* 004429d5: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 004429db: mov dword ptr [edi + 0x384], 4 */ W32((u32)(r_edi+0x384u), 0x4u);
    /* 004429e5: and eax, 0xfffdffff */ {  u32 a = r_eax; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004429ea: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 004429f0: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 004429f3: jmp 0x442974 */ goto L_00442974;
L_004429f8:; BB(0x004429f8);
    /* 004429f8: mov ecx, dword ptr [edi + 0x3b8] */ r_ecx = R32((u32)(r_edi+0x3b8u));
    /* 004429fe: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00442a01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442a03: je 0x442a14 */ if (fZ) goto L_00442a14;
L_00442a05:; BB(0x00442a05);
    /* 00442a05: mov dword ptr [edi + 0x384], 3 */ W32((u32)(r_edi+0x384u), 0x3u);
    /* 00442a0f: jmp 0x442949 */ goto L_00442949;
L_00442a14:; BB(0x00442a14);
    /* 00442a14: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00442a16: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00442a1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442a1d: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x442a22u); f_00509590();
    /* 00442a22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442a25: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00442a27: mov dword ptr [edi + 0x3b8], eax */ W32((u32)(r_edi+0x3b8u), r_eax);
    /* 00442a2d: mov ecx, eax */ r_ecx = r_eax;
    /* 00442a2f: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x442a34u); f_00508efc();
    /* 00442a34: mov ecx, dword ptr [edi + 0x3b8] */ r_ecx = R32((u32)(r_edi+0x3b8u));
    /* 00442a3a: jmp 0x442a05 */ goto L_00442a05;
L_00442a3c:; BB(0x00442a3c);
    /* 00442a3c: or edx, 0x4040000 */ {  u32 a = r_edx; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00442a42: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00442a45: mov ecx, edi */ r_ecx = r_edi;
    /* 00442a47: call 0x442c28 */ r_esp -= 4; W32(r_esp, 0x442a4cu); f_00442c28();
    /* 00442a4c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442a4f: je 0x442a59 */ if (fZ) goto L_00442a59;
L_00442a51:; BB(0x00442a51);
    /* 00442a51: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00442a54: jmp 0x442974 */ goto L_00442974;
L_00442a59:; BB(0x00442a59);
    /* 00442a59: mov dword ptr [edi + 0x384], 2 */ W32((u32)(r_edi+0x384u), 0x2u);
    /* 00442a63: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00442a66: jmp 0x442974 */ goto L_00442974;
L_00442a6b:; BB(0x00442a6b);
    /* 00442a6b: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00442a6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00442a70: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00442a77: mov ecx, edi */ r_ecx = r_edi;
    /* 00442a79: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x442a7eu); f_007aa094();
    /* 00442a7e: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 00442a84: mov dword ptr [edi + 0x3b8], 0 */ W32((u32)(r_edi+0x3b8u), 0x0u);
    /* 00442a8e: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442a94: jne 0x442aae */ if (!fZ) goto L_00442aae;
L_00442a96:; BB(0x00442a96);
    /* 00442a96: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00442a9c: mov eax, 0x96 */ r_eax = 0x96u;
    /* 00442aa1: mov word ptr [edi + 0x3a2], ax */ W16((u32)(r_edi+0x3a2u), (u16)r_eax);
    /* 00442aa8: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
L_00442aae:; BB(0x00442aae);
    /* 00442aae: fld dword ptr [edi + 0x394] */ FPUSH(R_F32((u32)(r_edi+0x394u)));
    /* 00442ab4: fcomp dword ptr [0x8fe548] */ fx_compare(ST(0), R_F32((u32)(0x8fe548u))); FPOP();
    /* 00442aba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00442abc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00442abd: jb 0x442add */ if (fC) goto L_00442add;
L_00442abf:; BB(0x00442abf);
    /* 00442abf: mov dword ptr [edi + 0x384], 2 */ W32((u32)(r_edi+0x384u), 0x2u);
    /* 00442ac9: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
L_00442acc:; BB(0x00442acc);
    /* 00442acc: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00442ad2: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 00442ad8: jmp 0x442974 */ goto L_00442974;
L_00442add:; BB(0x00442add);
    /* 00442add: mov ecx, edi */ r_ecx = r_edi;
    /* 00442adf: call 0x443ecc */ r_esp -= 4; W32(r_esp, 0x442ae4u); f_00443ecc();
    /* 00442ae4: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00442aea: mov eax, dword ptr [edi + 0x3c0] */ r_eax = R32((u32)(r_edi+0x3c0u));
    /* 00442af0: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 00442af7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00442af9: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 00442b00: mov eax, 0 */ r_eax = 0x0u;
    /* 00442b05: jle 0x442bca */ if ((fZ||fS!=fO)) goto L_00442bca;
L_00442b0b:; BB(0x00442b0b);
    /* 00442b0b: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00442b0f: mov ebx, eax */ r_ebx = r_eax;
    /* 00442b11: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00442b15: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
L_00442b18:; BB(0x00442b18);
    /* 00442b18: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00442b1f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442b21: je 0x442bcf */ if (fZ) goto L_00442bcf;
L_00442b27:; BB(0x00442b27);
    /* 00442b27: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00442b2b: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442b30: jge 0x442bc0 */ if ((fS==fO)) goto L_00442bc0;
L_00442b36:; BB(0x00442b36);
    /* 00442b36: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00442b39: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00442b3c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00442b3f: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00442b42: mov edx, ebp */ r_edx = r_ebp;
    /* 00442b44: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00442b48: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00442b4b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00442b4f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x442b54u); f_0082f9c4();
    /* 00442b54: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00442b57: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00442b59: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00442b5d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00442b5f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00442b61: fcomp dword ptr [0x8fe554] */ fx_compare(ST(0), R_F32((u32)(0x8fe554u))); FPOP();
    /* 00442b67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00442b69: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00442b6a: ja 0x442b94 */ if ((!fC&&!fZ)) goto L_00442b94;
L_00442b6c:; BB(0x00442b6c);
    /* 00442b6c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00442b74: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00442b77: push 0x41500000 */ { u32 v = 0x41500000u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442b7d: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x442b82u); f_0078ea90();
    /* 00442b82: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00442b84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442b87: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00442b8a: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00442b8d: mov ecx, esi */ r_ecx = r_esi;
    /* 00442b8f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x442b94u); f_0082ebac();
L_00442b94:; BB(0x00442b94);
    /* 00442b94: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00442b97: cmp ebx, dword ptr [0xaae168] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442b9d: jl 0x442b18 */ if ((fS!=fO)) goto L_00442b18;
L_00442ba3:; BB(0x00442ba3);
    /* 00442ba3: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00442ba7: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_00442bab:; BB(0x00442bab);
    /* 00442bab: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 00442bb1: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 00442bbb: jmp 0x442acc */ goto L_00442acc;
L_00442bc0:; BB(0x00442bc0);
    /* 00442bc0: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00442bc4: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00442bc8: jmp 0x442bab */ goto L_00442bab;
L_00442bca:; BB(0x00442bca);
    /* 00442bca: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00442bcd: jmp 0x442bab */ goto L_00442bab;
L_00442bcf:; BB(0x00442bcf);
    /* 00442bcf: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00442bd3: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00442bd7: jmp 0x442bab */ goto L_00442bab;
}

void f_00442bdc(void) /* sub_442BDC */
{
    FN_ENTER(0x00442bdc);
    /* 00442bdc: fld dword ptr [ecx + 0x394] */ FPUSH(R_F32((u32)(r_ecx+0x394u)));
    /* 00442be2: fsub dword ptr [0xa449e4] */ ST(0) = ST(0) - R_F32((u32)(0xa449e4u));
    /* 00442be8: fcom dword ptr [0x8fe544] */ fx_compare(ST(0), R_F32((u32)(0x8fe544u))); 
    /* 00442bee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00442bf0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00442bf1: ja 0x442c1c */ if ((!fC&&!fZ)) goto L_00442c1c;
L_00442bf3:; BB(0x00442bf3);
    /* 00442bf3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00442bf5: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00442bfb: mov byte ptr [ecx + 0x398], 0 */ W8((u32)(r_ecx+0x398u), 0x0u);
    /* 00442c02: mov edx, 0xc2200000 */ r_edx = 0xc2200000u;
    /* 00442c07: mov dword ptr [ecx + 0x394], edx */ W32((u32)(r_ecx+0x394u), r_edx);
    /* 00442c0d: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00442c10: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00442c13: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00442c16: mov eax, 1 */ r_eax = 0x1u;
    /* 00442c1b: ret  */ FN_RET(0x00442bdc); r_esp += 4; return;
L_00442c1c:; BB(0x00442c1c);
    /* 00442c1c: fstp dword ptr [ecx + 0x394] */ W_F32((u32)(r_ecx+0x394u), ST(0)); FPOP();
    /* 00442c22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00442c24: ret  */ FN_RET(0x00442bdc); r_esp += 4; return;
}

void f_00442c28(void) /* sub_442C28 */
{
    FN_ENTER(0x00442c28);
    /* 00442c28: movsx eax, byte ptr [ecx + 0x398] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x398u));
    /* 00442c2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442c31: jne 0x442c59 */ if (!fZ) goto L_00442c59;
L_00442c33:; BB(0x00442c33);
    /* 00442c33: fld dword ptr [0xa449e4] */ FPUSH(R_F32((u32)(0xa449e4u)));
    /* 00442c39: fadd dword ptr [ecx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x394u));
    /* 00442c3f: fcom dword ptr [0x8fe540] */ fx_compare(ST(0), R_F32((u32)(0x8fe540u))); 
    /* 00442c45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00442c47: fstp dword ptr [ecx + 0x394] */ W_F32((u32)(r_ecx+0x394u), ST(0)); FPOP();
    /* 00442c4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00442c4e: jb 0x442c94 */ if (fC) goto L_00442c94;
L_00442c50:; BB(0x00442c50);
    /* 00442c50: mov byte ptr [ecx + 0x398], 1 */ W8((u32)(r_ecx+0x398u), 0x1u);
    /* 00442c57: jmp 0x442c94 */ goto L_00442c94;
L_00442c59:; BB(0x00442c59);
    /* 00442c59: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442c5c: jne 0x442c8d */ if (!fZ) goto L_00442c8d;
L_00442c5e:; BB(0x00442c5e);
    /* 00442c5e: fld dword ptr [0xa449e8] */ FPUSH(R_F32((u32)(0xa449e8u)));
    /* 00442c64: fadd dword ptr [ecx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x394u));
    /* 00442c6a: fcom dword ptr [0x8fe548] */ fx_compare(ST(0), R_F32((u32)(0x8fe548u))); 
    /* 00442c70: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00442c72: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00442c73: jbe 0x442c7d */ if ((fC||fZ)) goto L_00442c7d;
L_00442c75:; BB(0x00442c75);
    /* 00442c75: fstp dword ptr [ecx + 0x394] */ W_F32((u32)(r_ecx+0x394u), ST(0)); FPOP();
    /* 00442c7b: jmp 0x442c94 */ goto L_00442c94;
L_00442c7d:; BB(0x00442c7d);
    /* 00442c7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00442c7f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00442c81: mov dword ptr [ecx + 0x394], edx */ W32((u32)(r_ecx+0x394u), r_edx);
    /* 00442c87: mov eax, 1 */ r_eax = 0x1u;
    /* 00442c8c: ret  */ FN_RET(0x00442c28); r_esp += 4; return;
L_00442c8d:; BB(0x00442c8d);
    /* 00442c8d: mov byte ptr [ecx + 0x398], 0 */ W8((u32)(r_ecx+0x398u), 0x0u);
L_00442c94:; BB(0x00442c94);
    /* 00442c94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00442c96: ret  */ FN_RET(0x00442c28); r_esp += 4; return;
}

void f_00442c98(void) /* sub_442C98 */
{
    FN_ENTER(0x00442c98);
    /* 00442c98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00442c99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00442c9a: mov esi, ecx */ r_esi = r_ecx;
    /* 00442c9c: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00442ca2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442ca4: je 0x442d9c */ if (fZ) goto L_00442d9c;
L_00442caa:; BB(0x00442caa);
    /* 00442caa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442cad: je 0x442cea */ if (fZ) goto L_00442cea;
L_00442caf:; BB(0x00442caf);
    /* 00442caf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442cb2: jne 0x442ccc */ if (!fZ) goto L_00442ccc;
L_00442cb4:; BB(0x00442cb4);
    /* 00442cb4: mov ecx, esi */ r_ecx = r_esi;
    /* 00442cb6: call 0x442bdc */ r_esp -= 4; W32(r_esp, 0x442cbbu); f_00442bdc();
    /* 00442cbb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442cbe: je 0x442d66 */ if (fZ) goto L_00442d66;
L_00442cc4:; BB(0x00442cc4);
    /* 00442cc4: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00442cc7: jmp 0x442d49 */ goto L_00442d49;
L_00442ccc:; BB(0x00442ccc);
    /* 00442ccc: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442ccf: jne 0x442ce5 */ if (!fZ) goto L_00442ce5;
L_00442cd1:; BB(0x00442cd1);
    /* 00442cd1: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00442cd7: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442cda: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00442ce0: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00442ce3: jmp 0x442d49 */ goto L_00442d49;
L_00442ce5:; BB(0x00442ce5);
    /* 00442ce5: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00442ce8: jmp 0x442d49 */ goto L_00442d49;
L_00442cea:; BB(0x00442cea);
    /* 00442cea: mov ecx, esi */ r_ecx = r_esi;
    /* 00442cec: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x442cf1u); f_007aa094();
    /* 00442cf1: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00442cf7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442cfa: je 0x442d46 */ if (fZ) goto L_00442d46;
L_00442cfc:; BB(0x00442cfc);
    /* 00442cfc: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00442d02: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442d07: jne 0x442d84 */ if (!fZ) goto L_00442d84;
L_00442d09:; BB(0x00442d09);
    /* 00442d09: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442d0e: je 0x442d25 */ if (fZ) goto L_00442d25;
L_00442d10:; BB(0x00442d10);
    /* 00442d10: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442d13: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00442d19: mov ecx, esi */ r_ecx = r_esi;
    /* 00442d1b: call 0x442e8c */ r_esp -= 4; W32(r_esp, 0x442d20u); f_00442e8c();
    /* 00442d20: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00442d23: jmp 0x442d49 */ goto L_00442d49;
L_00442d25:; BB(0x00442d25);
    /* 00442d25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442d27: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00442d29: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00442d2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00442d2d: push 0x34a */ { u32 v = 0x34au; r_esp -= 4; W32(r_esp, v); }
    /* 00442d32: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x442d37u); f_00814298();
    /* 00442d37: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442d3a: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
    /* 00442d44: jmp 0x442d49 */ goto L_00442d49;
L_00442d46:; BB(0x00442d46);
    /* 00442d46: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
L_00442d49:; BB(0x00442d49);
    /* 00442d49: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442d4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00442d4c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x442d51u); f_006946a8();
    /* 00442d51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442d53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00442d55: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00442d5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00442d5b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x442d60u); f_00805608();
    /* 00442d60: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00442d63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00442d64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00442d65: ret  */ FN_RET(0x00442c98); r_esp += 4; return;
L_00442d66:; BB(0x00442d66);
    /* 00442d66: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00442d6c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00442d6e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442d71: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00442d77: mov ecx, esi */ r_ecx = r_esi;
    /* 00442d79: call dword ptr [edx + 0xf0] */ { u32 t = R32((u32)(r_edx+0xf0u)); r_esp -= 4; W32(r_esp, 0x442d7fu); call_ind(t); }
    /* 00442d7f: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00442d82: jmp 0x442d49 */ goto L_00442d49;
L_00442d84:; BB(0x00442d84);
    /* 00442d84: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442d87: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00442d8d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00442d8f: mov ecx, esi */ r_ecx = r_esi;
    /* 00442d91: call dword ptr [eax + 0xf8] */ { u32 t = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, 0x442d97u); call_ind(t); }
    /* 00442d97: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00442d9a: jmp 0x442d49 */ goto L_00442d49;
L_00442d9c:; BB(0x00442d9c);
    /* 00442d9c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00442d9f: movzx edx, word ptr [esi + 0x334] */ r_edx = (u32)R16((u32)(r_esi+0x334u));
    /* 00442da6: mov edi, dword ptr [esi + 0x3b0] */ r_edi = R32((u32)(r_esi+0x3b0u));
    /* 00442dac: and eax, 0xffdffdff */ {  u32 a = r_eax; u32 b = 0xffdffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442db1: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00442db4: mov word ptr [esi + 0x346], dx */ W16((u32)(r_esi+0x346u), (u16)r_edx);
    /* 00442dbb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442dbd: je 0x442de5 */ if (fZ) goto L_00442de5;
L_00442dbf:; BB(0x00442dbf);
    /* 00442dbf: movzx eax, word ptr [esi + 0x2d8] */ r_eax = (u32)R16((u32)(r_esi+0x2d8u));
    /* 00442dc6: mov dword ptr [0xa44798], 1 */ W32((u32)(0xa44798u), 0x1u);
    /* 00442dd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442dd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442dd3: call 0x43ff8c */ r_esp -= 4; W32(r_esp, 0x442dd8u); f_0043ff8c();
    /* 00442dd8: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 00442ddd: call 0x43ffe4 */ r_esp -= 4; W32(r_esp, 0x442de2u); f_0043ffe4();
    /* 00442de2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00442de5:; BB(0x00442de5);
    /* 00442de5: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 00442dea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442dec: je 0x442e71 */ if (fZ) goto L_00442e71;
L_00442df2:; BB(0x00442df2);
    /* 00442df2: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00442df8: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442dfd: je 0x442e2e */ if (fZ) goto L_00442e2e;
L_00442dff:; BB(0x00442dff);
    /* 00442dff: mov edx, dword ptr [esi + 0x3ac] */ r_edx = R32((u32)(r_esi+0x3acu));
    /* 00442e05: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442e08: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00442e0e: mov eax, 2 */ r_eax = 0x2u;
    /* 00442e13: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00442e19: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 00442e20: mov dword ptr [esi + 0x384], edx */ W32((u32)(r_esi+0x384u), r_edx);
    /* 00442e26: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00442e29: jmp 0x442d49 */ goto L_00442d49;
L_00442e2e:; BB(0x00442e2e);
    /* 00442e2e: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442e33: je 0x442e4d */ if (fZ) goto L_00442e4d;
L_00442e35:; BB(0x00442e35);
    /* 00442e35: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442e38: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00442e3e: mov ecx, esi */ r_ecx = r_esi;
    /* 00442e40: call 0x442e8c */ r_esp -= 4; W32(r_esp, 0x442e45u); f_00442e8c();
    /* 00442e45: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00442e48: jmp 0x442d49 */ goto L_00442d49;
L_00442e4d:; BB(0x00442e4d);
    /* 00442e4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442e4f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00442e51: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00442e54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00442e55: push 0x34a */ { u32 v = 0x34au; r_esp -= 4; W32(r_esp, v); }
    /* 00442e5a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x442e5fu); f_00814298();
    /* 00442e5f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442e62: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
    /* 00442e6c: jmp 0x442d49 */ goto L_00442d49;
L_00442e71:; BB(0x00442e71);
    /* 00442e71: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 00442e7b: mov eax, 3 */ r_eax = 0x3u;
    /* 00442e80: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00442e87: jmp 0x442cea */ goto L_00442cea;
}

void f_00442e8c(void) /* sub_442E8C */
{
    FN_ENTER(0x00442e8c);
    /* 00442e8c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00442e8f: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00442e94: je 0x442e97 */ if (fZ) goto L_00442e97;
L_00442e96:; BB(0x00442e96);
    /* 00442e96: ret  */ FN_RET(0x00442e8c); r_esp += 4; return;
L_00442e97:; BB(0x00442e97);
    /* 00442e97: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00442e9d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00442e9f: jne 0x442ebd */ if (!fZ) goto L_00442ebd;
L_00442ea1:; BB(0x00442ea1);
    /* 00442ea1: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00442ea8: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00442eab: je 0x442ebd */ if (fZ) goto L_00442ebd;
L_00442ead:; BB(0x00442ead);
    /* 00442ead: mov dword ptr [ecx + 0x37c], 9 */ W32((u32)(r_ecx+0x37cu), 0x9u);
    /* 00442eb7: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_00442ebd:; BB(0x00442ebd);
    /* 00442ebd: ret  */ FN_RET(0x00442e8c); r_esp += 4; return;
}

void f_00442ec0(void) /* sub_442EC0 */
{
    FN_ENTER(0x00442ec0);
    /* 00442ec0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00442ec1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00442ec2: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00442ec5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00442ec7: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00442eca: mov esi, dword ptr [ebx + 0x384] */ r_esi = R32((u32)(r_ebx+0x384u));
    /* 00442ed0: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00442ed5: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 00442ed8: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00442edb: ja 0x44354b */ if ((!fC&&!fZ)) goto L_0044354b;
L_00442ee1:; BB(0x00442ee1);
    /* 00442ee1: mov edx, dword ptr [esi*4 + 0x8fe4cc] */ r_edx = R32((u32)(r_esi*4+0x8fe4ccu));
    /* 00442ee8: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0044354b:; BB(0x0044354b);
    /* 0044354b: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0044354e: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x00442ec0); r_esp += 4; return;
}

void f_00442eea(void)
{
    FN_ENTER(0x00442eea);
    /* 00442eea: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00442eed: movsx eax, word ptr [ebx + 0x3a0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3a0u));
    /* 00442ef4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00442ef7: mov word ptr [ebx + 0x3a0], ax */ W16((u32)(r_ebx+0x3a0u), (u16)r_eax);
    /* 00442efe: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00442f01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00442f03: jle 0x443582 */ if ((fZ||fS!=fO)) goto L_00443582;
L_00442f09:; BB(0x00442f09);
    /* 00442f09: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00442f0c: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x00442eea); r_esp += 4; return;
L_00443582:; BB(0x00443582);
    /* 00443582: mov dword ptr [ebx + 0x384], 0xa */ W32((u32)(r_ebx+0x384u), 0xau);
    /* 0044358c: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 0044358f: jmp 0x443551 */ goto L_00443551;
}

void f_00442f11(void)
{
    FN_ENTER(0x00442f11);
    /* 00442f11: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00442f14: jmp 0x442f40 */ goto L_00442f40;
L_00442f40:; BB(0x00442f40);
    /* 00442f40: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442f45: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00442f48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00442f4a: call 0x442bdc */ r_esp -= 4; W32(r_esp, 0x442f4fu); f_00442bdc();
    /* 00442f4f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442f52: je 0x443591 */ if (fZ) goto L_00443591;
L_00442f58:; BB(0x00442f58);
    /* 00442f58: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x00442f11); r_esp += 4; return;
L_00443591:; BB(0x00443591);
    /* 00443591: mov eax, dword ptr [ebx + 0x3c0] */ r_eax = R32((u32)(r_ebx+0x3c0u));
    /* 00443597: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 0044359e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004435a0: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 004435a7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004435a9: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x4435afu); call_ind(t); }
    /* 004435af: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 004435b5: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004435ba: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 004435c0: jmp 0x443551 */ goto L_00443551;
}

void f_00442f16(void)
{
    FN_ENTER(0x00442f16);
    /* 00442f16: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442f1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442f1d: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00442f20: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00442f23: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00442f25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00442f26: push 0x34a */ { u32 v = 0x34au; r_esp -= 4; W32(r_esp, v); }
    /* 00442f2b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x442f30u); f_00814298();
    /* 00442f30: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442f33: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00442f36: mov dword ptr [ebx + 0x384], 0xb */ W32((u32)(r_ebx+0x384u), 0xbu);
    /* 00442f40: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00442f45: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00442f48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00442f4a: call 0x442bdc */ r_esp -= 4; W32(r_esp, 0x442f4fu); f_00442bdc();
    /* 00442f4f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442f52: je 0x443591 */ if (fZ) goto L_00443591;
L_00442f58:; BB(0x00442f58);
    /* 00442f58: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x00442f16); r_esp += 4; return;
L_00443591:; BB(0x00443591);
    /* 00443591: mov eax, dword ptr [ebx + 0x3c0] */ r_eax = R32((u32)(r_ebx+0x3c0u));
    /* 00443597: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 0044359e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004435a0: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 004435a7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004435a9: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x4435afu); call_ind(t); }
    /* 004435af: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 004435b5: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004435ba: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 004435c0: jmp 0x443551 */ goto L_00443551;
}

void f_00442f5d(void)
{
    FN_ENTER(0x00442f5d);
    /* 00442f5d: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00442f60: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00442f62: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x442f67u); f_007aa094();
    /* 00442f67: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 00442f6d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442f70: je 0x442fa2 */ if (fZ) goto L_00442fa2;
L_00442f72:; BB(0x00442f72);
    /* 00442f72: movsx eax, word ptr [ebx + 0x3a4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3a4u));
    /* 00442f79: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442f7c: jl 0x442f90 */ if ((fS!=fO)) goto L_00442f90;
L_00442f7e:; BB(0x00442f7e);
    /* 00442f7e: mov dword ptr [ebx + 0x384], 0xa */ W32((u32)(r_ebx+0x384u), 0xau);
    /* 00442f88: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00442f8b: jmp 0x443551 */ goto L_00443551;
L_00442f90:; BB(0x00442f90);
    /* 00442f90: mov dword ptr [ebx + 0x384], 4 */ W32((u32)(r_ebx+0x384u), 0x4u);
    /* 00442f9a: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00442f9d: jmp 0x443551 */ goto L_00443551;
L_00442fa2:; BB(0x00442fa2);
    /* 00442fa2: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00442fa5: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x00442f5d); r_esp += 4; return;
}

void f_00442faa(void)
{
    FN_ENTER(0x00442faa);
    /* 00442faa: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00442fad: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 00442fb4: jmp 0x4431e9 */ goto L_004431e9;
L_004431e9:; BB(0x004431e9);
    /* 004431e9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004431ec: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 004431f3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004431f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004431f8: jle 0x4435c2 */ if ((fZ||fS!=fO)) goto L_004435c2;
L_004431fe:; BB(0x004431fe);
    /* 004431fe: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443201: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x00442faa); r_esp += 4; return;
L_004435c2:; BB(0x004435c2);
    /* 004435c2: mov dword ptr [ebx + 0x384], 9 */ W32((u32)(r_ebx+0x384u), 0x9u);
    /* 004435cc: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 004435cf: jmp 0x443551 */ goto L_00443551;
}

void f_00442fb9(void)
{
    FN_ENTER(0x00442fb9);
    /* 00442fb9: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00442fbc: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 00442fc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442fc4: je 0x4431c9 */ if (fZ) goto L_004431c9;
L_00442fca:; BB(0x00442fca);
    /* 00442fca: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 00442fcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442fd1: je 0x4431ba */ if (fZ) goto L_004431ba;
L_00442fd7:; BB(0x00442fd7);
    /* 00442fd7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00442fdc: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x442fe1u); f_0082d990();
    /* 00442fe1: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00442fe4: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00442fe7: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00442fed: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00442ff0: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442ff3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00442ff7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00442ffa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00442ffc: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00443000: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x443005u); f_00830b74();
    /* 00443005: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00443008: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044300a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44300fu); f_0082d8bc();
    /* 0044300f: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00443015: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00443017: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x44301cu); f_007aaab8();
    /* 0044301c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x443021u); f_0082da80();
    /* 00443021: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 00443027: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0044302f: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00443035: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0044303d: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00443045: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x44304au); f_0082d990();
    /* 0044304a: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0044304e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044304f: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00443053: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00443055: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x44305au); f_00830aa0();
    /* 0044305a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44305fu); f_0082da80();
    /* 0044305f: mov eax, dword ptr [0xa44790] */ r_eax = R32((u32)(0xa44790u));
    /* 00443064: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443066: je 0x44312c */ if (fZ) goto L_0044312c;
L_0044306c:; BB(0x0044306c);
    /* 0044306c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044306f: jne 0x4430ca */ if (!fZ) goto L_004430ca;
L_00443071:; BB(0x00443071);
    /* 00443071: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00443076: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00443078: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044307a: jle 0x4431c1 */ if ((fZ||fS!=fO)) goto L_004431c1;
L_00443080:; BB(0x00443080);
    /* 00443080: mov edx, dword ptr [esi*4 + 0xaad720] */ r_edx = R32((u32)(r_esi*4+0xaad720u));
    /* 00443087: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443089: je 0x4430be */ if (fZ) goto L_004430be;
L_0044308b:; BB(0x0044308b);
    /* 0044308b: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0044308f: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443095: jge 0x4430be */ if ((fS==fO)) goto L_004430be;
L_00443097:; BB(0x00443097);
    /* 00443097: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0044309a: test ecx, 0x2000800 */ {  u32 a = r_ecx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004430a0: jne 0x4430be */ if (!fZ) goto L_004430be;
L_004430a2:; BB(0x004430a2);
    /* 004430a2: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 004430a6: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004430a8: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004430ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004430af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004430b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004430b1: call 0x6e3408 */ r_esp -= 4; W32(r_esp, 0x4430b6u); f_006e3408();
    /* 004430b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004430b9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_004430be:; BB(0x004430be);
    /* 004430be: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004430c1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004430c3: jl 0x443080 */ if ((fS!=fO)) goto L_00443080;
L_004430c5:; BB(0x004430c5);
    /* 004430c5: jmp 0x4431c1 */ goto L_004431c1;
L_004430ca:; BB(0x004430ca);
    /* 004430ca: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004430cd: jne 0x4431c1 */ if (!fZ) goto L_004431c1;
L_004430d3:; BB(0x004430d3);
    /* 004430d3: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004430d8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004430da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004430dc: jle 0x4431c1 */ if ((fZ||fS!=fO)) goto L_004431c1;
L_004430e2:; BB(0x004430e2);
    /* 004430e2: mov edx, dword ptr [esi*4 + 0xaad720] */ r_edx = R32((u32)(r_esi*4+0xaad720u));
    /* 004430e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004430eb: je 0x443120 */ if (fZ) goto L_00443120;
L_004430ed:; BB(0x004430ed);
    /* 004430ed: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 004430f1: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004430f7: jge 0x443120 */ if ((fS==fO)) goto L_00443120;
L_004430f9:; BB(0x004430f9);
    /* 004430f9: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004430fc: test ecx, 0x2000800 */ {  u32 a = r_ecx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443102: jne 0x443120 */ if (!fZ) goto L_00443120;
L_00443104:; BB(0x00443104);
    /* 00443104: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00443108: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0044310a: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00443110: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443111: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443112: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443113: call 0x6e4058 */ r_esp -= 4; W32(r_esp, 0x443118u); f_006e4058();
    /* 00443118: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044311b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00443120:; BB(0x00443120);
    /* 00443120: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00443123: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443125: jl 0x4430e2 */ if ((fS!=fO)) goto L_004430e2;
L_00443127:; BB(0x00443127);
    /* 00443127: jmp 0x4431c1 */ goto L_004431c1;
L_0044312c:; BB(0x0044312c);
    /* 0044312c: mov dword ptr [ebx + 0x3c4], 0 */ W32((u32)(r_ebx+0x3c4u), 0x0u);
    /* 00443136: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044313b: lea ecx, [ebx + 0x3c4] */ r_ecx = (u32)(r_ebx+0x3c4u);
    /* 00443141: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00443143: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00443145: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00443147: jle 0x44319d */ if ((fZ||fS!=fO)) goto L_0044319d;
L_00443149:; BB(0x00443149);
    /* 00443149: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0044314c: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
L_00443150:; BB(0x00443150);
    /* 00443150: mov edi, dword ptr [edx*4 + 0xaad720] */ r_edi = R32((u32)(r_edx*4+0xaad720u));
    /* 00443157: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443159: je 0x44318f */ if (fZ) goto L_0044318f;
L_0044315b:; BB(0x0044315b);
    /* 0044315b: movzx ebp, word ptr [edi + 0x1c] */ r_ebp = (u32)R16((u32)(r_edi+0x1cu));
    /* 0044315f: cmp ebp, 0x1000 */ {  u32 a = r_ebp; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443165: jge 0x44318f */ if ((fS==fO)) goto L_0044318f;
L_00443167:; BB(0x00443167);
    /* 00443167: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0044316a: test edi, 0x2000800 */ {  u32 a = r_edi; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443170: jne 0x44318f */ if (!fZ) goto L_0044318f;
L_00443172:; BB(0x00443172);
    /* 00443172: mov word ptr [ebx + esi*8 + 0x3c8], bp */ W16((u32)(r_ebx+r_esi*8+0x3c8u), (u16)r_ebp);
    /* 0044317a: mov eax, 1 */ r_eax = 0x1u;
    /* 0044317f: mov word ptr [ebx + esi*8 + 0x3ca], ax */ W16((u32)(r_ebx+r_esi*8+0x3cau), (u16)r_eax);
    /* 00443187: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044318a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0044318f:; BB(0x0044318f);
    /* 0044318f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00443192: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443194: jl 0x443150 */ if ((fS!=fO)) goto L_00443150;
L_00443196:; BB(0x00443196);
    /* 00443196: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00443199: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_0044319d:; BB(0x0044319d);
    /* 0044319d: mov dword ptr [ebx + 0x3c4], esi */ W32((u32)(r_ebx+0x3c4u), r_esi);
    /* 004431a3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004431a5: jle 0x4431c1 */ if ((fZ||fS!=fO)) goto L_004431c1;
L_004431a7:; BB(0x004431a7);
    /* 004431a7: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 004431ab: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004431ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004431ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004431af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004431b0: call 0x6e54a8 */ r_esp -= 4; W32(r_esp, 0x4431b5u); f_006e54a8();
    /* 004431b5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004431b8: jmp 0x4431c1 */ goto L_004431c1;
L_004431ba:; BB(0x004431ba);
    /* 004431ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004431bc: call 0x4437ec */ r_esp -= 4; W32(r_esp, 0x4431c1u); f_004437ec();
L_004431c1:; BB(0x004431c1);
    /* 004431c1: add word ptr [ebx + 0x3a4], 1 */ { u32 ad = (u32)(r_ebx+0x3a4u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_004431c9:; BB(0x004431c9);
    /* 004431c9: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 004431cf: mov dword ptr [ebx + 0x384], 8 */ W32((u32)(r_ebx+0x384u), 0x8u);
    /* 004431d9: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004431de: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 004431e4: mov eax, 0x78 */ r_eax = 0x78u;
    /* 004431e9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004431ec: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 004431f3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004431f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004431f8: jle 0x4435c2 */ if ((fZ||fS!=fO)) goto L_004435c2;
L_004431fe:; BB(0x004431fe);
    /* 004431fe: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443201: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x00442fb9); r_esp += 4; return;
L_004435c2:; BB(0x004435c2);
    /* 004435c2: mov dword ptr [ebx + 0x384], 9 */ W32((u32)(r_ebx+0x384u), 0x9u);
    /* 004435cc: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 004435cf: jmp 0x443551 */ goto L_00443551;
}

