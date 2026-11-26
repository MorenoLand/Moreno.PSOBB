#include "protos.h"

void f_00646000(void)
{
    FN_ENTER(0x00646000);
    /* 00646000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646001: mov ebp, esp */ r_ebp = r_esp;
    /* 00646003: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00646005: push 0x8e5acc */ { u32 v = 0x8e5accu; r_esp -= 4; W32(r_esp, v); }
    /* 0064600a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00646010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646011: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00646018: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064601b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064601e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00646021: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00646024: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00646027: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064602c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00646033: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x646038u); f_005caba4();
    /* 00646038: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00646039: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064603c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064603e: je 0x646077 */ if (fZ) goto L_00646077;
L_00646040:; BB(0x00646040);
    /* 00646040: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00646047: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064604e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646051: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646057: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064605a: call 0x64607c */ r_esp -= 4; W32(r_esp, 0x64605fu); f_0064607c();
    /* 0064605f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00646062: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00646069:; BB(0x00646069);
    /* 00646069: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064606c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00646073: mov esp, ebp */ r_esp = r_ebp;
    /* 00646075: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646076: ret  */ FN_RET(0x00646000); r_esp += 4; return;
L_00646077:; BB(0x00646077);
    /* 00646077: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646079: jmp 0x646069 */ goto L_00646069;
}

void f_0064607c(void) /* sub_64607C */
{
    FN_ENTER(0x0064607c);
    /* 0064607c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064607d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646080: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00646082: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00646084: push 0x935ac4 */ { u32 v = 0x935ac4u; r_esp -= 4; W32(r_esp, v); }
    /* 00646089: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064608d: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646091: call 0x6460d8 */ r_esp -= 4; W32(r_esp, 0x646096u); f_006460d8();
    /* 00646096: mov dword ptr [ebx], 0xb2f700 */ W32((u32)(r_ebx), 0xb2f700u);
    /* 0064609c: mov edx, dword ptr [0x9c7100] */ r_edx = R32((u32)(0x9c7100u));
    /* 006460a2: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 006460a7: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006460aa: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 006460b0: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 006460b3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006460b6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006460b9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006460bc: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006460bf: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006460c2: fadd dword ptr [eax*4 + 0x935a10] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x935a10u));
    /* 006460c9: fstp dword ptr [ebx + 0xb0] */ W_F32((u32)(r_ebx+0xb0u), ST(0)); FPOP();
    /* 006460cf: mov eax, ebx */ r_eax = r_ebx;
    /* 006460d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006460d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006460d5: ret 8 */ FN_RET(0x0064607c); r_esp += 12; return;
}

void f_006460d8(void) /* sub_6460D8 */
{
    FN_ENTER(0x006460d8);
    /* 006460d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006460d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006460db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006460dd: push 0x8e5ae8 */ { u32 v = 0x8e5ae8u; r_esp -= 4; W32(r_esp, v); }
    /* 006460e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006460e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006460e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006460f0: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006460f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006460f6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006460f9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006460fc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006460ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00646102: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646105: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00646108: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0064610b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064610e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00646111: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x646116u); f_007b4b48();
    /* 00646116: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064611d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00646120: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646123: mov dword ptr [ecx], 0xb2f6a0 */ W32((u32)(r_ecx), 0xb2f6a0u);
    /* 00646129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064612a: call dword ptr [0xb2f6b4] */ { u32 t = R32((u32)(0xb2f6b4u)); r_esp -= 4; W32(r_esp, 0x646130u); call_ind(t); }
    /* 00646130: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00646133: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00646136: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 00646140: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00646146: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 00646150: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00646152: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 0064615c: mov edx, dword ptr [0x935a94] */ r_edx = R32((u32)(0x935a94u));
    /* 00646162: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00646165: mov ebx, dword ptr [0x935a98] */ r_ebx = R32((u32)(0x935a98u));
    /* 0064616b: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 0064616e: mov esi, dword ptr [0x935a9c] */ r_esi = R32((u32)(0x935a9cu));
    /* 00646174: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 00646177: mov edi, dword ptr [0x935aa0] */ r_edi = R32((u32)(0x935aa0u));
    /* 0064617d: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00646180: mov edx, dword ptr [0x935aa4] */ r_edx = R32((u32)(0x935aa4u));
    /* 00646186: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00646189: mov edx, dword ptr [0x935aa8] */ r_edx = R32((u32)(0x935aa8u));
    /* 0064618f: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00646192: mov edx, dword ptr [0x935aac] */ r_edx = R32((u32)(0x935aacu));
    /* 00646198: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064619b: mov edx, dword ptr [0x935ab0] */ r_edx = R32((u32)(0x935ab0u));
    /* 006461a1: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006461a4: mov edx, dword ptr [0x935ab4] */ r_edx = R32((u32)(0x935ab4u));
    /* 006461aa: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006461ad: mov edx, dword ptr [0x935ab8] */ r_edx = R32((u32)(0x935ab8u));
    /* 006461b3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006461b6: mov edx, dword ptr [0x935abc] */ r_edx = R32((u32)(0x935abcu));
    /* 006461bc: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006461bf: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006461c2: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006461c5: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 006461c8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006461cb: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 006461ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006461cf: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6461d4u); f_007b9a88();
    /* 006461d4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006461d7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6461dcu); f_007b4f54();
    /* 006461dc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006461df: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006461e2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006461e5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006461e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006461eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006461f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006461f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006461f5: ret 0xc */ FN_RET(0x006460d8); r_esp += 16; return;
}

void f_00646152(void)
{
    FN_ENTER(0x00646152);
    /* 00646152: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 0064615c: mov edx, dword ptr [0x935a94] */ r_edx = R32((u32)(0x935a94u));
    /* 00646162: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00646165: mov ebx, dword ptr [0x935a98] */ r_ebx = R32((u32)(0x935a98u));
    /* 0064616b: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 0064616e: mov esi, dword ptr [0x935a9c] */ r_esi = R32((u32)(0x935a9cu));
    /* 00646174: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 00646177: mov edi, dword ptr [0x935aa0] */ r_edi = R32((u32)(0x935aa0u));
    /* 0064617d: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00646180: mov edx, dword ptr [0x935aa4] */ r_edx = R32((u32)(0x935aa4u));
    /* 00646186: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00646189: mov edx, dword ptr [0x935aa8] */ r_edx = R32((u32)(0x935aa8u));
    /* 0064618f: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00646192: mov edx, dword ptr [0x935aac] */ r_edx = R32((u32)(0x935aacu));
    /* 00646198: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064619b: mov edx, dword ptr [0x935ab0] */ r_edx = R32((u32)(0x935ab0u));
    /* 006461a1: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006461a4: mov edx, dword ptr [0x935ab4] */ r_edx = R32((u32)(0x935ab4u));
    /* 006461aa: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006461ad: mov edx, dword ptr [0x935ab8] */ r_edx = R32((u32)(0x935ab8u));
    /* 006461b3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006461b6: mov edx, dword ptr [0x935abc] */ r_edx = R32((u32)(0x935abcu));
    /* 006461bc: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006461bf: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006461c2: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006461c5: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 006461c8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006461cb: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 006461ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006461cf: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6461d4u); f_007b9a88();
    /* 006461d4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006461d7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6461dcu); f_007b4f54();
    /* 006461dc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006461df: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006461e2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006461e5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006461e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006461eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006461f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006461f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006461f5: ret 0xc */ FN_RET(0x00646152); r_esp += 16; return;
}

