#include "protos.h"

void f_00797034(void) /* sub_797034 */
{
    FN_ENTER(0x00797034);
    /* 00797034: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00797035: mov ebx, esp */ r_ebx = r_esp;
    /* 00797037: and esp, 0xffffffc0 */ {  u32 a = r_esp; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0079703a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079703b: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079703e: mov esi, ecx */ r_esi = r_ecx;
    /* 00797040: push 0x97c948 */ { u32 v = 0x97c948u; r_esp -= 4; W32(r_esp, v); }
    /* 00797045: push 0x40008 */ { u32 v = 0x40008u; r_esp -= 4; W32(r_esp, v); }
    /* 0079704a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79704fu); f_0061cdb0();
    /* 0079704f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00797052: fld dword ptr [esi + 0x60] */ FPUSH(R_F32((u32)(r_esi+0x60u)));
    /* 00797055: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797059: mov dword ptr [esp], 0x4000a */ W32((u32)(r_esp), 0x4000au);
    /* 00797060: mov dword ptr [esp + 4], 0x97c958 */ W32((u32)(r_esp+0x4u), 0x97c958u);
    /* 00797068: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79706du); f_0061cdb0();
    /* 0079706d: fld dword ptr [esi + 0x64] */ FPUSH(R_F32((u32)(r_esi+0x64u)));
    /* 00797070: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797074: mov dword ptr [esp], 0x4000b */ W32((u32)(r_esp), 0x4000bu);
    /* 0079707b: mov dword ptr [esp + 4], 0x97c96c */ W32((u32)(r_esp+0x4u), 0x97c96cu);
    /* 00797083: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797088u); f_0061cdb0();
    /* 00797088: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0079708b: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0079708f: mov dword ptr [esp], 0x4000c */ W32((u32)(r_esp), 0x4000cu);
    /* 00797096: mov dword ptr [esp + 4], 0x97c980 */ W32((u32)(r_esp+0x4u), 0x97c980u);
    /* 0079709e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970a3u); f_0061cdb0();
    /* 007970a3: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 007970a6: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970aa: mov dword ptr [esp], 0x4000f */ W32((u32)(r_esp), 0x4000fu);
    /* 007970b1: mov dword ptr [esp + 4], 0x97c994 */ W32((u32)(r_esp+0x4u), 0x97c994u);
    /* 007970b9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970beu); f_0061cdb0();
    /* 007970be: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 007970c1: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970c5: mov dword ptr [esp], 0x40010 */ W32((u32)(r_esp), 0x40010u);
    /* 007970cc: mov dword ptr [esp + 4], 0x97c9a4 */ W32((u32)(r_esp+0x4u), 0x97c9a4u);
    /* 007970d4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970d9u); f_0061cdb0();
    /* 007970d9: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 007970dc: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970e0: mov dword ptr [esp], 0x40011 */ W32((u32)(r_esp), 0x40011u);
    /* 007970e7: mov dword ptr [esp + 4], 0x97c9b4 */ W32((u32)(r_esp+0x4u), 0x97c9b4u);
    /* 007970ef: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970f4u); f_0061cdb0();
    /* 007970f4: fld dword ptr [esi + 0x70] */ FPUSH(R_F32((u32)(r_esi+0x70u)));
    /* 007970f7: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970fb: mov dword ptr [esp], 0x40014 */ W32((u32)(r_esp), 0x40014u);
    /* 00797102: mov dword ptr [esp + 4], 0x97c9c4 */ W32((u32)(r_esp+0x4u), 0x97c9c4u);
    /* 0079710a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79710fu); f_0061cdb0();
    /* 0079710f: fld dword ptr [esi + 0x74] */ FPUSH(R_F32((u32)(r_esi+0x74u)));
    /* 00797112: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797116: mov dword ptr [esp], 0x40015 */ W32((u32)(r_esp), 0x40015u);
    /* 0079711d: mov dword ptr [esp + 4], 0x97c9dc */ W32((u32)(r_esp+0x4u), 0x97c9dcu);
    /* 00797125: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79712au); f_0061cdb0();
    /* 0079712a: fld dword ptr [esi + 0x78] */ FPUSH(R_F32((u32)(r_esi+0x78u)));
    /* 0079712d: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797131: mov dword ptr [esp], 0x40016 */ W32((u32)(r_esp), 0x40016u);
    /* 00797138: mov dword ptr [esp + 4], 0x97c9f4 */ W32((u32)(r_esp+0x4u), 0x97c9f4u);
    /* 00797140: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797145u); f_0061cdb0();
    /* 00797145: fld dword ptr [esi + 0x50] */ FPUSH(R_F32((u32)(r_esi+0x50u)));
    /* 00797148: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0079714c: mov dword ptr [esp], 0x40019 */ W32((u32)(r_esp), 0x40019u);
    /* 00797153: mov dword ptr [esp + 4], 0x97ca0c */ W32((u32)(r_esp+0x4u), 0x97ca0cu);
    /* 0079715b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797160u); f_0061cdb0();
    /* 00797160: fld dword ptr [esi + 0x54] */ FPUSH(R_F32((u32)(r_esi+0x54u)));
    /* 00797163: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797167: mov dword ptr [esp], 0x4001a */ W32((u32)(r_esp), 0x4001au);
    /* 0079716e: mov dword ptr [esp + 4], 0x97ca24 */ W32((u32)(r_esp+0x4u), 0x97ca24u);
    /* 00797176: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79717bu); f_0061cdb0();
    /* 0079717b: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 0079717e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797182: mov dword ptr [esp], 0x4001b */ W32((u32)(r_esp), 0x4001bu);
    /* 00797189: mov dword ptr [esp + 4], 0x97ca3c */ W32((u32)(r_esp+0x4u), 0x97ca3cu);
    /* 00797191: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797196u); f_0061cdb0();
    /* 00797196: push dword ptr [0xa9d4e4] */ { u32 v = R32((u32)(0xa9d4e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079719c: push 0x97ca54 */ { u32 v = 0x97ca54u; r_esp -= 4; W32(r_esp, v); }
    /* 007971a1: push 0x4001d */ { u32 v = 0x4001du; r_esp -= 4; W32(r_esp, v); }
    /* 007971a6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7971abu); f_0061cdb0();
    /* 007971ab: push dword ptr [0xa9d4e8] */ { u32 v = R32((u32)(0xa9d4e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007971b1: push 0x97ca64 */ { u32 v = 0x97ca64u; r_esp -= 4; W32(r_esp, v); }
    /* 007971b6: push 0x4001e */ { u32 v = 0x4001eu; r_esp -= 4; W32(r_esp, v); }
    /* 007971bb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7971c0u); f_0061cdb0();
    /* 007971c0: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007971c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007971c4: mov esp, ebx */ r_esp = r_ebx;
    /* 007971c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007971c7: ret  */ FN_RET(0x00797034); r_esp += 4; return;
}

void f_0079706f(void)
{
    FN_ENTER(0x0079706f);
    /* 0079706f: fstp qword ptr fs:[esp + 8] */ W_F64((u32)(r_esp+TEB+0x8u), ST(0)); FPOP();
    /* 00797074: mov dword ptr [esp], 0x4000b */ W32((u32)(r_esp), 0x4000bu);
    /* 0079707b: mov dword ptr [esp + 4], 0x97c96c */ W32((u32)(r_esp+0x4u), 0x97c96cu);
    /* 00797083: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797088u); f_0061cdb0();
    /* 00797088: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0079708b: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0079708f: mov dword ptr [esp], 0x4000c */ W32((u32)(r_esp), 0x4000cu);
    /* 00797096: mov dword ptr [esp + 4], 0x97c980 */ W32((u32)(r_esp+0x4u), 0x97c980u);
    /* 0079709e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970a3u); f_0061cdb0();
    /* 007970a3: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 007970a6: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970aa: mov dword ptr [esp], 0x4000f */ W32((u32)(r_esp), 0x4000fu);
    /* 007970b1: mov dword ptr [esp + 4], 0x97c994 */ W32((u32)(r_esp+0x4u), 0x97c994u);
    /* 007970b9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970beu); f_0061cdb0();
    /* 007970be: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 007970c1: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970c5: mov dword ptr [esp], 0x40010 */ W32((u32)(r_esp), 0x40010u);
    /* 007970cc: mov dword ptr [esp + 4], 0x97c9a4 */ W32((u32)(r_esp+0x4u), 0x97c9a4u);
    /* 007970d4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970d9u); f_0061cdb0();
    /* 007970d9: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 007970dc: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970e0: mov dword ptr [esp], 0x40011 */ W32((u32)(r_esp), 0x40011u);
    /* 007970e7: mov dword ptr [esp + 4], 0x97c9b4 */ W32((u32)(r_esp+0x4u), 0x97c9b4u);
    /* 007970ef: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970f4u); f_0061cdb0();
    /* 007970f4: fld dword ptr [esi + 0x70] */ FPUSH(R_F32((u32)(r_esi+0x70u)));
    /* 007970f7: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970fb: mov dword ptr [esp], 0x40014 */ W32((u32)(r_esp), 0x40014u);
    /* 00797102: mov dword ptr [esp + 4], 0x97c9c4 */ W32((u32)(r_esp+0x4u), 0x97c9c4u);
    /* 0079710a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79710fu); f_0061cdb0();
    /* 0079710f: fld dword ptr [esi + 0x74] */ FPUSH(R_F32((u32)(r_esi+0x74u)));
    /* 00797112: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797116: mov dword ptr [esp], 0x40015 */ W32((u32)(r_esp), 0x40015u);
    /* 0079711d: mov dword ptr [esp + 4], 0x97c9dc */ W32((u32)(r_esp+0x4u), 0x97c9dcu);
    /* 00797125: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79712au); f_0061cdb0();
    /* 0079712a: fld dword ptr [esi + 0x78] */ FPUSH(R_F32((u32)(r_esi+0x78u)));
    /* 0079712d: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797131: mov dword ptr [esp], 0x40016 */ W32((u32)(r_esp), 0x40016u);
    /* 00797138: mov dword ptr [esp + 4], 0x97c9f4 */ W32((u32)(r_esp+0x4u), 0x97c9f4u);
    /* 00797140: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797145u); f_0061cdb0();
    /* 00797145: fld dword ptr [esi + 0x50] */ FPUSH(R_F32((u32)(r_esi+0x50u)));
    /* 00797148: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0079714c: mov dword ptr [esp], 0x40019 */ W32((u32)(r_esp), 0x40019u);
    /* 00797153: mov dword ptr [esp + 4], 0x97ca0c */ W32((u32)(r_esp+0x4u), 0x97ca0cu);
    /* 0079715b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797160u); f_0061cdb0();
    /* 00797160: fld dword ptr [esi + 0x54] */ FPUSH(R_F32((u32)(r_esi+0x54u)));
    /* 00797163: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797167: mov dword ptr [esp], 0x4001a */ W32((u32)(r_esp), 0x4001au);
    /* 0079716e: mov dword ptr [esp + 4], 0x97ca24 */ W32((u32)(r_esp+0x4u), 0x97ca24u);
    /* 00797176: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79717bu); f_0061cdb0();
    /* 0079717b: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 0079717e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797182: mov dword ptr [esp], 0x4001b */ W32((u32)(r_esp), 0x4001bu);
    /* 00797189: mov dword ptr [esp + 4], 0x97ca3c */ W32((u32)(r_esp+0x4u), 0x97ca3cu);
    /* 00797191: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797196u); f_0061cdb0();
    /* 00797196: push dword ptr [0xa9d4e4] */ { u32 v = R32((u32)(0xa9d4e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079719c: push 0x97ca54 */ { u32 v = 0x97ca54u; r_esp -= 4; W32(r_esp, v); }
    /* 007971a1: push 0x4001d */ { u32 v = 0x4001du; r_esp -= 4; W32(r_esp, v); }
    /* 007971a6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7971abu); f_0061cdb0();
    /* 007971ab: push dword ptr [0xa9d4e8] */ { u32 v = R32((u32)(0xa9d4e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007971b1: push 0x97ca64 */ { u32 v = 0x97ca64u; r_esp -= 4; W32(r_esp, v); }
    /* 007971b6: push 0x4001e */ { u32 v = 0x4001eu; r_esp -= 4; W32(r_esp, v); }
    /* 007971bb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7971c0u); f_0061cdb0();
    /* 007971c0: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007971c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007971c4: mov esp, ebx */ r_esp = r_ebx;
    /* 007971c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007971c7: ret  */ FN_RET(0x0079706f); r_esp += 4; return;
}

void f_00797070(void)
{
    FN_ENTER(0x00797070);
    /* 00797070: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797074: mov dword ptr [esp], 0x4000b */ W32((u32)(r_esp), 0x4000bu);
    /* 0079707b: mov dword ptr [esp + 4], 0x97c96c */ W32((u32)(r_esp+0x4u), 0x97c96cu);
    /* 00797083: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797088u); f_0061cdb0();
    /* 00797088: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0079708b: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0079708f: mov dword ptr [esp], 0x4000c */ W32((u32)(r_esp), 0x4000cu);
    /* 00797096: mov dword ptr [esp + 4], 0x97c980 */ W32((u32)(r_esp+0x4u), 0x97c980u);
    /* 0079709e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970a3u); f_0061cdb0();
    /* 007970a3: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 007970a6: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970aa: mov dword ptr [esp], 0x4000f */ W32((u32)(r_esp), 0x4000fu);
    /* 007970b1: mov dword ptr [esp + 4], 0x97c994 */ W32((u32)(r_esp+0x4u), 0x97c994u);
    /* 007970b9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970beu); f_0061cdb0();
    /* 007970be: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 007970c1: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970c5: mov dword ptr [esp], 0x40010 */ W32((u32)(r_esp), 0x40010u);
    /* 007970cc: mov dword ptr [esp + 4], 0x97c9a4 */ W32((u32)(r_esp+0x4u), 0x97c9a4u);
    /* 007970d4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970d9u); f_0061cdb0();
    /* 007970d9: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 007970dc: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970e0: mov dword ptr [esp], 0x40011 */ W32((u32)(r_esp), 0x40011u);
    /* 007970e7: mov dword ptr [esp + 4], 0x97c9b4 */ W32((u32)(r_esp+0x4u), 0x97c9b4u);
    /* 007970ef: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7970f4u); f_0061cdb0();
    /* 007970f4: fld dword ptr [esi + 0x70] */ FPUSH(R_F32((u32)(r_esi+0x70u)));
    /* 007970f7: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007970fb: mov dword ptr [esp], 0x40014 */ W32((u32)(r_esp), 0x40014u);
    /* 00797102: mov dword ptr [esp + 4], 0x97c9c4 */ W32((u32)(r_esp+0x4u), 0x97c9c4u);
    /* 0079710a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79710fu); f_0061cdb0();
    /* 0079710f: fld dword ptr [esi + 0x74] */ FPUSH(R_F32((u32)(r_esi+0x74u)));
    /* 00797112: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797116: mov dword ptr [esp], 0x40015 */ W32((u32)(r_esp), 0x40015u);
    /* 0079711d: mov dword ptr [esp + 4], 0x97c9dc */ W32((u32)(r_esp+0x4u), 0x97c9dcu);
    /* 00797125: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79712au); f_0061cdb0();
    /* 0079712a: fld dword ptr [esi + 0x78] */ FPUSH(R_F32((u32)(r_esi+0x78u)));
    /* 0079712d: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797131: mov dword ptr [esp], 0x40016 */ W32((u32)(r_esp), 0x40016u);
    /* 00797138: mov dword ptr [esp + 4], 0x97c9f4 */ W32((u32)(r_esp+0x4u), 0x97c9f4u);
    /* 00797140: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797145u); f_0061cdb0();
    /* 00797145: fld dword ptr [esi + 0x50] */ FPUSH(R_F32((u32)(r_esi+0x50u)));
    /* 00797148: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0079714c: mov dword ptr [esp], 0x40019 */ W32((u32)(r_esp), 0x40019u);
    /* 00797153: mov dword ptr [esp + 4], 0x97ca0c */ W32((u32)(r_esp+0x4u), 0x97ca0cu);
    /* 0079715b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797160u); f_0061cdb0();
    /* 00797160: fld dword ptr [esi + 0x54] */ FPUSH(R_F32((u32)(r_esi+0x54u)));
    /* 00797163: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797167: mov dword ptr [esp], 0x4001a */ W32((u32)(r_esp), 0x4001au);
    /* 0079716e: mov dword ptr [esp + 4], 0x97ca24 */ W32((u32)(r_esp+0x4u), 0x97ca24u);
    /* 00797176: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79717bu); f_0061cdb0();
    /* 0079717b: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 0079717e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00797182: mov dword ptr [esp], 0x4001b */ W32((u32)(r_esp), 0x4001bu);
    /* 00797189: mov dword ptr [esp + 4], 0x97ca3c */ W32((u32)(r_esp+0x4u), 0x97ca3cu);
    /* 00797191: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x797196u); f_0061cdb0();
    /* 00797196: push dword ptr [0xa9d4e4] */ { u32 v = R32((u32)(0xa9d4e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079719c: push 0x97ca54 */ { u32 v = 0x97ca54u; r_esp -= 4; W32(r_esp, v); }
    /* 007971a1: push 0x4001d */ { u32 v = 0x4001du; r_esp -= 4; W32(r_esp, v); }
    /* 007971a6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7971abu); f_0061cdb0();
    /* 007971ab: push dword ptr [0xa9d4e8] */ { u32 v = R32((u32)(0xa9d4e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007971b1: push 0x97ca64 */ { u32 v = 0x97ca64u; r_esp -= 4; W32(r_esp, v); }
    /* 007971b6: push 0x4001e */ { u32 v = 0x4001eu; r_esp -= 4; W32(r_esp, v); }
    /* 007971bb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7971c0u); f_0061cdb0();
    /* 007971c0: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007971c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007971c4: mov esp, ebx */ r_esp = r_ebx;
    /* 007971c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007971c7: ret  */ FN_RET(0x00797070); r_esp += 4; return;
}

void f_007971c8(void) /* sub_7971C8 */
{
    FN_ENTER(0x007971c8);
    /* 007971c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007971c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007971cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007971cd: push 0x8f52ec */ { u32 v = 0x8f52ecu; r_esp -= 4; W32(r_esp, v); }
    /* 007971d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007971d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007971d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007971e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007971e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007971e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007971e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007971ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007971ef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007971f2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007971f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007971fc: mov dword ptr [ecx], 0xb45c50 */ W32((u32)(r_ecx), 0xb45c50u);
    /* 00797202: call 0x797370 */ r_esp -= 4; W32(r_esp, 0x797207u); f_00797370();
    /* 00797207: call 0x797384 */ r_esp -= 4; W32(r_esp, 0x79720cu); f_00797384();
    /* 0079720c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00797211: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00797214: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797216: je 0x79722b */ if (fZ) goto L_0079722b;
L_00797218:; BB(0x00797218);
    /* 00797218: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079721a: je 0x797224 */ if (fZ) goto L_00797224;
L_0079721c:; BB(0x0079721c);
    /* 0079721c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079721e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00797220: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00797222: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x797224u); call_ind(t); }
L_00797224:; BB(0x00797224);
    /* 00797224: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00797227: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797229: jne 0x797218 */ if (!fZ) goto L_00797218;
L_0079722b:; BB(0x0079722b);
    /* 0079722b: movzx eax, byte ptr [0xaab1e8] */ r_eax = (u32)R8((u32)(0xaab1e8u));
    /* 00797232: movzx edx, byte ptr [0xaab1e9] */ r_edx = (u32)R8((u32)(0xaab1e9u));
    /* 00797239: movzx ecx, byte ptr [0xaab1ea] */ r_ecx = (u32)R8((u32)(0xaab1eau));
    /* 00797240: movzx ebx, byte ptr [0xaab1eb] */ r_ebx = (u32)R8((u32)(0xaab1ebu));
    /* 00797247: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797249: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079724b: movzx esi, byte ptr [0xaab1ec] */ r_esi = (u32)R8((u32)(0xaab1ecu));
    /* 00797252: movzx edi, byte ptr [0xaab1ed] */ r_edi = (u32)R8((u32)(0xaab1edu));
    /* 00797259: movzx edx, byte ptr [0xaab1ee] */ r_edx = (u32)R8((u32)(0xaab1eeu));
    /* 00797260: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797262: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797264: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797266: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797268: movzx edx, byte ptr [0xaab1ef] */ r_edx = (u32)R8((u32)(0xaab1efu));
    /* 0079726f: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00797271: je 0x79729c */ if (fZ) goto L_0079729c;
L_00797273:; BB(0x00797273);
    /* 00797273: push 0xaab1e8 */ { u32 v = 0xaab1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00797278: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x79727du); f_006dc358();
    /* 0079727d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079727e: mov edx, 0xaab1e8 */ r_edx = 0xaab1e8u;
    /* 00797283: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797285: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00797287: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0079728a: mov edx, 0xaab1d8 */ r_edx = 0xaab1d8u;
    /* 0079728f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797291: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00797293: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00797296: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00797299: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_0079729c:; BB(0x0079729c);
    /* 0079729c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079729e: mov dword ptr [0xaab284], edx */ W32((u32)(0xaab284u), r_edx);
    /* 007972a4: mov dword ptr [0xaab280], edx */ W32((u32)(0xaab280u), r_edx);
    /* 007972aa: mov eax, 1 */ r_eax = 0x1u;
    /* 007972af: mov dword ptr [0xaab21c], edx */ W32((u32)(0xaab21cu), r_edx);
    /* 007972b5: mov word ptr [0xaab228], dx */ W16((u32)(0xaab228u), (u16)r_edx);
    /* 007972bc: mov word ptr [0xaab224], dx */ W16((u32)(0xaab224u), (u16)r_edx);
    /* 007972c3: mov dword ptr [0xaab220], edx */ W32((u32)(0xaab220u), r_edx);
    /* 007972c9: mov dword ptr [0xaab218], edx */ W32((u32)(0xaab218u), r_edx);
    /* 007972cf: mov dword ptr [0xaab27c], eax */ W32((u32)(0xaab27cu), r_eax);
    /* 007972d4: mov dword ptr [0xaab214], edx */ W32((u32)(0xaab214u), r_edx);
    /* 007972da: mov dword ptr [0xaab210], edx */ W32((u32)(0xaab210u), r_edx);
    /* 007972e0: mov dword ptr [0xaab278], edx */ W32((u32)(0xaab278u), r_edx);
    /* 007972e6: mov dword ptr [0xaab20c], edx */ W32((u32)(0xaab20cu), r_edx);
    /* 007972ec: mov dword ptr [0xaab208], edx */ W32((u32)(0xaab208u), r_edx);
    /* 007972f2: mov dword ptr [0xaab204], edx */ W32((u32)(0xaab204u), r_edx);
    /* 007972f8: mov dword ptr [0xaab200], edx */ W32((u32)(0xaab200u), r_edx);
    /* 007972fe: mov dword ptr [0xaab1fc], edx */ W32((u32)(0xaab1fcu), r_edx);
    /* 00797304: mov dword ptr [0xaab1f8], eax */ W32((u32)(0xaab1f8u), r_eax);
    /* 00797309: mov dword ptr [0xaab1f4], edx */ W32((u32)(0xaab1f4u), r_edx);
    /* 0079730f: mov dword ptr [0xaab2a0], edx */ W32((u32)(0xaab2a0u), r_edx);
    /* 00797315: mov dword ptr [0xaab29c], edx */ W32((u32)(0xaab29cu), r_edx);
    /* 0079731b: mov dword ptr [0xaab180], edx */ W32((u32)(0xaab180u), r_edx);
    /* 00797321: mov dword ptr [0xaab194], eax */ W32((u32)(0xaab194u), r_eax);
    /* 00797326: mov dword ptr [0xaab198], edx */ W32((u32)(0xaab198u), r_edx);
    /* 0079732c: mov dword ptr [0xa49508], edx */ W32((u32)(0xa49508u), r_edx);
    /* 00797332: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00797339: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0079733c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x797341u); f_008171e8();
    /* 00797341: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00797344: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00797346: jne 0x797361 */ if (!fZ) goto L_00797361;
L_00797348:; BB(0x00797348);
    /* 00797348: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079734b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079734e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00797351: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00797354: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079735b: mov esp, ebp */ r_esp = r_ebp;
    /* 0079735d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079735e: ret 4 */ FN_RET(0x007971c8); r_esp += 8; return;
L_00797361:; BB(0x00797361);
    /* 00797361: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00797364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00797365: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x79736au); f_005c2f74();
    /* 0079736a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079736b: jmp 0x797348 */ goto L_00797348;
}

void f_00797261(void)
{
    FN_ENTER(0x00797261);
    /* 00797261: ret  */ FN_RET(0x00797261); r_esp += 4; return;
}

void f_0079726f(void)
{
    FN_ENTER(0x0079726f);
    /* 0079726f: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00797271: je 0x79729c */ if (fZ) goto L_0079729c;
L_00797273:; BB(0x00797273);
    /* 00797273: push 0xaab1e8 */ { u32 v = 0xaab1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00797278: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x79727du); f_006dc358();
    /* 0079727d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079727e: mov edx, 0xaab1e8 */ r_edx = 0xaab1e8u;
    /* 00797283: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797285: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00797287: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0079728a: mov edx, 0xaab1d8 */ r_edx = 0xaab1d8u;
    /* 0079728f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797291: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00797293: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00797296: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00797299: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_0079729c:; BB(0x0079729c);
    /* 0079729c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079729e: mov dword ptr [0xaab284], edx */ W32((u32)(0xaab284u), r_edx);
    /* 007972a4: mov dword ptr [0xaab280], edx */ W32((u32)(0xaab280u), r_edx);
    /* 007972aa: mov eax, 1 */ r_eax = 0x1u;
    /* 007972af: mov dword ptr [0xaab21c], edx */ W32((u32)(0xaab21cu), r_edx);
    /* 007972b5: mov word ptr [0xaab228], dx */ W16((u32)(0xaab228u), (u16)r_edx);
    /* 007972bc: mov word ptr [0xaab224], dx */ W16((u32)(0xaab224u), (u16)r_edx);
    /* 007972c3: mov dword ptr [0xaab220], edx */ W32((u32)(0xaab220u), r_edx);
    /* 007972c9: mov dword ptr [0xaab218], edx */ W32((u32)(0xaab218u), r_edx);
    /* 007972cf: mov dword ptr [0xaab27c], eax */ W32((u32)(0xaab27cu), r_eax);
    /* 007972d4: mov dword ptr [0xaab214], edx */ W32((u32)(0xaab214u), r_edx);
    /* 007972da: mov dword ptr [0xaab210], edx */ W32((u32)(0xaab210u), r_edx);
    /* 007972e0: mov dword ptr [0xaab278], edx */ W32((u32)(0xaab278u), r_edx);
    /* 007972e6: mov dword ptr [0xaab20c], edx */ W32((u32)(0xaab20cu), r_edx);
    /* 007972ec: mov dword ptr [0xaab208], edx */ W32((u32)(0xaab208u), r_edx);
    /* 007972f2: mov dword ptr [0xaab204], edx */ W32((u32)(0xaab204u), r_edx);
    /* 007972f8: mov dword ptr [0xaab200], edx */ W32((u32)(0xaab200u), r_edx);
    /* 007972fe: mov dword ptr [0xaab1fc], edx */ W32((u32)(0xaab1fcu), r_edx);
    /* 00797304: mov dword ptr [0xaab1f8], eax */ W32((u32)(0xaab1f8u), r_eax);
    /* 00797309: mov dword ptr [0xaab1f4], edx */ W32((u32)(0xaab1f4u), r_edx);
    /* 0079730f: mov dword ptr [0xaab2a0], edx */ W32((u32)(0xaab2a0u), r_edx);
    /* 00797315: mov dword ptr [0xaab29c], edx */ W32((u32)(0xaab29cu), r_edx);
    /* 0079731b: mov dword ptr [0xaab180], edx */ W32((u32)(0xaab180u), r_edx);
    /* 00797321: mov dword ptr [0xaab194], eax */ W32((u32)(0xaab194u), r_eax);
    /* 00797326: mov dword ptr [0xaab198], edx */ W32((u32)(0xaab198u), r_edx);
    /* 0079732c: mov dword ptr [0xa49508], edx */ W32((u32)(0xa49508u), r_edx);
    /* 00797332: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00797339: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0079733c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x797341u); f_008171e8();
    /* 00797341: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00797344: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00797346: jne 0x797361 */ if (!fZ) goto L_00797361;
L_00797348:; BB(0x00797348);
    /* 00797348: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079734b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079734e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00797351: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00797354: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079735b: mov esp, ebp */ r_esp = r_ebp;
    /* 0079735d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079735e: ret 4 */ FN_RET(0x0079726f); r_esp += 8; return;
L_00797361:; BB(0x00797361);
    /* 00797361: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00797364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00797365: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x79736au); f_005c2f74();
    /* 0079736a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079736b: jmp 0x797348 */ goto L_00797348;
}

void f_00797370(void) /* sub_797370 */
{
    FN_ENTER(0x00797370);
    /* 00797370: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00797373: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00797375: je 0x797380 */ if (fZ) goto L_00797380;
L_00797377:; BB(0x00797377);
    /* 00797377: je 0x797380 */ if (fZ) goto L_00797380;
L_00797379:; BB(0x00797379);
    /* 00797379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079737a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79737fu); f_00857e98();
    /* 0079737f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00797380:; BB(0x00797380);
    /* 00797380: ret  */ FN_RET(0x00797370); r_esp += 4; return;
}

void f_00797384(void) /* sub_797384 */
{
    FN_ENTER(0x00797384);
    /* 00797384: mov edx, dword ptr [0xaab274] */ r_edx = R32((u32)(0xaab274u));
    /* 0079738a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079738c: je 0x7973a5 */ if (fZ) goto L_007973a5;
L_0079738e:; BB(0x0079738e);
    /* 0079738e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797392: mov dword ptr [0xaab274], 0 */ W32((u32)(0xaab274u), 0x0u);
    /* 0079739c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007973a1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007973a5:; BB(0x007973a5);
    /* 007973a5: mov edx, dword ptr [0xaab270] */ r_edx = R32((u32)(0xaab270u));
    /* 007973ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007973ad: je 0x7973c6 */ if (fZ) goto L_007973c6;
L_007973af:; BB(0x007973af);
    /* 007973af: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007973b3: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
    /* 007973bd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007973c2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007973c6:; BB(0x007973c6);
    /* 007973c6: mov edx, dword ptr [0xaab23c] */ r_edx = R32((u32)(0xaab23cu));
    /* 007973cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007973ce: je 0x7973e7 */ if (fZ) goto L_007973e7;
L_007973d0:; BB(0x007973d0);
    /* 007973d0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007973d4: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
    /* 007973de: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007973e3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007973e7:; BB(0x007973e7);
    /* 007973e7: mov edx, dword ptr [0xaab268] */ r_edx = R32((u32)(0xaab268u));
    /* 007973ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007973ef: je 0x797408 */ if (fZ) goto L_00797408;
L_007973f1:; BB(0x007973f1);
    /* 007973f1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007973f5: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 007973ff: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797404: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797408:; BB(0x00797408);
    /* 00797408: mov edx, dword ptr [0xaab26c] */ r_edx = R32((u32)(0xaab26cu));
    /* 0079740e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797410: je 0x797429 */ if (fZ) goto L_00797429;
L_00797412:; BB(0x00797412);
    /* 00797412: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797416: mov dword ptr [0xaab26c], 0 */ W32((u32)(0xaab26cu), 0x0u);
    /* 00797420: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797425: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797429:; BB(0x00797429);
    /* 00797429: mov edx, dword ptr [0xaab264] */ r_edx = R32((u32)(0xaab264u));
    /* 0079742f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797431: je 0x79744a */ if (fZ) goto L_0079744a;
L_00797433:; BB(0x00797433);
    /* 00797433: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797437: mov dword ptr [0xaab264], 0 */ W32((u32)(0xaab264u), 0x0u);
    /* 00797441: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797446: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079744a:; BB(0x0079744a);
    /* 0079744a: mov edx, dword ptr [0xaab260] */ r_edx = R32((u32)(0xaab260u));
    /* 00797450: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797452: je 0x79746b */ if (fZ) goto L_0079746b;
L_00797454:; BB(0x00797454);
    /* 00797454: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797458: mov dword ptr [0xaab260], 0 */ W32((u32)(0xaab260u), 0x0u);
    /* 00797462: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797467: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079746b:; BB(0x0079746b);
    /* 0079746b: mov edx, dword ptr [0xaab25c] */ r_edx = R32((u32)(0xaab25cu));
    /* 00797471: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797473: je 0x79748c */ if (fZ) goto L_0079748c;
L_00797475:; BB(0x00797475);
    /* 00797475: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797479: mov dword ptr [0xaab25c], 0 */ W32((u32)(0xaab25cu), 0x0u);
    /* 00797483: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797488: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079748c:; BB(0x0079748c);
    /* 0079748c: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
    /* 00797492: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797494: je 0x7974ad */ if (fZ) goto L_007974ad;
L_00797496:; BB(0x00797496);
    /* 00797496: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079749a: mov dword ptr [0xaab258], 0 */ W32((u32)(0xaab258u), 0x0u);
    /* 007974a4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007974a9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007974ad:; BB(0x007974ad);
    /* 007974ad: mov edx, dword ptr [0xaab254] */ r_edx = R32((u32)(0xaab254u));
    /* 007974b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007974b5: je 0x7974ce */ if (fZ) goto L_007974ce;
L_007974b7:; BB(0x007974b7);
    /* 007974b7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007974bb: mov dword ptr [0xaab254], 0 */ W32((u32)(0xaab254u), 0x0u);
    /* 007974c5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007974ca: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007974ce:; BB(0x007974ce);
    /* 007974ce: mov edx, dword ptr [0xaab250] */ r_edx = R32((u32)(0xaab250u));
    /* 007974d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007974d6: je 0x7974ef */ if (fZ) goto L_007974ef;
L_007974d8:; BB(0x007974d8);
    /* 007974d8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007974dc: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
    /* 007974e6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007974eb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007974ef:; BB(0x007974ef);
    /* 007974ef: mov edx, dword ptr [0xaab24c] */ r_edx = R32((u32)(0xaab24cu));
    /* 007974f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007974f7: je 0x797510 */ if (fZ) goto L_00797510;
L_007974f9:; BB(0x007974f9);
    /* 007974f9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007974fd: mov dword ptr [0xaab24c], 0 */ W32((u32)(0xaab24cu), 0x0u);
    /* 00797507: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079750c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797510:; BB(0x00797510);
    /* 00797510: mov edx, dword ptr [0xaab248] */ r_edx = R32((u32)(0xaab248u));
    /* 00797516: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797518: je 0x797531 */ if (fZ) goto L_00797531;
L_0079751a:; BB(0x0079751a);
    /* 0079751a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079751e: mov dword ptr [0xaab248], 0 */ W32((u32)(0xaab248u), 0x0u);
    /* 00797528: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079752d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797531:; BB(0x00797531);
    /* 00797531: mov edx, dword ptr [0xaab230] */ r_edx = R32((u32)(0xaab230u));
    /* 00797537: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797539: je 0x797552 */ if (fZ) goto L_00797552;
L_0079753b:; BB(0x0079753b);
    /* 0079753b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079753f: mov dword ptr [0xaab230], 0 */ W32((u32)(0xaab230u), 0x0u);
    /* 00797549: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079754e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797552:; BB(0x00797552);
    /* 00797552: mov edx, dword ptr [0xaab22c] */ r_edx = R32((u32)(0xaab22cu));
    /* 00797558: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079755a: je 0x797573 */ if (fZ) goto L_00797573;
L_0079755c:; BB(0x0079755c);
    /* 0079755c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797560: mov dword ptr [0xaab22c], 0 */ W32((u32)(0xaab22cu), 0x0u);
    /* 0079756a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079756f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797573:; BB(0x00797573);
    /* 00797573: mov edx, dword ptr [0xaab244] */ r_edx = R32((u32)(0xaab244u));
    /* 00797579: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079757b: je 0x797594 */ if (fZ) goto L_00797594;
L_0079757d:; BB(0x0079757d);
    /* 0079757d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797581: mov dword ptr [0xaab244], 0 */ W32((u32)(0xaab244u), 0x0u);
    /* 0079758b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797590: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797594:; BB(0x00797594);
    /* 00797594: mov edx, dword ptr [0xaab238] */ r_edx = R32((u32)(0xaab238u));
    /* 0079759a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079759c: je 0x7975b5 */ if (fZ) goto L_007975b5;
L_0079759e:; BB(0x0079759e);
    /* 0079759e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007975a2: mov dword ptr [0xaab238], 0 */ W32((u32)(0xaab238u), 0x0u);
    /* 007975ac: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007975b1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007975b5:; BB(0x007975b5);
    /* 007975b5: mov edx, dword ptr [0xaab234] */ r_edx = R32((u32)(0xaab234u));
    /* 007975bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007975bd: je 0x7975d6 */ if (fZ) goto L_007975d6;
L_007975bf:; BB(0x007975bf);
    /* 007975bf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007975c3: mov dword ptr [0xaab234], 0 */ W32((u32)(0xaab234u), 0x0u);
    /* 007975cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007975d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007975d6:; BB(0x007975d6);
    /* 007975d6: mov edx, dword ptr [0xaab240] */ r_edx = R32((u32)(0xaab240u));
    /* 007975dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007975de: je 0x7975f7 */ if (fZ) goto L_007975f7;
L_007975e0:; BB(0x007975e0);
    /* 007975e0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007975e4: mov dword ptr [0xaab240], 0 */ W32((u32)(0xaab240u), 0x0u);
    /* 007975ee: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007975f3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007975f7:; BB(0x007975f7);
    /* 007975f7: ret  */ FN_RET(0x00797384); r_esp += 4; return;
}

void f_00797469(void)
{
    FN_ENTER(0x00797469);
    /* 00797469: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079746a: or byte ptr [ebx - 0x554da3eb], cl */ { u32 ad = (u32)(r_ebx+0xaab25c15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00797470: add byte ptr [ebp + 0xf1774d2], al */ { u32 ad = (u32)(r_ebp+0xf1774d2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00797476: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 00797478: or bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0079747a: add eax, 0xaab25c */ {  u32 a = r_eax; u32 b = 0xaab25cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079747f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00797481: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00797483: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797488: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0079748c: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
    /* 00797492: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797494: je 0x7974ad */ if (fZ) goto L_007974ad;
L_00797496:; BB(0x00797496);
    /* 00797496: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079749a: mov dword ptr [0xaab258], 0 */ W32((u32)(0xaab258u), 0x0u);
    /* 007974a4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007974a9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007974ad:; BB(0x007974ad);
    /* 007974ad: mov edx, dword ptr [0xaab254] */ r_edx = R32((u32)(0xaab254u));
    /* 007974b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007974b5: je 0x7974ce */ if (fZ) goto L_007974ce;
L_007974b7:; BB(0x007974b7);
    /* 007974b7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007974bb: mov dword ptr [0xaab254], 0 */ W32((u32)(0xaab254u), 0x0u);
    /* 007974c5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007974ca: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007974ce:; BB(0x007974ce);
    /* 007974ce: mov edx, dword ptr [0xaab250] */ r_edx = R32((u32)(0xaab250u));
    /* 007974d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007974d6: je 0x7974ef */ if (fZ) goto L_007974ef;
L_007974d8:; BB(0x007974d8);
    /* 007974d8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007974dc: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
    /* 007974e6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007974eb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007974ef:; BB(0x007974ef);
    /* 007974ef: mov edx, dword ptr [0xaab24c] */ r_edx = R32((u32)(0xaab24cu));
    /* 007974f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007974f7: je 0x797510 */ if (fZ) goto L_00797510;
L_007974f9:; BB(0x007974f9);
    /* 007974f9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007974fd: mov dword ptr [0xaab24c], 0 */ W32((u32)(0xaab24cu), 0x0u);
    /* 00797507: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079750c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797510:; BB(0x00797510);
    /* 00797510: mov edx, dword ptr [0xaab248] */ r_edx = R32((u32)(0xaab248u));
    /* 00797516: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797518: je 0x797531 */ if (fZ) goto L_00797531;
L_0079751a:; BB(0x0079751a);
    /* 0079751a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079751e: mov dword ptr [0xaab248], 0 */ W32((u32)(0xaab248u), 0x0u);
    /* 00797528: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079752d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797531:; BB(0x00797531);
    /* 00797531: mov edx, dword ptr [0xaab230] */ r_edx = R32((u32)(0xaab230u));
    /* 00797537: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797539: je 0x797552 */ if (fZ) goto L_00797552;
L_0079753b:; BB(0x0079753b);
    /* 0079753b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079753f: mov dword ptr [0xaab230], 0 */ W32((u32)(0xaab230u), 0x0u);
    /* 00797549: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079754e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797552:; BB(0x00797552);
    /* 00797552: mov edx, dword ptr [0xaab22c] */ r_edx = R32((u32)(0xaab22cu));
    /* 00797558: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079755a: je 0x797573 */ if (fZ) goto L_00797573;
L_0079755c:; BB(0x0079755c);
    /* 0079755c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797560: mov dword ptr [0xaab22c], 0 */ W32((u32)(0xaab22cu), 0x0u);
    /* 0079756a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079756f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797573:; BB(0x00797573);
    /* 00797573: mov edx, dword ptr [0xaab244] */ r_edx = R32((u32)(0xaab244u));
    /* 00797579: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079757b: je 0x797594 */ if (fZ) goto L_00797594;
L_0079757d:; BB(0x0079757d);
    /* 0079757d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797581: mov dword ptr [0xaab244], 0 */ W32((u32)(0xaab244u), 0x0u);
    /* 0079758b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797590: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797594:; BB(0x00797594);
    /* 00797594: mov edx, dword ptr [0xaab238] */ r_edx = R32((u32)(0xaab238u));
    /* 0079759a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079759c: je 0x7975b5 */ if (fZ) goto L_007975b5;
L_0079759e:; BB(0x0079759e);
    /* 0079759e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007975a2: mov dword ptr [0xaab238], 0 */ W32((u32)(0xaab238u), 0x0u);
    /* 007975ac: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007975b1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007975b5:; BB(0x007975b5);
    /* 007975b5: mov edx, dword ptr [0xaab234] */ r_edx = R32((u32)(0xaab234u));
    /* 007975bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007975bd: je 0x7975d6 */ if (fZ) goto L_007975d6;
L_007975bf:; BB(0x007975bf);
    /* 007975bf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007975c3: mov dword ptr [0xaab234], 0 */ W32((u32)(0xaab234u), 0x0u);
    /* 007975cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007975d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007975d6:; BB(0x007975d6);
    /* 007975d6: mov edx, dword ptr [0xaab240] */ r_edx = R32((u32)(0xaab240u));
    /* 007975dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007975de: je 0x7975f7 */ if (fZ) goto L_007975f7;
L_007975e0:; BB(0x007975e0);
    /* 007975e0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007975e4: mov dword ptr [0xaab240], 0 */ W32((u32)(0xaab240u), 0x0u);
    /* 007975ee: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007975f3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007975f7:; BB(0x007975f7);
    /* 007975f7: ret  */ FN_RET(0x00797469); r_esp += 4; return;
}

void f_00797470(void)
{
    FN_ENTER(0x00797470);
    /* 00797470: add byte ptr [ebp + 0xf1774d2], al */ { u32 ad = (u32)(r_ebp+0xf1774d2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00797476: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 00797478: or bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0079747a: add eax, 0xaab25c */ {  u32 a = r_eax; u32 b = 0xaab25cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079747f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00797481: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00797483: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797488: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0079748c: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
    /* 00797492: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797494: je 0x7974ad */ if (fZ) goto L_007974ad;
L_00797496:; BB(0x00797496);
    /* 00797496: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079749a: mov dword ptr [0xaab258], 0 */ W32((u32)(0xaab258u), 0x0u);
    /* 007974a4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007974a9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007974ad:; BB(0x007974ad);
    /* 007974ad: mov edx, dword ptr [0xaab254] */ r_edx = R32((u32)(0xaab254u));
    /* 007974b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007974b5: je 0x7974ce */ if (fZ) goto L_007974ce;
L_007974b7:; BB(0x007974b7);
    /* 007974b7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007974bb: mov dword ptr [0xaab254], 0 */ W32((u32)(0xaab254u), 0x0u);
    /* 007974c5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007974ca: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007974ce:; BB(0x007974ce);
    /* 007974ce: mov edx, dword ptr [0xaab250] */ r_edx = R32((u32)(0xaab250u));
    /* 007974d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007974d6: je 0x7974ef */ if (fZ) goto L_007974ef;
L_007974d8:; BB(0x007974d8);
    /* 007974d8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007974dc: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
    /* 007974e6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007974eb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007974ef:; BB(0x007974ef);
    /* 007974ef: mov edx, dword ptr [0xaab24c] */ r_edx = R32((u32)(0xaab24cu));
    /* 007974f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007974f7: je 0x797510 */ if (fZ) goto L_00797510;
L_007974f9:; BB(0x007974f9);
    /* 007974f9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007974fd: mov dword ptr [0xaab24c], 0 */ W32((u32)(0xaab24cu), 0x0u);
    /* 00797507: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079750c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797510:; BB(0x00797510);
    /* 00797510: mov edx, dword ptr [0xaab248] */ r_edx = R32((u32)(0xaab248u));
    /* 00797516: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797518: je 0x797531 */ if (fZ) goto L_00797531;
L_0079751a:; BB(0x0079751a);
    /* 0079751a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079751e: mov dword ptr [0xaab248], 0 */ W32((u32)(0xaab248u), 0x0u);
    /* 00797528: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079752d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797531:; BB(0x00797531);
    /* 00797531: mov edx, dword ptr [0xaab230] */ r_edx = R32((u32)(0xaab230u));
    /* 00797537: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797539: je 0x797552 */ if (fZ) goto L_00797552;
L_0079753b:; BB(0x0079753b);
    /* 0079753b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079753f: mov dword ptr [0xaab230], 0 */ W32((u32)(0xaab230u), 0x0u);
    /* 00797549: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079754e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797552:; BB(0x00797552);
    /* 00797552: mov edx, dword ptr [0xaab22c] */ r_edx = R32((u32)(0xaab22cu));
    /* 00797558: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079755a: je 0x797573 */ if (fZ) goto L_00797573;
L_0079755c:; BB(0x0079755c);
    /* 0079755c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797560: mov dword ptr [0xaab22c], 0 */ W32((u32)(0xaab22cu), 0x0u);
    /* 0079756a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079756f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797573:; BB(0x00797573);
    /* 00797573: mov edx, dword ptr [0xaab244] */ r_edx = R32((u32)(0xaab244u));
    /* 00797579: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079757b: je 0x797594 */ if (fZ) goto L_00797594;
L_0079757d:; BB(0x0079757d);
    /* 0079757d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00797581: mov dword ptr [0xaab244], 0 */ W32((u32)(0xaab244u), 0x0u);
    /* 0079758b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00797590: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00797594:; BB(0x00797594);
    /* 00797594: mov edx, dword ptr [0xaab238] */ r_edx = R32((u32)(0xaab238u));
    /* 0079759a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079759c: je 0x7975b5 */ if (fZ) goto L_007975b5;
L_0079759e:; BB(0x0079759e);
    /* 0079759e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007975a2: mov dword ptr [0xaab238], 0 */ W32((u32)(0xaab238u), 0x0u);
    /* 007975ac: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007975b1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007975b5:; BB(0x007975b5);
    /* 007975b5: mov edx, dword ptr [0xaab234] */ r_edx = R32((u32)(0xaab234u));
    /* 007975bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007975bd: je 0x7975d6 */ if (fZ) goto L_007975d6;
L_007975bf:; BB(0x007975bf);
    /* 007975bf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007975c3: mov dword ptr [0xaab234], 0 */ W32((u32)(0xaab234u), 0x0u);
    /* 007975cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007975d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007975d6:; BB(0x007975d6);
    /* 007975d6: mov edx, dword ptr [0xaab240] */ r_edx = R32((u32)(0xaab240u));
    /* 007975dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007975de: je 0x7975f7 */ if (fZ) goto L_007975f7;
L_007975e0:; BB(0x007975e0);
    /* 007975e0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007975e4: mov dword ptr [0xaab240], 0 */ W32((u32)(0xaab240u), 0x0u);
    /* 007975ee: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007975f3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007975f7:; BB(0x007975f7);
    /* 007975f7: ret  */ FN_RET(0x00797470); r_esp += 4; return;
}

void f_007975f8(void) /* sub_7975F8 */
{
    FN_ENTER(0x007975f8);
    /* 007975f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007975f9: mov ebp, esp */ r_ebp = r_esp;
    /* 007975fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007975fd: push 0x8f5308 */ { u32 v = 0x8f5308u; r_esp -= 4; W32(r_esp, v); }
    /* 00797602: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00797608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00797609: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00797610: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00797613: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00797616: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00797619: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0079761c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0079761f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00797622: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00797625: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079762c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x797631u); f_008171e8();
    /* 00797631: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00797634: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00797636: jne 0x797648 */ if (!fZ) goto L_00797648;
L_00797638:; BB(0x00797638);
    /* 00797638: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079763b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00797642: mov esp, ebp */ r_esp = r_ebp;
    /* 00797644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00797645: ret 4 */ FN_RET(0x007975f8); r_esp += 8; return;
L_00797648:; BB(0x00797648);
    /* 00797648: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0079764b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079764c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x797651u); f_005c2f74();
    /* 00797651: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00797652: jmp 0x797638 */ goto L_00797638;
}

void f_00797654(void) /* sub_797654 */
{
    FN_ENTER(0x00797654);
    /* 00797654: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00797655: mov ebp, esp */ r_ebp = r_esp;
    /* 00797657: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00797659: push 0x8f5372 */ { u32 v = 0x8f5372u; r_esp -= 4; W32(r_esp, v); }
    /* 0079765e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00797664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00797665: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079766c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079766f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00797672: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00797675: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00797678: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0079767b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079767d: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797682: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00797687: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0079768a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079768c: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0079768f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00797691: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00797694: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00797697: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0079769a: lea edx, [ecx + 0x44] */ r_edx = (u32)(r_ecx+0x44u);
    /* 0079769d: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 007976a0: lea eax, [ecx + 0x424] */ r_eax = (u32)(r_ecx+0x424u);
    /* 007976a6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 007976a9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007976ac: lea eax, [ecx + 0x428] */ r_eax = (u32)(r_ecx+0x428u);
    /* 007976b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007976b3: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7976b8u); f_00858736();
    /* 007976b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007976bf: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007976c4: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007976c9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007976cc: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007976ce: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007976d1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007976d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007976d4: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7976d9u); f_00858736();
    /* 007976d9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007976dc: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 007976e2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007976e9: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007976ee: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007976f3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007976f6: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007976f8: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 007976fb: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007976fe: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00797701: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00797703: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00797704: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x797709u); f_00858736();
    /* 00797709: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00797710: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797715: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 0079771a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079771d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079771f: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00797722: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00797724: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00797725: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x79772au); f_00858736();
    /* 0079772a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079772d: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00797733: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0079773a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0079773c:; BB(0x0079773c);
    /* 0079773c: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0079773f: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00797742: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00797744: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00797747: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00797749: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079774b: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0079774d: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 00797752: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 00797756: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797758: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 0079775c: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 00797760: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 00797764: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 00797768: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x79776du); f_005d6a3c();
    /* 0079776d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00797770: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00797773: jl 0x79773c */ if ((fS!=fO)) goto L_0079773c;
L_00797775:; BB(0x00797775);
    /* 00797775: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00797778: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079777b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079777e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00797781: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00797784: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079778b: mov esp, ebp */ r_esp = r_ebp;
    /* 0079778d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079778e: ret  */ FN_RET(0x00797654); r_esp += 4; return;
}

void f_00797790(void) /* sub_797790 */
{
    FN_ENTER(0x00797790);
    /* 00797790: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00797791: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00797792: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00797793: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00797797: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079779c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079779e: je 0x797833 */ if (fZ) goto L_00797833;
L_007977a4:; BB(0x007977a4);
    /* 007977a4: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 007977a7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007977a9:; BB(0x007977a9);
    /* 007977a9: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007977ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007977ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007977b0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007977b2: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007977b4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007977b6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007977b8: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007977ba: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007977bc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007977be: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007977c0: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007977c2: mov ebp, dword ptr [esi + ecx*4 + 0x34] */ r_ebp = R32((u32)(r_esi+r_ecx*4+0x34u));
    /* 007977c6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007977c9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007977cb: cmp ebp, dword ptr [esp + 0x10] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007977cf: je 0x797818 */ if (fZ) goto L_00797818;
L_007977d1:; BB(0x007977d1);
    /* 007977d1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007977d4: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007977d7: jl 0x7977a9 */ if ((fS!=fO)) goto L_007977a9;
L_007977d9:; BB(0x007977d9);
    /* 007977d9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007977db: je 0x797814 */ if (fZ) goto L_00797814;
L_007977dd:; BB(0x007977dd);
    /* 007977dd: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 007977e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007977e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007977e6: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 007977e8: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 007977eb: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 007977ee: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 007977f1: mov byte ptr [edi + 0x10], al */ W8((u32)(r_edi+0x10u), (u8)r_eax);
    /* 007977f4: mov byte ptr [edi + 0x11], al */ W8((u32)(r_edi+0x11u), (u8)r_eax);
    /* 007977f7: mov byte ptr [edi + 0x12], al */ W8((u32)(r_edi+0x12u), (u8)r_eax);
    /* 007977fa: mov byte ptr [edi + 0x13], al */ W8((u32)(r_edi+0x13u), (u8)r_eax);
    /* 007977fd: mov word ptr [edi + 0x14], ax */ W16((u32)(r_edi+0x14u), (u16)r_eax);
    /* 00797801: mov word ptr [edi + 0x3c], ax */ W16((u32)(r_edi+0x3cu), (u16)r_eax);
    /* 00797805: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00797808: lea edx, [edi + 0x5c] */ r_edx = (u32)(r_edi+0x5cu);
    /* 0079780b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079780c: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x797811u); f_0086b688();
    /* 00797811: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00797814:; BB(0x00797814);
    /* 00797814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00797815: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00797816: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00797817: ret  */ FN_RET(0x00797790); r_esp += 4; return;
L_00797818:; BB(0x00797818);
    /* 00797818: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079781a: je 0x79782f */ if (fZ) goto L_0079782f;
L_0079781c:; BB(0x0079781c);
    /* 0079781c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079781e: mov ecx, 0x85c */ r_ecx = 0x85cu;
    /* 00797823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00797824: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00797827: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00797829: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079782a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079782d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_0079782f:; BB(0x0079782f);
    /* 0079782f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00797830: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00797831: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00797832: ret  */ FN_RET(0x00797790); r_esp += 4; return;
L_00797833:; BB(0x00797833);
    /* 00797833: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00797835: je 0x79785b */ if (fZ) goto L_0079785b;
L_00797837:; BB(0x00797837);
    /* 00797837: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00797839: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0079783b: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0079783e: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00797841: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00797844: mov byte ptr [edi + 0x10], al */ W8((u32)(r_edi+0x10u), (u8)r_eax);
    /* 00797847: mov byte ptr [edi + 0x11], al */ W8((u32)(r_edi+0x11u), (u8)r_eax);
    /* 0079784a: mov byte ptr [edi + 0x12], al */ W8((u32)(r_edi+0x12u), (u8)r_eax);
    /* 0079784d: mov byte ptr [edi + 0x13], al */ W8((u32)(r_edi+0x13u), (u8)r_eax);
    /* 00797850: mov word ptr [edi + 0x14], ax */ W16((u32)(r_edi+0x14u), (u16)r_eax);
    /* 00797854: mov word ptr [edi + 0x3c], ax */ W16((u32)(r_edi+0x3cu), (u16)r_eax);
    /* 00797858: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
L_0079785b:; BB(0x0079785b);
    /* 0079785b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079785c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079785d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079785e: ret  */ FN_RET(0x00797790); r_esp += 4; return;
}

void f_00797860(void) /* sub_797860 */
{
    FN_ENTER(0x00797860);
    /* 00797860: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00797861: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00797864: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00797868: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079786a: je 0x797903 */ if (fZ) goto L_00797903;
L_00797870:; BB(0x00797870);
    /* 00797870: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 00797875: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797877: je 0x797903 */ if (fZ) goto L_00797903;
L_0079787d:; BB(0x0079787d);
    /* 0079787d: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00797880: push 0x97ce2c */ { u32 v = 0x97ce2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00797885: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79788au); f_0061cdb0();
    /* 0079788a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079788d: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00797891: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00797894: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00797898: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079789a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079789c: mov ebx, eax */ r_ebx = r_eax;
    /* 0079789e: mov ebp, edx */ r_ebp = r_edx;
L_007978a0:; BB(0x007978a0);
    /* 007978a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007978a1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7978a6u); f_0068d5a8();
    /* 007978a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007978a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007978a9: je 0x7978e5 */ if (fZ) goto L_007978e5;
L_007978ab:; BB(0x007978ab);
    /* 007978ab: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007978af: mov ecx, dword ptr [eax + 0xeb4] */ r_ecx = R32((u32)(r_eax+0xeb4u));
    /* 007978b5: cmp ecx, dword ptr [esi + 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007978b8: jne 0x7978e5 */ if (!fZ) goto L_007978e5;
L_007978ba:; BB(0x007978ba);
    /* 007978ba: mov ecx, dword ptr [0xaab180] */ r_ecx = R32((u32)(0xaab180u));
    /* 007978c0: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007978c4: mov edi, ebx */ r_edi = r_ebx;
    /* 007978c6: add edi, dword ptr [ecx + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007978c9: mov ecx, 0x85c */ r_ecx = 0x85cu;
    /* 007978ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007978cf: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007978d2: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007978d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007978d5: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007978d8: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007978da: mov dword ptr [ebp*4 + 0xa9c83c], 1 */ W32((u32)(r_ebp*4+0xa9c83cu), 0x1u);
L_007978e5:; BB(0x007978e5);
    /* 007978e5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007978eb: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007978ee: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007978f1: jb 0x7978a0 */ if (fC) goto L_007978a0;
L_007978f3:; BB(0x007978f3);
    /* 007978f3: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007978f7: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 007978fa: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007978fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00797901: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00797902: ret  */ FN_RET(0x00797860); r_esp += 4; return;
L_00797903:; BB(0x00797903);
    /* 00797903: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00797906: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00797907: ret  */ FN_RET(0x00797860); r_esp += 4; return;
}

void f_00797908(void) /* sub_797908 */
{
    FN_ENTER(0x00797908);
    /* 00797908: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00797909: mov ebp, esp */ r_ebp = r_esp;
    /* 0079790b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079790d: push 0x8f53a6 */ { u32 v = 0x8f53a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00797912: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00797918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00797919: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00797920: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00797923: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00797926: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00797929: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0079792c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0079792f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00797932: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00797935: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x79793au); f_008193cc();
    /* 0079793a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00797941: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00797944: mov dword ptr [edx], 0xb45c50 */ W32((u32)(r_edx), 0xb45c50u);
    /* 0079794a: mov eax, dword ptr [0x9ff4f8] */ r_eax = R32((u32)(0x9ff4f8u));
    /* 0079794f: mov dword ptr [0xaab180], edx */ W32((u32)(0xaab180u), r_edx);
    /* 00797955: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0079795a: mov word ptr [0x9ff4fc], bx */ W16((u32)(0x9ff4fcu), (u16)r_ebx);
    /* 00797961: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00797964: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00797966: mov dword ptr [0xaab274], esi */ W32((u32)(0xaab274u), r_esi);
    /* 0079796c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00797971: mov dword ptr [0xaab270], esi */ W32((u32)(0xaab270u), r_esi);
    /* 00797977: mov dword ptr [0xaab268], esi */ W32((u32)(0xaab268u), r_esi);
    /* 0079797d: mov dword ptr [0xaab26c], esi */ W32((u32)(0xaab26cu), r_esi);
    /* 00797983: mov dword ptr [0xaab264], esi */ W32((u32)(0xaab264u), r_esi);
    /* 00797989: mov dword ptr [0xaab260], esi */ W32((u32)(0xaab260u), r_esi);
    /* 0079798f: mov eax, 0xaa6d00 */ r_eax = 0xaa6d00u;
    /* 00797994: mov dword ptr [0xaab25c], esi */ W32((u32)(0xaab25cu), r_esi);
    /* 0079799a: mov dword ptr [0xaab258], esi */ W32((u32)(0xaab258u), r_esi);
    /* 007979a0: mov dword ptr [0xaab254], esi */ W32((u32)(0xaab254u), r_esi);
    /* 007979a6: mov dword ptr [0xaab250], esi */ W32((u32)(0xaab250u), r_esi);
    /* 007979ac: mov dword ptr [0xaab24c], esi */ W32((u32)(0xaab24cu), r_esi);
    /* 007979b2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007979b4: mov dword ptr [0xaab248], esi */ W32((u32)(0xaab248u), r_esi);
    /* 007979ba: mov dword ptr [0xaab230], esi */ W32((u32)(0xaab230u), r_esi);
    /* 007979c0: mov dword ptr [0xaab22c], esi */ W32((u32)(0xaab22cu), r_esi);
    /* 007979c6: mov dword ptr [0xaab244], esi */ W32((u32)(0xaab244u), r_esi);
    /* 007979cc: mov dword ptr [0xaab240], esi */ W32((u32)(0xaab240u), r_esi);
    /* 007979d2: mov dword ptr [0xaab23c], esi */ W32((u32)(0xaab23cu), r_esi);
    /* 007979d8: mov dword ptr [0xaab238], esi */ W32((u32)(0xaab238u), r_esi);
    /* 007979de: mov dword ptr [0xaab234], esi */ W32((u32)(0xaab234u), r_esi);
    /* 007979e4: mov dword ptr [0xaab280], esi */ W32((u32)(0xaab280u), r_esi);
    /* 007979ea: mov dword ptr [0xaab21c], esi */ W32((u32)(0xaab21cu), r_esi);
    /* 007979f0: mov word ptr [0xaab228], si */ W16((u32)(0xaab228u), (u16)r_esi);
    /* 007979f7: mov word ptr [0xaab224], si */ W16((u32)(0xaab224u), (u16)r_esi);
    /* 007979fe: mov dword ptr [0xaab220], esi */ W32((u32)(0xaab220u), r_esi);
    /* 00797a04: mov dword ptr [0xaab218], esi */ W32((u32)(0xaab218u), r_esi);
    /* 00797a0a: mov dword ptr [0xaab27c], ecx */ W32((u32)(0xaab27cu), r_ecx);
    /* 00797a10: mov dword ptr [0xaab214], esi */ W32((u32)(0xaab214u), r_esi);
    /* 00797a16: mov dword ptr [0xaab210], esi */ W32((u32)(0xaab210u), r_esi);
    /* 00797a1c: mov dword ptr [0xaab278], esi */ W32((u32)(0xaab278u), r_esi);
    /* 00797a22: mov dword ptr [0xaab20c], esi */ W32((u32)(0xaab20cu), r_esi);
    /* 00797a28: mov dword ptr [0xaab208], esi */ W32((u32)(0xaab208u), r_esi);
    /* 00797a2e: mov dword ptr [0xaab204], esi */ W32((u32)(0xaab204u), r_esi);
    /* 00797a34: mov dword ptr [0xaab200], esi */ W32((u32)(0xaab200u), r_esi);
    /* 00797a3a: mov dword ptr [0xaab1fc], esi */ W32((u32)(0xaab1fcu), r_esi);
    /* 00797a40: mov dword ptr [0xaab1f8], ecx */ W32((u32)(0xaab1f8u), r_ecx);
    /* 00797a46: mov dword ptr [0xaab1f4], esi */ W32((u32)(0xaab1f4u), r_esi);
    /* 00797a4c: mov dword ptr [0xaab1f0], esi */ W32((u32)(0xaab1f0u), r_esi);
    /* 00797a52: mov dword ptr [0xaab1cc], esi */ W32((u32)(0xaab1ccu), r_esi);
    /* 00797a58: mov dword ptr [0xaab1c8], esi */ W32((u32)(0xaab1c8u), r_esi);
    /* 00797a5e: mov dword ptr [0xaab1c4], esi */ W32((u32)(0xaab1c4u), r_esi);
    /* 00797a64: mov dword ptr [0xaab19c], esi */ W32((u32)(0xaab19cu), r_esi);
    /* 00797a6a: mov dword ptr [0xaab2a0], esi */ W32((u32)(0xaab2a0u), r_esi);
    /* 00797a70: mov dword ptr [0xa9c4f4], esi */ W32((u32)(0xa9c4f4u), r_esi);
    /* 00797a76: mov dword ptr [0xa9c4dc], esi */ W32((u32)(0xa9c4dcu), r_esi);
    /* 00797a7c: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 00797a7e: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 00797a81: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 00797a84: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 00797a87: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 00797a8a: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 00797a8d: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00797a90: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 00797a93: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 00797a96: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 00797a99: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
    /* 00797a9c: mov dword ptr [eax + 0x2c], edi */ W32((u32)(r_eax+0x2cu), r_edi);
    /* 00797a9f: mov dword ptr [eax + 0x30], edi */ W32((u32)(r_eax+0x30u), r_edi);
    /* 00797aa2: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
    /* 00797aa5: mov dword ptr [eax + 0x38], edi */ W32((u32)(r_eax+0x38u), r_edi);
    /* 00797aa8: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 00797aab: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ab0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ab2: push 0xaab000 */ { u32 v = 0xaab000u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ab7: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x797abcu); f_0086b688();
    /* 00797abc: push 0x1050 */ { u32 v = 0x1050u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ac1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ac3: push 0xaa5c00 */ { u32 v = 0xaa5c00u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ac8: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x797acdu); f_0086b688();
    /* 00797acd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00797ad0: mov edx, 0xaab1e8 */ r_edx = 0xaab1e8u;
    /* 00797ad5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797ad7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00797ad9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00797adc: mov edx, 0xaab1d8 */ r_edx = 0xaab1d8u;
    /* 00797ae1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797ae3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00797ae5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00797ae8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00797aeb: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00797aee: push 0x330 */ { u32 v = 0x330u; r_esp -= 4; W32(r_esp, v); }
    /* 00797af3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797af5: push 0xaaacc0 */ { u32 v = 0xaaacc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797afa: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x797affu); f_0086b688();
    /* 00797aff: mov edx, 0xaab1a0 */ r_edx = 0xaab1a0u;
    /* 00797b04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797b06: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00797b08: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00797b0b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00797b0e: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00797b11: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00797b14: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00797b17: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00797b1a: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00797b1d: push 0x620c */ { u32 v = 0x620cu; r_esp -= 4; W32(r_esp, v); }
    /* 00797b22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797b24: push 0xa9f9e0 */ { u32 v = 0xa9f9e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797b29: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x797b2eu); f_0086b5cc();
    /* 00797b2e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00797b31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797b33: mov dword ptr [0xaab1c0], eax */ W32((u32)(0xaab1c0u), r_eax);
    /* 00797b38: mov dword ptr [0xaab198], eax */ W32((u32)(0xaab198u), r_eax);
    /* 00797b3d: mov ecx, 0xa9f960 */ r_ecx = 0xa9f960u;
    /* 00797b42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00797b44: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00797b46: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00797b49: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00797b4c: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00797b4f: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00797b52: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00797b55: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00797b58: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00797b5b: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00797b5e: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00797b61: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00797b64: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00797b67: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00797b6a: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00797b6d: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00797b70: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 00797b73: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00797b76: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 00797b79: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00797b7c: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 00797b7f: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 00797b82: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00797b85: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 00797b88: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00797b8b: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00797b8e: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 00797b91: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 00797b94: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 00797b97: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 00797b9a: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 00797b9d: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00797ba0: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00797ba3: mov dword ptr [0xaab194], 1 */ W32((u32)(0xaab194u), 0x1u);
    /* 00797bad: call 0x797e50 */ r_esp -= 4; W32(r_esp, 0x797bb2u); f_00797e50();
    /* 00797bb2: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00797bb8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00797bbf: push 0x1e14c */ { u32 v = 0x1e14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00797bc4: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x797bc9u); f_007a8a38();
    /* 00797bc9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00797bcc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00797bcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797bd1: je 0x797e43 */ if (fZ) goto L_00797e43;
L_00797bd7:; BB(0x00797bd7);
    /* 00797bd7: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00797bde: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00797be5: call 0x7c19b8 */ r_esp -= 4; W32(r_esp, 0x797beau); f_007c19b8();
    /* 00797bea: push 0x97ce48 */ { u32 v = 0x97ce48u; r_esp -= 4; W32(r_esp, v); }
    /* 00797bef: push 0xa46bcc */ { u32 v = 0xa46bccu; r_esp -= 4; W32(r_esp, v); }
    /* 00797bf4: push 0xa46b9c */ { u32 v = 0xa46b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00797bf9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00797bfc: push dword ptr [0xa9cd44] */ { u32 v = R32((u32)(0xa9cd44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00797c02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00797c03: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00797c06: call 0x7d2da0 */ r_esp -= 4; W32(r_esp, 0x797c0bu); f_007d2da0();
    /* 00797c0b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00797c12:; BB(0x00797c12);
    /* 00797c12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00797c15: mov dword ptr [0xaab284], eax */ W32((u32)(0xaab284u), r_eax);
    /* 00797c1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00797c21: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00797c24: mov dword ptr [eax + 0x1e074], 0x79b81c */ W32((u32)(r_eax+0x1e074u), 0x79b81cu);
    /* 00797c2e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00797c30: mov dword ptr [eax + 0x1e078], 0x79b860 */ W32((u32)(r_eax+0x1e078u), 0x79b860u);
    /* 00797c3a: mov dword ptr [eax + 0x1e094], edx */ W32((u32)(r_eax+0x1e094u), r_edx);
    /* 00797c40: mov dword ptr [eax + 0x1e138], edx */ W32((u32)(r_eax+0x1e138u), r_edx);
    /* 00797c46: mov dword ptr [eax + 0x1e07c], 0x79b884 */ W32((u32)(r_eax+0x1e07cu), 0x79b884u);
    /* 00797c50: mov dword ptr [eax + 0x1e080], 0x79b92c */ W32((u32)(r_eax+0x1e080u), 0x79b92cu);
    /* 00797c5a: mov dword ptr [0xa49508], edx */ W32((u32)(0xa49508u), r_edx);
    /* 00797c60: mov dword ptr [eax + 0x1e08c], 0x7a0eb0 */ W32((u32)(r_eax+0x1e08cu), 0x7a0eb0u);
    /* 00797c6a: mov dword ptr [eax + 0x1e090], 0x7a0e48 */ W32((u32)(r_eax+0x1e090u), 0x7a0e48u);
    /* 00797c74: mov dword ptr [eax + 0x1e084], 0x79ba38 */ W32((u32)(r_eax+0x1e084u), 0x79ba38u);
    /* 00797c7e: mov dword ptr [eax + 0x1e088], 0x79bba0 */ W32((u32)(r_eax+0x1e088u), 0x79bba0u);
    /* 00797c88: mov dword ptr [eax + 0x1e098], 0x79b94c */ W32((u32)(r_eax+0x1e098u), 0x79b94cu);
    /* 00797c92: mov dword ptr [eax + 0x1e0a0], 0x79bde8 */ W32((u32)(r_eax+0x1e0a0u), 0x79bde8u);
    /* 00797c9c: mov dword ptr [eax + 0x1e0a4], 0x79c070 */ W32((u32)(r_eax+0x1e0a4u), 0x79c070u);
    /* 00797ca6: mov dword ptr [eax + 0x1e09c], 0x79b9b0 */ W32((u32)(r_eax+0x1e09cu), 0x79b9b0u);
    /* 00797cb0: mov dword ptr [eax + 0x1e0a8], 0x61cdb0 */ W32((u32)(r_eax+0x1e0a8u), 0x61cdb0u);
    /* 00797cba: mov dword ptr [eax + 0x1e0b0], 0x79c4bc */ W32((u32)(r_eax+0x1e0b0u), 0x79c4bcu);
    /* 00797cc4: mov dword ptr [eax + 0x1e0b4], 0x7a0d84 */ W32((u32)(r_eax+0x1e0b4u), 0x7a0d84u);
    /* 00797cce: mov dword ptr [eax + 0x1e0b8], 0x79cf08 */ W32((u32)(r_eax+0x1e0b8u), 0x79cf08u);
    /* 00797cd8: mov dword ptr [eax + 0x1e0bc], 0x7a0d0c */ W32((u32)(r_eax+0x1e0bcu), 0x7a0d0cu);
    /* 00797ce2: mov dword ptr [eax + 0x1e0d0], 0x81384c */ W32((u32)(r_eax+0x1e0d0u), 0x81384cu);
    /* 00797cec: mov dword ptr [eax + 0x1e0d4], 0x827f48 */ W32((u32)(r_eax+0x1e0d4u), 0x827f48u);
    /* 00797cf6: mov dword ptr [eax + 0x1e0c0], 0x79d1f0 */ W32((u32)(r_eax+0x1e0c0u), 0x79d1f0u);
    /* 00797d00: mov dword ptr [eax + 0x1e0c4], 0x79d2d4 */ W32((u32)(r_eax+0x1e0c4u), 0x79d2d4u);
    /* 00797d0a: mov dword ptr [eax + 0x1e0cc], 0x79d31c */ W32((u32)(r_eax+0x1e0ccu), 0x79d31cu);
    /* 00797d14: mov dword ptr [eax + 0x1e0d8], 0x79d830 */ W32((u32)(r_eax+0x1e0d8u), 0x79d830u);
    /* 00797d1e: mov dword ptr [eax + 0x1e0dc], 0x79c01c */ W32((u32)(r_eax+0x1e0dcu), 0x79c01cu);
    /* 00797d28: mov dword ptr [eax + 0x1e0e0], 0x79d89c */ W32((u32)(r_eax+0x1e0e0u), 0x79d89cu);
    /* 00797d32: mov dword ptr [eax + 0x1e0e4], 0x79d8a8 */ W32((u32)(r_eax+0x1e0e4u), 0x79d8a8u);
    /* 00797d3c: mov dword ptr [eax + 0x1e0e8], 0x79d8b4 */ W32((u32)(r_eax+0x1e0e8u), 0x79d8b4u);
    /* 00797d46: mov dword ptr [eax + 0x1e0f0], 0x6cca7c */ W32((u32)(r_eax+0x1e0f0u), 0x6cca7cu);
    /* 00797d50: mov dword ptr [eax + 0x1e0f4], 0x6ccaa8 */ W32((u32)(r_eax+0x1e0f4u), 0x6ccaa8u);
    /* 00797d5a: mov dword ptr [eax + 0x1e0f8], 0x6ccb88 */ W32((u32)(r_eax+0x1e0f8u), 0x6ccb88u);
    /* 00797d64: mov dword ptr [eax + 0x1e0fc], 0x6ccdf8 */ W32((u32)(r_eax+0x1e0fcu), 0x6ccdf8u);
    /* 00797d6e: mov dword ptr [eax + 0x1e100], 0x79d5bc */ W32((u32)(r_eax+0x1e100u), 0x79d5bcu);
    /* 00797d78: mov dword ptr [eax + 0x1e104], 0x79d7b0 */ W32((u32)(r_eax+0x1e104u), 0x79d7b0u);
    /* 00797d82: mov dword ptr [eax + 0x1e108], 0x6bd9c8 */ W32((u32)(r_eax+0x1e108u), 0x6bd9c8u);
    /* 00797d8c: mov dword ptr [eax + 0x1e10c], 0x6bdcec */ W32((u32)(r_eax+0x1e10cu), 0x6bdcecu);
    /* 00797d96: mov dword ptr [eax + 0x1e118], 0x79d84c */ W32((u32)(r_eax+0x1e118u), 0x79d84cu);
    /* 00797da0: mov dword ptr [eax + 0x1e11c], 0x79d860 */ W32((u32)(r_eax+0x1e11cu), 0x79d860u);
    /* 00797daa: mov dword ptr [eax + 0x1e114], 0x79bd1c */ W32((u32)(r_eax+0x1e114u), 0x79bd1cu);
    /* 00797db4: mov dword ptr [eax + 0x1e120], 0x79d8cc */ W32((u32)(r_eax+0x1e120u), 0x79d8ccu);
    /* 00797dbe: mov dword ptr [eax + 0x1e128], 0x79d944 */ W32((u32)(r_eax+0x1e128u), 0x79d944u);
    /* 00797dc8: mov dword ptr [eax + 0x1e13c], 0x82637c */ W32((u32)(r_eax+0x1e13cu), 0x82637cu);
    /* 00797dd2: mov dword ptr [eax + 0x1e140], 0x827024 */ W32((u32)(r_eax+0x1e140u), 0x827024u);
    /* 00797ddc: mov dword ptr [eax + 0x1e144], 0x826394 */ W32((u32)(r_eax+0x1e144u), 0x826394u);
    /* 00797de6: mov dword ptr [eax + 0x1e0ec], 0x79d8c0 */ W32((u32)(r_eax+0x1e0ecu), 0x79d8c0u);
    /* 00797df0: mov dword ptr [eax + 0x1e12c], 0x79d9ec */ W32((u32)(r_eax+0x1e12cu), 0x79d9ecu);
    /* 00797dfa: mov dword ptr [eax + 0x1e130], 0x79d9f8 */ W32((u32)(r_eax+0x1e130u), 0x79d9f8u);
    /* 00797e04: mov dword ptr [eax + 0x1e134], 0x797860 */ W32((u32)(r_eax+0x1e134u), 0x797860u);
    /* 00797e0e: mov dword ptr [eax + 0x1e148], 0x7a0128 */ W32((u32)(r_eax+0x1e148u), 0x7a0128u);
    /* 00797e18: mov dword ptr [eax + 0x1e124], 0x79ea60 */ W32((u32)(r_eax+0x1e124u), 0x79ea60u);
    /* 00797e22: call 0x797e74 */ r_esp -= 4; W32(r_esp, 0x797e27u); f_00797e74();
    /* 00797e27: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00797e2a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00797e2d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00797e30: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00797e33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00797e36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00797e3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00797e3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00797e40: ret 4 */ FN_RET(0x00797908); r_esp += 8; return;
L_00797e43:; BB(0x00797e43);
    /* 00797e43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797e45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00797e48: jmp 0x797c12 */ goto L_00797c12;
}

void f_00797979(void)
{
    FN_ENTER(0x00797979);
    /* 00797979: push 0x8900aab2 */ { u32 v = 0x8900aab2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079797e: xor eax, 0xaab26c */ {  u32 a = r_eax; u32 b = 0xaab26cu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797983: mov dword ptr [0xaab264], esi */ W32((u32)(0xaab264u), r_esi);
    /* 00797989: mov dword ptr [0xaab260], esi */ W32((u32)(0xaab260u), r_esi);
    /* 0079798f: mov eax, 0xaa6d00 */ r_eax = 0xaa6d00u;
    /* 00797994: mov dword ptr [0xaab25c], esi */ W32((u32)(0xaab25cu), r_esi);
    /* 0079799a: mov dword ptr [0xaab258], esi */ W32((u32)(0xaab258u), r_esi);
    /* 007979a0: mov dword ptr [0xaab254], esi */ W32((u32)(0xaab254u), r_esi);
    /* 007979a6: mov dword ptr [0xaab250], esi */ W32((u32)(0xaab250u), r_esi);
    /* 007979ac: mov dword ptr [0xaab24c], esi */ W32((u32)(0xaab24cu), r_esi);
    /* 007979b2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007979b4: mov dword ptr [0xaab248], esi */ W32((u32)(0xaab248u), r_esi);
    /* 007979ba: mov dword ptr [0xaab230], esi */ W32((u32)(0xaab230u), r_esi);
    /* 007979c0: mov dword ptr [0xaab22c], esi */ W32((u32)(0xaab22cu), r_esi);
    /* 007979c6: mov dword ptr [0xaab244], esi */ W32((u32)(0xaab244u), r_esi);
    /* 007979cc: mov dword ptr [0xaab240], esi */ W32((u32)(0xaab240u), r_esi);
    /* 007979d2: mov dword ptr [0xaab23c], esi */ W32((u32)(0xaab23cu), r_esi);
    /* 007979d8: mov dword ptr [0xaab238], esi */ W32((u32)(0xaab238u), r_esi);
    /* 007979de: mov dword ptr [0xaab234], esi */ W32((u32)(0xaab234u), r_esi);
    /* 007979e4: mov dword ptr [0xaab280], esi */ W32((u32)(0xaab280u), r_esi);
    /* 007979ea: mov dword ptr [0xaab21c], esi */ W32((u32)(0xaab21cu), r_esi);
    /* 007979f0: mov word ptr [0xaab228], si */ W16((u32)(0xaab228u), (u16)r_esi);
    /* 007979f7: mov word ptr [0xaab224], si */ W16((u32)(0xaab224u), (u16)r_esi);
    /* 007979fe: mov dword ptr [0xaab220], esi */ W32((u32)(0xaab220u), r_esi);
    /* 00797a04: mov dword ptr [0xaab218], esi */ W32((u32)(0xaab218u), r_esi);
    /* 00797a0a: mov dword ptr [0xaab27c], ecx */ W32((u32)(0xaab27cu), r_ecx);
    /* 00797a10: mov dword ptr [0xaab214], esi */ W32((u32)(0xaab214u), r_esi);
    /* 00797a16: mov dword ptr [0xaab210], esi */ W32((u32)(0xaab210u), r_esi);
    /* 00797a1c: mov dword ptr [0xaab278], esi */ W32((u32)(0xaab278u), r_esi);
    /* 00797a22: mov dword ptr [0xaab20c], esi */ W32((u32)(0xaab20cu), r_esi);
    /* 00797a28: mov dword ptr [0xaab208], esi */ W32((u32)(0xaab208u), r_esi);
    /* 00797a2e: mov dword ptr [0xaab204], esi */ W32((u32)(0xaab204u), r_esi);
    /* 00797a34: mov dword ptr [0xaab200], esi */ W32((u32)(0xaab200u), r_esi);
    /* 00797a3a: mov dword ptr [0xaab1fc], esi */ W32((u32)(0xaab1fcu), r_esi);
    /* 00797a40: mov dword ptr [0xaab1f8], ecx */ W32((u32)(0xaab1f8u), r_ecx);
    /* 00797a46: mov dword ptr [0xaab1f4], esi */ W32((u32)(0xaab1f4u), r_esi);
    /* 00797a4c: mov dword ptr [0xaab1f0], esi */ W32((u32)(0xaab1f0u), r_esi);
    /* 00797a52: mov dword ptr [0xaab1cc], esi */ W32((u32)(0xaab1ccu), r_esi);
    /* 00797a58: mov dword ptr [0xaab1c8], esi */ W32((u32)(0xaab1c8u), r_esi);
    /* 00797a5e: mov dword ptr [0xaab1c4], esi */ W32((u32)(0xaab1c4u), r_esi);
    /* 00797a64: mov dword ptr [0xaab19c], esi */ W32((u32)(0xaab19cu), r_esi);
    /* 00797a6a: mov dword ptr [0xaab2a0], esi */ W32((u32)(0xaab2a0u), r_esi);
    /* 00797a70: mov dword ptr [0xa9c4f4], esi */ W32((u32)(0xa9c4f4u), r_esi);
    /* 00797a76: mov dword ptr [0xa9c4dc], esi */ W32((u32)(0xa9c4dcu), r_esi);
    /* 00797a7c: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 00797a7e: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 00797a81: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 00797a84: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 00797a87: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 00797a8a: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 00797a8d: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00797a90: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 00797a93: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 00797a96: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 00797a99: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
    /* 00797a9c: mov dword ptr [eax + 0x2c], edi */ W32((u32)(r_eax+0x2cu), r_edi);
    /* 00797a9f: mov dword ptr [eax + 0x30], edi */ W32((u32)(r_eax+0x30u), r_edi);
    /* 00797aa2: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
    /* 00797aa5: mov dword ptr [eax + 0x38], edi */ W32((u32)(r_eax+0x38u), r_edi);
    /* 00797aa8: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 00797aab: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ab0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ab2: push 0xaab000 */ { u32 v = 0xaab000u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ab7: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x797abcu); f_0086b688();
    /* 00797abc: push 0x1050 */ { u32 v = 0x1050u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ac1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ac3: push 0xaa5c00 */ { u32 v = 0xaa5c00u; r_esp -= 4; W32(r_esp, v); }
    /* 00797ac8: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x797acdu); f_0086b688();
    /* 00797acd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00797ad0: mov edx, 0xaab1e8 */ r_edx = 0xaab1e8u;
    /* 00797ad5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797ad7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00797ad9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00797adc: mov edx, 0xaab1d8 */ r_edx = 0xaab1d8u;
    /* 00797ae1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797ae3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00797ae5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00797ae8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00797aeb: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00797aee: push 0x330 */ { u32 v = 0x330u; r_esp -= 4; W32(r_esp, v); }
    /* 00797af3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797af5: push 0xaaacc0 */ { u32 v = 0xaaacc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797afa: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x797affu); f_0086b688();
    /* 00797aff: mov edx, 0xaab1a0 */ r_edx = 0xaab1a0u;
    /* 00797b04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797b06: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00797b08: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00797b0b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00797b0e: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00797b11: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00797b14: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00797b17: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00797b1a: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00797b1d: push 0x620c */ { u32 v = 0x620cu; r_esp -= 4; W32(r_esp, v); }
    /* 00797b22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797b24: push 0xa9f9e0 */ { u32 v = 0xa9f9e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797b29: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x797b2eu); f_0086b5cc();
    /* 00797b2e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00797b31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797b33: mov dword ptr [0xaab1c0], eax */ W32((u32)(0xaab1c0u), r_eax);
    /* 00797b38: mov dword ptr [0xaab198], eax */ W32((u32)(0xaab198u), r_eax);
    /* 00797b3d: mov ecx, 0xa9f960 */ r_ecx = 0xa9f960u;
    /* 00797b42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00797b44: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00797b46: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00797b49: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00797b4c: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00797b4f: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00797b52: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00797b55: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00797b58: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00797b5b: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00797b5e: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00797b61: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00797b64: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00797b67: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00797b6a: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00797b6d: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00797b70: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 00797b73: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00797b76: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 00797b79: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00797b7c: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 00797b7f: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 00797b82: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00797b85: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 00797b88: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00797b8b: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00797b8e: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 00797b91: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 00797b94: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 00797b97: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 00797b9a: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 00797b9d: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00797ba0: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00797ba3: mov dword ptr [0xaab194], 1 */ W32((u32)(0xaab194u), 0x1u);
    /* 00797bad: call 0x797e50 */ r_esp -= 4; W32(r_esp, 0x797bb2u); f_00797e50();
    /* 00797bb2: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00797bb8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00797bbf: push 0x1e14c */ { u32 v = 0x1e14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00797bc4: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x797bc9u); f_007a8a38();
    /* 00797bc9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00797bcc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00797bcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797bd1: je 0x797e43 */ if (fZ) goto L_00797e43;
L_00797bd7:; BB(0x00797bd7);
    /* 00797bd7: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00797bde: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00797be5: call 0x7c19b8 */ r_esp -= 4; W32(r_esp, 0x797beau); f_007c19b8();
    /* 00797bea: push 0x97ce48 */ { u32 v = 0x97ce48u; r_esp -= 4; W32(r_esp, v); }
    /* 00797bef: push 0xa46bcc */ { u32 v = 0xa46bccu; r_esp -= 4; W32(r_esp, v); }
    /* 00797bf4: push 0xa46b9c */ { u32 v = 0xa46b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00797bf9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00797bfc: push dword ptr [0xa9cd44] */ { u32 v = R32((u32)(0xa9cd44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00797c02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00797c03: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00797c06: call 0x7d2da0 */ r_esp -= 4; W32(r_esp, 0x797c0bu); f_007d2da0();
    /* 00797c0b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00797c12:; BB(0x00797c12);
    /* 00797c12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00797c15: mov dword ptr [0xaab284], eax */ W32((u32)(0xaab284u), r_eax);
    /* 00797c1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00797c21: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00797c24: mov dword ptr [eax + 0x1e074], 0x79b81c */ W32((u32)(r_eax+0x1e074u), 0x79b81cu);
    /* 00797c2e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00797c30: mov dword ptr [eax + 0x1e078], 0x79b860 */ W32((u32)(r_eax+0x1e078u), 0x79b860u);
    /* 00797c3a: mov dword ptr [eax + 0x1e094], edx */ W32((u32)(r_eax+0x1e094u), r_edx);
    /* 00797c40: mov dword ptr [eax + 0x1e138], edx */ W32((u32)(r_eax+0x1e138u), r_edx);
    /* 00797c46: mov dword ptr [eax + 0x1e07c], 0x79b884 */ W32((u32)(r_eax+0x1e07cu), 0x79b884u);
    /* 00797c50: mov dword ptr [eax + 0x1e080], 0x79b92c */ W32((u32)(r_eax+0x1e080u), 0x79b92cu);
    /* 00797c5a: mov dword ptr [0xa49508], edx */ W32((u32)(0xa49508u), r_edx);
    /* 00797c60: mov dword ptr [eax + 0x1e08c], 0x7a0eb0 */ W32((u32)(r_eax+0x1e08cu), 0x7a0eb0u);
    /* 00797c6a: mov dword ptr [eax + 0x1e090], 0x7a0e48 */ W32((u32)(r_eax+0x1e090u), 0x7a0e48u);
    /* 00797c74: mov dword ptr [eax + 0x1e084], 0x79ba38 */ W32((u32)(r_eax+0x1e084u), 0x79ba38u);
    /* 00797c7e: mov dword ptr [eax + 0x1e088], 0x79bba0 */ W32((u32)(r_eax+0x1e088u), 0x79bba0u);
    /* 00797c88: mov dword ptr [eax + 0x1e098], 0x79b94c */ W32((u32)(r_eax+0x1e098u), 0x79b94cu);
    /* 00797c92: mov dword ptr [eax + 0x1e0a0], 0x79bde8 */ W32((u32)(r_eax+0x1e0a0u), 0x79bde8u);
    /* 00797c9c: mov dword ptr [eax + 0x1e0a4], 0x79c070 */ W32((u32)(r_eax+0x1e0a4u), 0x79c070u);
    /* 00797ca6: mov dword ptr [eax + 0x1e09c], 0x79b9b0 */ W32((u32)(r_eax+0x1e09cu), 0x79b9b0u);
    /* 00797cb0: mov dword ptr [eax + 0x1e0a8], 0x61cdb0 */ W32((u32)(r_eax+0x1e0a8u), 0x61cdb0u);
    /* 00797cba: mov dword ptr [eax + 0x1e0b0], 0x79c4bc */ W32((u32)(r_eax+0x1e0b0u), 0x79c4bcu);
    /* 00797cc4: mov dword ptr [eax + 0x1e0b4], 0x7a0d84 */ W32((u32)(r_eax+0x1e0b4u), 0x7a0d84u);
    /* 00797cce: mov dword ptr [eax + 0x1e0b8], 0x79cf08 */ W32((u32)(r_eax+0x1e0b8u), 0x79cf08u);
    /* 00797cd8: mov dword ptr [eax + 0x1e0bc], 0x7a0d0c */ W32((u32)(r_eax+0x1e0bcu), 0x7a0d0cu);
    /* 00797ce2: mov dword ptr [eax + 0x1e0d0], 0x81384c */ W32((u32)(r_eax+0x1e0d0u), 0x81384cu);
    /* 00797cec: mov dword ptr [eax + 0x1e0d4], 0x827f48 */ W32((u32)(r_eax+0x1e0d4u), 0x827f48u);
    /* 00797cf6: mov dword ptr [eax + 0x1e0c0], 0x79d1f0 */ W32((u32)(r_eax+0x1e0c0u), 0x79d1f0u);
    /* 00797d00: mov dword ptr [eax + 0x1e0c4], 0x79d2d4 */ W32((u32)(r_eax+0x1e0c4u), 0x79d2d4u);
    /* 00797d0a: mov dword ptr [eax + 0x1e0cc], 0x79d31c */ W32((u32)(r_eax+0x1e0ccu), 0x79d31cu);
    /* 00797d14: mov dword ptr [eax + 0x1e0d8], 0x79d830 */ W32((u32)(r_eax+0x1e0d8u), 0x79d830u);
    /* 00797d1e: mov dword ptr [eax + 0x1e0dc], 0x79c01c */ W32((u32)(r_eax+0x1e0dcu), 0x79c01cu);
    /* 00797d28: mov dword ptr [eax + 0x1e0e0], 0x79d89c */ W32((u32)(r_eax+0x1e0e0u), 0x79d89cu);
    /* 00797d32: mov dword ptr [eax + 0x1e0e4], 0x79d8a8 */ W32((u32)(r_eax+0x1e0e4u), 0x79d8a8u);
    /* 00797d3c: mov dword ptr [eax + 0x1e0e8], 0x79d8b4 */ W32((u32)(r_eax+0x1e0e8u), 0x79d8b4u);
    /* 00797d46: mov dword ptr [eax + 0x1e0f0], 0x6cca7c */ W32((u32)(r_eax+0x1e0f0u), 0x6cca7cu);
    /* 00797d50: mov dword ptr [eax + 0x1e0f4], 0x6ccaa8 */ W32((u32)(r_eax+0x1e0f4u), 0x6ccaa8u);
    /* 00797d5a: mov dword ptr [eax + 0x1e0f8], 0x6ccb88 */ W32((u32)(r_eax+0x1e0f8u), 0x6ccb88u);
    /* 00797d64: mov dword ptr [eax + 0x1e0fc], 0x6ccdf8 */ W32((u32)(r_eax+0x1e0fcu), 0x6ccdf8u);
    /* 00797d6e: mov dword ptr [eax + 0x1e100], 0x79d5bc */ W32((u32)(r_eax+0x1e100u), 0x79d5bcu);
    /* 00797d78: mov dword ptr [eax + 0x1e104], 0x79d7b0 */ W32((u32)(r_eax+0x1e104u), 0x79d7b0u);
    /* 00797d82: mov dword ptr [eax + 0x1e108], 0x6bd9c8 */ W32((u32)(r_eax+0x1e108u), 0x6bd9c8u);
    /* 00797d8c: mov dword ptr [eax + 0x1e10c], 0x6bdcec */ W32((u32)(r_eax+0x1e10cu), 0x6bdcecu);
    /* 00797d96: mov dword ptr [eax + 0x1e118], 0x79d84c */ W32((u32)(r_eax+0x1e118u), 0x79d84cu);
    /* 00797da0: mov dword ptr [eax + 0x1e11c], 0x79d860 */ W32((u32)(r_eax+0x1e11cu), 0x79d860u);
    /* 00797daa: mov dword ptr [eax + 0x1e114], 0x79bd1c */ W32((u32)(r_eax+0x1e114u), 0x79bd1cu);
    /* 00797db4: mov dword ptr [eax + 0x1e120], 0x79d8cc */ W32((u32)(r_eax+0x1e120u), 0x79d8ccu);
    /* 00797dbe: mov dword ptr [eax + 0x1e128], 0x79d944 */ W32((u32)(r_eax+0x1e128u), 0x79d944u);
    /* 00797dc8: mov dword ptr [eax + 0x1e13c], 0x82637c */ W32((u32)(r_eax+0x1e13cu), 0x82637cu);
    /* 00797dd2: mov dword ptr [eax + 0x1e140], 0x827024 */ W32((u32)(r_eax+0x1e140u), 0x827024u);
    /* 00797ddc: mov dword ptr [eax + 0x1e144], 0x826394 */ W32((u32)(r_eax+0x1e144u), 0x826394u);
    /* 00797de6: mov dword ptr [eax + 0x1e0ec], 0x79d8c0 */ W32((u32)(r_eax+0x1e0ecu), 0x79d8c0u);
    /* 00797df0: mov dword ptr [eax + 0x1e12c], 0x79d9ec */ W32((u32)(r_eax+0x1e12cu), 0x79d9ecu);
    /* 00797dfa: mov dword ptr [eax + 0x1e130], 0x79d9f8 */ W32((u32)(r_eax+0x1e130u), 0x79d9f8u);
    /* 00797e04: mov dword ptr [eax + 0x1e134], 0x797860 */ W32((u32)(r_eax+0x1e134u), 0x797860u);
    /* 00797e0e: mov dword ptr [eax + 0x1e148], 0x7a0128 */ W32((u32)(r_eax+0x1e148u), 0x7a0128u);
    /* 00797e18: mov dword ptr [eax + 0x1e124], 0x79ea60 */ W32((u32)(r_eax+0x1e124u), 0x79ea60u);
    /* 00797e22: call 0x797e74 */ r_esp -= 4; W32(r_esp, 0x797e27u); f_00797e74();
    /* 00797e27: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00797e2a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00797e2d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00797e30: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00797e33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00797e36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00797e3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00797e3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00797e40: ret 4 */ FN_RET(0x00797979); r_esp += 8; return;
L_00797e43:; BB(0x00797e43);
    /* 00797e43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00797e45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00797e48: jmp 0x797c12 */ goto L_00797c12;
}

void f_00797e50(void) /* sub_797E50 */
{
    FN_ENTER(0x00797e50);
    /* 00797e50: push 0xaab1d0 */ { u32 v = 0xaab1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00797e55: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x797e5au); f_006dc358();
    /* 00797e5a: mov dword ptr [0xaab1d4], eax */ W32((u32)(0xaab1d4u), r_eax);
    /* 00797e5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00797e60: ret  */ FN_RET(0x00797e50); r_esp += 4; return;
}

void f_00797e64(void) /* sub_797E64 */
{
    FN_ENTER(0x00797e64);
    /* 00797e64: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00797e68: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00797e6e: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x797e73u); f_007a8b04();
    /* 00797e73: ret  */ FN_RET(0x00797e64); r_esp += 4; return;
}

void f_00797e74(void) /* sub_797E74 */
{
    FN_ENTER(0x00797e74);
    /* 00797e74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00797e75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00797e76: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00797e78: push 0x6450 */ { u32 v = 0x6450u; r_esp -= 4; W32(r_esp, v); }
    /* 00797e7d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x797e82u); f_008581c5();
    /* 00797e82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00797e83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00797e85: je 0x797ed2 */ if (fZ) goto L_00797ed2;
L_00797e87:; BB(0x00797e87);
    /* 00797e87: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00797e8a: mov edx, eax */ r_edx = r_eax;
    /* 00797e8c: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00797e91: mov edi, edx */ r_edi = r_edx;
L_00797e93:; BB(0x00797e93);
    /* 00797e93: mov dword ptr [edi + 0x38], 0xffffffff */ W32((u32)(r_edi+0x38u), 0xffffffffu);
    /* 00797e9a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00797e9c: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 00797e9e: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00797ea1: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 00797ea4: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00797ea7: mov byte ptr [edi + 0x10], dl */ W8((u32)(r_edi+0x10u), (u8)r_edx);
    /* 00797eaa: mov byte ptr [edi + 0x11], dl */ W8((u32)(r_edi+0x11u), (u8)r_edx);
    /* 00797ead: mov byte ptr [edi + 0x12], dl */ W8((u32)(r_edi+0x12u), (u8)r_edx);
    /* 00797eb0: mov byte ptr [edi + 0x13], dl */ W8((u32)(r_edi+0x13u), (u8)r_edx);
    /* 00797eb3: mov word ptr [edi + 0x14], dx */ W16((u32)(r_edi+0x14u), (u16)r_edx);
    /* 00797eb7: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 00797eba: mov word ptr [edi + 0x3c], dx */ W16((u32)(r_edi+0x3cu), (u16)r_edx);
    /* 00797ebe: add edi, 0x85c */ {  u32 a = r_edi; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00797ec4: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00797ec7: jne 0x797e93 */ if (!fZ) goto L_00797e93;
L_00797ec9:; BB(0x00797ec9);
    /* 00797ec9: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00797ecc:; BB(0x00797ecc);
    /* 00797ecc: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00797ecf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00797ed0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00797ed1: ret  */ FN_RET(0x00797e74); r_esp += 4; return;
L_00797ed2:; BB(0x00797ed2);
    /* 00797ed2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00797ed4: jmp 0x797ecc */ goto L_00797ecc;
}

void f_00797ed8(void) /* sub_797ED8 */
{
    FN_ENTER(0x00797ed8);
    /* 00797ed8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00797ed9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00797eda: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00797edd: mov esi, ecx */ r_esi = r_ecx;
    /* 00797edf: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00797ee4: cmp eax, 0x55 */ {  u32 a = r_eax; u32 b = 0x55u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00797ee7: ja 0x7980cc */ if ((!fC&&!fZ)) goto L_007980cc;
L_00797eed:; BB(0x00797eed);
    /* 00797eed: mov eax, dword ptr [eax*4 + 0x97ca80] */ r_eax = R32((u32)(r_eax*4+0x97ca80u));
    /* 00797ef4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797ed8); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797ef6(void)
{
    FN_ENTER(0x00797ef6);
    /* 00797ef6: mov ecx, esi */ r_ecx = r_esi;
    /* 00797ef8: call 0x79848c */ r_esp -= 4; W32(r_esp, 0x797efdu); f_0079848c();
    /* 00797efd: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797ef6); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f02(void)
{
    FN_ENTER(0x00797f02);
    /* 00797f02: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f04: call 0x798574 */ r_esp -= 4; W32(r_esp, 0x797f09u); f_00798574();
    /* 00797f09: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f02); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f0e(void)
{
    FN_ENTER(0x00797f0e);
    /* 00797f0e: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f10: call 0x798590 */ r_esp -= 4; W32(r_esp, 0x797f15u); f_00798590();
    /* 00797f15: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f0e); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f1a(void)
{
    FN_ENTER(0x00797f1a);
    /* 00797f1a: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f1c: call 0x798918 */ r_esp -= 4; W32(r_esp, 0x797f21u); f_00798918();
    /* 00797f21: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f1a); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f26(void)
{
    FN_ENTER(0x00797f26);
    /* 00797f26: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f28: call 0x798ab4 */ r_esp -= 4; W32(r_esp, 0x797f2du); f_00798ab4();
    /* 00797f2d: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f26); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f32(void)
{
    FN_ENTER(0x00797f32);
    /* 00797f32: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f34: call 0x798b48 */ r_esp -= 4; W32(r_esp, 0x797f39u); f_00798b48();
    /* 00797f39: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f32); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f3e(void)
{
    FN_ENTER(0x00797f3e);
    /* 00797f3e: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f40: call 0x798c80 */ r_esp -= 4; W32(r_esp, 0x797f45u); f_00798c80();
    /* 00797f45: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f3e); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f4a(void)
{
    FN_ENTER(0x00797f4a);
    /* 00797f4a: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f4c: call 0x79901c */ r_esp -= 4; W32(r_esp, 0x797f51u); f_0079901c();
    /* 00797f51: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f4a); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f56(void)
{
    FN_ENTER(0x00797f56);
    /* 00797f56: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f58: call 0x7992a0 */ r_esp -= 4; W32(r_esp, 0x797f5du); f_007992a0();
    /* 00797f5d: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f56); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f62(void)
{
    FN_ENTER(0x00797f62);
    /* 00797f62: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f64: call 0x799324 */ r_esp -= 4; W32(r_esp, 0x797f69u); f_00799324();
    /* 00797f69: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f62); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f6e(void)
{
    FN_ENTER(0x00797f6e);
    /* 00797f6e: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f70: call 0x799410 */ r_esp -= 4; W32(r_esp, 0x797f75u); f_00799410();
    /* 00797f75: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f6e); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f7a(void)
{
    FN_ENTER(0x00797f7a);
    /* 00797f7a: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f7c: call 0x799498 */ r_esp -= 4; W32(r_esp, 0x797f81u); f_00799498();
    /* 00797f81: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f7a); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f86(void)
{
    FN_ENTER(0x00797f86);
    /* 00797f86: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f88: call 0x799584 */ r_esp -= 4; W32(r_esp, 0x797f8du); f_00799584();
    /* 00797f8d: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f86); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f92(void)
{
    FN_ENTER(0x00797f92);
    /* 00797f92: mov ecx, esi */ r_ecx = r_esi;
    /* 00797f94: call 0x79960c */ r_esp -= 4; W32(r_esp, 0x797f99u); f_0079960c();
    /* 00797f99: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f92); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797f9e(void)
{
    FN_ENTER(0x00797f9e);
    /* 00797f9e: mov ecx, esi */ r_ecx = r_esi;
    /* 00797fa0: call 0x7996f8 */ r_esp -= 4; W32(r_esp, 0x797fa5u); f_007996f8();
    /* 00797fa5: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797f9e); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797faa(void)
{
    FN_ENTER(0x00797faa);
    /* 00797faa: mov ecx, esi */ r_ecx = r_esi;
    /* 00797fac: call 0x799858 */ r_esp -= 4; W32(r_esp, 0x797fb1u); f_00799858();
    /* 00797fb1: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797faa); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797fb6(void)
{
    FN_ENTER(0x00797fb6);
    /* 00797fb6: mov ecx, esi */ r_ecx = r_esi;
    /* 00797fb8: call 0x7999f4 */ r_esp -= 4; W32(r_esp, 0x797fbdu); f_007999f4();
    /* 00797fbd: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797fb6); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797fc2(void)
{
    FN_ENTER(0x00797fc2);
    /* 00797fc2: mov ecx, esi */ r_ecx = r_esi;
    /* 00797fc4: call 0x799b10 */ r_esp -= 4; W32(r_esp, 0x797fc9u); f_00799b10();
    /* 00797fc9: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797fc2); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797fce(void)
{
    FN_ENTER(0x00797fce);
    /* 00797fce: mov ecx, esi */ r_ecx = r_esi;
    /* 00797fd0: call 0x799b30 */ r_esp -= 4; W32(r_esp, 0x797fd5u); f_00799b30();
    /* 00797fd5: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797fce); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797fda(void)
{
    FN_ENTER(0x00797fda);
    /* 00797fda: mov ecx, esi */ r_ecx = r_esi;
    /* 00797fdc: call 0x799bd8 */ r_esp -= 4; W32(r_esp, 0x797fe1u); f_00799bd8();
    /* 00797fe1: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797fda); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797fe6(void)
{
    FN_ENTER(0x00797fe6);
    /* 00797fe6: mov ecx, esi */ r_ecx = r_esi;
    /* 00797fe8: call 0x799c28 */ r_esp -= 4; W32(r_esp, 0x797fedu); f_00799c28();
    /* 00797fed: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797fe6); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797ff2(void)
{
    FN_ENTER(0x00797ff2);
    /* 00797ff2: mov ecx, esi */ r_ecx = r_esi;
    /* 00797ff4: call 0x799cc8 */ r_esp -= 4; W32(r_esp, 0x797ff9u); f_00799cc8();
    /* 00797ff9: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797ff2); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00797ffe(void)
{
    FN_ENTER(0x00797ffe);
    /* 00797ffe: mov ecx, esi */ r_ecx = r_esi;
    /* 00798000: call 0x799db0 */ r_esp -= 4; W32(r_esp, 0x798005u); f_00799db0();
    /* 00798005: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00797ffe); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