void f_0064615f(void)
{
    FN_ENTER(0x0064615f);
    goto L_0064615f;
L_00646138:; BB(0x00646138);
    /* 00646138: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 00646139: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064613b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064613d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064613f: add byte ptr [ecx + 0xb881], cl */ { u32 ad = (u32)(r_ecx+0xb881u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00646145: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00646147: xor dword ptr [eax], 0x6a000000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x6a000000u; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 00646151: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00646153: xor dword ptr [eax + eax], 0x158b0000 */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R32(ad); u32 b = 0x158b0000u; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 0064615e: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
L_0064615f:; BB(0x0064615f);
    /* 0064615f: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00646160: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 00646161: add byte ptr [ecx + 0x1d8bac55], cl */ { u32 ad = (u32)(r_ecx+0x1d8bac55u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00646167: cwde  */ r_eax = (u32)(i32)(i16)r_eax;
    /* 00646168: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00646169: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 0064616a: add byte ptr [ecx + 0x358bb05d], cl */ { u32 ad = (u32)(r_ecx+0x358bb05du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00646170: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 00646171: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00646172: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 00646173: add byte ptr [ecx + 0x3d8bb475], cl */ { u32 ad = (u32)(r_ecx+0x3d8bb475u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 00646179: mov al, byte ptr [0x8900935a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x8900935au))) & 0xffu);
    /* 0064617e: jge 0x646138 */ if ((fS==fO)) goto L_00646138;
L_00646180:; BB(0x00646180);
    /* 00646180: mov edx, dword ptr [0x935aa4] */ r_edx = R32((u32)(0x935aa4u));
    /* 00646186: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00646189: mov edx, dword ptr [0x935aa8] */ r_edx = R32((u32)(0x935aa8u));
    /* 0064618f: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00646192: mov edx, dword ptr [0x935aac] */ r_edx = R32((u32)(0x935aacu));
    /* 00646198: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064619b: mov edx, dword ptr [0x935ab0] */ r_edx = R32((u32)(0x935ab0u));
    /* 006461a1: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006461a4: mov edx, dword ptr [0x935ab4] */ r_edx = R32((u32)(0x935ab4u));
    /* 006461aa: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006461ad: mov edx, dword ptr [0x935ab8] */ r_edx = R32((u32)(0x935ab8u));
    /* 006461b3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006461b6: mov edx, dword ptr [0x935abc] */ r_edx = R32((u32)(0x935abcu));
    /* 006461bc: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006461bf: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006461c2: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006461c5: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 006461c8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006461cb: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 006461ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006461cf: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6461d4u); f_007b9a88();
    /* 006461d4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006461d7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6461dcu); f_007b4f54();
    /* 006461dc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006461df: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006461e2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006461e5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006461e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006461eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006461f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006461f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006461f5: ret 0xc */ FN_RET(0x0064615f); r_esp += 16; return;
}

void f_0064616d(void)
{
    FN_ENTER(0x0064616d);
    /* 0064616d: mov al, 0x8b */ r_eax = (r_eax & 0xffffff00u) | ((0x8bu) & 0xffu);
    /* 0064616f: xor eax, 0x935a9c */ {  u32 a = r_eax; u32 b = 0x935a9cu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00646174: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 00646177: mov edi, dword ptr [0x935aa0] */ r_edi = R32((u32)(0x935aa0u));
    /* 0064617d: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00646180: mov edx, dword ptr [0x935aa4] */ r_edx = R32((u32)(0x935aa4u));
    /* 00646186: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00646189: mov edx, dword ptr [0x935aa8] */ r_edx = R32((u32)(0x935aa8u));
    /* 0064618f: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00646192: mov edx, dword ptr [0x935aac] */ r_edx = R32((u32)(0x935aacu));
    /* 00646198: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064619b: mov edx, dword ptr [0x935ab0] */ r_edx = R32((u32)(0x935ab0u));
    /* 006461a1: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006461a4: mov edx, dword ptr [0x935ab4] */ r_edx = R32((u32)(0x935ab4u));
    /* 006461aa: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006461ad: mov edx, dword ptr [0x935ab8] */ r_edx = R32((u32)(0x935ab8u));
    /* 006461b3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006461b6: mov edx, dword ptr [0x935abc] */ r_edx = R32((u32)(0x935abcu));
    /* 006461bc: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006461bf: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006461c2: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006461c5: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 006461c8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006461cb: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 006461ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006461cf: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6461d4u); f_007b9a88();
    /* 006461d4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006461d7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6461dcu); f_007b4f54();
    /* 006461dc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006461df: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006461e2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006461e5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006461e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006461eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006461f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006461f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006461f5: ret 0xc */ FN_RET(0x0064616d); r_esp += 16; return;
}

void f_0064616f(void)
{
    FN_ENTER(0x0064616f);
    /* 0064616f: xor eax, 0x935a9c */ {  u32 a = r_eax; u32 b = 0x935a9cu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00646174: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 00646177: mov edi, dword ptr [0x935aa0] */ r_edi = R32((u32)(0x935aa0u));
    /* 0064617d: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00646180: mov edx, dword ptr [0x935aa4] */ r_edx = R32((u32)(0x935aa4u));
    /* 00646186: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00646189: mov edx, dword ptr [0x935aa8] */ r_edx = R32((u32)(0x935aa8u));
    /* 0064618f: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00646192: mov edx, dword ptr [0x935aac] */ r_edx = R32((u32)(0x935aacu));
    /* 00646198: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064619b: mov edx, dword ptr [0x935ab0] */ r_edx = R32((u32)(0x935ab0u));
    /* 006461a1: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006461a4: mov edx, dword ptr [0x935ab4] */ r_edx = R32((u32)(0x935ab4u));
    /* 006461aa: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006461ad: mov edx, dword ptr [0x935ab8] */ r_edx = R32((u32)(0x935ab8u));
    /* 006461b3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006461b6: mov edx, dword ptr [0x935abc] */ r_edx = R32((u32)(0x935abcu));
    /* 006461bc: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006461bf: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006461c2: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006461c5: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 006461c8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006461cb: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 006461ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006461cf: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6461d4u); f_007b9a88();
    /* 006461d4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006461d7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6461dcu); f_007b4f54();
    /* 006461dc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006461df: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006461e2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006461e5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006461e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006461eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006461f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006461f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006461f5: ret 0xc */ FN_RET(0x0064616f); r_esp += 16; return;
}

void f_006461f8(void) /* sub_6461F8 */
{
    FN_ENTER(0x006461f8);
    /* 006461f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006461f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006461fb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006461fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00646200: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x646203u); call_ind(t); }
    /* 00646203: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646205: jne 0x646209 */ if (!fZ) goto L_00646209;
L_00646207:; BB(0x00646207);
    /* 00646207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646208: ret  */ FN_RET(0x006461f8); r_esp += 4; return;
L_00646209:; BB(0x00646209);
    /* 00646209: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 0064620f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x646214u); f_00829cc8();
    /* 00646214: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x646219u); f_0082d7b0();
    /* 00646219: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0064621c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x646221u); f_0082d838();
    /* 00646221: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00646224: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646226: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64622bu); f_0082d8bc();
    /* 0064622b: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 00646230: push dword ptr [ebp + 0xb4] */ { u32 v = R32((u32)(r_ebp+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646236: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0064623c: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 00646242: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00646248: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0064624b: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x646250u); f_0083bd00();
    /* 00646250: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x646255u); f_0082da80();
    /* 00646255: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646256: ret  */ FN_RET(0x006461f8); r_esp += 4; return;
}

void f_00646258(void)
{
    FN_ENTER(0x00646258);
    /* 00646258: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646259: mov ebp, esp */ r_ebp = r_esp;
    /* 0064625b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064625d: push 0x8e5b10 */ { u32 v = 0x8e5b10u; r_esp -= 4; W32(r_esp, v); }
    /* 00646262: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00646268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646269: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00646270: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646273: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00646276: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00646279: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064627c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064627f: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00646284: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064628b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x646290u); f_005caba4();
    /* 00646290: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00646291: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00646294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646296: je 0x6462cf */ if (fZ) goto L_006462cf;
L_00646298:; BB(0x00646298);
    /* 00646298: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064629f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006462a6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006462a9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006462af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006462b2: call 0x6462d4 */ r_esp -= 4; W32(r_esp, 0x6462b7u); f_006462d4();
    /* 006462b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006462ba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006462c1:; BB(0x006462c1);
    /* 006462c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006462c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006462cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006462cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006462ce: ret  */ FN_RET(0x00646258); r_esp += 4; return;
L_006462cf:; BB(0x006462cf);
    /* 006462cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006462d1: jmp 0x6462c1 */ goto L_006462c1;
}

void f_006462d4(void) /* sub_6462D4 */
{
    FN_ENTER(0x006462d4);
    /* 006462d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006462d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006462d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006462d9: push 0x8e5b2c */ { u32 v = 0x8e5b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006462de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006462e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006462e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006462ec: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006462ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006462f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006462f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006462f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006462fb: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006462fe: push 0x935a78 */ { u32 v = 0x935a78u; r_esp -= 4; W32(r_esp, v); }
    /* 00646303: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00646306: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646309: call 0x6460d8 */ r_esp -= 4; W32(r_esp, 0x64630eu); f_006460d8();
    /* 0064630e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00646315: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00646318: mov dword ptr [edx], 0xb2f760 */ W32((u32)(r_edx), 0xb2f760u);
    /* 0064631e: mov eax, dword ptr [0x9c7104] */ r_eax = R32((u32)(0x9c7104u));
    /* 00646323: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00646325: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00646328: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x64632du); f_00645b00();
    /* 0064632d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064632e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00646331: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00646334: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 00646337: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0064633a: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 0064633d: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00646340: fadd dword ptr [edx*4 + 0x935a08] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x935a08u));
    /* 00646347: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 0064634d: mov eax, ecx */ r_eax = r_ecx;
    /* 0064634f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00646352: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00646359: mov esp, ebp */ r_esp = r_ebp;
    /* 0064635b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064635c: ret 8 */ FN_RET(0x006462d4); r_esp += 12; return;
}

void f_00646360(void) /* sub_646360 */
{
    FN_ENTER(0x00646360);
    /* 00646360: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646361: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646362: mov esi, ecx */ r_esi = r_ecx;
    /* 00646364: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00646366: mov ecx, esi */ r_ecx = r_esi;
    /* 00646368: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x64636bu); call_ind(t); }
    /* 0064636b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064636d: jne 0x646372 */ if (!fZ) goto L_00646372;
L_0064636f:; BB(0x0064636f);
    /* 0064636f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646370: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00646371: ret  */ FN_RET(0x00646360); r_esp += 4; return;
L_00646372:; BB(0x00646372);
    /* 00646372: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 00646378: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64637du); f_00829cc8();
    /* 0064637d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x646382u); f_0082d7b0();
    /* 00646382: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00646385: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64638au); f_0082d838();
    /* 0064638a: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0064638d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064638f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x646394u); f_0082d8bc();
    /* 00646394: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00646396: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x64639bu); f_00645ae8();
    /* 0064639b: mov ebp, eax */ r_ebp = r_eax;
    /* 0064639d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064639f: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6463a4u); f_00645b00();
    /* 006463a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006463a7: push dword ptr [esi + 0xb4] */ { u32 v = R32((u32)(r_esi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006463ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006463af: mov edx, eax */ r_edx = r_eax;
    /* 006463b1: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x6463b6u); f_0083bd00();
    /* 006463b6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6463bbu); f_0082da80();
    /* 006463bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006463bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006463bd: ret  */ FN_RET(0x00646360); r_esp += 4; return;
}

void f_006463c0(void) /* sub_6463C0 */
{
    FN_ENTER(0x006463c0);
    /* 006463c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006463c1: mov esi, ecx */ r_esi = r_ecx;
    /* 006463c3: fld dword ptr [esi + 0xb4] */ FPUSH(R_F32((u32)(r_esi+0xb4u)));
    /* 006463c9: fcom dword ptr [0x935a70] */ fx_compare(ST(0), R_F32((u32)(0x935a70u))); 
    /* 006463cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006463d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006463d2: jb 0x646403 */ if (fC) goto L_00646403;
L_006463d4:; BB(0x006463d4);
    /* 006463d4: fcomp dword ptr [0x935a74] */ fx_compare(ST(0), R_F32((u32)(0x935a74u))); FPOP();
    /* 006463da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006463dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006463dd: ja 0x646405 */ if ((!fC&&!fZ)) goto L_00646405;
L_006463df:; BB(0x006463df);
    /* 006463df: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 006463e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006463e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006463e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006463e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006463e7: push 0x41b */ { u32 v = 0x41bu; r_esp -= 4; W32(r_esp, v); }
    /* 006463ec: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6463f1u); f_00814298();
    /* 006463f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006463f3: push 0xfffffb00 */ { u32 v = 0xfffffb00u; r_esp -= 4; W32(r_esp, v); }
    /* 006463f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006463f9: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6463feu); f_00814664();
    /* 006463fe: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00646401: jmp 0x646405 */ goto L_00646405;
L_00646403:; BB(0x00646403);
    /* 00646403: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00646405:; BB(0x00646405);
    /* 00646405: mov ecx, esi */ r_ecx = r_esi;
    /* 00646407: call 0x646410 */ r_esp -= 4; W32(r_esp, 0x64640cu); f_00646410();
    /* 0064640c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064640d: ret  */ FN_RET(0x006463c0); r_esp += 4; return;
}

void f_00646410(void) /* sub_646410 */
{
    FN_ENTER(0x00646410);
    /* 00646410: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00646411: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00646413: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00646415: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 0064641b: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064641e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00646420: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x646423u); call_ind(t); }
    /* 00646423: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00646425: je 0x646462 */ if (fZ) goto L_00646462;
L_00646427:; BB(0x00646427);
    /* 00646427: mov edx, dword ptr [ebx + 0xb8] */ r_edx = R32((u32)(r_ebx+0xb8u));
    /* 0064642d: fld dword ptr [ebx + 0xb4] */ FPUSH(R_F32((u32)(r_ebx+0xb4u)));
    /* 00646433: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00646435: fcom dword ptr [ebx + 0xb0] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0xb0u))); 
    /* 0064643b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064643d: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 00646443: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00646444: jb 0x64645a */ if (fC) goto L_0064645a;
L_00646446:; BB(0x00646446);
    /* 00646446: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00646448: mov dword ptr [ebx + 0xac], 2 */ W32((u32)(r_ebx+0xacu), 0x2u);
    /* 00646452: mov dword ptr [ebx + 0xb4], edx */ W32((u32)(r_ebx+0xb4u), r_edx);
    /* 00646458: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00646459: ret  */ FN_RET(0x00646410); r_esp += 4; return;
L_0064645a:; BB(0x0064645a);
    /* 0064645a: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
    /* 00646460: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00646461: ret  */ FN_RET(0x00646410); r_esp += 4; return;
L_00646462:; BB(0x00646462);
    /* 00646462: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00646464: mov dword ptr [ebx + 0xac], 3 */ W32((u32)(r_ebx+0xacu), 0x3u);
    /* 0064646e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00646470: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x646473u); call_ind(t); }
    /* 00646473: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00646474: ret  */ FN_RET(0x00646410); r_esp += 4; return;
}

void f_00646425(void)
{
    FN_ENTER(0x00646425);
    /* 00646425: je 0x646462 */ if (fZ) goto L_00646462;
L_00646427:; BB(0x00646427);
    /* 00646427: mov edx, dword ptr [ebx + 0xb8] */ r_edx = R32((u32)(r_ebx+0xb8u));
    /* 0064642d: fld dword ptr [ebx + 0xb4] */ FPUSH(R_F32((u32)(r_ebx+0xb4u)));
    /* 00646433: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00646435: fcom dword ptr [ebx + 0xb0] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0xb0u))); 
    /* 0064643b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064643d: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 00646443: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00646444: jb 0x64645a */ if (fC) goto L_0064645a;
L_00646446:; BB(0x00646446);
    /* 00646446: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00646448: mov dword ptr [ebx + 0xac], 2 */ W32((u32)(r_ebx+0xacu), 0x2u);
    /* 00646452: mov dword ptr [ebx + 0xb4], edx */ W32((u32)(r_ebx+0xb4u), r_edx);
    /* 00646458: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00646459: ret  */ FN_RET(0x00646425); r_esp += 4; return;
L_0064645a:; BB(0x0064645a);
    /* 0064645a: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
    /* 00646460: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00646461: ret  */ FN_RET(0x00646425); r_esp += 4; return;
L_00646462:; BB(0x00646462);
    /* 00646462: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00646464: mov dword ptr [ebx + 0xac], 3 */ W32((u32)(r_ebx+0xacu), 0x3u);
    /* 0064646e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00646470: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x646473u); call_ind(t); }
    /* 00646473: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00646474: ret  */ FN_RET(0x00646425); r_esp += 4; return;
}

void f_00646478(void) /* sub_646478 */
{
    FN_ENTER(0x00646478);
    /* 00646478: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646479: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0064647b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064647d: call 0x646614 */ r_esp -= 4; W32(r_esp, 0x646482u); f_00646614();
    /* 00646482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646484: je 0x6464a8 */ if (fZ) goto L_006464a8;
L_00646486:; BB(0x00646486);
    /* 00646486: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00646489: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064648b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064648c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064648d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064648e: push 0x41b */ { u32 v = 0x41bu; r_esp -= 4; W32(r_esp, v); }
    /* 00646493: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x646498u); f_00814298();
    /* 00646498: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064649a: push 0xfffff800 */ { u32 v = 0xfffff800u; r_esp -= 4; W32(r_esp, v); }
    /* 0064649f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006464a0: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6464a5u); f_00814664();
    /* 006464a5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006464a8:; BB(0x006464a8);
    /* 006464a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006464a9: ret  */ FN_RET(0x00646478); r_esp += 4; return;
}

void f_006464ac(void) /* sub_6464AC */
{
    FN_ENTER(0x006464ac);
    /* 006464ac: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006464af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006464b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006464b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006464b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006464b4: push 0x41c */ { u32 v = 0x41cu; r_esp -= 4; W32(r_esp, v); }
    /* 006464b9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6464beu); f_00814298();
    /* 006464be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006464c0: push 0xfffffb00 */ { u32 v = 0xfffffb00u; r_esp -= 4; W32(r_esp, v); }
    /* 006464c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006464c6: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6464cbu); f_00814664();
    /* 006464cb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006464ce: ret  */ FN_RET(0x006464ac); r_esp += 4; return;
}

void f_006464d0(void)
{
    FN_ENTER(0x006464d0);
    /* 006464d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006464d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006464d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006464d5: push 0x8e5b54 */ { u32 v = 0x8e5b54u; r_esp -= 4; W32(r_esp, v); }
    /* 006464da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006464e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006464e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006464e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006464eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006464ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006464f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006464f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006464f7: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006464fc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00646503: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x646508u); f_005caba4();
    /* 00646508: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00646509: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064650c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064650e: je 0x646547 */ if (fZ) goto L_00646547;
L_00646510:; BB(0x00646510);
    /* 00646510: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00646517: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064651e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646521: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646527: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064652a: call 0x64654c */ r_esp -= 4; W32(r_esp, 0x64652fu); f_0064654c();
    /* 0064652f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00646532: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00646539:; BB(0x00646539);
    /* 00646539: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064653c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00646543: mov esp, ebp */ r_esp = r_ebp;
    /* 00646545: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646546: ret  */ FN_RET(0x006464d0); r_esp += 4; return;
L_00646547:; BB(0x00646547);
    /* 00646547: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646549: jmp 0x646539 */ goto L_00646539;
}

void f_0064654c(void) /* sub_64654C */
{
    FN_ENTER(0x0064654c);
    /* 0064654c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064654d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064654f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00646551: push 0x8e5b70 */ { u32 v = 0x8e5b70u; r_esp -= 4; W32(r_esp, v); }
    /* 00646556: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064655c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064655d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00646564: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646567: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064656a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064656d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00646570: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00646573: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00646576: push 0x9c7114 */ { u32 v = 0x9c7114u; r_esp -= 4; W32(r_esp, v); }
    /* 0064657b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064657e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646581: call 0x6460d8 */ r_esp -= 4; W32(r_esp, 0x646586u); f_006460d8();
    /* 00646586: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064658d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00646590: mov dword ptr [edx], 0xb2f7c0 */ W32((u32)(r_edx), 0xb2f7c0u);
    /* 00646596: mov eax, dword ptr [0x9c7108] */ r_eax = R32((u32)(0x9c7108u));
    /* 0064659b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064659d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006465a0: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6465a5u); f_00645b00();
    /* 006465a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006465a6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006465a9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006465ac: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006465af: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006465b2: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 006465b5: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006465b8: fadd dword ptr [edx*4 + 0x935a00] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x935a00u));
    /* 006465bf: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006465c5: mov eax, ecx */ r_eax = r_ecx;
    /* 006465c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006465ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006465d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006465d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006465d4: ret 8 */ FN_RET(0x0064654c); r_esp += 12; return;
}

void f_00646552(void)
{
    FN_ENTER(0x00646552);
    /* 00646552: jo 0x6465af */ if (fO) goto L_006465af;
L_00646554:; BB(0x00646554);
    /* 00646554: mov es, word ptr [eax] */ UNSUP(0x00646554, "mov es, word ptr [eax]");
    /* 00646556: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064655c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064655d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00646564: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646567: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064656a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064656d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00646570: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00646573: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00646576: push 0x9c7114 */ { u32 v = 0x9c7114u; r_esp -= 4; W32(r_esp, v); }
    /* 0064657b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064657e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646581: call 0x6460d8 */ r_esp -= 4; W32(r_esp, 0x646586u); f_006460d8();
    /* 00646586: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064658d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00646590: mov dword ptr [edx], 0xb2f7c0 */ W32((u32)(r_edx), 0xb2f7c0u);
    /* 00646596: mov eax, dword ptr [0x9c7108] */ r_eax = R32((u32)(0x9c7108u));
    /* 0064659b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064659d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006465a0: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6465a5u); f_00645b00();
    /* 006465a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006465a6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006465a9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006465ac: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
L_006465af:; BB(0x006465af);
    /* 006465af: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006465b2: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 006465b5: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006465b8: fadd dword ptr [edx*4 + 0x935a00] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x935a00u));
    /* 006465bf: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006465c5: mov eax, ecx */ r_eax = r_ecx;
    /* 006465c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006465ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006465d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006465d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006465d4: ret 8 */ FN_RET(0x00646552); r_esp += 12; return;
}

void f_00646557(void)
{
    FN_ENTER(0x00646557);
    /* 00646557: mov eax, dword ptr [0] */ r_eax = R32((u32)(0x0u));
    /* 0064655c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064655d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00646564: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646567: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064656a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064656d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00646570: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00646573: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00646576: push 0x9c7114 */ { u32 v = 0x9c7114u; r_esp -= 4; W32(r_esp, v); }
    /* 0064657b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064657e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646581: call 0x6460d8 */ r_esp -= 4; W32(r_esp, 0x646586u); f_006460d8();
    /* 00646586: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064658d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00646590: mov dword ptr [edx], 0xb2f7c0 */ W32((u32)(r_edx), 0xb2f7c0u);
    /* 00646596: mov eax, dword ptr [0x9c7108] */ r_eax = R32((u32)(0x9c7108u));
    /* 0064659b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064659d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006465a0: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6465a5u); f_00645b00();
    /* 006465a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006465a6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006465a9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006465ac: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006465af: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006465b2: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 006465b5: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006465b8: fadd dword ptr [edx*4 + 0x935a00] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x935a00u));
    /* 006465bf: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006465c5: mov eax, ecx */ r_eax = r_ecx;
    /* 006465c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006465ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006465d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006465d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006465d4: ret 8 */ FN_RET(0x00646557); r_esp += 12; return;
}

void f_0064656b(void)
{
    FN_ENTER(0x0064656b);
    goto L_0064656b;
L_00646551:; BB(0x00646551);
    /* 00646551: push 0x8e5b70 */ { u32 v = 0x8e5b70u; r_esp -= 4; W32(r_esp, v); }
    /* 00646556: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064655c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064655d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00646564: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646567: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064656a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
L_0064656b:; BB(0x0064656b);
    /* 0064656b: jge 0x646551 */ if ((fS==fO)) goto L_00646551;
L_0064656d:; BB(0x0064656d);
    /* 0064656d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00646570: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00646573: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00646576: push 0x9c7114 */ { u32 v = 0x9c7114u; r_esp -= 4; W32(r_esp, v); }
    /* 0064657b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064657e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646581: call 0x6460d8 */ r_esp -= 4; W32(r_esp, 0x646586u); f_006460d8();
    /* 00646586: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064658d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00646590: mov dword ptr [edx], 0xb2f7c0 */ W32((u32)(r_edx), 0xb2f7c0u);
    /* 00646596: mov eax, dword ptr [0x9c7108] */ r_eax = R32((u32)(0x9c7108u));
    /* 0064659b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064659d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006465a0: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6465a5u); f_00645b00();
    /* 006465a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006465a6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006465a9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006465ac: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006465af: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006465b2: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 006465b5: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006465b8: fadd dword ptr [edx*4 + 0x935a00] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x935a00u));
    /* 006465bf: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006465c5: mov eax, ecx */ r_eax = r_ecx;
    /* 006465c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006465ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006465d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006465d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006465d4: ret 8 */ FN_RET(0x0064656b); r_esp += 12; return;
}

void f_0064656c(void)
{
    FN_ENTER(0x0064656c);
    goto L_0064656c;
L_00646558:; BB(0x00646558);
    /* 00646558: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064655a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064655c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064655d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00646564: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646567: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064656a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
L_0064656c:; BB(0x0064656c);
    /* 0064656c: in al, 0x89 */ UNSUP(0x0064656c, "in al, 0x89");
    /* 0064656d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064656e: jne 0x646558 */ if (!fZ) goto L_00646558;
L_00646570:; BB(0x00646570);
    /* 00646570: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00646573: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00646576: push 0x9c7114 */ { u32 v = 0x9c7114u; r_esp -= 4; W32(r_esp, v); }
    /* 0064657b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064657e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646581: call 0x6460d8 */ r_esp -= 4; W32(r_esp, 0x646586u); f_006460d8();
    /* 00646586: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064658d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00646590: mov dword ptr [edx], 0xb2f7c0 */ W32((u32)(r_edx), 0xb2f7c0u);
    /* 00646596: mov eax, dword ptr [0x9c7108] */ r_eax = R32((u32)(0x9c7108u));
    /* 0064659b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064659d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006465a0: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6465a5u); f_00645b00();
    /* 006465a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006465a6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006465a9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006465ac: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006465af: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006465b2: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 006465b5: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006465b8: fadd dword ptr [edx*4 + 0x935a00] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x935a00u));
    /* 006465bf: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006465c5: mov eax, ecx */ r_eax = r_ecx;
    /* 006465c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006465ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006465d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006465d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006465d4: ret 8 */ FN_RET(0x0064656c); r_esp += 12; return;
}

void f_00646574(void)
{
    FN_ENTER(0x00646574);
    goto L_00646574;
L_00646516:; BB(0x00646516);
    /* 00646516: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00646518: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00646519: cld  */ rt_df = 0;
    /* 0064651a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064651c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064651e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646521: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646527: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064652a: call 0x64654c */ r_esp -= 4; W32(r_esp, 0x64652fu); f_0064654c();
    /* 0064652f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00646532: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00646539: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064653c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00646543: mov esp, ebp */ r_esp = r_ebp;
    /* 00646545: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646546: ret  */ FN_RET(0x00646574); r_esp += 4; return;
L_00646574:; BB(0x00646574);
    /* 00646574: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646575: fsubr dword ptr [eax + 0x14] */ ST(0) = R_F32((u32)(r_eax+0x14u)) - ST(0);
    /* 00646578: jno 0x646516 */ if (!fO) goto L_00646516;
L_0064657a:; BB(0x0064657a);
    /* 0064657a: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 0064657c: jne 0x64658a */ if (!fZ) goto L_0064658a;
L_0064657e:; BB(0x0064657e);
    /* 0064657e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646581: call 0x6460d8 */ r_esp -= 4; W32(r_esp, 0x646586u); f_006460d8();
    /* 00646586: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0064658a:; BB(0x0064658a);
    /* 0064658a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064658c: add byte ptr [ebx + 0x2c7d855], cl */ { u32 ad = (u32)(r_ebx+0x2c7d855u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064658d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00646590: mov dword ptr [edx], 0xb2f7c0 */ W32((u32)(r_edx), 0xb2f7c0u);
    /* 00646592: sal bh, 0xb2 */ { u32 c = (18u) & 31; u32 a = (u8)(r_ebx>>8); u32 r = a; if (c) { r = (a << c) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 00646595: add byte ptr [ecx + 0x9c7108], ah */ { u32 ad = (u32)(r_ecx+0x9c7108u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00646596: mov eax, dword ptr [0x9c7108] */ r_eax = R32((u32)(0x9c7108u));
    /* 0064659b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064659d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006465a0: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6465a5u); f_00645b00();
    /* 006465a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006465a6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006465a9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006465ac: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006465af: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006465b2: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 006465b5: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006465b8: fadd dword ptr [edx*4 + 0x935a00] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x935a00u));
    /* 006465bf: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006465c5: mov eax, ecx */ r_eax = r_ecx;
    /* 006465c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006465ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006465d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006465d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006465d4: ret 8 */ FN_RET(0x00646574); r_esp += 12; return;
}

void f_006465d8(void) /* sub_6465D8 */
{
    FN_ENTER(0x006465d8);
    /* 006465d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006465d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006465db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006465dd: call 0x646614 */ r_esp -= 4; W32(r_esp, 0x6465e2u); f_00646614();
    /* 006465e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006465e4: jne 0x6465f0 */ if (!fZ) goto L_006465f0;
L_006465e6:; BB(0x006465e6);
    /* 006465e6: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
L_006465f0:; BB(0x006465f0);
    /* 006465f0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006465f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006465f4: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x6465f7u); call_ind(t); }
    /* 006465f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006465f9: call 0x646614 */ r_esp -= 4; W32(r_esp, 0x6465feu); f_00646614();
    /* 006465fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646600: jne 0x646611 */ if (!fZ) goto L_00646611;
L_00646602:; BB(0x00646602);
    /* 00646602: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00646608: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0064660b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064660e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00646611:; BB(0x00646611);
    /* 00646611: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00646612: ret  */ FN_RET(0x006465d8); r_esp += 4; return;
}

void f_00646614(void) /* sub_646614 */
{
    FN_ENTER(0x00646614);
    /* 00646614: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x646619u); f_006dc358();
    /* 00646619: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064661c: je 0x646660 */ if (fZ) goto L_00646660;
L_0064661e:; BB(0x0064661e);
    /* 0064661e: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 00646623: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646625: je 0x646659 */ if (fZ) goto L_00646659;
L_00646627:; BB(0x00646627);
    /* 00646627: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
L_0064662a:; BB(0x0064662a);
    /* 0064662a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064662d: je 0x646634 */ if (fZ) goto L_00646634;
L_0064662f:; BB(0x0064662f);
    /* 0064662f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646632: je 0x646650 */ if (fZ) goto L_00646650;
L_00646634:; BB(0x00646634);
    /* 00646634: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 00646639: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064663c: jne 0x646653 */ if (!fZ) goto L_00646653;
L_0064663e:; BB(0x0064663e);
    /* 0064663e: mov eax, dword ptr [0xaab1cc] */ r_eax = R32((u32)(0xaab1ccu));
    /* 00646643: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646645: je 0x646653 */ if (fZ) goto L_00646653;
L_00646647:; BB(0x00646647);
    /* 00646647: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 0064664c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064664e: jne 0x646653 */ if (!fZ) goto L_00646653;
L_00646650:; BB(0x00646650);
    /* 00646650: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646652: ret  */ FN_RET(0x00646614); r_esp += 4; return;
L_00646653:; BB(0x00646653);
    /* 00646653: mov eax, 1 */ r_eax = 0x1u;
    /* 00646658: ret  */ FN_RET(0x00646614); r_esp += 4; return;
L_00646659:; BB(0x00646659);
    /* 00646659: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0064665e: jmp 0x64662a */ goto L_0064662a;
L_00646660:; BB(0x00646660);
    /* 00646660: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x646665u); f_0078b1c4();
    /* 00646665: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646668: jne 0x646634 */ if (!fZ) goto L_00646634;
L_0064666a:; BB(0x0064666a);
    /* 0064666a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064666c: ret  */ FN_RET(0x00646614); r_esp += 4; return;
}

void f_0064666b(void)
{
    FN_ENTER(0x0064666b);
    /* 0064666b: rol bl, 0x90 */ { u32 c = (16u) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0064666e: nop  */ ;
    /* 0064666f: nop  */ ;
    /* 00646670: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646671: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646672: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00646674: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00646677: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00646679: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x64667cu); call_ind(t); }
    /* 0064667c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064667e: jne 0x646683 */ if (!fZ) goto L_00646683;
L_00646680:; BB(0x00646680);
    /* 00646680: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646681: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00646682: ret  */ FN_RET(0x0064666b); r_esp += 4; return;
L_00646683:; BB(0x00646683);
    /* 00646683: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 00646689: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64668eu); f_00829cc8();
    /* 0064668e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x646693u); f_0082d7b0();
    /* 00646693: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00646696: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64669bu); f_0082d838();
    /* 0064669b: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0064669e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006466a0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6466a5u); f_0082d8bc();
    /* 006466a5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006466a7: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x6466acu); f_00645ae8();
    /* 006466ac: mov esi, eax */ r_esi = r_eax;
    /* 006466ae: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006466b0: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6466b5u); f_00645b00();
    /* 006466b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006466b8: push dword ptr [ebp + 0xb4] */ { u32 v = R32((u32)(r_ebp+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006466be: mov ecx, esi */ r_ecx = r_esi;
    /* 006466c0: mov edx, eax */ r_edx = r_eax;
    /* 006466c2: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x6466c7u); f_0083bd00();
    /* 006466c7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006466c9: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x6466ceu); f_00645ae8();
    /* 006466ce: mov esi, eax */ r_esi = r_eax;
    /* 006466d0: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006466d2: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6466d7u); f_00645b00();
    /* 006466d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006466da: push dword ptr [ebp + 0xb4] */ { u32 v = R32((u32)(r_ebp+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006466e0: mov ecx, esi */ r_ecx = r_esi;
    /* 006466e2: mov edx, eax */ r_edx = r_eax;
    /* 006466e4: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x6466e9u); f_0083bd00();
    /* 006466e9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6466eeu); f_0082da80();
    /* 006466ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006466ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006466f0: ret  */ FN_RET(0x0064666b); r_esp += 4; return;
}

void f_00646670(void) /* sub_646670 */
{
    FN_ENTER(0x00646670);
    /* 00646670: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646671: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646672: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00646674: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00646677: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00646679: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x64667cu); call_ind(t); }
    /* 0064667c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064667e: jne 0x646683 */ if (!fZ) goto L_00646683;
L_00646680:; BB(0x00646680);
    /* 00646680: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646681: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00646682: ret  */ FN_RET(0x00646670); r_esp += 4; return;
L_00646683:; BB(0x00646683);
    /* 00646683: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 00646689: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64668eu); f_00829cc8();
    /* 0064668e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x646693u); f_0082d7b0();
    /* 00646693: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00646696: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64669bu); f_0082d838();
    /* 0064669b: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0064669e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006466a0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6466a5u); f_0082d8bc();
    /* 006466a5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006466a7: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x6466acu); f_00645ae8();
    /* 006466ac: mov esi, eax */ r_esi = r_eax;
    /* 006466ae: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006466b0: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6466b5u); f_00645b00();
    /* 006466b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006466b8: push dword ptr [ebp + 0xb4] */ { u32 v = R32((u32)(r_ebp+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006466be: mov ecx, esi */ r_ecx = r_esi;
    /* 006466c0: mov edx, eax */ r_edx = r_eax;
    /* 006466c2: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x6466c7u); f_0083bd00();
    /* 006466c7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006466c9: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x6466ceu); f_00645ae8();
    /* 006466ce: mov esi, eax */ r_esi = r_eax;
    /* 006466d0: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006466d2: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6466d7u); f_00645b00();
    /* 006466d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006466da: push dword ptr [ebp + 0xb4] */ { u32 v = R32((u32)(r_ebp+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006466e0: mov ecx, esi */ r_ecx = r_esi;
    /* 006466e2: mov edx, eax */ r_edx = r_eax;
    /* 006466e4: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x6466e9u); f_0083bd00();
    /* 006466e9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6466eeu); f_0082da80();
    /* 006466ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006466ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006466f0: ret  */ FN_RET(0x00646670); r_esp += 4; return;
}

void f_00646673(void)
{
    FN_ENTER(0x00646673);
    /* 00646673: jmp 0x8b64ac03 */ UNSUP(0x00646673, "jump to code that was not decoded");
}

void f_006466f4(void)
{
    FN_ENTER(0x006466f4);
    /* 006466f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006466f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006466f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006466f9: push 0x8e5b98 */ { u32 v = 0x8e5b98u; r_esp -= 4; W32(r_esp, v); }
    /* 006466fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00646704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646705: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064670c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064670f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00646712: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00646715: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00646718: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064671b: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00646720: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00646727: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64672cu); f_005caba4();
    /* 0064672c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064672d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00646730: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646732: je 0x64676b */ if (fZ) goto L_0064676b;
L_00646734:; BB(0x00646734);
    /* 00646734: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064673b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00646742: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646745: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064674b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064674e: call 0x646770 */ r_esp -= 4; W32(r_esp, 0x646753u); f_00646770();
    /* 00646753: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00646756: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064675d:; BB(0x0064675d);
    /* 0064675d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00646760: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00646767: mov esp, ebp */ r_esp = r_ebp;
    /* 00646769: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064676a: ret  */ FN_RET(0x006466f4); r_esp += 4; return;
L_0064676b:; BB(0x0064676b);
    /* 0064676b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064676d: jmp 0x64675d */ goto L_0064675d;
}

void f_00646770(void) /* sub_646770 */
{
    FN_ENTER(0x00646770);
    /* 00646770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646771: mov ebp, esp */ r_ebp = r_esp;
    /* 00646773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00646775: push 0x8e5bb4 */ { u32 v = 0x8e5bb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064677a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00646780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646781: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00646788: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064678b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064678e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00646791: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00646794: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00646797: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0064679a: push 0x935a54 */ { u32 v = 0x935a54u; r_esp -= 4; W32(r_esp, v); }
    /* 0064679f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006467a2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006467a5: call 0x6460d8 */ r_esp -= 4; W32(r_esp, 0x6467aau); f_006460d8();
    /* 006467aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006467b1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006467b4: mov dword ptr [edx], 0xb2f820 */ W32((u32)(r_edx), 0xb2f820u);
    /* 006467ba: mov eax, dword ptr [0x9c710c] */ r_eax = R32((u32)(0x9c710cu));
    /* 006467bf: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006467c1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006467c4: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6467c9u); f_00645b00();
    /* 006467c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006467ca: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006467cd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006467d0: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006467d3: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006467d6: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 006467d9: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006467dc: fadd dword ptr [edx*4 + 0x9359f8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9359f8u));
    /* 006467e3: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006467e9: mov eax, ecx */ r_eax = r_ecx;
    /* 006467eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006467ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006467f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006467f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006467f8: ret 8 */ FN_RET(0x00646770); r_esp += 12; return;
}

void f_006467fc(void) /* sub_6467FC */
{
    FN_ENTER(0x006467fc);
    /* 006467fc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006467fe: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x646801u); call_ind(t); }
    /* 00646801: ret  */ FN_RET(0x006467fc); r_esp += 4; return;
}

void f_00646804(void) /* sub_646804 */
{
    FN_ENTER(0x00646804);
    /* 00646804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646805: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646806: mov esi, ecx */ r_esi = r_ecx;
    /* 00646808: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0064680a: mov ecx, esi */ r_ecx = r_esi;
    /* 0064680c: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x64680fu); call_ind(t); }
    /* 0064680f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646811: jne 0x646816 */ if (!fZ) goto L_00646816;
L_00646813:; BB(0x00646813);
    /* 00646813: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646814: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00646815: ret  */ FN_RET(0x00646804); r_esp += 4; return;
L_00646816:; BB(0x00646816);
    /* 00646816: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 0064681c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x646821u); f_00829cc8();
    /* 00646821: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x646826u); f_0082d7b0();
    /* 00646826: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00646829: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64682eu); f_0082d838();
    /* 0064682e: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00646831: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646833: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x646838u); f_0082d8bc();
    /* 00646838: push 0xc2a00000 */ { u32 v = 0xc2a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064683d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064683f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646841: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00646843: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x646848u); f_00830b74();
    /* 00646848: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0064684a: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x64684fu); f_00645ae8();
    /* 0064684f: mov ebp, eax */ r_ebp = r_eax;
    /* 00646851: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00646853: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x646858u); f_00645b00();
    /* 00646858: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064685b: push dword ptr [esi + 0xb4] */ { u32 v = R32((u32)(r_esi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00646861: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00646863: mov edx, eax */ r_edx = r_eax;
    /* 00646865: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x64686au); f_0083bd00();
    /* 0064686a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64686fu); f_0082da80();
    /* 0064686f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646870: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00646871: ret  */ FN_RET(0x00646804); r_esp += 4; return;
}

void f_00646874(void)
{
    FN_ENTER(0x00646874);
    /* 00646874: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646875: mov ebp, esp */ r_ebp = r_esp;
    /* 00646877: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00646879: push 0x8e5bdc */ { u32 v = 0x8e5bdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064687e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00646884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646885: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064688c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064688f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00646892: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00646895: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00646898: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064689b: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 006468a0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006468a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6468acu); f_005caba4();
    /* 006468ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006468ad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006468b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006468b2: je 0x6468eb */ if (fZ) goto L_006468eb;
L_006468b4:; BB(0x006468b4);
    /* 006468b4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006468bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006468c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006468c5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006468cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006468ce: call 0x6468f0 */ r_esp -= 4; W32(r_esp, 0x6468d3u); f_006468f0();
    /* 006468d3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006468d6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006468dd:; BB(0x006468dd);
    /* 006468dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006468e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006468e7: mov esp, ebp */ r_esp = r_ebp;
    /* 006468e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006468ea: ret  */ FN_RET(0x00646874); r_esp += 4; return;
L_006468eb:; BB(0x006468eb);
    /* 006468eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006468ed: jmp 0x6468dd */ goto L_006468dd;
}

void f_006468f0(void) /* sub_6468F0 */
{
    FN_ENTER(0x006468f0);
    /* 006468f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006468f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006468f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006468f5: push 0x8e5bf8 */ { u32 v = 0x8e5bf8u; r_esp -= 4; W32(r_esp, v); }
    /* 006468fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00646900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646901: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00646908: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064690b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064690e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00646911: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00646914: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00646917: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064691a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064691d: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00646920: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00646923: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x646928u); f_007ba278();
    /* 00646928: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064692f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646932: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646935: mov dword ptr [ecx], 0xb2f880 */ W32((u32)(r_ecx), 0xb2f880u);
    /* 0064693b: mov eax, dword ptr [0x9c7110] */ r_eax = R32((u32)(0x9c7110u));
    /* 00646940: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00646941: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00646944: call dword ptr [0xb2f894] */ { u32 t = R32((u32)(0xb2f894u)); r_esp -= 4; W32(r_esp, 0x64694au); call_ind(t); }
    /* 0064694a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064694d: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00646950: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 00646953: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 00646956: lea edx, [eax + 0xa8] */ r_edx = (u32)(r_eax+0xa8u);
    /* 0064695c: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 00646962: mov dword ptr [eax + 0xa0], 0x44fa0000 */ W32((u32)(r_eax+0xa0u), 0x44fa0000u);
    /* 0064696c: mov dword ptr [eax + 0x94], ecx */ W32((u32)(r_eax+0x94u), r_ecx);
    /* 00646972: mov dword ptr [eax + 0x98], ebx */ W32((u32)(r_eax+0x98u), r_ebx);
    /* 00646978: mov dword ptr [eax + 0x9c], esi */ W32((u32)(r_eax+0x9cu), r_esi);
    /* 0064697e: mov dword ptr [eax + 0xa4], 0xde0 */ W32((u32)(r_eax+0xa4u), 0xde0u);
    /* 00646988: lea edi, [eax + 0xb8] */ r_edi = (u32)(r_eax+0xb8u);
    /* 0064698e: mov dword ptr [eax + 0xb4], edi */ W32((u32)(r_eax+0xb4u), r_edi);
    /* 00646994: lea edx, [eax + 0x1d8] */ r_edx = (u32)(r_eax+0x1d8u);
    /* 0064699a: mov dword ptr [eax + 0xb0], 8 */ W32((u32)(r_eax+0xb0u), 0x8u);
    /* 006469a4: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 006469aa: mov dword ptr [eax + 0xa8], 0xa */ W32((u32)(r_eax+0xa8u), 0xau);
    /* 006469b4: mov dword ptr [eax + 0x250], 0 */ W32((u32)(r_eax+0x250u), 0x0u);
    /* 006469be: call 0x520d9c */ r_esp -= 4; W32(r_esp, 0x6469c3u); f_00520d9c();
    /* 006469c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006469c5: jne 0x6469e3 */ if (!fZ) goto L_006469e3;
L_006469c7:; BB(0x006469c7);
    /* 006469c7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
L_006469ca:; BB(0x006469ca);
    /* 006469ca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006469cd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006469d0: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006469d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006469d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006469dd: mov esp, ebp */ r_esp = r_ebp;
    /* 006469df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006469e0: ret 8 */ FN_RET(0x006468f0); r_esp += 12; return;
L_006469e3:; BB(0x006469e3);
    /* 006469e3: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006469e6: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 006469e9: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 006469ec: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 006469ef: mov dword ptr [ebx + 0x94], eax */ W32((u32)(r_ebx+0x94u), r_eax);
    /* 006469f5: mov dword ptr [ebx + 0x98], edx */ W32((u32)(r_ebx+0x98u), r_edx);
    /* 006469fb: mov dword ptr [ebx + 0x9c], ecx */ W32((u32)(r_ebx+0x9cu), r_ecx);
    /* 00646a01: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x646a06u); f_0082d7b0();
    /* 00646a06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646a08: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x646a0du); f_00830cd8();
    /* 00646a0d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646a10: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646a13: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x646a18u); f_0082d838();
    /* 00646a18: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646a1b: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00646a1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646a20: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x646a25u); f_0082d8bc();
    /* 00646a25: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646a28: add esi, 0xb8 */ {  u32 a = r_esi; u32 b = 0xb8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646a2e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00646a30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00646a32: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00646a35:; BB(0x00646a35);
    /* 00646a35: lea edi, [ebx + 1] */ r_edi = (u32)(r_ebx+0x1u);
    /* 00646a38: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 00646a3b: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00646a3e: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 00646a41: mov word ptr [esi + 2], dx */ W16((u32)(r_esi+0x2u), (u16)r_edx);
    /* 00646a45: lea ecx, [ebx + 3] */ r_ecx = (u32)(r_ebx+0x3u);
    /* 00646a48: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00646a4b: movzx edi, cx */ r_edi = (u32)(u16)r_ecx;
    /* 00646a4e: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 00646a52: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00646a55: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646a57: mov eax, dword ptr [edx + eax*8 + 0x935980] */ r_eax = R32((u32)(r_edx+r_eax*8+0x935980u));
    /* 00646a5e: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00646a61: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 00646a64: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646a67: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646a69: mov eax, dword ptr [eax + edx*8 + 0x935984] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935984u));
    /* 00646a70: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00646a73: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 00646a76: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646a79: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646a7b: mov eax, dword ptr [eax + edx*8 + 0x935988] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935988u));
    /* 00646a82: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00646a85: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 00646a89: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646a8c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646a8e: mov eax, dword ptr [eax + edx*8 + 0x935980] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935980u));
    /* 00646a95: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00646a98: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 00646a9c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646a9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646aa1: mov eax, dword ptr [eax + edx*8 + 0x935984] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935984u));
    /* 00646aa8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00646aab: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 00646aaf: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646ab2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646ab4: mov eax, dword ptr [eax + edx*8 + 0x935988] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935988u));
    /* 00646abb: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00646abe: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00646ac2: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646ac5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646ac7: mov eax, dword ptr [eax + edx*8 + 0x935980] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935980u));
    /* 00646ace: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00646ad1: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00646ad5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646ad8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646ada: mov eax, dword ptr [eax + edx*8 + 0x935984] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935984u));
    /* 00646ae1: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00646ae4: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00646ae8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646aeb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646aed: mov eax, dword ptr [eax + edx*8 + 0x935988] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935988u));
    /* 00646af4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00646af7: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00646afa: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 00646afd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646afe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00646aff: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646b04u); f_007a9618();
    /* 00646b04: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00646b07: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 00646b0a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00646b0d: mov word ptr [esi + 0x24], di */ W16((u32)(r_esi+0x24u), (u16)r_edi);
    /* 00646b11: mov word ptr [esi + 0x26], dx */ W16((u32)(r_esi+0x26u), (u16)r_edx);
    /* 00646b15: lea ecx, [ebx + 2] */ r_ecx = (u32)(r_ebx+0x2u);
    /* 00646b18: mov word ptr [esi + 0x28], cx */ W16((u32)(r_esi+0x28u), (u16)r_ecx);
    /* 00646b1c: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00646b1f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646b21: mov edi, dword ptr [eax + edi*8 + 0x935980] */ r_edi = R32((u32)(r_eax+r_edi*8+0x935980u));
    /* 00646b28: mov dword ptr [ebp - 0x5c], edi */ W32((u32)(r_ebp+0xffffffa4u), r_edi);
    /* 00646b2b: movzx edx, word ptr [esi + 0x24] */ r_edx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646b2f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646b32: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646b34: mov eax, dword ptr [eax + edx*8 + 0x935984] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935984u));
    /* 00646b3b: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00646b3e: movzx edx, word ptr [esi + 0x24] */ r_edx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646b42: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646b45: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646b47: mov eax, dword ptr [eax + edx*8 + 0x935988] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935988u));
    /* 00646b4e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00646b51: movzx edx, word ptr [esi + 0x26] */ r_edx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646b55: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646b58: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646b5a: mov eax, dword ptr [eax + edx*8 + 0x935980] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935980u));
    /* 00646b61: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00646b64: movzx edx, word ptr [esi + 0x26] */ r_edx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646b68: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646b6b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646b6d: mov eax, dword ptr [eax + edx*8 + 0x935984] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935984u));
    /* 00646b74: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00646b77: movzx edx, word ptr [esi + 0x26] */ r_edx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646b7b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646b7e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646b80: mov eax, dword ptr [eax + edx*8 + 0x935988] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935988u));
    /* 00646b87: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00646b8a: movzx edx, word ptr [esi + 0x28] */ r_edx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646b8e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646b91: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646b93: mov eax, dword ptr [eax + edx*8 + 0x935980] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935980u));
    /* 00646b9a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00646b9d: movzx edx, word ptr [esi + 0x28] */ r_edx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646ba1: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646ba4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646ba6: mov eax, dword ptr [eax + edx*8 + 0x935984] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935984u));
    /* 00646bad: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00646bb0: movzx edx, word ptr [esi + 0x28] */ r_edx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646bb4: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00646bb7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646bb9: mov eax, dword ptr [eax + edx*8 + 0x935988] */ r_eax = R32((u32)(r_eax+r_edx*8+0x935988u));
    /* 00646bc0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00646bc3: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00646bc6: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646bc9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646bca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646bcb: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646bd0u); f_007a9618();
    /* 00646bd0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00646bd3: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646bd6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00646bd9: lea esi, [esi + 0x24] */ r_esi = (u32)(r_esi+0x24u);
    /* 00646bdc: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00646bdf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646be2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646be5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00646be8: jl 0x646a35 */ if ((fS!=fO)) goto L_00646a35;
L_00646bee:; BB(0x00646bee);
    /* 00646bee: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646bf1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00646bf3: add eax, 0x1d8 */ {  u32 a = r_eax; u32 b = 0x1d8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646bf8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646bfa: mov edx, 0x935980 */ r_edx = 0x935980u;
    /* 00646bff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646c00: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x646c05u); f_0082f940();
    /* 00646c05: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646c08: lea edi, [ecx + 0xb8] */ r_edi = (u32)(r_ecx+0xb8u);
    /* 00646c0e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00646c10:; BB(0x00646c10);
    /* 00646c10: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00646c17: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00646c19: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00646c20: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00646c27:; BB(0x00646c27);
    /* 00646c27: movzx eax, word ptr [edi + ebx*2] */ r_eax = (u32)R16((u32)(r_edi+r_ebx*2));
    /* 00646c2b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646c2d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646c2f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00646c32: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646c34: lea edx, [ecx + edx + 0x1d8] */ r_edx = (u32)(r_ecx+r_edx+0x1d8u);
    /* 00646c3b: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00646c3e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x646c43u); f_0082ebac();
    /* 00646c43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00646c46: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646c49: jge 0x646c50 */ if ((fS==fO)) goto L_00646c50;
L_00646c4b:; BB(0x00646c4b);
    /* 00646c4b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646c4e: jmp 0x646c27 */ goto L_00646c27;
L_00646c50:; BB(0x00646c50);
    /* 00646c50: fld dword ptr [0x935a3c] */ FPUSH(R_F32((u32)(0x935a3cu)));
    /* 00646c56: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00646c59: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00646c5b: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 00646c5e: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00646c61: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646c64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646c66: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00646c68: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00646c6a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00646c6c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646c6e: fst dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0));
    /* 00646c71: fst dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0));
    /* 00646c74: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00646c76: fst dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0));
    /* 00646c79: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646c7b: fst dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 00646c7e: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 00646c81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646c83: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00646c86: fst dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0));
    /* 00646c89: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646c8b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646c8d: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646c90: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646c92: fld dword ptr [edx + ecx + 0x1d8] */ FPUSH(R_F32((u32)(r_edx+r_ecx+0x1d8u)));
    /* 00646c99: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00646c9b: fld dword ptr [edx + ecx + 0x1e0] */ FPUSH(R_F32((u32)(r_edx+r_ecx+0x1e0u)));
    /* 00646ca2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00646ca4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00646ca6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646ca8: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00646caa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646cac: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00646cae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00646cb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00646cb1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00646cb4: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x646cb9u); f_0082dc9c();
    /* 00646cb9: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 00646cbc: mov eax, 0xde0 */ r_eax = 0xde0u;
    /* 00646cc1: mov word ptr [edi + 6], ax */ W16((u32)(r_edi+0x6u), (u16)r_eax);
    /* 00646cc5: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00646cc8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646ccb: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646cce: jge 0x646cd8 */ if ((fS==fO)) goto L_00646cd8;
L_00646cd0:; BB(0x00646cd0);
    /* 00646cd0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646cd3: jmp 0x646c10 */ goto L_00646c10;
L_00646cd8:; BB(0x00646cd8);
    /* 00646cd8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x646cddu); f_0082da80();
    /* 00646cdd: mov ecx, dword ptr [0xaab3f0] */ r_ecx = R32((u32)(0xaab3f0u));
    /* 00646ce3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646ce5: je 0x646d07 */ if (fZ) goto L_00646d07;
L_00646ce7:; BB(0x00646ce7);
    /* 00646ce7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646cea: add eax, 0x90 */ {  u32 a = r_eax; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646cef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646cf0: call 0x7a7b80 */ r_esp -= 4; W32(r_esp, 0x646cf5u); f_007a7b80();
    /* 00646cf5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646cf8: mov dword ptr [eax + 0x250], 1 */ W32((u32)(r_eax+0x250u), 0x1u);
    /* 00646d02: jmp 0x6469ca */ goto L_006469ca;
L_00646d07:; BB(0x00646d07);
    /* 00646d07: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646d0a: jmp 0x6469ca */ goto L_006469ca;
}

void f_00646c25(void)
{
    FN_ENTER(0x00646c25);
    goto L_00646c25;
L_006469ca:; BB(0x006469ca);
    /* 006469ca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006469cd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006469d0: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006469d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006469d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006469dd: mov esp, ebp */ r_esp = r_ebp;
    /* 006469df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006469e0: ret 8 */ FN_RET(0x00646c25); r_esp += 12; return;
L_00646c10:; BB(0x00646c10);
    /* 00646c10: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00646c17: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00646c19: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00646c20: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00646c25:; BB(0x00646c25);
    /* 00646c25: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00646c27:; BB(0x00646c27);
    /* 00646c27: movzx eax, word ptr [edi + ebx*2] */ r_eax = (u32)R16((u32)(r_edi+r_ebx*2));
    /* 00646c2b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646c2d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646c2f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00646c32: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646c34: lea edx, [ecx + edx + 0x1d8] */ r_edx = (u32)(r_ecx+r_edx+0x1d8u);
    /* 00646c3b: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00646c3e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x646c43u); f_0082ebac();
    /* 00646c43: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00646c46: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646c49: jge 0x646c50 */ if ((fS==fO)) goto L_00646c50;
L_00646c4b:; BB(0x00646c4b);
    /* 00646c4b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646c4e: jmp 0x646c27 */ goto L_00646c27;
L_00646c50:; BB(0x00646c50);
    /* 00646c50: fld dword ptr [0x935a3c] */ FPUSH(R_F32((u32)(0x935a3cu)));
    /* 00646c56: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00646c59: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00646c5b: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 00646c5e: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00646c61: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646c64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646c66: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00646c68: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00646c6a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00646c6c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646c6e: fst dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0));
    /* 00646c71: fst dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0));
    /* 00646c74: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00646c76: fst dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0));
    /* 00646c79: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646c7b: fst dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 00646c7e: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 00646c81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646c83: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00646c86: fst dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0));
    /* 00646c89: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646c8b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646c8d: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646c90: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646c92: fld dword ptr [edx + ecx + 0x1d8] */ FPUSH(R_F32((u32)(r_edx+r_ecx+0x1d8u)));
    /* 00646c99: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00646c9b: fld dword ptr [edx + ecx + 0x1e0] */ FPUSH(R_F32((u32)(r_edx+r_ecx+0x1e0u)));
    /* 00646ca2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00646ca4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00646ca6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646ca8: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00646caa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00646cac: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00646cae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00646cb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00646cb1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00646cb4: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x646cb9u); f_0082dc9c();
    /* 00646cb9: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 00646cbc: mov eax, 0xde0 */ r_eax = 0xde0u;
    /* 00646cc1: mov word ptr [edi + 6], ax */ W16((u32)(r_edi+0x6u), (u16)r_eax);
    /* 00646cc5: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00646cc8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646ccb: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646cce: jge 0x646cd8 */ if ((fS==fO)) goto L_00646cd8;
L_00646cd0:; BB(0x00646cd0);
    /* 00646cd0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646cd3: jmp 0x646c10 */ goto L_00646c10;
L_00646cd8:; BB(0x00646cd8);
    /* 00646cd8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x646cddu); f_0082da80();
    /* 00646cdd: mov ecx, dword ptr [0xaab3f0] */ r_ecx = R32((u32)(0xaab3f0u));
    /* 00646ce3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646ce5: je 0x646d07 */ if (fZ) goto L_00646d07;
L_00646ce7:; BB(0x00646ce7);
    /* 00646ce7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646cea: add eax, 0x90 */ {  u32 a = r_eax; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646cef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646cf0: call 0x7a7b80 */ r_esp -= 4; W32(r_esp, 0x646cf5u); f_007a7b80();
    /* 00646cf5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646cf8: mov dword ptr [eax + 0x250], 1 */ W32((u32)(r_eax+0x250u), 0x1u);
    /* 00646d02: jmp 0x6469ca */ goto L_006469ca;
L_00646d07:; BB(0x00646d07);
    /* 00646d07: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00646d0a: jmp 0x6469ca */ goto L_006469ca;
}

void f_00646d10(void) /* sub_646D10 */
{
    FN_ENTER(0x00646d10);
    /* 00646d10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00646d11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00646d13: call 0x520d9c */ r_esp -= 4; W32(r_esp, 0x646d18u); f_00520d9c();
    /* 00646d18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646d1a: jne 0x646d1e */ if (!fZ) goto L_00646d1e;
L_00646d1c:; BB(0x00646d1c);
    /* 00646d1c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00646d1d: ret  */ FN_RET(0x00646d10); r_esp += 4; return;
L_00646d1e:; BB(0x00646d1e);
    /* 00646d1e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00646d20: call 0x646d28 */ r_esp -= 4; W32(r_esp, 0x646d25u); f_00646d28();
    /* 00646d25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00646d26: ret  */ FN_RET(0x00646d10); r_esp += 4; return;
}

void f_00646d28(void) /* sub_646D28 */
{
    FN_ENTER(0x00646d28);
    /* 00646d28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00646d29: mov edi, ecx */ r_edi = r_ecx;
    /* 00646d2b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00646d2d: mov ecx, edi */ r_ecx = r_edi;
    /* 00646d2f: push 0x428c0000 */ { u32 v = 0x428c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00646d34: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00646d39: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x646d3cu); call_ind(t); }
    /* 00646d3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00646d3e: jne 0x646d42 */ if (!fZ) goto L_00646d42;
L_00646d40:; BB(0x00646d40);
    /* 00646d40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00646d41: ret  */ FN_RET(0x00646d28); r_esp += 4; return;
L_00646d42:; BB(0x00646d42);
    /* 00646d42: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 00646d48: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x646d4du); f_00829cc8();
    /* 00646d4d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x646d52u); f_0082d7b0();
    /* 00646d52: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00646d55: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x646d5au); f_0082d838();
    /* 00646d5a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00646d5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646d5f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x646d64u); f_0082d8bc();
    /* 00646d64: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00646d66: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x646d6bu); f_00645ae8();
    /* 00646d6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00646d6c: mov ecx, eax */ r_ecx = r_eax;
    /* 00646d6e: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x646d73u); f_00831758();
    /* 00646d73: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x646d78u); f_0082da80();
    /* 00646d78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00646d79: ret  */ FN_RET(0x00646d28); r_esp += 4; return;
}

void f_00646d7c(void) /* sub_646D7C */
{
    FN_ENTER(0x00646d7c);
    /* 00646d7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00646d7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646d7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646d7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00646d80: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646d83: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00646d85: call 0x520d9c */ r_esp -= 4; W32(r_esp, 0x646d8au); f_00520d9c();
    /* 00646d8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646d8c: je 0x6470a2 */ if (fZ) goto L_006470a2;
L_00646d92:; BB(0x00646d92);
    /* 00646d92: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00646d95: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00646d98: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
    /* 00646d9b: mov dword ptr [ebp + 0x94], eax */ W32((u32)(r_ebp+0x94u), r_eax);
    /* 00646da1: mov dword ptr [ebp + 0x98], edx */ W32((u32)(r_ebp+0x98u), r_edx);
    /* 00646da7: mov dword ptr [ebp + 0x9c], edi */ W32((u32)(r_ebp+0x9cu), r_edi);
    /* 00646dad: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x646db2u); f_0082d7b0();
    /* 00646db2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646db4: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x646db9u); f_00830cd8();
    /* 00646db9: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00646dbc: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x646dc1u); f_0082d838();
    /* 00646dc1: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00646dc4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646dc6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x646dcbu); f_0082d8bc();
    /* 00646dcb: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00646dcf: lea edi, [ebp + 0xb8] */ r_edi = (u32)(r_ebp+0xb8u);
    /* 00646dd5: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00646dd9: mov edx, edi */ r_edx = r_edi;
    /* 00646ddb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00646ddd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ddf: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00646de3: mov edi, eax */ r_edi = r_eax;
    /* 00646de5: mov esi, edx */ r_esi = r_edx;
L_00646de7:; BB(0x00646de7);
    /* 00646de7: lea ebp, [edi + 1] */ r_ebp = (u32)(r_edi+0x1u);
    /* 00646dea: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 00646ded: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00646df0: movzx ebp, di */ r_ebp = (u32)(u16)r_edi;
    /* 00646df3: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 00646df7: lea ebx, [edi + 3] */ r_ebx = (u32)(r_edi+0x3u);
    /* 00646dfa: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 00646dfd: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00646e01: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e04: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e06: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e0d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00646e10: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e13: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e18: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e1f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00646e23: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e26: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e29: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e2b: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e32: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00646e36: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e3a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e3d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e3f: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e46: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646e4a: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e4e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e51: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e53: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e5a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646e5e: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e62: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e65: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e67: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e6e: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646e72: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e76: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e79: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e7b: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e82: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646e86: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e8a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e8f: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e96: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646e9a: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e9e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646ea1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ea3: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646eaa: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646eae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00646eb1: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00646eb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb6: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646ebbu); f_007a9618();
    /* 00646ebb: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 00646ebe: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00646ec2: mov word ptr [esi + 0x24], bx */ W16((u32)(r_esi+0x24u), (u16)r_ebx);
    /* 00646ec6: mov word ptr [esi + 0x26], bp */ W16((u32)(r_esi+0x26u), (u16)r_ebp);
    /* 00646eca: lea ebp, [edi + 2] */ r_ebp = (u32)(r_edi+0x2u);
    /* 00646ecd: mov word ptr [esi + 0x28], bp */ W16((u32)(r_esi+0x28u), (u16)r_ebp);
    /* 00646ed1: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ed4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ed6: mov ebx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646edd: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00646ee1: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ee5: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ee8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646eea: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646ef1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646ef5: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ef9: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646efc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646efe: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f05: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646f09: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f0d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f10: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f12: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f19: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646f1d: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f21: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f24: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f26: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f2d: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646f31: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f35: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f38: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f3a: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f41: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646f45: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f49: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f4c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f4e: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f55: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646f59: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f5d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f60: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f62: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f69: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00646f6d: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f71: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f74: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f76: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646f79: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f80: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00646f84: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00646f88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646f89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646f8a: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646f8fu); f_007a9618();
    /* 00646f8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00646f92: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00646f96: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00646f9a: lea esi, [esi + 0x24] */ r_esi = (u32)(r_esi+0x24u);
    /* 00646f9d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00646fa0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fa3: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646fa6: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00646faa: jl 0x646de7 */ if ((fS!=fO)) goto L_00646de7;
L_00646fb0:; BB(0x00646fb0);
    /* 00646fb0: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00646fb4: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00646fb8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00646fba: lea eax, [ebp + 0x1d8] */ r_eax = (u32)(r_ebp+0x1d8u);
    /* 00646fc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646fc3: mov edx, 0x935980 */ r_edx = 0x935980u;
    /* 00646fc8: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x646fcdu); f_0082f940();
    /* 00646fcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00646fcf: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00646fd1: mov ebp, eax */ r_ebp = r_eax;
L_00646fd3:; BB(0x00646fd3);
    /* 00646fd3: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00646fdb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00646fdd: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 00646fe5: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
L_00646fed:; BB(0x00646fed);
    /* 00646fed: movzx edx, word ptr [edi + esi*2] */ r_edx = (u32)R16((u32)(r_edi+r_esi*2));
    /* 00646ff1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00646ff8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ffa: lea edx, [ebx + ecx + 0x1d8] */ r_edx = (u32)(r_ebx+r_ecx+0x1d8u);
    /* 00647001: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00647005: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x64700au); f_0082ebac();
    /* 0064700a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064700d: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647010: jl 0x646fed */ if ((fS!=fO)) goto L_00646fed;
L_00647012:; BB(0x00647012);
    /* 00647012: fld dword ptr [0x935a28] */ FPUSH(R_F32((u32)(0x935a28u)));
    /* 00647018: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0064701c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0064701e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00647022: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00647026: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647028: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0064702a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0064702c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0064702e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647030: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00647034: fst dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0));
    /* 00647037: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647039: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0064703d: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00647040: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00647044: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 00647047: fst dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0));
    /* 0064704a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00647051: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00647053: fld dword ptr [ebx + ecx + 0x1d8] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1d8u)));
    /* 0064705a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0064705c: fld dword ptr [ebx + ecx + 0x1e0] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1e0u)));
    /* 00647063: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647065: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00647067: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647069: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0064706b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064706d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064706f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00647071: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00647072: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00647075: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x64707au); f_0082dc9c();
    /* 0064707a: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0064707d: mov edx, 0xde0 */ r_edx = 0xde0u;
    /* 00647082: mov word ptr [edi + 6], dx */ W16((u32)(r_edi+0x6u), (u16)r_edx);
    /* 00647086: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00647089: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0064708c: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064708f: jl 0x646fd3 */ if ((fS!=fO)) goto L_00646fd3;
L_00647095:; BB(0x00647095);
    /* 00647095: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64709au); f_0082da80();
    /* 0064709a: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064709d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064709e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064709f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006470a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006470a1: ret  */ FN_RET(0x00646d7c); r_esp += 4; return;
L_006470a2:; BB(0x006470a2);
    /* 006470a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006470a4: call 0x646d28 */ r_esp -= 4; W32(r_esp, 0x6470a9u); f_00646d28();
    /* 006470a9: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006470ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006470ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006470ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006470af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006470b0: ret  */ FN_RET(0x00646d7c); r_esp += 4; return;
}

void f_00646e3e(void)
{
    FN_ENTER(0x00646e3e);
    goto L_00646e3e;
L_00646de7:; BB(0x00646de7);
    /* 00646de7: lea ebp, [edi + 1] */ r_ebp = (u32)(r_edi+0x1u);
    /* 00646dea: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 00646ded: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00646df0: movzx ebp, di */ r_ebp = (u32)(u16)r_edi;
    /* 00646df3: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 00646df7: lea ebx, [edi + 3] */ r_ebx = (u32)(r_edi+0x3u);
    /* 00646dfa: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 00646dfd: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00646e01: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e04: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e06: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e0d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00646e10: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e13: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e18: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e1f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00646e23: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e26: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e29: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e2b: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e32: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00646e36: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e3a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e3d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00646e3e:; BB(0x00646e3e);
    /* 00646e3e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00646e3f: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e46: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646e4a: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e4e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e51: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e53: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e5a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646e5e: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e62: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e65: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e67: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e6e: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646e72: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e76: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e79: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e7b: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e82: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646e86: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e8a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e8f: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e96: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646e9a: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e9e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646ea1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ea3: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646eaa: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646eae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00646eb1: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00646eb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb6: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646ebbu); f_007a9618();
    /* 00646ebb: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 00646ebe: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00646ec2: mov word ptr [esi + 0x24], bx */ W16((u32)(r_esi+0x24u), (u16)r_ebx);
    /* 00646ec6: mov word ptr [esi + 0x26], bp */ W16((u32)(r_esi+0x26u), (u16)r_ebp);
    /* 00646eca: lea ebp, [edi + 2] */ r_ebp = (u32)(r_edi+0x2u);
    /* 00646ecd: mov word ptr [esi + 0x28], bp */ W16((u32)(r_esi+0x28u), (u16)r_ebp);
    /* 00646ed1: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ed4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ed6: mov ebx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646edd: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00646ee1: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ee5: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ee8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646eea: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646ef1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646ef5: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ef9: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646efc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646efe: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f05: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646f09: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f0d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f10: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f12: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f19: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646f1d: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f21: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f24: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f26: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f2d: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646f31: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f35: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f38: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f3a: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f41: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646f45: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f49: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f4c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f4e: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f55: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646f59: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f5d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f60: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f62: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f69: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00646f6d: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f71: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f74: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f76: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646f79: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f80: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00646f84: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00646f88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646f89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646f8a: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646f8fu); f_007a9618();
    /* 00646f8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00646f92: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00646f96: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00646f9a: lea esi, [esi + 0x24] */ r_esi = (u32)(r_esi+0x24u);
    /* 00646f9d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00646fa0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fa3: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646fa6: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00646faa: jl 0x646de7 */ if ((fS!=fO)) goto L_00646de7;
L_00646fb0:; BB(0x00646fb0);
    /* 00646fb0: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00646fb4: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00646fb8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00646fba: lea eax, [ebp + 0x1d8] */ r_eax = (u32)(r_ebp+0x1d8u);
    /* 00646fc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646fc3: mov edx, 0x935980 */ r_edx = 0x935980u;
    /* 00646fc8: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x646fcdu); f_0082f940();
    /* 00646fcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00646fcf: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00646fd1: mov ebp, eax */ r_ebp = r_eax;
L_00646fd3:; BB(0x00646fd3);
    /* 00646fd3: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00646fdb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00646fdd: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 00646fe5: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
L_00646fed:; BB(0x00646fed);
    /* 00646fed: movzx edx, word ptr [edi + esi*2] */ r_edx = (u32)R16((u32)(r_edi+r_esi*2));
    /* 00646ff1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00646ff8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ffa: lea edx, [ebx + ecx + 0x1d8] */ r_edx = (u32)(r_ebx+r_ecx+0x1d8u);
    /* 00647001: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00647005: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x64700au); f_0082ebac();
    /* 0064700a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064700d: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647010: jl 0x646fed */ if ((fS!=fO)) goto L_00646fed;
L_00647012:; BB(0x00647012);
    /* 00647012: fld dword ptr [0x935a28] */ FPUSH(R_F32((u32)(0x935a28u)));
    /* 00647018: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0064701c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0064701e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00647022: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00647026: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647028: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0064702a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0064702c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0064702e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647030: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00647034: fst dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0));
    /* 00647037: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647039: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0064703d: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00647040: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00647044: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 00647047: fst dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0));
    /* 0064704a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00647051: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00647053: fld dword ptr [ebx + ecx + 0x1d8] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1d8u)));
    /* 0064705a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0064705c: fld dword ptr [ebx + ecx + 0x1e0] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1e0u)));
    /* 00647063: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647065: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00647067: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647069: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0064706b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064706d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064706f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00647071: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00647072: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00647075: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x64707au); f_0082dc9c();
    /* 0064707a: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0064707d: mov edx, 0xde0 */ r_edx = 0xde0u;
    /* 00647082: mov word ptr [edi + 6], dx */ W16((u32)(r_edi+0x6u), (u16)r_edx);
    /* 00647086: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00647089: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0064708c: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064708f: jl 0x646fd3 */ if ((fS!=fO)) goto L_00646fd3;
L_00647095:; BB(0x00647095);
    /* 00647095: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64709au); f_0082da80();
    /* 0064709a: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064709d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064709e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064709f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006470a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006470a1: ret  */ FN_RET(0x00646e3e); r_esp += 4; return;
}

void f_00646e61(void)
{
    FN_ENTER(0x00646e61);
    goto L_00646e61;
L_00646de7:; BB(0x00646de7);
    /* 00646de7: lea ebp, [edi + 1] */ r_ebp = (u32)(r_edi+0x1u);
    /* 00646dea: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 00646ded: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00646df0: movzx ebp, di */ r_ebp = (u32)(u16)r_edi;
    /* 00646df3: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 00646df7: lea ebx, [edi + 3] */ r_ebx = (u32)(r_edi+0x3u);
    /* 00646dfa: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 00646dfd: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00646e01: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e04: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e06: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e0d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00646e10: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e13: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e18: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e1f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00646e23: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e26: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e29: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e2b: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e32: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00646e36: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e3a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e3d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e3f: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e46: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646e4a: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e4e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e51: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e53: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e5a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646e5e: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
L_00646e61:; BB(0x00646e61);
    /* 00646e61: add cl, byte ptr [ebp - 0x36fcfff4] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_ebp+0xc903000cu)); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00646e62: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e65: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e67: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e6e: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646e72: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e76: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e79: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e7b: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e82: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646e86: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e8a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e8f: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e96: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646e9a: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e9e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646ea1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ea3: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646eaa: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646eae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00646eb1: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00646eb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb6: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646ebbu); f_007a9618();
    /* 00646ebb: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 00646ebe: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00646ec2: mov word ptr [esi + 0x24], bx */ W16((u32)(r_esi+0x24u), (u16)r_ebx);
    /* 00646ec6: mov word ptr [esi + 0x26], bp */ W16((u32)(r_esi+0x26u), (u16)r_ebp);
    /* 00646eca: lea ebp, [edi + 2] */ r_ebp = (u32)(r_edi+0x2u);
    /* 00646ecd: mov word ptr [esi + 0x28], bp */ W16((u32)(r_esi+0x28u), (u16)r_ebp);
    /* 00646ed1: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ed4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ed6: mov ebx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646edd: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00646ee1: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ee5: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ee8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646eea: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646ef1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646ef5: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ef9: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646efc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646efe: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f05: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646f09: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f0d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f10: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f12: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f19: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646f1d: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f21: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f24: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f26: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f2d: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646f31: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f35: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f38: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f3a: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f41: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646f45: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f49: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f4c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f4e: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f55: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646f59: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f5d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f60: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f62: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f69: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00646f6d: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f71: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f74: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f76: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646f79: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f80: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00646f84: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00646f88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646f89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646f8a: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646f8fu); f_007a9618();
    /* 00646f8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00646f92: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00646f96: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00646f9a: lea esi, [esi + 0x24] */ r_esi = (u32)(r_esi+0x24u);
    /* 00646f9d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00646fa0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fa3: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646fa6: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00646faa: jl 0x646de7 */ if ((fS!=fO)) goto L_00646de7;
L_00646fb0:; BB(0x00646fb0);
    /* 00646fb0: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00646fb4: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00646fb8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00646fba: lea eax, [ebp + 0x1d8] */ r_eax = (u32)(r_ebp+0x1d8u);
    /* 00646fc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646fc3: mov edx, 0x935980 */ r_edx = 0x935980u;
    /* 00646fc8: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x646fcdu); f_0082f940();
    /* 00646fcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00646fcf: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00646fd1: mov ebp, eax */ r_ebp = r_eax;
L_00646fd3:; BB(0x00646fd3);
    /* 00646fd3: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00646fdb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00646fdd: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 00646fe5: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
L_00646fed:; BB(0x00646fed);
    /* 00646fed: movzx edx, word ptr [edi + esi*2] */ r_edx = (u32)R16((u32)(r_edi+r_esi*2));
    /* 00646ff1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00646ff8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ffa: lea edx, [ebx + ecx + 0x1d8] */ r_edx = (u32)(r_ebx+r_ecx+0x1d8u);
    /* 00647001: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00647005: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x64700au); f_0082ebac();
    /* 0064700a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064700d: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647010: jl 0x646fed */ if ((fS!=fO)) goto L_00646fed;
L_00647012:; BB(0x00647012);
    /* 00647012: fld dword ptr [0x935a28] */ FPUSH(R_F32((u32)(0x935a28u)));
    /* 00647018: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0064701c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0064701e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00647022: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00647026: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647028: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0064702a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0064702c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0064702e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647030: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00647034: fst dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0));
    /* 00647037: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647039: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0064703d: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00647040: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00647044: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 00647047: fst dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0));
    /* 0064704a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00647051: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00647053: fld dword ptr [ebx + ecx + 0x1d8] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1d8u)));
    /* 0064705a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0064705c: fld dword ptr [ebx + ecx + 0x1e0] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1e0u)));
    /* 00647063: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647065: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00647067: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647069: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0064706b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064706d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064706f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00647071: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00647072: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00647075: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x64707au); f_0082dc9c();
    /* 0064707a: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0064707d: mov edx, 0xde0 */ r_edx = 0xde0u;
    /* 00647082: mov word ptr [edi + 6], dx */ W16((u32)(r_edi+0x6u), (u16)r_edx);
    /* 00647086: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00647089: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0064708c: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064708f: jl 0x646fd3 */ if ((fS!=fO)) goto L_00646fd3;
L_00647095:; BB(0x00647095);
    /* 00647095: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64709au); f_0082da80();
    /* 0064709a: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064709d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064709e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064709f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006470a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006470a1: ret  */ FN_RET(0x00646e61); r_esp += 4; return;
}

void f_00646e63(void)
{
    FN_ENTER(0x00646e63);
    goto L_00646e63;
L_00646de7:; BB(0x00646de7);
    /* 00646de7: lea ebp, [edi + 1] */ r_ebp = (u32)(r_edi+0x1u);
    /* 00646dea: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 00646ded: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00646df0: movzx ebp, di */ r_ebp = (u32)(u16)r_edi;
    /* 00646df3: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 00646df7: lea ebx, [edi + 3] */ r_ebx = (u32)(r_edi+0x3u);
    /* 00646dfa: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 00646dfd: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00646e01: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e04: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e06: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e0d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00646e10: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e13: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e18: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e1f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00646e23: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e26: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e29: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e2b: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e32: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00646e36: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e3a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e3d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e3f: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e46: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646e4a: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e4e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e51: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e53: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e5a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646e5e: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e62: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
L_00646e63:; BB(0x00646e63);
    /* 00646e63: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00646e65: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e67: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e6e: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646e72: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e76: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e79: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e7b: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e82: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646e86: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e8a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e8f: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e96: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646e9a: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e9e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646ea1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ea3: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646eaa: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646eae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00646eb1: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00646eb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb6: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646ebbu); f_007a9618();
    /* 00646ebb: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 00646ebe: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00646ec2: mov word ptr [esi + 0x24], bx */ W16((u32)(r_esi+0x24u), (u16)r_ebx);
    /* 00646ec6: mov word ptr [esi + 0x26], bp */ W16((u32)(r_esi+0x26u), (u16)r_ebp);
    /* 00646eca: lea ebp, [edi + 2] */ r_ebp = (u32)(r_edi+0x2u);
    /* 00646ecd: mov word ptr [esi + 0x28], bp */ W16((u32)(r_esi+0x28u), (u16)r_ebp);
    /* 00646ed1: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ed4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ed6: mov ebx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646edd: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00646ee1: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ee5: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ee8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646eea: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646ef1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646ef5: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ef9: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646efc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646efe: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f05: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646f09: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f0d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f10: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f12: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f19: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646f1d: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f21: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f24: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f26: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f2d: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646f31: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f35: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f38: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f3a: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f41: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646f45: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f49: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f4c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f4e: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f55: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646f59: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f5d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f60: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f62: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f69: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00646f6d: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f71: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f74: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f76: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646f79: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f80: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00646f84: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00646f88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646f89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646f8a: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646f8fu); f_007a9618();
    /* 00646f8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00646f92: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00646f96: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00646f9a: lea esi, [esi + 0x24] */ r_esi = (u32)(r_esi+0x24u);
    /* 00646f9d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00646fa0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fa3: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646fa6: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00646faa: jl 0x646de7 */ if ((fS!=fO)) goto L_00646de7;
L_00646fb0:; BB(0x00646fb0);
    /* 00646fb0: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00646fb4: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00646fb8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00646fba: lea eax, [ebp + 0x1d8] */ r_eax = (u32)(r_ebp+0x1d8u);
    /* 00646fc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646fc3: mov edx, 0x935980 */ r_edx = 0x935980u;
    /* 00646fc8: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x646fcdu); f_0082f940();
    /* 00646fcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00646fcf: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00646fd1: mov ebp, eax */ r_ebp = r_eax;
L_00646fd3:; BB(0x00646fd3);
    /* 00646fd3: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00646fdb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00646fdd: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 00646fe5: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
L_00646fed:; BB(0x00646fed);
    /* 00646fed: movzx edx, word ptr [edi + esi*2] */ r_edx = (u32)R16((u32)(r_edi+r_esi*2));
    /* 00646ff1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00646ff8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ffa: lea edx, [ebx + ecx + 0x1d8] */ r_edx = (u32)(r_ebx+r_ecx+0x1d8u);
    /* 00647001: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00647005: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x64700au); f_0082ebac();
    /* 0064700a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064700d: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647010: jl 0x646fed */ if ((fS!=fO)) goto L_00646fed;
L_00647012:; BB(0x00647012);
    /* 00647012: fld dword ptr [0x935a28] */ FPUSH(R_F32((u32)(0x935a28u)));
    /* 00647018: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0064701c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0064701e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00647022: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00647026: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647028: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0064702a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0064702c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0064702e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647030: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00647034: fst dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0));
    /* 00647037: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647039: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0064703d: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00647040: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00647044: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 00647047: fst dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0));
    /* 0064704a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00647051: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00647053: fld dword ptr [ebx + ecx + 0x1d8] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1d8u)));
    /* 0064705a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0064705c: fld dword ptr [ebx + ecx + 0x1e0] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1e0u)));
    /* 00647063: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647065: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00647067: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647069: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0064706b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064706d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064706f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00647071: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00647072: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00647075: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x64707au); f_0082dc9c();
    /* 0064707a: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0064707d: mov edx, 0xde0 */ r_edx = 0xde0u;
    /* 00647082: mov word ptr [edi + 6], dx */ W16((u32)(r_edi+0x6u), (u16)r_edx);
    /* 00647086: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00647089: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0064708c: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064708f: jl 0x646fd3 */ if ((fS!=fO)) goto L_00646fd3;
L_00647095:; BB(0x00647095);
    /* 00647095: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64709au); f_0082da80();
    /* 0064709a: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064709d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064709e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064709f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006470a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006470a1: ret  */ FN_RET(0x00646e63); r_esp += 4; return;
}

void f_00646e65(void)
{
    FN_ENTER(0x00646e65);
    goto L_00646e65;
L_00646de7:; BB(0x00646de7);
    /* 00646de7: lea ebp, [edi + 1] */ r_ebp = (u32)(r_edi+0x1u);
    /* 00646dea: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 00646ded: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00646df0: movzx ebp, di */ r_ebp = (u32)(u16)r_edi;
    /* 00646df3: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 00646df7: lea ebx, [edi + 3] */ r_ebx = (u32)(r_edi+0x3u);
    /* 00646dfa: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 00646dfd: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00646e01: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e04: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e06: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e0d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00646e10: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e13: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e18: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e1f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00646e23: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e26: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e29: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e2b: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e32: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00646e36: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e3a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e3d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e3f: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e46: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646e4a: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e4e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e51: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e53: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e5a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646e5e: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e62: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
L_00646e65:; BB(0x00646e65);
    /* 00646e65: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e67: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e6e: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646e72: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e76: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e79: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e7b: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e82: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646e86: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e8a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e8f: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e96: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646e9a: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e9e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646ea1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ea3: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646eaa: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646eae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00646eb1: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00646eb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb6: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646ebbu); f_007a9618();
    /* 00646ebb: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 00646ebe: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00646ec2: mov word ptr [esi + 0x24], bx */ W16((u32)(r_esi+0x24u), (u16)r_ebx);
    /* 00646ec6: mov word ptr [esi + 0x26], bp */ W16((u32)(r_esi+0x26u), (u16)r_ebp);
    /* 00646eca: lea ebp, [edi + 2] */ r_ebp = (u32)(r_edi+0x2u);
    /* 00646ecd: mov word ptr [esi + 0x28], bp */ W16((u32)(r_esi+0x28u), (u16)r_ebp);
    /* 00646ed1: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ed4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ed6: mov ebx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646edd: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00646ee1: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ee5: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ee8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646eea: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646ef1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646ef5: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ef9: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646efc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646efe: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f05: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646f09: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f0d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f10: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f12: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f19: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646f1d: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f21: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f24: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f26: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f2d: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646f31: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f35: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f38: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f3a: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f41: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646f45: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f49: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f4c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f4e: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f55: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646f59: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f5d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f60: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f62: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f69: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00646f6d: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f71: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f74: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f76: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646f79: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f80: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00646f84: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00646f88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646f89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646f8a: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646f8fu); f_007a9618();
    /* 00646f8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00646f92: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00646f96: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00646f9a: lea esi, [esi + 0x24] */ r_esi = (u32)(r_esi+0x24u);
    /* 00646f9d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00646fa0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fa3: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646fa6: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00646faa: jl 0x646de7 */ if ((fS!=fO)) goto L_00646de7;
L_00646fb0:; BB(0x00646fb0);
    /* 00646fb0: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00646fb4: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00646fb8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00646fba: lea eax, [ebp + 0x1d8] */ r_eax = (u32)(r_ebp+0x1d8u);
    /* 00646fc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646fc3: mov edx, 0x935980 */ r_edx = 0x935980u;
    /* 00646fc8: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x646fcdu); f_0082f940();
    /* 00646fcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00646fcf: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00646fd1: mov ebp, eax */ r_ebp = r_eax;
L_00646fd3:; BB(0x00646fd3);
    /* 00646fd3: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00646fdb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00646fdd: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 00646fe5: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
L_00646fed:; BB(0x00646fed);
    /* 00646fed: movzx edx, word ptr [edi + esi*2] */ r_edx = (u32)R16((u32)(r_edi+r_esi*2));
    /* 00646ff1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00646ff8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ffa: lea edx, [ebx + ecx + 0x1d8] */ r_edx = (u32)(r_ebx+r_ecx+0x1d8u);
    /* 00647001: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00647005: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x64700au); f_0082ebac();
    /* 0064700a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064700d: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647010: jl 0x646fed */ if ((fS!=fO)) goto L_00646fed;
L_00647012:; BB(0x00647012);
    /* 00647012: fld dword ptr [0x935a28] */ FPUSH(R_F32((u32)(0x935a28u)));
    /* 00647018: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0064701c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0064701e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00647022: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00647026: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647028: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0064702a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0064702c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0064702e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647030: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00647034: fst dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0));
    /* 00647037: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647039: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0064703d: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00647040: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00647044: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 00647047: fst dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0));
    /* 0064704a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00647051: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00647053: fld dword ptr [ebx + ecx + 0x1d8] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1d8u)));
    /* 0064705a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0064705c: fld dword ptr [ebx + ecx + 0x1e0] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1e0u)));
    /* 00647063: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647065: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00647067: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647069: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0064706b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064706d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064706f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00647071: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00647072: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00647075: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x64707au); f_0082dc9c();
    /* 0064707a: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0064707d: mov edx, 0xde0 */ r_edx = 0xde0u;
    /* 00647082: mov word ptr [edi + 6], dx */ W16((u32)(r_edi+0x6u), (u16)r_edx);
    /* 00647086: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00647089: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0064708c: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064708f: jl 0x646fd3 */ if ((fS!=fO)) goto L_00646fd3;
L_00647095:; BB(0x00647095);
    /* 00647095: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64709au); f_0082da80();
    /* 0064709a: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064709d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064709e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064709f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006470a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006470a1: ret  */ FN_RET(0x00646e65); r_esp += 4; return;
}

void f_00646e69(void)
{
    FN_ENTER(0x00646e69);
    goto L_00646e69;
L_00646de7:; BB(0x00646de7);
    /* 00646de7: lea ebp, [edi + 1] */ r_ebp = (u32)(r_edi+0x1u);
    /* 00646dea: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 00646ded: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00646df0: movzx ebp, di */ r_ebp = (u32)(u16)r_edi;
    /* 00646df3: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 00646df7: lea ebx, [edi + 3] */ r_ebx = (u32)(r_edi+0x3u);
    /* 00646dfa: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 00646dfd: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00646e01: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e04: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e06: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e0d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00646e10: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e13: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e18: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e1f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00646e23: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00646e26: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e29: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e2b: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646e32: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00646e36: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e3a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e3d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e3f: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e46: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646e4a: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e4e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e51: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e53: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e5a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646e5e: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00646e62: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e65: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e67: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
L_00646e69:; BB(0x00646e69);
    /* 00646e69: ror dword ptr [eax - 0x76ff6ca7], 0x4c */ { u32 ad = (u32)(r_eax+0x89009359u); u32 c = (12u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a >> k) | (a << (32 - k))) & 0xffffffffu) : a; } W32(ad, r);  } }
    /* 00646e6e: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646e70: and al, 0x14 */ {  u32 a = (u8)r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00646e72: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e76: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e79: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e7b: mov ecx, dword ptr [ecx + eax*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935980u));
    /* 00646e82: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646e86: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e8a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646e8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646e8f: mov ecx, dword ptr [ecx + eax*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935984u));
    /* 00646e96: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646e9a: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00646e9e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00646ea1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ea3: mov ecx, dword ptr [ecx + eax*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x935988u));
    /* 00646eaa: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646eae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00646eb1: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00646eb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646eb6: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646ebbu); f_007a9618();
    /* 00646ebb: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 00646ebe: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00646ec2: mov word ptr [esi + 0x24], bx */ W16((u32)(r_esi+0x24u), (u16)r_ebx);
    /* 00646ec6: mov word ptr [esi + 0x26], bp */ W16((u32)(r_esi+0x26u), (u16)r_ebp);
    /* 00646eca: lea ebp, [edi + 2] */ r_ebp = (u32)(r_edi+0x2u);
    /* 00646ecd: mov word ptr [esi + 0x28], bp */ W16((u32)(r_esi+0x28u), (u16)r_ebp);
    /* 00646ed1: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ed4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ed6: mov ebx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ebx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646edd: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00646ee1: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ee5: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646ee8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646eea: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646ef1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00646ef5: movzx ebx, word ptr [esi + 0x24] */ r_ebx = (u32)R16((u32)(r_esi+0x24u));
    /* 00646ef9: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646efc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646efe: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f05: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00646f09: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f0d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f10: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f12: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f19: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00646f1d: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f21: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f24: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f26: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f2d: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00646f31: movzx ebx, word ptr [esi + 0x26] */ r_ebx = (u32)R16((u32)(r_esi+0x26u));
    /* 00646f35: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f38: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f3a: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f41: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00646f45: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f49: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f4c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f4e: mov ecx, dword ptr [ecx + ebx*8 + 0x935980] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935980u));
    /* 00646f55: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00646f59: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f5d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f60: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f62: mov ecx, dword ptr [ecx + ebx*8 + 0x935984] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935984u));
    /* 00646f69: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00646f6d: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00646f71: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00646f74: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646f76: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646f79: mov ecx, dword ptr [ecx + ebx*8 + 0x935988] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x935988u));
    /* 00646f80: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00646f84: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00646f88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646f89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646f8a: call 0x7a9618 */ r_esp -= 4; W32(r_esp, 0x646f8fu); f_007a9618();
    /* 00646f8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00646f92: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00646f96: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00646f9a: lea esi, [esi + 0x24] */ r_esi = (u32)(r_esi+0x24u);
    /* 00646f9d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00646fa0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fa3: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646fa6: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00646faa: jl 0x646de7 */ if ((fS!=fO)) goto L_00646de7;
L_00646fb0:; BB(0x00646fb0);
    /* 00646fb0: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00646fb4: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00646fb8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00646fba: lea eax, [ebp + 0x1d8] */ r_eax = (u32)(r_ebp+0x1d8u);
    /* 00646fc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646fc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646fc3: mov edx, 0x935980 */ r_edx = 0x935980u;
    /* 00646fc8: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x646fcdu); f_0082f940();
    /* 00646fcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00646fcf: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00646fd1: mov ebp, eax */ r_ebp = r_eax;
L_00646fd3:; BB(0x00646fd3);
    /* 00646fd3: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00646fdb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00646fdd: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 00646fe5: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
L_00646fed:; BB(0x00646fed);
    /* 00646fed: movzx edx, word ptr [edi + esi*2] */ r_edx = (u32)R16((u32)(r_edi+r_esi*2));
    /* 00646ff1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00646ff5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00646ff8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ffa: lea edx, [ebx + ecx + 0x1d8] */ r_edx = (u32)(r_ebx+r_ecx+0x1d8u);
    /* 00647001: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00647005: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x64700au); f_0082ebac();
    /* 0064700a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064700d: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647010: jl 0x646fed */ if ((fS!=fO)) goto L_00646fed;
L_00647012:; BB(0x00647012);
    /* 00647012: fld dword ptr [0x935a28] */ FPUSH(R_F32((u32)(0x935a28u)));
    /* 00647018: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0064701c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0064701e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00647022: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00647026: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647028: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0064702a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0064702c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0064702e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647030: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00647034: fst dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0));
    /* 00647037: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647039: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0064703d: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00647040: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00647044: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 00647047: fst dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0));
    /* 0064704a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064704e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00647051: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00647053: fld dword ptr [ebx + ecx + 0x1d8] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1d8u)));
    /* 0064705a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0064705c: fld dword ptr [ebx + ecx + 0x1e0] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x1e0u)));
    /* 00647063: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00647065: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00647067: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00647069: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0064706b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064706d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064706f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00647071: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00647072: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00647075: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x64707au); f_0082dc9c();
    /* 0064707a: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0064707d: mov edx, 0xde0 */ r_edx = 0xde0u;
    /* 00647082: mov word ptr [edi + 6], dx */ W16((u32)(r_edi+0x6u), (u16)r_edx);
    /* 00647086: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00647089: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0064708c: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064708f: jl 0x646fd3 */ if ((fS!=fO)) goto L_00646fd3;
L_00647095:; BB(0x00647095);
    /* 00647095: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64709au); f_0082da80();
    /* 0064709a: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064709d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064709e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064709f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006470a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006470a1: ret  */ FN_RET(0x00646e69); r_esp += 4; return;
}

